// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14278ef84 FUN_14278ef84 body=69 status=ok
// SIG undefined FUN_14278ef84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14278ef84(void)

{
  _DAT_14c874b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278efc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c874b30,1);
  return;
}



// FUNCTION 14278efc9 FUN_14278efc9 body=91 status=ok
// SIG undefined FUN_14278efc9(void)

void FUN_14278efc9(void)

{
  if (DAT_14c874b40 != 0) {
    if (DAT_14c874b38 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c874b38)(DAT_14c874b38,0);
    FUN_1446efa72(&DAT_14c874b38,0,0,0x10);
    DAT_14c874b40 = 0;
  }
  if (DAT_14c874b38 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14278f036 FUN_14278f036 body=132 status=ok
// SIG undefined FUN_14278f036(void)

void FUN_14278f036(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xd) = 0xffffffff00000080;
  param_1[0xf] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0xffffffff00000080;
  param_1[0x23] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x35) = 0xffffffff00000080;
  param_1[0x37] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  return;
}



// FUNCTION 14278f0ba FUN_14278f0ba body=3 status=ok
// SIG undefined FUN_14278f0ba(void)

undefined4 FUN_14278f0ba(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 14278f0be FUN_14278f0be body=52 status=ok
// SIG undefined FUN_14278f0be(void)

void FUN_14278f0be(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e35ca0;
  TlsGetValue(DAT_14c874b64);
                    /* WARNING: Could not recover jumptable at 0x00014278f0eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_14c874b64,(LPVOID)param_1[2]);
  return;
}



// FUNCTION 14278f0f8 FUN_14278f0f8 body=363 status=ok
// SIG undefined FUN_14278f0f8(void)

void FUN_14278f0f8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14278f18e;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14278f18e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14278f264 FUN_14278f264 body=31 status=ok
// SIG undefined FUN_14278f264(void)

undefined8 FUN_14278f264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14278f283 FUN_14278f283 body=1688 status=ok
// SIG undefined FUN_14278f283(void)

void FUN_14278f283(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)CONCAT71(local_30._1_7_,1);
  local_38 = 0;
  FUN_140bd5914(&DAT_14c874580,L"timecode.UseDropFormatTimecodeByDefaultWhenSupported",&local_30,
                L"By default, should we generate a timecode in drop frame format when the frame rate does support it."
               );
  atexit(FUN_14278cb54);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e35db0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e35d40;
  local_30[3] = &DAT_14681f94a;
  local_38 = 0;
  FUN_14170bbaa(&DAT_14c874a28,L"LogCountedInstances",
                L"Dumps count of all tracked FInstanceCountingObject\'s",&local_30);
  if (local_28 == 0) {
LAB_14278f39e:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_14278f39e;
  }
  atexit(FUN_14278e92e);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = FUN_14681f94c;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14c874ae8,L"LoadTimes.DumpTracking",L"Dump high level load times being tracked"
                ,&local_30);
  if (local_28 == 0) {
LAB_14278f48a:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_14278f48a;
  }
  atexit(FUN_14278ee70);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = &LAB_14681f960;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14c874af8,L"LoadTimes.DumpTrackingLow",
                L"Dump low level load times being tracked",&local_30);
  if (local_28 == 0) {
LAB_14278f568:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_14278f568;
  }
  atexit(FUN_14278eeb5);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = &LAB_14681f966;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14c874b08,L"LoadTimes.ResetTracking",L"Reset load time tracking",&local_30);
  if (local_28 == 0) {
LAB_14278f646:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_14278f646;
  }
  atexit(FUN_14278eefa);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = FUN_14681f96c;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14c874b18,L"LoadTimes.StartAccumulating",
                L"Starts capturing fine-grained accumulated load time data",&local_30);
  if (local_28 == 0) {
LAB_14278f724:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_14278f724;
  }
  atexit(FUN_14278ef3f);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149e062c0;
  local_30[3] = FUN_14681f986;
  local_38 = 0;
  FUN_14152bcb8(&DAT_14c874b28,L"LoadTimes.StopAccumulating",
                L"Stops capturing fine-grained accumulated load time data and dump the results",
                &local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14278f810;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14278f810:
  atexit(FUN_14278ef84);
  DAT_14c874b38 = 0;
  DAT_14c874b40 = 0;
  atexit(FUN_14278efc9);
  DAT_14c874b64 = TlsAlloc();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14278f91c FUN_14278f91c body=59 status=ok
// SIG undefined FUN_14278f91c(void)

void FUN_14278f91c(void)

{
  FUN_144760e21(DAT_14c874c80,DAT_14c874c88);
  if (DAT_14c874c80 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278f949. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c874c58);
  return;
}



// FUNCTION 14278f957 FUN_14278f957 body=59 status=ok
// SIG undefined FUN_14278f957(void)

void FUN_14278f957(void)

{
  FUN_144760e21(DAT_14c874cc0,DAT_14c874cc8);
  if (DAT_14c874cc0 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278f984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c874c98);
  return;
}



// FUNCTION 14278f992 FUN_14278f992 body=59 status=ok
// SIG undefined FUN_14278f992(void)

void FUN_14278f992(void)

{
  FUN_144760e21(DAT_14c874d00,DAT_14c874d08);
  if (DAT_14c874d00 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278f9bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c874cd8);
  return;
}



// FUNCTION 14278f9cd FUN_14278f9cd body=59 status=ok
// SIG undefined FUN_14278f9cd(void)

void FUN_14278f9cd(void)

{
  FUN_144760e21(DAT_14c874d40,DAT_14c874d48);
  if (DAT_14c874d40 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278f9fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c874d18);
  return;
}



// FUNCTION 14278fa08 FUN_14278fa08 body=3 status=ok
// SIG undefined FUN_14278fa08(void)

undefined8 FUN_14278fa08(void)

{
  return 0;
}



// FUNCTION 14278fa0c FUN_14278fa0c body=1 status=ok
// SIG undefined FUN_14278fa0c(void)

void FUN_14278fa0c(void)

{
  return;
}



// FUNCTION 14278fa0e FUN_14278fa0e body=1 status=ok
// SIG undefined FUN_14278fa0e(void)

void FUN_14278fa0e(void)

{
  return;
}



// FUNCTION 14278fa10 FUN_14278fa10 body=3 status=ok
// SIG undefined FUN_14278fa10(void)

undefined8 FUN_14278fa10(void)

{
  return 0;
}



// FUNCTION 14278fa14 FUN_14278fa14 body=3 status=ok
// SIG undefined FUN_14278fa14(void)

undefined8 FUN_14278fa14(void)

{
  return 0;
}



// FUNCTION 14278fa18 FUN_14278fa18 body=1 status=ok
// SIG undefined FUN_14278fa18(void)

void FUN_14278fa18(void)

{
  return;
}



// FUNCTION 14278fa1a FUN_14278fa1a body=3 status=ok
// SIG undefined FUN_14278fa1a(void)

undefined8 FUN_14278fa1a(void)

{
  return 0;
}



// FUNCTION 14278fa2c FUN_14278fa2c body=14 status=ok
// SIG undefined FUN_14278fa2c(void)

void FUN_14278fa2c(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xbf | param_2 << 6;
  return;
}



// FUNCTION 14278fa3a FUN_14278fa3a body=69 status=ok
// SIG undefined FUN_14278fa3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14278fa3a(void)

{
  _DAT_14c874d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278fa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c874d60,1);
  return;
}



// FUNCTION 14278fa7f FUN_14278fa7f body=69 status=ok
// SIG undefined FUN_14278fa7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14278fa7f(void)

{
  _DAT_14c874d70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278fac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c874d78,1);
  return;
}



// FUNCTION 14278fac4 FUN_14278fac4 body=69 status=ok
// SIG undefined FUN_14278fac4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14278fac4(void)

{
  _DAT_14c874d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014278fb06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c874d90,1);
  return;
}



// FUNCTION 14278fb0a FUN_14278fb0a body=229 status=ok
// SIG undefined FUN_14278fb0a(void)

void FUN_14278fb0a(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  lVar3 = param_1[0x14];
  lVar2 = lVar3 + param_4;
  if (param_1[0x15] < lVar2) {
    if ((char)param_1[0x16] != '\x01') {
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar2 + 0x29) = *(byte *)(lVar2 + 0x29) | 2;
        lVar2 = *(longlong *)(lVar2 + 0x88);
      } while (lVar2 != 0);
      return;
    }
    lVar3 = param_1[0x15] * 2;
    if (lVar3 < lVar2) {
      lVar3 = lVar2;
    }
    param_1[0x15] = lVar3;
    iVar1 = (int)param_1[0x13];
    iVar4 = (int)(lVar3 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar4;
    uVar5 = iVar4 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar1) < uVar5) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar1 + param_1[0x12]),0,(longlong)(int)uVar5);
    lVar3 = param_1[0x14];
  }
  FUN_1449bc9dc(param_1[0x12],lVar3,param_2,param_3,(int)param_4);
  param_1[0x14] = param_1[0x14] + param_4;
  return;
}



// FUNCTION 14278fbf0 FUN_14278fbf0 body=327 status=ok
// SIG undefined FUN_14278fbf0(void)

void FUN_14278fbf0(longlong *param_1,uint *param_2,uint param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar2 = (ulonglong)((param_3 - 1) + (uint)(param_3 == 0)) * 2 + 1;
  lVar6 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  uVar4 = param_3 - 1;
  if (*param_2 < param_3) {
    uVar4 = *param_2;
  }
  lVar5 = param_1[0x14];
  lVar6 = lVar6 + lVar5;
  if (param_1[0x15] < lVar6) {
    if ((char)param_1[0x16] != '\x01') {
      lVar6 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar6 + 0x29) = *(byte *)(lVar6 + 0x29) | 2;
        lVar6 = *(longlong *)(lVar6 + 0x88);
      } while (lVar6 != 0);
      return;
    }
    lVar5 = param_1[0x15] * 2;
    if (lVar5 < lVar6) {
      lVar5 = lVar6;
    }
    param_1[0x15] = lVar5;
    iVar3 = (int)param_1[0x13];
    iVar9 = (int)(lVar5 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar9;
    uVar10 = iVar9 - iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar3) < uVar10) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar3 + param_1[0x12]),0,(longlong)(int)uVar10);
    lVar5 = param_1[0x14];
  }
  if (1 < param_3) {
    lVar6 = lVar5 << 0x1d;
    uVar7 = 0;
    uVar10 = 1;
    uVar8 = 1;
    do {
      if ((uVar8 & uVar4) != 0) {
        pcVar1 = (char *)(param_1[0x12] + (lVar6 >> 0x20));
        *pcVar1 = *pcVar1 + (&DAT_149e37088)[(uint)lVar5 & 7];
        uVar7 = uVar10;
      }
      lVar5 = lVar5 + 1;
      if (uVar8 * 2 == 0) break;
      uVar10 = uVar7 + uVar8 * 2;
      lVar6 = lVar6 + 0x20000000;
      uVar8 = uVar8 * 2;
    } while (uVar10 < param_3);
  }
  param_1[0x14] = lVar5;
  return;
}



// FUNCTION 14278fd38 FUN_14278fd38 body=316 status=ok
// SIG undefined FUN_14278fd38(void)

void FUN_14278fd38(longlong *param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar4 = (ulonglong)((param_3 - 1) + (uint)(param_3 == 0)) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  lVar3 = lVar3 + param_1[0x14];
  if (param_1[0x15] < lVar3) {
    if ((char)param_1[0x16] != '\x01') {
      lVar3 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar3 + 0x29) = *(byte *)(lVar3 + 0x29) | 2;
        lVar3 = *(longlong *)(lVar3 + 0x88);
      } while (lVar3 != 0);
      return;
    }
    lVar9 = param_1[0x15] * 2;
    if (lVar9 < lVar3) {
      lVar9 = lVar3;
    }
    param_1[0x15] = lVar9;
    iVar2 = (int)param_1[0x13];
    iVar7 = (int)(lVar9 + 7U >> 3);
    *(int *)(param_1 + 0x13) = iVar7;
    uVar8 = iVar7 - iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar2) < uVar8) {
      FUN_1447403be(param_1 + 0x12);
    }
    memset((void *)((longlong)iVar2 + param_1[0x12]),0,(longlong)(int)uVar8);
  }
  if (1 < param_3) {
    uVar4 = param_1[0x14];
    uVar6 = 0;
    uVar8 = 1;
    uVar5 = 1;
    do {
      if ((uVar5 & param_2) != 0) {
        pcVar1 = (char *)(param_1[0x12] + (longlong)(int)(uVar4 >> 3));
        *pcVar1 = *pcVar1 + (&DAT_149e37088)[(uint)uVar4 & 7];
        uVar4 = param_1[0x14];
        uVar6 = uVar8;
      }
      uVar4 = uVar4 + 1;
      param_1[0x14] = uVar4;
    } while ((uVar5 * 2 != 0) && (uVar8 = uVar6 + uVar5 * 2, uVar5 = uVar5 * 2, uVar8 < param_3));
  }
  return;
}



// FUNCTION 14278fe74 FUN_14278fe74 body=196 status=ok
// SIG undefined FUN_14278fe74(void)

void FUN_14278fe74(char *param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar4 = *(ulonglong *)(param_1 + 8);
  if ((uVar4 & 7) != 0) {
    pbVar1 = (byte *)(param_2[0x12] + (longlong)(int)(uVar4 >> 3));
    *pbVar1 = *pbVar1 & (&DAT_149e37090)[uVar4 & 7];
    uVar4 = *(ulonglong *)(param_1 + 8);
  }
  iVar6 = (int)(param_2[0x14] + 7U >> 3);
  iVar3 = (int)(uVar4 + 7 >> 3);
  if (iVar6 != iVar3) {
    memset((void *)((longlong)iVar3 + param_2[0x12]),0,(longlong)(iVar6 - iVar3));
  }
  cVar2 = *param_1;
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar2 == '\x01') {
    *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) | 2;
    while (lVar5 = *(longlong *)(lVar5 + 0x88), lVar5 != 0) {
      *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) | 2;
    }
  }
  else {
    *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) & 0xfd;
    while (lVar5 = *(longlong *)(lVar5 + 0x88), lVar5 != 0) {
      *(byte *)(lVar5 + 0x29) = *(byte *)(lVar5 + 0x29) & 0xfd;
    }
  }
  param_2[0x14] = *(longlong *)(param_1 + 8);
  return;
}



// FUNCTION 14278ff38 FUN_14278ff38 body=114 status=ok
// SIG undefined FUN_14278ff38(void)

ulonglong FUN_14278ff38(undefined1 *param_1,longlong *param_2)

{
  void *_Src;
  ulonglong _Size;
  void *pvVar1;
  void *pvVar2;
  
  _Size = FUN_1468220fe();
  _Src = *(void **)(param_1 + 8);
  pvVar2 = (void *)param_2[1];
  pvVar1 = (void *)(_Size + (longlong)pvVar2);
  param_2[1] = (longlong)pvVar1;
  if ((ulonglong)(param_2[2] - (longlong)pvVar2) < _Size) {
    FUN_14112c458(param_2,pvVar2);
    pvVar1 = (void *)param_2[1];
  }
  else if (_Size == 0) goto LAB_14278ff9a;
  if (pvVar1 < pvVar2) {
    pvVar2 = pvVar1;
  }
  pvVar1 = memcpy((void *)((longlong)pvVar2 + *param_2),_Src,_Size);
LAB_14278ff9a:
  return CONCAT71((int7)((ulonglong)pvVar1 >> 8),*param_1) & 0xffffffffffffff1f;
}



// FUNCTION 14278ffaa FUN_14278ffaa body=162 status=ok
// SIG undefined FUN_14278ffaa(void)

longlong * FUN_14278ffaa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [40];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    SRWLock = (PSRWLOCK)FUN_146825436();
    AcquireSRWLockShared(SRWLock);
    FUN_1448a2778(SRWLock,local_58,param_1);
    ReleaseSRWLockShared(SRWLock);
    if (local_30 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x20);
    }
    else {
      FUN_14278ffaa(local_58,&local_60);
      *(longlong *)(param_1 + 0x20) = local_60;
      lVar1 = local_60;
    }
  }
  *param_2 = lVar1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279004d FUN_14279004d body=69 status=ok
// SIG undefined FUN_14279004d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14279004d(void)

{
  _DAT_14c874db8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014279008f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c874dc0,1);
  return;
}



// FUNCTION 142790098 FUN_142790098 body=105 status=ok
// SIG undefined FUN_142790098(void)

void FUN_142790098(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  
  if ((param_3 != 0) && ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0)) {
    if (param_1[0x15] < (longlong)(param_1[0x12] + param_3)) {
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      do {
        *(byte *)(lVar1 + 0x29) = *(byte *)(lVar1 + 0x29) | 2;
        lVar1 = *(longlong *)(lVar1 + 0x88);
      } while (lVar1 != 0);
    }
    else {
      memcpy(param_2,(void *)(param_1[0x12] + param_1[0x14]),param_3);
      param_1[0x12] = param_1[0x12] + param_3;
    }
  }
  return;
}



// FUNCTION 142790102 FUN_142790102 body=8 status=ok
// SIG undefined FUN_142790102(void)

undefined8 FUN_142790102(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// FUNCTION 14279010a FUN_14279010a body=54 status=ok
// SIG undefined FUN_14279010a(void)

void FUN_14279010a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  if (*(code **)(param_2 + 0x18) != (code *)0x0) {
    (**(code **)(param_2 + 0x18))(param_1,param_2,param_3,param_4);
  }
  if ((char)param_4 != '\0') {
    return;
  }
  thunk_FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142790140 FUN_142790140 body=167 status=ok
// SIG undefined FUN_142790140(void)

ulonglong FUN_142790140(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong unaff_RSI;
  longlong lVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == param_2) {
    *param_3 = 0;
LAB_1427901be:
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
  }
  else {
    unaff_RSI = 0;
    if (*(char *)(param_1 + 0x65) != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x10);
      do {
        local_3c = 0;
        cVar1 = FUN_142790140(*(undefined8 *)(lVar3 + 8),param_2,&local_3c);
        if (cVar1 != '\0') {
          *param_3 = local_3c + *(int *)(lVar3 + 0x20);
          goto LAB_1427901be;
        }
        lVar3 = *(longlong *)(lVar3 + 0x10);
        uVar2 = (int)unaff_RSI + 1;
        unaff_RSI = (ulonglong)uVar2;
      } while (uVar2 < *(byte *)(param_1 + 0x65));
      unaff_RSI = 0;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return unaff_RSI & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427901e8 FUN_1427901e8 body=418 status=ok
// SIG undefined FUN_1427901e8(void)

longlong FUN_1427901e8(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  bool bVar15;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    puVar14 = *(ulonglong **)(param_1 + 0x20);
    puVar13 = puVar14 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      uVar11 = *puVar14;
      puVar6 = (undefined8 *)
               (&DAT_14c874f30 +
               (ulonglong)(uint)((int)uVar11 + (int)(uVar11 / 0x1105) * -0x1105) * 8);
      do {
        puVar6 = (undefined8 *)*puVar6;
        if (puVar6 == (undefined8 *)0x0) break;
      } while (puVar6[10] != uVar11);
      uVar1 = *(uint *)((longlong)puVar14 + 0xc);
      if (param_3 - 8U < (ulonglong)uVar1) {
        return 0;
      }
      uVar11 = puVar14[1];
      if ((ulonglong)*(uint *)(puVar6 + 0xb) - 8 < (ulonglong)(uint)uVar11) {
        return 0;
      }
      lVar7 = (*(code *)puVar6[9])();
      *(undefined8 *)(param_2 + (ulonglong)uVar1) = *(undefined8 *)(lVar7 + (ulonglong)(uint)uVar11)
      ;
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar13);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    lVar9 = 0;
    do {
      uVar11 = (ulonglong)*(uint *)(lVar7 + 8 + lVar9);
      if (param_3 - 0xcU < uVar11) {
        return 0;
      }
      uVar4 = *(undefined8 *)(lVar7 + lVar9);
      *(int *)(param_2 + uVar11) = (int)uVar4;
      *(undefined4 *)(param_2 + 4 + uVar11) = 0;
      *(int *)(param_2 + 8 + uVar11) = (int)((ulonglong)uVar4 >> 0x20);
      lVar9 = lVar9 + 0xc;
    } while ((longlong)iVar2 * 0xc != lVar9);
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x48);
  if (lVar7 == 0) {
    lVar9 = CONCAT71((int7)(int3)((uint)*(int *)(param_1 + 0x48) >> 8),1);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar9 = lVar7 * 4;
    lVar10 = 0;
    do {
      uVar11 = (ulonglong)*(uint *)(lVar5 + 8 + lVar10);
      bVar15 = param_3 - 8U < uVar11;
      lVar9 = CONCAT71((int7)((ulonglong)lVar9 >> 8),!bVar15);
      if (bVar15) {
        return lVar9;
      }
      uVar3 = *(undefined4 *)(lVar5 + lVar10);
      uVar12 = *(undefined4 *)(lVar5 + 4 + lVar10);
      puVar6 = (undefined8 *)(uVar11 + param_2);
      if ((*(uint *)(param_1 + 0x1c) == 5) && (*(int *)(param_1 + 0x18) == 8)) {
        *(undefined4 *)puVar6 = uVar3;
        *(undefined4 *)((longlong)puVar6 + 4) = uVar12;
      }
      else {
        if ((*(uint *)(param_1 + 0x1c) & 8) == 0) {
          puVar8 = (undefined8 *)((longlong)puVar6 + 4);
          *puVar6 = 0;
        }
        else {
          puVar8 = puVar6 + 1;
          *(undefined4 *)(puVar6 + 1) = 0;
          *(undefined4 *)((longlong)puVar6 + 4) = uVar12;
          uVar12 = uVar3;
        }
        *(undefined4 *)puVar6 = uVar3;
        *(undefined4 *)puVar8 = uVar12;
      }
      lVar10 = lVar10 + 0xc;
    } while (lVar7 * 0xc != lVar10);
  }
  return lVar9;
}



// FUNCTION 14279038a FUN_14279038a body=193 status=ok
// SIG undefined FUN_14279038a(void)

void FUN_14279038a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    iVar4 = 0;
    do {
      if (*(int *)(lVar1 + lVar6) == (int)uVar5) {
        iVar3 = *(int *)(lVar1 + 4 + lVar6) - (int)uVar7;
      }
      else {
        iVar3 = FUN_14002c2bd(*(int *)(lVar1 + lVar6),uVar5 & 0xffffffff);
      }
      if (iVar3 != 0) {
        if (iVar4 != 0) {
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1447808da(param_2,iVar3);
          }
          *(int *)(*param_2 + (longlong)iVar3 * 4) = iVar4;
        }
        uVar5 = *(ulonglong *)(lVar1 + lVar6);
        uVar7 = uVar5 >> 0x20;
        iVar4 = 0;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar6);
    if (iVar4 != 0) {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447808da(param_2,iVar3);
      }
      *(int *)(*param_2 + (longlong)iVar3 * 4) = iVar4;
    }
  }
  return;
}



// FUNCTION 14279044b FUN_14279044b body=351 status=ok
// SIG undefined FUN_14279044b(void)

void FUN_14279044b(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar6 = (uint *)*param_2;
    puVar2 = puVar6 + *(int *)(param_2 + 1);
    iVar5 = 0;
    do {
      local_4c = *puVar6;
      local_58 = *(undefined8 *)(*param_1 + (longlong)iVar5 * 0xc);
      (**(code **)(*param_3 + 0x160))(param_3,&local_58);
      puVar3 = (ulonglong *)param_3[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_4c,4);
        }
        else {
          FUN_14572512c(param_3,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      if (local_4c != 0) {
        lVar4 = (longlong)iVar5 * 0xc + 8;
        uVar7 = 0;
        do {
          local_5c = *(undefined4 *)(*param_1 + lVar4);
          puVar3 = (ulonglong *)param_3[1];
          if (puVar3[1] < *puVar3 + 4) {
            if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
              (**(code **)(*param_3 + 0x170))(param_3,&local_5c,4);
            }
            else {
              FUN_14572512c(param_3,&local_5c);
            }
          }
          else {
            *puVar3 = *puVar3 + 4;
          }
          uVar7 = uVar7 + 1;
          lVar4 = lVar4 + 0xc;
        } while (uVar7 < local_4c);
        iVar5 = iVar5 + uVar7;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427905ac FUN_1427905ac body=1962 status=ok
// SIG undefined FUN_1427905ac(void)

void FUN_1427905ac(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  uint local_7c;
  undefined8 local_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_1;
  FUN_14170c4c2(param_5);
  local_4c = 0;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  local_78 = param_3;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  lVar5 = FUN_14001cc68(local_4c,0);
  (**(code **)(*param_2 + 0x170))(param_2,lVar5,local_4c);
  local_90 = lVar5;
  uVar4 = (**(code **)(*param_4 + 0x20))(param_4,param_2,param_5,lVar5);
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_50,4);
    }
    else {
      FUN_14572512c(param_2,&local_50);
    }
  }
  else {
    local_50 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_54,4);
    }
    else {
      FUN_14572512c(param_2,&local_54);
    }
  }
  else {
    local_54 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
    }
    else {
      FUN_14572512c(param_2,&local_58);
    }
  }
  else {
    local_58 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  uVar10 = 0x1000000;
  if (local_50 < 0x1000000) {
    uVar10 = local_50;
  }
  bVar13 = local_50 != 0;
  local_50 = uVar10;
  if (bVar13) {
    uVar10 = 0;
    do {
      local_60 = 0;
      local_64 = 0;
      plVar3 = (longlong *)param_2[1];
      if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_60,8);
        }
        else {
          FUN_146821949(param_2,&local_60);
        }
      }
      else {
        local_60 = *(ulonglong *)*plVar3;
        *plVar3 = *plVar3 + 8;
      }
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
        }
        else {
          FUN_14572512c(param_2,&local_64);
        }
      }
      else {
        local_64 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if ((uVar4 & 1) == 0) {
LAB_142790834:
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = (undefined8 *)
                 (&DAT_14c874f30 +
                 (ulonglong)(uint)((int)local_60 + (int)(local_60 / 0x1105) * -0x1105) * 8);
        do {
          puVar7 = (undefined8 *)*puVar7;
          if (puVar7 == (undefined8 *)0x0) goto LAB_142790834;
        } while (puVar7[10] != local_60);
      }
      uVar9 = 0x1000000;
      if (local_64 < 0x1000000) {
        uVar9 = local_64;
      }
      bVar13 = local_64 != 0;
      local_7c = uVar10;
      local_64 = uVar9;
      if (bVar13) {
        uVar10 = 0;
        do {
          local_68 = 0;
          local_6c = 0;
          puVar2 = (ulonglong *)param_2[1];
          puVar1 = (uint *)*puVar2 + 1;
          if ((uint *)puVar2[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
            }
            else {
              FUN_14572512c(param_2,&local_68);
            }
          }
          else {
            local_68 = *(uint *)*puVar2;
            *puVar2 = (ulonglong)puVar1;
          }
          puVar2 = (ulonglong *)param_2[1];
          puVar1 = (uint *)*puVar2 + 1;
          if ((uint *)puVar2[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_6c,4);
            }
            else {
              FUN_14572512c(param_2,&local_6c);
            }
          }
          else {
            local_6c = *(uint *)*puVar2;
            *puVar2 = (ulonglong)puVar1;
          }
          if ((uVar4 & 1) != 0) {
            uVar6 = (ulonglong)local_6c;
            if ((ulonglong)local_4c - 8 < uVar6) {
              uVar4 = 0;
            }
            else {
              uVar12 = (ulonglong)local_68;
              if ((ulonglong)*(uint *)(puVar7 + 0xb) - 8 < uVar12) {
                uVar4 = 0;
              }
              else {
                lVar5 = (*(code *)puVar7[9])();
                *(undefined8 *)(local_90 + uVar6) = *(undefined8 *)(lVar5 + uVar12);
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < local_64);
      }
      uVar10 = local_7c + 1;
    } while (uVar10 < local_50);
  }
  uVar10 = 0x1000000;
  if (local_54 < 0x1000000) {
    uVar10 = local_54;
  }
  bVar13 = local_54 != 0;
  local_54 = uVar10;
  if (bVar13) {
    uVar10 = 0;
    do {
      local_60 = 0;
      local_64 = 0;
      (**(code **)(*param_2 + 0x160))(param_2,&local_60);
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
        }
        else {
          FUN_14572512c(param_2,&local_64);
        }
      }
      else {
        local_64 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      uVar9 = 0x1000000;
      if (local_64 < 0x1000000) {
        uVar9 = local_64;
      }
      bVar13 = local_64 != 0;
      local_64 = uVar9;
      if (bVar13) {
        uVar9 = 0;
        do {
          local_68 = 0;
          puVar2 = (ulonglong *)param_2[1];
          puVar1 = (uint *)*puVar2 + 1;
          if ((uint *)puVar2[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
            }
            else {
              FUN_14572512c(param_2,&local_68);
            }
          }
          else {
            local_68 = *(uint *)*puVar2;
            *puVar2 = (ulonglong)puVar1;
          }
          if ((uVar4 & 1) != 0) {
            uVar6 = (ulonglong)local_68;
            if ((ulonglong)local_4c - 0xc < uVar6) {
              uVar4 = 0;
            }
            else {
              *(int *)(local_90 + uVar6) = (int)local_60;
              *(undefined4 *)(local_90 + 4 + uVar6) = 0;
              *(int *)(local_90 + 8 + uVar6) = (int)(local_60 >> 0x20);
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_64);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_54);
  }
  uVar10 = 0x1000000;
  if (local_58 < 0x1000000) {
    uVar10 = local_58;
  }
  bVar13 = local_58 != 0;
  local_58 = uVar10;
  if (bVar13) {
    uVar10 = 0;
    do {
      local_60 = 0;
      local_64 = 0;
      (**(code **)(*param_2 + 0x160))(param_2,&local_60);
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
        }
        else {
          FUN_14572512c(param_2,&local_64);
        }
      }
      else {
        local_64 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      uVar9 = 0x1000000;
      if (local_64 < 0x1000000) {
        uVar9 = local_64;
      }
      bVar13 = local_64 != 0;
      local_64 = uVar9;
      if (bVar13) {
        uVar9 = 0;
        do {
          local_68 = 0;
          puVar2 = (ulonglong *)param_2[1];
          puVar1 = (uint *)*puVar2 + 1;
          if ((uint *)puVar2[1] < puVar1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_68,4);
            }
            else {
              FUN_14572512c(param_2,&local_68);
            }
          }
          else {
            local_68 = *(uint *)*puVar2;
            *puVar2 = (ulonglong)puVar1;
          }
          if ((uVar4 & 1) != 0) {
            if ((ulonglong)local_4c - 8 < (ulonglong)local_68) {
              uVar4 = 0;
            }
            else {
              puVar7 = (undefined8 *)((ulonglong)local_68 + local_90);
              if ((param_5[1] == 5) && (*param_5 == 8)) {
                *(undefined4 *)puVar7 = (undefined4)local_60;
                *(undefined4 *)((longlong)puVar7 + 4) = local_60._4_4_;
              }
              else {
                if ((param_5[1] & 8U) == 0) {
                  puVar11 = (undefined8 *)((longlong)puVar7 + 4);
                  *puVar7 = 0;
                  uVar8 = local_60._4_4_;
                }
                else {
                  puVar11 = puVar7 + 1;
                  *(undefined4 *)(puVar7 + 1) = 0;
                  *(undefined4 *)((longlong)puVar7 + 4) = local_60._4_4_;
                  uVar8 = (undefined4)local_60;
                }
                *(undefined4 *)puVar7 = (undefined4)local_60;
                *(undefined4 *)puVar11 = uVar8;
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_64);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_58);
  }
  if ((uVar4 & 1) == 0) {
    FUN_1400020a8(local_90);
    *local_88 = 0;
    local_88[1] = 0;
  }
  else {
    if ((param_5[1] == 5) && (*param_5 == 8)) {
      *local_88 = local_78;
      local_88[1] = local_90;
      *(uint *)(local_88 + 2) = local_4c;
      goto LAB_142790ce7;
    }
    FUN_1400020a8(local_90);
    *local_88 = local_78;
    local_88[1] = 0;
  }
  *(undefined4 *)(local_88 + 2) = 0;
LAB_142790ce7:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142790d57 FUN_142790d57 body=360 status=ok
// SIG undefined FUN_142790d57(void)

void FUN_142790d57(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong _Size;
  undefined1 auStack_878 [44];
  uint local_84c;
  short local_848 [1024];
  ulonglong local_48;
  ulonglong uVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_878;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar7 = (uint *)*param_1;
    puVar1 = puVar7 + (longlong)*(int *)(param_1 + 1) * 3;
    do {
      uVar4 = *puVar7;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      puVar2 = (ushort *)((&DAT_14c87eb10)[uVar4 >> 0x10] + (ulonglong)(uVar4 & 0xffff) * 2);
      uVar3 = *puVar2;
      if ((uVar3 & 1) == 0) {
        _Size = (ulonglong)(uVar3 >> 6);
        memcpy(local_848,puVar2 + 1,_Size);
        if (0x3f < uVar3) {
          uVar6 = (ulonglong)((uVar3 >> 6) - 1);
          uVar5 = _Size;
          do {
            local_848[uVar6] = (short)*(char *)((longlong)local_848 + uVar6);
            uVar6 = uVar6 - 1;
            uVar4 = (int)uVar5 - 1;
            uVar5 = (ulonglong)uVar4;
          } while (uVar4 != 0);
        }
      }
      else {
        memcpy(local_848,puVar2 + 1,(ulonglong)(uVar3 >> 5 & 0x7fffffe));
        _Size = (ulonglong)(uVar3 >> 6);
      }
      local_848[_Size] = 0;
      local_84c = puVar7[1];
      FUN_140c54e34(param_2,local_848,(uVar3 >> 6) * 2);
      FUN_140c54e34(param_2,&local_84c,4);
      FUN_140c54e34(param_2,puVar7 + 2,4);
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_878) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142790ed2 FUN_142790ed2 body=346 status=ok
// SIG undefined FUN_142790ed2(void)

void FUN_142790ed2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0xfff) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_142790f62;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_142790f62:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 >> 3)) {
    uVar6 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,8,4);
  return;
}



// FUNCTION 14279102c FUN_14279102c body=47 status=ok
// SIG undefined FUN_14279102c(void)

void FUN_14279102c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14279105b FUN_14279105b body=19 status=ok
// SIG undefined FUN_14279105b(void)

void FUN_14279105b(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 5;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14279106e FUN_14279106e body=363 status=ok
// SIG undefined FUN_14279106e(void)

void FUN_14279106e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 0x28;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0x333) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_142791102;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_142791102:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 / 0x28)) {
    uVar6 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,0x28,8);
  return;
}



// FUNCTION 1427911da FUN_1427911da body=25 status=ok
// SIG undefined FUN_1427911da(void)

void FUN_1427911da(void)

{
  FUN_145790020();
  FUN_14170c56a(&DAT_14c874dd8);
  return;
}



// FUNCTION 1427911f4 FUN_1427911f4 body=25 status=ok
// SIG undefined FUN_1427911f4(void)

void FUN_1427911f4(void)

{
  FUN_1457921a4();
  FUN_14170c56a(&DAT_14c874e48);
  return;
}



// FUNCTION 14279120e FUN_14279120e body=25 status=ok
// SIG undefined FUN_14279120e(void)

void FUN_14279120e(void)

{
  FUN_1457fb358();
  FUN_14170c56a(&DAT_14c874eb8);
  return;
}



// FUNCTION 14279123a FUN_14279123a body=803 status=ok
// SIG undefined FUN_14279123a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14279123a(void)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _DAT_14c874c10 = L"Default";
  _DAT_14c874c18 = L"cpu,gpu,frame,log,bookmark,screenshot,region,task";
  DAT_14c874c20 = 0;
  _DAT_14c874c28 = L"Memory";
  _DAT_14c874c30 = L"memtag,memalloc,callstack,module";
  DAT_14c874c38 = 1;
  _DAT_14c874c40 = L"Memory_Light";
  _DAT_14c874c48 = L"memtag,memalloc";
  DAT_14c874c50 = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c874c58);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c874c58,4000);
  DAT_14c874c80 = 0;
  _DAT_14c874c88 = 0;
  _DAT_14c874c90 = 2;
  atexit(FUN_14278f91c);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c874c98);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c874c98,4000);
  DAT_14c874cc0 = 0;
  _DAT_14c874cc8 = 0;
  _DAT_14c874cd0 = 2;
  atexit(FUN_14278f957);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c874cd8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c874cd8,4000);
  DAT_14c874d00 = 0;
  _DAT_14c874d08 = 0;
  _DAT_14c874d10 = 2;
  atexit(FUN_14278f992);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c874d18);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c874d18,4000);
  DAT_14c874d40 = 0;
  _DAT_14c874d48 = 0;
  _DAT_14c874d50 = 2;
  atexit(FUN_14278f9cd);
  local_88[0] = (code *)CONCAT44(local_88[0]._4_4_,0x1000000);
  local_98 = 0;
  FUN_14078dbce(&DAT_14c874d58,L"net.MaxNetStringSize",local_88,
                L"Maximum allowed size for strings sent/received by the netcode (in bytes).");
  atexit(FUN_14278fa3a);
  local_98 = 0;
  FUN_14153156c(&DAT_14c874d70,L"BitReader.LogFatalOnOverflow",&DAT_14c874d80,
                L"LogFatal if BitReader Overflows");
  atexit(FUN_14278fa7f);
  local_98 = 0;
  FUN_141471170(&DAT_14c874d88,L"net.BitReader.EnsureOnOverflow",&DAT_14c75d63c,
                L"Ensures if BitReader overflows. \'BitReader.LogFatalOnOverflow\' takes precedence over this, if set."
               );
  atexit(FUN_14278fac4);
  local_98 = 0;
  FUN_141471170(&DAT_14c874db8,L"s.LargeMemoryDataMaxPoolLength",&DAT_14c75d640,
                L"Limit LargeMemoryData pool size to the given number of elements.");
  atexit(FUN_14279004d);
  _DAT_14c874dc8 = 0;
  atexit((_func_5014 *)&LAB_142790092);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1427911da;
  local_88[0] = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c874e40,6,local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_1427911f4;
  local_88[0] = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c874eb0,6,local_88);
  local_78 = 0;
  local_68 = &PTR_LAB_149e01e20;
  local_60 = FUN_14279120e;
  local_88[0] = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14c874f20,6,local_88);
  FUN_14118b488(&DAT_14c87d778);
  _DAT_14c87d778 = &PTR_FUN_149e38440;
  atexit((_func_5014 *)&LAB_142790ec0);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142791572 FUN_142791572 body=216 status=ok
// SIG undefined FUN_142791572(void)

void FUN_142791572(double *param_1)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  LARGE_INTEGER LVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 4) != 0) {
    QueryPerformanceCounter(local_50);
    LVar4 = local_50[0];
    dVar3 = DAT_14c83f420;
    dVar1 = *param_1;
    puVar5 = (undefined2 *)&DAT_149e25b9a;
    if (*(int *)(param_1 + 4) == 2) {
      puVar5 = &DAT_149e25cf8;
    }
    FUN_140056680(local_50,puVar5);
    pdVar2 = (double *)param_1[3];
    if (pdVar2 != (double *)0x0) {
      *pdVar2 = (((double)LVar4.QuadPart * dVar3 + 16777216.0) - dVar1) + *pdVar2;
      *(int *)((longlong)param_1[3] + 8) = *(int *)((longlong)param_1[3] + 8) + 1;
    }
    if (local_50[0].QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  if (param_1[1] != 0.0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279164b FUN_14279164b body=149 status=ok
// SIG undefined FUN_14279164b(void)

ulonglong FUN_14279164b(longlong *param_1,byte param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (param_3 == 0) {
    if (0 < iVar2) {
      uVar4 = 0;
      do {
        if (*(byte *)(lVar3 + uVar4) == param_2) {
          return uVar4 & 0xffffffff;
        }
        lVar1 = lVar3 + uVar4;
        uVar4 = uVar4 + 1;
      } while (lVar1 + 1U < (ulonglong)(iVar2 + lVar3));
    }
  }
  else if (0 < iVar2) {
    uVar4 = 0;
    do {
      if ((byte)((0x19 < *(byte *)(lVar3 + uVar4) - 0x61) * ' ' + *(byte *)(lVar3 + uVar4) + -0x20)
          == (byte)((0x19 < param_2 - 0x61) * ' ' + param_2 + -0x20)) {
        return uVar4 & 0xffffffff;
      }
      lVar1 = lVar3 + uVar4;
      uVar4 = uVar4 + 1;
    } while (lVar1 + 1U < (ulonglong)(iVar2 + lVar3));
  }
  return 0xffffffff;
}



// FUNCTION 1427916e0 FUN_1427916e0 body=149 status=ok
// SIG undefined FUN_1427916e0(void)

ulonglong FUN_1427916e0(longlong *param_1,byte param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (param_3 == 0) {
    if (0 < iVar2) {
      uVar4 = 0;
      do {
        if (*(byte *)(lVar3 + uVar4) == param_2) {
          return uVar4 & 0xffffffff;
        }
        lVar1 = lVar3 + uVar4;
        uVar4 = uVar4 + 1;
      } while (lVar1 + 1U < (ulonglong)(iVar2 + lVar3));
    }
  }
  else if (0 < iVar2) {
    uVar4 = 0;
    do {
      if ((byte)((0x19 < *(byte *)(lVar3 + uVar4) - 0x61) * ' ' + *(byte *)(lVar3 + uVar4) + -0x20)
          == (byte)((0x19 < param_2 - 0x61) * ' ' + param_2 + -0x20)) {
        return uVar4 & 0xffffffff;
      }
      lVar1 = lVar3 + uVar4;
      uVar4 = uVar4 + 1;
    } while (lVar1 + 1U < (ulonglong)(iVar2 + lVar3));
  }
  return 0xffffffff;
}



// FUNCTION 142791799 FUN_142791799 body=69 status=ok
// SIG undefined FUN_142791799(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142791799(void)

{
  _DAT_14c87e720 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427917db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87e728,1);
  return;
}



// FUNCTION 1427917de FUN_1427917de body=42 status=ok
// SIG undefined FUN_1427917de(void)

void FUN_1427917de(void)

{
  TlsFree(DAT_14c896140);
  DAT_14c896140 = 0xffffffff;
  FUN_1400bf3ec(&DAT_14c896180);
  return;
}



// FUNCTION 142791808 FUN_142791808 body=42 status=ok
// SIG undefined FUN_142791808(void)

void FUN_142791808(void)

{
  TlsFree(DAT_14c896080);
  DAT_14c896080 = 0xffffffff;
  FUN_1400bf3ec(&DAT_14c8960c0);
  return;
}



// FUNCTION 142791832 FUN_142791832 body=137 status=ok
// SIG undefined FUN_142791832(void)

ulonglong FUN_142791832(longlong param_1,longlong *param_2)

{
  undefined1 extraout_AL;
  undefined1 uVar1;
  LARGE_INTEGER LVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  
  local_20.QuadPart = DAT_14c707940 ^ (ulonglong)auStack_58;
  LVar2.QuadPart = local_20.QuadPart;
  if ((*(byte *)(param_1 + 0xa0) & 1) == 0) {
    if (param_2[1] == -1) {
LAB_142791888:
      local_38 = (undefined4)*param_2;
      uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_30 = (undefined4)param_2[1];
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140056092(param_1);
      uVar1 = extraout_AL;
      uVar3 = extraout_var;
      goto LAB_14279189b;
    }
    LVar2.QuadPart = 0;
    if (param_2[1] != 0) {
      QueryPerformanceCounter(&local_28);
      LVar2.QuadPart = param_2[1] + *param_2;
      if ((ulonglong)local_28 <= (ulonglong)LVar2) goto LAB_142791888;
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0xa0);
  uVar3 = (undefined7)((ulonglong)LVar2 >> 8);
LAB_14279189b:
  if ((local_20.QuadPart ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar3,uVar1) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427918bc FUN_1427918bc body=764 status=ok
// SIG undefined FUN_1427918bc(void)

/* WARNING: Removing unreachable block (ram,0x0001427919fb) */
/* WARNING: Removing unreachable block (ram,0x000142791b85) */
/* WARNING: Removing unreachable block (ram,0x000142791b94) */

ulonglong FUN_1427918bc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_128 [39];
  undefined1 local_101;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined ***local_b8;
  undefined ***local_b0;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70;
  undefined8 local_68;
  undefined2 local_60;
  uint local_58;
  longlong *local_50;
  ulonglong local_48;
  
  plVar2 = DAT_14c82b500;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = 0;
  uVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
  if ((int)uVar4 < 3) {
    cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,uVar4);
    uVar5 = 0;
    if (cVar3 == '\0') {
      if ((uVar4 & 0xff) != 0xff) {
        uVar5 = (ulonglong)
                ((uVar4 >> 7 & 2 | uVar4 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar4 & 0xff) * 4));
      }
      LOCK();
      UNLOCK();
      local_60 = 0;
      local_68 = 0x100000000;
      local_70 = 0;
      local_c0 = 0;
      local_c8 = 0x100000000;
      local_d0 = 0;
      local_e0 = 0xffffffff;
      local_e8 = 0;
      local_f0 = 0;
      local_b8 = &local_100;
      local_90 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
      lVar1 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar1 == 0) {
        local_88 = 0;
      }
      else {
        local_88 = *(undefined8 *)(lVar1 + 0x30);
      }
      local_80 = 0xc000005278e3a380;
      local_e4 = (undefined4)uVar5;
      local_50 = plVar2;
      local_100 = &PTR_FUN_149e3c788;
      LOCK();
      local_f8 = &DAT_200000002;
      UNLOCK();
      local_b0 = local_b8;
      local_58 = uVar4;
      cVar3 = FUN_1456bb142(param_1 + 0x88);
      if (cVar3 == '\0') {
        LOCK();
        local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_ + -1,(undefined4)local_f8);
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(local_d8,param_1);
      }
      local_101 = 1;
      FUN_1447439e4(&local_100);
      (**(code **)(*plVar2 + 0x50))(plVar2,uVar4);
      local_100 = UE::Tasks::Private::FTaskBase::vftable;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if ((code *)local_90[3] != FUN_144713626) {
        (*(code *)local_90[3])(&local_90,&local_b8);
      }
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142791bb9 FUN_142791bb9 body=96 status=ok
// SIG undefined FUN_142791bb9(void)

void FUN_142791bb9(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c896038) {
    FUN_144b3d300(&DAT_14c896038);
    if (DAT_14c896038 == -1) {
      FUN_14682d0f8();
      atexit((_func_5014 *)&LAB_1427926a2);
      _Init_thread_footer(&DAT_14c896038);
      return;
    }
  }
  return;
}



// FUNCTION 142791dd5 FUN_142791dd5 body=168 status=ok
// SIG undefined FUN_142791dd5(void)

longlong * FUN_142791dd5(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 142791e7d FUN_142791e7d body=69 status=ok
// SIG undefined FUN_142791e7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142791e7d(void)

{
  _DAT_14c87ea48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142791ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87ea50,1);
  return;
}



// FUNCTION 142791ec2 FUN_142791ec2 body=69 status=ok
// SIG undefined FUN_142791ec2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142791ec2(void)

{
  _DAT_14c87ea58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142791f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87ea60,1);
  return;
}



// FUNCTION 142791f07 FUN_142791f07 body=69 status=ok
// SIG undefined FUN_142791f07(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142791f07(void)

{
  _DAT_14c87ea68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142791f49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87ea70,1);
  return;
}



// FUNCTION 142791f4c FUN_142791f4c body=69 status=ok
// SIG undefined FUN_142791f4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142791f4c(void)

{
  _DAT_14c87ea78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142791f8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87ea80,1);
  return;
}



// FUNCTION 142791f91 FUN_142791f91 body=49 status=ok
// SIG undefined FUN_142791f91(void)

void FUN_142791f91(undefined8 param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_14682c7cc(param_1);
  return;
}



// FUNCTION 142791fc2 FUN_142791fc2 body=69 status=ok
// SIG undefined FUN_142791fc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142791fc2(void)

{
  _DAT_14c87ea88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142792004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87ea90,1);
  return;
}



// FUNCTION 142792007 FUN_142792007 body=348 status=ok
// SIG undefined FUN_142792007(void)

void FUN_142792007(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [8];
  undefined2 *local_50;
  int local_48;
  longlong local_40 [2];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402160b8(local_58);
  FUN_14047ad2e(local_58,&local_50,L"%Y%m%d_%H%M%S");
  puVar4 = local_50;
  if (local_48 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(local_40,L"FNameHash_(%s).csv",puVar4);
  uVar1 = FUN_14047ac8c();
  FUN_1449b8608(local_68,uVar1,L"Profiling/");
  FUN_1401c7f3e(&local_30,local_68,local_40);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,puVar4,0);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_146816218(param_1,2,L"Failed to open outfile file to dump FName hash stats.");
  }
  else {
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140047918(param_1,L"Wrote FName hash stats to %s",puVar4);
    (**(code **)*puVar3)(puVar3,1);
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142792164 FUN_142792164 body=69 status=ok
// SIG undefined FUN_142792164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142792164(void)

{
  _DAT_14c87ea98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427921a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87eaa0,1);
  return;
}



// FUNCTION 1427921a9 FUN_1427921a9 body=69 status=ok
// SIG undefined FUN_1427921a9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427921a9(void)

{
  _DAT_14c87eab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427921eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c87eab8,1);
  return;
}



// FUNCTION 1427921ee FUN_1427921ee body=112 status=ok
// SIG undefined FUN_1427921ee(void)

void * FUN_1427921ee(ushort *param_1,void *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    memcpy(param_2,param_1 + 1,(ulonglong)(uVar1 >> 6));
    *(undefined1 *)((longlong)param_2 + (ulonglong)(*param_1 >> 6)) = 0;
    uVar2 = (ulonglong)(*param_1 >> 6);
    do {
      *(short *)((longlong)param_2 + uVar2 * 2) = (short)*(char *)((longlong)param_2 + uVar2);
      bVar3 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar3);
  }
  else {
    memcpy(param_2,param_1 + 1,(ulonglong)(uVar1 >> 5 & 0xfffffffe));
    *(undefined2 *)((longlong)param_2 + (ulonglong)(*param_1 >> 6) * 2) = 0;
  }
  return param_2;
}



// FUNCTION 14279225e FUN_14279225e body=49 status=ok
// SIG undefined FUN_14279225e(void)

void FUN_14279225e(void)

{
  FUN_1447a1747(DAT_14c87eac0,DAT_14c87eac8);
  if (DAT_14c87eac0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142792290 FUN_142792290 body=63 status=ok
// SIG undefined FUN_142792290(void)

longlong FUN_142792290(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  return (ulonglong)((uVar1 & 0xffff) * 2) + (&DAT_14c87eb10)[uVar1 >> 0x10];
}



// FUNCTION 1427922d0 FUN_1427922d0 body=111 status=ok
// SIG undefined FUN_1427922d0(void)

void FUN_1427922d0(uint *param_1,void *param_2)

{
  ushort *puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  puVar1 = (ushort *)((&DAT_14c87eb10)[uVar2 >> 0x10] + (ulonglong)(uVar2 & 0xffff) * 2);
  memcpy(param_2,puVar1 + 1,(ulonglong)(*puVar1 >> 5 & 0xfffffffe));
  *(undefined2 *)((longlong)param_2 + (ulonglong)(*puVar1 >> 6) * 2) = 0;
  return;
}



// FUNCTION 14279233f FUN_14279233f body=509 status=ok
// SIG undefined FUN_14279233f(void)

longlong * FUN_14279233f(longlong *param_1,byte *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 uStack_34;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if (*param_2 == 1) {
      FUN_140056680(&local_38);
    }
    else {
      FUN_1400b22c2(&local_38,param_2 + 2);
    }
    FUN_14021219d(param_1,&local_38);
    puVar4 = *(undefined2 **)param_1[1];
    if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x802,2);
      }
      else {
        FUN_1457251a8(param_1);
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x802) = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    }
    param_2 = param_2 + 0x804;
    puVar4 = *(undefined2 **)param_1[1];
    if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
      }
      else {
        FUN_1457251a8(param_1,param_2);
      }
    }
    else {
      *(undefined2 *)param_2 = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    }
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar2 = param_1[7];
    lVar6 = 0x400;
    if (lVar2 < 0x400) {
      lVar6 = lVar2;
    }
    iVar5 = 0x400;
    if (0 < lVar2) {
      iVar5 = (int)lVar6;
    }
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
      }
      else {
        FUN_14572512c(param_1,&local_38);
      }
    }
    else {
      local_38 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if ((local_38 < -iVar5) || (iVar5 < local_38)) {
      FUN_1468216ba(param_1);
    }
    else {
      *param_2 = (byte)((uint)local_38 >> 0x1f);
      iVar5 = local_38;
      if (local_38 < 0) {
        iVar5 = local_38 * -2;
        local_38 = -local_38;
      }
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,iVar5);
      (**(code **)(*param_1 + 0x170))(param_1,local_24,(ulonglong)(0x1f7 < (int)param_1[8]) << 2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14279253e FUN_14279253e body=22 status=ok
// SIG undefined FUN_14279253e(void)

void FUN_14279253e(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = *(undefined4 *)(&DAT_14c892b40 + (param_2 & 0xffffffff) * 4);
  return;
}



// FUNCTION 142792554 FUN_142792554 body=333 status=ok
// SIG undefined FUN_142792554(void)

void FUN_142792554(uint param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_868 [32];
  undefined8 *local_848;
  uint local_840;
  short local_838 [1028];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_868;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  FUN_14682c8a2(&local_848);
  puVar8 = local_848;
  if (param_1 != 0x7fffffff) {
    lVar7 = (longlong)(int)local_840;
    if ((int)local_840 <= (int)param_1) {
      param_1 = local_840;
    }
    local_840 = 0;
    if (0 < (int)param_1) {
      local_840 = param_1;
    }
    puVar8 = local_848 + (lVar7 - (ulonglong)local_840);
  }
  if (local_840 != 0) {
    puVar1 = puVar8 + (int)local_840;
    do {
      puVar3 = (ushort *)*puVar8;
      uVar2 = *puVar3;
      if ((uVar2 & 1) == 0) {
        memcpy(local_838,puVar3 + 1,(ulonglong)(uVar2 >> 6));
        if (0x3f < *puVar3) {
          uVar2 = *puVar3 >> 6;
          uVar4 = (uint)uVar2;
          uVar6 = (ulonglong)(uVar2 - 1);
          do {
            local_838[uVar6] = (short)*(char *)((longlong)local_838 + uVar6);
            uVar6 = uVar6 - 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      else {
        memcpy(local_838,puVar3 + 1,(ulonglong)(uVar2 >> 5 & 0xfffffffe));
      }
      local_838[*puVar3 >> 6] = 0;
      puVar5 = (undefined1 *)FUN_1400d7a00();
      (**(code **)(*param_2 + 0x10))(param_2,local_838,*puVar5,puVar5 + 4);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar1);
  }
  if (local_848 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_868) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427926a7 FUN_1427926a7 body=832 status=ok
// SIG undefined FUN_1427926a7(void)

uint * FUN_1427926a7(uint *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte bVar8;
  PSRWLOCK pRVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_8a8 [32];
  uint *local_888;
  undefined8 local_880;
  uint uStack_878;
  undefined4 uStack_874;
  uint local_870;
  uint uStack_86c;
  uint uStack_868;
  undefined4 uStack_864;
  uint local_85c;
  uint uStack_858;
  uint uStack_854;
  undefined4 uStack_850;
  uint local_84c;
  longlong local_848;
  uint local_840;
  undefined1 local_83c;
  undefined4 local_838;
  uint uStack_834;
  uint uStack_830;
  undefined4 uStack_82c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  uVar7 = *(uint *)(param_2 + 1);
  uVar6 = (ulonglong)uVar7;
  lVar3 = *param_2;
  if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        *(undefined2 *)((longlong)&local_848 + uVar5 * 2) = *(undefined2 *)(lVar3 + uVar5 * 2);
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    FUN_14142eca0(&local_85c,&local_848,uVar6);
    local_870 = local_85c;
    uStack_86c = uStack_858;
    uStack_868 = uStack_854;
    uStack_864 = uStack_850;
    uStack_874 = CONCAT31(uStack_874._1_3_,1);
    uVar6 = (ulonglong)local_85c;
    pRVar9 = (PSRWLOCK)(&DAT_14c88eb40 + uVar6 * 0x40);
    local_880 = &local_848;
    uStack_878 = uVar7;
    AcquireSRWLockExclusive(pRVar9);
    uVar5 = (ulonglong)(uStack_86c & (&DAT_14c88eb4c)[uVar6 * 0x10]);
    lVar3 = (&DAT_14c88eb50)[uVar6 * 8];
    uVar7 = *(uint *)(lVar3 + uVar5 * 4);
    if (uVar7 != 0) {
LAB_142792771:
      if ((uVar7 & 0xe0000000) != uStack_868) goto LAB_142792819;
      lVar4 = *(longlong *)((&DAT_14c88eb58)[uVar6 * 8] + 0x10 + (ulonglong)(uVar7 >> 0xd & 0xfff8))
      ;
      uVar11 = (ulonglong)((uVar7 & 0xffff) * 2);
      if (*(ushort *)(lVar4 + uVar11) != (ushort)uStack_864) goto LAB_142792819;
      if (0x3f < (ushort)uStack_864) {
        lVar14 = 0;
        uVar10 = (ulonglong)((ushort)uStack_864 >> 6);
        do {
          uVar1 = *(ushort *)(lVar4 + uVar11 + 2 + lVar14);
          uVar2 = *(ushort *)((longlong)&local_848 + lVar14);
          if (uVar1 == uVar2) {
            if (uVar1 == 0) break;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar13 = (uint)uVar1 - (uint)uVar2;
              goto LAB_142792810;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto code_r0x00014279280d;
          }
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) break;
          lVar14 = lVar14 + 2;
        } while( true );
      }
      goto LAB_142792971;
    }
LAB_142792991:
    FUN_14003ad8e(pRVar9,&local_84c,lVar3 + uVar5 * 4,&local_880);
LAB_1427929ac:
    ReleaseSRWLockExclusive(pRVar9);
    *param_1 = local_84c;
  }
  else {
    local_888 = param_1;
    FUN_14472262f(&local_880,lVar3,uVar6);
    local_838 = (undefined4)local_880;
    uStack_834 = local_880._4_4_;
    uStack_830 = uStack_878;
    uStack_82c = uStack_874;
    local_83c = 0;
    uVar6 = (ulonglong)local_880 & 0xffffffff;
    pRVar9 = (PSRWLOCK)(&DAT_14c88eb40 + uVar6 * 0x40);
    local_848 = lVar3;
    local_840 = uVar7;
    AcquireSRWLockExclusive(pRVar9);
    uVar5 = (ulonglong)(uStack_834 & (&DAT_14c88eb4c)[uVar6 * 0x10]);
    lVar4 = (&DAT_14c88eb50)[uVar6 * 8];
    uVar7 = *(uint *)(lVar4 + uVar5 * 4);
    if (uVar7 != 0) {
LAB_1427928ae:
      if ((uVar7 & 0xe0000000) != uStack_830) goto LAB_142792945;
      lVar14 = *(longlong *)
                ((&DAT_14c88eb58)[uVar6 * 8] + 0x10 + (ulonglong)(uVar7 >> 0xd & 0xfff8));
      if (*(ushort *)(lVar14 + (ulonglong)(uVar7 & 0xffff) * 2) != (ushort)uStack_82c)
      goto LAB_142792945;
      if (0x3f < (ushort)uStack_82c) {
        lVar15 = 0;
        uVar11 = (ulonglong)((ushort)uStack_82c >> 6);
        do {
          bVar12 = *(byte *)(lVar14 + (ulonglong)(uVar7 & 0xffff) * 2 + 2 + lVar15);
          bVar8 = *(byte *)(lVar3 + lVar15);
          if (bVar12 == bVar8) {
            if (bVar12 == 0) break;
          }
          else {
            if ((char)(bVar8 | bVar12) < '\0') goto LAB_142792940;
            bVar12 = (&DAT_149e05da0)[bVar12];
            bVar8 = (&DAT_149e05da0)[bVar8];
            if (bVar12 != bVar8) goto LAB_142792940;
          }
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) break;
          lVar15 = lVar15 + 1;
        } while( true );
      }
      goto LAB_142792979;
    }
LAB_142792954:
    FUN_14003ad8e(pRVar9,&local_85c,lVar4 + uVar5 * 4,&local_848);
LAB_14279297f:
    ReleaseSRWLockExclusive(pRVar9);
    *local_888 = local_85c;
    param_1 = local_888;
  }
  if ((local_48 ^ (ulonglong)auStack_8a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_142792940:
  if (bVar12 == bVar8) {
LAB_142792979:
    local_85c = uVar7 & 0x1fffffff;
    goto LAB_14279297f;
  }
LAB_142792945:
  uVar5 = (ulonglong)((int)uVar5 + 1U & (&DAT_14c88eb4c)[uVar6 * 0x10]);
  uVar7 = *(uint *)(lVar4 + uVar5 * 4);
  if (uVar7 == 0) goto LAB_142792954;
  goto LAB_1427928ae;
code_r0x00014279280d:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_142792810:
  if (iVar13 == 0) {
LAB_142792971:
    local_84c = uVar7 & 0x1fffffff;
    goto LAB_1427929ac;
  }
LAB_142792819:
  uVar5 = (ulonglong)((int)uVar5 + 1U & (&DAT_14c88eb4c)[uVar6 * 0x10]);
  uVar7 = *(uint *)(lVar3 + uVar5 * 4);
  if (uVar7 == 0) goto LAB_142792991;
  goto LAB_142792771;
}



// FUNCTION 1427929e8 FUN_1427929e8 body=236 status=ok
// SIG undefined FUN_1427929e8(void)

void FUN_1427929e8(undefined8 *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 & 4) != 0) {
    lVar6 = *param_3;
    lVar4 = param_3[1];
    if ((longlong)(int)lVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      lVar5 = 0;
      do {
        iVar1 = iswspace(*(wint_t *)(lVar6 + lVar5));
        uVar2 = (iVar1 != 0) + uVar2;
        if (iVar1 == 0) break;
        bVar7 = (longlong)(int)lVar4 * 2 + -2 != lVar5;
        lVar5 = lVar5 + 2;
      } while (bVar7);
      lVar6 = (ulonglong)uVar2 * 2 + *param_3;
      uVar3 = 0;
      iVar1 = (int)param_3[1] - uVar2;
      if (iVar1 != 0) {
        lVar4 = (longlong)iVar1;
        do {
          iVar1 = iswspace(*(wint_t *)(lVar6 + -2 + lVar4 * 2));
          if (iVar1 == 0) {
            uVar3 = (undefined4)lVar4;
            break;
          }
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    *param_3 = lVar6;
    *(undefined4 *)(param_3 + 1) = uVar3;
  }
  if (((param_2 & 2) == 0) || ((int)param_3[1] != 0)) {
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)*param_1)(param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142792ad6 FUN_142792ad6 body=547 status=ok
// SIG undefined FUN_142792ad6(void)

longlong * FUN_142792ad6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 142792d14 FUN_142792d14 body=110 status=ok
// SIG undefined FUN_142792d14(void)

undefined8 * FUN_142792d14(undefined8 *param_1,int param_2)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142792daa FUN_142792daa body=31 status=ok
// SIG undefined FUN_142792daa(void)

undefined8 FUN_142792daa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142792dca FUN_142792dca body=99 status=ok
// SIG undefined FUN_142792dca(void)

uint FUN_142792dca(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  if (bVar1 != 0) {
    param_2 = ~param_2;
    do {
      param_1 = param_1 + 1;
      uVar2 = param_2 >> 8 ^
              *(uint *)(&DAT_14c75b150 + (ulonglong)(byte)((byte)param_2 ^ bVar1) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_14c75b150 + (ulonglong)(uVar2 & 0xff) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_14c75b150 + (ulonglong)(uVar2 & 0xff) * 4);
      param_2 = uVar2 >> 8 ^ *(uint *)(&DAT_14c75b150 + (ulonglong)(uVar2 & 0xff) * 4);
      bVar1 = *param_1;
    } while (bVar1 != 0);
    param_2 = ~param_2;
  }
  return param_2;
}



// FUNCTION 142792e2e FUN_142792e2e body=102 status=ok
// SIG undefined FUN_142792e2e(void)

void FUN_142792e2e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  local_28 = puVar1[4];
  uStack_20 = puVar1[5];
  local_38 = *(undefined4 *)(puVar1 + 2);
  uStack_34 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_30 = *(undefined4 *)(puVar1 + 3);
  uStack_2c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  FUN_140393e6d(puVar1 + 9,*puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000142792e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar1[8] + 0x10))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 142792ea0 FUN_142792ea0 body=12 status=ok
// SIG undefined FUN_142792ea0(void)

void FUN_142792ea0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142792ea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142792eac FUN_142792eac body=83 status=ok
// SIG undefined FUN_142792eac(void)

undefined8 * FUN_142792eac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e3c8d0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142792f00 FUN_142792f00 body=84 status=ok
// SIG undefined FUN_142792f00(void)

undefined8 * FUN_142792f00(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x20))(*(longlong **)(lVar1 + 0x40),0xffffffff,0);
  FUN_14018802a(*(undefined8 *)(lVar1 + 0x40));
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *param_1 = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar1 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar1 + 0x54);
  *(undefined8 *)(lVar1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 142792f90 FUN_142792f90 body=83 status=ok
// SIG undefined FUN_142792f90(void)

undefined8 * FUN_142792f90(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149e3c8f0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142792fe4 FUN_142792fe4 body=80 status=ok
// SIG undefined FUN_142792fe4(void)

undefined8 * FUN_142792fe4(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14682e0fa(param_1,iVar1);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 142793034 FUN_142793034 body=94 status=ok
// SIG undefined FUN_142793034(void)

undefined8 * FUN_142793034(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149e3c910;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_14682e0fa(puVar1,iVar2);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
  }
  return puVar1;
}



// FUNCTION 1427930a4 FUN_1427930a4 body=57 status=ok
// SIG undefined FUN_1427930a4(void)

undefined8 * FUN_1427930a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e3c910;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427930e8 FUN_1427930e8 body=4399 status=ok
// SIG undefined FUN_1427930e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427930e8(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  DAT_14c87e708 = 0;
  uRam000000014c87e710 = 0;
  atexit((_func_5014 *)&LAB_142791560);
  local_88 = 4;
  FUN_14153156c(&DAT_14c87e720,L"TaskGraph.AlwaysWaitWithNamedThreadSupport",&DAT_14c87e718,
                L"Default to pumping the named thread tasks when waiting on named threads to avoid potential deadlocks."
               );
  atexit(FUN_142791799);
  DAT_14c896180 = 0;
  DAT_14c896140 = TlsAlloc();
  atexit(FUN_1427917de);
  DAT_14c8960c0 = 0;
  DAT_14c896080 = TlsAlloc();
  atexit(FUN_142791808);
  local_78 = (undefined8 *)0x1f894f0db0d832e4;
  uStack_70 = 0x36fd4aa2accf7eb7;
  _DAT_14c87e7f4 = 0xb0d832e4;
  uRam000000014c87e7f8 = 0x1f894f0d;
  uRam000000014c87e7fc = 0xaccf7eb7;
  uRam000000014c87e800 = 0x36fd4aa2;
  FUN_141005458(&local_78,10,L"Dev-Blueprints",0);
  atexit((_func_5014 *)&LAB_142791c19);
  local_78 = (undefined8 *)0xa22c4d53e1c64328;
  uStack_70 = 0x6417bd8ca36c8e86;
  _DAT_14c87e804 = 0xe1c64328;
  uRam000000014c87e808 = 0xa22c4d53;
  uRam000000014c87e80c = 0xa36c8e86;
  uRam000000014c87e810 = 0x6417bd8c;
  FUN_141005458(&local_78,0,L"Dev-Build",0);
  atexit((_func_5014 *)&LAB_142791c25);
  local_78 = (undefined8 *)0x6e448fb375ec13c;
  uStack_70 = 0x262a717eb50084f0;
  _DAT_14c87e814 = 0x375ec13c;
  uRam000000014c87e818 = 0x6e448fb;
  uRam000000014c87e81c = 0xb50084f0;
  uRam000000014c87e820 = 0x262a717e;
  FUN_141005458(&local_78,4,L"Dev-Core",0);
  atexit((_func_5014 *)&LAB_142791c31);
  local_78 = (undefined8 *)0xf49442e9e4b068ed;
  uStack_70 = 0x2e46bb41a231da0b;
  _DAT_14c87e824 = 0xe4b068ed;
  uRam000000014c87e828 = 0xf49442e9;
  uRam000000014c87e82c = 0xa231da0b;
  uRam000000014c87e830 = 0x2e46bb41;
  FUN_141005458(&local_78,0x28,L"Dev-Editor",0);
  atexit((_func_5014 *)&LAB_142791c3d);
  local_78 = (undefined8 *)0x43b04480cffc743f;
  uStack_70 = 0x171d2073939114df;
  _DAT_14c87e834 = 0xcffc743f;
  uRam000000014c87e838 = 0x43b04480;
  uRam000000014c87e83c = 0x939114df;
  uRam000000014c87e840 = 0x171d2073;
  FUN_141005458(&local_78,0x25,L"Dev-Framework",0);
  atexit((_func_5014 *)&LAB_142791c49);
  local_78 = (undefined8 *)0xbb2044e9b02b49b5;
  uStack_70 = 0x52e40360a30432b7;
  _DAT_14c87e844 = 0xb02b49b5;
  uRam000000014c87e848 = 0xbb2044e9;
  uRam000000014c87e84c = 0xa30432b7;
  uRam000000014c87e850 = 0x52e40360;
  FUN_141005458(&local_78,3,L"Dev-Mobile",0);
  atexit((_func_5014 *)&LAB_142791c55);
  local_78 = (undefined8 *)0x59a149b5a4e4105c;
  uStack_70 = 0x547edfeea7c540c4;
  _DAT_14c87e854 = 0xa4e4105c;
  uRam000000014c87e858 = 0x59a149b5;
  uRam000000014c87e85c = 0xa7c540c4;
  uRam000000014c87e860 = 0x547edfee;
  FUN_141005458(&local_78,0,L"Dev-Networking",0);
  atexit((_func_5014 *)&LAB_142791c61);
  local_78 = (undefined8 *)0x5ae647dc39c831c9;
  uStack_70 = 0x3e1c8e7c9a449c17;
  _DAT_14c87e864 = 0x39c831c9;
  uRam000000014c87e868 = 0x5ae647dc;
  uRam000000014c87e86c = 0x9a449c17;
  uRam000000014c87e870 = 0x3e1c8e7c;
  FUN_141005458(&local_78,0,L"Dev-Online",0);
  atexit((_func_5014 *)&LAB_142791c6d);
  local_78 = (undefined8 *)0xebea4f9878f01b33;
  uStack_70 = 0xccb95aa2b9b484ea;
  _DAT_14c87e874 = 0x78f01b33;
  uRam000000014c87e878 = 0xebea4f98;
  uRam000000014c87e87c = 0xb9b484ea;
  uRam000000014c87e880 = 0xccb95aa2;
  FUN_141005458(&local_78,0x14,L"Dev-Physics",0);
  atexit((_func_5014 *)&LAB_142791c79);
  local_78 = (undefined8 *)0x2d4d43e06631380f;
  uStack_70 = 0x6956a95a8009cf27;
  _DAT_14c87e884 = 0x6631380f;
  uRam000000014c87e888 = 0x2d4d43e0;
  uRam000000014c87e88c = 0x8009cf27;
  uRam000000014c87e890 = 0x6956a95a;
  FUN_141005458(&local_78,0,L"Dev-Platform",0);
  atexit((_func_5014 *)&LAB_142791c85);
  local_78 = (undefined8 *)0x88754afc12f88b9f;
  uStack_70 = 0x383abd29a67cd90c;
  _DAT_14c87e894 = 0x12f88b9f;
  uRam000000014c87e898 = 0x88754afc;
  uRam000000014c87e89c = 0xa67cd90c;
  uRam000000014c87e8a0 = 0x383abd29;
  FUN_141005458(&local_78,0x31,L"Dev-Rendering",0);
  atexit((_func_5014 *)&LAB_142791c91);
  local_78 = (undefined8 *)0xd2704c107b5ae74c;
  uStack_70 = 0xb212a5aa9585798;
  _DAT_14c87e8a4 = 0x7b5ae74c;
  uRam000000014c87e8a8 = 0xd2704c10;
  uRam000000014c87e8ac = 0xa9585798;
  uRam000000014c87e8b0 = 0xb212a5a;
  FUN_141005458(&local_78,0xd,L"Dev-Sequencer",0);
  atexit((_func_5014 *)&LAB_142791c9d);
  local_78 = (undefined8 *)0x1dd64bddd7296918;
  uStack_70 = 0x3cc138849de264a8;
  _DAT_14c87e8b4 = 0xd7296918;
  uRam000000014c87e8b8 = 0x1dd64bdd;
  uRam000000014c87e8bc = 0x9de264a8;
  uRam000000014c87e8c0 = 0x3cc13884;
  FUN_141005458(&local_78,3,L"Dev-VR",0);
  atexit((_func_5014 *)&LAB_142791ca9);
  local_78 = (undefined8 *)0xbfe74afec2a15278;
  uStack_70 = 0x531df7556c1790ff;
  _DAT_14c87e8c4 = 0xc2a15278;
  uRam000000014c87e8c8 = 0xbfe74afe;
  uRam000000014c87e8cc = 0x6c1790ff;
  uRam000000014c87e8d0 = 0x531df755;
  FUN_141005458(&local_78,1,L"Dev-LoadTimes",0);
  atexit((_func_5014 *)&LAB_142791cb5);
  local_78 = (undefined8 *)0x40ec4cc16eaca3d4;
  uStack_70 = 0x9428fc5b7868bed;
  _DAT_14c87e8d4 = 0x6eaca3d4;
  uRam000000014c87e8d8 = 0x40ec4cc1;
  uRam000000014c87e8dc = 0xb7868bed;
  uRam000000014c87e8e0 = 0x9428fc5;
  FUN_141005458(&local_78,3,L"Private-Geometry",0);
  atexit((_func_5014 *)&LAB_142791cc1);
  local_78 = (undefined8 *)0xe0a3462729e575dd;
  uStack_70 = 0x232cdcea9d10d276;
  _DAT_14c87e8e4 = 0x29e575dd;
  uRam000000014c87e8e8 = 0xe0a34627;
  uRam000000014c87e8ec = 0x9d10d276;
  uRam000000014c87e8f0 = 0x232cdcea;
  FUN_141005458(&local_78,0x11,L"Dev-AnimPhys",0);
  atexit((_func_5014 *)&LAB_142791ccd);
  local_78 = (undefined8 *)0x7fd34947af43a65d;
  uStack_70 = 0xd9c1bb0598733e8e;
  _DAT_14c87e8f4 = 0xaf43a65d;
  uRam000000014c87e8f8 = 0x7fd34947;
  uRam000000014c87e8fc = 0x98733e8e;
  uRam000000014c87e900 = 0xd9c1bb05;
  FUN_141005458(&local_78,0xf,L"Dev-Anim",0);
  atexit((_func_5014 *)&LAB_142791cd9);
  local_78 = (undefined8 *)0x1ec74b8f6b266cec;
  uStack_70 = 0x942fc07a30be4d9;
  _DAT_14c87e904 = 0x6b266cec;
  uRam000000014c87e908 = 0x1ec74b8f;
  uRam000000014c87e90c = 0xa30be4d9;
  uRam000000014c87e910 = 0x942fc07;
  FUN_141005458(&local_78,1,L"Dev-ReflectionCapture",0);
  atexit((_func_5014 *)&LAB_142791ce5);
  local_78 = (undefined8 *)0xa23f47ea0df73d61;
  uStack_70 = 0xc41499ab72789e9;
  _DAT_14c87e914 = 0xdf73d61;
  uRam000000014c87e918 = 0xa23f47ea;
  uRam000000014c87e91c = 0xb72789e9;
  uRam000000014c87e920 = 0xc41499a;
  FUN_141005458(&local_78,1,L"Dev-Automation",0);
  atexit((_func_5014 *)&LAB_142791cf1);
  local_78 = (undefined8 *)0xac644f84601d1886;
  uStack_70 = 0xdeac7d6aa16d3de;
  _DAT_14c87e924 = 0x601d1886;
  uRam000000014c87e928 = 0xac644f84;
  uRam000000014c87e92c = 0xaa16d3de;
  uRam000000014c87e930 = 0xdeac7d6;
  FUN_141005458(&local_78,0xaa,L"FortniteMain",0);
  atexit((_func_5014 *)&LAB_142791cfd);
  FUN_145e11b86(&local_78);
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  local_78 = (undefined8 *)0x54a743e08dbc2c5b;
  uStack_70 = 0x7da29060a768fcbb;
  _DAT_14c87e934 = 0x8dbc2c5b;
  uRam000000014c87e938 = 0x54a743e0;
  uRam000000014c87e93c = 0xa768fcbb;
  uRam000000014c87e940 = 0x7da29060;
  FUN_141005458(&local_78,8,L"FortniteValkyrie",0);
  atexit((_func_5014 *)&LAB_142791d09);
  local_78 = (undefined8 *)0x24634af85b4c06b7;
  uStack_70 = 0xcdf5d0dd805bbf70;
  _DAT_14c87e944 = 0x5b4c06b7;
  uRam000000014c87e948 = 0x24634af8;
  uRam000000014c87e94c = 0x805bbf70;
  uRam000000014c87e950 = 0xcdf5d0dd;
  FUN_141005458(&local_78,0xd,L"FortniteSeason",0);
  atexit((_func_5014 *)&LAB_142791d15);
  FUN_14626c97c(&local_78);
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  FUN_14626cb1c(&local_78);
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  local_78 = (undefined8 *)0x6b234c58e7086368;
  uStack_70 = 0x16265e9184391b70;
  _DAT_14c87e954 = 0xe7086368;
  uRam000000014c87e958 = 0x6b234c58;
  uRam000000014c87e95c = 0x84391b70;
  uRam000000014c87e960 = 0x16265e91;
  FUN_141005458(&local_78,0xf,L"FortniteRelease",0);
  atexit((_func_5014 *)&LAB_142791d21);
  FUN_14626ccbc(&local_78);
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  local_78 = (undefined8 *)0x494f01589dffbcd6;
  uStack_70 = 0x3c92a888e2211282;
  _DAT_14c87e964 = 0x9dffbcd6;
  uRam000000014c87e968 = 0x494f0158;
  uRam000000014c87e96c = 0xe2211282;
  uRam000000014c87e970 = 0x3c92a888;
  FUN_141005458(&local_78,10,L"Dev-Enterprise",0);
  atexit((_func_5014 *)&LAB_142791d2d);
  local_78 = (undefined8 *)0x9afe416ff2aed0ac;
  uStack_70 = 0xfa26d6fc8664aa7f;
  _DAT_14c87e974 = 0xf2aed0ac;
  uRam000000014c87e978 = 0x9afe416f;
  uRam000000014c87e97c = 0x8664aa7f;
  uRam000000014c87e980 = 0xfa26d6fc;
  FUN_141005458(&local_78,1,L"Dev-Niagara",0);
  atexit((_func_5014 *)&LAB_142791d39);
  local_78 = (undefined8 *)0xb4c645a5174f1f0b;
  uStack_70 = 0xd0fb917db13f2ee8;
  _DAT_14c87e984 = 0x174f1f0b;
  uRam000000014c87e988 = 0xb4c645a5;
  uRam000000014c87e98c = 0xb13f2ee8;
  uRam000000014c87e990 = 0xd0fb917d;
  FUN_141005458(&local_78,10,L"Dev-Destruction",0);
  atexit((_func_5014 *)&LAB_142791d45);
  local_78 = (undefined8 *)0xe258406c35f94a83;
  uStack_70 = 0x9610247ca31809f5;
  _DAT_14c87e994 = 0x35f94a83;
  uRam000000014c87e998 = 0xe258406c;
  uRam000000014c87e99c = 0xa31809f5;
  uRam000000014c87e9a0 = 0x9610247c;
  FUN_141005458(&local_78,0x29,L"Dev-Physics-Ext",0);
  atexit((_func_5014 *)&LAB_142791d51);
  local_78 = (undefined8 *)0x8b1b42e2b68fc16e;
  uStack_70 = 0x58844feb453215c;
  _DAT_14c87e9a4 = 0xb68fc16e;
  uRam000000014c87e9a8 = 0x8b1b42e2;
  uRam000000014c87e9ac = 0xb453215c;
  uRam000000014c87e9b0 = 0x58844fe;
  FUN_141005458(&local_78,1,L"Dev-PhysicsMaterial-Chaos",0);
  atexit((_func_5014 *)&LAB_142791d5d);
  local_78 = (undefined8 *)0x4273cfc2b2e18506;
  uStack_70 = 0x758bba07a54ef4bb;
  _DAT_14c87e9b4 = 0xb2e18506;
  uRam000000014c87e9b8 = 0x4273cfc2;
  uRam000000014c87e9bc = 0xa54ef4bb;
  uRam000000014c87e9c0 = 0x758bba07;
  FUN_141005458(&local_78,1,L"Dev-CineCamera",0);
  atexit((_func_5014 *)&LAB_142791d69);
  local_78 = (undefined8 *)0xfd1b42ba64f58936;
  uStack_70 = 0xd5d0fa4eba967289;
  _DAT_14c87e9c4 = 0x64f58936;
  uRam000000014c87e9c8 = 0xfd1b42ba;
  uRam000000014c87e9cc = 0xba967289;
  uRam000000014c87e9d0 = 0xd5d0fa4e;
  FUN_141005458(&local_78,1,L"Dev-VirtualProduction",0);
  atexit((_func_5014 *)&LAB_142791d75);
  local_78 = (undefined8 *)0xe64f41ab697dd581;
  uStack_70 = 0xbeb7b628aa4a51ec;
  _DAT_14c87e9d4 = 0x697dd581;
  uRam000000014c87e9d8 = 0xe64f41ab;
  uRam000000014c87e9dc = 0xaa4a51ec;
  uRam000000014c87e9e0 = 0xbeb7b628;
  FUN_141005458(&local_78,0x77,L"UE5-Main",0);
  atexit((_func_5014 *)&LAB_142791d81);
  FUN_1458c5d84(&local_78);
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  local_78 = (undefined8 *)0x24bd4d46d89b5e42;
  uStack_70 = 0xdf6417798412aca8;
  _DAT_14c87e9e4 = 0xd89b5e42;
  uRam000000014c87e9e8 = 0x24bd4d46;
  uRam000000014c87e9ec = 0x8412aca8;
  uRam000000014c87e9f0 = 0xdf641779;
  FUN_141005458(&local_78,0x33,L"UE5-Release",0);
  atexit((_func_5014 *)&LAB_142791d8d);
  FUN_14626cf32(&local_78);
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  local_78 = (undefined8 *)0x1232494859da5d52;
  uStack_70 = 0x70b8e98bb8785978;
  _DAT_14c87e9f4 = 0x59da5d52;
  uRam000000014c87e9f8 = 0x12324948;
  uRam000000014c87e9fc = 0xb8785978;
  uRam000000014c87ea00 = 0x70b8e98b;
  FUN_141005458(&local_78,8,L"UE5-PrivateFrosty",0);
  atexit((_func_5014 *)&LAB_142791d99);
  local_78 = (undefined8 *)0xa60948956f0ed827;
  uStack_70 = 0x90180ea49c91998d;
  _DAT_14c87ea04 = 0x6f0ed827;
  uRam000000014c87ea08 = 0xa6094895;
  uRam000000014c87ea0c = 0x9c91998d;
  uRam000000014c87ea10 = 0x90180ea4;
  FUN_141005458(&local_78,2,L"Dev-MediaFramework",0);
  atexit((_func_5014 *)&LAB_142791da5);
  local_78 = (undefined8 *)0x95ea428230d58be3;
  uStack_70 = 0xd8ebb06aa6e3b159;
  _DAT_14c87ea14 = 0x30d58be3;
  uRam000000014c87ea18 = 0x95ea4282;
  uRam000000014c87ea1c = 0xa6e3b159;
  uRam000000014c87ea20 = 0xd8ebb06a;
  FUN_141005458(&local_78,1,L"Dev-NaniteResearch",0);
  atexit((_func_5014 *)&LAB_142791db1);
  local_58 = 0;
  local_50 = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_145e11f9c();
  FUN_142791bb9();
  FUN_141309714(&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_141470d46(&local_78);
  local_78 = (undefined8 *)0x3f934a3aa90a66af;
  uStack_70 = 0x6b72ebf88c634ae;
  _DAT_14c87ea24 = 0xa90a66af;
  uRam000000014c87ea28 = 0x3f934a3a;
  uRam000000014c87ea2c = 0x88c634ae;
  uRam000000014c87ea30 = 0x6b72ebf;
  FUN_141005458(&local_78,4,L"Dev-GBX-Rendering",0);
  atexit((_func_5014 *)&LAB_142791dbd);
  local_78 = (undefined8 *)0xf15347d2290cd3d3;
  uStack_70._0_4_ = 0x8f235311;
  uStack_70._4_4_ = 0xdadd369;
  _DAT_14c87ea34 = 0x290cd3d3;
  uRam000000014c87ea38 = 0xf15347d2;
  uRam000000014c87ea3c = 0x8f235311;
  uRam000000014c87ea40 = 0xdadd369;
  FUN_141005458(&local_78,2,L"Dev-GBX-Merges",0);
  atexit((_func_5014 *)&LAB_142791dc9);
  _DAT_14c87ea44 = 1;
  DAT_14c89603c = 0x3f50000020a;
  _DAT_14c896044 = 0xd6;
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e30fe0;
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
  *local_78 = &PTR_FUN_149e3c9b0;
  local_78[3] = FUN_14682bcb3;
  local_88 = 0;
  FUN_14170c604(&DAT_14c87ea48,L"FName.List",
                L"List all base FName strings to the output device. Pass -num=n to list the most recent n names."
                ,&local_78);
  if ((int)uStack_70 == 0) {
LAB_142793c69:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70._0_4_ = 0;
    goto LAB_142793c69;
  }
  atexit(FUN_142791e7d);
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e30fe0;
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
  *local_78 = &PTR_FUN_149e3c9b0;
  local_78[3] = FUN_14682bd5f;
  local_88 = 0;
  FUN_14170c604(&DAT_14c87ea58,L"FName.Dump",
                L"Dump all base FName strings to a file. Pass -num=n to dump the most recent n names."
                ,&local_78);
  if ((int)uStack_70 == 0) {
LAB_142793d47:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70._0_4_ = 0;
    goto LAB_142793d47;
  }
  atexit(FUN_142791ec2);
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e30fe0;
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
  *local_78 = &PTR_FUN_149e3c9b0;
  local_78[3] = FUN_14682bf45;
  local_88 = 0;
  FUN_14170c604(&DAT_14c87ea68,L"FName.ListNumbered",
                L"List all numbered FNames to the output devicce (only when UE_FNAME_OUTLINE_NUMBER is set). Pass -num=n to list the most recent n names."
                ,&local_78);
  if ((int)uStack_70 == 0) {
LAB_142793e25:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70._0_4_ = 0;
    goto LAB_142793e25;
  }
  atexit(FUN_142791f07);
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e30fe0;
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
  *local_78 = &PTR_FUN_149e3c9b0;
  local_78[3] = FUN_14682bf60;
  local_88 = 0;
  FUN_14170c604(&DAT_14c87ea78,L"FName.DumpNumbered",
                L"Dump all numbered FNames to a file (only when UE_FNAME_OUTLINE_NUMBER is set). Pass -num=n to dump the most recent n names."
                ,&local_78);
  if ((int)uStack_70 == 0) {
LAB_142793f03:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70._0_4_ = 0;
    goto LAB_142793f03;
  }
  atexit(FUN_142791f4c);
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e35db0;
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
  *local_78 = &PTR_FUN_149e35d40;
  local_78[3] = FUN_142791f91;
  local_88 = 0;
  FUN_14170bbaa(&DAT_14c87ea88,L"FName.Stats",L"Write FName stats to the output device.",&local_78);
  if ((int)uStack_70 == 0) {
LAB_142793fef:
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70._0_4_ = 0;
    goto LAB_142793fef;
  }
  atexit(FUN_142791fc2);
  local_78 = (undefined8 *)0x0;
  uStack_70._0_4_ = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  uStack_70._0_4_ = 2;
  *local_78 = &PTR_LAB_149e35db0;
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
  *local_78 = &PTR_FUN_149e35d40;
  local_78[3] = FUN_142792007;
  local_88 = 0;
  FUN_14170bbaa(&DAT_14c87ea98,L"FName.HashCsv",L"Write FName hash stats to a csv file.",&local_78);
  if ((int)uStack_70 != 0) {
    if (local_78 == (undefined8 *)0x0) goto LAB_1427940db;
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    uStack_70._0_4_ = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1427940db:
  atexit(FUN_142792164);
  local_88 = 0;
  FUN_14153156c(&DAT_14c87eab0,L"FName.UseMmap",&DAT_14c87eaa8,
                L"Whether to use mmap instead of malloc for block allocations");
  atexit(FUN_1427921a9);
  DAT_14c87eac0 = 0;
  _DAT_14c87eac8 = 0;
  atexit(FUN_14279225e);
  InitializeSRWLock((PSRWLOCK)&DAT_14c87ead0);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142794244 FUN_142794244 body=69 status=ok
// SIG undefined FUN_142794244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142794244(void)

{
  _DAT_14c896200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142794286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c896208,1);
  return;
}



// FUNCTION 142794289 FUN_142794289 body=69 status=ok
// SIG undefined FUN_142794289(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142794289(void)

{
  _DAT_14c896218 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427942cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c896220,1);
  return;
}



// FUNCTION 1427942e9 FUN_1427942e9 body=104 status=ok
// SIG undefined FUN_1427942e9(void)

ulonglong FUN_1427942e9(undefined8 param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,param_1);
  uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (cVar1 == '\0') {
    if (param_2 != 0) {
      cVar1 = FUN_14054d46e(&DAT_14c846b20,param_2);
      if (cVar1 != '\0') goto LAB_14279432e;
    }
    uVar2 = 0;
  }
LAB_14279432e:
  return uVar2 & 0xffffffff;
}



// FUNCTION 142794351 FUN_142794351 body=187 status=ok
// SIG undefined FUN_142794351(void)

void FUN_142794351(undefined4 param_1)

{
  longlong lVar1;
  size_t sVar2;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  undefined4 local_108;
  undefined2 **local_100;
  undefined2 *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872ce8);
  if (lVar1 == 0) {
    FUN_1408e76da(&local_f8);
    local_110 = &DAT_149dfb77a;
    local_108 = 0;
    local_100 = &local_f8;
    FUN_14279440d(&local_110,param_1);
    FUN_1409263a6(&local_f8);
  }
  else {
    sVar2 = wcslen(&DAT_14c764000);
    local_f8 = &DAT_14c764000;
    local_f0 = (int)sVar2;
    local_e8 = lVar1;
    FUN_14279440d(&local_f8,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279440d FUN_14279440d body=918 status=ok
// SIG undefined FUN_14279440d(void)

void FUN_14279440d(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    cVar5 = FUN_1427942e9(L"VALazyInit",L"VA-LazyInit");
    lVar3 = DAT_14c896228;
    if (cVar5 != '\0') goto LAB_142794616;
    iVar1 = *(int *)(*(longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar10 = 0;
    }
    else if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(char *)(lVar3 + uVar10) != '\0') goto LAB_142794616;
    local_38 = (longlong *)((ulonglong)local_38 & 0xffffffffffffff00);
    FUN_141273478(uVar2,L"Core.ContentVirtualization",L"LazyInit",&local_38);
    if ((char)local_38 != '\0') goto LAB_142794616;
  }
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c896260) {
    FUN_144b3d300(&DAT_14c896260);
    if (DAT_14c896260 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c896238);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c896238,4000);
      atexit((_func_5014 *)&LAB_1427947a4);
      _Init_thread_footer(&DAT_14c896260);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c896238);
  plVar8 = DAT_14c896230;
  if (DAT_14c896230 == (longlong *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    cVar5 = FUN_1427942e9(L"VADisable",L"VA-Disable");
    lVar3 = DAT_14c896210;
    if (cVar5 == '\0') {
      iVar1 = *(int *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0xc60)
      ;
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar10 = 0;
      }
      else if (iVar1 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar10 = 1;
      }
      if (*(char *)(lVar3 + uVar10) == '\x01') goto LAB_142794579;
      local_38 = (longlong *)0x0;
      uStack_30 = 0;
      cVar5 = FUN_1412734f2(uVar2,L"Core.ContentVirtualization",L"SystemName");
      if (cVar5 == '\0') {
        local_40 = 0;
      }
      else {
        iVar1 = (int)uStack_30 + -1;
        if ((int)uStack_30 == 0) {
          iVar1 = 0;
        }
        FUN_1446f82e2(&local_40,iVar1,local_38,1);
      }
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
LAB_142794579:
      local_40 = 0;
    }
    if (local_40 != 0) {
      puVar9 = (undefined8 *)FUN_14682e1af();
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,&local_38);
        cVar5 = (**(code **)(*local_38 + 8))(local_38,param_1);
        plVar4 = DAT_14c896230;
        plVar8 = local_38;
        if (cVar5 != '\0') {
          DAT_14c896230 = local_38;
          local_38 = (longlong *)0x0;
          if (plVar4 == (longlong *)0x0) goto LAB_142794590;
          (**(code **)*plVar4)(plVar4,1);
        }
        if (local_38 != (longlong *)0x0) {
          (**(code **)*local_38)(local_38,1);
        }
      }
    }
LAB_142794590:
    plVar8 = DAT_14c896230;
    if (DAT_14c896230 == (longlong *)0x0) {
      plVar8 = (longlong *)FUN_14001cc68(0x48,0x10);
      *plVar8 = (longlong)&PTR_FUN_149e417f0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(plVar8 + 1));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar8 + 1),4000);
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[8] = 2;
      (**(code **)(*plVar8 + 8))(plVar8,param_1);
      plVar4 = DAT_14c896230;
      if (DAT_14c896230 != (longlong *)0x0) {
        puVar9 = (undefined8 *)*DAT_14c896230;
        DAT_14c896230 = plVar8;
        (*(code *)*puVar9)(plVar4,1);
        plVar8 = DAT_14c896230;
      }
    }
  }
  DAT_14c896230 = plVar8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c896238);
LAB_142794616:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427947b2 FUN_1427947b2 body=272 status=ok
// SIG undefined FUN_1427947b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427947b2(longlong *param_1,wchar_t *param_2)

{
  int iVar1;
  int extraout_EAX;
  size_t sVar2;
  
  if (DAT_14c868880 == '\0') {
    DAT_14c868880 = '\x01';
    GetLastError();
    sVar2 = wcslen(param_2);
    iVar1 = 0x4000;
    if ((int)sVar2 < 0x4000) {
      iVar1 = (int)sVar2;
    }
    iVar1 = wcsncmp((wchar_t *)&DAT_14c86aa70,param_2,(longlong)iVar1);
    if (iVar1 != 0) {
      wcsncpy((wchar_t *)&DAT_14c86aa70,param_2,0x3ffa);
      _DAT_14c872a64 = 0;
      sVar2 = wcslen((wchar_t *)&DAT_14c86aa70);
      extraout_EAX = (int)sVar2;
      if (extraout_EAX < 0x3fff) {
        wcsncpy((wchar_t *)(&DAT_14c86aa70 + (longlong)extraout_EAX * 2),L"\r\n\r\n",
                (ulonglong)(0x3fff - extraout_EAX) - 1);
        *(undefined2 *)
         ((longlong)extraout_EAX * 2 + 0x14c86aa6e + (ulonglong)(0x3fff - extraout_EAX) * 2) = 0;
      }
    }
  }
  if (DAT_14c868881 != '\x01') {
    (**(code **)(*param_1 + 0x58))(param_1);
    FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
    return;
  }
  if (DAT_14c868882 == '\x01') {
    FUN_14682e305(param_2);
    return;
  }
  FUN_14682e37b(param_2,param_1[2]);
  return;
}



// FUNCTION 1427948c2 FUN_1427948c2 body=35 status=ok
// SIG undefined FUN_1427948c2(void)

void FUN_1427948c2(char param_1)

{
  if (param_1 != '\0') {
    FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
    return;
  }
  FUN_142797bc0(0,0);
  return;
}



// FUNCTION 1427948e6 FUN_1427948e6 body=511 status=ok
// SIG undefined FUN_1427948e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427948e6(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  iVar1 = DAT_14c896264;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  LOCK();
  DAT_14c896264 = DAT_14c896264 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    DAT_14c868881 = 0;
    DAT_14c868883 = 0;
    DAT_14c868880 = 1;
    DAT_14c86a9e8 = 0;
    _DAT_14c872a6e = 0;
    FUN_1447f69b6(&DAT_14c868888);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    FUN_146816410(&DAT_14c872ee0);
    (**(code **)(*param_1 + 0x60))(param_1);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar2 = FUN_14054d46e(&DAT_14c846b20,L"CrashForUAT");
    if (cVar2 == '\0') {
      local_14 = 0;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_141369f9a(&DAT_14c846b20,L"AutomatedPerfTesting=",&local_14);
      cVar2 = FUN_140b3f358();
      if ((cVar2 != '\0') && (local_14 != 0)) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar2 = FUN_14054d46e(&DAT_14c846b20,L"KillAllPopUpBlockingWindows");
        if (cVar2 != '\0') {
          FUN_14279a7c2(L"KillAllPopUpBlockingWindows.bat",0,0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142794af3 FUN_142794af3 body=69 status=ok
// SIG undefined FUN_142794af3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142794af3(void)

{
  _DAT_14c896268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142794b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c896270,1);
  return;
}



// FUNCTION 142794b38 FUN_142794b38 body=1774 status=ok
// SIG undefined FUN_142794b38(void)

void FUN_142794b38(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined2 *puVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined *local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  undefined2 *local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  wchar_t *local_98;
  char local_89;
  undefined2 *local_88;
  int local_80;
  short *local_78;
  undefined2 *local_70;
  wchar_t *local_68;
  int local_60;
  _SYSTEM_POWER_STATUS local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = (wchar_t *)CONCAT44(local_68._4_4_,1);
  local_58._0_8_ = L"PlatformIsRunningWindows";
  local_58.BatteryFullLifeTime = 0x18;
  lVar1 = param_1 + 0x58;
  FUN_1467b4d98(lVar1,&local_58,&local_68);
  uVar6 = FUN_14682e40a();
  local_58._0_8_ = L"PlatformIsRunningWine";
  local_58.BatteryFullLifeTime = 0x15;
  local_68._0_1_ = uVar6;
  FUN_1467b4e24(lVar1,&local_58,&local_68);
  GetSystemPowerStatus(&local_58);
  uVar6 = (char)(0x100000001000101 >> ((local_58.BatteryFlag - 1) * '\b' & 0x3f));
  if (7 < (byte)(local_58.BatteryFlag - 1)) {
    uVar6 = 0;
  }
  local_68 = (wchar_t *)CONCAT71(local_68._1_7_,uVar6);
  local_58._0_8_ = L"IsRunningOnBattery";
  local_58.BatteryFullLifeTime = 0x12;
  FUN_1467b4e24(lVar1,&local_58,&local_68);
  FUN_1401aee94();
  lVar5 = DAT_14c8c26e8;
  local_70 = &DAT_14c8c2c00;
  if ((DAT_14c8c2c00 != 0) && ((longlong)DAT_14c8c26f0 != 0)) {
    lVar13 = 0;
    do {
      if (*(short *)(DAT_14c8c26e8 + 0x18 + lVar13) == DAT_14c8c2c00) {
        local_58._0_8_ = L"DriveStats.Project.Name";
        local_58.BatteryFullLifeTime = 0x17;
        FUN_1467b4f42(lVar1,&local_58,&local_70);
        bVar7 = *(char *)(lVar5 + 0x30 + lVar13) + 1;
        if (bVar7 < 6) {
          local_68 = (wchar_t *)(&PTR_u_Other_149e41c18)[bVar7];
        }
        else {
          local_68 = L"Unknown";
        }
        local_58._0_8_ = L"DriveStats.Project.Type";
        local_58.BatteryFullLifeTime = 0x17;
        FUN_1467b4f42(lVar1,&local_58,&local_68);
        local_68 = (wchar_t *)(*(ulonglong *)(lVar5 + 0x28 + lVar13) >> 10);
        local_58._0_8_ = L"DriveStats.Project.FreeSpaceKb";
        local_58.BatteryFullLifeTime = 0x1e;
        FUN_1467b51e8(lVar1,&local_58,&local_68);
        break;
      }
      lVar13 = lVar13 + 0x38;
    } while ((longlong)DAT_14c8c26f0 * 0x38 - lVar13 != 0);
  }
  local_78 = (short *)FUN_140b74eb8();
  lVar5 = DAT_14c8c26e8;
  if (((local_78 != (short *)0x0) && (*local_78 != 0)) && ((longlong)DAT_14c8c26f0 != 0)) {
    lVar13 = 0;
    do {
      if (*(short *)(DAT_14c8c26e8 + 0x18 + lVar13) == *local_78) {
        local_58._0_8_ = L"DriveStats.PersistentDownload.Name";
        local_58.BatteryFullLifeTime = 0x22;
        FUN_1467b4f42(lVar1,&local_58,&local_78);
        bVar7 = *(char *)(lVar5 + 0x30 + lVar13) + 1;
        if (bVar7 < 6) {
          local_68 = (wchar_t *)(&PTR_u_Other_149e41c18)[bVar7];
        }
        else {
          local_68 = L"Unknown";
        }
        local_58._0_8_ = L"DriveStats.PersistentDownload.Type";
        local_58.BatteryFullLifeTime = 0x22;
        FUN_1467b4f42(lVar1,&local_58,&local_68);
        local_68 = (wchar_t *)(*(ulonglong *)(lVar5 + 0x28 + lVar13) >> 10);
        local_58._0_8_ = L"DriveStats.PersistentDownload.FreeSpaceKb";
        local_58.BatteryFullLifeTime = 0x29;
        FUN_1467b51e8(lVar1,&local_58,&local_68);
        break;
      }
      lVar13 = lVar13 + 0x38;
    } while ((longlong)DAT_14c8c26f0 * 0x38 - lVar13 != 0);
  }
  FUN_145ca34d2(&local_88);
  FUN_1400b22c2(&local_58,&DAT_14c8c27d7);
  FUN_145ca34d2(&local_68);
  local_89 = FUN_14151b2c4(&local_68,&local_58,0);
  local_58._0_8_ = L"Misc.BIOSReleaseDate";
  local_58.BatteryFullLifeTime = 0x14;
  FUN_1467b5274(lVar1,&local_58,&local_88);
  local_58._0_8_ = L"Misc.IsBIOSOutOfDate";
  local_58.BatteryFullLifeTime = 0x14;
  FUN_1467b4e24(lVar1,&local_58,&local_89);
  if (1 < *(int *)(param_1 + 0x78)) {
    local_58._0_8_ = L"GbxIssueIdentifier";
    local_58.BatteryFullLifeTime = 0x12;
    FUN_1467b5274(lVar1,&local_58,param_1 + 0x70);
    local_58._0_8_ = L"GbxUserDescription";
    local_58.BatteryFullLifeTime = 0x12;
    FUN_1467b5274(lVar1,&local_58,param_1 + 0x80);
  }
  FUN_140056680(&local_58,L"RHI.UserDriverVersion");
  puVar9 = (undefined8 *)FUN_1467b678e(&local_58);
  if ((wchar_t *)local_58._0_8_ != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  cVar8 = FUN_14626d33e();
  uVar4 = DAT_14c83def8;
  uVar3 = DAT_14c83deb8;
  uVar2 = DAT_14c83bd18;
  puVar12 = local_88;
  if (local_80 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  if (puVar9 == (undefined8 *)0x0) {
    pwVar10 = L"unknown";
  }
  else if (*(int *)(puVar9 + 1) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)*puVar9;
  }
  pwVar14 = L"false";
  pwVar15 = L"false";
  if (local_89 != '\0') {
    pwVar15 = L"true";
  }
  if (cVar8 != '\0') {
    pwVar14 = L"true";
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  local_f8 = 1;
  FUN_140807d8e(DAT_14c868708 + 8,&local_68,&DAT_149e06124,&DAT_149e065c6);
  pwVar11 = local_68;
  if (local_60 == 0) {
    pwVar11 = L"";
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
    FUN_145c3c252(&DAT_14c8686c8);
    DAT_14c868708 = &DAT_14c8686c8;
    atexit(thunk_FUN_14626bbac);
    _Init_thread_footer(&DAT_14c868710);
  }
  local_f8 = *(uint *)(DAT_14c868708 + 4) & 0x7fffffff;
  local_a0 = &DAT_14c83c938;
  local_a8 = uVar2;
  local_c8 = &DAT_14c83cab8;
  local_d0 = &DAT_14c83ca38;
  local_d8 = uVar3;
  local_e0 = uVar4;
  local_f0 = &DAT_14c83c238;
  local_e8 = pwVar11;
  local_c0 = pwVar10;
  local_b8 = pwVar15;
  local_b0 = puVar12;
  local_98 = pwVar14;
  FUN_140002266(&local_58,
                L"{\n\t\t\"release\": \"%s\",\n\t\t\"environment\": \"%s\",\n\t\t\"tags\": {\n\t\t\t\"build.changelist\": %u,\n\t\t\t\"build.build_configuration\": \"%s\",\n\t\t\t\"build.branch\": \"%s\",\n\t\t\t\"ram.total_size\": \"%u GB\",\n\t\t\t\"ram.total_size_bytes\": %llu,\n\t\t\t\"cpu.vendor\": \"%s\",\n\t\t\t\"cpu.brand\": \"%s\",\n\t\t\t\"gpu.version\": \"%s\",\n\t\t\t\"bios.outdated\" : %s,\n\t\t\t\"bios.release_date\" : \"%s\",\n\t\t\t\"unreal.session_duration\" : %d,\n\t\t\t\"os.long_version\": \"%s\",\n\t\t\t\"unreal.haslocalinichanges\": \"%s\"\n\t\t}\n\t}"
                ,&DAT_14c83bd38);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_68,L"__sentry");
  FUN_14274cab8(&local_68,&local_58);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *)local_58._0_8_ != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142795227 FUN_142795227 body=363 status=ok
// SIG undefined FUN_142795227(void)

void FUN_142795227(HANDLE param_1,undefined8 param_2,longlong param_3,LPCWSTR param_4)

{
  DWORD DVar1;
  ulonglong uVar2;
  HANDLE hObject;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auStackY_98 [32];
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  GetCurrentProcess();
  hObject = CreateFileW(param_4,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    if ((*(uint *)(param_3 + 0x10) < 10) &&
       ((0x30cU >> (*(uint *)(param_3 + 0x10) & 0x1f) & 1) != 0)) {
      bVar4 = DAT_14c83bd1c == 2;
    }
    else {
      bVar4 = DAT_14c83bd1c - 1U < 2;
    }
    uVar3 = 0x1940;
    if (bVar4) {
      uVar3 = 0x1806;
    }
    DVar1 = GetProcessId(param_1);
    MiniDumpWriteDump(param_1,DVar1,hObject,uVar3);
    CloseHandle(hObject);
  }
  if ((uVar2 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427953a1 FUN_1427953a1 body=32 status=ok
// SIG undefined FUN_1427953a1(void)

void FUN_1427953a1(void)

{
  if (DAT_14c8c2598 == '\x01') {
    FUN_1460d26a6();
    DAT_14c8c2598 = '\0';
  }
  return;
}



// FUNCTION 1427953cf FUN_1427953cf body=19 status=ok
// SIG undefined FUN_1427953cf(void)

undefined8 FUN_1427953cf(void)

{
  FUN_14682ea22();
  return 1;
}



// FUNCTION 1427953e2 FUN_1427953e2 body=4287 status=ok
// SIG undefined FUN_1427953e2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1427953e2(longlong *param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  DWORD DVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  size_t sVar12;
  longlong *plVar13;
  LPWSTR lpBuffer;
  int iVar14;
  wchar_t *pwVar15;
  uint nBufferLength;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  LPCWSTR lpPathName;
  undefined2 *puVar19;
  wchar_t **ppwVar20;
  bool bVar21;
  ulonglong uVar22;
  wchar_t local_4b8 [127];
  wchar_t awStack_3ba [269];
  longlong local_1a0 [2];
  wchar_t **local_190;
  wchar_t **local_188;
  wchar_t **local_180;
  wchar_t **local_178;
  wchar_t *local_170;
  undefined8 uStack_168;
  longlong *local_160 [2];
  longlong *local_150 [2];
  wchar_t *local_140;
  longlong *local_138;
  undefined2 *local_130;
  int local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong local_118;
  int local_110;
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  int local_f0;
  void *local_e8;
  int local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  int local_c0;
  wchar_t *local_b8;
  int local_b0 [2];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t **local_68;
  wchar_t **local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  char local_43;
  char local_42;
  char local_41;
  
  bVar21 = true;
  uVar9 = FUN_145789b0e(1);
  lVar10 = FUN_1448324a4(uVar9,L"CrashReportClient");
  bVar3 = FUN_140b3f358();
  lVar16 = DAT_14c896278;
  iVar18 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (iVar18 == 0x40000002) {
    uVar22 = 0;
  }
  else {
    if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
      if (iVar18 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar21 = DVar6 == DVar8;
      }
      else {
        bVar21 = false;
      }
    }
    uVar22 = (ulonglong)(bVar21 ^ 1);
  }
  bVar3 = param_3 == 1 | bVar3 | *(byte *)(lVar16 + uVar22);
  local_43 = '\0';
  if (param_3 != 1 && DAT_14c872ce0 != 0) {
    FUN_14052bb08(DAT_14c872ce0,L"CrashReportClient",L"bImplicitSend",&local_43,&DAT_14c872ce8);
  }
  local_42 = '\x01';
  if (DAT_14c872ce0 == 0) {
    local_41 = '\x01';
  }
  else {
    FUN_14052bb08(DAT_14c872ce0,L"/Script/UnrealEd.CrashReportsPrivacySettings",
                  L"bSendUnattendedBugReports",&local_42,&DAT_14c872a98);
    local_41 = '\x01';
    if (DAT_14c872ce0 != 0) {
      FUN_14052bb08(DAT_14c872ce0,L"/Script/UnrealEd.AnalyticsPrivacySettings",L"bSendUsageData",
                    &local_41,&DAT_14c872a98);
    }
  }
  if (bVar3 == 0) {
    if (lVar10 != 0) {
      return;
    }
  }
  else {
    if (lVar10 != 0) {
      return;
    }
    if (local_42 == '\0') {
      return;
    }
  }
  iVar18 = 0;
  memset(awStack_3ba + 1,0,0x212);
  FUN_144737500(local_4b8,0x80,L"%s_%04i",&DAT_14c83ccb8,(int)param_1[0xd]);
  FUN_140056680(&local_e8,&DAT_14c83c038);
  puVar11 = (undefined8 *)FUN_14047ac8c();
  if (*(int *)(puVar11 + 1) == 0) {
    local_b8 = L"";
  }
  else {
    local_b8 = (wchar_t *)*puVar11;
  }
  if (local_b8 != (wchar_t *)0x0) {
    sVar12 = wcslen(local_b8);
    iVar18 = (int)sVar12;
  }
  local_a8 = L"Crashes";
  uStack_a0 = CONCAT44(uStack_a0._4_4_,7);
  local_b0[0] = iVar18;
  local_98 = local_4b8;
  sVar12 = wcslen(local_4b8);
  local_90 = (int)sVar12;
  FUN_140bee87a(&local_130,&local_b8,3);
  plVar13 = (longlong *)FUN_14054d1d4();
  puVar19 = &DAT_149dfb77a;
  if (local_128 != 0) {
    puVar19 = local_130;
  }
  (**(code **)(*plVar13 + 0x100))(plVar13,&local_c8,puVar19);
  plVar13 = (longlong *)FUN_14054d1d4();
  pwVar15 = L"";
  if (local_c0 != 0) {
    pwVar15 = local_c8;
  }
  cVar4 = (**(code **)(*plVar13 + 0x58))(plVar13,pwVar15,1);
  if (cVar4 != '\0') {
    local_b8 = local_c8;
    if (local_c0 == 0) {
      local_b8 = L"";
    }
    iVar18 = 0;
    if (local_b8 != (wchar_t *)0x0) {
      sVar12 = wcslen(local_b8);
      iVar18 = (int)sVar12;
    }
    local_a8 = L"CrashContext.runtime-xml";
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0x18);
    local_b0[0] = iVar18;
    FUN_140bee87a(&local_f8,&local_b8,2);
    puVar19 = &DAT_149dfb77a;
    if (local_f0 != 0) {
      puVar19 = local_f8;
    }
    (**(code **)(*param_1 + 8))(param_1,puVar19);
    pwVar15 = L"";
    if (local_c0 != 0) {
      pwVar15 = local_c8;
    }
    (**(code **)(*param_1 + 0x40))(param_1,pwVar15,param_2);
    pwVar15 = L"";
    if (local_c0 != 0) {
      pwVar15 = local_c8;
    }
    FUN_1467b6dc4(pwVar15);
    FUN_14274cbd6(local_1a0,&local_c8);
    if (local_1a0[0] != 0) {
      FUN_1400020a8();
    }
    pwVar15 = local_c8;
    if (local_c0 == 0) {
      pwVar15 = L"";
    }
    FUN_140002266(&local_68,L"\"%s\"",pwVar15);
    if (local_41 == '\0') {
      FUN_1400020e8(&local_68,L" -NoAnalytics ",0xe);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) {
      bVar17 = 0;
    }
    else {
      bVar17 = DAT_14c8442b8 ^ 1;
    }
    if (local_43 == '\x01') {
      FUN_1400020e8(&local_68,L" -ImplicitSend",0xe);
    }
    if ((byte)(bVar17 ^ 1 | bVar3) == 1) {
      FUN_1400020e8(&local_68,L" -Unattended",0xc);
    }
    if (bVar17 == 0) {
      FUN_1400020e8(&local_68,L" -nullrhi",9);
    }
    FUN_140056680(&local_58,L" -AppName=");
    _Src = local_e8;
    local_b0[0] = (int)uStack_50;
    if ((int)uStack_50 < 2) {
      local_b8 = (wchar_t *)0x0;
      local_b0[0] = local_e0;
      if ((longlong)local_e0 == 0) {
        local_b0[1] = 0;
      }
      else {
        FUN_1446dd670(&local_b8,local_e0,0);
        memcpy(local_b8,_Src,(longlong)local_e0 * 2);
      }
    }
    else {
      iVar18 = local_e0 + -1;
      if (local_e0 == 0) {
        iVar18 = 0;
      }
      local_b8 = local_58;
      local_b0[1] = uStack_50._4_4_;
      local_58 = (wchar_t *)0x0;
      uStack_50 = (longlong *)0x0;
      if (iVar18 + local_b0[0] < local_b0[0]) goto LAB_142796392;
      if (local_b0[1] < iVar18 + local_b0[0]) {
        FUN_1446f8c06(&local_b8);
      }
      FUN_1400020e8(&local_b8,local_e8,iVar18);
    }
    iVar18 = local_b0[0] + -1;
    if (local_b0[0] == 0) {
      iVar18 = 0;
    }
    FUN_1400020e8(&local_68,local_b8,iVar18);
    if (local_b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58);
    sVar12 = wcslen(local_4b8);
    iVar18 = (int)uStack_50;
    iVar2 = uStack_50._4_4_;
    if ((int)sVar12 == 0) {
      local_b8 = local_58;
      local_58 = (wchar_t *)0x0;
      local_b0[0] = (int)uStack_50;
      local_b0[1] = uStack_50._4_4_;
      uStack_50 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)sVar12 + (uint)((int)uStack_50 == 0);
      local_b8 = local_58;
      local_58 = (wchar_t *)0x0;
      local_b0[0] = (int)uStack_50;
      local_b0[1] = uStack_50._4_4_;
      uStack_50 = (longlong *)0x0;
      iVar14 = iVar5 + iVar18;
      if (iVar14 < iVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar5);
      }
      if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar14);
      }
      if (iVar2 < iVar14) {
        FUN_1446f8c06(&local_b8);
      }
      FUN_1400020e8(&local_b8,local_4b8,sVar12 & 0xffffffff);
    }
    iVar18 = local_b0[0] + -1;
    if (local_b0[0] == 0) {
      iVar18 = 0;
    }
    FUN_1400020e8(&local_68,local_b8,iVar18);
    if (local_b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_146831420(&local_58);
    if (1 < (int)uStack_50) {
      FUN_140056680(&local_78,L" -DebugSymbols=");
      pwVar15 = local_58;
      local_b0[0] = (int)uStack_70;
      if ((int)uStack_70 < 2) {
        local_b8 = (wchar_t *)0x0;
        local_b0[0] = (int)uStack_50;
        lVar16 = (longlong)(int)uStack_50;
        if (lVar16 == 0) {
          local_b0[1] = 0;
        }
        else {
          FUN_1446dd670(&local_b8,(ulonglong)uStack_50 & 0xffffffff,0);
          memcpy(local_b8,pwVar15,lVar16 * 2);
        }
      }
      else {
        iVar18 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar18 = 0;
        }
        local_b8 = local_78;
        local_b0[1] = uStack_70._4_4_;
        local_78 = (wchar_t *)0x0;
        uStack_70 = 0;
        if (iVar18 + local_b0[0] < local_b0[0]) {
LAB_142796392:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar18);
        }
        if (local_b0[1] < iVar18 + local_b0[0]) {
          FUN_1446f8c06(&local_b8);
        }
        FUN_1400020e8(&local_b8,local_58,iVar18);
      }
      iVar18 = local_b0[0] + -1;
      if (local_b0[0] == 0) {
        iVar18 = 0;
      }
      FUN_1400020e8(&local_68,local_b8,iVar18);
      if (local_b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    DVar6 = GetDllDirectoryW(0,(LPWSTR)0x0);
    nBufferLength = DVar6 * 2 + 2;
    lpPathName = (LPCWSTR)0x0;
    if (nBufferLength != 0) {
      lpBuffer = (LPWSTR)FUN_14001cc68((ulonglong)nBufferLength);
      lpPathName = (LPCWSTR)0x0;
      if (lpBuffer != (LPWSTR)0x0) {
        memset(lpBuffer,0,(ulonglong)nBufferLength);
        GetDllDirectoryW(nBufferLength,lpBuffer);
        SetDllDirectoryW((LPCWSTR)0x0);
        lpPathName = lpBuffer;
      }
    }
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    uVar22 = 0;
    cVar4 = FUN_14063337c(&DAT_14c846b20,L"AbsCrashReportClientLog=",&local_78,1,0);
    pwVar15 = local_78;
    if (cVar4 != '\0') {
      local_108 = (wchar_t *)0x0;
      lVar16 = (longlong)(int)uStack_70;
      uStack_100._0_4_ = (int)uStack_70;
      if (lVar16 == 0) {
        uVar7 = 0;
        iVar18 = 0;
        local_a8 = (wchar_t *)0x0;
      }
      else {
        FUN_1446dd670(&local_108,uStack_70 & 0xffffffff,0);
        memcpy(local_108,pwVar15,lVar16 * 2);
        local_a8 = local_108;
        iVar18 = (int)uStack_100;
        uVar7 = uStack_100._4_4_;
      }
      local_188 = &local_98;
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,3);
      local_108 = (wchar_t *)0x0;
      uStack_100 = 0;
      uStack_a0 = CONCAT44(uVar7,iVar18);
      local_190 = &local_b8;
      FUN_1407adb6e(&local_d8);
      FUN_140230a63();
      FUN_140230ad0(&DAT_14c8731a8,&local_118,L" -abslog=\"{0}\"",&local_d8);
      iVar18 = local_110 + -1;
      if (local_110 == 0) {
        iVar18 = 0;
      }
      FUN_1400020e8(&local_68,local_118,iVar18);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_1407adb3e(local_d8,local_d0);
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    pwVar15 = (wchar_t *)FUN_140d6ac5a();
    awStack_3ba[1] = 0;
    sVar12 = wcslen(awStack_3ba + 1);
    extraout_EAX = (int)sVar12;
    if (extraout_EAX < 0x109) {
      wcsncpy(awStack_3ba + (longlong)extraout_EAX + 1,pwVar15,(ulonglong)(0x109 - extraout_EAX) - 1
             );
      awStack_3ba[(longlong)extraout_EAX + (ulonglong)(0x109 - extraout_EAX)] = L'\0';
    }
    sVar12 = wcslen(awStack_3ba + 1);
    extraout_EAX_00 = (int)sVar12;
    if (extraout_EAX_00 < 0x109) {
      wcsncpy(awStack_3ba + (longlong)extraout_EAX_00 + 1,L"Binaries/",
              (ulonglong)(0x109 - extraout_EAX_00) - 1);
      awStack_3ba[(longlong)extraout_EAX_00 + (ulonglong)(0x109 - extraout_EAX_00)] = L'\0';
    }
    sVar12 = wcslen(awStack_3ba + 1);
    extraout_EAX_01 = (int)sVar12;
    if (extraout_EAX_01 < 0x109) {
      wcsncpy(awStack_3ba + (longlong)extraout_EAX_01 + 1,L"Win64",
              (ulonglong)(0x109 - extraout_EAX_01) - 1);
      awStack_3ba[(longlong)extraout_EAX_01 + (ulonglong)(0x109 - extraout_EAX_01)] = L'\0';
    }
    sVar12 = wcslen(awStack_3ba + 1);
    extraout_EAX_02 = (int)sVar12;
    if (extraout_EAX_02 < 0x109) {
      wcsncpy(awStack_3ba + (longlong)extraout_EAX_02 + 1,L"/",
              (ulonglong)(0x109 - extraout_EAX_02) - 1);
      awStack_3ba[(longlong)extraout_EAX_02 + (ulonglong)(0x109 - extraout_EAX_02)] = L'\0';
    }
    sVar12 = wcslen(awStack_3ba + 1);
    extraout_EAX_03 = (int)sVar12;
    if (extraout_EAX_03 < 0x109) {
      wcsncpy(awStack_3ba + (longlong)extraout_EAX_03 + 1,L"CrashReportClient.exe",
              (ulonglong)(0x109 - extraout_EAX_03) - 1);
      awStack_3ba[(longlong)extraout_EAX_03 + (ulonglong)(0x109 - extraout_EAX_03)] = L'\0';
    }
    DVar6 = GetFileAttributesW(awStack_3ba + 1);
    if (DVar6 == 0xffffffff) {
      bVar21 = false;
    }
    else {
      plVar13 = (longlong *)FUN_14054d1d4();
      puVar11 = (undefined8 *)FUN_14047ac8c();
      if (*(int *)(puVar11 + 1) == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = (undefined2 *)*puVar11;
      }
      (**(code **)(*plVar13 + 0xf8))(plVar13,&local_170,puVar19);
      local_178 = &local_98;
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,3);
      local_a8 = local_170;
      uStack_a0 = uStack_168;
      local_170 = (wchar_t *)0x0;
      uStack_168 = 0;
      local_180 = &local_b8;
      FUN_1407adb6e(&local_d8);
      FUN_140230a63();
      FUN_140230ad0(&DAT_14c8731a8,&local_118,L" -ProjectSavedDir=\"{0}\"",&local_d8);
      iVar18 = local_110 + -1;
      if (local_110 == 0) {
        iVar18 = 0;
      }
      FUN_1400020e8(&local_68,local_118,iVar18);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_1407adb3e(local_d8,local_d0);
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      ppwVar20 = local_68;
      if ((int)local_60 == 0) {
        ppwVar20 = (wchar_t **)&DAT_149dfb77a;
      }
      FUN_14279b518(&local_b8,awStack_3ba + 1,ppwVar20,1,uVar22 & 0xffffffffffffff00,0,0,0,0,0,0,0,0
                   );
      bVar21 = local_b8 != (wchar_t *)0x0;
    }
    if (lpPathName != (LPCWSTR)0x0) {
      SetDllDirectoryW(lpPathName);
      FUN_1400020a8(lpPathName);
    }
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar21) goto LAB_142795935;
  }
  if (DAT_14c872be8 != 0) {
    FUN_145bf78ac();
  }
  if (bVar3 == 0) {
    pwVar15 = L"Game";
    if (DAT_14c872bf0 != '\0') {
      pwVar15 = L"Commandlet";
    }
    FUN_140056680(&local_118,pwVar15);
    FUN_140233b1a(local_160,&local_118);
    FUN_140009b9a(local_150,&local_e8);
    local_b8 = L"AppHasCrashed";
    local_b0[0] = 0xd;
    FUN_1446e940c(local_120,&local_b8);
    local_b8 = L"MessageDialog";
    local_b0[0] = 0xd;
    FUN_1446e940c(local_11c,&local_b8);
    local_b8 = L"The {0} {1} has crashed and will close";
    local_b0[0] = 0x26;
    FUN_140208c1e(&local_d8,local_11c,local_120,&local_b8);
    FUN_14023409e(&local_140,&local_d8,1);
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,4);
    FUN_14023423e(&local_a8,local_150);
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,4);
    FUN_14023423e(local_88,local_160);
    local_60 = &local_78;
    local_68 = &local_b8;
    FUN_14010d304(&local_f8);
    local_58 = local_140;
    uStack_50 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_78,&local_58,&local_f8);
    FUN_14007f2db(local_f8,local_f0);
    if (local_f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar16 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_b8 + lVar16) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_b8 + lVar16) + 0x10))();
        *(undefined8 *)((longlong)&local_b8 + lVar16) = 0;
        *(undefined4 *)((longlong)local_b0 + lVar16) = 0;
      }
      lVar16 = lVar16 + -0x20;
    } while (lVar16 != -0x10);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_138 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    if (local_160[0] != (longlong *)0x0) {
      (**(code **)(*local_160[0] + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_f8,&DAT_14c86aa70);
    FUN_140233b1a(&local_b8,&local_f8);
    FUN_1427864dc(0,0,&local_b8,&local_78);
    if (local_b8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x10))();
    }
    if (local_f8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
LAB_142795935:
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_130 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1427964c0 FUN_1427964c0 body=61 status=ok
// SIG undefined FUN_1427964c0(void)

void FUN_1427964c0(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)param_1[7]);
  *(int *)(param_1[6] + 0x30) = *(int *)(param_1[6] + 0x30) + -1;
  *param_1 = &PTR_FUN_149e40418;
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427964fe FUN_1427964fe body=207 status=ok
// SIG undefined FUN_1427964fe(void)

void FUN_1427964fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  HANDLE hFile;
  undefined1 auStackY_278 [32];
  undefined8 local_240;
  FILETIME local_238;
  undefined2 *local_230;
  char local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_278;
  local_240 = param_3;
  FUN_140659024(&local_238);
  *local_230 = 0;
  hFile = CreateFileW((LPCWSTR)local_238,0x100,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,(HANDLE)0x0
                     );
  if (local_220 == '\x01') {
    FUN_1400020a8(local_238);
  }
  if (hFile != (HANDLE)0xffffffffffffffff) {
    local_238 = (FILETIME)FUN_145c31d09(&local_240);
    SetFileTime(hFile,(FILETIME *)0x0,(FILETIME *)0x0,&local_238);
    CloseHandle(hFile);
  }
  if ((local_18 ^ (ulonglong)auStackY_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427965ce FUN_1427965ce body=574 status=ok
// SIG undefined FUN_1427965ce(void)

longlong * FUN_1427965ce(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  HANDLE hFile;
  int iVar8;
  LPCWSTR lpFileName;
  wchar_t *_Str1;
  longlong lVar9;
  short sVar10;
  undefined1 auStackY_288 [32];
  undefined8 local_250;
  undefined2 *local_248;
  char local_238;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_288;
  FUN_140659024(&local_250,param_3);
  *local_248 = 0;
  FUN_140056680(param_2,local_250);
  if (local_238 == '\x01') {
    FUN_1400020a8(local_250);
  }
  if ((int)param_2[1] == 0) {
    lpFileName = L"";
  }
  else {
    lpFileName = (LPCWSTR)*param_2;
  }
  hFile = CreateFileW(lpFileName,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = 0;
    }
    DVar5 = iVar4 + 10;
    do {
      FUN_14077541c(param_2,DVar5,1);
      DVar5 = GetFinalPathNameByHandleW(hFile,(LPWSTR)*param_2,*(DWORD *)(param_2 + 1),0);
      if (DVar5 == 0) {
        FUN_140659024(&local_250,param_3);
        *local_248 = 0;
        FUN_14020fad6(param_2,local_250);
        if (local_238 == '\x01') {
          FUN_1400020a8(local_250);
        }
        goto LAB_1427966ea;
      }
    } while (*(uint *)(param_2 + 1) <= DVar5);
    FUN_14077541c(param_2,DVar5 + 1,1);
LAB_1427966ea:
    CloseHandle(hFile);
  }
  iVar4 = (int)param_2[1];
  pwVar1 = (wchar_t *)*param_2;
  _Str1 = L"";
  if (iVar4 != 0) {
    _Str1 = pwVar1;
  }
  iVar6 = wcsncmp(_Str1,L"\\\\?\\UNC\\",8);
  if (iVar6 == 0) {
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = 0;
    }
    iVar7 = 8;
    if (iVar6 < 8) {
      iVar7 = iVar6;
    }
    iVar8 = 2;
    if (2 < iVar7) {
      iVar8 = iVar7;
    }
    if (2 < iVar6) {
      if (iVar4 - iVar8 != 0) {
        memmove(pwVar1 + 2,pwVar1 + (ulonglong)(iVar8 - 2U) + 2,(longlong)(iVar4 - iVar8) * 2);
        iVar4 = (int)param_2[1];
      }
      *(uint *)(param_2 + 1) = iVar4 - (iVar8 - 2U);
      FUN_1449649ae(param_2);
    }
  }
  else {
    FUN_140c540b4(param_2,L"\\\\?\\",4,0);
  }
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      sVar10 = *(short *)(lVar2 + lVar9);
      if (sVar10 == 0x5c) {
        sVar10 = 0x2f;
      }
      *(short *)(lVar2 + lVar9) = sVar10;
      lVar9 = lVar9 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar9);
  }
  if ((local_30 ^ (ulonglong)auStackY_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279680e FUN_14279680e body=267 status=ok
// SIG undefined FUN_14279680e(void)

undefined8 * FUN_14279680e(undefined8 param_1,undefined8 param_2,uint param_3)

{
  HANDLE pvVar1;
  undefined8 *puVar2;
  DWORD dwShareMode;
  undefined1 auStackY_278 [32];
  LPCWSTR local_240;
  undefined2 *local_238;
  char local_228;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_278;
  dwShareMode = (param_3 & 0xff) * 2 + 1;
  FUN_140659024(&local_240);
  *local_238 = 0;
  pvVar1 = CreateFileW(local_240,0x80000000,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,3,0x40000080,
                       (HANDLE)0x0);
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if (pvVar1 != (HANDLE)0xffffffffffffffff) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    FUN_14279691a(puVar2,pvVar1,0x80000000,dwShareMode);
    if ((1 < puVar2[1] + 1) && (puVar2[7] != -1)) goto LAB_1427968da;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_1427968da:
  if ((local_20 ^ (ulonglong)auStackY_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 14279691a FUN_14279691a body=155 status=ok
// SIG undefined FUN_14279691a(void)

undefined8 *
FUN_14279691a(undefined8 *param_1,HANDLE param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  BOOL BVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149e404d0;
  param_1[1] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_4;
  *(undefined4 *)(param_1 + 9) = param_5;
  if (1 < (longlong)param_2 + 1U) {
    BVar1 = GetFileSizeEx(param_2,&local_38);
    param_1[7] = -(ulonglong)(BVar1 == 0) | local_38.QuadPart;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427969b6 FUN_1427969b6 body=303 status=ok
// SIG undefined FUN_1427969b6(void)

longlong * FUN_1427969b6(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  HANDLE pvVar1;
  longlong *plVar2;
  DWORD dwDesiredAccess;
  undefined1 auStackY_288 [32];
  LPCWSTR local_250;
  undefined2 *local_248;
  char local_238;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_288;
  dwDesiredAccess = (uint)(byte)~param_4 * -0x80000000 + 0xc0000000;
  FUN_140659024(&local_250);
  *local_248 = 0;
  pvVar1 = CreateFileW(local_250,dwDesiredAccess,(uint)param_4,(LPSECURITY_ATTRIBUTES)0x0,
                       (uint)param_3 * 2 + 2,0x80,(HANDLE)0x0);
  if (local_238 == '\x01') {
    FUN_1400020a8(local_250);
  }
  if (pvVar1 != (HANDLE)0xffffffffffffffff) {
    plVar2 = (longlong *)FUN_14001cc68(0x50,0x10);
    FUN_14279691a(plVar2,pvVar1,dwDesiredAccess,param_4);
    if ((1 < plVar2[1] + 1U) && (plVar2[7] != -1)) {
      if (param_3 != 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,0);
      }
      goto LAB_142796a94;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)*plVar2)(plVar2,1);
    }
  }
  plVar2 = (longlong *)0x0;
LAB_142796a94:
  if ((local_30 ^ (ulonglong)auStackY_288) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142796ae6 FUN_142796ae6 body=326 status=ok
// SIG undefined FUN_142796ae6(void)

undefined8 * FUN_142796ae6(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  HANDLE hFile;
  HANDLE pvVar2;
  undefined8 *puVar3;
  undefined1 auStackY_288 [32];
  LPCWSTR local_250;
  undefined2 *local_248;
  char local_238;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_288;
  lVar1 = (**(code **)(*param_1 + 0x80))();
  if (0 < lVar1) {
    FUN_140659024(&local_250,param_2);
    *local_248 = 0;
    hFile = CreateFileW(local_250,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (local_238 == '\x01') {
      FUN_1400020a8(local_250);
    }
    if (hFile != (HANDLE)0xffffffffffffffff) {
      pvVar2 = CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
      if (pvVar2 != (HANDLE)0x0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar3[1] = lVar1;
        *puVar3 = &PTR_FUN_149e40528;
        puVar3[2] = hFile;
        puVar3[3] = pvVar2;
        FUN_140056680(puVar3 + 4,param_2);
        *(undefined4 *)(puVar3 + 6) = 0;
        goto LAB_142796bf2;
      }
      CloseHandle(hFile);
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_142796bf2:
  if ((local_30 ^ (ulonglong)auStackY_288) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142796c2d FUN_142796c2d body=69 status=ok
// SIG undefined FUN_142796c2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142796c2d(void)

{
  _DAT_14c8c2650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142796c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8c2658,1);
  return;
}



// FUNCTION 142796c72 FUN_142796c72 body=69 status=ok
// SIG undefined FUN_142796c72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142796c72(void)

{
  _DAT_14c8c2668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142796cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8c2670,1);
  return;
}



// FUNCTION 142796cb8 FUN_142796cb8 body=175 status=ok
// SIG undefined FUN_142796cb8(void)

void FUN_142796cb8(void)

{
  if (DAT_14c8c2679 != '\0') {
    return;
  }
  DAT_14c8c2679 = 1;
  DAT_14c83e6a8 = VirtualAlloc((LPVOID)0x0,0x2000000,0x3000,4);
  FUN_142796d67();
  FUN_14016c8d4();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  FUN_145bf78ac(&DAT_14c872ee0);
  return;
}



// FUNCTION 142796d67 FUN_142796d67 body=184 status=ok
// SIG undefined FUN_142796d67(void)

undefined1 FUN_142796d67(void)

{
  BOOL BVar1;
  BOOL BVar2;
  HANDLE ProcessHandle;
  undefined1 auStack_38 [36];
  BOOL local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c4524) && (FUN_144b3d300(&DAT_14c8c4524), DAT_14c8c4524 == -1)) {
    local_14 = 0;
    ProcessHandle = GetCurrentProcess();
    BVar2 = IsProcessInJob(ProcessHandle,(HANDLE)0x0,&local_14);
    BVar1 = local_14;
    if (BVar2 == 0) {
      GetLastError();
    }
    DAT_14c8c4520 = BVar2 != 0 && BVar1 != 0;
    _Init_thread_footer(&DAT_14c8c4524);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14c8c4520;
}



// FUNCTION 142796e20 FUN_142796e20 body=55 status=ok
// SIG undefined FUN_142796e20(void)

void * FUN_142796e20(void)

{
  void *pvVar1;
  
  if (DAT_14c8c2680 == (void *)0x0) {
    pvVar1 = malloc(0x1548);
    FUN_1416429b8(pvVar1);
    DAT_14c8c2680 = pvVar1;
  }
  return DAT_14c8c2680;
}



// FUNCTION 142796e57 FUN_142796e57 body=69 status=ok
// SIG undefined FUN_142796e57(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142796e57(void)

{
  _DAT_14c8c26b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142796e99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8c26c0,1);
  return;
}



// FUNCTION 142796e9c FUN_142796e9c body=69 status=ok
// SIG undefined FUN_142796e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142796e9c(void)

{
  _DAT_14c8c26d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142796ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8c26d8,1);
  return;
}



// FUNCTION 142796ee1 FUN_142796ee1 body=49 status=ok
// SIG undefined FUN_142796ee1(void)

void FUN_142796ee1(void)

{
  FUN_14279d8c2(DAT_14c8c26e8,DAT_14c8c26f0);
  if (DAT_14c8c26e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142796f12 FUN_142796f12 body=292 status=ok
// SIG undefined FUN_142796f12(void)

void FUN_142796f12(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  longlong *local_40 [2];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c8c4528 == '\x01') {
    if (DAT_14c8c2700 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
  }
  else {
    DAT_14c8c4528 = '\x01';
    if (DAT_14c868883 == '\x01') {
      local_30 = L"PureVirtualFunctionCalledWhileRunningApp";
      local_28 = 0x28;
      FUN_1446e940c(local_44,&local_30);
      local_30 = L"Core";
      local_28 = 4;
      FUN_1446e940c(local_48,&local_30);
      local_30 = 
      L"Pure virtual function being called while application was running (GIsRunning == 1).";
      local_28 = 0x53;
      FUN_140208c1e(local_40,local_48,local_44,&local_30);
      FUN_1427863e0();
      FUN_1427864dc(0,0,local_40,&DAT_14c873210);
      if (local_40[0] != (longlong *)0x0) {
        (**(code **)(*local_40[0] + 0x10))();
      }
    }
    FUN_140033559(".\\Runtime/Core/Private/Windows/WindowsPlatformMisc.cpp",0x314,
                  L"Pure virtual function being called");
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142797044 FUN_142797044 body=2503 status=ok
// SIG undefined FUN_142797044(void)

/* WARNING: Removing unreachable block (ram,0x0001427975e2) */

void FUN_142797044(void)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  IUnknown *pIVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  HRESULT HVar9;
  int iVar10;
  ULONG UVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  char cVar17;
  undefined1 auStackY_1a8 [32];
  longlong *local_160;
  longlong local_158;
  int local_150;
  undefined4 uStack_14c;
  undefined1 local_140 [8];
  int local_138;
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [8];
  short local_110;
  undefined6 uStack_10e;
  longlong local_100;
  short local_f8;
  undefined6 uStack_f6;
  uint local_e4;
  longlong *local_e0;
  IUnknown *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8 [11];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStackY_1a8;
  timeBeginPeriod(1);
  FUN_14016c8d4();
  FUN_1400b22c2(local_b8,&DAT_14c8c27d7);
  FUN_145ca34d2(&local_100);
  cVar7 = FUN_14151b2c4(&local_100,local_b8);
  if (cVar7 != '\0') {
    FUN_1400b22c2(local_b8,&DAT_14c8c27d7);
    FUN_145ca34d2(&local_100);
    FUN_14151b2c4(&local_100,local_b8);
  }
  FUN_145bdbcfa();
  local_d0 = (longlong *)0x0;
  local_d8 = (IUnknown *)0x0;
  uVar8 = CoInitializeEx((LPVOID)0x0,2);
  if (uVar8 < 2) {
    HVar9 = CoInitializeSecurity
                      ((PSECURITY_DESCRIPTOR)0x0,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0,0
                       ,3,(void *)0x0,0,(void *)0x0);
    if ((HVar9 < 0) ||
       (HVar9 = CoCreateInstance((IID *)&DAT_1499d7830,(LPUNKNOWN)0x0,1,(IID *)&DAT_1499d7820,
                                 &local_d0), plVar12 = local_d0, HVar9 < 0)) {
      FUN_14279d0db();
    }
    else {
      FUN_146831fa6(local_b8);
      if (local_b8[0] == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *local_b8[0];
      }
      iVar10 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar14);
      puVar6 = local_b8[0];
      if (local_b8[0] != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_b8[0] + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_14683205a(local_b8[0]);
          FUN_1400020a8(puVar6);
        }
      }
      if (iVar10 < 0) {
        FUN_14279d0db();
      }
      else {
        HVar9 = CoSetProxyBlanket(local_d8,10,0,(OLECHAR *)0x0,3,3,(RPC_AUTH_IDENTITY_HANDLE)0x0,0);
        pIVar5 = local_d8;
        if (-1 < HVar9) {
          local_e0 = (longlong *)0x0;
          FUN_146832002(local_b8,"SELECT * FROM MSFT_DiskToPartition");
          FUN_146832002(&local_100,&DAT_149e40951);
          UVar11 = (*pIVar5->lpVtbl[6].Release)(pIVar5);
          lVar16 = local_100;
          if (local_100 != 0) {
            LOCK();
            piVar1 = (int *)(local_100 + 0x10);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_14683205a(local_100);
              FUN_1400020a8(lVar16);
            }
          }
          puVar6 = local_b8[0];
          if (local_b8[0] != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_b8[0] + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              FUN_14683205a(local_b8[0]);
              FUN_1400020a8(puVar6);
            }
          }
          if (-1 < (int)UVar11) {
            if (local_e0 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              do {
                local_b8[8] = (undefined8 *)0x0;
                local_b8[9] = (undefined8 *)0x0;
                local_b8[6] = (undefined8 *)0x0;
                local_b8[7] = (undefined8 *)0x0;
                local_b8[4] = (undefined8 *)0x0;
                local_b8[5] = (undefined8 *)0x0;
                local_b8[2] = (undefined8 *)0x0;
                local_b8[3] = (undefined8 *)0x0;
                local_b8[0] = (undefined8 *)0x0;
                local_b8[1] = (undefined8 *)0x0;
                iVar10 = (**(code **)(*local_e0 + 0x20))(local_e0,0xffffffff,10,local_b8);
                if (iVar10 < 0) {
                  FUN_14279d0db();
                  plVar12 = local_e0;
                  break;
                }
                plVar12 = local_e0;
                if (local_e4 == 0) break;
                uVar15 = 0;
                do {
                  (**(code **)(*local_b8[uVar15] + 0x20))(local_b8[uVar15],L"Disk",0,&local_100);
                  (**(code **)(*local_b8[uVar15] + 0x20))(local_b8[uVar15],L"Partition",0,local_118)
                  ;
                  local_120 = (longlong *)0x0;
                  local_128 = (longlong *)0x0;
                  HVar9 = (*local_d8->lpVtbl[2].QueryInterface)
                                    (local_d8,(IID *)CONCAT62(uStack_10e,local_110),(void **)0x0);
                  if (HVar9 < 0) {
                    FUN_14279d0db();
                  }
                  else {
                    HVar9 = (*local_d8->lpVtbl[2].QueryInterface)
                                      (local_d8,(IID *)CONCAT62(uStack_f6,local_f8),(void **)0x0);
                    if (HVar9 < 0) {
                      FUN_14279d0db();
                    }
                    else {
                      iVar10 = (**(code **)(*local_120 + 0x20))
                                         (local_120,L"DriveLetter",0,local_140);
                      if (iVar10 < 0) {
                        FUN_14279d0db();
                      }
                      else if ((short)local_138 != 0) {
                        iVar10 = (**(code **)(*local_128 + 0x20))
                                           (local_128,L"SerialNumber",0,&local_158);
                        uVar8 = DAT_14c8c26f0;
                        if (iVar10 < 0) {
                          FUN_14279d0db();
                        }
                        else {
                          lVar16 = (longlong)(int)DAT_14c8c26f0;
                          DAT_14c8c26f0 = DAT_14c8c26f0 + 1;
                          if (DAT_14c8c26f4 < DAT_14c8c26f0) {
                            FUN_14279d14e(uVar8);
                          }
                          plVar12 = DAT_14c8c26e8;
                          uVar4 = (short)local_138;
                          FUN_140056680(&local_c8,CONCAT44(uStack_14c,local_150));
                          plVar12[lVar16 * 7] = 0;
                          plVar12[lVar16 * 7] = (longlong)local_c8;
                          *(undefined4 *)(plVar12 + lVar16 * 7 + 1) = (undefined4)local_c0;
                          *(undefined4 *)((longlong)plVar12 + lVar16 * 0x38 + 0xc) = local_c0._4_4_;
                          *(undefined2 *)(plVar12 + lVar16 * 7 + 2) = uVar4;
                          plVar12[lVar16 * 7 + 3] = 0;
                          (plVar12 + lVar16 * 7 + 3)[1] = 0;
                          plVar12[lVar16 * 7 + 5] = 0;
                          (plVar12 + lVar16 * 7 + 5)[1] = 0;
                          *(undefined2 *)(plVar12 + lVar16 * 7 + 3) = uVar4;
                          local_c0 = 0;
                          local_c8 = (longlong *)0x0;
                          Ordinal_9(&local_158);
                        }
                        Ordinal_9(local_140);
                      }
                      (**(code **)(*local_128 + 0x10))();
                    }
                    (**(code **)(*local_120 + 0x10))();
                  }
                  Ordinal_9(&local_100);
                  Ordinal_9(local_118);
                  (**(code **)(*local_b8[uVar15] + 0x10))();
                  uVar15 = uVar15 + 1;
                } while (uVar15 < local_e4);
                plVar12 = (longlong *)0x0;
              } while (local_e0 != (longlong *)0x0);
            }
            (**(code **)(*plVar12 + 0x10))(plVar12);
            pIVar5 = local_d8;
            FUN_146832002(local_b8,"SELECT * FROM MSFT_PhysicalDisk");
            FUN_146832002(&local_100,&DAT_149e40951);
            UVar11 = (*pIVar5->lpVtbl[6].Release)(pIVar5);
            if (local_100 != 0) {
              LOCK();
              piVar1 = (int *)(local_100 + 0x10);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_14683205a(local_100);
                FUN_1400020a8(local_100);
              }
            }
            puVar6 = local_b8[0];
            if (local_b8[0] != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_b8[0] + 2);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                FUN_14683205a(local_b8[0]);
                FUN_1400020a8(puVar6);
              }
            }
            if (-1 < (int)UVar11) {
              if (local_e0 == (longlong *)0x0) {
                local_160 = (longlong *)0x0;
              }
              else {
                local_160 = (longlong *)0x0;
                do {
                  local_c8 = (longlong *)0x0;
                  iVar10 = (**(code **)(*local_e0 + 0x20))(local_e0,0xffffffff,1,&local_c8);
                  if (iVar10 < 0) {
                    FUN_14279d0db();
LAB_1427979c8:
                    local_160 = local_e0;
                    break;
                  }
                  if ((int)local_120 == 0) goto LAB_1427979c8;
                  (**(code **)(*local_c8 + 0x20))(local_c8,L"SerialNumber",0,local_b8);
                  (**(code **)(*local_c8 + 0x20))(local_c8,L"MediaType",0,&local_100);
                  (**(code **)(*local_c8 + 0x20))(local_c8,L"BusType",0,local_118);
                  (**(code **)(*local_c8 + 0x20))(local_c8,L"SpindleSpeed",0,local_140);
                  FUN_140056680(&local_158,local_b8[1]);
                  if ((longlong)(int)DAT_14c8c26f0 != 0) {
                    plVar13 = DAT_14c8c26e8 + (longlong)(int)DAT_14c8c26f0 * 7;
                    cVar7 = (local_138 != 0) * '\x02' + '\x02';
                    plVar12 = DAT_14c8c26e8;
                    if (local_110 == 0x11) {
                      cVar7 = '\x03';
                    }
                    do {
                      if ((int)plVar12[1] == local_150) {
                        if (1 < local_150) {
                          lVar16 = 0;
                          while( true ) {
                            uVar2 = *(ushort *)(*plVar12 + lVar16);
                            uVar3 = *(ushort *)(local_158 + lVar16);
                            if (uVar2 != uVar3) break;
                            if (uVar2 == 0) goto LAB_142797946;
LAB_142797913:
                            lVar16 = lVar16 + 2;
                          }
                          if ((uVar3 | uVar2) < 0x80) {
                            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[(uint)uVar3])
                            goto LAB_142797913;
                            iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                          }
                          else {
                            iVar10 = (uint)uVar2 - (uint)uVar3;
                          }
                          if (iVar10 != 0) goto LAB_142797961;
                        }
LAB_142797946:
                        if (local_f8 == 3) {
                          cVar17 = '\x01';
                        }
                        else {
                          cVar17 = cVar7;
                          if (local_f8 != 4) {
                            cVar17 = -1;
                          }
                        }
                        *(char *)(plVar12 + 6) = cVar17;
                      }
                      else if ((int)plVar12[1] + local_150 == 1) goto LAB_142797946;
LAB_142797961:
                      plVar12 = plVar12 + 7;
                    } while (plVar12 != plVar13);
                  }
                  Ordinal_9(local_118);
                  Ordinal_9(&local_100);
                  Ordinal_9(local_b8);
                  (**(code **)(*local_c8 + 0x10))();
                  if (local_158 != 0) {
                    FUN_1400020a8();
                  }
                } while (local_e0 != (longlong *)0x0);
              }
              (**(code **)(*local_160 + 0x10))();
              (*local_d8->lpVtbl->Release)(local_d8);
              (**(code **)(*local_d0 + 0x10))();
              CoUninitialize();
              FUN_14682fe7e();
              goto LAB_142797181;
            }
          }
        }
        FUN_14279d0db();
        (*local_d8->lpVtbl->Release)(local_d8);
      }
      (**(code **)(*local_d0 + 0x10))();
    }
    CoUninitialize();
  }
LAB_142797181:
  if ((local_60 ^ (ulonglong)auStackY_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142797a0c FUN_142797a0c body=44 status=ok
// SIG undefined FUN_142797a0c(void)

void FUN_142797a0c(void)

{
  HWND pHVar1;
  
  pHVar1 = GetConsoleWindow();
  if (pHVar1 != (HWND)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142797a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetConsoleCtrlHandler(FUN_142797a38,1);
    return;
  }
  return;
}



// FUNCTION 142797a38 FUN_142797a38 body=391 status=ok
// SIG undefined FUN_142797a38(void)

bool FUN_142797a38(int param_1)

{
  char cVar1;
  HANDLE hProcess;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = DAT_14c872bd8;
  if (DAT_14c8c4529 == '\0') {
    DAT_14c83bd06 = DAT_14c872bd8;
    DAT_14c872bd8 = '\x01';
    FUN_1447f69b6(&DAT_14c8688b8);
    uVar2 = FUN_145cb55cc();
    FUN_146044b26(uVar2);
    DAT_14c8c4529 = '\x01';
  }
  if (param_1 == 0) {
    cVar1 = FUN_140b3f358();
    if (cVar1 == '\0') goto LAB_142797a63;
  }
  cVar3 = '\x01';
LAB_142797a63:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872ef8) {
    FUN_144b3d300(&DAT_14c872ef8);
    if (DAT_14c872ef8 == -1) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
  }
  FUN_14626bd28(&DAT_14c872ee0);
  if (DAT_14c872be8 != (longlong *)0x0) {
    (**(code **)(*DAT_14c872be8 + 0x20))();
  }
  if (DAT_14c873408 != (longlong *)0x0) {
    (**(code **)(*DAT_14c873408 + 0x20))();
  }
  if (cVar3 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,0xc000013a);
  }
  return cVar3 == '\0';
}



// FUNCTION 142797bc0 FUN_142797bc0 body=310 status=ok
// SIG undefined FUN_142797bc0(void)

void FUN_142797bc0(char param_1,uint param_2)

{
  undefined8 uVar1;
  HANDLE hProcess;
  
  DAT_14c83bd06 = DAT_14c872bd8;
  DAT_14c872bd8 = 1;
  FUN_1447f69b6(&DAT_14c8688b8);
  uVar1 = FUN_145cb55cc();
  FUN_146044b26(uVar1);
  if (param_1 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c872ef8) {
      FUN_144b3d300(&DAT_14c872ef8);
      if (DAT_14c872ef8 == -1) {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
    }
    FUN_14626bd28(&DAT_14c872ee0);
    hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000142797c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TerminateProcess(hProcess,param_2 & 0xff);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142797c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(param_2 & 0xff);
  return;
}



// FUNCTION 142797d18 FUN_142797d18 body=6092 status=ok
// SIG undefined FUN_142797d18(void)

/* WARNING: Type propagation algorithm not settling */

int * FUN_142797d18(int *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  BOOL BVar8;
  int iVar9;
  HDEVINFO DeviceInfoSet;
  uint uVar10;
  wchar_t *_Str1;
  ulonglong uVar11;
  ushort uVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined2 *puVar15;
  DWORD DVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  ushort uVar20;
  ulonglong uVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStackY_618 [32];
  longlong local_5a8 [3];
  int local_590 [2];
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  FILETIME local_528;
  undefined8 uStack_520;
  FILETIME local_518;
  undefined8 local_510;
  _SYSTEMTIME local_508;
  DEVPROPTYPE local_4ec;
  DWORD local_4e8;
  ulong uStack_4e4;
  int iStack_4e0;
  uchar auStack_4dc [4];
  _SP_DEVINFO_DATA local_4d8;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  _DISPLAY_DEVICEW local_468;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStackY_618;
  if (param_3 != '\0') {
    local_468._0_8_ = local_468._0_8_ & 0xffffffff00000000;
    EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_1427994e5,(LPARAM)&local_468);
  }
  local_590[0] = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_578 = 0;
  uStack_570 = 0;
  local_568 = 0;
  uStack_560 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_538 = 0;
  uStack_530 = 0;
  FUN_14020fad6(&local_568,L"Unknown");
  FUN_14020fad6(&local_558,L"Unknown");
  FUN_14020fad6(&local_548);
  local_5a8[0] = 0;
  local_5a8[1] = 0;
  iVar9 = *DAT_14c8c26c8;
  if (iVar9 == 5) {
    *param_1 = 0;
    piVar1 = param_1 + 6;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
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
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    DeviceInfoSet = SetupDiGetClassDevsW((GUID *)&DAT_149e3f484,(PCWSTR)0x0,(HWND)0x0,2);
    FUN_1400b22c2(&local_4e8);
    if (DeviceInfoSet != (HDEVINFO)0xffffffffffffffff) {
      local_4ec = 0;
      memset(&local_468,0,0x402);
      local_4d8.cbSize = 0x20;
      BVar8 = SetupDiEnumDeviceInfo(DeviceInfoSet,0,&local_4d8);
      if (BVar8 != 0) {
        DVar16 = 1;
        do {
          BVar8 = SetupDiGetDevicePropertyW
                            (DeviceInfoSet,&local_4d8,(DEVPROPKEY *)&DAT_149e3f4e4,&local_4ec,
                             (PBYTE)&local_468,0x402,(PDWORD)0x0,0);
          if (BVar8 != 0) {
            FUN_140056680(&local_508,&local_468);
            uVar19 = local_508._0_8_;
            pwVar13 = (wchar_t *)local_508._0_8_;
            if (local_508._8_4_ == 0) {
              pwVar13 = L"";
            }
            _Str1 = L"";
            if ((int)param_2[1] != 0) {
              _Str1 = (wchar_t *)*param_2;
            }
            iVar9 = wcscmp(_Str1,pwVar13);
            if ((wchar_t *)uVar19 != (wchar_t *)0x0) {
              FUN_1400020a8(uVar19);
            }
            if (iVar9 == 0) {
              FUN_14020fad6(param_1 + 2);
              memset(&local_468,0,0x402);
              BVar8 = SetupDiGetDevicePropertyW
                                (DeviceInfoSet,&local_4d8,(DEVPROPKEY *)&DAT_149e3f4a8,&local_4ec,
                                 (PBYTE)&local_468,0x402,(PDWORD)0x0,0);
              if (BVar8 != 0) {
                FUN_14020fad6(&local_4e8);
                memset(&local_468,0,0x402);
              }
              BVar8 = SetupDiGetDevicePropertyW
                                (DeviceInfoSet,&local_4d8,(DEVPROPKEY *)&DAT_149e3f50c,&local_4ec,
                                 (PBYTE)&local_468,0x402,(PDWORD)0x0,0);
              if (BVar8 != 0) {
                FUN_14020fad6(piVar1);
                memset(&local_468,0,0x402);
              }
              BVar8 = SetupDiGetDevicePropertyW
                                (DeviceInfoSet,&local_4d8,(DEVPROPKEY *)&DAT_149e3f4d0,&local_4ec,
                                 (PBYTE)&local_468,0x402,(PDWORD)0x0,0);
              if (BVar8 != 0) {
                FUN_14020fad6(param_1 + 10);
                memset(&local_468,0,0x402);
              }
              BVar8 = SetupDiGetDevicePropertyW
                                (DeviceInfoSet,&local_4d8,(DEVPROPKEY *)&DAT_149e3f4bc,&local_4ec,
                                 (PBYTE)&local_528,8,(PDWORD)0x0,0);
              if (BVar8 != 0) {
                FileTimeToSystemTime(&local_528,&local_508);
                FUN_140002266(&local_518,L"%d-%d-%d",local_508.wMonth,local_508.wDay);
                if ((FILETIME *)(param_1 + 0x12) == &local_518) {
                  if (local_518 != (FILETIME)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  if (*(longlong *)(param_1 + 0x12) != 0) {
                    FUN_1400020a8();
                  }
                  *(FILETIME *)(param_1 + 0x12) = local_518;
                  local_518.dwLowDateTime = 0;
                  local_518.dwHighDateTime = 0;
                  param_1[0x14] = (int)local_510;
                  param_1[0x15] = local_510._4_4_;
                }
              }
              break;
            }
            memset(&local_468,0,0x402);
          }
          BVar8 = SetupDiEnumDeviceInfo(DeviceInfoSet,DVar16,&local_4d8);
          DVar16 = DVar16 + 1;
        } while (BVar8 != 0);
      }
      SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    }
    plVar2 = (longlong *)(param_1 + 0xe);
    if (1 < param_1[8]) {
      iVar9 = FUN_1447ee042(piVar1,L"NVIDIA",6,1);
      iVar22 = 0x10de;
      if (iVar9 == -1) {
        iVar9 = FUN_1447ee042(piVar1,L"Advanced Micro Devices",0x16,1);
        iVar22 = 0x1002;
        if (iVar9 == -1) {
          iVar9 = FUN_1447ee042(piVar1,L"Intel",5,1);
          iVar22 = 0x8086;
          if (iVar9 == -1) goto LAB_1427988ba;
        }
      }
      *param_1 = iVar22;
    }
LAB_1427988ba:
    iVar9 = param_1[0xc] + -1;
    if (param_1[0xc] == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(plVar2,*(undefined8 *)(param_1 + 10),iVar9);
    if (*param_1 == 0x1002) {
      if (1 < iStack_4e0) {
        FUN_140002266(&local_468,L"SYSTEM\\CurrentControlSet\\Control\\Class\\%s",
                      CONCAT44(uStack_4e4,local_4e8));
        pwVar13 = (wchar_t *)local_468._0_8_;
        if (local_468.DeviceName._4_4_ == 0) {
          pwVar13 = L"";
        }
        cVar7 = FUN_145ca351c(&DAT_ffffffff80000002,pwVar13,L"Catalyst_Version",plVar2);
        if (cVar7 != '\0') {
          FUN_140056680(&local_508);
          uVar5 = local_508._8_4_;
          if ((int)local_508._8_4_ < 2) {
            local_4d8._0_8_ = (wchar_t *)0x0;
            uVar18 = param_1[0x10];
            _Src = *(void **)(param_1 + 0xe);
            local_4d8.ClassGuid.Data2 = (short)uVar18;
            local_4d8.ClassGuid.Data3 = (short)(uVar18 >> 0x10);
            if ((longlong)(int)uVar18 == 0) {
              local_4d8.ClassGuid.Data4[0] = '\0';
              local_4d8.ClassGuid.Data4[1] = '\0';
              local_4d8.ClassGuid.Data4[2] = '\0';
              local_4d8.ClassGuid.Data4[3] = '\0';
              local_4d8.ClassGuid.Data2 = (short)uVar18;
              local_4d8.ClassGuid.Data3 = (short)(uVar18 >> 0x10);
            }
            else {
              FUN_1446dd670(&local_4d8,uVar18,0);
              memcpy((void *)local_4d8._0_8_,_Src,(longlong)(int)uVar18 * 2);
            }
          }
          else {
            iVar9 = param_1[0x10] + -1;
            if (param_1[0x10] == 0) {
              iVar9 = 0;
            }
            local_4d8._0_8_ = local_508._0_8_;
            local_508._0_8_ = (wchar_t *)0x0;
            uVar6 = local_508._12_4_;
            local_4d8.ClassGuid.Data2 = local_508.wHour;
            local_4d8.ClassGuid.Data3 = local_508.wMinute;
            local_4d8.ClassGuid.Data4._0_2_ = local_508.wSecond;
            local_4d8.ClassGuid.Data4._2_2_ = local_508.wMilliseconds;
            local_508.wHour = 0;
            local_508.wMinute = 0;
            local_508.wSecond = 0;
            local_508.wMilliseconds = 0;
            iVar22 = iVar9 + uVar5;
            if (iVar22 < (int)uVar5) goto LAB_142799413;
            if ((int)uVar6 < iVar22) {
              FUN_1446f8c06(&local_4d8);
            }
            FUN_1400020e8(&local_4d8,*plVar2,iVar9);
          }
          if ((_SP_DEVINFO_DATA *)plVar2 == &local_4d8) {
            if ((wchar_t *)local_4d8._0_8_ != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*plVar2 != 0) {
              FUN_1400020a8();
            }
            param_1[0xe] = local_4d8.cbSize;
            param_1[0xf] = local_4d8.ClassGuid.Data1;
            local_4d8._0_8_ = (wchar_t *)0x0;
            param_1[0x10] = local_4d8.ClassGuid._4_4_;
            param_1[0x11] = local_4d8.ClassGuid.Data4._0_4_;
            local_4d8.ClassGuid.Data2 = 0;
            local_4d8.ClassGuid.Data3 = 0;
            local_4d8.ClassGuid.Data4[0] = '\0';
            local_4d8.ClassGuid.Data4[1] = '\0';
            local_4d8.ClassGuid.Data4[2] = '\0';
            local_4d8.ClassGuid.Data4[3] = '\0';
          }
          if ((wchar_t *)local_508._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        local_4d8._0_8_ = (wchar_t *)0x0;
        local_4d8.ClassGuid.Data2 = 0;
        local_4d8.ClassGuid.Data3 = 0;
        local_4d8.ClassGuid.Data4[0] = '\0';
        local_4d8.ClassGuid.Data4[1] = '\0';
        local_4d8.ClassGuid.Data4[2] = '\0';
        local_4d8.ClassGuid.Data4[3] = '\0';
        pwVar13 = (wchar_t *)local_468._0_8_;
        if (local_468.DeviceName._4_4_ == 0) {
          pwVar13 = L"";
        }
        cVar7 = FUN_145ca351c(&DAT_ffffffff80000002,pwVar13,L"RadeonSoftwareEdition",&local_4d8);
        if (cVar7 != '\0') {
          local_508._0_8_ = (wchar_t *)0x0;
          local_508.wHour = 0;
          local_508.wMinute = 0;
          local_508.wSecond = 0;
          local_508.wMilliseconds = 0;
          pwVar13 = (wchar_t *)local_468._0_8_;
          if (local_468.DeviceName._4_4_ == 0) {
            pwVar13 = L"";
          }
          cVar7 = FUN_145ca351c(&DAT_ffffffff80000002,pwVar13,L"RadeonSoftwareVersion",&local_508);
          uVar19 = local_4d8._0_8_;
          if (cVar7 != '\0') {
            lVar14 = (longlong)(int)local_4d8.ClassGuid._4_4_;
            local_528.dwLowDateTime = 0;
            local_528.dwHighDateTime = 0;
            uStack_520 = CONCAT44(uStack_520._4_4_,local_4d8.ClassGuid._4_4_);
            FUN_1446dd670(&local_528,(uint)(lVar14 == 0) + local_4d8.ClassGuid._4_4_ + 1,0);
            if (lVar14 != 0) {
              memcpy((void *)local_528,(void *)uVar19,lVar14 * 2);
            }
            FUN_1400020e8(&local_528,&DAT_149e001d8,1);
            uVar19 = local_508._0_8_;
            uVar11 = uStack_520;
            iVar22 = (int)uStack_520;
            if ((int)uStack_520 < 2) {
              local_518.dwLowDateTime = 0;
              local_518.dwHighDateTime = 0;
              lVar14 = (longlong)(int)local_508._8_4_;
              local_510 = CONCAT44(local_510._4_4_,local_508._8_4_);
              if (lVar14 == 0) {
                local_510 = local_508._8_8_ & 0xffffffff;
              }
              else {
                FUN_1446dd670(&local_518,local_508._8_8_ & 0xffffffff,0);
                memcpy((void *)local_518,(void *)uVar19,lVar14 * 2);
              }
            }
            else {
              iVar9 = local_508._8_4_ + -1;
              if (local_508._8_4_ == 0) {
                iVar9 = 0;
              }
              local_518 = local_528;
              iVar4 = uStack_520._4_4_;
              local_528.dwLowDateTime = 0;
              local_528.dwHighDateTime = 0;
              uStack_520 = 0;
              local_510 = uVar11;
              iVar17 = iVar9 + iVar22;
              if (iVar17 < iVar22) {
LAB_142799413:
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4((longlong)iVar9);
              }
              if (iVar4 < iVar17) {
                FUN_1446f8c06(&local_518);
              }
              FUN_1400020e8(&local_518,local_508._0_8_,iVar9);
            }
            if ((FILETIME *)plVar2 == &local_518) {
              if (local_518 != (FILETIME)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*plVar2 != 0) {
                FUN_1400020a8();
              }
              *(FILETIME *)(param_1 + 0xe) = local_518;
              local_518.dwLowDateTime = 0;
              local_518.dwHighDateTime = 0;
              param_1[0x10] = (int)local_510;
              param_1[0x11] = local_510._4_4_;
              local_510 = 0;
            }
            if (local_528 != (FILETIME)0x0) {
              FUN_1400020a8();
            }
          }
          if ((wchar_t *)local_508._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if ((wchar_t *)local_4d8._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
LAB_142798cd0:
        if ((wchar_t *)local_468._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else if (*param_1 == 0x10de) {
      FUN_145ca9f74(&local_468);
      if ((_DISPLAY_DEVICEW *)plVar2 == &local_468) goto LAB_142798cd0;
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0xe) = local_468._0_8_;
      local_468._0_8_ = (wchar_t *)0x0;
      param_1[0x10] = local_468.DeviceName._4_4_;
      param_1[0x11] = local_468.DeviceName._8_4_;
    }
    if (CONCAT44(uStack_4e4,local_4e8) != 0) {
      FUN_1400020a8();
    }
    cVar7 = FUN_14682fb98(param_1);
    if (cVar7 != '\0') {
      iVar9 = param_1[4];
      if (iVar9 == (int)param_2[1]) {
        if (1 < iVar9) {
          lVar14 = 0;
          while( true ) {
            uVar12 = *(ushort *)(*(longlong *)(param_1 + 2) + lVar14);
            uVar11 = (ulonglong)uVar12;
            uVar20 = *(ushort *)(*param_2 + lVar14);
            if (uVar12 != uVar20) break;
            if (uVar12 == 0) goto LAB_1427993be;
LAB_142798d4a:
            lVar14 = lVar14 + 2;
          }
          if ((uVar20 | uVar12) < 0x80) {
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            uVar21 = (ulonglong)uVar20;
            uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar21]) goto LAB_142798d4a;
          }
          if (uVar12 != uVar20) goto LAB_142798d87;
        }
        goto LAB_1427993be;
      }
      if ((int)param_2[1] + iVar9 == 1) goto LAB_1427993be;
    }
LAB_142798d87:
    FUN_14626e2bc(param_1);
    bVar23 = false;
LAB_142798d91:
    iVar9 = 0;
    DVar16 = 0;
    do {
      memset((void *)((longlong)&local_468 + 4),0,0x344);
      local_468.cb = 0x348;
      BVar8 = EnumDisplayDevicesW((LPCWSTR)0x0,DVar16,&local_468,1);
      if (BVar8 == 0) break;
      if ((bVar23) && (((byte)local_468.StateFlags & 4) == 0)) {
        FUN_1400020e8(local_5a8,L"JumpOverNonPrimary ",0x13);
      }
      else {
        FUN_140056680(&local_4e8,local_468.DeviceKey);
        puVar15 = &DAT_149dfb77a;
        if (iStack_4e0 != 0) {
          puVar15 = (undefined2 *)CONCAT44(uStack_4e4,local_4e8);
        }
        uVar18 = iStack_4e0 - 1;
        if (iStack_4e0 == 0) {
          uVar18 = 0;
        }
        if (0x11 < (int)uVar18) {
          uVar18 = 0x12;
        }
        uVar11 = (ulonglong)uVar18;
        if ((int)uVar18 < 1) {
          uVar11 = 0;
        }
        FUN_14006620a(&local_4d8,puVar15,uVar11);
        pwVar13 = (wchar_t *)local_4d8._0_8_;
        if (local_4d8.ClassGuid._4_4_ == 0) {
          pwVar13 = L"";
        }
        lVar14 = 0;
        while( true ) {
          uVar12 = *(ushort *)((longlong)pwVar13 + lVar14);
          uVar10 = (uint)uVar12;
          uVar20 = *(ushort *)((longlong)L"\\Registry\\Machine\\" + lVar14);
          uVar18 = (uint)uVar20;
          if (uVar12 != uVar20) {
            if ((uVar20 | uVar12) < 0x80) {
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar20];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar20]) goto LAB_142798ea9;
            }
            iVar22 = uVar10 - uVar18;
            goto LAB_142798edc;
          }
          if (uVar12 == 0) break;
LAB_142798ea9:
          lVar14 = lVar14 + 2;
        }
        iVar22 = 0;
LAB_142798edc:
        if ((wchar_t *)local_4d8._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        puVar15 = (undefined2 *)CONCAT44(uStack_4e4,local_4e8);
        if (iVar22 == 0) {
          uVar18 = iStack_4e0 - 1;
          if (iStack_4e0 == 0) {
            puVar15 = &DAT_149dfb77a;
            uVar18 = 0;
          }
          uVar10 = 0x12;
          if ((int)uVar18 < 0x12) {
            uVar10 = uVar18;
          }
          uVar11 = (ulonglong)uVar10;
          if ((int)uVar10 < 1) {
            uVar11 = 0;
          }
          FUN_14006620a(&local_508,puVar15 + uVar11,uVar18 - (int)uVar11);
          FUN_140056680(&local_518,L"\\HKEY_LOCAL_MACHINE\\");
          FUN_1401c7f3e(&local_4d8,&local_518,&local_508);
          if (CONCAT44(uStack_4e4,local_4e8) != 0) {
            FUN_1400020a8();
          }
          local_4e8 = local_4d8.cbSize;
          uStack_4e4 = local_4d8.ClassGuid.Data1;
          iStack_4e0._0_2_ = local_4d8.ClassGuid.Data2;
          iStack_4e0._2_2_ = local_4d8.ClassGuid.Data3;
          auStack_4dc[0] = local_4d8.ClassGuid.Data4[0];
          auStack_4dc[1] = local_4d8.ClassGuid.Data4[1];
          auStack_4dc[2] = local_4d8.ClassGuid.Data4[2];
          auStack_4dc[3] = local_4d8.ClassGuid.Data4[3];
          local_4d8._0_8_ = (wchar_t *)0x0;
          local_4d8.ClassGuid.Data2 = 0;
          local_4d8.ClassGuid.Data3 = 0;
          local_4d8.ClassGuid.Data4[0] = '\0';
          local_4d8.ClassGuid.Data4[1] = '\0';
          local_4d8.ClassGuid.Data4[2] = '\0';
          local_4d8.ClassGuid.Data4[3] = '\0';
          if (local_518 != (FILETIME)0x0) {
            FUN_1400020a8();
          }
          if ((wchar_t *)local_508._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          puVar15 = (undefined2 *)CONCAT44(uStack_4e4,local_4e8);
        }
        uVar18 = iStack_4e0 - 1;
        if (iStack_4e0 == 0) {
          puVar15 = &DAT_149dfb77a;
          uVar18 = 0;
        }
        if (0x13 < (int)uVar18) {
          uVar18 = 0x14;
        }
        uVar11 = (ulonglong)uVar18;
        if ((int)uVar18 < 1) {
          uVar11 = 0;
        }
        FUN_14006620a(&local_4d8,puVar15,uVar11);
        pwVar13 = (wchar_t *)local_4d8._0_8_;
        if (local_4d8.ClassGuid._4_4_ == 0) {
          pwVar13 = L"";
        }
        lVar14 = 0;
        while( true ) {
          uVar12 = *(ushort *)((longlong)pwVar13 + lVar14);
          uVar10 = (uint)uVar12;
          uVar20 = *(ushort *)((longlong)L"\\HKEY_LOCAL_MACHINE\\" + lVar14);
          uVar18 = (uint)uVar20;
          if (uVar12 != uVar20) {
            if ((uVar20 | uVar12) < 0x80) {
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar20];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar20]) goto LAB_14279902a;
            }
            iVar22 = uVar10 - uVar18;
            goto LAB_14279905d;
          }
          if (uVar12 == 0) break;
LAB_14279902a:
          lVar14 = lVar14 + 2;
        }
        iVar22 = 0;
LAB_14279905d:
        if ((wchar_t *)local_4d8._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar22 == 0) {
          puVar15 = &DAT_149dfb77a;
          uVar18 = iStack_4e0 - 1;
          if (iStack_4e0 == 0) {
            uVar18 = 0;
          }
          else {
            puVar15 = (undefined2 *)CONCAT44(uStack_4e4,local_4e8);
          }
          uVar10 = 0x14;
          if ((int)uVar18 < 0x14) {
            uVar10 = uVar18;
          }
          uVar11 = (ulonglong)uVar10;
          if ((int)uVar10 < 1) {
            uVar11 = 0;
          }
          FUN_14006620a(&local_508,puVar15 + uVar11);
          local_4d8._0_8_ = local_4d8._0_8_ & 0xffffffff00000000;
          local_480 = 0;
          uStack_478 = 0;
          local_490 = 0;
          uStack_488 = 0;
          local_4a0 = 0;
          uStack_498 = 0;
          local_4b0 = 0;
          uStack_4a8 = 0;
          local_4d8.Reserved = 0;
          uStack_4b8 = 0;
          local_4d8.ClassGuid.Data2 = 0;
          local_4d8.ClassGuid.Data3 = 0;
          local_4d8.ClassGuid.Data4[0] = '\0';
          local_4d8.ClassGuid.Data4[1] = '\0';
          local_4d8.ClassGuid.Data4[2] = '\0';
          local_4d8.ClassGuid.Data4[3] = '\0';
          local_4d8.ClassGuid.Data4[4] = '\0';
          local_4d8.ClassGuid.Data4[5] = '\0';
          local_4d8.ClassGuid.Data4[6] = '\0';
          local_4d8.ClassGuid.Data4[7] = '\0';
          local_4d8.DevInst = 0;
          FUN_142799539(&local_508);
          cVar7 = FUN_14682fb98(&local_4d8);
          if (cVar7 == '\0') {
            FUN_1400020e8(local_5a8);
          }
          if (bVar23) {
LAB_142799150:
            if (iVar9 == 0) {
              FUN_14682fc74(local_590);
            }
            iVar9 = iVar9 + 1;
          }
          else {
            if (local_4d8.ClassGuid.Data4._4_4_ == (int)param_2[1]) {
              if (1 < (int)local_4d8.ClassGuid.Data4._4_4_) {
                lVar14 = 0;
                while( true ) {
                  uVar12 = *(ushort *)(local_4d8.ClassGuid._4_8_ + lVar14);
                  uVar11 = (ulonglong)uVar12;
                  uVar20 = *(ushort *)(*param_2 + lVar14);
                  if (uVar12 != uVar20) break;
                  if (uVar12 == 0) goto LAB_142799150;
LAB_1427991d8:
                  lVar14 = lVar14 + 2;
                }
                if ((uVar20 | uVar12) < 0x80) {
                  uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  uVar21 = (ulonglong)uVar20;
                  uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                  if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar21]) goto LAB_1427991d8;
                }
                if (uVar12 != uVar20) goto LAB_14279921b;
              }
              goto LAB_142799150;
            }
            if ((int)param_2[1] + local_4d8.ClassGuid.Data4._4_4_ == 1) goto LAB_142799150;
LAB_14279921b:
            FUN_1400020e8(local_5a8,L"PrimaryIsNotTheChoosenAdapter ",0x1e);
          }
          FUN_14626e2bc(&local_4d8);
          if ((wchar_t *)local_508._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_1400020e8(local_5a8,L"PrimaryDriverLocationFailed ",0x1c);
        }
        if (CONCAT44(uStack_4e4,local_4e8) != 0) {
          FUN_1400020a8();
        }
      }
      DVar16 = DVar16 + 1;
    } while (DVar16 != 0x100);
    if (iVar9 != 1) {
      FUN_140002266(&local_468,L"FoundDriverCount:%d ");
      iVar9 = local_468.DeviceName._4_4_ + -1;
      if (local_468.DeviceName._4_4_ == 0) {
        iVar9 = 0;
      }
      FUN_1400020e8(local_5a8,local_468._0_8_,iVar9);
      pwVar13 = (wchar_t *)local_468._0_8_;
LAB_14279927c:
      if (pwVar13 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    bVar23 = iVar9 == 3;
    if (iVar9 - 3U < 2) goto LAB_142798d91;
    iVar22 = 0;
    if (iVar9 != 0) {
LAB_14279811d:
      FUN_14020fad6(&local_568,L"Unknown");
      FUN_14020fad6(&local_558,L"Unknown");
      FUN_14020fad6(&local_548,L"Unknown");
      if (iVar9 == 0) {
        FUN_140002266(&local_468,L"FoundDriverCount:%d FallbackToPrimary ",iVar22);
        iVar9 = local_468.DeviceName._4_4_ + -1;
        if (local_468.DeviceName._4_4_ == 0) {
          iVar9 = 0;
        }
        FUN_1400020e8(local_5a8,local_468._0_8_,iVar9);
        if ((wchar_t *)local_468._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      local_4d8._0_8_ = (wchar_t *)0x0;
      local_4d8.ClassGuid.Data2 = 0;
      local_4d8.ClassGuid.Data3 = 0;
      local_4d8.ClassGuid.Data4[0] = '\0';
      local_4d8.ClassGuid.Data4[1] = '\0';
      local_4d8.ClassGuid.Data4[2] = '\0';
      local_4d8.ClassGuid.Data4[3] = '\0';
      cVar7 = FUN_145ca351c(&DAT_ffffffff80000002,L"HARDWARE\\DEVICEMAP\\VIDEO",L"\\Device\\Video0")
      ;
      if (cVar7 == '\0') {
        pwVar13 = L"QueryForPrimaryFailed ";
        uVar19 = 0x16;
LAB_142798760:
        FUN_1400020e8(local_5a8,pwVar13,uVar19);
        pwVar13 = (wchar_t *)local_4d8._0_8_;
      }
      else {
        pwVar13 = L"";
        if (local_4d8.ClassGuid._4_4_ != 0) {
          pwVar13 = (wchar_t *)local_4d8._0_8_;
        }
        lVar14 = 0;
        iVar9 = local_4d8.ClassGuid._4_4_ + -1;
        if (local_4d8.ClassGuid._4_4_ == 0) {
          iVar9 = 0;
        }
        iVar22 = 0x12;
        if (iVar9 < 0x12) {
          iVar22 = iVar9;
        }
        if (iVar22 < 1) {
          iVar22 = 0;
        }
        FUN_14006620a(&local_468,pwVar13,iVar22);
        pwVar13 = L"";
        if (local_468.DeviceName._4_4_ != 0) {
          pwVar13 = (wchar_t *)local_468._0_8_;
        }
        while( true ) {
          uVar12 = *(ushort *)((longlong)pwVar13 + lVar14);
          uVar10 = (uint)uVar12;
          uVar20 = *(ushort *)((longlong)L"\\Registry\\Machine\\" + lVar14);
          uVar18 = (uint)uVar20;
          if (uVar12 != uVar20) {
            if ((uVar20 | uVar12) < 0x80) {
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar20];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar20]) goto LAB_142798233;
            }
            iVar9 = uVar10 - uVar18;
            goto LAB_142798271;
          }
          if (uVar12 == 0) break;
LAB_142798233:
          lVar14 = lVar14 + 2;
        }
        iVar9 = 0;
LAB_142798271:
        if ((wchar_t *)local_468._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar9 == 0) {
          uVar18 = local_4d8.ClassGuid._4_4_ - 1;
          pwVar13 = (wchar_t *)local_4d8._0_8_;
          if (local_4d8.ClassGuid._4_4_ == 0) {
            pwVar13 = L"";
            uVar18 = 0;
          }
          uVar10 = 0x12;
          if ((int)uVar18 < 0x12) {
            uVar10 = uVar18;
          }
          uVar11 = (ulonglong)uVar10;
          if ((int)uVar10 < 1) {
            uVar11 = 0;
          }
          FUN_14006620a(&local_4e8,pwVar13 + uVar11,uVar18 - (int)uVar11);
          FUN_140056680(&local_508,L"\\HKEY_LOCAL_MACHINE\\");
          FUN_1401c7f3e(&local_468,&local_508,&local_4e8);
          if ((wchar_t *)local_4d8._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_4d8._0_8_ = local_468._0_8_;
          local_4d8.ClassGuid._4_8_ = local_468.DeviceName._4_8_;
          local_468._0_8_ = (wchar_t *)0x0;
          local_468.DeviceName[2] = L'\0';
          local_468.DeviceName[3] = L'\0';
          local_468.DeviceName[4] = L'\0';
          local_468.DeviceName[5] = L'\0';
          if ((wchar_t *)local_508._0_8_ != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_4e4,local_4e8) != 0) {
            FUN_1400020a8();
          }
        }
        pwVar13 = (wchar_t *)local_4d8._0_8_;
        if (local_4d8.ClassGuid._4_4_ == 0) {
          pwVar13 = L"";
        }
        lVar14 = 0;
        iVar9 = local_4d8.ClassGuid._4_4_ + -1;
        if (local_4d8.ClassGuid._4_4_ == 0) {
          iVar9 = 0;
        }
        iVar22 = 0x14;
        if (iVar9 < 0x14) {
          iVar22 = iVar9;
        }
        if (iVar22 < 1) {
          iVar22 = 0;
        }
        FUN_14006620a(&local_468,pwVar13,iVar22);
        pwVar13 = (wchar_t *)local_468._0_8_;
        if (local_468.DeviceName._4_4_ == 0) {
          pwVar13 = L"";
        }
        while( true ) {
          uVar12 = *(ushort *)((longlong)pwVar13 + lVar14);
          uVar18 = (uint)uVar12;
          uVar20 = *(ushort *)((longlong)L"\\HKEY_LOCAL_MACHINE\\" + lVar14);
          uVar10 = (uint)uVar20;
          if (uVar12 != uVar20) {
            if ((uVar20 | uVar12) < 0x80) {
              uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar12];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar20];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar20]) goto LAB_1427983c7;
            }
            iVar9 = uVar18 - uVar10;
            goto LAB_1427983f1;
          }
          if (uVar12 == 0) break;
LAB_1427983c7:
          lVar14 = lVar14 + 2;
        }
        iVar9 = 0;
LAB_1427983f1:
        if ((wchar_t *)local_468._0_8_ != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (iVar9 != 0) {
          pwVar13 = L"PrimaryDriverLocationFailed ";
          uVar19 = 0x1c;
          goto LAB_142798760;
        }
        uVar18 = local_4d8.ClassGuid._4_4_ - 1;
        pwVar13 = (wchar_t *)local_4d8._0_8_;
        if (local_4d8.ClassGuid._4_4_ == 0) {
          uVar18 = 0;
          pwVar13 = L"";
        }
        uVar10 = 0x14;
        if ((int)uVar18 < 0x14) {
          uVar10 = uVar18;
        }
        uVar11 = (ulonglong)uVar10;
        if ((int)uVar10 < 1) {
          uVar11 = 0;
        }
        FUN_14006620a(&local_4e8,pwVar13 + uVar11,uVar18 - (int)uVar11);
        local_468._0_8_ = local_468._0_8_ & 0xffffffff00000000;
        local_468.DeviceName[2] = L'\0';
        local_468.DeviceName[3] = L'\0';
        local_468.DeviceName[4] = L'\0';
        local_468.DeviceName[5] = L'\0';
        local_468.DeviceName[6] = L'\0';
        local_468.DeviceName[7] = L'\0';
        local_468.DeviceName[8] = L'\0';
        local_468.DeviceName[9] = L'\0';
        local_468.DeviceName[10] = L'\0';
        local_468.DeviceName[0xb] = L'\0';
        local_468.DeviceName[0xc] = L'\0';
        local_468.DeviceName[0xd] = L'\0';
        local_468.DeviceName[0xe] = L'\0';
        local_468.DeviceName[0xf] = L'\0';
        local_468.DeviceName[0x10] = L'\0';
        local_468.DeviceName[0x11] = L'\0';
        local_468.DeviceName[0x12] = L'\0';
        local_468.DeviceName[0x13] = L'\0';
        local_468.DeviceName[0x14] = L'\0';
        local_468.DeviceName[0x15] = L'\0';
        local_468.DeviceName[0x16] = L'\0';
        local_468.DeviceName[0x17] = L'\0';
        local_468.DeviceName[0x18] = L'\0';
        local_468.DeviceName[0x19] = L'\0';
        local_468.DeviceName[0x1a] = L'\0';
        local_468.DeviceName[0x1b] = L'\0';
        local_468.DeviceName[0x1c] = L'\0';
        local_468.DeviceName[0x1d] = L'\0';
        local_468.DeviceName[0x1e] = L'\0';
        local_468.DeviceName[0x1f] = L'\0';
        local_468.DeviceString[0] = L'\0';
        local_468.DeviceString[1] = L'\0';
        local_468.DeviceString[2] = L'\0';
        local_468.DeviceString[3] = L'\0';
        local_468.DeviceString[4] = L'\0';
        local_468.DeviceString[5] = L'\0';
        local_468.DeviceString[6] = L'\0';
        local_468.DeviceString[7] = L'\0';
        local_468.DeviceString[8] = L'\0';
        local_468.DeviceString[9] = L'\0';
        local_468.DeviceString[10] = L'\0';
        local_468.DeviceString[0xb] = L'\0';
        local_468.DeviceString[0xc] = L'\0';
        local_468.DeviceString[0xd] = L'\0';
        local_468.DeviceString[0xe] = L'\0';
        local_468.DeviceString[0xf] = L'\0';
        local_468.DeviceString[0x10] = L'\0';
        local_468.DeviceString[0x11] = L'\0';
        FUN_142799539(&local_4e8);
        cVar7 = FUN_14682fb98(&local_468);
        if (cVar7 == '\0') {
          FUN_1400020e8(local_5a8,L"GetVideoDriverDetailsInvalid ",0x1d);
        }
        if (local_468.DeviceName._12_4_ == (int)param_2[1]) {
          if (1 < (int)local_468.DeviceName._12_4_) {
            lVar14 = 0;
            while( true ) {
              uVar12 = *(ushort *)(local_468.DeviceName._4_8_ + lVar14);
              uVar11 = (ulonglong)uVar12;
              uVar20 = *(ushort *)(*param_2 + lVar14);
              if (uVar12 != uVar20) break;
              if (uVar12 == 0) goto LAB_14279877d;
LAB_1427984ed:
              lVar14 = lVar14 + 2;
            }
            if ((uVar20 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar21 = (ulonglong)uVar20;
              uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar21]) goto LAB_1427984ed;
            }
            if (uVar12 != uVar20) goto LAB_14279851d;
          }
LAB_14279877d:
          FUN_14682fc74(local_590,&local_468);
        }
        else {
          if ((int)param_2[1] + local_468.DeviceName._12_4_ == 1) goto LAB_14279877d;
LAB_14279851d:
          FUN_1400020e8(local_5a8,L"PrimaryIsNotTheChoosenAdapter ",0x1e);
        }
        FUN_14626e2bc(&local_468);
        pwVar13 = (wchar_t *)local_4d8._0_8_;
        if (CONCAT44(uStack_4e4,local_4e8) != 0) {
          FUN_1400020a8();
          pwVar13 = (wchar_t *)local_4d8._0_8_;
        }
      }
      goto LAB_14279927c;
    }
    iVar22 = 0;
    iVar17 = 0;
    do {
      FUN_140002266(&local_4d8,
                    L"SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\%04d"
                   );
      local_468._0_8_ = local_468._0_8_ & 0xffffffff00000000;
      local_468.DeviceString[10] = L'\0';
      local_468.DeviceString[0xb] = L'\0';
      local_468.DeviceString[0xc] = L'\0';
      local_468.DeviceString[0xd] = L'\0';
      local_468.DeviceString[0xe] = L'\0';
      local_468.DeviceString[0xf] = L'\0';
      local_468.DeviceString[0x10] = L'\0';
      local_468.DeviceString[0x11] = L'\0';
      local_468.DeviceString[2] = L'\0';
      local_468.DeviceString[3] = L'\0';
      local_468.DeviceString[4] = L'\0';
      local_468.DeviceString[5] = L'\0';
      local_468.DeviceString[6] = L'\0';
      local_468.DeviceString[7] = L'\0';
      local_468.DeviceString[8] = L'\0';
      local_468.DeviceString[9] = L'\0';
      local_468.DeviceName[0x1a] = L'\0';
      local_468.DeviceName[0x1b] = L'\0';
      local_468.DeviceName[0x1c] = L'\0';
      local_468.DeviceName[0x1d] = L'\0';
      local_468.DeviceName[0x1e] = L'\0';
      local_468.DeviceName[0x1f] = L'\0';
      local_468.DeviceString[0] = L'\0';
      local_468.DeviceString[1] = L'\0';
      local_468.DeviceName[0x12] = L'\0';
      local_468.DeviceName[0x13] = L'\0';
      local_468.DeviceName[0x14] = L'\0';
      local_468.DeviceName[0x15] = L'\0';
      local_468.DeviceName[0x16] = L'\0';
      local_468.DeviceName[0x17] = L'\0';
      local_468.DeviceName[0x18] = L'\0';
      local_468.DeviceName[0x19] = L'\0';
      local_468.DeviceName[10] = L'\0';
      local_468.DeviceName[0xb] = L'\0';
      local_468.DeviceName[0xc] = L'\0';
      local_468.DeviceName[0xd] = L'\0';
      local_468.DeviceName[0xe] = L'\0';
      local_468.DeviceName[0xf] = L'\0';
      local_468.DeviceName[0x10] = L'\0';
      local_468.DeviceName[0x11] = L'\0';
      local_468.DeviceName[2] = L'\0';
      local_468.DeviceName[3] = L'\0';
      local_468.DeviceName[4] = L'\0';
      local_468.DeviceName[5] = L'\0';
      local_468.DeviceName[6] = L'\0';
      local_468.DeviceName[7] = L'\0';
      local_468.DeviceName[8] = L'\0';
      local_468.DeviceName[9] = L'\0';
      FUN_142799539(&local_4d8,&local_468);
      cVar7 = FUN_14682fb98(&local_468);
      if (cVar7 == '\0') {
        FUN_1400020e8(local_5a8,L"GetVideoDriverDetailsInvalid ",0x1d);
LAB_1427980c9:
        bVar3 = 1;
      }
      else {
        if (local_468.DeviceName._12_4_ == (int)param_2[1]) {
          if (1 < (int)local_468.DeviceName._12_4_) {
            lVar14 = 0;
            while( true ) {
              uVar12 = *(ushort *)(local_468.DeviceName._4_8_ + lVar14);
              uVar11 = (ulonglong)uVar12;
              uVar20 = *(ushort *)(*param_2 + lVar14);
              if (uVar12 != uVar20) break;
              if (uVar12 == 0) goto LAB_1427980b6;
LAB_14279805f:
              lVar14 = lVar14 + 2;
            }
            if ((uVar20 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              uVar21 = (ulonglong)uVar20;
              uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
              if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar21]) goto LAB_14279805f;
            }
            if (uVar12 != uVar20) goto LAB_142798091;
          }
LAB_1427980b6:
          FUN_14682fc74(local_590,&local_468);
          iVar22 = iVar22 + 1;
          goto LAB_1427980c9;
        }
        if ((int)param_2[1] + local_468.DeviceName._12_4_ == 1) goto LAB_1427980b6;
LAB_142798091:
        bVar3 = 0;
      }
      FUN_14626e2bc(&local_468);
      if ((wchar_t *)local_4d8._0_8_ != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar17 = iVar17 + 1;
    } while (!(bool)(bVar3 | iVar17 == 0x100));
    if (iVar22 != 1) goto LAB_14279811d;
  }
  *param_1 = local_590[0];
  *(undefined8 *)(param_1 + 2) = local_588;
  local_588 = 0;
  param_1[4] = (int)uStack_580;
  param_1[5] = uStack_580._4_4_;
  uStack_580 = 0;
  *(undefined8 *)(param_1 + 6) = local_578;
  local_578 = 0;
  param_1[8] = (int)uStack_570;
  param_1[9] = uStack_570._4_4_;
  uStack_570 = 0;
  *(undefined8 *)(param_1 + 10) = local_568;
  local_568 = 0;
  param_1[0xc] = (int)uStack_560;
  param_1[0xd] = uStack_560._4_4_;
  uStack_560 = 0;
  *(undefined8 *)(param_1 + 0xe) = local_558;
  local_558 = 0;
  param_1[0x10] = (int)uStack_550;
  param_1[0x11] = uStack_550._4_4_;
  uStack_550 = 0;
  *(undefined8 *)(param_1 + 0x12) = local_548;
  local_548 = 0;
  param_1[0x14] = (int)uStack_540;
  param_1[0x15] = uStack_540._4_4_;
  uStack_540 = 0;
  *(undefined8 *)(param_1 + 0x16) = local_538;
  local_538 = 0;
  param_1[0x18] = (int)uStack_530;
  param_1[0x19] = uStack_530._4_4_;
  uStack_530 = 0;
LAB_1427993be:
  if (local_5a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14626e2bc(local_590);
  if ((local_60 ^ (ulonglong)auStackY_618) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427994e5 FUN_1427994e5 body=83 status=ok
// SIG undefined FUN_1427994e5(void)

undefined8 FUN_1427994e5(HMONITOR param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined1 auStack_98 [40];
  tagMONITORINFO local_70 [2];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_4 = *param_4 + 1;
  local_70[0].cbSize = 0x68;
  GetMonitorInfoW(param_1,local_70);
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142799539 FUN_142799539 body=1786 status=ok
// SIG undefined FUN_142799539(void)

void FUN_142799539(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  undefined2 **ppuVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  piVar1 = param_2 + 2;
  if (*(int *)(param_1 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_1;
  }
  cVar8 = FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"Device Description",piVar1);
  if (cVar8 == '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*param_1;
    }
    cVar8 = FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"DriverDesc",piVar1);
    if (cVar8 == '\0') {
      iVar9 = *(int *)(param_1 + 1);
      lVar12 = (longlong)iVar9;
      local_48 = (undefined2 *)0x0;
      pvVar5 = (void *)*param_1;
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar9);
      FUN_1446dd670(&local_48,(uint)(lVar12 == 0) + iVar9 + 9,0);
      if (lVar12 != 0) {
        memcpy(local_48,pvVar5,lVar12 * 2);
      }
      FUN_1400020e8(&local_48,L"\\Settings",9);
      puVar10 = local_48;
      if ((int)uStack_40 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      cVar8 = FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"Device Description",piVar1);
      if (cVar8 == '\0') {
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = (undefined2 *)0x0;
        uStack_b0 = 0;
        local_58 = 0;
        FUN_14683339a(param_2,&local_b8);
        FUN_14626e2bc(&local_b8);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_142799b07;
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  piVar1 = param_2 + 6;
  if (*(int *)(param_1 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_1;
  }
  FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"ProviderName",piVar1);
  if (1 < param_2[8]) {
    local_e0 = 0xffffffff;
    local_e8 = 0;
    iVar9 = FUN_1447ee042(piVar1,L"NVIDIA",6,1);
    iVar11 = 0x10de;
    if (iVar9 == -1) {
      local_e0 = 0xffffffff;
      local_e8 = 0;
      iVar9 = FUN_1447ee042(piVar1,L"Advanced Micro Devices",0x16,1);
      iVar11 = 0x1002;
      if (iVar9 == -1) {
        local_e0 = 0xffffffff;
        local_e8 = 0;
        iVar9 = FUN_1447ee042(piVar1,L"Intel",5,1);
        iVar11 = 0x8086;
        if (iVar9 == -1) goto LAB_14279974d;
      }
    }
    *param_2 = iVar11;
  }
LAB_14279974d:
  if (*(int *)(param_1 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_1;
  }
  FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"DriverVersion",param_2 + 10);
  ppuVar2 = (undefined2 **)(param_2 + 0xe);
  iVar9 = param_2[0xc] + -1;
  if (param_2[0xc] == 0) {
    iVar9 = 0;
  }
  FUN_1402980a2(ppuVar2,*(undefined8 *)(param_2 + 10),iVar9);
  if (*param_2 == 0x1002) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*param_1;
    }
    cVar8 = FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"Catalyst_Version",ppuVar2);
    if (cVar8 != '\0') {
      FUN_140056680(&local_48);
      iVar9 = (int)uStack_40;
      if ((int)uStack_40 < 2) {
        local_b8 = (undefined2 *)0x0;
        uVar4 = param_2[0x10];
        pvVar5 = *(void **)(param_2 + 0xe);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar4);
        if ((longlong)(int)uVar4 == 0) {
          uStack_b0 = (ulonglong)uVar4;
        }
        else {
          FUN_1446dd670(&local_b8,uVar4,0);
          memcpy(local_b8,pvVar5,(longlong)(int)uVar4 * 2);
        }
      }
      else {
        iVar11 = param_2[0x10] + -1;
        if (param_2[0x10] == 0) {
          iVar11 = 0;
        }
        local_b8 = local_48;
        local_48 = (undefined2 *)0x0;
        iVar7 = uStack_40._4_4_;
        uStack_b0 = uStack_40;
        uStack_40 = 0;
        iVar3 = iVar11 + iVar9;
        if (iVar3 < iVar9) goto LAB_142799b80;
        if (iVar7 < iVar3) {
          FUN_1446f8c06(&local_b8);
        }
        FUN_1400020e8(&local_b8,*ppuVar2,iVar11);
      }
      if (ppuVar2 == &local_b8) {
        if (local_b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 0xe) != 0) {
          FUN_1400020a8();
        }
        *(undefined2 **)(param_2 + 0xe) = local_b8;
        local_b8 = (undefined2 *)0x0;
        param_2[0x10] = (int)uStack_b0;
        param_2[0x11] = uStack_b0._4_4_;
        uStack_b0 = 0;
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
    if (*(int *)(param_1 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*param_1;
    }
    cVar8 = FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"RadeonSoftwareEdition",&local_b8);
    if (cVar8 != '\0') {
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      if (*(int *)(param_1 + 1) == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = (undefined2 *)*param_1;
      }
      cVar8 = FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"RadeonSoftwareVersion",&local_48);
      puVar10 = local_b8;
      if (cVar8 != '\0') {
        lVar12 = (longlong)(int)uStack_b0;
        local_d8 = (undefined2 *)0x0;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)uStack_b0);
        FUN_1446dd670(&local_d8,(uint)(lVar12 == 0) + (int)uStack_b0 + 1,0);
        if (lVar12 != 0) {
          memcpy(local_d8,puVar10,lVar12 * 2);
        }
        FUN_1400020e8(&local_d8,&DAT_149e001d8,1);
        puVar10 = local_48;
        uVar6 = uStack_d0;
        iVar9 = (int)uStack_d0;
        if ((int)uStack_d0 < 2) {
          local_c8 = (undefined2 *)0x0;
          lVar12 = (longlong)(int)uStack_40;
          local_c0 = CONCAT44(local_c0._4_4_,(int)uStack_40);
          if (lVar12 == 0) {
            local_c0 = uStack_40 & 0xffffffff;
          }
          else {
            FUN_1446dd670(&local_c8,uStack_40 & 0xffffffff,0);
            memcpy(local_c8,puVar10,lVar12 * 2);
          }
        }
        else {
          iVar11 = (int)uStack_40 + -1;
          if ((int)uStack_40 == 0) {
            iVar11 = 0;
          }
          local_c8 = local_d8;
          iVar7 = uStack_d0._4_4_;
          local_d8 = (undefined2 *)0x0;
          uStack_d0 = 0;
          local_c0 = uVar6;
          iVar3 = iVar11 + iVar9;
          if (iVar3 < iVar9) {
LAB_142799b80:
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar11);
          }
          if (iVar7 < iVar3) {
            FUN_1446f8c06(&local_c8);
          }
          FUN_1400020e8(&local_c8,local_48,iVar11);
        }
        if (ppuVar2 == &local_c8) {
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_2 + 0xe) != 0) {
            FUN_1400020a8();
          }
          *(undefined2 **)(param_2 + 0xe) = local_c8;
          local_c8 = (undefined2 *)0x0;
          param_2[0x10] = (int)local_c0;
          param_2[0x11] = local_c0._4_4_;
          local_c0 = 0;
        }
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_142799acc:
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (*param_2 == 0x10de) {
    FUN_145ca9f74(&local_b8,param_2 + 10);
    if (ppuVar2 == &local_b8) goto LAB_142799acc;
    if (*(longlong *)(param_2 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_2 + 0xe) = local_b8;
    local_b8 = (undefined2 *)0x0;
    param_2[0x10] = (int)uStack_b0;
    param_2[0x11] = uStack_b0._4_4_;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_1;
  }
  FUN_145ca351c(&DAT_ffffffff80000002,puVar10,L"DriverDate",param_2 + 0x12);
LAB_142799b07:
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142799c34 FUN_142799c34 body=69 status=ok
// SIG undefined FUN_142799c34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142799c34(void)

{
  _DAT_14c8c2b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142799c76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8c2b60,1);
  return;
}



// FUNCTION 142799c7a FUN_142799c7a body=1394 status=ok
// SIG undefined FUN_142799c7a(void)

/* WARNING: Removing unreachable block (ram,0x00014279a08d) */
/* WARNING: Removing unreachable block (ram,0x000142799f04) */
/* WARNING: Removing unreachable block (ram,0x000142799de1) */
/* WARNING: Removing unreachable block (ram,0x000142799fba) */
/* WARNING: Removing unreachable block (ram,0x00014279a1a3) */

bool FUN_142799c7a(longlong *param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  int local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1447a1747(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1408be2c4(param_1,0);
  }
  FUN_1456afa32(&local_b8,L"LOCALAPPDATA");
  if (1 < local_b0) {
    if (param_2 == '\0') {
      if (param_3 == '\0') {
        if (param_4 == '\0') goto LAB_14279a1a8;
        local_a8 = local_b8;
        if (local_b8 == (wchar_t *)0x0) {
          local_a0 = 0;
        }
        else {
          sVar3 = wcslen(local_b8);
          local_a0 = (int)sVar3;
        }
        local_78 = L"Intel";
        local_70 = 5;
        local_68 = L"ShaderCache";
        local_60 = 0xb;
      }
      else {
        local_a8 = local_b8;
        if (local_b8 == (wchar_t *)0x0) {
          local_a0 = 0;
        }
        else {
          sVar3 = wcslen(local_b8);
          local_a0 = (int)sVar3;
        }
        local_98 = L"AMD";
        local_90 = 3;
        local_88 = L"DxCache";
        local_80 = 7;
        FUN_140bee87a(&local_c8,&local_a8,3);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(param_1,iVar1);
        }
        lVar2 = *param_1;
        lVar4 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar4) = 0;
        *(undefined8 *)(lVar2 + lVar4) = local_c8;
        *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_c0;
        *(undefined4 *)(lVar2 + 0xc + lVar4) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        local_a8 = local_b8;
        if (local_b0 == 0) {
          local_a8 = L"";
        }
        if (local_a8 == (wchar_t *)0x0) {
          local_a0 = 0;
        }
        else {
          sVar3 = wcslen(local_a8);
          local_a0 = (int)sVar3;
        }
        local_98 = L"AMD";
        local_90 = 3;
        local_88 = L"DxcCache";
        local_80 = 8;
        FUN_140bee87a(&local_c8,&local_a8,3);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(param_1,iVar1);
        }
        lVar2 = *param_1;
        lVar4 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar4) = 0;
        *(undefined8 *)(lVar2 + lVar4) = local_c8;
        *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_c0;
        *(undefined4 *)(lVar2 + 0xc + lVar4) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        local_a8 = local_b8;
        if (local_b0 == 0) {
          local_a8 = L"";
        }
        if (local_a8 == (wchar_t *)0x0) {
          local_a0 = 0;
        }
        else {
          sVar3 = wcslen(local_a8);
          local_a0 = (int)sVar3;
        }
        local_98 = L"..";
        local_90 = 2;
        local_88 = L"LocalLow";
        local_80 = 8;
        local_78 = L"AMD";
        local_70 = 3;
        local_68 = L"DxCache";
        local_60 = 7;
        FUN_140bee87a(&local_c8,&local_a8,5);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1447a1bd6(param_1,iVar1);
        }
        lVar2 = *param_1;
        lVar4 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar4) = 0;
        *(undefined8 *)(lVar2 + lVar4) = local_c8;
        *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_c0;
        *(undefined4 *)(lVar2 + 0xc + lVar4) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        local_a8 = local_b8;
        if (local_b0 == 0) {
          local_a8 = L"";
        }
        if (local_a8 == (wchar_t *)0x0) {
          local_a0 = 0;
        }
        else {
          sVar3 = wcslen(local_a8);
          local_a0 = (int)sVar3;
        }
        local_78 = L"AMD";
        local_70 = 3;
        local_68 = L"DxcCache";
        local_60 = 8;
      }
      uVar5 = 5;
    }
    else {
      local_a8 = local_b8;
      if (local_b8 == (wchar_t *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar3 = wcslen(local_b8);
        local_a0 = (int)sVar3;
      }
      local_98 = L"NVIDIA";
      local_90 = 6;
      local_88 = L"DXCache";
      local_80 = 7;
      FUN_140bee87a(&local_c8,&local_a8,3);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_1,iVar1);
      }
      lVar2 = *param_1;
      lVar4 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar4) = 0;
      *(undefined8 *)(lVar2 + lVar4) = local_c8;
      *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_c0;
      *(undefined4 *)(lVar2 + 0xc + lVar4) = local_c0._4_4_;
      local_c0 = 0;
      local_c8 = 0;
      local_a8 = local_b8;
      if (local_b0 == 0) {
        local_a8 = L"";
      }
      if (local_a8 == (wchar_t *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar3 = wcslen(local_a8);
        local_a0 = (int)sVar3;
      }
      local_78 = L"NVIDIA";
      local_70 = 6;
      local_68 = L"PerDriverVersion";
      local_60 = 0x10;
      local_58 = L"DXCache";
      local_50 = 7;
      uVar5 = 6;
    }
    local_80 = 8;
    local_88 = L"LocalLow";
    local_90 = 2;
    local_98 = L"..";
    FUN_140bee87a(&local_c8,&local_a8,uVar5);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_c8;
    local_c8 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_c0;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_c0._4_4_;
    local_c0 = 0;
  }
LAB_14279a1a8:
  lVar2 = param_1[1];
  if (local_b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return (int)lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279a1ee FUN_14279a1ee body=514 status=ok
// SIG undefined FUN_14279a1ee(void)

longlong FUN_14279a1ee(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined8 *local_a8;
  ulonglong uStack_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_142799c7a(&local_98,param_1,param_2,param_3);
  if ((longlong)(int)uStack_90 == 0) {
    uVar5 = 0;
    lVar6 = 0;
  }
  else {
    puVar8 = local_98 + (longlong)(int)uStack_90 * 2;
    lVar6 = 0;
    puVar7 = local_98;
    local_c0 = puVar8;
    do {
      plVar2 = (longlong *)FUN_14054d1d4();
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(puVar7 + 1) != 0) {
        puVar4 = (undefined2 *)*puVar7;
      }
      cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,puVar4);
      if (cVar1 != '\0') {
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        plVar2 = (longlong *)FUN_14054d1d4();
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar7;
        }
        uVar5 = 0;
        (**(code **)(*plVar2 + 0x70))(plVar2,&local_a8,puVar4,0);
        if ((longlong)(int)uStack_a0 != 0) {
          puVar9 = local_a8 + (longlong)(int)uStack_a0 * 2;
          puVar8 = local_a8;
          do {
            local_88 = *puVar7;
            local_80 = *(int *)(puVar7 + 1) + -1;
            if (*(int *)(puVar7 + 1) == 0) {
              local_80 = 0;
            }
            local_78 = *puVar8;
            local_70 = *(int *)(puVar8 + 1) + -1;
            if (*(int *)(puVar8 + 1) == 0) {
              local_70 = 0;
            }
            FUN_140bee87a(&local_b8,&local_88,2);
            plVar2 = (longlong *)FUN_14054d1d4();
            puVar4 = &DAT_149dfb77a;
            if (local_b0 != 0) {
              puVar4 = local_b8;
            }
            lVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,puVar4);
            if (lVar3 < 1) {
              lVar3 = 0;
            }
            if (local_b8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar6 = lVar6 + lVar3;
            puVar8 = puVar8 + 2;
          } while (puVar8 != puVar9);
          uVar5 = uStack_a0 & 0xffffffff;
        }
        FUN_1447a1747(local_a8,uVar5);
        puVar8 = local_c0;
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar8);
    uVar5 = uStack_90 & 0xffffffff;
  }
  FUN_1447a1747(local_98,uVar5);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279a3f2 FUN_14279a3f2 body=621 status=ok
// SIG undefined FUN_14279a3f2(void)

bool FUN_14279a3f2(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  HDEVINFO DeviceInfoSet;
  DWORD MemberIndex;
  bool bVar5;
  undefined1 auStackY_2e8 [32];
  int local_284;
  int local_280;
  undefined4 uStack_27c;
  int local_278;
  DWORD local_270;
  DEVPROPTYPE local_26c;
  BYTE local_268 [512];
  _SP_DEVINFO_DATA local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_2e8;
  *param_2 = -1;
  *param_3 = -1;
  bVar5 = false;
  DeviceInfoSet = SetupDiGetClassDevsW((GUID *)&DAT_149e3f484,(PCWSTR)0x0,(HWND)0x0,2);
  if (DeviceInfoSet != (HDEVINFO)0xffffffffffffffff) {
    local_68.cbSize = 0x20;
    bVar5 = false;
    BVar3 = SetupDiEnumDeviceInfo(DeviceInfoSet,0,&local_68);
    if (BVar3 != 0) {
      MemberIndex = 1;
      do {
        local_270 = 0;
        BVar3 = SetupDiGetDevicePropertyW
                          (DeviceInfoSet,&local_68,(DEVPROPKEY *)&DAT_149e3f494,&local_26c,local_268
                           ,0x200,&local_270,0);
        if (BVar3 != 0) {
          FUN_140056680(&local_280,local_268);
          uVar2 = uStack_27c;
          iVar1 = local_280;
          iVar4 = (int)param_1[1];
          if (iVar4 == local_278) {
            bVar5 = true;
            if (1 < iVar4) {
              iVar4 = wcscmp((wchar_t *)*param_1,(wchar_t *)CONCAT44(uStack_27c,local_280));
              bVar5 = iVar4 == 0;
            }
          }
          else {
            bVar5 = local_278 + iVar4 == 1;
          }
          if (CONCAT44(uVar2,iVar1) != 0) {
            FUN_1400020a8(CONCAT44(uVar2,iVar1));
          }
          if (bVar5) {
            local_280 = 0;
            local_284 = 0;
            BVar3 = SetupDiGetDevicePropertyW
                              (DeviceInfoSet,&local_68,(DEVPROPKEY *)&DAT_149e3fb18,&local_26c,
                               (PBYTE)&local_280,4,&local_270,0);
            if (BVar3 != 0) {
              *param_2 = local_280;
            }
            BVar3 = SetupDiGetDevicePropertyW
                              (DeviceInfoSet,&local_68,(DEVPROPKEY *)&DAT_149e3fb2c,&local_26c,
                               (PBYTE)&local_284,4,&local_270,0);
            if (BVar3 == 0) {
              iVar4 = *param_3;
            }
            else {
              *param_3 = local_284;
              iVar4 = local_284;
            }
            bVar5 = 0 < iVar4 && 0 < *param_2;
            goto LAB_14279a614;
          }
        }
        BVar3 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,&local_68);
        MemberIndex = MemberIndex + 1;
      } while (BVar3 != 0);
      bVar5 = false;
    }
LAB_14279a614:
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStackY_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 14279a660 FUN_14279a660 body=49 status=ok
// SIG undefined FUN_14279a660(void)

void FUN_14279a660(void)

{
  FUN_1447a1747(DAT_14c8c2b70,DAT_14c8c2b78);
  if (DAT_14c8c2b70 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14279a691 FUN_14279a691 body=49 status=ok
// SIG undefined FUN_14279a691(void)

void FUN_14279a691(void)

{
  FUN_1447a1747(DAT_14c8c2b80,DAT_14c8c2b88);
  if (DAT_14c8c2b80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14279a6c2 FUN_14279a6c2 body=47 status=ok
// SIG undefined FUN_14279a6c2(void)

void FUN_14279a6c2(void)

{
  DAT_14c8c2bd8 = 0;
  if (DAT_14c8c2bd0 != 0) {
    FUN_1400020a8();
  }
  FUN_145db2814(&DAT_14c8c2b90);
  return;
}



// FUNCTION 14279a6f2 FUN_14279a6f2 body=206 status=ok
// SIG undefined FUN_14279a6f2(void)

ulonglong FUN_14279a6f2(uint param_1,char param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE hProcess;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  DWORD_PTR dwProcessAffinityMask;
  undefined1 auStack_838 [32];
  undefined1 local_818 [2056];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_838;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    if (param_2 == '\0') {
      dwProcessAffinityMask = 0xffffffffffffffff;
      if (param_1 < 0x40) {
        dwProcessAffinityMask = ~(-1L << ((byte)param_1 & 0x3f));
      }
    }
    else {
      bVar5 = (byte)param_1 * '\x02';
      dwProcessAffinityMask = 0x5555555555555555;
      if (param_1 < 0x20) {
        dwProcessAffinityMask =
             (0x1555555555555554U >> (bVar5 & 0x3f)) << (bVar5 & 0x3f) ^ 0x1555555555555555;
      }
    }
    hProcess = GetCurrentProcess();
    BVar1 = SetProcessAffinityMask(hProcess,dwProcessAffinityMask);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar4 = FUN_14682f6b8(local_818,0x400,DVar2);
      uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),DAT_14c8c2be8);
    }
    else {
      DAT_14c8c2be8 = 1;
      uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_838) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 14279a7c2 FUN_14279a7c2 body=3378 status=ok
// SIG undefined FUN_14279a7c2(void)

void FUN_14279a7c2(LPCWSTR param_1,undefined2 *param_2,wchar_t *param_3)

{
  code *pcVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  HINSTANCE pHVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  LPCWSTR lpFile;
  undefined2 *puVar20;
  ushort uVar21;
  ushort uVar22;
  undefined1 auStackY_148 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  wchar_t *local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  ulonglong uStack_70;
  undefined8 local_60;
  int iStack_58;
  int iStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStackY_148;
  if ((DAT_14c8688d8 != (longlong *)0x0 && DAT_14c8688e0 != 0) &&
     (cVar3 = (**(code **)(*DAT_14c8688d8 + 0x30))(), cVar3 != '\0')) {
    plVar13 = DAT_14c8688d8;
    if (DAT_14c8688e0 == 0) {
      plVar13 = (longlong *)0x0;
    }
    cVar3 = (**(code **)(*plVar13 + 0x58))(plVar13,param_1);
    if (cVar3 == '\0') {
      if (param_3 != (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStackY_148);
      }
      goto LAB_14279a8c2;
    }
  }
  if (param_3 != (wchar_t *)0x0) {
    FUN_14020fad6(param_3,&DAT_149dfb77a);
  }
  if (((DAT_14c8688f0 == 0) || (DAT_14c8688e8 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*DAT_14c8688e8 + 0x30))(), cVar3 == '\0')) {
    local_c8 = (wchar_t *)0x0;
    uStack_c0 = 0;
    cVar3 = FUN_146816ec6(param_1);
    if ((cVar3 != '\0') && ((int)uStack_c0 - 3U < 0x7ffffffe)) {
      lVar18 = 0;
      while( true ) {
        uVar21 = *(ushort *)((longlong)local_c8 + lVar18);
        uVar16 = (ulonglong)uVar21;
        uVar22 = *(ushort *)((longlong)&DAT_149e3fc1c + lVar18);
        if (uVar21 != uVar22) break;
        if (uVar21 == 0) goto LAB_14279ab3f;
LAB_14279a997:
        lVar18 = lVar18 + 2;
      }
      if ((uVar22 | uVar21) < 0x80) {
        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        uVar19 = (ulonglong)uVar22;
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar19]) goto LAB_14279a997;
      }
      if (uVar21 != uVar22) {
        pwVar11 = local_c8;
        if ((int)uStack_c0 == 0) {
          pwVar11 = L"";
        }
        lVar18 = 0;
        goto LAB_14279a9dc;
      }
    }
LAB_14279ab3f:
    if (param_2 == (undefined2 *)0x0) {
      param_2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_60,L"%s %s",param_1,param_2);
    FUN_140ded26a(&local_60);
    local_d8 = (undefined4)local_60;
    uStack_d4 = local_60._4_4_;
    iStack_d0 = iStack_58;
    iStack_cc = iStack_54;
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    cVar3 = FUN_145ca351c(0xffffffff80000001,
                          L"Software\\Microsoft\\Windows\\Shell\\Associations\\UrlAssociations\\http\\UserChoice"
                          ,L"Progid");
    plVar13 = local_88;
    if (cVar3 != '\0') {
      lVar18 = (longlong)(int)uStack_80;
      local_60 = (wchar_t *)0x0;
      iStack_58 = (int)uStack_80;
      FUN_1446dd670(&local_60,(uint)(lVar18 == 0) + (int)uStack_80 + 0x13,0);
      if (lVar18 != 0) {
        memcpy(local_60,plVar13,lVar18 * 2);
      }
      FUN_1400020e8(&local_60,L"\\shell\\open\\command",0x13);
      pwVar11 = local_60;
      if (iStack_58 == 0) {
        pwVar11 = L"";
      }
      FUN_145ca351c(0xffffffff80000000,pwVar11,0,&local_78);
      if (local_60 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((int)uStack_70 < 2) {
      FUN_145ca351c(0xffffffff80000000,L"http\\shell\\open\\command",0,&local_78);
      if (1 < (int)uStack_70) goto LAB_14279ac96;
LAB_14279ae19:
      if (iStack_d0 == 0) {
        lpFile = L"";
      }
      else {
        lpFile = (LPCWSTR)CONCAT44(uStack_d4,local_d8);
      }
      lVar18 = 7;
      lVar15 = 0;
      while( true ) {
        uVar21 = *(ushort *)((longlong)lpFile + lVar15);
        uVar16 = (ulonglong)uVar21;
        uVar22 = *(ushort *)((longlong)&DAT_149e41626 + lVar15);
        if (uVar21 != uVar22) break;
        if (uVar21 == 0) goto LAB_14279aee7;
LAB_14279ae5c:
        lVar18 = lVar18 + -1;
        if (lVar18 == 0) goto LAB_14279aee7;
        lVar15 = lVar15 + 2;
      }
      if ((uVar22 | uVar21) < 0x80) {
        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
        uVar19 = (ulonglong)uVar22;
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar19]) goto LAB_14279ae5c;
      }
      if (uVar21 != uVar22) {
        lVar18 = 8;
        lVar15 = 0;
        goto LAB_14279ae9e;
      }
LAB_14279aee7:
      pHVar10 = ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
      if (param_3 != (wchar_t *)0x0) {
        if ((longlong)pHVar10 < 0x21) {
          local_60 = L"UrlFailed";
          iStack_58 = 9;
          FUN_1446e940c(local_ac,&local_60);
          local_60 = L"Core";
          iStack_58 = 4;
          FUN_1446e940c(local_b0,&local_60);
          local_60 = L"Failed launching URL";
          iStack_58 = 0x14;
          FUN_140208c1e(&local_a8,local_b0,local_ac,&local_60);
          pwVar11 = local_a8;
          if (*(code **)(*(longlong *)local_a8 + 0x50) != FUN_144828418) {
            pwVar11 = (wchar_t *)(**(code **)(*(longlong *)local_a8 + 0x50))();
          }
          FUN_1447a1fc0(pwVar11);
          pcVar1 = *(code **)(*(longlong *)local_a8 + 0x28);
          if (pcVar1 == FUN_14482841c) {
            pwVar11 = local_a8 + 0xc;
            if (*(longlong *)(local_a8 + 0x14) != 0) {
              pwVar11 = (wchar_t *)(*(longlong *)(local_a8 + 0x14) + 8);
            }
          }
          else if (pcVar1 == (code *)&LAB_14010c34c) {
            pwVar11 = local_a8 + 8;
          }
          else {
            pwVar11 = (wchar_t *)(*pcVar1)(local_a8);
          }
          local_98 = (wchar_t *)0x0;
          uVar4 = *(uint *)(pwVar11 + 4);
          pvVar2 = *(void **)pwVar11;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
          if ((longlong)(int)uVar4 == 0) {
            uStack_90 = (ulonglong)uVar4;
          }
          else {
            FUN_1446dd670(&local_98,uVar4,0);
            memcpy(local_98,pvVar2,(longlong)(int)uVar4 * 2);
          }
        }
        else {
          FUN_140056680(&local_98,&DAT_149dfb77a);
        }
        iVar8 = (int)uStack_90 + -1;
        if ((int)uStack_90 == 0) {
          iVar8 = 0;
        }
        FUN_1402980a2(param_3,local_98,iVar8);
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (((longlong)pHVar10 < 0x21) && (local_a8 != (wchar_t *)0x0)) {
          (**(code **)(*(longlong *)local_a8 + 0x10))();
        }
      }
    }
    else {
LAB_14279ac96:
      local_98 = (wchar_t *)0x0;
      uStack_90 = 0;
      uVar4 = FUN_1447ee042(&local_78,&DAT_149e01f5a,1,1);
      if (uVar4 == 0xffffffff) {
LAB_14279ad64:
        pwVar11 = (wchar_t *)0x0;
LAB_14279adfa:
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (pwVar11 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar11);
        }
        goto LAB_14279ae19;
      }
      uVar17 = uVar4 + 1;
      iVar5 = FUN_1447ee042(&local_78,&DAT_149e01f5a,1,1);
      iVar8 = 0;
      if (iVar5 == -1) goto LAB_14279ad64;
      if ((int)(~uVar4 + iVar5) < 0) {
        pwVar11 = (wchar_t *)0x0;
      }
      else {
        uVar6 = (int)uStack_70 - 1;
        if ((int)uStack_70 == 0) {
          uVar6 = 0;
        }
        uVar7 = uVar6;
        if ((int)uVar17 < (int)uVar6) {
          uVar7 = uVar17;
        }
        uVar16 = (ulonglong)uVar7;
        if ((int)uVar7 < 1) {
          uVar16 = 0;
        }
        uVar19 = (longlong)(int)uVar17 + (ulonglong)(~uVar4 + iVar5);
        if ((longlong)(int)uVar6 <= (longlong)uVar19) {
          uVar19 = (longlong)(int)uVar6;
        }
        if ((longlong)uVar19 < (longlong)uVar16) {
          uVar19 = uVar16;
        }
        puVar20 = local_78;
        if ((int)uStack_70 == 0) {
          puVar20 = &DAT_149dfb77a;
        }
        FUN_14006620a(&local_60,puVar20 + uVar16,(int)uVar19 - (int)uVar16);
        pwVar11 = local_60;
        iVar8 = iStack_58;
      }
      uVar4 = (int)uStack_70 - 1;
      puVar20 = local_78;
      if ((int)uStack_70 == 0) {
        uVar4 = 0;
        puVar20 = &DAT_149dfb77a;
      }
      uVar17 = iVar5 + 1U;
      if ((int)uVar4 <= (int)(iVar5 + 1U)) {
        uVar17 = uVar4;
      }
      uVar16 = (ulonglong)uVar17;
      if ((int)uVar17 < 1) {
        uVar16 = 0;
      }
      FUN_14006620a(&local_60,puVar20 + uVar16,uVar4 - (int)uVar16);
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_60;
      uStack_90 = CONCAT44(iStack_54,iStack_58);
      if (iVar8 < 2) goto LAB_14279adfa;
      if (iStack_d0 == 0) {
        puVar20 = &DAT_149dfb77a;
      }
      else {
        puVar20 = (undefined2 *)CONCAT44(uStack_d4,local_d8);
      }
      iVar8 = FUN_1448097c4(&local_98,&DAT_149e4161a,puVar20,1);
      if (iVar8 == 0) {
        FUN_140b1283a(&local_a8,&DAT_149e41620,&local_d8);
        iVar8 = (int)local_a0;
        iVar9 = ((int)local_a0 == 0) + 1;
        local_60 = local_a8;
        local_a8 = (wchar_t *)0x0;
        iStack_58 = (int)local_a0;
        iVar5 = local_a0._4_4_;
        iStack_54 = local_a0._4_4_;
        local_a0 = 0;
        iVar14 = iVar9 + iVar8;
        if (iVar14 < iVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar14);
        }
        if (iVar5 < iVar14) {
          FUN_1446f8c06(&local_60);
        }
        FUN_1400020e8(&local_60,&DAT_149e01f5a,1);
        iVar8 = iStack_58 + -1;
        if (iStack_58 == 0) {
          iVar8 = 0;
        }
        FUN_1400020e8(&local_98,local_60,iVar8);
        if (local_60 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      pwVar12 = local_98;
      if ((int)uStack_90 == 0) {
        pwVar12 = L"";
      }
      FUN_14279b518(&local_60,pwVar11,pwVar12,1);
      if (local_60 == (wchar_t *)0x0) {
        if (param_3 != (wchar_t *)0x0) {
          local_60 = L"UrlFailed";
          iStack_58 = 9;
          FUN_1446e940c(local_ac,&local_60);
          local_60 = L"Core";
          iStack_58 = 4;
          FUN_1446e940c(local_b0,&local_60);
          local_60 = L"Failed launching URL";
          iStack_58 = 0x14;
          FUN_140208c1e(&local_a8,local_b0,local_ac,&local_60);
          pwVar12 = local_a8;
          if (*(code **)(*(longlong *)local_a8 + 0x50) != FUN_144828418) {
            pwVar12 = (wchar_t *)(**(code **)(*(longlong *)local_a8 + 0x50))();
          }
          FUN_1447a1fc0(pwVar12);
          pcVar1 = *(code **)(*(longlong *)local_a8 + 0x28);
          if (pcVar1 == FUN_14482841c) {
            pwVar12 = local_a8 + 0xc;
            if (*(longlong *)(local_a8 + 0x14) != 0) {
              pwVar12 = (wchar_t *)(*(longlong *)(local_a8 + 0x14) + 8);
            }
          }
          else if (pcVar1 == (code *)&LAB_14010c34c) {
            pwVar12 = local_a8 + 8;
          }
          else {
            pwVar12 = (wchar_t *)(*pcVar1)(local_a8);
          }
          if (pwVar12 != param_3) {
            iVar8 = *(int *)(pwVar12 + 4);
            pvVar2 = *(void **)pwVar12;
            *(int *)(param_3 + 4) = iVar8;
            if (iVar8 == 0 && *(int *)(param_3 + 6) == 0) {
              param_3[6] = L'\0';
              param_3[7] = L'\0';
            }
            else {
              FUN_1446dd670(param_3);
              if (iVar8 != 0) {
                memcpy(*(void **)param_3,pvVar2,(longlong)iVar8 * 2);
              }
            }
          }
          if (local_a8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_a8 + 0x10))();
          }
        }
        goto LAB_14279adfa;
      }
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (pwVar11 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar11);
      }
    }
LAB_14279b25e:
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    pwVar11 = local_c8;
    if (CONCAT44(uStack_d4,local_d8) != 0) {
      FUN_1400020a8();
      pwVar11 = local_c8;
    }
  }
  else {
    FUN_140056680(&local_60,param_1);
    plVar13 = DAT_14c8688e8;
    if (DAT_14c8688f0 == 0) {
      plVar13 = (longlong *)0x0;
    }
    (**(code **)(*plVar13 + 0x58))(plVar13,&local_60,param_3);
    pwVar11 = local_60;
  }
LAB_14279a8b8:
  if (pwVar11 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_14279a8c2:
  if ((local_50 ^ (ulonglong)auStackY_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14279a9dc:
  uVar21 = *(ushort *)((longlong)pwVar11 + lVar18);
  uVar16 = (ulonglong)uVar21;
  uVar22 = *(ushort *)((longlong)&DAT_149e3fc26 + lVar18);
  if (uVar21 != uVar22) {
    if ((uVar22 | uVar21) < 0x80) {
      uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      uVar19 = (ulonglong)uVar22;
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar19]) goto LAB_14279a9f5;
    }
    if (uVar21 != uVar22) {
      pHVar10 = ShellExecuteW((HWND)0x0,L"open",param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
      pwVar11 = local_c8;
      if (param_3 != (wchar_t *)0x0) {
        if ((longlong)pHVar10 < 0x21) {
          local_60 = L"UrlFailed";
          iStack_58 = 9;
          FUN_1446e940c(&local_98,&local_60);
          local_60 = L"Core";
          iStack_58 = 4;
          FUN_1446e940c(&local_a8,&local_60);
          local_60 = L"Failed launching URL";
          iStack_58 = 0x14;
          FUN_140208c1e(&local_88,&local_a8,&local_98,&local_60);
          plVar13 = local_88;
          if (*(code **)(*local_88 + 0x50) != FUN_144828418) {
            plVar13 = (longlong *)(**(code **)(*local_88 + 0x50))();
          }
          FUN_1447a1fc0(plVar13);
          pcVar1 = *(code **)(*local_88 + 0x28);
          if (pcVar1 == FUN_14482841c) {
            plVar13 = local_88 + 3;
            if (local_88[5] != 0) {
              plVar13 = (longlong *)(local_88[5] + 8);
            }
          }
          else if (pcVar1 == (code *)&LAB_14010c34c) {
            plVar13 = local_88 + 2;
          }
          else {
            plVar13 = (longlong *)(*pcVar1)(local_88);
          }
          local_78 = (undefined2 *)0x0;
          uVar4 = *(uint *)(plVar13 + 1);
          pvVar2 = (void *)*plVar13;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          if ((longlong)(int)uVar4 == 0) {
            uStack_70 = (ulonglong)uVar4;
          }
          else {
            FUN_1446dd670(&local_78,uVar4,0);
            memcpy(local_78,pvVar2,(longlong)(int)uVar4 * 2);
          }
        }
        else {
          FUN_140056680(&local_78,&DAT_149dfb77a);
        }
        iVar8 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar8 = 0;
        }
        FUN_1402980a2(param_3,local_78,iVar8);
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        pwVar11 = local_c8;
        if (((longlong)pHVar10 < 0x21) && (local_88 != (longlong *)0x0)) {
          (**(code **)(*local_88 + 0x10))();
          pwVar11 = local_c8;
        }
      }
      goto LAB_14279a8b8;
    }
    goto LAB_14279ab3f;
  }
  if (uVar21 == 0) goto LAB_14279ab3f;
LAB_14279a9f5:
  lVar18 = lVar18 + 2;
  goto LAB_14279a9dc;
LAB_14279ae9e:
  uVar21 = *(ushort *)((longlong)lpFile + lVar15);
  uVar16 = (ulonglong)uVar21;
  uVar22 = *(ushort *)((longlong)&DAT_149e41636 + lVar15);
  if (uVar21 != uVar22) {
    if ((uVar22 | uVar21) < 0x80) {
      uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      uVar19 = (ulonglong)uVar22;
      uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar19]) goto LAB_14279aeb3;
    }
    if (uVar21 != uVar22) goto LAB_14279b25e;
    goto LAB_14279aee7;
  }
  if (uVar21 == 0) goto LAB_14279aee7;
LAB_14279aeb3:
  lVar18 = lVar18 + -1;
  if (lVar18 == 0) goto LAB_14279aee7;
  lVar15 = lVar15 + 2;
  goto LAB_14279ae9e;
}



// FUNCTION 14279b518 FUN_14279b518 body=567 status=ok
// SIG undefined FUN_14279b518(void)

undefined8 *
FUN_14279b518(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4,byte param_5,
             byte param_6,DWORD *param_7,int param_8,LPCWSTR param_9,HANDLE param_10,HANDLE param_11
             ,HANDLE param_12,LPWSTR param_13)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStackY_5b8 [32];
  undefined1 local_560 [136];
  _PROCESS_INFORMATION local_4d8;
  LPWSTR local_4c0 [2];
  _STARTUPINFOW local_4b0;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_5b8;
  if (param_8 < 0) {
    bVar5 = param_8 == -1;
    uVar4 = 0x4000;
    uVar3 = 0x40;
  }
  else {
    if (param_8 == 0) {
      uVar3 = 0x20;
      goto LAB_14279b5b1;
    }
    bVar5 = param_8 == 1;
    uVar4 = 0x8000;
    uVar3 = 0x80;
  }
  if (bVar5) {
    uVar3 = uVar4;
  }
LAB_14279b5b1:
  DVar2 = uVar3 | 8;
  if (param_4 == '\0') {
    DVar2 = uVar3;
  }
  local_4b0.wShowWindow = 7;
  if (param_5 == 0) {
    local_4b0.wShowWindow = 0;
  }
  if (param_6 != 0) {
    local_4b0.wShowWindow = 0;
  }
  uVar3 = (param_5 | param_6) + 0x100;
  if ((param_10 == (HANDLE)0x0 && param_11 == (HANDLE)0x0) && param_12 == (HANDLE)0x0) {
    uVar3 = (uint)(param_5 | param_6);
  }
  local_4b0.cb = 0x68;
  local_4b0.lpReserved = (LPWSTR)0x0;
  local_4b0.lpDesktop = (LPWSTR)0x0;
  local_4b0.lpTitle = param_13;
  local_4b0.dwX = 0x80000000;
  local_4b0.dwY = 0x80000000;
  local_4b0.dwXSize = 0x80000000;
  local_4b0.dwYSize = 0x80000000;
  local_4b0.dwXCountChars = 0;
  local_4b0.dwYCountChars = 0;
  local_4b0.dwFillAttribute = 0;
  local_4b0.cbReserved2 = 0;
  local_4b0.lpReserved2 = (LPBYTE)0x0;
  local_4b0.hStdInput = param_11;
  local_4b0.hStdOutput = param_10;
  local_4b0.hStdError = param_12;
  local_4b0.dwFlags = uVar3;
  FUN_140002266(local_4c0,L"\"%s\" %s",param_2,param_3);
  BVar1 = CreateProcessW((LPCWSTR)0x0,local_4c0[0],(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,uVar3 >> 8,DVar2,(LPVOID)0x0,param_9,&local_4b0,
                         &local_4d8);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_14682f6b8(local_448,0x200,DVar2);
    if ((DVar2 == 0xe) || (DVar2 == 8)) {
      FUN_1405d5a96(local_560);
    }
    if (param_7 != (DWORD *)0x0) {
      *param_7 = 0;
    }
    *param_1 = 0;
  }
  else {
    if (param_7 != (DWORD *)0x0) {
      *param_7 = local_4d8.dwProcessId;
    }
    CloseHandle(local_4d8.hThread);
    *param_1 = local_4d8.hProcess;
  }
  if (local_4c0[0] != (LPWSTR)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStackY_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14279b750 FUN_14279b750 body=457 status=ok
// SIG undefined FUN_14279b750(void)

void FUN_14279b750(HANDLE param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE hObject;
  HANDLE hObject_00;
  longlong *plVar4;
  undefined1 auStack_2d8 [40];
  longlong *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined2 *local_298;
  int local_290;
  DWORD local_288;
  DWORD local_284;
  undefined2 *local_280;
  DWORD local_278;
  DWORD local_260;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  DVar2 = GetProcessId(param_1);
  local_288 = DVar2;
  FUN_1468302fe(&local_298,DVar2);
  FUN_1468334c6(param_3,&local_280,&local_288);
  local_280 = local_298;
  if (local_290 == 0) {
    local_280 = &DAT_149dfb77a;
  }
  local_284 = DVar2;
  cVar1 = (*(code *)*param_2)(param_2[1]);
  if (cVar1 != '\0') {
    hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
    if (hObject != (HANDLE)0xffffffffffffffff) {
      local_280 = (undefined2 *)CONCAT44(local_280._4_4_,0x238);
      iVar3 = Process32FirstW(hObject);
      if (iVar3 != 0) {
        local_2b0 = param_3 + 7;
        do {
          if ((local_260 == DVar2) &&
             (hObject_00 = OpenProcess(0x1fffff,0,local_278), hObject_00 != (HANDLE)0x0)) {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar4 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar4 = local_2b0;
              }
              iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_3[9] - 1U & local_278) * 4)
              ;
              if (iVar3 != -1) {
                do {
                  if (*(uint *)(*param_3 + (longlong)iVar3 * 0xc) == local_278) goto LAB_14279b8ad;
                  iVar3 = *(int *)(*param_3 + (longlong)iVar3 * 0xc + 4);
                } while (iVar3 != -1);
              }
            }
            local_2a8 = *param_2;
            local_2a0 = param_2[1];
            FUN_14279b750(hObject_00,&local_2a8,param_3);
LAB_14279b8ad:
            CloseHandle(hObject_00);
          }
          iVar3 = Process32NextW(hObject);
        } while (iVar3 != 0);
      }
    }
    CloseHandle(hObject);
    TerminateProcess(param_1,0);
  }
  if (local_298 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14279b91a FUN_14279b91a body=54 status=ok
// SIG undefined FUN_14279b91a(void)

void FUN_14279b91a(DWORD_PTR param_1)

{
  HANDLE hThread;
  
  if ((param_1 != 0xffffffffffffffff) && ((DAT_14c8c2be8 & 1) == 0)) {
    hThread = GetCurrentThread();
                    /* WARNING: Could not recover jumptable at 0x00014279b942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetThreadAffinityMask(hThread,param_1);
    return;
  }
  return;
}



// FUNCTION 14279b9b6 FUN_14279b9b6 body=35 status=ok
// SIG undefined FUN_14279b9b6(void)

void FUN_14279b9b6(float param_1)

{
  DWORD dwMilliseconds;
  
  dwMilliseconds = (DWORD)(longlong)(param_1 * 1000.0);
  if (dwMilliseconds != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014279b9cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(dwMilliseconds);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014279b9d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SwitchToThread();
  return;
}



// FUNCTION 14279b9d9 FUN_14279b9d9 body=693 status=ok
// SIG undefined FUN_14279b9d9(void)

/* WARNING: Removing unreachable block (ram,0x00014279bc59) */

undefined8 FUN_14279b9d9(LPCWSTR param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  HANDLE hFile;
  HANDLE hFileMappingObject;
  short *lpBaseAddress;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStackY_a8 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  uVar10 = 0;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    uVar10 = 0;
    hFileMappingObject = CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      uVar10 = 0;
      lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
      if (lpBaseAddress != (short *)0x0) {
        if ((*lpBaseAddress == 0x5a4d) &&
           (lVar9 = (longlong)*(int *)(lpBaseAddress + 0x1e),
           *(int *)((longlong)lpBaseAddress + lVar9) == 0x4550)) {
          uVar2 = *(ushort *)((longlong)lpBaseAddress + lVar9 + 6);
          if (uVar2 != 0) {
            uVar5 = *(uint *)((longlong)lpBaseAddress + lVar9 + 0x90);
            lVar7 = 0;
            do {
              uVar3 = *(uint *)((longlong)lpBaseAddress + lVar7 + lVar9 + 0x114);
              if ((uVar3 <= uVar5) &&
                 (uVar5 < *(int *)((longlong)lpBaseAddress + lVar7 + lVar9 + 0x118) + uVar3)) {
                lVar7 = (longlong)lpBaseAddress +
                        ((ulonglong)uVar5 - (ulonglong)uVar3) +
                        (ulonglong)*(uint *)((longlong)lpBaseAddress + lVar7 + 0x11c + lVar9);
                goto LAB_14279bb52;
              }
              lVar7 = lVar7 + 0x28;
            } while ((ulonglong)uVar2 * 0x28 != lVar7);
          }
          lVar7 = 0;
LAB_14279bb52:
          uVar5 = *(uint *)((longlong)lpBaseAddress + lVar9 + 0x94);
          uVar10 = 1;
          if (uVar5 != 0) {
            lVar8 = 0;
            do {
              piVar1 = (int *)(lVar7 + lVar8 * 0x14);
              if ((((*piVar1 == 0) && (piVar1[1] == 0)) && (piVar1[2] == 0)) &&
                 ((piVar1[3] == 0 && (piVar1[4] == 0)))) break;
              uVar3 = piVar1[3];
              if (uVar3 != 0) {
                uVar2 = *(ushort *)((longlong)lpBaseAddress + lVar9 + 6);
                if (uVar2 != 0) {
                  lVar6 = 0;
                  do {
                    uVar5 = *(uint *)((longlong)lpBaseAddress + lVar6 + lVar9 + 0x114);
                    if ((uVar5 <= uVar3) &&
                       (uVar3 < *(int *)((longlong)lpBaseAddress + lVar6 + lVar9 + 0x118) + uVar5))
                    break;
                    lVar6 = lVar6 + 0x28;
                  } while ((ulonglong)uVar2 * 0x28 != lVar6);
                }
                FUN_1400b22c2(&local_58);
                lVar6 = param_2[1];
                uVar5 = (int)lVar6 + 1;
                *(uint *)(param_2 + 1) = uVar5;
                if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
                  FUN_1447a1bd6(param_2);
                }
                lVar4 = *param_2;
                lVar6 = (longlong)(int)lVar6 * 0x10;
                *(undefined8 *)(lVar4 + lVar6) = 0;
                *(undefined8 *)(lVar4 + lVar6) = local_58;
                *(undefined4 *)(lVar4 + 8 + lVar6) = (undefined4)local_50;
                *(undefined4 *)(lVar4 + 0xc + lVar6) = local_50._4_4_;
                local_50 = 0;
                local_58 = 0;
                uVar5 = *(uint *)((longlong)lpBaseAddress + lVar9 + 0x94);
              }
              lVar6 = lVar8 * 4;
              lVar8 = lVar8 + 1;
            } while ((ulonglong)((lVar6 + 4) * 5) < (ulonglong)uVar5);
          }
        }
        else {
          uVar10 = 0;
        }
        UnmapViewOfFile(lpBaseAddress);
      }
      CloseHandle(hFileMappingObject);
    }
    CloseHandle(hFile);
  }
  if ((local_48 ^ (ulonglong)auStackY_a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279bc8f FUN_14279bc8f body=49 status=ok
// SIG undefined FUN_14279bc8f(void)

void FUN_14279bc8f(void)

{
  FUN_146834871(DAT_14c8c44a8,DAT_14c8c44b0);
  if (DAT_14c8c44a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14279bcce FUN_14279bcce body=380 status=ok
// SIG undefined FUN_14279bcce(void)

longlong * FUN_14279bcce(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  HMODULE hModule;
  undefined1 auStack_268 [32];
  longlong local_248 [2];
  longlong local_238;
  undefined8 local_230;
  longlong local_228 [65];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_146831420(local_228);
  FUN_146831598(param_1);
  if (local_228[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)param_1[1] < 2) {
    memset(local_228,0,0x208);
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    DVar2 = GetModuleFileNameW(hModule,(LPWSTR)local_228,0x104);
    if (DVar2 != 0) {
      FUN_140056680(local_248,local_228);
      FUN_140beea4a(&local_238,local_248);
      if (&local_238 == param_1) {
        if (local_238 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_238;
        local_238 = 0;
        *(int *)(param_1 + 1) = (int)local_230;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_230._4_4_;
        local_230 = 0;
      }
      if (local_248[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14047a987(param_1,&DAT_149e35e18,1);
      FUN_145ae3a86(&local_238);
      iVar1 = (int)local_230 + -1;
      if ((int)local_230 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_1,local_238,iVar1);
      if (local_238 != 0) {
        FUN_1400020a8();
      }
      FUN_14047a987(param_1,&DAT_149e35e18,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279be4b FUN_14279be4b body=931 status=ok
// SIG undefined FUN_14279be4b(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014279bfbb) */
/* WARNING: Removing unreachable block (ram,0x00014279c152) */

ulonglong FUN_14279be4b(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  void *_Src;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_22e8 [32];
  undefined8 local_22c8;
  undefined4 local_22c0;
  undefined8 local_22b8;
  undefined4 local_22b0;
  undefined2 *local_22a8;
  undefined8 uStack_22a0;
  LPWSTR local_2290;
  undefined8 local_2288;
  undefined8 uStack_2280;
  undefined8 local_2278;
  longlong local_2268;
  undefined4 local_2260;
  void *local_2258;
  ulonglong uStack_2250;
  undefined8 local_2248;
  undefined8 uStack_2240;
  undefined1 local_2238;
  WCHAR local_1268 [264];
  WCHAR local_1058 [1024];
  undefined1 local_858 [2056];
  ulonglong local_50;
  
  uVar3 = DAT_14c75d690;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_22e8;
  local_2278 = 0;
  local_2288 = 0;
  uStack_2280 = 0;
  memset(local_858,0,0x800);
  memset(local_1058,0,0x800);
  (*DAT_14c8c4500)(uVar3,param_1,&local_2288,0x18);
  (*DAT_14c8c44f8)(uVar3,param_1,local_1058,0x400);
  (*DAT_14c8c4508)(uVar3,param_1,local_858,0x400);
  memset(local_1268,0,0x208);
  local_2290 = (LPWSTR)0x0;
  DVar6 = GetFullPathNameW(local_1058,0x104,local_1268,&local_2290);
  local_22a8 = (undefined2 *)0x0;
  uStack_22a0 = 0;
  if (DVar6 - 1 < 0x103) {
    *local_2290 = L'\0';
    FUN_14020fad6(&local_22a8,local_1268);
  }
  iVar12 = *(int *)(param_2 + 1);
  if (1 < iVar12) {
    if (1 < (int)uStack_22a0) {
      FUN_140002184(&local_22a8,0x3b);
      iVar12 = *(int *)(param_2 + 1);
    }
    iVar2 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(&local_22a8,*param_2,iVar2);
  }
  DVar6 = GetCurrentThreadId();
  if ((DAT_14c8c4544 & 1) == 0) {
    DAT_14c8c4544 = DAT_14c8c4544 | 1;
    LOCK();
    UNLOCK();
    DAT_14c8c4548 = DVar6;
  }
  else if (DAT_14c8c4548 == DVar6) {
    LOCK();
    DAT_14c8c4544 = DAT_14c8c4544 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(&DAT_14c8c4544,DAT_14c8c4544);
  }
  puVar9 = local_22a8;
  if ((int)uStack_22a0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  SymSetSearchPathW(uVar3,puVar9);
  local_22c0 = (undefined4)uStack_2280;
  local_22c8 = local_2288;
  local_22b0 = 0;
  local_22b8 = 0;
  lVar7 = SymLoadModuleExW(uVar3,param_1,local_1058,local_858);
  if ((lVar7 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) {
    FUN_14682f6b8(&local_2268,0x800,DVar6);
  }
  local_2248 = 0;
  uStack_2240 = 0;
  local_2258 = (void *)0x0;
  uStack_2250 = 0;
  local_2238 = 0;
  local_2260 = (undefined4)uStack_2280;
  local_2268 = lVar7;
  FUN_14020fad6(&local_2258,local_1058);
  iVar12 = DAT_14c8c44b0;
  lVar7 = (longlong)(int)DAT_14c8c44b0;
  DAT_14c8c44b0 = DAT_14c8c44b0 + 1;
  if (DAT_14c8c44b4 < DAT_14c8c44b0) {
    FUN_1468348a2(iVar12);
  }
  _Src = local_2258;
  lVar4 = DAT_14c8c44a8;
  lVar7 = lVar7 * 0x38;
  lVar1 = DAT_14c8c44a8 + lVar7;
  *(undefined4 *)(DAT_14c8c44a8 + 8 + lVar7) = local_2260;
  *(longlong *)(lVar4 + lVar7) = local_2268;
  *(undefined8 *)(lVar4 + 0x10 + lVar7) = 0;
  lVar11 = (longlong)(int)uStack_2250;
  *(int *)(lVar4 + 0x18 + lVar7) = (int)uStack_2250;
  if (lVar11 == 0) {
    *(undefined4 *)(lVar1 + 0x1c) = 0;
  }
  else {
    puVar10 = (undefined8 *)(lVar4 + lVar7 + 0x10);
    FUN_1446dd670(puVar10,uStack_2250 & 0xffffffff,0);
    memcpy((void *)*puVar10,_Src,lVar11 * 2);
  }
  *(undefined1 *)(lVar1 + 0x30) = local_2238;
  *(undefined4 *)(lVar1 + 0x20) = (undefined4)local_2248;
  *(undefined4 *)(lVar1 + 0x24) = local_2248._4_4_;
  *(undefined4 *)(lVar1 + 0x28) = (undefined4)uStack_2240;
  *(undefined4 *)(lVar1 + 0x2c) = uStack_2240._4_4_;
  if (local_2258 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = DAT_14c8c4544;
  uVar8 = (ulonglong)DAT_14c8c4544;
  if (DAT_14c8c4544 < 4) {
    DAT_14c8c4548 = 0;
    if (DAT_14c8c4544 < 2) {
      LOCK();
      DAT_14c8c4544 = 0;
      uVar8 = (ulonglong)uVar5;
      UNLOCK();
    }
    else {
      uVar8 = FUN_140d366d2(&DAT_14c8c4544);
    }
  }
  else {
    LOCK();
    DAT_14c8c4544 = DAT_14c8c4544 - 4;
    UNLOCK();
  }
  if (local_22a8 != (undefined2 *)0x0) {
    uVar8 = FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_22e8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279c1f0 FUN_14279c1f0 body=949 status=ok
// SIG undefined FUN_14279c1f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014279c240) */
/* WARNING: Removing unreachable block (ram,0x00014279c53b) */

ulonglong FUN_14279c1f0(void *param_1,uint param_2)

{
  undefined8 uVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  longlong *plVar5;
  wchar_t *_Source;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_1608 [32];
  ulonglong local_15e8;
  undefined8 local_15e0;
  longlong local_15d8 [2];
  wchar_t *local_15c8;
  int local_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 local_15a0;
  undefined4 local_1598;
  undefined4 local_1594;
  wchar_t local_1590 [31];
  undefined2 local_1552;
  wchar_t local_1550 [256];
  wchar_t local_1350 [256];
  undefined4 local_1150;
  undefined4 local_114c;
  undefined8 local_1148;
  undefined8 uStack_1140;
  wchar_t local_1138 [264];
  undefined1 local_f28 [520];
  undefined4 local_d20 [2];
  undefined8 local_d18;
  undefined4 local_d10;
  undefined4 local_d0c;
  wchar_t local_cfc [32];
  wchar_t local_cbc [256];
  wchar_t local_abc [1294];
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined4 local_8c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14279c206;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1608;
  DVar2 = GetCurrentThreadId();
  if ((DAT_14c8c4544 & 1) == 0) {
    DAT_14c8c4544 = DAT_14c8c4544 | 1;
    LOCK();
    UNLOCK();
    DAT_14c8c4548 = DVar2;
  }
  else if (DAT_14c8c4548 == DVar2) {
    LOCK();
    DAT_14c8c4544 = DAT_14c8c4544 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(&DAT_14c8c4544);
  }
  pvVar4 = GetCurrentProcess();
  uVar6 = 0;
  FUN_1468316d4(pvVar4);
  local_15e0 = DAT_14c75d690;
  plVar5 = (longlong *)FUN_1468312eb();
  if (plVar5 != (longlong *)0x0) {
    uVar6 = 0;
    memset(local_d20,0,0xcc0);
    local_d20[0] = 0xcc0;
    lVar7 = *plVar5;
    if (0 < (int)param_2 && lVar7 != 0) {
      uVar6 = 0;
      local_15e8 = (ulonglong)param_2;
      do {
        local_15b8 = 0;
        uStack_15b0 = 0;
        local_15a8 = 0;
        memset(local_f28,0,0x208);
        memset(local_1138,0,0x208);
        uVar1 = local_15e0;
        (*DAT_14c8c4500)(local_15e0,lVar7,&local_15b8,0x18);
        (*DAT_14c8c44f8)(uVar1,plVar5[uVar6],local_1138,0x104);
        (*DAT_14c8c4508)(uVar1,plVar5[uVar6],local_f28,0x104);
        memset(&local_15a0,0,0x468);
        iVar3 = SymGetModuleInfoW64(uVar1,local_15b8,local_d20);
        if (iVar3 == 0) {
          local_15a0 = local_15b8;
          wcscpy(local_1550,local_1138);
          local_1598 = (undefined4)uStack_15b0;
          wcscpy(local_1350,local_1138);
          FUN_140056680(local_15d8,local_f28);
          FUN_1449fb060(&local_15c8,local_15d8,1);
          if (local_15d8[0] != 0) {
            FUN_1400020a8();
          }
          _Source = L"";
          if (local_15c0 != 0) {
            _Source = local_15c8;
          }
          wcsncpy(local_1590,_Source,0x1f);
          local_1552 = 0;
          if (local_15c8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          local_15a0 = local_d18;
          wcscpy(local_1550,local_cbc);
          local_1598 = local_d10;
          wcscpy(local_1350,local_abc);
          wcscpy(local_1590,local_cfc);
          local_114c = local_8c;
          local_1150 = local_a0;
          local_1148 = local_9c;
          uStack_1140 = uStack_94;
          local_1594 = local_d0c;
        }
        memcpy(param_1,&local_15a0,0x468);
        lVar7 = plVar5[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while ((lVar7 != 0) && (param_1 = (void *)((longlong)param_1 + 0x468), uVar6 < local_15e8));
    }
    FUN_1400020a8();
  }
  if (DAT_14c8c4544 < 4) {
    DAT_14c8c4548 = 0;
    if (DAT_14c8c4544 < 2) {
      LOCK();
      DAT_14c8c4544 = 0;
      UNLOCK();
    }
    else {
      FUN_140d366d2(&DAT_14c8c4544);
    }
  }
  else {
    LOCK();
    DAT_14c8c4544 = DAT_14c8c4544 - 4;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_1608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14279c5a6 FUN_14279c5a6 body=611 status=ok
// SIG undefined FUN_14279c5a6(void)

void FUN_14279c5a6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *_Src;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_8e8 [32];
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  longlong local_8b0;
  int local_8a8;
  undefined8 local_8a0;
  undefined4 local_898;
  void *local_890;
  ulonglong uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined1 local_870;
  undefined1 local_868 [2056];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  uVar4 = SymGetOptions();
  SymSetOptions(uVar4 | 0x616);
  FUN_14279bcce(&local_8b0);
  lVar7 = local_8b0;
  if (local_8a8 < 2) {
    lVar7 = 0;
  }
  SymInitializeW(DAT_14c75d690,lVar7,1);
  DAT_14c8c4511 = 0;
  DAT_14c8c4510 = 1;
  FUN_146834871(DAT_14c8c44a8);
  DAT_14c8c44b0 = 0;
  if (DAT_14c8c44b4 != 0) {
    FUN_14683493a();
  }
  uVar2 = DAT_14c75d690;
  plVar5 = (longlong *)FUN_1468312eb(DAT_14c75d690);
  if ((plVar5 != (longlong *)0x0) && (lVar7 = *plVar5, lVar7 != 0)) {
    do {
      plVar5 = plVar5 + 1;
      local_8c8 = 0;
      uStack_8c0 = 0;
      local_8b8 = 0;
      memset(local_868,0,0x800);
      (*DAT_14c8c4500)(uVar2,lVar7,&local_8c8,0x18);
      (*DAT_14c8c44f8)(uVar2,lVar7,local_868,0x400);
      local_880 = 0;
      uStack_878 = 0;
      local_890 = (void *)0x0;
      uStack_888 = 0;
      local_870 = 0;
      local_8a0 = local_8c8;
      local_898 = (undefined4)uStack_8c0;
      FUN_14020fad6(&local_890,local_868);
      uVar4 = DAT_14c8c44b0;
      lVar7 = (longlong)(int)DAT_14c8c44b0;
      DAT_14c8c44b0 = DAT_14c8c44b0 + 1;
      if (DAT_14c8c44b4 < DAT_14c8c44b0) {
        FUN_1468348a2(uVar4);
      }
      _Src = local_890;
      lVar3 = DAT_14c8c44a8;
      lVar7 = lVar7 * 0x38;
      lVar1 = DAT_14c8c44a8 + lVar7;
      *(undefined4 *)(DAT_14c8c44a8 + 8 + lVar7) = local_898;
      *(undefined8 *)(lVar3 + lVar7) = local_8a0;
      *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
      lVar8 = (longlong)(int)uStack_888;
      *(int *)(lVar3 + 0x18 + lVar7) = (int)uStack_888;
      if (lVar8 == 0) {
        *(undefined4 *)(lVar1 + 0x1c) = 0;
      }
      else {
        puVar6 = (undefined8 *)(lVar3 + lVar7 + 0x10);
        FUN_1446dd670(puVar6,uStack_888 & 0xffffffff,0);
        memcpy((void *)*puVar6,_Src,lVar8 * 2);
      }
      *(undefined1 *)(lVar1 + 0x30) = local_870;
      *(undefined4 *)(lVar1 + 0x20) = (undefined4)local_880;
      *(undefined4 *)(lVar1 + 0x24) = local_880._4_4_;
      *(undefined4 *)(lVar1 + 0x28) = (undefined4)uStack_878;
      *(undefined4 *)(lVar1 + 0x2c) = uStack_878._4_4_;
      if (local_890 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = *plVar5;
    } while (lVar7 != 0);
  }
  if (local_8b0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_8e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14279c81a FUN_14279c81a body=394 status=ok
// SIG undefined FUN_14279c81a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14279c81a(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  LPCWSTR pszPath;
  LPCWSTR local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c896280);
  FUN_1467b3566(&DAT_14c896308);
  _DAT_14c8a7b10 = 0;
  _DAT_14c8ba188 = *(undefined8 *)(*param_1 + 0x10);
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  _DAT_14c8a7b0c = param_3;
  _DAT_14c8a7d18 = param_1;
  _DAT_14c8ba180 = param_2;
  if (((iVar1 != 0x40000002) && (iVar1 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (DAT_14c846b14 == '\x01') {
    FUN_140b3f358();
  }
  if (DAT_14c872ce0 == 0) {
    local_38 = (wchar_t *)FUN_14577aebc();
    if (local_38 == (wchar_t *)0x0) {
      local_30 = 0;
    }
    else {
      sVar2 = wcslen(local_38);
      local_30 = (int)sVar2;
    }
    local_28 = L"NotAllowedUnattendedBugReports";
    local_20 = 0x1e;
    FUN_140bee87a(&local_48,&local_38,2);
    pszPath = local_48;
    if (local_40 == 0) {
      pszPath = L"";
    }
    PathFileExistsW(pszPath);
    if (local_48 != (LPCWSTR)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_14052bb08(DAT_14c872ce0,L"/Script/UnrealEd.CrashReportsPrivacySettings",
                  L"bSendUnattendedBugReports",&local_38,&DAT_14c872a98);
    FUN_14052bb08(DAT_14c872ce0,L"/Script/UnrealEd.AnalyticsPrivacySettings",L"bSendUsageData",
                  &local_48,&DAT_14c872a98);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c896280);
  return;
}



// FUNCTION 14279c9a4 FUN_14279c9a4 body=57 status=ok
// SIG undefined FUN_14279c9a4(void)

undefined8 * FUN_14279c9a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e40418;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14279c9de FUN_14279c9de body=310 status=ok
// SIG undefined FUN_14279c9de(void)

ulonglong FUN_14279c9de(longlong param_1,LPVOID param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 unaff_R15;
  undefined1 auStackY_98 [32];
  DWORD local_6c;
  _OVERLAPPED local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  if (((longlong)(param_4 | param_3) < 0) ||
     (*(longlong *)(param_1 + 0x10) < (longlong)(param_4 + param_3))) {
    uVar5 = 0;
  }
  else if (param_3 == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  }
  else {
    local_68.Internal = 0;
    local_68.InternalHigh = 0;
    uVar5 = 0;
    local_68.hEvent = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    if (local_68.hEvent != (HANDLE)0x0) {
      do {
        uVar5 = 0xffffffff;
        if ((longlong)param_3 < 0xffffffff) {
          uVar5 = param_3;
        }
        local_6c = 0;
        local_68.u.s.Offset = (DWORD)param_4;
        local_68.u.s.OffsetHigh = (DWORD)(param_4 >> 0x20);
        BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),param_2,(DWORD)uVar5,&local_6c,&local_68);
        if (BVar2 == 0) {
          DVar3 = GetLastError();
          if (DVar3 == 0x3e5) {
            BVar2 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),&local_68,&local_6c,1);
            if (BVar2 != 0) goto LAB_14279caed;
          }
          uVar5 = 0;
          goto LAB_14279cb05;
        }
LAB_14279caed:
        uVar4 = param_3 - (uVar5 & 0xffffffff);
        bVar1 = (longlong)(uVar5 & 0xffffffff) <= (longlong)param_3;
        param_3 = uVar4;
      } while (uVar4 != 0 && bVar1);
      uVar5 = CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
LAB_14279cb05:
      CloseHandle(local_68.hEvent);
    }
  }
  if ((local_48 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279cb16 FUN_14279cb16 body=70 status=ok
// SIG undefined FUN_14279cb16(void)

void FUN_14279cb16(longlong param_1)

{
  HANDLE pvVar1;
  
  if (1 < (longlong)*(HANDLE *)(param_1 + 8) + 1U) {
    pvVar1 = ReOpenFile(*(HANDLE *)(param_1 + 8),*(DWORD *)(param_1 + 0x4c),
                        *(DWORD *)(param_1 + 0x50),*(DWORD *)(param_1 + 0x54));
    if (pvVar1 != (HANDLE)0xffffffffffffffff) {
      CloseHandle(*(HANDLE *)(param_1 + 8));
      *(HANDLE *)(param_1 + 8) = pvVar1;
    }
  }
  return;
}



// FUNCTION 14279cb68 FUN_14279cb68 body=248 status=ok
// SIG undefined FUN_14279cb68(void)

bool FUN_14279cb68(longlong param_1,LPVOID param_2,ulonglong param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStackY_78 [32];
  DWORD local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_78;
  do {
    uVar4 = 0xffffffff;
    if ((longlong)param_3 < 0xffffffff) {
      uVar4 = param_3;
    }
    local_4c = 0;
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),param_2,(DWORD)uVar4,&local_4c,
                     (LPOVERLAPPED)(param_1 + 0x10));
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x3e5) {
        local_4c = 0;
        BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x10),
                                    &local_4c,1);
        if (BVar1 != 0) goto LAB_14279cc02;
      }
      bVar5 = false;
      break;
    }
LAB_14279cc02:
    lVar3 = (ulonglong)local_4c + *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x30) = lVar3;
    *(longlong *)(param_1 + 0x20) = lVar3;
    bVar5 = local_4c == (DWORD)uVar4;
    if (!bVar5) break;
    param_3 = param_3 - (uVar4 & 0xffffffff);
    param_2 = (LPVOID)((longlong)param_2 + (uVar4 & 0xffffffff));
  } while (0 < (longlong)param_3);
  if ((local_48 ^ (ulonglong)auStackY_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 14279cc62 FUN_14279cc62 body=250 status=ok
// SIG undefined FUN_14279cc62(void)

undefined8 FUN_14279cc62(longlong param_1,LPVOID param_2,ulonglong param_3,_union_540 param_4)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  DWORD nNumberOfBytesToRead;
  ulonglong uVar3;
  undefined1 auStackY_98 [32];
  DWORD local_6c;
  _OVERLAPPED local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  if (((longlong)((ulonglong)param_4.Pointer | param_3) < 0) ||
     (*(longlong *)(param_1 + 0x38) < (longlong)((longlong)param_4.Pointer + param_3))) {
LAB_14279cc9c:
    uVar2 = 0;
  }
  else if (param_3 == 0) {
    uVar2 = CONCAT71((int7)((longlong)param_4.Pointer + param_3 >> 8),1);
  }
  else {
    local_68.hEvent = (HANDLE)0x0;
    local_68.Internal = 0;
    local_68.InternalHigh = 0;
    do {
      uVar3 = 0xffffffff;
      if ((longlong)param_3 < 0xffffffff) {
        uVar3 = param_3;
      }
      local_6c = 0;
      nNumberOfBytesToRead = (DWORD)uVar3;
      local_68.u = param_4;
      BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),param_2,nNumberOfBytesToRead,&local_6c,&local_68);
      if (BVar1 == 0) goto LAB_14279cc9c;
      uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),local_6c == nNumberOfBytesToRead);
    } while ((local_6c == nNumberOfBytesToRead) &&
            (param_3 = param_3 - (uVar3 & 0xffffffff), 0 < (longlong)param_3));
  }
  if ((local_48 ^ (ulonglong)auStackY_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14279cd5e FUN_14279cd5e body=266 status=ok
// SIG undefined FUN_14279cd5e(void)

bool FUN_14279cd5e(longlong param_1,LPCVOID param_2,ulonglong param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStackY_78 [32];
  DWORD local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_78;
  do {
    uVar4 = 0xffffffff;
    if ((longlong)param_3 < 0xffffffff) {
      uVar4 = param_3;
    }
    local_4c = 0;
    BVar1 = WriteFile(*(HANDLE *)(param_1 + 8),param_2,(DWORD)uVar4,&local_4c,
                      (LPOVERLAPPED)(param_1 + 0x10));
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 == 0x3e5) {
        local_4c = 0;
        BVar1 = GetOverlappedResult(*(HANDLE *)(param_1 + 8),(LPOVERLAPPED)(param_1 + 0x10),
                                    &local_4c,1);
        if (BVar1 != 0) goto LAB_14279cdf8;
      }
      bVar5 = false;
      break;
    }
LAB_14279cdf8:
    lVar3 = (ulonglong)local_4c + *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x30) = lVar3;
    *(longlong *)(param_1 + 0x20) = lVar3;
    if (lVar3 < *(longlong *)(param_1 + 0x38)) {
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    *(longlong *)(param_1 + 0x38) = lVar3;
    bVar5 = local_4c == (DWORD)uVar4;
    if (!bVar5) break;
    param_3 = param_3 - (uVar4 & 0xffffffff);
    param_2 = (LPCVOID)((longlong)param_2 + (uVar4 & 0xffffffff));
  } while (0 < (longlong)param_3);
  if ((local_48 ^ (ulonglong)auStackY_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 14279ce6a FUN_14279ce6a body=24 status=ok
// SIG undefined FUN_14279ce6a(void)

bool FUN_14279ce6a(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = FlushFileBuffers(*(HANDLE *)(param_1 + 8));
  return BVar1 != 0;
}



// FUNCTION 14279ce82 FUN_14279ce82 body=152 status=ok
// SIG undefined FUN_14279ce82(void)

ulonglong FUN_14279ce82(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 != '\0') {
    local_20 = (LARGE_INTEGER)*(LARGE_INTEGER *)&((LARGE_INTEGER *)(param_1 + 6))->s;
    uVar4 = 0;
    DVar2 = SetFilePointer((HANDLE)param_1[1],local_20.s.LowPart,&local_20.s.HighPart,0);
    if (DVar2 == 0xffffffff) goto LAB_14279cefb;
    BVar3 = SetEndOfFile((HANDLE)param_1[1]);
    if (BVar3 != 0) {
      BVar3 = GetFileSizeEx((HANDLE)param_1[1],&local_20);
      param_1[7] = -(ulonglong)(BVar3 == 0) | local_20.QuadPart;
      uVar4 = CONCAT71((int7)((ulonglong)&local_20 >> 8),1);
      goto LAB_14279cefb;
    }
  }
  uVar4 = 0;
LAB_14279cefb:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279cf1c FUN_14279cf1c body=79 status=ok
// SIG undefined FUN_14279cf1c(void)

void FUN_14279cf1c(longlong param_1)

{
  HANDLE pvVar1;
  
  if ((1 < (longlong)*(HANDLE *)(param_1 + 8) + 1U) && (*(longlong *)(param_1 + 0x38) != -1)) {
    pvVar1 = ReOpenFile(*(HANDLE *)(param_1 + 8),*(DWORD *)(param_1 + 0x40),
                        *(DWORD *)(param_1 + 0x44),*(DWORD *)(param_1 + 0x48));
    if (pvVar1 != (HANDLE)0xffffffffffffffff) {
      CloseHandle(*(HANDLE *)(param_1 + 8));
      *(HANDLE *)(param_1 + 8) = pvVar1;
    }
  }
  return;
}



// FUNCTION 14279cf6c FUN_14279cf6c body=304 status=ok
// SIG undefined FUN_14279cf6c(void)

undefined8 * FUN_14279cf6c(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *dwNumberOfBytesToMap;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = *(longlong *)(param_1 + 8) - param_2;
  if (param_3 < lVar5) {
    lVar5 = param_3;
  }
  FUN_14016c8d4();
  uVar6 = -DAT_14c75d660 & param_2;
  puVar4 = (undefined8 *)(~uVar6 + DAT_14c75d660 + param_2 + lVar5 & -DAT_14c75d660);
  puVar3 = (undefined8 *)0x0;
  dwNumberOfBytesToMap = puVar4;
  if (*(longlong *)(param_1 + 8) < (longlong)(uVar6 + (longlong)puVar4)) {
    dwNumberOfBytesToMap = puVar3;
  }
  pvVar2 = MapViewOfFile(*(HANDLE *)(param_1 + 0x18),4,(DWORD)(uVar6 >> 0x20),(DWORD)uVar6,
                         (SIZE_T)dwNumberOfBytesToMap);
  if (pvVar2 != (LPVOID)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar3 = &PTR_FUN_149e40418;
    puVar3[1] = (longlong)pvVar2 + (param_2 - uVar6);
    puVar3[2] = lVar5;
    puVar3[3] = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    _Src = *(void **)(param_1 + 0x20);
    *(int *)(puVar3 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + 3,iVar1,0);
      memcpy((void *)puVar3[3],_Src,(longlong)iVar1 * 2);
    }
    puVar3[5] = param_2;
    *puVar3 = &PTR_FUN_149e40538;
    puVar3[6] = param_1;
    puVar3[7] = pvVar2;
    puVar3[8] = puVar4;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  }
  return puVar3;
}



// FUNCTION 14279d09c FUN_14279d09c body=59 status=ok
// SIG undefined FUN_14279d09c(void)

void FUN_14279d09c(undefined8 *param_1)

{
  CloseHandle((HANDLE)param_1[3]);
  CloseHandle((HANDLE)param_1[2]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e41c08;
  return;
}



// FUNCTION 14279d0db FUN_14279d0db body=113 status=ok
// SIG undefined FUN_14279d0db(void)

void FUN_14279d0db(void)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)0x0;
  Ordinal_200(0,&local_18);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x28))(local_18,&local_20);
    Ordinal_6(local_20);
    (**(code **)(*local_18 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279d14e FUN_14279d14e body=367 status=ok
// SIG undefined FUN_14279d14e(void)

void FUN_14279d14e(int param_1)

{
  ulonglong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar4 = DAT_14c8c26f0;
  if ((int)DAT_14c8c26f0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14c8c26f4 == 0) {
    uVar5 = 4;
    if (4 < DAT_14c8c26f0) {
      uVar5 = DAT_14c8c26f0;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)DAT_14c8c26f0 * 3) >> 3) + (longlong)(int)DAT_14c8c26f0 +
            0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar10 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14279d1e2;
            lVar6 = uVar9 + 1 + uVar10;
            uVar10 = uVar10 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_14279d1e2:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar3 * ZEXT816(0x2492492492492493),8);
  DAT_14c8c26f4 = 0x7fffffff;
  if ((int)uVar4 <= iVar8) {
    DAT_14c8c26f4 = iVar8;
  }
  FUN_1446f8d3c(&DAT_14c8c26e8,param_1,DAT_14c8c26f4,0x38,8);
  return;
}



// FUNCTION 14279d2be FUN_14279d2be body=376 status=ok
// SIG undefined FUN_14279d2be(void)

undefined4 FUN_14279d2be(longlong param_1,HWND param_2,ulonglong param_3)

{
  BOOL BVar1;
  int iVar2;
  DWORD DVar3;
  HACCEL hAccTable;
  HMODULE hInstance;
  HWND pHVar4;
  HWND pHVar5;
  HWND hWndParent;
  undefined1 auStackY_878 [32];
  tagMSG local_848 [42];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_878;
  hAccTable = LoadAcceleratorsW(DAT_14c8c26f8,(LPCWSTR)&DAT_00000065);
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar4 = CreateDialogParamW(hInstance,(LPCWSTR)(param_3 & 0xffff),param_2,(DLGPROC)&LAB_146832094,
                              param_1);
  *(HWND *)(param_1 + 0x28) = pHVar4;
  if (pHVar4 == (HWND)0x0) {
    DVar3 = GetLastError();
    FUN_14682f6b8(local_848,0x400,DVar3);
  }
  else {
    ShowWindow(pHVar4,5);
    if (*(char *)(param_1 + 0x50) == '\0') {
      do {
        BVar1 = GetMessageW(local_848,(HWND)0x0,0,0);
        pHVar4 = local_848[0].hwnd;
        if (BVar1 == 0) break;
        pHVar5 = GetDlgItem(*(HWND *)(param_1 + 0x28),0x3ed);
        hWndParent = *(HWND *)(param_1 + 0x28);
        if (hWndParent == local_848[0].hwnd) {
LAB_14279d3ad:
          iVar2 = TranslateAcceleratorW(hWndParent,hAccTable,local_848);
          if (iVar2 == 0) goto LAB_14279d3ba;
        }
        else {
          BVar1 = IsChild(hWndParent,local_848[0].hwnd);
          if ((BVar1 != 0) && (pHVar4 != pHVar5)) {
            hWndParent = *(HWND *)(param_1 + 0x28);
            goto LAB_14279d3ad;
          }
LAB_14279d3ba:
          BVar1 = IsDialogMessageW(*(HWND *)(param_1 + 0x28),local_848);
          if (BVar1 == 0) {
            TranslateMessage(local_848);
            DispatchMessageW(local_848);
          }
        }
      } while (*(char *)(param_1 + 0x50) != '\x01');
    }
    DestroyAcceleratorTable(hAccTable);
  }
  if ((local_48 ^ (ulonglong)auStackY_878) == DAT_14c707940) {
    return *(undefined4 *)(param_1 + 0x54);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279d462 FUN_14279d462 body=257 status=ok
// SIG undefined FUN_14279d462(void)

bool FUN_14279d462(undefined8 *param_1,undefined8 param_2,wchar_t *param_3,ulonglong param_4,
                  undefined4 param_5,undefined8 param_6)

{
  HANDLE pvVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  
  if (DAT_14c8c4530 == '\0') {
    DAT_14c8c4530 = '\x01';
    pvVar1 = GetCurrentThread();
    SetThreadPriority(pvVar1,0);
  }
  param_1[3] = param_2;
  param_1[5] = param_6;
  uVar2 = FUN_1405d8a54(1);
  param_1[4] = uVar2;
  pwVar3 = L"Unnamed UE";
  if (param_3 != (wchar_t *)0x0) {
    pwVar3 = param_3;
  }
  FUN_14020fad6(param_1 + 1,pwVar3);
  *(undefined4 *)(param_1 + 6) = param_5;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_4 & 0xffffffff,FUN_141033da2,param_1,
                        0x10004,(LPDWORD)((longlong)param_1 + 0x34));
  param_1[7] = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    param_1[3] = 0;
  }
  else {
    ResumeThread(pvVar1);
    (**(code **)(*(longlong *)param_1[4] + 0x20))((longlong *)param_1[4],0xffffffff,0);
    *(undefined4 *)(param_1 + 6) = 0;
    (**(code **)*param_1)(param_1,param_5);
  }
  FUN_14018802a(param_1[4]);
  param_1[4] = 0;
  return param_1[7] != 0;
}



// FUNCTION 14279d56b FUN_14279d56b body=67 status=ok
// SIG undefined FUN_14279d56b(void)

void FUN_14279d56b(void)

{
  undefined8 unaff_retaddr;
  undefined1 local_28 [16];
  undefined1 *local_18;
  
  FUN_14682eb3e(local_28,L"Abort signal received",unaff_retaddr);
  local_18 = local_28;
  RaiseException(0x4000,0,1,(ULONG_PTR *)&local_18);
  return;
}



// FUNCTION 14279d5c0 FUN_14279d5c0 body=19 status=ok
// SIG undefined FUN_14279d5c0(void)

undefined8 FUN_14279d5c0(void)

{
  FUN_14682ea22();
  return 1;
}



// FUNCTION 14279d5d4 FUN_14279d5d4 body=295 status=ok
// SIG undefined FUN_14279d5d4(void)

void FUN_14279d5d4(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  void *_Dst;
  undefined8 *puVar3;
  size_t sVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)*param_1;
  plVar2[1] = plVar2[1] +
              ((longlong)(int)((ulonglong)(plVar2[1] - *plVar2) >> 1) - (longlong)*(int *)param_1[1]
              ) * -2;
  plVar2 = (longlong *)*param_1;
  puVar5 = (undefined2 *)plVar2[1];
  if ((((int)((ulonglong)((longlong)puVar5 - *plVar2) >> 1) != 0) && (puVar5[-1] != 0x2f)) &&
     (puVar5[-1] != 0x5c)) {
    if ((undefined2 *)plVar2[2] <= puVar5 + 1) {
      FUN_140213274(plVar2,1);
      puVar5 = (undefined2 *)plVar2[1];
    }
    plVar2[1] = (longlong)(puVar5 + 1);
    *puVar5 = 0x2f;
    puVar5 = (undefined2 *)plVar2[1];
  }
  sVar4 = wcslen((wchar_t *)(param_2 + 0xb));
  lVar6 = (longlong)(int)sVar4;
  if ((undefined2 *)plVar2[2] <= puVar5 + lVar6) {
    FUN_140213274(plVar2,lVar6);
  }
  if ((int)sVar4 != 0) {
    _Dst = (void *)plVar2[1];
    memcpy(_Dst,param_2 + 0xb,(longlong)(sVar4 << 0x20) >> 0x1f);
    plVar2[1] = (longlong)(lVar6 * 2 + (longlong)_Dst);
  }
  uVar1 = *param_2;
  puVar3 = (undefined8 *)*param_1;
  lVar6 = param_1[2];
  *(undefined2 *)puVar3[1] = 0;
  FUN_140115ae4(lVar6,*puVar3,(uVar1 & 0x10) >> 4);
  return;
}



// FUNCTION 14279d6fc FUN_14279d6fc body=452 status=ok
// SIG undefined FUN_14279d6fc(void)

undefined4 FUN_14279d6fc(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  void *_Src;
  int iVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *param_2;
  uVar2 = param_2[7];
  uVar10 = uVar1 & 0x10;
  uVar3 = param_2[8];
  local_a0 = *param_1;
  FUN_1410c051c(&local_78,param_2 + 5);
  FUN_1410c051c(&local_80,param_2 + 3);
  FUN_1410c051c(&local_88,param_2 + 1);
  local_70 = local_88;
  local_68 = local_80;
  local_60 = local_78;
  local_50 = (char)uVar1 * '\x02' & 2U | (byte)(uVar10 >> 4) | 4;
  puVar5 = (undefined8 *)param_1[1];
  local_58 = -(ulonglong)(uVar10 != 0) | CONCAT44(uVar2,uVar3);
  sVar8 = wcslen((wchar_t *)(param_2 + 0xb));
  iVar4 = *(int *)(puVar5 + 1);
  iVar6 = (uint)((int)sVar8 != -1 && (longlong)iVar4 == 0) + (int)sVar8 + 1;
  local_98 = (undefined2 *)0x0;
  _Src = (void *)*puVar5;
  local_90 = iVar4;
  if (iVar6 == 0 && iVar4 == 0) {
    local_8c = 0;
  }
  else {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6 + iVar4);
    }
    FUN_1446dd670(&local_98,iVar6 + iVar4,0);
    if (iVar4 != 0) {
      memcpy(local_98,_Src,(longlong)iVar4 * 2);
    }
  }
  FUN_1401aebe8(&local_98,param_2 + 0xb,sVar8 & 0xffffffff);
  puVar9 = local_98;
  if (local_90 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  uVar7 = FUN_1467b706a(local_a0,puVar9,&local_70);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14279d8c2 FUN_14279d8c2 body=43 status=ok
// SIG undefined FUN_14279d8c2(void)

void FUN_14279d8c2(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 14279d8f2 FUN_14279d8f2 body=23 status=ok
// SIG undefined FUN_14279d8f2(void)

undefined8 FUN_14279d8f2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14279d909 FUN_14279d909 body=1394 status=ok
// SIG undefined FUN_14279d909(void)

/* WARNING: Removing unreachable block (ram,0x00014279dd6a) */
/* WARNING: Removing unreachable block (ram,0x00014279dd51) */
/* WARNING: Removing unreachable block (ram,0x00014279dcd5) */
/* WARNING: Removing unreachable block (ram,0x00014279dc9f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14279d909(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  HANDLE pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStackY_a8 [32];
  undefined4 uStack_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStackY_a8;
  lVar10 = 0;
  local_78 = local_78 & 0xffffffffffffff00;
  FUN_140bd5914(&DAT_14c896200,L"VA.DisableSystem",&local_78,
                L"When true the VA system will be disabled as though \'SystemName\' was \'None\'");
  atexit(FUN_142794244);
  local_78 = local_78 & 0xffffffffffffff00;
  FUN_140bd5914(&DAT_14c896218,L"VA.LazyInitSystem",&local_78,
                L"When true the VA system will be lazy initialized on first use");
  atexit(FUN_142794289);
  DAT_14c896230 = 0;
  atexit((_func_5014 *)&LAB_1427942ce);
  local_78 = local_78 & 0xffffffffffffff00;
  FUN_140bd5914(&DAT_14c896268,L"WindowsPlatformCrashContext.ForceCrashReportDialogOff",&local_78,
                L"If true, force the crash report dialog to not be displayed in the event of a crash."
               );
  atexit(FUN_142794af3);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c896280);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c896280,4000);
  atexit((_func_5014 *)&LAB_142795393);
  _DAT_14c8962a8 = 0;
  DAT_14c8962b0 = (HANDLE)0x0;
  DAT_14c8962c8 = (HANDLE)0x0;
  _DAT_14c8962d0 = 0;
  DAT_14c8962d8 = 0;
  _DAT_14c8962e0 = 0;
  DAT_14c8962e8 = 0;
  _DAT_14c8962f0 = 0;
  uRam000000014c8962f8 = 0;
  DAT_14c896300 = 0;
  _DAT_14c8a7b14 = 0;
  FUN_14016c8d4();
  puVar11 = &DAT_14c75d648;
  puVar12 = &DAT_14c8aa0d8;
  for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  _DAT_14c8ba290 = 0;
  _DAT_14c8aa120 = 0;
  uRam000000014c8aa128 = 0;
  _DAT_14c8aa130 = 0;
  uRam000000014c8aa138 = 0;
  _DAT_14c8aa140 = 0;
  uRam000000014c8aa148 = 0;
  _DAT_14c8aa149 = 0;
  uRam000000014c8aa150 = 0;
  uRam000000014c8aa151 = 0;
  do {
    pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    *(HANDLE *)((longlong)&DAT_14c8962b8 + lVar10) = pvVar7;
    lVar10 = lVar10 + 8;
  } while (lVar10 != 0x10);
  DAT_14c8962c8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  SetUnhandledExceptionFilter(FUN_14682e98c);
  DAT_14c8962b0 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14574bf64,&DAT_14c8962a8,0,
                    (LPDWORD)&DAT_14c8962a8);
  if (DAT_14c8962b0 != (HANDLE)0x0) {
    SetThreadPriority(DAT_14c8962b0,-1);
  }
  if (DAT_14c8962e8 != 0) {
    DAT_14c83f1e0 = DAT_14c896300;
  }
  uVar8 = FUN_1460d276c();
  FUN_14626e856(uVar8,&local_78,&LAB_1458fc038);
  uVar8 = FUN_1460d276c();
  FUN_14626e856(uVar8,&local_78,&LAB_141338788);
  DAT_14c8c2598 = 1;
  atexit(FUN_1427953a1);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c8c25a8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c8c25a8,4000);
  atexit((_func_5014 *)&LAB_1427953c1);
  _DAT_14c8c2600 = 0;
  atexit((_func_5014 *)&LAB_1427964b3);
  FUN_141471170(&DAT_14c8c2650,L"memory.WindowsPlatformMemoryGetStatsLimitTotalGB",&DAT_14c8c2660,
                L"Set a synthetic platform total memory size (in GB) which will be returned as Total and Available memory from GetStats\n"
               );
  atexit(FUN_142796c2d);
  FUN_14153156c(&DAT_14c8c2668,L"memory.WindowsPlatformMemoryUseContainerMemory",&DAT_14c8c2678,
                L"Set to assume that this process is running in a docker container and take the entire container\'s memory usage into consideration when computing available memory."
               );
  atexit(FUN_142796c72);
  local_78._0_4_ = 5;
  FUN_14078dbce(&DAT_14c8c26b8,L"r.DriverDetectionMethod",&local_78,
                L"Defines which implementation is used to detect the GPU driver (to check for old drivers, logs and statistics)\n  0: Iterate available drivers in registry and choose the one with the same name, if in question use next method (happens)\n  1: Get the driver of the primary adapter (might not be correct when dealing with multiple adapters)\n  2: Use DirectX LUID (would be the best, not yet implemented)\n  3: Use Windows functions, use the primary device (might be wrong when API is using another adapter)\n  4: Use Windows functions, use names such as DirectX Device (newest, most promising)\n  5: Use Windows SetupAPI functions"
               );
  atexit(FUN_142796e57);
  local_78 = CONCAT44(local_78._4_4_,0x4a61);
  FUN_14078dbce(&DAT_14c8c26d0,L"gbx.Windows.MinBuildVersion",&local_78,
                L"The oldest Windows build allowed.");
  atexit(FUN_142796e9c);
  DAT_14c8c26e8 = 0;
  _DAT_14c8c26f0 = 0;
  atexit(FUN_142796ee1);
  _DAT_14c8c27c8 = 1;
  lVar9 = cpuid_basic_info(0);
  _DAT_14c8c27ca = *(undefined4 *)(lVar9 + 4);
  _DAT_14c8c27ce = *(undefined4 *)(lVar9 + 8);
  _DAT_14c8c27d2 = *(undefined4 *)(lVar9 + 0xc);
  DAT_14c8c27d6 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  puVar1 = (uint *)cpuid(0x80000000);
  if (0x80000003 < *puVar1) {
    lVar9 = 0xc;
    iVar13 = -0x7ffffffe;
    do {
      if (iVar13 == 0) {
        puVar2 = (undefined4 *)cpuid_basic_info(0);
      }
      else if (iVar13 == 1) {
        puVar2 = (undefined4 *)cpuid_Version_info(1);
      }
      else if (iVar13 == 2) {
        puVar2 = (undefined4 *)cpuid_cache_tlb_info(2);
      }
      else if (iVar13 == 3) {
        puVar2 = (undefined4 *)cpuid_serial_info(3);
      }
      else if (iVar13 == 4) {
        puVar2 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
      }
      else if (iVar13 == 5) {
        puVar2 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
      }
      else if (iVar13 == 6) {
        puVar2 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
      }
      else if (iVar13 == 7) {
        puVar2 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
      }
      else if (iVar13 == 9) {
        puVar2 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
      }
      else if (iVar13 == 10) {
        puVar2 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
      }
      else if (iVar13 == 0xb) {
        puVar2 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
      }
      else if (iVar13 == 0xd) {
        puVar2 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
      }
      else if (iVar13 == 0xf) {
        puVar2 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
      }
      else if (iVar13 == -0x7ffffffe) {
        puVar2 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
      }
      else if (iVar13 == -0x7ffffffd) {
        puVar2 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
      }
      else if (iVar13 == -0x7ffffffc) {
        puVar2 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
      }
      else {
        puVar2 = (undefined4 *)cpuid(iVar13);
      }
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)((longlong)&uStack_84 + lVar9) = *puVar2;
      *(undefined4 *)(&stack0xffffffffffffff80 + lVar9) = uVar3;
      *(undefined4 *)(&stack0xffffffffffffff84 + lVar9) = uVar5;
      *(undefined4 *)((longlong)&local_78 + lVar9) = uVar4;
      lVar9 = lVar9 + 0x10;
      iVar13 = iVar13 + 1;
    } while (lVar9 != 0x3c);
  }
  _DAT_14c8c2807 = (undefined4)local_48;
  uRam000000014c8c280b = local_48._4_4_;
  uRam000000014c8c280f = (undefined4)uStack_40;
  uRam000000014c8c2813 = uStack_40._4_4_;
  _DAT_14c8c27f7 = (undefined4)local_58;
  uRam000000014c8c27fb = local_58._4_4_;
  uRam000000014c8c27ff = (undefined4)uStack_50;
  uRam000000014c8c2803 = uStack_50._4_4_;
  _DAT_14c8c27e7 = (undefined4)local_68;
  uRam000000014c8c27eb = local_68._4_4_;
  uRam000000014c8c27ef = (undefined4)uStack_60;
  uRam000000014c8c27f3 = uStack_60._4_4_;
  _DAT_14c8c27d7 = (undefined4)local_78;
  uRam000000014c8c27db = local_78._4_4_;
  uRam000000014c8c27df = (undefined4)uStack_70;
  uRam000000014c8c27e3 = uStack_70._4_4_;
  puVar2 = (undefined4 *)cpuid_Version_info(1);
  _DAT_14c8c2818 = *puVar2;
  _DAT_14c8c281c = puVar2[3];
  lVar9 = cpuid(0x80000006);
  _DAT_14c8c2820 = *(uint *)(lVar9 + 0xc) & 0xff;
  uVar6 = FUN_145c517e6(*(uint *)(lVar9 + 0xc),*(undefined4 *)(lVar9 + 8),*(undefined4 *)(lVar9 + 4)
                       );
  _DAT_14c8c27c8 = CONCAT11(uVar6,DAT_14c8c27c8);
  FUN_140056680(&local_78,L"8/1/2024");
  FUN_140f510cc(&DAT_14c8c2b58,L"gbx.Windows.BIOSMinDate.Intel13Or14Gen",&local_78,
                L"Oldest allowed BIOS date for Intel 13th and 14th gen CPUs.");
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_142799c34);
  DAT_14c8c2b70 = 0;
  _DAT_14c8c2b78 = 0;
  atexit(FUN_14279a660);
  DAT_14c8c2b80 = 0;
  _DAT_14c8c2b88 = 0;
  atexit(FUN_14279a691);
  _DAT_14c8c2bb0 = 0;
  _DAT_14c8c2bb8 = 0;
  DAT_14c8c2b90 = 0;
  _DAT_14c8c2b98 = 0;
  _DAT_14c8c2bbc = 0xffffffff00000080;
  DAT_14c8c2bc4 = 0;
  DAT_14c8c2bd0 = 0;
  DAT_14c8c2bd8 = 0;
  atexit(FUN_14279a6c2);
  DAT_14c8c44a8 = 0;
  _DAT_14c8c44b0 = 0;
  atexit(FUN_14279bc8f);
  if ((local_30 ^ (ulonglong)auStackY_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14279de7c FUN_14279de7c body=263 status=ok
// SIG undefined FUN_14279de7c(void)

float * FUN_14279de7c(float *param_1)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_118 [32];
  int *local_f8;
  undefined1 *local_f0;
  undefined1 local_e1;
  int local_e0;
  undefined1 local_dc [7];
  undefined1 local_d5;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  fVar2 = DAT_14c8c454c;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14c8c27ac < 1) {
    memset(local_c8,0,0x82);
    local_cc = 0;
    local_d0 = 0;
    local_d4 = 0;
    FUN_140e55932(local_c8,&local_cc,&local_d0,&local_d4);
    iVar1 = local_d4;
    local_f0 = &local_e1;
    local_f8 = &local_e0;
    FUN_1457b80ec(local_d0,local_d4,&local_d5,local_dc);
    DAT_14c8c27ac = iVar1;
    if ((0 < local_e0) && (DAT_14c8c27ac = iVar1, local_e0 <= iVar1)) {
      DAT_14c8c27ac = local_e0;
    }
  }
  *param_1 = fVar2 / (float)DAT_14c8c27ac;
  param_1[1] = fVar2;
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14279df84 FUN_14279df84 body=131 status=ok
// SIG undefined FUN_14279df84(void)

undefined4 FUN_14279df84(LPVOID param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)**(undefined8 **)((longlong)param_1 + 0x18))();
  (**(code **)(**(longlong **)((longlong)param_1 + 0x20) + 0x10))();
  if (cVar1 == '\0') {
    uVar2 = 1;
  }
  else {
    TlsSetValue(DAT_14c844254,param_1);
    *(undefined4 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60) = 0;
    uVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 8))();
    (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x18))();
    TlsSetValue(DAT_14c844254,(LPVOID)0x0);
  }
  return uVar2;
}



// FUNCTION 14279e00c FUN_14279e00c body=172 status=ok
// SIG undefined FUN_14279e00c(void)

bool FUN_14279e00c(longlong param_1,ulonglong *param_2)

{
  bool bVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  _GROUP_AFFINITY local_38;
  GROUP_AFFINITY local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c8c2be8 == '\0') {
    lVar3 = FUN_14157faac();
    local_38.Mask = 0;
    local_38.Group = 0;
    local_38.Reserved[0] = 0;
    local_38.Reserved[1] = 0;
    local_38.Reserved[2] = 0;
    local_28.Mask = *(ulonglong *)(lVar3 + (ulonglong)(ushort)param_2[1] * 8) & *param_2;
    local_28.Reserved[0] = 0;
    local_28.Reserved[1] = 0;
    local_28.Reserved[2] = 0;
    local_28.Group = (ushort)param_2[1];
    BVar2 = SetThreadGroupAffinity(*(HANDLE *)(param_1 + 0x38),&local_28,&local_38);
    if (BVar2 != 0) {
      *(ulonglong *)(param_1 + 0x28) = *param_2;
      bVar1 = local_38.Group != local_28.Group || local_38.Mask != local_28.Mask;
      goto LAB_14279e09b;
    }
    GetLastError();
  }
  bVar1 = false;
LAB_14279e09b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279e0ba FUN_14279e0ba body=36 status=ok
// SIG undefined FUN_14279e0ba(void)

undefined8 FUN_14279e0ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14279e0e4 FUN_14279e0e4 body=133 status=ok
// SIG undefined FUN_14279e0e4(void)

void FUN_14279e0e4(LPVOID param_1,longlong param_2,char param_3)

{
  BOOL BVar1;
  int *piVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    BVar1 = VirtualFree(param_1,0,0x8000);
    if (param_3 != '\0') {
      FUN_146834e7d(&DAT_14c8c45e0,-param_2);
    }
    FUN_146834e7d(&DAT_14c8c45c0,-param_2);
    if (BVar1 == 0) {
      piVar2 = _errno();
      pcVar3 = strerror(*piVar2);
      FUN_146835ac3("munmap failed: %s, addr 0x%8li, size %lu\n",pcVar3,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14279e169 FUN_14279e169 body=185 status=ok
// SIG undefined FUN_14279e169(void)

ulonglong FUN_14279e169(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  SIZE_T dwSize;
  BOOL BVar1;
  DWORD DVar2;
  LPVOID lpAddress;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  DWORD local_38;
  SIZE_T local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  lpAddress = (LPVOID)FUN_146838a88(param_1,param_2,&local_30);
  dwSize = local_30;
  uVar3 = CONCAT71((int7)((ulonglong)&local_30 >> 8),1);
  if (local_30 != 0) {
    FUN_146834e7d(&DAT_14c8c45e0,-param_2);
    BVar1 = VirtualFree(lpAddress,dwSize,0x4000);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      if (DVar2 != 0) {
        local_38 = DVar2;
        FUN_146835ac3("%s error: start: %p, csize: 0x%x, err: %i\n","decommit",lpAddress,local_30);
        uVar3 = 0;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279e223 FUN_14279e223 body=177 status=ok
// SIG undefined FUN_14279e223(void)

ulonglong FUN_14279e223(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  SIZE_T dwSize;
  ulonglong uVar4;
  LPVOID lpAddress;
  
  uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (param_1 != 0 && param_2 != 0) {
    uVar4 = (DAT_14c75d698 + param_1) - 1;
    if ((DAT_14c75d698 & DAT_14c75d698 - 1) == 0) {
      lpAddress = (LPVOID)(uVar4 & -DAT_14c75d698);
    }
    else {
      lpAddress = (LPVOID)(uVar4 - uVar4 % DAT_14c75d698);
    }
    dwSize = (param_1 + param_2) -
             ((ulonglong)(param_1 + param_2) % DAT_14c75d698 + (longlong)lpAddress);
    if (0 < (longlong)dwSize) {
      FUN_146834e7d(&DAT_14c8c4600,dwSize);
      pvVar3 = lpAddress;
      pvVar1 = VirtualAlloc(lpAddress,dwSize,0x80000,4);
      uVar2 = CONCAT71((int7)((ulonglong)pvVar3 >> 8),pvVar1 == lpAddress);
      if ((lpAddress != (LPVOID)0x0) && (pvVar1 == lpAddress)) {
        VirtualUnlock(lpAddress,dwSize);
        uVar2 = CONCAT71((int7)((ulonglong)lpAddress >> 8),1);
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14279e2d4 FUN_14279e2d4 body=941 status=ok
// SIG undefined FUN_14279e2d4(void)

/* WARNING: Removing unreachable block (ram,0x00014279e521) */
/* WARNING: Removing unreachable block (ram,0x00014279e559) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14279e2d4(longlong param_1,uint param_2,longlong param_3,longlong *param_4,
                       longlong *param_5)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  HANDLE pvVar6;
  LPVOID pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  LPVOID lpAddress;
  bool bVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  LPVOID local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_5 != (longlong *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = 0;
  }
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar9 = DAT_14c91ebc0;
  local_b0 = param_4;
  do {
    uVar11 = uVar9;
    if (uVar9 == 0) {
      uVar4 = FUN_145d75637(*(longlong *)(lVar12 + 0xce8) + 0xb40);
      uVar11 = (ulonglong)(uVar4 & 0x1ffe0000) << 0xd | 0x200000000000;
    }
    LOCK();
    bVar13 = uVar9 != DAT_14c91ebc0;
    uVar3 = uVar11 + param_1 * 0x40000000;
    if (bVar13) {
      uVar9 = DAT_14c91ebc0;
      uVar3 = DAT_14c91ebc0;
    }
    DAT_14c91ebc0 = uVar3;
    UNLOCK();
  } while (bVar13);
  local_b8 = FUN_145d75743();
  local_c0 = param_3 * 2;
  local_c8 = param_3 + 1;
  lVar12 = 0;
  do {
    lpAddress = (LPVOID)(lVar12 * 0x40000000 + uVar11);
    FUN_146838864();
    pcVar2 = DAT_14c8c47e0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if ((DAT_14c8c47e0 == (code *)0x0) || (DAT_14c91ebc8 != '\0')) {
LAB_14279e3f5:
      pcVar2 = DAT_14c8c47d8;
      if (DAT_14c8c47d8 == (code *)0x0 || (int)param_2 < 0) {
        pvVar7 = VirtualAlloc(lpAddress,0x40000000,0x20003000,4);
      }
      else {
        local_98 = CONCAT71(local_98._1_7_,2);
        uStack_90 = CONCAT44(uStack_90._4_4_,param_2);
        pvVar6 = GetCurrentProcess();
        local_e0 = &local_98;
        local_d8 = 1;
        local_e8 = 4;
        pvVar7 = (LPVOID)(*pcVar2)(pvVar6,lpAddress,0x40000000,0x20003000);
      }
    }
    else {
      local_98 = 5;
      uStack_90 = 0x10;
      if ((int)param_2 < 0) {
        uVar10 = 1;
      }
      else {
        local_88 = 2;
        uStack_80 = (ulonglong)param_2;
        uVar10 = 2;
      }
      local_a0 = 0x40000000;
      local_a8 = lpAddress;
      pvVar6 = GetCurrentProcess();
      local_e0 = &local_98;
      local_e8 = 4;
      local_d8 = uVar10;
      iVar5 = (*pcVar2)(pvVar6,&local_a8,&local_a0,0x20003000);
      if ((iVar5 != 0) || (pvVar7 = local_a8, local_a8 == (LPVOID)0x0)) {
        DAT_14c91ebc8 = '\x01';
        FUN_146835ac3("unable to allocate using huge (1gb) pages, trying large (2mb) pages instead (status 0x%lx)\n"
                      ,iVar5);
        goto LAB_14279e3f5;
      }
    }
    if (pvVar7 != lpAddress) {
      param_1 = lVar12;
      if (pvVar7 != (LPVOID)0x0) {
        FUN_146835ac3("could not allocate contiguous huge page %zu at %p\n",lVar12,lpAddress);
        FUN_14279e0e4(pvVar7,0x40000000,1);
      }
      break;
    }
    LOCK();
    lVar8 = DAT_14c8c45f8 + 0x40000000;
    UNLOCK();
    if (DAT_14c8c45f0 < DAT_14c8c45f8 + 0x40000000) {
      LOCK();
      UNLOCK();
      DAT_14c8c45f0 = DAT_14c8c45f8 + 0x40000000;
    }
    LOCK();
    _DAT_14c8c45e0 = _DAT_14c8c45e0 + 0x40000000;
    UNLOCK();
    LOCK();
    lVar1 = DAT_14c8c45d8 + 0x40000000;
    UNLOCK();
    if (DAT_14c8c45d0 < DAT_14c8c45d8 + 0x40000000) {
      LOCK();
      UNLOCK();
      DAT_14c8c45d0 = DAT_14c8c45d8 + 0x40000000;
    }
    LOCK();
    _DAT_14c8c45c0 = _DAT_14c8c45c0 + 0x40000000;
    UNLOCK();
    DAT_14c8c45d8 = lVar1;
    DAT_14c8c45f8 = lVar8;
    if (0 < param_3) {
      lVar8 = FUN_145d75773();
      uVar9 = lVar8 - (DAT_14c8c47c8 + local_b8);
      if ((lVar12 != 0) &&
         (lVar8 = (uVar9 / (lVar12 + 1U)) * param_1, lVar8 - local_c0 != 0 && local_c0 <= lVar8)) {
        uVar9 = local_c8;
      }
      if (param_3 < (longlong)uVar9) {
        FUN_146835ac3("huge page allocation timed out\n");
        param_1 = lVar12;
        break;
      }
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != param_1);
  if (local_b0 != (longlong *)0x0) {
    *local_b0 = param_1;
  }
  if (param_5 != (longlong *)0x0) {
    *param_5 = param_1 << 0x1e;
  }
  if (param_1 == 0) {
    uVar11 = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279e682 FUN_14279e682 body=447 status=ok
// SIG undefined FUN_14279e682(void)

LPVOID FUN_14279e682(longlong param_1,SIZE_T param_2,ulonglong param_3,DWORD param_4)

{
  LPVOID pvVar1;
  code *pcVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  pvVar4 = DAT_14c91eb80;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 == 0) && ((param_2 & 0x7fffff) == 0 && param_3 - 1 < 0x800000)) {
    LOCK();
    pvVar1 = (LPVOID)((longlong)DAT_14c91eb80 + param_2);
    UNLOCK();
    uVar6 = (longlong)DAT_14c91eb80 - 0x1e0000000001;
    DAT_14c91eb80 = pvVar1;
    if (uVar6 < 0xffffe20000000000) {
      uVar6 = FUN_145d75637(*(longlong *)
                             (*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xce8) + 0xb40);
      LOCK();
      pvVar1 = (LPVOID)((uVar6 & 0x1ffffe0000) * 0x40 + 0x40000000000);
      if ((LPVOID)((longlong)pvVar4 + param_2) != DAT_14c91eb80) {
        pvVar1 = DAT_14c91eb80;
      }
      DAT_14c91eb80 = pvVar1;
      UNLOCK();
      LOCK();
      UNLOCK();
      pvVar4 = DAT_14c91eb80;
      DAT_14c91eb80 = (LPVOID)((longlong)DAT_14c91eb80 + param_2);
    }
    if ((pvVar4 != (LPVOID)0x0) && ((ulonglong)pvVar4 % param_3 == 0)) {
      pvVar4 = VirtualAlloc(pvVar4,param_2,param_4,4);
      if (pvVar4 != (LPVOID)0x0) goto LAB_14279e7b0;
      DVar3 = GetLastError();
      if ((DVar3 != 0x57) && (DVar3 != 0x1e7)) {
        pvVar4 = (LPVOID)0x0;
        goto LAB_14279e7b0;
      }
    }
  }
  else if (param_3 == 0) goto LAB_14279e7cd;
  pcVar2 = DAT_14c8c47d8;
  if (DAT_14c8c47d8 != (code *)0x0 && param_3 % DAT_14c75d698 == 0) {
    local_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 1;
    local_38 = param_3;
    pvVar5 = GetCurrentProcess();
    local_68 = 1;
    local_78 = 4;
    local_70 = &local_58;
    pvVar4 = (LPVOID)(*pcVar2)(pvVar5,param_1,param_2,param_4);
LAB_14279e7b0:
    if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return pvVar4;
  }
LAB_14279e7cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 14279e864 FUN_14279e864 body=49 status=ok
// SIG undefined FUN_14279e864(void)

void FUN_14279e864(void)

{
  FUN_14047c710(DAT_14c926c70,DAT_14c926c78);
  if (DAT_14c926c70 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14279e895 FUN_14279e895 body=59 status=ok
// SIG undefined FUN_14279e895(void)

void FUN_14279e895(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c926c90;
  if (DAT_14c926c90 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c926c90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014279e8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14279e8d0 FUN_14279e8d0 body=296 status=ok
// SIG undefined FUN_14279e8d0(void)

double * FUN_14279e8d0(double *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  double local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_2 + 0x88))(param_2);
  if (cVar1 == '\0') {
    if ((int)param_2[1] == 3) {
      dVar4 = (double)FUN_141360850(param_2);
      FUN_1406112c4(&local_40,dVar4,0);
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar3 = FUN_1447ee042(&local_40,&DAT_149e0635c,1,1);
      if (local_40 != 0.0) {
        FUN_1400020a8();
      }
      if (iVar3 == -1) {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = (double)((longlong)ROUND(dVar4 + dVar4 + 0.5) >> 1);
      }
      else {
        *(undefined1 *)(param_1 + 1) = 4;
        *param_1 = dVar4;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_14279e945;
    }
    if ((int)param_2[1] == 4) {
      uVar2 = FUN_140b87404(param_2);
      *(undefined1 *)param_1 = uVar2;
      *(undefined1 *)(param_1 + 2) = 0;
      goto LAB_14279e945;
    }
  }
  FUN_14047e026(param_2,&local_40);
  *param_1 = local_40;
  *(undefined4 *)(param_1 + 1) = local_38;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_34;
  *(undefined1 *)(param_1 + 2) = 2;
LAB_14279e945:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279e9fa FUN_14279e9fa body=1 status=ok
// SIG undefined FUN_14279e9fa(void)

void FUN_14279e9fa(void)

{
  return;
}



// FUNCTION 14279e9fc FUN_14279e9fc body=358 status=ok
// SIG undefined FUN_14279e9fc(void)

ulonglong FUN_14279e9fc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_88 [40];
  undefined **local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14683a3d0(&local_48);
  bVar4 = FUN_14047b282(local_48,&local_38,0);
  plVar3 = plStack_30;
  bVar4 = local_38 != 0 & bVar4;
  if (bVar4 == 1) {
    if (plStack_30 == (longlong *)0x0) {
      local_60 = &PTR_LAB_149e43b50;
      local_58 = local_38;
      local_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      local_60 = &PTR_LAB_149e43b50;
      local_58 = local_38;
      local_50 = plStack_30;
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,&local_60,0);
    plVar3 = local_50;
    local_60 = &PTR_LAB_149e43b50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
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
    return CONCAT71((int7)((ulonglong)&local_48 >> 8),bVar4) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279eb63 FUN_14279eb63 body=375 status=ok
// SIG undefined FUN_14279eb63(void)

ulonglong FUN_14279eb63(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_98 [40];
  undefined **local_70;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_146843012(&local_48);
  bVar4 = FUN_14047b282(local_48,&local_38,0);
  plVar3 = plStack_30;
  bVar4 = local_38 != 0 & bVar4;
  if (bVar4 == 1) {
    if (plStack_30 == (longlong *)0x0) {
      local_70 = &PTR_LAB_149e43b50;
      local_68 = local_38;
      local_60 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      local_70 = &PTR_LAB_149e43b50;
      local_68 = local_38;
      local_60 = plStack_30;
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,&local_70,0);
    plVar3 = local_60;
    local_70 = &PTR_LAB_149e43b50;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)&local_48 >> 8),bVar4) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279ece6 FUN_14279ece6 body=1 status=ok
// SIG undefined FUN_14279ece6(void)

void FUN_14279ece6(void)

{
  return;
}



// FUNCTION 14279eceb FUN_14279eceb body=102 status=ok
// SIG undefined FUN_14279eceb(void)

void FUN_14279eceb(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149e43b3c;
  local_14 = 4;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14626ed88(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14279ed54 FUN_14279ed54 body=5188 status=ok
// SIG undefined FUN_14279ed54(void)

void FUN_14279ed54(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined4 local_180;
  wchar_t *local_178;
  undefined4 local_170;
  wchar_t *local_168;
  undefined4 local_160;
  wchar_t *local_158;
  undefined4 local_150;
  wchar_t *local_148;
  undefined4 local_140;
  wchar_t *local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1400021e4(param_1,&local_58);
  FUN_140056680(&local_68,L"Name");
  FUN_145964f10(param_2,&local_68,&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((ulonglong)*(uint *)(param_1 + 8) < 0xe) {
    puVar8 = (&PTR_u_Runtime_149e49d18)[*(uint *)(param_1 + 8)];
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  FUN_140056680(&local_58,puVar8);
  FUN_140056680(&local_68,L"Type");
  FUN_145964f10(param_2,&local_68,&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((ulonglong)*(uint *)(param_1 + 0xc) < 10) {
    puVar8 = (&PTR_u_EarliestPossible_149e49da8)[*(uint *)(param_1 + 0xc)];
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  FUN_140056680(&local_58,puVar8);
  FUN_140056680(&local_68,L"LoadingPhase");
  FUN_145964f10(param_2,&local_68,&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_1d8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x18) < 1) {
    local_78 = L"PlatformAllowList";
    local_70 = 0x11;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0x10);
    lVar10 = (longlong)*(int *)(param_1 + 0x18) << 4;
    do {
      uVar5 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar5,lVar13);
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar6[1] = &DAT_100000001;
      *puVar6 = &PTR_LAB_149e490e0;
      puVar6[2] = uVar5;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_68,L"PlatformAllowList");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x28) < 1) {
    local_88 = L"PlatformDenyList";
    local_80 = 0x10;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0x20);
    lVar10 = (longlong)*(int *)(param_1 + 0x28) << 4;
    do {
      uVar5 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar5,lVar13);
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar6[1] = &DAT_100000001;
      *puVar6 = &PTR_LAB_149e490e0;
      puVar6[2] = uVar5;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_68,L"PlatformDenyList");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 100) < *(int *)(param_1 + 0x38)) {
    FUN_1427a019a(&local_58,param_1 + 0x30);
    FUN_140056680(&local_68,L"PlatformArchitectureAllowList");
    FUN_14609b62e(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_98 = L"PlatformArchitectureAllowList";
    local_90 = 0x1d;
    FUN_14683939c(param_2);
  }
  if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x88)) {
    FUN_1427a019a(&local_58,param_1 + 0x80);
    FUN_140056680(&local_68,L"PlatformArchitectureDenyList");
    FUN_14609b62e(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_a8 = L"PlatformArchitectureDenyList";
    local_a0 = 0x1c;
    FUN_14683939c(param_2);
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  local_1d0 = param_2;
  if ((longlong)iVar2 < 1) {
    local_b8 = L"TargetAllowList";
    local_b0 = 0xf;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0xd0);
    lVar10 = 0;
    do {
      cVar1 = *(char *)(lVar13 + lVar10);
      puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar1 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_DAT_149e49e20)[bVar11];
      }
      FUN_140056680(&local_68,pwVar9);
      *puVar6 = &PTR_FUN_149e43e80;
      puVar6[2] = local_68;
      local_68 = 0;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_60._4_4_;
      local_60 = 0;
      *(undefined4 *)(puVar6 + 1) = 2;
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = puVar6;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 **)(local_58 + lVar12 * 0x10) = puVar6;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar7;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar2 != lVar10);
    FUN_140056680(&local_68,L"TargetAllowList");
    param_2 = local_1d0;
    FUN_14609b57c(local_1d0,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  iVar2 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar2 < 1) {
    local_c8 = L"TargetDenyList";
    local_c0 = 0xe;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0xe0);
    lVar10 = 0;
    do {
      cVar1 = *(char *)(lVar13 + lVar10);
      puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar1 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_DAT_149e49e20)[bVar11];
      }
      FUN_140056680(&local_68,pwVar9);
      *puVar6 = &PTR_FUN_149e43e80;
      puVar6[2] = local_68;
      local_68 = 0;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_60._4_4_;
      local_60 = 0;
      *(undefined4 *)(puVar6 + 1) = 2;
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = puVar6;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 **)(local_58 + lVar12 * 0x10) = puVar6;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar7;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar2 != lVar10);
    FUN_140056680(&local_68,L"TargetDenyList");
    param_2 = local_1d0;
    FUN_14609b57c(local_1d0,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  iVar2 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar2 < 1) {
    local_d8 = L"TargetConfigurationAllowList";
    local_d0 = 0x1c;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0xf0);
    lVar10 = 0;
    do {
      cVar1 = *(char *)(lVar13 + lVar10);
      puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar1 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_u_Debug_149e49df8)[bVar11];
      }
      FUN_140056680(&local_68,pwVar9);
      *puVar6 = &PTR_FUN_149e43e80;
      puVar6[2] = local_68;
      local_68 = 0;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_60._4_4_;
      local_60 = 0;
      *(undefined4 *)(puVar6 + 1) = 2;
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = puVar6;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 **)(local_58 + lVar12 * 0x10) = puVar6;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar7;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar2 != lVar10);
    FUN_140056680(&local_68,L"TargetConfigurationAllowList");
    param_2 = local_1d0;
    FUN_14609b57c(local_1d0,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar2 < 1) {
    local_e8 = L"TargetConfigurationDenyList";
    local_e0 = 0x1b;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0x100);
    lVar10 = 0;
    do {
      cVar1 = *(char *)(lVar13 + lVar10);
      puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar1 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_u_Debug_149e49df8)[bVar11];
      }
      FUN_140056680(&local_68,pwVar9);
      *puVar6 = &PTR_FUN_149e43e80;
      puVar6[2] = local_68;
      local_68 = 0;
      *(undefined4 *)(puVar6 + 3) = (undefined4)local_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = local_60._4_4_;
      local_60 = 0;
      *(undefined4 *)(puVar6 + 1) = 2;
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = puVar6;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 **)(local_58 + lVar12 * 0x10) = puVar6;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar7;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar2 != lVar10);
    FUN_140056680(&local_68,L"TargetConfigurationDenyList");
    param_2 = local_1d0;
    FUN_14609b57c(local_1d0,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x118) < 1) {
    local_f8 = L"ProgramAllowList";
    local_f0 = 0x10;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0x110);
    lVar10 = (longlong)*(int *)(param_1 + 0x118) << 4;
    do {
      uVar5 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar5,lVar13);
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar6[1] = &DAT_100000001;
      *puVar6 = &PTR_LAB_149e490e0;
      puVar6[2] = uVar5;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_68,L"ProgramAllowList");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x128) < 1) {
    local_108 = L"ProgramDenyList";
    local_100 = 0xf;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0x120);
    lVar10 = (longlong)*(int *)(param_1 + 0x128) << 4;
    do {
      uVar5 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar5,lVar13);
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar6[1] = &DAT_100000001;
      *puVar6 = &PTR_LAB_149e490e0;
      puVar6[2] = uVar5;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_68,L"ProgramDenyList");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x138) < 1) {
    local_118 = L"GameTargetAllowList";
    local_110 = 0x13;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)*(int *)(param_1 + 0x118) != 0) {
      lVar13 = *(longlong *)(local_1d8 + 0x110);
      lVar10 = (longlong)*(int *)(param_1 + 0x118) << 4;
      do {
        uVar5 = FUN_14001cc68(0x20,0x10);
        FUN_14047c0ce(uVar5,lVar13);
        puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar3 = uStack_50;
        puVar6[1] = &DAT_100000001;
        *puVar6 = &PTR_LAB_149e490e0;
        puVar6[2] = uVar5;
        lVar12 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_14047d050(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
        *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
        lVar13 = lVar13 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    FUN_140056680(&local_68,L"GameTargetAllowList");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0x148) < 1) {
    local_128 = L"GameTargetDenyList";
    local_120 = 0x12;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    if ((longlong)*(int *)(param_1 + 0x128) != 0) {
      lVar13 = *(longlong *)(local_1d8 + 0x120);
      lVar10 = (longlong)*(int *)(param_1 + 0x128) << 4;
      do {
        uVar5 = FUN_14001cc68(0x20,0x10);
        FUN_14047c0ce(uVar5,lVar13);
        puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar3 = uStack_50;
        puVar6[1] = &DAT_100000001;
        *puVar6 = &PTR_LAB_149e490e0;
        puVar6[2] = uVar5;
        lVar12 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_14047d050(&local_58,uVar3 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
        *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
        lVar13 = lVar13 + 0x10;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    FUN_140056680(&local_68,L"GameTargetDenyList");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x158) < 1) {
    local_138 = L"AdditionalDependencies";
    local_130 = 0x16;
    FUN_14683939c(param_2);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = *(longlong *)(param_1 + 0x150);
    lVar10 = (longlong)*(int *)(param_1 + 0x158) << 4;
    do {
      uVar5 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar5,lVar13);
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar3 = uStack_50;
      puVar6[1] = &DAT_100000001;
      *puVar6 = &PTR_LAB_149e490e0;
      puVar6[2] = uVar5;
      lVar12 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14047d050(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar12 * 0x10) = uVar5;
      *(undefined8 **)(local_58 + 8 + lVar12 * 0x10) = puVar6;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_68,L"AdditionalDependencies");
    FUN_14609b57c(param_2,&local_68,&local_58);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_58,uStack_50 & 0xffffffff);
    param_1 = local_1d8;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x160) == '\x01') {
    FUN_140056680(&local_58,L"HasExplicitPlatforms");
    FUN_14626ec84(param_2,&local_58,1);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_148 = L"HasExplicitPlatforms";
    local_140 = 0x14;
    FUN_14683939c(param_2);
  }
  local_158 = L"WhitelistPlatforms";
  local_150 = 0x12;
  FUN_14683939c(param_2);
  local_168 = L"BlacklistPlatforms";
  local_160 = 0x12;
  FUN_14683939c(param_2);
  local_178 = L"WhitelistTargets";
  local_170 = 0x10;
  FUN_14683939c(param_2);
  local_188 = L"BlacklistTargets";
  local_180 = 0x10;
  FUN_14683939c(param_2);
  local_198 = L"WhitelistTargetConfigurations";
  local_190 = 0x1d;
  FUN_14683939c(param_2);
  local_1a8 = L"BlacklistTargetConfigurations";
  local_1a0 = 0x1d;
  FUN_14683939c(param_2);
  local_1b8 = L"WhitelistPrograms";
  local_1b0 = 0x11;
  FUN_14683939c(param_2);
  local_1c8 = L"BlacklistPrograms";
  local_1c0 = 0x11;
  FUN_14683939c(param_2);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427a019a FUN_1427a019a body=1130 status=ok
// SIG undefined FUN_1427a019a(void)

longlong * FUN_1427a019a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_c8 [40];
  uint local_a0;
  int local_9c;
  ulonglong local_98;
  uint *local_90;
  longlong *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  void *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar12 = (uint *)(param_2 + 2);
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = *(uint *)(param_2 + 5);
  uVar10 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    iVar11 = 0;
    uVar8 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = puVar12;
    }
    uVar8 = *puVar5;
    if (uVar8 == 0) {
      iVar11 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar11 = uVar4 - 1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar11 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_1427a0252;
        iVar11 = iVar11 + 0x20;
        uVar8 = puVar5[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar19 = 0;
      iVar11 = 0;
    }
    uVar20 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar20 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar8) {
      uVar8 = uVar4;
    }
  }
  if (uVar8 != uVar4) {
    uVar14 = 0xffffffff;
    local_98 = uVar10;
    local_90 = puVar12;
    local_88 = param_2;
    do {
      lVar13 = (longlong)*(int *)(*param_2 + 0x18 + (longlong)(int)uVar8 * 0x28);
      if (lVar13 != 0) {
        puVar1 = (undefined8 *)(*param_2 + (longlong)(int)uVar8 * 0x28);
        local_70 = puVar1[2];
        lVar21 = 0;
        local_a0 = uVar14;
        local_9c = iVar11;
        local_80 = uVar20;
        local_78 = uVar19;
        do {
          lVar17 = local_70;
          local_60 = *(int *)(puVar1 + 1);
          lVar16 = (longlong)local_60;
          local_68 = (void *)0x0;
          pvVar3 = (void *)*puVar1;
          FUN_1446dd670(&local_68,(uint)(lVar16 == 0) + local_60 + 1,0);
          if (lVar16 != 0) {
            memcpy(local_68,pvVar3,lVar16 * 2);
          }
          FUN_1400020e8(&local_68,&DAT_149e31048);
          iVar18 = local_5c;
          iVar11 = local_60;
          if (local_60 < 2) {
            local_58 = (void *)0x0;
            local_50 = *(int *)(lVar17 + 8 + lVar21);
            lVar16 = (longlong)local_50;
            pvVar3 = *(void **)(lVar17 + lVar21);
            if (lVar16 == 0) {
              local_4c = 0;
            }
            else {
              FUN_1446dd670(&local_58,local_50,0);
              memcpy(local_58,pvVar3,lVar16 * 2);
            }
          }
          else {
            iVar9 = *(int *)(lVar17 + 8 + lVar21);
            iVar15 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar15 = 0;
            }
            local_58 = local_68;
            local_68 = (void *)0x0;
            local_50 = local_60;
            local_4c = local_5c;
            local_60 = 0;
            local_5c = 0;
            iVar9 = iVar15 + iVar11;
            if (iVar9 < iVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4((longlong)iVar15);
            }
            if (iVar18 < iVar9) {
              FUN_1446f8c06(&local_58);
            }
            FUN_1400020e8(&local_58,*(undefined8 *)(lVar17 + lVar21));
          }
          if (local_68 != (void *)0x0) {
            FUN_1400020a8();
          }
          puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          pvVar3 = local_58;
          *(undefined4 *)(puVar6 + 1) = 0;
          *puVar6 = &PTR_FUN_149e43e80;
          puVar6[2] = 0;
          lVar17 = (longlong)local_50;
          *(int *)(puVar6 + 3) = local_50;
          if (lVar17 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(puVar6 + 2,local_50,0);
            memcpy((void *)puVar6[2],pvVar3,lVar17 * 2);
          }
          *(undefined4 *)(puVar6 + 1) = 2;
          puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          puVar7[1] = &DAT_100000001;
          *puVar7 = &PTR_LAB_149e490e0;
          puVar7[2] = puVar6;
          iVar11 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar11 + 1U) {
            FUN_14047d050(param_1,iVar11);
          }
          lVar17 = *param_1;
          *(undefined8 **)(lVar17 + (longlong)iVar11 * 0x10) = puVar6;
          *(undefined8 **)(lVar17 + 8 + (longlong)iVar11 * 0x10) = puVar7;
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar21 = lVar21 + 0x10;
        } while (lVar13 << 4 != lVar21);
        uVar4 = *(uint *)(local_88 + 5);
        param_2 = local_88;
        uVar10 = local_98;
        puVar12 = local_90;
        uVar19 = local_78;
        uVar20 = local_80;
        iVar11 = local_9c;
        uVar14 = local_a0;
      }
      uVar14 = uVar14 & ~(uint)uVar20;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = puVar12;
      }
      iVar18 = (int)uVar19;
      lVar13 = (longlong)iVar18;
      uVar8 = puVar5[lVar13] & uVar14;
      if (uVar8 == 0) {
        iVar9 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar9 = uVar4 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar15 = iVar9;
        if (iVar9 < iVar18) {
          iVar15 = iVar18;
        }
        if (iVar18 < iVar9) {
          lVar21 = 0;
          do {
            uVar8 = puVar5[lVar13 + lVar21 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar18 + (int)lVar21 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1427a05ad;
            }
            iVar11 = iVar11 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar15 - lVar13 != lVar21);
          uVar14 = 0xffffffff;
          iVar18 = iVar15;
        }
        uVar19 = (ulonglong)(iVar18 + 1);
        uVar8 = uVar4;
      }
      else {
LAB_1427a05ad:
        uVar20 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar20 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar8) {
          uVar8 = uVar4;
        }
      }
    } while (uVar8 != (uint)uVar10);
  }
LAB_1427a0252:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1427a0606 FUN_1427a0606 body=2364 status=ok
// SIG undefined FUN_1427a0606(void)

ulonglong FUN_1427a0606(longlong param_1,longlong *param_2,char param_3,longlong *param_4,
                       byte param_5,undefined1 param_6,undefined1 param_7,longlong *param_8)

{
  undefined2 *puVar1;
  longlong *plVar2;
  undefined7 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  uVar6 = (ulonglong)uVar8;
  if (*(char *)(param_1 + 0x160) != '\0') {
    if (uVar6 == 0) {
      return 0;
    }
    uVar6 = (ulonglong)(int)uVar8;
LAB_1427a0652:
    plVar2 = *(longlong **)(param_1 + 0x10);
    plVar13 = plVar2 + uVar6 * 2;
    iVar4 = (int)param_2[1];
LAB_1427a066b:
    if ((int)plVar2[1] == iVar4) {
      if (1 < iVar4) {
        lVar12 = 0;
        do {
          uVar10 = *(ushort *)(*plVar2 + lVar12);
          uVar7 = *(ushort *)(*param_2 + lVar12);
          if (uVar10 == uVar7) {
            if (uVar10 == 0) break;
          }
          else {
            if (0x7f < (uVar7 | uVar10)) {
              iVar5 = (uint)uVar10 - (uint)uVar7;
              goto LAB_1427a06cd;
            }
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar7])
            goto code_r0x0001427a06ca;
          }
          lVar12 = lVar12 + 2;
        } while( true );
      }
    }
    else if ((int)plVar2[1] + iVar4 != 1) goto LAB_1427a067b;
    goto LAB_1427a06d9;
  }
  if (0 < (int)uVar8) goto LAB_1427a0652;
LAB_1427a06d9:
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    plVar13 = plVar2 + (longlong)*(int *)(param_1 + 0x28) * 2;
    iVar4 = (int)param_2[1];
LAB_1427a07c4:
    if ((int)plVar2[1] == iVar4) {
      if (iVar4 < 2) {
        return 0;
      }
      lVar12 = 0;
      do {
        uVar10 = *(ushort *)(*plVar2 + lVar12);
        uVar7 = *(ushort *)(*param_2 + lVar12);
        if (uVar10 == uVar7) {
          if (uVar10 == 0) {
            return 0;
          }
        }
        else {
          if (0x7f < (uVar7 | uVar10)) {
            iVar5 = (uint)uVar10 - (uint)uVar7;
            goto LAB_1427a0835;
          }
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar7]) goto code_r0x0001427a0832;
        }
        lVar12 = lVar12 + 2;
      } while( true );
    }
    if ((int)plVar2[1] + iVar4 == 1) {
      return 0;
    }
    goto LAB_1427a07da;
  }
LAB_1427a06e6:
  if (1 < (int)param_8[1]) {
    plVar2 = (longlong *)(param_1 + 0x30);
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
    iVar4 = FUN_140d080c0(plVar2);
    if (iVar4 != -1) {
      iVar4 = (int)param_2[1];
      uVar6 = 0;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        if (iVar4 == 0) {
          puVar1 = &DAT_149dfb77a;
        }
        else {
          puVar1 = (undefined2 *)*param_2;
        }
        lVar12 = 0;
        uVar6 = 0;
        do {
          uVar8 = ((uint)(ushort)puVar1[lVar12] +
                  (uint)(0x19 < (ushort)puVar1[lVar12] - 0x61) * 0x20) - 0x20;
          uVar15 = (uint)(uVar6 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar8) & 0xff) * 4);
          uVar6 = (ulonglong)
                  (uVar15 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
          lVar12 = lVar12 + 1;
        } while (iVar5 != (int)lVar12);
      }
      iVar4 = FUN_140d080c0(plVar2,uVar6,param_2);
      if (iVar4 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)iVar4 * 0x28 + *plVar2;
      }
      if ((longlong)*(int *)(lVar12 + 0x18) == 0) {
        return 0;
      }
      plVar2 = *(longlong **)(lVar12 + 0x10);
      plVar13 = plVar2 + (longlong)*(int *)(lVar12 + 0x18) * 2;
      iVar4 = (int)param_8[1];
LAB_1427a0a9a:
      if ((int)plVar2[1] != iVar4) {
        if ((int)plVar2[1] + iVar4 != 1) goto LAB_1427a0aad;
        goto LAB_1427a09b9;
      }
      if (1 < iVar4) {
        lVar12 = 0;
        do {
          uVar10 = *(ushort *)(*plVar2 + lVar12);
          uVar7 = *(ushort *)(*param_8 + lVar12);
          if (uVar10 == uVar7) {
            if (uVar10 == 0) goto LAB_1427a09b9;
          }
          else {
            if (0x7f < (uVar7 | uVar10)) {
              iVar5 = (uint)uVar10 - (uint)uVar7;
              goto LAB_1427a0b0a;
            }
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar7])
            goto code_r0x0001427a0b07;
          }
          lVar12 = lVar12 + 2;
        } while( true );
      }
      goto LAB_1427a06f6;
    }
    iVar4 = (int)param_8[1];
LAB_1427a09b9:
    if (1 < iVar4) {
      iVar4 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar4 = 0;
      }
      if (0 < iVar4) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      iVar4 = FUN_140d080c0((longlong *)(param_1 + 0x80));
      if (iVar4 != -1) {
        iVar4 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          iVar4 = 0;
        }
        if (0 < iVar4) {
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
        iVar4 = FUN_140d080c0();
        if (iVar4 == -1) {
          lVar12 = 0;
        }
        else {
          lVar12 = (longlong)iVar4 * 0x28 + *(longlong *)(param_1 + 0x80);
        }
        if ((longlong)*(int *)(lVar12 + 0x18) != 0) {
          plVar2 = *(longlong **)(lVar12 + 0x10);
          plVar13 = plVar2 + (longlong)*(int *)(lVar12 + 0x18) * 2;
          iVar4 = (int)param_8[1];
LAB_1427a0dd4:
          if ((int)plVar2[1] == iVar4) {
            if (iVar4 < 2) {
              return 0;
            }
            lVar12 = 0;
            do {
              uVar10 = *(ushort *)(*plVar2 + lVar12);
              uVar7 = *(ushort *)(*param_8 + lVar12);
              if (uVar10 == uVar7) {
                if (uVar10 == 0) {
                  return 0;
                }
              }
              else {
                if (0x7f < (uVar7 | uVar10)) {
                  iVar5 = (uint)uVar10 - (uint)uVar7;
                  goto LAB_1427a0e45;
                }
                if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[(uint)uVar7])
                goto code_r0x0001427a0e42;
              }
              lVar12 = lVar12 + 2;
            } while( true );
          }
          if ((int)plVar2[1] + iVar4 == 1) {
            return 0;
          }
          goto LAB_1427a0dea;
        }
      }
    }
  }
LAB_1427a06f6:
  if (0 < (longlong)*(int *)(param_1 + 0xd8)) {
    lVar12 = 0;
    while (*(byte *)(*(longlong *)(param_1 + 0xd0) + lVar12) != param_5) {
      lVar12 = lVar12 + 1;
      if (*(int *)(param_1 + 0xd8) == lVar12) {
        return 0;
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar12 = 0;
    do {
      if (*(byte *)(*(longlong *)(param_1 + 0xe0) + lVar12) == param_5) {
        return 0;
      }
      lVar12 = lVar12 + 1;
    } while (*(int *)(param_1 + 0xe8) != lVar12);
  }
  lVar12 = (longlong)*(int *)(param_1 + 0xf8);
  if (0 < lVar12) {
    lVar14 = 0;
    while (*(char *)(*(longlong *)(param_1 + 0xf0) + lVar14) != param_3) {
      lVar14 = lVar14 + 1;
      if (lVar12 == lVar14) {
        return 0;
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x100);
    lVar14 = 0;
    do {
      if (*(char *)(lVar12 + lVar14) == param_3) {
        return 0;
      }
      lVar14 = lVar14 + 1;
    } while (*(int *)(param_1 + 0x108) != lVar14);
  }
  if (param_5 == 5) {
    if (0 < (longlong)*(int *)(param_1 + 0x118)) {
      plVar2 = *(longlong **)(param_1 + 0x110);
      plVar13 = plVar2 + (longlong)*(int *)(param_1 + 0x118) * 2;
      iVar4 = (int)param_4[1];
LAB_1427a093f:
      iVar5 = (int)plVar2[1];
      if (iVar5 == iVar4) {
        uVar6 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
        if (iVar4 < 2) {
          return uVar6;
        }
        lVar12 = 0;
        do {
          uVar10 = *(ushort *)(*plVar2 + lVar12);
          uVar11 = (ulonglong)uVar10;
          uVar7 = *(ushort *)(*param_4 + lVar12);
          if (uVar10 == uVar7) {
            if (uVar10 == 0) {
              return uVar6;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar10)) goto LAB_1427a09a9;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            uVar9 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar9]) goto LAB_1427a09a9;
          }
          lVar12 = lVar12 + 2;
        } while( true );
      }
      uVar6 = (ulonglong)(uint)(iVar5 + iVar4);
      if (iVar5 + iVar4 != 1) goto LAB_1427a0951;
      goto switchD_1427a0d9f_caseD_2;
    }
    plVar2 = (longlong *)0x0;
    if ((longlong)*(int *)(param_1 + 0x128) != 0) {
      plVar13 = *(longlong **)(param_1 + 0x120);
      plVar2 = plVar13 + (longlong)*(int *)(param_1 + 0x128) * 2;
      iVar4 = (int)param_4[1];
LAB_1427a0e77:
      if ((int)plVar13[1] == iVar4) {
        if (iVar4 < 2) {
          return 0;
        }
        lVar14 = 0;
        do {
          uVar10 = *(ushort *)(*plVar13 + lVar14);
          uVar6 = (ulonglong)uVar10;
          uVar7 = *(ushort *)(*param_4 + lVar14);
          if (uVar10 == uVar7) {
            if (uVar10 == 0) {
              return 0;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar10)) goto LAB_1427a0ee6;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar11]) goto LAB_1427a0ee6;
          }
          lVar14 = lVar14 + 2;
        } while( true );
      }
      if ((int)plVar13[1] + iVar4 == 1) {
        return 0;
      }
      goto LAB_1427a0e8c;
    }
  }
  else {
    if (0 < (longlong)*(int *)(param_1 + 0x138)) {
      plVar2 = *(longlong **)(param_1 + 0x130);
      plVar13 = plVar2 + (longlong)*(int *)(param_1 + 0x138) * 2;
      iVar4 = (int)param_4[1];
LAB_1427a0b45:
      if ((int)plVar2[1] == iVar4) {
        if (1 < iVar4) {
          lVar14 = 0;
          do {
            uVar10 = *(ushort *)(*plVar2 + lVar14);
            uVar6 = (ulonglong)uVar10;
            uVar7 = *(ushort *)(*param_4 + lVar14);
            if (uVar10 == uVar7) {
              if (uVar10 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar10)) goto LAB_1427a0bac;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar11 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar11]) goto LAB_1427a0bac;
            }
            lVar14 = lVar14 + 2;
          } while( true );
        }
      }
      else if ((int)plVar2[1] + iVar4 != 1) goto LAB_1427a0b56;
    }
LAB_1427a0bb4:
    plVar2 = (longlong *)0x0;
    if ((longlong)*(int *)(param_1 + 0x148) != 0) {
      plVar13 = *(longlong **)(param_1 + 0x140);
      plVar2 = plVar13 + (longlong)*(int *)(param_1 + 0x148) * 2;
      iVar4 = (int)param_4[1];
LAB_1427a0be0:
      if ((int)plVar13[1] == iVar4) {
        if (iVar4 < 2) {
          return 0;
        }
        lVar14 = 0;
        do {
          uVar10 = *(ushort *)(*plVar13 + lVar14);
          uVar6 = (ulonglong)uVar10;
          uVar7 = *(ushort *)(*param_4 + lVar14);
          if (uVar10 == uVar7) {
            if (uVar10 == 0) {
              return 0;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar10)) goto LAB_1427a0c4f;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar11]) goto LAB_1427a0c4f;
          }
          lVar14 = lVar14 + 2;
        } while( true );
      }
      if ((int)plVar13[1] + iVar4 == 1) {
        return 0;
      }
      goto LAB_1427a0bf5;
    }
  }
LAB_1427a0d7c:
  if (0xd < *(uint *)(param_1 + 8)) {
    return 0;
  }
  uVar3 = (undefined7)((ulonglong)plVar2 >> 8);
  uVar6 = CONCAT71(uVar3,param_7);
  switch(*(uint *)(param_1 + 8)) {
  default:
    bVar16 = param_5 == 5;
    goto LAB_1427a0f18;
  case 2:
switchD_1427a0d9f_caseD_2:
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    break;
  case 3:
    break;
  case 4:
    uVar6 = CONCAT71(uVar3,param_7) ^ 1;
    break;
  case 5:
  case 9:
    param_5 = param_5 & 0xfe;
  case 7:
  case 8:
    uVar6 = CONCAT71(uVar3,param_5 == 4);
    break;
  case 6:
    uVar6 = CONCAT71(uVar3,param_6);
    break;
  case 10:
    uVar6 = CONCAT71((int7)((ulonglong)lVar12 >> 8),param_5 == 5) & 0xffffffff;
    break;
  case 0xb:
    bVar16 = (param_5 - 3 & 0xfd) == 0;
LAB_1427a0f18:
    uVar6 = CONCAT71(uVar3,!bVar16);
    break;
  case 0xc:
  case 0xd:
    uVar6 = CONCAT71(uVar3,param_5 != 2 && param_5 != 5);
  }
  return uVar6;
code_r0x0001427a06ca:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
LAB_1427a06cd:
  if (iVar5 == 0) goto LAB_1427a06d9;
LAB_1427a067b:
  plVar2 = plVar2 + 2;
  if (plVar2 == plVar13) {
    return 0;
  }
  goto LAB_1427a066b;
code_r0x0001427a0832:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
LAB_1427a0835:
  if (iVar5 == 0) {
    return 0;
  }
LAB_1427a07da:
  plVar2 = plVar2 + 2;
  if (plVar2 == plVar13) goto LAB_1427a06e6;
  goto LAB_1427a07c4;
code_r0x0001427a0b07:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
LAB_1427a0b0a:
  if (iVar5 == 0) goto LAB_1427a09b9;
LAB_1427a0aad:
  plVar2 = plVar2 + 2;
  if (plVar2 == plVar13) {
    return 0;
  }
  goto LAB_1427a0a9a;
code_r0x0001427a0e42:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar10] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
LAB_1427a0e45:
  if (iVar5 == 0) {
    return 0;
  }
LAB_1427a0dea:
  plVar2 = plVar2 + 2;
  if (plVar2 == plVar13) goto LAB_1427a06f6;
  goto LAB_1427a0dd4;
LAB_1427a0bac:
  if (uVar10 == uVar7) goto LAB_1427a0bb4;
LAB_1427a0b56:
  plVar2 = plVar2 + 2;
  if (plVar2 == plVar13) {
    return 0;
  }
  goto LAB_1427a0b45;
LAB_1427a0c4f:
  if (uVar10 == uVar7) {
    return 0;
  }
LAB_1427a0bf5:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar2) goto LAB_1427a0d7c;
  goto LAB_1427a0be0;
LAB_1427a09a9:
  if (uVar10 == uVar7) {
    return uVar6;
  }
LAB_1427a0951:
  plVar2 = plVar2 + 2;
  if (plVar2 == plVar13) {
    return 0;
  }
  goto LAB_1427a093f;
LAB_1427a0ee6:
  if (uVar10 == uVar7) {
    return 0;
  }
LAB_1427a0e8c:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar2) goto LAB_1427a0d7c;
  goto LAB_1427a0e77;
}



// FUNCTION 1427a0f48 FUN_1427a0f48 body=2958 status=ok
// SIG undefined FUN_1427a0f48(void)

ulonglong FUN_1427a0f48(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  char cVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong *local_360;
  longlong *local_358;
  longlong local_350;
  undefined8 *local_348;
  undefined1 local_340 [4];
  undefined1 local_33c [4];
  longlong *local_338 [2];
  undefined8 local_328;
  longlong *local_320;
  longlong *local_318 [2];
  longlong *local_308;
  undefined4 local_300;
  longlong *local_2f8 [2];
  longlong *local_2e8;
  undefined4 local_2e0;
  undefined2 *local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  longlong *local_2c0;
  wchar_t **local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  ulonglong uStack_2a0;
  wchar_t *local_298;
  ulonglong uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
  undefined8 local_240;
  int local_238 [68];
  undefined1 local_128;
  undefined1 local_120;
  undefined7 local_11c;
  undefined1 uStack_115;
  undefined7 uStack_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_140c50e9c(&local_2d8);
  local_360 = (longlong *)(param_1 + 8);
  uVar18 = 0;
  iVar9 = local_2d0 + -1;
  if (local_2d0 == 0) {
    iVar9 = 0;
  }
  if (0 < iVar9) {
    puVar10 = local_2d8;
    if (local_2d0 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    lVar17 = 0;
    uVar18 = 0;
    do {
      uVar11 = ((uint)(0x19 < (ushort)puVar10[lVar17] - 0x61) * 0x20 + (uint)(ushort)puVar10[lVar17]
               ) - 0x20;
      uVar19 = (uint)(uVar18 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar11) & 0xff) * 4);
      uVar18 = (ulonglong)
               (uVar19 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
      lVar17 = lVar17 + 1;
    } while (iVar9 != (int)lVar17);
  }
  iVar9 = FUN_1427ae02a(local_360,uVar18,&local_2d8);
  lVar17 = 0;
  if (iVar9 != -1) {
    lVar17 = (longlong)iVar9 * 0x28 + *local_360;
  }
  plVar13 = (longlong *)(lVar17 + 0x10);
  if (lVar17 == 0) {
    plVar13 = (longlong *)0x0;
  }
  local_358 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    local_240 = (wchar_t *)0x0;
    local_238[0] = *(int *)(param_2 + 1);
    lVar17 = (longlong)local_238[0];
    pvVar5 = (void *)*param_2;
    local_350 = param_3;
    local_348 = param_2;
    if (lVar17 == 0) {
      local_238[1] = 0;
    }
    else {
      FUN_1446dd670(&local_240,local_238[0],0);
      memcpy(local_240,pvVar5,lVar17 * 2);
    }
    FUN_1448097c4(&local_240,&DAT_149e01f64,&DAT_149e065c6);
    if ((longlong)(int)plVar13[1] != 0) {
      lVar17 = *local_358;
      lVar14 = (longlong)(int)plVar13[1] * 0x10;
      lVar16 = 0;
      do {
        local_298 = (wchar_t *)0x0;
        uVar11 = *(uint *)(*(longlong *)(lVar17 + lVar16) + 0x30);
        pvVar5 = *(void **)(*(longlong *)(lVar17 + lVar16) + 0x28);
        uStack_290 = CONCAT44(uStack_290._4_4_,uVar11);
        if ((longlong)(int)uVar11 == 0) {
          uStack_290 = (ulonglong)uVar11;
        }
        else {
          FUN_1446dd670(&local_298,uVar11,0);
          memcpy(local_298,pvVar5,(longlong)(int)uVar11 * 2);
        }
        FUN_1448097c4(&local_298);
        pwVar8 = local_298;
        if ((int)uStack_290 == local_238[0]) {
          bVar20 = true;
          if (1 < (int)uStack_290) {
            iVar9 = wcscmp(local_298,local_240);
            bVar20 = iVar9 == 0;
          }
        }
        else {
          bVar20 = local_238[0] + (int)uStack_290 == 1;
        }
        if (pwVar8 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar8);
        }
        if (bVar20) {
          if (local_240 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar18 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
          goto LAB_1427a133c;
        }
        lVar16 = lVar16 + 0x10;
      } while (lVar14 != lVar16);
    }
    if (local_240 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_3 = local_350;
    param_2 = local_348;
  }
  plVar13 = local_360;
  local_240 = (wchar_t *)((ulonglong)local_240._4_4_ << 0x20);
  memset(local_238,0,0x110);
  local_128 = 2;
  local_120 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_11c = 0;
  uStack_115 = 0;
  uStack_114 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_2e8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_2e0 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  cVar6 = FUN_1468469fc(&local_240,puVar10,&local_2e8);
  if ((cVar6 == '\0') || (cVar6 = FUN_146848eca(&local_240,&local_2e8), cVar6 == '\0')) {
    local_308 = local_2e8;
    if (local_2e8 != (longlong *)0x0) {
      (**(code **)(*local_2e8 + 8))();
    }
    local_300 = local_2e0;
    FUN_140009b9a(local_318,param_2);
    local_298 = L"AddToPluginsListFailed";
    uStack_290._0_4_ = 0x16;
    FUN_1446e940c(local_33c,&local_298);
    local_298 = L"PluginManager";
    uStack_290._0_4_ = 0xd;
    FUN_1446e940c(local_340,&local_298);
    local_298 = L"Failed to load plugin \'{0}\'\n{1}";
    uStack_290 = CONCAT44(uStack_290._4_4_,0x1f);
    FUN_140208c1e(local_338,local_340,local_33c,&local_298);
    FUN_14023409e(&local_328,local_338,1);
    local_298 = (wchar_t *)CONCAT44(local_298._4_4_,4);
    FUN_14023423e(local_288,local_318);
    local_278 = CONCAT44(local_278._4_4_,4);
    FUN_14023423e((longlong)&local_26c + 4,&local_308);
    local_2b0 = &local_258;
    local_2b8 = &local_298;
    FUN_14010d304(&local_2a8);
    local_2c8 = local_328;
    local_2c0 = local_320;
    if (local_320 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_320 + 1) = (int)local_320[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_2f8,&local_2c8,&local_2a8);
    FUN_14007f2db(local_2a8,uStack_2a0 & 0xffffffff);
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    lVar17 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_298 + lVar17) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_298 + lVar17) + 0x10))();
        *(undefined8 *)((longlong)&local_298 + lVar17) = 0;
        *(undefined4 *)(local_288 + lVar17 + -8) = 0;
      }
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != -0x10);
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_320 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_320)(local_320);
        LOCK();
        piVar1 = (int *)((longlong)local_320 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_320 + 0x10))(local_320);
        }
      }
    }
    if (local_318[0] != (longlong *)0x0) {
      (**(code **)(*local_318[0] + 0x10))();
    }
    if (local_308 != (longlong *)0x0) {
      (**(code **)(*local_308 + 0x10))();
    }
    FUN_140008f88(&local_2e8,local_2f8);
    if (local_2f8[0] != (longlong *)0x0) {
      (**(code **)(*local_2f8[0] + 0x10))();
    }
    if (local_338[0] != (longlong *)0x0) {
      (**(code **)(*local_338[0] + 0x10))();
    }
    if (param_3 != 0) {
      FUN_140008f88(param_3,&local_2e8);
    }
    uVar18 = 0;
  }
  else {
    uVar7 = FUN_140d6ac5a();
    FUN_140056680(&local_298,uVar7);
    uVar15 = 0;
    uVar18 = (ulonglong)((int)uStack_290 - 1);
    if ((int)uStack_290 == 0) {
      uVar18 = uVar15;
    }
    if (0 < (int)uVar18) {
      puVar10 = &DAT_149dfb77a;
      pwVar8 = local_298;
      if ((int)uStack_290 == 0) {
        pwVar8 = L"";
      }
      if (*(int *)(param_2 + 1) != 0) {
        puVar10 = (undefined2 *)*param_2;
      }
      lVar17 = 0;
LAB_1427a168d:
      uVar3 = *(ushort *)((longlong)puVar10 + lVar17);
      uVar15 = (ulonglong)uVar3;
      uVar4 = *(ushort *)((longlong)pwVar8 + lVar17);
      if (uVar3 == uVar4) {
        uVar11 = 0;
        if ((uVar3 == 0) || (uVar18 == 1)) goto LAB_1427a16dc;
LAB_1427a16a8:
        uVar18 = uVar18 - 1;
        lVar17 = lVar17 + 2;
        goto LAB_1427a168d;
      }
      if ((uVar4 | uVar3) < 0x80) {
        pbVar2 = &DAT_149e05da0 + uVar15;
        uVar15 = 0;
        if (*pbVar2 != (&DAT_149e05da0)[(uint)uVar4]) {
          uVar11 = (uint)*pbVar2 - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
          goto LAB_1427a16dc;
        }
        if (uVar18 == 1) {
          uVar11 = 0;
          goto LAB_1427a16dc;
        }
        goto LAB_1427a16a8;
      }
      uVar11 = (uint)uVar3 - (uint)uVar4;
      uVar15 = (ulonglong)uVar11;
LAB_1427a16dc:
      uVar15 = CONCAT71((int7)(uVar15 >> 8),uVar11 == 0);
    }
    if (local_298 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    uVar12 = 0;
    if ((char)uVar15 == '\0') {
      FUN_145c6a176(&local_298);
      uVar15 = 0;
      uVar18 = (ulonglong)((int)uStack_290 - 1);
      if ((int)uStack_290 == 0) {
        uVar18 = uVar15;
      }
      if (0 < (int)uVar18) {
        puVar10 = &DAT_149dfb77a;
        pwVar8 = local_298;
        if ((int)uStack_290 == 0) {
          pwVar8 = L"";
        }
        if (*(int *)(param_2 + 1) != 0) {
          puVar10 = (undefined2 *)*param_2;
        }
        lVar17 = 0;
LAB_1427a1750:
        uVar3 = *(ushort *)((longlong)puVar10 + lVar17);
        uVar15 = (ulonglong)uVar3;
        uVar4 = *(ushort *)((longlong)pwVar8 + lVar17);
        if (uVar3 == uVar4) {
          uVar11 = 0;
          if ((uVar3 == 0) || (uVar18 == 1)) goto LAB_1427a179f;
LAB_1427a176b:
          uVar18 = uVar18 - 1;
          lVar17 = lVar17 + 2;
          goto LAB_1427a1750;
        }
        if ((uVar4 | uVar3) < 0x80) {
          pbVar2 = &DAT_149e05da0 + uVar15;
          uVar15 = 0;
          if (*pbVar2 != (&DAT_149e05da0)[(uint)uVar4]) {
            uVar11 = (uint)*pbVar2 - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
            goto LAB_1427a179f;
          }
          if (uVar18 == 1) {
            uVar11 = 0;
            goto LAB_1427a179f;
          }
          goto LAB_1427a176b;
        }
        uVar11 = (uint)uVar3 - (uint)uVar4;
        uVar15 = (ulonglong)uVar11;
LAB_1427a179f:
        uVar15 = CONCAT71((int7)(uVar15 >> 8),uVar11 == 0);
      }
      if (local_298 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uVar12 = 1;
      if ((char)uVar15 == '\0') {
        FUN_14626c14e(&local_298);
        uVar15 = 0;
        uVar18 = (ulonglong)((int)uStack_290 - 1);
        if ((int)uStack_290 == 0) {
          uVar18 = uVar15;
        }
        if (0 < (int)uVar18) {
          puVar10 = &DAT_149dfb77a;
          pwVar8 = local_298;
          if ((int)uStack_290 == 0) {
            pwVar8 = L"";
          }
          if (*(int *)(param_2 + 1) != 0) {
            puVar10 = (undefined2 *)*param_2;
          }
          lVar17 = 0;
LAB_1427a180d:
          uVar3 = *(ushort *)((longlong)puVar10 + lVar17);
          uVar15 = (ulonglong)uVar3;
          uVar4 = *(ushort *)((longlong)pwVar8 + lVar17);
          if (uVar3 == uVar4) {
            uVar11 = 0;
            if ((uVar3 == 0) || (uVar18 == 1)) goto LAB_1427a185c;
LAB_1427a1828:
            uVar18 = uVar18 - 1;
            lVar17 = lVar17 + 2;
            goto LAB_1427a180d;
          }
          if ((uVar4 | uVar3) < 0x80) {
            pbVar2 = &DAT_149e05da0 + uVar15;
            uVar15 = 0;
            if (*pbVar2 != (&DAT_149e05da0)[(uint)uVar4]) {
              uVar11 = (uint)*pbVar2 - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
              goto LAB_1427a185c;
            }
            if (uVar18 == 1) {
              uVar11 = 0;
              goto LAB_1427a185c;
            }
            goto LAB_1427a1828;
          }
          uVar11 = (uint)uVar3 - (uint)uVar4;
          uVar15 = (ulonglong)uVar11;
LAB_1427a185c:
          uVar15 = CONCAT71((int7)(uVar15 >> 8),uVar11 == 0);
        }
        if (local_298 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar12 = 4;
        if ((char)uVar15 == '\0') {
          FUN_1457a1ca8(&local_2a8);
          FUN_140beea4a(&local_298,&local_2a8);
          uVar11 = (int)uStack_290 - 1;
          if ((int)uStack_290 == 0) {
            uVar11 = 0;
          }
          uVar12 = 3;
          if (0 < (int)uVar11) {
            puVar10 = &DAT_149dfb77a;
            pwVar8 = local_298;
            if ((int)uStack_290 == 0) {
              pwVar8 = L"";
            }
            uVar18 = (ulonglong)uVar11;
            if (*(int *)(param_2 + 1) != 0) {
              puVar10 = (undefined2 *)*param_2;
            }
            lVar17 = 0;
            while( true ) {
              uVar3 = *(ushort *)((longlong)puVar10 + lVar17);
              uVar11 = (uint)uVar3;
              uVar4 = *(ushort *)((longlong)pwVar8 + lVar17);
              uVar15 = (ulonglong)uVar4;
              if (uVar3 != uVar4) break;
              if (uVar3 == 0) goto LAB_1427a1925;
LAB_1427a18f7:
              uVar18 = uVar18 - 1;
              if (uVar18 == 0) goto LAB_1427a1925;
              lVar17 = lVar17 + 2;
            }
            if ((uVar4 | uVar3) < 0x80) {
              uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar15 = (ulonglong)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1427a18f7;
            }
            if (uVar11 != (uint)uVar15) goto LAB_1427a192a;
LAB_1427a1925:
            uVar12 = 2;
          }
LAB_1427a192a:
          if (local_298 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          plVar13 = local_360;
          if (local_2a8 != 0) {
            FUN_1400020a8();
            plVar13 = local_360;
          }
        }
      }
    }
    local_278 = 0;
    local_270 = 0;
    local_298 = (wchar_t *)0x0;
    uStack_290 = 0;
    local_26c = 0xffffffff00000080;
    local_264 = 0;
    local_258 = 0;
    local_250 = 0;
    local_368 = &local_2a8;
    local_2a8 = 0;
    uStack_2a0 = 0;
    FUN_1427a1ad8(param_2,&local_240,uVar12,&local_298);
    lVar17 = FUN_1427a1d95(&local_298,&local_2d8);
    if (lVar17 != 0) {
      bVar20 = false;
      if (local_358 != (longlong *)0x0) {
        bVar20 = 0 < (int)local_358[1];
      }
      FUN_1427a1e62(plVar13,&local_2d8,lVar17,bVar20);
    }
    FUN_140a49a56(local_2a8,uStack_2a0 & 0xffffffff);
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    local_250 = 0;
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    FUN_1457668ca(&local_298);
    uVar18 = CONCAT71((int7)(uVar15 >> 8),1);
  }
  if (local_2e8 != (longlong *)0x0) {
    (**(code **)(*local_2e8 + 0x10))();
  }
  FUN_140a49b34(&local_240);
LAB_1427a133c:
  if (local_2d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 1427a1ad8 FUN_1427a1ad8 body=700 status=ok
// SIG undefined FUN_1427a1ad8(void)

void FUN_1427a1ad8(undefined8 param_1,int *param_2,int param_3,undefined8 param_4,longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ushort uVar7;
  bool bVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_14001cc68(0x248,0x10);
  FUN_140b844aa(lVar4,param_1,param_2);
  local_50 = lVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e49900;
  plVar5[2] = lVar4;
  local_48 = plVar5;
  if ((lVar4 != 0) &&
     (((*(longlong *)(lVar4 + 8) == 0 || (*(longlong *)(lVar4 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar4 + 0x10) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar4 + 8) = lVar4;
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) {
LAB_1427a1bbe:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar4 + 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1427a1bd3;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar4 + 8) = lVar4;
      if (*(longlong **)(lVar4 + 0x10) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar4 + 0x10);
        if (plVar6 != (longlong *)0x0) goto LAB_1427a1bbe;
        *(longlong **)(lVar4 + 0x10) = plVar5;
      }
LAB_1427a1bd3:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  lVar4 = local_50;
  if (*(char *)(local_50 + 0x17a) == '\x01') {
    iVar2 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
      FUN_14170de88(param_5,iVar2);
    }
    lVar3 = *param_5;
    *(longlong *)(lVar3 + (longlong)iVar2 * 0x10) = lVar4;
    *(longlong **)(lVar3 + 8 + (longlong)iVar2 * 0x10) = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_1427a1d6f;
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  else {
    FUN_1401aea18(local_60,param_1);
    plVar5 = (longlong *)FUN_1427a1d95(param_4,lVar4 + 0x18);
    bVar8 = false;
    if (plVar5 == (longlong *)0x0) {
LAB_1427a1d29:
      FUN_1427a1e62(param_4,lVar4 + 0x18,&local_50,bVar8);
    }
    else {
      lVar3 = *plVar5;
      if (((param_3 == 2) && (*(int *)(lVar3 + 0x240) == 0)) &&
         ((*(byte *)(lVar3 + 0x244) & 1) == 0)) goto LAB_1427a1d29;
      iVar2 = *(int *)(lVar3 + 0x30);
      if (iVar2 == *(int *)(lVar4 + 0x30)) {
        if (1 < iVar2) {
          lVar9 = 0;
          while( true ) {
            uVar10 = *(ushort *)(*(longlong *)(lVar3 + 0x28) + lVar9);
            uVar11 = (ulonglong)uVar10;
            uVar7 = *(ushort *)(*(longlong *)(lVar4 + 0x28) + lVar9);
            if (uVar10 != uVar7) break;
            if (uVar10 == 0) goto LAB_1427a1d39;
LAB_1427a1ccc:
            lVar9 = lVar9 + 2;
          }
          if ((uVar7 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            uVar12 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar12]) goto LAB_1427a1ccc;
          }
          if (uVar10 != uVar7) goto LAB_1427a1d03;
        }
      }
      else if (*(int *)(lVar4 + 0x30) + iVar2 != 1) {
LAB_1427a1d03:
        bVar8 = true;
        if (((*(byte *)(lVar3 + 0x244) & 1) == 0) &&
           ((param_3 != 0 || (*(int *)(lVar3 + 0x240) != 2)))) {
          if (*(int *)(lVar3 + 0x48) == *param_2) goto LAB_1427a1d39;
          bVar8 = *param_2 <= *(int *)(lVar3 + 0x48);
        }
        goto LAB_1427a1d29;
      }
    }
LAB_1427a1d39:
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1427a1d6f:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427a1d95 FUN_1427a1d95 body=205 status=ok
// SIG undefined FUN_1427a1d95(void)

longlong FUN_1427a1d95(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 8) + -1;
  if (*(int *)(param_2 + 8) == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
    } while (iVar2 != iVar4);
  }
  iVar2 = FUN_1427ae02a(param_1);
  lVar1 = 0;
  lVar3 = (longlong)iVar2 * 0x28 + *param_1;
  if (iVar2 == -1) {
    lVar3 = lVar1;
  }
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (longlong)(*(int *)(lVar3 + 0x18) + -1) * 0x10 + *(longlong *)(lVar3 + 0x10);
    }
  }
  return lVar1;
}



// FUNCTION 1427a1e62 FUN_1427a1e62 body=1403 status=ok
// SIG undefined FUN_1427a1e62(void)

void FUN_1427a1e62(longlong *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  void *_Src;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  
  iVar12 = *(int *)(param_2 + 1);
  uVar30 = 0;
  iVar19 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar19 = 0;
  }
  if (0 < iVar19) {
    if (iVar12 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    else {
      puVar16 = (undefined2 *)*param_2;
    }
    lVar23 = 0;
    uVar30 = 0;
    do {
      uVar26 = ((uint)(0x19 < (ushort)puVar16[lVar23] - 0x61) * 0x20 + (uint)(ushort)puVar16[lVar23]
               ) - 0x20;
      uVar30 = uVar30 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar30 ^ uVar26) & 0xff) * 4);
      uVar30 = uVar30 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ uVar26 >> 8 & 0xff) * 4);
      lVar23 = lVar23 + 1;
    } while (iVar19 != (int)lVar23);
  }
  iVar12 = FUN_1427ae02a(param_1,uVar30,param_2);
  if (iVar12 != -1) {
    if (*param_1 + (longlong)iVar12 * 0x28 != 0) {
      lVar23 = *param_1 + (longlong)iVar12 * 0x28;
      goto LAB_1427a20dc;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar12) {
      FUN_140549c28(param_1,iVar12);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar13 = iVar19 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar27 = param_1 + 2;
    iVar20 = iVar19 + 1;
    iVar28 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar28 = iVar19;
    }
    if (iVar28 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar20;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        iVar13 = iVar19;
        if (iVar19 + 0x20U < 0xa0) {
          iVar20 = 0x80;
        }
        else {
          uVar26 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar26) {
              uVar22 = uVar26;
            }
          }
          else {
            uVar22 = uVar26 + (uVar26 * 3 >> 3) + 0x10;
          }
          uVar17 = (ulonglong)(uVar22 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar14 = (uint)(uVar17 + 0xf);
              if (uVar22 < 0x1ffd) {
                uVar17 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
              }
              else {
                uVar21 = (ulonglong)(uVar14 & 0xfffffff0);
                if (uVar21 < 0x7ff1) {
                  bVar18 = (&DAT_14c841e00)[uVar14 >> 4];
                  uVar25 = 0x32;
                  if (0x32 < bVar18) {
                    uVar25 = (ulonglong)bVar18;
                  }
                  uVar29 = 0x32 - (ulonglong)bVar18;
                  do {
                    uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_1427a225a;
                    lVar23 = uVar25 + 1 + uVar29;
                    uVar29 = uVar29 - 1;
                  } while (lVar23 != 0x33);
                }
                uVar17 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar17 = (ulonglong)DAT_14c841df8;
                }
                uVar17 = -uVar17 & (uVar21 + uVar17) - 1;
              }
            }
            else {
              uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
              iVar13 = (int)param_1[5];
            }
          }
LAB_1427a225a:
          iVar15 = (int)(uVar17 >> 2);
          iVar20 = -0x20;
          if ((int)uVar26 <= iVar15) {
            iVar20 = iVar15 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar20;
        FUN_1446efbd8(plVar27,iVar13);
        iVar20 = (int)param_1[5] + 1;
      }
      iVar13 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar13 = iVar20;
      }
      *(int *)(param_1 + 5) = iVar20;
      if (iVar20 % 0x20 != 0) {
        plVar24 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar24 = plVar27;
        }
        bVar18 = -(char)(iVar20 % 0x20);
        *(uint *)((longlong)plVar24 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar24 + (longlong)(iVar13 >> 5) * 4) << (bVar18 & 0x1f)) >>
             (bVar18 & 0x1f);
      }
    }
    lVar23 = (longlong)iVar12;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[4];
    }
    bVar18 = (byte)iVar19 & 0x1f;
    puVar3 = (uint *)((longlong)plVar27 + (longlong)(iVar28 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
  }
  else {
    iVar12 = (int)param_1[6];
    lVar23 = (longlong)iVar12;
    iVar19 = *(int *)(*param_1 + 4 + lVar23 * 0x28);
    *(int *)(param_1 + 6) = iVar19;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x28) = 0xffffffff;
    }
  }
  plVar27 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar27 = (longlong *)param_1[4];
  }
  iVar19 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar19 = iVar12;
  }
  puVar3 = (uint *)((longlong)plVar27 + (longlong)(iVar19 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar1 = (undefined8 *)(*param_1 + lVar23 * 0x28);
  *puVar1 = 0;
  iVar19 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(puVar1 + 1) = iVar19;
  if ((longlong)iVar19 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar19,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar19 * 2);
  }
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_140a49a56(0,0);
  *(undefined4 *)(puVar1 + 4) = 0xffffffff;
  uVar26 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar19 = 1;
  if (uVar26 == 1) {
LAB_1427a206e:
    if (((int)uVar26 < 1) || (iVar19 <= (int)param_1[9])) {
      uVar30 = (int)param_1[9] - 1U & uVar30;
      *(uint *)((longlong)puVar1 + 0x24) = uVar30;
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = param_1 + 7;
      }
      *(undefined4 *)(puVar1 + 4) =
           *(undefined4 *)
            ((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar30) * 4);
      plVar27 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar27 = param_1 + 7;
      }
      *(int *)((longlong)plVar27 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar30) * 4) =
           iVar12;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_14170dbbe(param_1);
    }
  }
  else {
    iVar13 = FUN_1427ae02a(param_1,uVar30,puVar1);
    if (iVar13 == -1) {
      if (3 < uVar26) {
        uVar17 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
        lVar23 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar19 = 1 << ((byte)lVar23 & 0x1f);
      }
      goto LAB_1427a206e;
    }
    puVar2 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x28);
    FUN_14685064c(puVar2);
    uVar5 = *(undefined4 *)puVar1;
    uVar6 = *(undefined4 *)((longlong)puVar1 + 4);
    uVar7 = *(undefined4 *)(puVar1 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar1 + 0xc);
    uVar9 = *(undefined4 *)((longlong)puVar1 + 0x14);
    uVar10 = *(undefined4 *)(puVar1 + 3);
    uVar11 = *(undefined4 *)((longlong)puVar1 + 0x1c);
    puVar2[4] = *(undefined4 *)(puVar1 + 2);
    puVar2[5] = uVar9;
    puVar2[6] = uVar10;
    puVar2[7] = uVar11;
    *puVar2 = uVar5;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    FUN_146850724(param_1,iVar12);
  }
  lVar23 = *param_1 + (longlong)iVar12 * 0x28;
LAB_1427a20dc:
  plVar27 = (longlong *)(lVar23 + 0x10);
  iVar12 = *(int *)(lVar23 + 0x18);
  if (param_4 != 0) {
    iVar19 = 1;
    if (1 < iVar12) {
      iVar19 = iVar12;
    }
    FUN_146850796(plVar27,param_3,iVar19 + -1);
    return;
  }
  *(uint *)(lVar23 + 0x18) = iVar12 + 1U;
  if (*(uint *)(lVar23 + 0x1c) < iVar12 + 1U) {
    FUN_14170de88(plVar27,iVar12);
  }
  lVar23 = *plVar27;
  *(undefined8 *)(lVar23 + (longlong)iVar12 * 0x10) = *param_3;
  lVar4 = param_3[1];
  *(longlong *)(lVar23 + 8 + (longlong)iVar12 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1427a23dd FUN_1427a23dd body=658 status=ok
// SIG undefined FUN_1427a23dd(void)

longlong * FUN_1427a23dd(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  wchar_t *pwVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *_Src_00;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c50e9c(&local_58);
  uVar4 = 0;
  iVar3 = local_50 + -1;
  if (local_50 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    puVar2 = local_58;
    if (local_50 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    lVar9 = 0;
    uVar4 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar9]) -
              0x20;
      uVar10 = (uint)(uVar4 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
      uVar4 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar3 != (int)lVar9);
  }
  iVar3 = FUN_1427ae02a(param_1,uVar4,&local_58);
  lVar9 = 0;
  if (iVar3 != -1) {
    lVar9 = (longlong)iVar3 * 0x28 + *param_1;
  }
  if (lVar9 != 0) {
    local_68 = (wchar_t *)0x0;
    local_60 = *(int *)(param_2 + 1);
    lVar8 = (longlong)local_60;
    _Src_00 = (longlong *)*param_2;
    if (lVar8 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,_Src_00,lVar8 * 2);
    }
    FUN_1448097c4(&local_68,&DAT_149e01f64,&DAT_149e065c6,0);
    if ((longlong)*(int *)(lVar9 + 0x18) == 0) {
      bVar11 = true;
    }
    else {
      plVar6 = *(longlong **)(lVar9 + 0x10);
      lVar9 = (longlong)*(int *)(lVar9 + 0x18) << 4;
      plVar7 = _Src_00;
      do {
        lVar9 = lVar9 + -0x10;
        local_78 = (wchar_t *)0x0;
        local_70 = *(int *)(*plVar6 + 0x30);
        lVar8 = (longlong)local_70;
        _Src = *(void **)(*plVar6 + 0x28);
        if (lVar8 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar8 * 2);
        }
        FUN_1448097c4(&local_78,&DAT_149e01f64,&DAT_149e065c6,0);
        pwVar1 = local_78;
        if (local_70 == local_60) {
          bVar11 = true;
          _Src_00 = plVar6;
          if (1 < local_70) {
            iVar3 = wcscmp(local_78,local_68);
            bVar11 = iVar3 == 0;
            _Src_00 = plVar7;
            if (bVar11) {
              _Src_00 = plVar6;
            }
          }
        }
        else {
          bVar11 = local_60 + local_70 == 1;
          _Src_00 = plVar7;
          if (bVar11) {
            _Src_00 = plVar6;
          }
        }
        if (pwVar1 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar1);
        }
        plVar6 = plVar6 + 2;
        plVar7 = _Src_00;
      } while (!(bool)(lVar9 == 0 | bVar11));
      bVar11 = (bool)(bVar11 ^ 1);
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar11) goto LAB_1427a2636;
  }
  _Src_00 = (longlong *)0x0;
LAB_1427a2636:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Src_00;
}



// FUNCTION 1427a267a FUN_1427a267a body=108 status=ok
// SIG undefined FUN_1427a267a(void)

void FUN_1427a267a(void)

{
  if (DAT_14c926fa0 == (undefined8 *)0x0) {
    DAT_14c926fa0 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *DAT_14c926fa0 = &PTR_FUN_149e486e0;
    DAT_14c926fa0[1] = 0;
    DAT_14c926fa0[2] = 0;
    DAT_14c926fa0[3] = 0;
    DAT_14c926fa0[4] = 0;
    *(undefined1 *)(DAT_14c926fa0 + 5) = 0;
    DAT_14c926fa0[6] = 0;
    DAT_14c926fa0[7] = 0;
    *(undefined4 *)(DAT_14c926fa0 + 8) = 2;
    *(undefined8 *)((longlong)DAT_14c926fa0 + 0x44) = 0;
    *(undefined8 *)((longlong)DAT_14c926fa0 + 0x4c) = 0;
    *(undefined8 *)((longlong)DAT_14c926fa0 + 0x54) = 0x200000000;
    *(undefined8 *)((longlong)DAT_14c926fa0 + 0x5c) = 0;
    *(undefined8 *)((longlong)DAT_14c926fa0 + 100) = 0;
    *(undefined4 *)((longlong)DAT_14c926fa0 + 0x6c) = 0;
  }
  return;
}



// FUNCTION 1427a26e6 FUN_1427a26e6 body=2478 status=ok
// SIG undefined FUN_1427a26e6(void)

void FUN_1427a26e6(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong lVar10;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 local_190;
  code **local_188;
  undefined8 local_180;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  ulonglong uStack_160;
  longlong local_158;
  ulonglong uStack_150;
  code *local_140;
  longlong **local_138;
  code *local_130;
  undefined4 local_128;
  longlong *local_120;
  char local_f4;
  longlong *local_d0 [2];
  longlong *local_c0;
  char local_94;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = param_4;
  plVar4 = (longlong *)FUN_1400dbadc();
  plVar5 = (longlong *)*plVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_140e92164();
    *plVar4 = (longlong)plVar5;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5,puVar6);
  uVar1 = DAT_14c872be8;
  if (cVar3 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    pcVar9 = DAT_14c844840;
    local_130 = DAT_14c844840;
    if (DAT_14c844840 == (code *)0x0) {
      pcVar9 = (code *)0x0;
    }
    else if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
    }
    local_128 = 0;
    local_198 = uVar1;
    FUN_140997f46(local_d0,0x40400000,&local_130,1);
    FUN_140997a0e(local_d0);
    if (pcVar9 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar9 + 0x10))(pcVar9);
    }
    local_158 = 0;
    uStack_150 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_130 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    local_128 = 0;
    FUN_140997b30(local_d0,0x3f800000,&local_130);
    if (local_130 != (code *)0x0) {
      (**(code **)(*(longlong *)local_130 + 0x10))();
    }
    plVar5 = (longlong *)FUN_1400dbadc();
    lVar7 = *plVar5;
    if (lVar7 == 0) {
      lVar7 = FUN_140e92164();
      *plVar5 = lVar7;
    }
    FUN_1427a3516(param_1,&local_158,lVar7);
    uVar2 = uStack_150;
    local_168 = 0;
    uStack_160 = 0;
    if ((int)uStack_150 < 1) {
      if ((int)uStack_150 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_150 & 0xffffffff);
      }
    }
    else {
      uStack_160 = uStack_150 & 0xffffffff;
      FUN_1427aec84(&local_168);
      FUN_1427aeb59(local_168,uVar2 & 0xffffffff);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_130 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    local_128 = 0;
    FUN_140997b30(local_d0,0x3f800000,&local_130);
    if (local_130 != (code *)0x0) {
      (**(code **)(*(longlong *)local_130 + 0x10))();
    }
    local_178 = &local_168;
    local_138 = &local_178;
    local_130 = (code *)0x0;
    local_128 = 0;
    local_140 = FUN_1427aed86;
    local_190 = 2;
    local_188 = &local_130;
    local_170 = &local_158;
    FUN_1411ca36e(L"ReadPluginsInDirectory.PF",uStack_150 & 0xffffffff,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_130 = DAT_14c844840;
    if (DAT_14c844840 != (code *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    local_128 = 0;
    FUN_140997b30(local_d0,0x3f800000,&local_130);
    if (local_130 != (code *)0x0) {
      (**(code **)(*(longlong *)local_130 + 0x10))();
    }
    uVar1 = DAT_14c872be8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
      *(longlong *)(DAT_14c844840 + 8) = 0;
      *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
      *(longlong *)(DAT_14c844840 + 0x10) = -1;
      *(longlong *)(DAT_14c844840 + 0x18) = 0;
      *(longlong *)(DAT_14c844840 + 0x20) = 0;
      *(longlong *)(DAT_14c844840 + 0x28) = 0;
      if (DAT_14c844840 != (code *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    pcVar9 = DAT_14c844840;
    local_140 = DAT_14c844840;
    if (DAT_14c844840 == (code *)0x0) {
      pcVar9 = (code *)0x0;
    }
    else if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
    }
    local_138 = (longlong **)((ulonglong)local_138 & 0xffffffff00000000);
    local_198 = uVar1;
    FUN_140997f46(&local_130,(float)(int)uStack_150,&local_140,1);
    FUN_140997a0e(&local_130);
    if (pcVar9 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar9 + 0x10))(pcVar9);
    }
    lVar7 = (longlong)(int)uStack_150;
    if (0 < lVar7) {
      lVar10 = 0;
      lVar8 = 0;
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (code *)FUN_14001cc68(0x30,0x10);
          *(longlong *)(DAT_14c844840 + 8) = 0;
          *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
          *(longlong *)(DAT_14c844840 + 0x10) = -1;
          *(longlong *)(DAT_14c844840 + 0x18) = 0;
          *(longlong *)(DAT_14c844840 + 0x20) = 0;
          *(longlong *)(DAT_14c844840 + 0x28) = 0;
          if (DAT_14c844840 != (code *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_140 = DAT_14c844840;
        if (DAT_14c844840 != (code *)0x0) {
          if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 8) = *(int *)(DAT_14c844840 + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(longlong *)DAT_14c844840 + 8))();
          }
        }
        local_138 = (longlong **)((ulonglong)local_138 & 0xffffffff00000000);
        FUN_140997b30(&local_130,0x3f800000,&local_140);
        if (local_140 != (code *)0x0) {
          (**(code **)(*(longlong *)local_140 + 0x10))();
        }
        if (*(char *)(local_168 + 0x208 + lVar10) == '\x01') {
          local_198 = local_180;
          FUN_1427a1ad8(local_158 + lVar8,local_168 + lVar10,param_2,param_3);
        }
        else {
          FUN_1401aea18(&local_140,local_158 + lVar8);
          if (local_140 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar8 = lVar8 + 0x10;
        lVar10 = lVar10 + 0x210;
      } while (lVar7 * 0x10 != lVar8);
    }
    FUN_140997a5c(&local_130);
    if (local_f4 == '\x01') {
      local_f4 = '\0';
    }
    if (local_120 != (longlong *)0x0) {
      (**(code **)(*local_120 + 0x10))();
    }
    if (local_130 != (code *)0x0) {
      (**(code **)(*(longlong *)local_130 + 0x10))();
    }
    FUN_1427aeb1e(local_168,uStack_160 & 0xffffffff);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_158,uStack_150 & 0xffffffff);
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    FUN_140997a5c(local_d0);
    if (local_94 == '\x01') {
      local_94 = '\0';
    }
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427a3096 FUN_1427a3096 body=1151 status=ok
// SIG undefined FUN_1427a3096(void)

void FUN_1427a3096(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_e8 [40];
  uint local_c0;
  int local_bc;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  uint *local_98;
  ulonglong local_90;
  longlong *local_88;
  undefined2 *local_80;
  int local_78;
  longlong *local_70;
  int local_68;
  undefined2 **local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar11 = *(uint *)(param_2 + 5);
  local_a8 = param_1;
  if (uVar11 == 0) {
    uVar22 = 1;
    uVar12 = 0;
    iVar15 = 0;
    uVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar4 = *puVar5;
    if (uVar4 == 0) {
      iVar15 = uVar11 + 0x1e;
      if (-1 < (int)(uVar11 - 1)) {
        iVar15 = uVar11 - 1;
      }
      uVar12 = 0;
      uVar22 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar22 = uVar12;
      }
      iVar15 = 0;
      do {
        if (uVar22 == uVar12) goto LAB_1427a314a;
        iVar15 = iVar15 + 0x20;
        uVar4 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar12 = 0;
      iVar15 = 0;
    }
    uVar22 = (ulonglong)(-uVar4 & uVar4);
    uVar1 = uVar22 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar4 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar11 <= (int)uVar4) {
      uVar4 = uVar11;
    }
  }
  if (uVar4 != uVar11) {
    uVar19 = 0xffffffff;
    local_b8 = (ulonglong)uVar11;
    local_b0 = param_2;
    local_98 = (uint *)(param_2 + 2);
    do {
      local_c0 = uVar19;
      local_90 = uVar12;
      FUN_1468503a2(&local_80,(longlong)(int)uVar4 * 0x28 + *local_b0);
      plVar14 = local_a8;
      iVar21 = local_78 + -1;
      if (local_78 == 0) {
        iVar21 = 0;
      }
      uVar12 = 0;
      if (0 < iVar21) {
        puVar6 = &DAT_149dfb77a;
        if (local_78 != 0) {
          puVar6 = local_80;
        }
        lVar16 = 0;
        uVar12 = 0;
        do {
          uVar11 = ((uint)(0x19 < (ushort)puVar6[lVar16] - 0x61) * 0x20 +
                   (uint)(ushort)puVar6[lVar16]) - 0x20;
          uVar4 = (uint)(uVar12 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar12 ^ uVar11) & 0xff) * 4);
          uVar12 = (ulonglong)
                   (uVar4 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar4 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
          lVar16 = lVar16 + 1;
        } while (iVar21 != (int)lVar16);
      }
      local_bc = iVar15;
      local_a0 = uVar22;
      iVar15 = FUN_140d080c0(local_a8,uVar12,&local_80);
      lVar16 = (longlong)iVar15 * 0x28 + *plVar14;
      if (iVar15 == -1) {
        lVar16 = 0;
      }
      if (lVar16 == 0) {
        local_58 = &local_70;
        local_60 = &local_80;
        FUN_145b061ee(local_a8,local_4c,&local_60,0);
      }
      else if ((longlong)local_68 != 0) {
        plVar13 = local_70 + (longlong)local_68 * 2;
        plVar14 = local_70;
        do {
          plVar7 = *(longlong **)(lVar16 + 0x10);
          lVar10 = (longlong)*(int *)(lVar16 + 0x18);
          if (lVar10 != 0) {
            local_88 = plVar7 + lVar10 * 2;
            iVar15 = (int)plVar14[1];
            plVar17 = plVar7;
LAB_1427a3325:
            if ((int)plVar17[1] == iVar15) {
              if (1 < iVar15) {
                lVar20 = 0;
                do {
                  uVar2 = *(ushort *)(*plVar17 + lVar20);
                  uVar3 = *(ushort *)(*plVar14 + lVar20);
                  if (uVar2 == uVar3) {
                    if (uVar2 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar3 | uVar2)) {
                      iVar21 = (uint)uVar2 - (uint)uVar3;
                      goto LAB_1427a3396;
                    }
                    if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                    goto code_r0x0001427a3393;
                  }
                  lVar20 = lVar20 + 2;
                } while( true );
              }
            }
            else if ((int)plVar17[1] + iVar15 != 1) goto LAB_1427a3337;
            goto LAB_1427a3307;
          }
LAB_1427a32aa:
          uVar11 = *(int *)(lVar16 + 0x18) + 1;
          *(uint *)(lVar16 + 0x18) = uVar11;
          if (*(uint *)(lVar16 + 0x1c) < uVar11) {
            FUN_1447a1bd6((undefined8 *)(lVar16 + 0x10));
            plVar7 = *(longlong **)(lVar16 + 0x10);
          }
          plVar17 = plVar7 + lVar10 * 2;
          plVar7[lVar10 * 2] = 0;
          iVar15 = (int)plVar14[1];
          _Src = (void *)*plVar14;
          *(int *)(plVar7 + lVar10 * 2 + 1) = iVar15;
          if ((longlong)iVar15 == 0) {
            *(undefined4 *)((longlong)plVar17 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(plVar17,iVar15,0);
            memcpy((void *)*plVar17,_Src,(longlong)iVar15 * 2);
          }
LAB_1427a3307:
          plVar14 = plVar14 + 2;
        } while (plVar14 != plVar13);
      }
      FUN_1447a1747(local_70,local_68);
      if (local_70 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar12 = local_90;
      puVar5 = local_98;
      uVar22 = local_a0;
      iVar15 = local_bc;
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar19 = local_c0 & ~(uint)uVar22;
      puVar18 = (uint *)local_b0[4];
      if ((uint *)local_b0[4] == (uint *)0x0) {
        puVar18 = puVar5;
      }
      uVar11 = *(uint *)(local_b0 + 5);
      iVar21 = (int)uVar12;
      lVar16 = (longlong)iVar21;
      uVar4 = puVar18[lVar16] & uVar19;
      if (uVar4 == 0) {
        iVar8 = uVar11 + 0x1e;
        if (-1 < (int)(uVar11 - 1)) {
          iVar8 = uVar11 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar21) {
          iVar9 = iVar21;
        }
        if (iVar21 < iVar8) {
          lVar10 = 0;
          do {
            uVar4 = puVar18[lVar16 + lVar10 + 1];
            if (uVar4 != 0) {
              uVar12 = (ulonglong)(iVar21 + (int)lVar10 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1427a34aa;
            }
            iVar15 = iVar15 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar9 - lVar16 != lVar10);
          uVar19 = 0xffffffff;
          iVar21 = iVar9;
        }
        uVar12 = (ulonglong)(iVar21 + 1);
        uVar22 = local_a0;
        uVar4 = uVar11;
      }
      else {
LAB_1427a34aa:
        uVar22 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar22 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar4 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar11 <= (int)uVar4) {
          uVar4 = uVar11;
        }
      }
    } while (uVar4 != (uint)local_b8);
  }
LAB_1427a314a:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001427a3393:
  iVar21 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_1427a3396:
  if (iVar21 == 0) goto LAB_1427a3307;
LAB_1427a3337:
  plVar17 = plVar17 + 2;
  if (plVar17 == local_88) goto LAB_1427a32aa;
  goto LAB_1427a3325;
}



// FUNCTION 1427a3516 FUN_1427a3516 body=2812 status=ok
// SIG undefined FUN_1427a3516(void)

void FUN_1427a3516(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined7 uVar11;
  undefined4 *puVar9;
  uint *puVar10;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_248 [32];
  uint *local_228;
  uint *local_220;
  undefined4 local_214;
  undefined8 *local_210;
  undefined8 *local_208;
  int *local_200;
  byte *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  RTL_SRWLOCK local_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  ulonglong uStack_1c0;
  RTL_SRWLOCK *local_1b0;
  undefined8 local_1a8;
  undefined8 **local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  uint local_188;
  longlong *local_180;
  uint local_178;
  undefined4 uStack_174;
  undefined1 local_169;
  uint local_168;
  undefined1 local_164 [7];
  undefined1 local_15d;
  uint local_15c;
  longlong *local_158 [2];
  longlong *local_148;
  float local_138;
  float local_134;
  float local_130;
  char local_11c;
  longlong *local_f8;
  int local_f0;
  undefined1 local_ec;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1c8 = (undefined8 *)0x0;
  uStack_1c0 = 1;
  local_1f0 = param_2;
  local_1e8 = param_3;
  FUN_1447a1bd6(&local_1c8,0);
  puVar1 = local_1c8;
  *local_1c8 = 0;
  iVar2 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(local_1c8 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)local_1c8 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_1c8,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  puVar10 = DAT_14c872be8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  plVar15 = DAT_14c844840;
  local_f8 = DAT_14c844840;
  if (DAT_14c844840 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
    LOCK();
    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  local_f0 = 0;
  local_228 = puVar10;
  FUN_140997f46(local_158,0x447a0000,&local_f8,1);
  FUN_140997a0e(local_158);
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  local_1d8 = 0;
  uStack_1d0 = 0;
  InitializeSRWLock(&local_1e0);
  if (0 < (int)uStack_1c0) {
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar13 + 0x308);
    local_210 = (undefined8 *)(lVar13 + 0x310);
    local_200 = (int *)(lVar13 + 0x2c8);
    local_208 = (undefined8 *)(lVar13 + 0x2c0);
    local_1f8 = (byte *)(lVar13 + 0xc60);
    do {
      fVar18 = (local_138 - local_134) - local_130;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_f8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_f0 = 0;
      FUN_140997b30(local_158,fVar18);
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
      iVar2 = (int)uStack_1c0;
      if (0 < (int)uStack_1c0) {
        uVar8 = FUN_1447e0190();
        uVar11 = (undefined7)((ulonglong)uVar8 >> 8);
        if ((char)uVar8 == '\0') {
          local_214 = (undefined4)CONCAT71(uVar11,iVar2 != 1);
LAB_1427a37cf:
          iVar16 = 0;
        }
        else {
          if (iVar2 == 1) {
            local_214 = 0;
            goto LAB_1427a37cf;
          }
          iVar16 = DAT_14c8335d8;
          if (iVar2 <= DAT_14c8335d8) {
            iVar16 = iVar2;
          }
          local_214 = (undefined4)CONCAT71(uVar11,1);
        }
        iVar3 = *local_200;
        puVar4 = (undefined *)*local_208;
        if ((int)DAT_14c8c27ac < 1) {
          memset(&local_f8,0,0x82);
          local_1b0 = (RTL_SRWLOCK *)((ulonglong)local_1b0 & 0xffffffff00000000);
          local_190 = local_190 & 0xffffffff00000000;
          local_178 = 0;
          FUN_140e55932(&local_f8,&local_1b0,&local_190,&local_178);
          uVar14 = local_178;
          local_220 = &local_168;
          local_228 = &local_15c;
          FUN_1457b80ec(local_190 & 0xffffffff,local_178,local_164,&local_180);
          DAT_14c8c27ac = uVar14;
          if ((0 < (int)local_15c) && (DAT_14c8c27ac = uVar14, (int)local_15c <= (int)uVar14)) {
            DAT_14c8c27ac = local_15c;
          }
        }
        uVar17 = uStack_1d0;
        uVar14 = iVar16 + (uint)(iVar3 == 0 || puVar4 != &DAT_14c82ba00);
        if ((int)DAT_14c8c27ac <= (int)uVar14) {
          uVar14 = DAT_14c8c27ac;
        }
        if ((int)uVar14 < 2) {
          uVar14 = 1;
        }
        FUN_1417024e3(local_1d8);
        uVar7 = uStack_1d0._4_4_;
        if ((longlong)uVar17 < 0) {
          uStack_1d0 = (ulonglong)uStack_1d0._4_4_ << 0x20;
          if (uVar7 == 0) {
            uVar7 = 0;
            iVar16 = 0;
          }
          else {
            FUN_1467bc34c(&local_1d8);
            uVar7 = uStack_1d0._4_4_;
            iVar16 = (uint)uStack_1d0;
          }
        }
        else {
          iVar16 = 0;
        }
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,iVar16 + uVar14);
        if (uVar7 - iVar16 < uVar14) {
          FUN_14626976c(&local_1d8);
        }
        memset((void *)((longlong)iVar16 * 0x10 + local_1d8),0,(ulonglong)uVar14 << 4);
        local_190 = local_1d8;
        local_188 = (uint)uStack_1d0;
        local_1b0 = &local_1e0;
        local_1a8 = local_1f0;
        local_198 = local_1e8;
        local_1a0 = &local_1c8;
        bVar5 = FUN_1447e0190();
        iVar16 = 0;
        if ((((byte)local_214 & bVar5) == 1) && (iVar16 = DAT_14c8335d8, iVar2 <= DAT_14c8335d8)) {
          iVar16 = iVar2;
        }
        iVar3 = *local_200;
        puVar4 = (undefined *)*local_208;
        if ((int)DAT_14c8c27ac < 1) {
          memset(&local_f8,0,0x82);
          local_178 = 0;
          local_180 = (longlong *)((ulonglong)local_180 & 0xffffffff00000000);
          local_15c = 0;
          FUN_140e55932(&local_f8,&local_178,&local_180,&local_15c);
          uVar14 = local_15c;
          local_220 = (uint *)&local_169;
          local_228 = &local_168;
          FUN_1457b80ec((ulonglong)local_180 & 0xffffffff,local_15c,&local_15d,local_164);
          DAT_14c8c27ac = uVar14;
          if ((0 < (int)local_168) && (DAT_14c8c27ac = uVar14, (int)local_168 <= (int)uVar14)) {
            DAT_14c8c27ac = local_168;
          }
        }
        uVar14 = iVar16 + (uint)(iVar3 == 0 || puVar4 != &DAT_14c82ba00);
        if ((int)DAT_14c8c27ac <= (int)uVar14) {
          uVar14 = DAT_14c8c27ac;
        }
        if ((int)uVar14 < 2) {
          uVar14 = 1;
        }
        uVar7 = local_188;
        if ((int)uVar14 < (int)local_188) {
          uVar7 = uVar14;
        }
        if (local_188 == 0) {
          uVar7 = uVar14;
        }
        if (1 < (int)uVar7) {
          iVar16 = uVar7 - 1;
          uVar12 = 0;
          if ((*local_1f8 & 0x37) == 0) {
            uVar12 = 6;
          }
          FUN_144a85b52(&local_178,1);
          puVar10 = (uint *)*puVar1;
          if (puVar10 != (uint *)0x0) goto LAB_1427a3a56;
          do {
            uVar14 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar14 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar14 | 1;
              __tlregdtor(&LAB_1427ae0f1);
            }
            puVar9 = (undefined4 *)*local_210;
            *local_210 = 0;
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar9 = 0xffffffff;
            *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar1 = puVar9;
            FUN_140217a48(puVar1);
            puVar10 = (uint *)*puVar1;
LAB_1427a3a56:
            uVar17 = *(longlong *)(puVar10 + 0x10) + 0x3f;
            uVar14 = puVar10[0x12];
            while( true ) {
              plVar15 = (longlong *)(uVar17 & 0xffffffffffffffc0);
              if (plVar15 + 0x10 <= puVar10 + 0x4000) {
                *(longlong **)(puVar10 + 0x10) = plVar15 + 0x10;
                puVar10[0x12] = uVar14 + 1;
                *plVar15 = (longlong)&PTR_FUN_149e002e8;
                *(undefined4 *)(plVar15 + 1) = 0;
                *plVar15 = (longlong)&PTR_FUN_149e49878;
                plVar15[3] = (longlong)L"FindPluginsInDirectory.PF";
                *(undefined4 *)(plVar15 + 4) = 0;
                *(undefined4 *)(plVar15 + 5) = 0;
                *(int *)((longlong)plVar15 + 0x2c) = iVar2;
                *(undefined4 *)(plVar15 + 6) = 1;
                *(int *)((longlong)plVar15 + 0x34) = iVar2;
                plVar15[7] = (longlong)&local_190;
                plVar15[8] = (longlong)&local_1b0;
                plVar15[9] = (longlong)&local_178;
                *(undefined1 *)(plVar15 + 10) = uVar12;
                plVar15[0xb] = 0;
                plVar15[0xc] = 0;
                *(int *)((longlong)plVar15 + 0x24) = iVar2;
                *(int *)(plVar15 + 0xc) = iVar16;
                FUN_1427af676(plVar15 + 0xb);
                FUN_1427af640(plVar15[0xb],iVar16);
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                }
                local_180 = plVar15;
                FUN_1427aef20(&local_180);
                local_ec = 0;
                local_f8 = plVar15;
                local_f0 = iVar16;
                cVar6 = FUN_1427aef9e(&local_f8,1);
                if (cVar6 == '\0') {
                  (**(code **)(*(longlong *)CONCAT44(uStack_174,local_178) + 0x20))
                            ((longlong *)CONCAT44(uStack_174,local_178),0xffffffff);
                }
                FUN_1427af34a(&local_f8);
                FUN_144a75412(&local_178);
                goto LAB_1427a3bee;
              }
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
              LOCK();
              uVar7 = *puVar10;
              *puVar10 = *puVar10 + uVar14 + 1;
              UNLOCK();
              if ((uVar7 ^ uVar14) != 0xffffffff) break;
              puVar10 = (uint *)*puVar1;
              *puVar10 = 0xffffffff;
              *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              uVar17 = (longlong)puVar10 + 0x97;
              uVar14 = 0;
            }
          } while( true );
        }
        iVar16 = 0;
        do {
          FUN_1427aeddd(&local_1b0,&local_190,0,iVar16);
          iVar16 = iVar16 + 1;
        } while (iVar2 != iVar16);
      }
LAB_1427a3bee:
      iVar16 = 0;
      local_130 = (fVar18 / (float)(int)((uint)uStack_1d0 + iVar2)) * (float)iVar2;
      if ((longlong)(int)(uint)uStack_1d0 != 0) {
        lVar13 = 0;
        iVar16 = 0;
        do {
          iVar16 = iVar16 + *(int *)(local_1d8 + 8 + lVar13);
          lVar13 = lVar13 + 0x10;
        } while ((longlong)(int)(uint)uStack_1d0 * 0x10 != lVar13);
      }
      FUN_14620bf46(&local_1c8,iVar16);
      if ((longlong)(int)(uint)uStack_1d0 != 0) {
        lVar13 = (longlong)(int)(uint)uStack_1d0 << 4;
        uVar17 = local_1d8;
        do {
          FUN_1457de550(&local_1c8,uVar17);
          uVar17 = uVar17 + 0x10;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
      }
    } while (0 < (int)uStack_1c0);
  }
  FUN_1417024e3(local_1d8,uStack_1d0 & 0xffffffff);
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140997a5c(local_158);
  if (local_11c == '\x01') {
    local_11c = '\0';
  }
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x10))();
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  FUN_1447a1747(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427a4014 FUN_1427a4014 body=2150 status=ok
// SIG undefined FUN_1427a4014(void)

ulonglong FUN_1427a4014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  char *pcVar13;
  undefined2 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_598 [47];
  undefined1 local_569;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 *local_558;
  longlong local_550 [2];
  undefined8 local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  int iStack_530;
  undefined4 uStack_52c;
  undefined8 *local_528;
  undefined8 uStack_520;
  char *local_518;
  int local_510;
  int local_50c;
  longlong *local_508;
  undefined4 local_500;
  void *local_4f8;
  int local_4f0;
  undefined4 local_4ec;
  longlong local_4e8;
  undefined8 uStack_4e0;
  undefined8 *local_4d8;
  ulonglong uStack_4d0;
  undefined1 *local_4c8;
  undefined4 *local_4c0;
  void *local_4b0;
  int local_4a8;
  undefined1 local_4a0 [536];
  int local_288;
  undefined4 local_280 [2];
  undefined1 local_278 [272];
  undefined1 local_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined7 uStack_154;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_598;
  local_4d8 = (undefined8 *)0x0;
  uStack_4d0 = 0;
  local_4c0 = local_280;
  local_4c8 = &LAB_142784330;
  local_568 = param_2;
  uVar6 = FUN_1427819a4();
  uVar16 = (ulonglong)uVar6;
  if ((char)uVar6 != '\0') {
    local_4e8 = 0;
    uStack_4e0 = 0;
    if ((longlong)(int)uStack_4d0 != 0) {
      local_558 = local_4d8 + (longlong)(int)uStack_4d0 * 2;
      puVar19 = local_4d8;
      do {
        local_4f8 = (void *)0x0;
        local_4f0 = *(int *)(puVar19 + 1);
        lVar17 = (longlong)local_4f0;
        pvVar1 = (void *)*puVar19;
        if (lVar17 == 0) {
          local_4ec = 0;
        }
        else {
          FUN_1446dd670(&local_4f8,local_4f0,0);
          memcpy(local_4f8,pvVar1,lVar17 * 2);
        }
        FUN_1401ae5e4(&local_4f8);
        local_280[0] = 0;
        memset(local_278,0,0x110);
        local_168 = 2;
        local_160 = 0;
        local_128 = 0;
        local_120 = 0;
        local_15c = 0;
        uStack_158 = 0;
        uStack_154 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_11c = 0xffffffff00000080;
        local_114 = 0;
        local_108 = 0;
        local_100 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_cc = 0xffffffff00000080;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_508 = DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*DAT_14c844840 + 8))();
          }
        }
        local_500 = 0;
        cVar4 = FUN_1468469fc(local_280);
        if (cVar4 != '\0') {
          uVar10 = FUN_140d6ac5a();
          FUN_140056680(&local_88,uVar10);
          bVar5 = FUN_140807eae(&local_4f8,&local_88);
          FUN_140b844aa(&local_4c8,&local_4f8,local_280,(uint)(bVar5 ^ 1) * 2);
          if (local_88 != (char *)0x0) {
            FUN_1400020a8();
          }
          uVar2 = uStack_4e0;
          if (local_288 != 4) {
            local_569 = (undefined1)uVar16;
            lVar17 = (longlong)(int)uStack_4e0;
            uVar6 = (int)uStack_4e0 + 1;
            uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar6);
            local_560 = param_3;
            if (uStack_4e0._4_4_ < uVar6) {
              FUN_1447a1bd6(&local_4e8,uVar2 & 0xffffffff);
            }
            pvVar1 = local_4b0;
            lVar17 = lVar17 * 0x10;
            puVar18 = (undefined8 *)(local_4e8 + lVar17);
            *(undefined8 *)(local_4e8 + lVar17) = 0;
            lVar15 = (longlong)local_4a8;
            *(int *)(local_4e8 + 8 + lVar17) = local_4a8;
            if (lVar15 == 0) {
              *(undefined4 *)((longlong)puVar18 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar18,local_4a8,0);
              memcpy((void *)*puVar18,pvVar1,lVar15 * 2);
            }
            FUN_140bee914(&local_88,local_4a0);
            uVar10 = local_568;
            iVar8 = (int)uStack_80;
            iVar7 = ((int)uStack_80 == 0) + 8;
            local_518 = local_88;
            local_88 = (char *)0x0;
            local_510 = (int)uStack_80;
            iVar3 = uStack_80._4_4_;
            local_50c = uStack_80._4_4_;
            uStack_80 = 0;
            iVar12 = iVar7 + iVar8;
            if (iVar12 < iVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar7);
            }
            if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar12);
            }
            if (iVar3 < iVar12) {
              FUN_1446f8c06(&local_518);
            }
            FUN_1401aebe8(&local_518,L"Config/",7);
            if (local_88 != (char *)0x0) {
              FUN_1400020a8();
            }
            local_528 = (undefined8 *)0x0;
            uStack_520 = 0;
            plVar11 = (longlong *)FUN_14054d1d4();
            pcVar13 = "";
            if (local_510 != 0) {
              pcVar13 = local_518;
            }
            (**(code **)(*plVar11 + 0x70))(plVar11,&local_528,pcVar13,&DAT_149e27a0c);
            if ((longlong)(int)uStack_520 != 0) {
              lVar17 = (longlong)(int)uStack_520 << 4;
              puVar18 = local_528;
              do {
                FUN_140c50e9c(&local_88,puVar18,1);
                pcVar13 = "";
                if ((int)uStack_80 != 0) {
                  pcVar13 = local_88;
                }
                FUN_140056680(&local_538,pcVar13);
                if (local_88 != (char *)0x0) {
                  FUN_1400020a8();
                }
                FUN_140056680(&local_88,&DAT_149dfb77a);
                puVar14 = &DAT_149dfb77a;
                if (iStack_530 != 0) {
                  puVar14 = (undefined2 *)CONCAT44(uStack_534,local_538);
                }
                FUN_1446f470e(&local_540,puVar14,1);
                lVar15 = FUN_142777728(uVar10,local_540);
                if (local_88 != (char *)0x0) {
                  FUN_1400020a8();
                }
                if (lVar15 != 0) {
                  local_88 = local_518;
                  iVar8 = local_510 + -1;
                  if (local_510 == 0) {
                    iVar8 = 0;
                  }
                  uStack_80 = CONCAT44(uStack_80._4_4_,iVar8);
                  local_78 = *puVar18;
                  local_70 = *(int *)(puVar18 + 1) + -1;
                  if (*(int *)(puVar18 + 1) == 0) {
                    local_70 = 0;
                  }
                  FUN_140bee87a(local_550,&local_88);
                  FUN_146803dc6(lVar15,local_550);
                  if (local_550[0] != 0) {
                    FUN_1400020a8();
                  }
                }
                if (CONCAT44(uStack_534,local_538) != 0) {
                  FUN_1400020a8();
                }
                puVar18 = puVar18 + 2;
                lVar17 = lVar17 + -0x10;
              } while (lVar17 != 0);
            }
            param_3 = local_560;
            uVar16 = CONCAT71((int7)((ulonglong)uVar10 >> 8),local_569);
            if (local_15c._3_1_ != '\0') {
              FUN_140056680(&local_88,local_560);
              uVar10 = FUN_141348652(local_568,&local_88);
              if (local_88 != (char *)0x0) {
                FUN_1400020a8();
              }
              FUN_14129eb64(&local_4c8,&local_538);
              cVar4 = FUN_1401aeb9c(&local_538);
              if (cVar4 == '\0') {
                plVar11 = (longlong *)FUN_14054d1d4();
                puVar14 = &DAT_149dfb77a;
                if (iStack_530 != 0) {
                  puVar14 = (undefined2 *)CONCAT44(uStack_534,local_538);
                }
                (**(code **)(*plVar11 + 0xf0))(plVar11,&local_88,puVar14);
                if (CONCAT44(uStack_534,local_538) != 0) {
                  FUN_1400020a8();
                }
                local_538 = (undefined4)local_88;
                uStack_534 = local_88._4_4_;
                iStack_530 = (int)uStack_80;
                uStack_52c = uStack_80._4_4_;
              }
              local_88 = "Paths";
              uStack_80 = CONCAT35(uStack_80._5_3_,5);
              uVar9 = FUN_14001a6c0(&local_88,1);
              FUN_140de6e52(uVar10,L"Core.System",uVar9,&local_538);
              if (CONCAT44(uStack_534,local_538) != 0) {
                FUN_1400020a8();
              }
            }
            FUN_1447a1747(local_528);
            if (local_528 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (local_518 != (char *)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_140a49aca(&local_4c8);
        }
        if (local_508 != (longlong *)0x0) {
          (**(code **)(*local_508 + 0x10))();
        }
        FUN_140a49b34(local_280);
        if (local_4f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar19 = puVar19 + 2;
      } while (puVar19 != local_558);
    }
    FUN_140056680(&local_4c8,param_3);
    uVar10 = FUN_141348652(local_568,&local_4c8);
    if (local_4c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1468034b4(uVar10,L"BinaryConfig",L"BinaryConfigPlugins",&local_4e8);
    FUN_1447a1747(local_4e8,uStack_4e0 & 0xffffffff);
    if (local_4e8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_4d8,uStack_4d0 & 0xffffffff);
  if (local_4d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427a487c FUN_1427a487c body=9842 status=ok
// SIG undefined FUN_1427a487c(void)

ulonglong FUN_1427a487c(PRTL_CRITICAL_SECTION_DEBUG param_1)

{
  DWORD *pDVar1;
  longlong *plVar2;
  _LIST_ENTRY **pp_Var3;
  int *piVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  WORD *pWVar9;
  int iVar23;
  char cVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar24;
  uint uVar14;
  longlong *plVar15;
  longlong **pplVar16;
  _LIST_ENTRY *p_Var17;
  undefined1 *puVar18;
  uint *puVar19;
  _LIST_ENTRY *p_Var20;
  _LIST_ENTRY **pp_Var21;
  undefined8 uVar22;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  longlong lVar29;
  byte bVar31;
  uint uVar30;
  uint uVar32;
  PRTL_CRITICAL_SECTION_DEBUG p_Var33;
  longlong *plVar34;
  longlong lVar35;
  undefined2 *puVar36;
  PRTL_CRITICAL_SECTION_DEBUG p_Var37;
  _RTL_CRITICAL_SECTION **pp_Var38;
  uint uVar39;
  longlong **pplVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  undefined1 auVar44 [8];
  ulonglong uVar45;
  undefined1 auStack_578 [32];
  undefined8 *local_558;
  undefined4 local_550;
  longlong *local_548;
  PRTL_CRITICAL_SECTION_DEBUG local_540;
  byte local_531;
  _RTL_CRITICAL_SECTION **local_530;
  _LIST_ENTRY *local_528;
  _LIST_ENTRY *local_520;
  int local_514;
  ulonglong local_510;
  DWORD *local_508;
  _RTL_CRITICAL_SECTION **local_500;
  longlong local_4f8;
  undefined4 local_4f0;
  longlong local_4e8;
  ulonglong uStack_4e0;
  longlong *local_4d8;
  undefined8 uStack_4d0;
  longlong *local_4c8;
  ulonglong uStack_4c0;
  longlong local_4b8;
  ulonglong uStack_4b0;
  code *local_4a8;
  longlong ***local_4a0;
  longlong local_498;
  undefined4 local_490;
  longlong **local_488;
  longlong *plStack_480;
  _RTL_CRITICAL_SECTION *local_478;
  _RTL_CRITICAL_SECTION *local_470;
  longlong *local_468;
  longlong *local_460;
  longlong **local_458;
  PRTL_CRITICAL_SECTION_DEBUG local_450;
  longlong **local_3a8;
  longlong local_3a0;
  longlong *local_2e8;
  ulonglong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  longlong local_228;
  ulonglong uStack_220;
  uint local_218 [4];
  uint *local_208;
  int local_200;
  uint local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  _RTL_CRITICAL_SECTION local_1d8;
  _RTL_CRITICAL_SECTION local_1b0;
  undefined1 local_188 [8];
  longlong *plStack_180;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_578;
  iVar13._0_2_ = param_1[2].Type;
  iVar13._2_2_ = param_1[2].CreatorBackTraceIndex;
  iVar23._0_2_ = param_1[2].CreatorBackTraceIndexHigh;
  iVar23._2_2_ = param_1[2].SpareWORD;
  if (iVar13 <= iVar23) {
    *(undefined1 *)&param_1[6].CriticalSection = 1;
    uVar45 = CONCAT71((uint7)(uint3)((uint)iVar13 >> 8),1);
    goto LAB_1427a48bd;
  }
  *(undefined1 *)&param_1[6].CriticalSection = 0;
  local_540 = param_1;
  plVar15 = (longlong *)FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872ce8);
  if (plVar15 != (longlong *)0x0) {
    FUN_140056680(&local_488);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    uVar45 = 0;
    iVar23 = (int)plStack_480 + -1;
    if ((int)plStack_480 == 0) {
      iVar23 = 0;
    }
    if (0 < iVar23) {
      pplVar16 = local_488;
      if ((int)plStack_480 == 0) {
        pplVar16 = (longlong **)&DAT_149dfb77a;
      }
      lVar35 = 0;
      uVar45 = 0;
      do {
        uVar5 = *(ushort *)((longlong)pplVar16 + lVar35 * 2);
        uVar30 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
        uVar39 = (uint)(uVar45 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar45 ^ uVar30) & 0xff) * 4);
        uVar45 = (ulonglong)
                 (uVar39 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar39 & 0xff ^ uVar30 >> 8 & 0xff) * 4));
        lVar35 = lVar35 + 1;
      } while (iVar23 != (int)lVar35);
    }
    iVar23 = FUN_14052bbf0(plVar15,uVar45,&local_488);
    if (iVar23 == -1) {
      lVar35 = 0;
    }
    else {
      lVar35 = (longlong)iVar23 * 0xc0 + *plVar15;
    }
    lVar43 = lVar35 + 0x10;
    if (lVar35 == 0) {
      lVar43 = 0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (local_488 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    if (lVar43 != 0) {
      local_2e8 = (longlong *)0x0;
      uStack_2e0 = 0;
      local_488 = (longlong **)0x149e46f7c;
      plStack_480 = (longlong *)CONCAT35(plStack_480._5_3_,5);
      uVar12 = FUN_14001a6c0(&local_488,1);
      FUN_14105accc(lVar43,uVar12,&local_2e8);
      if (0 < (int)uStack_2e0) {
        lVar35 = 0;
        lVar43 = 0;
        do {
          cVar10 = FUN_1401aeb9c((longlong)local_2e8 + lVar35);
          uVar22 = DAT_14c872ce0;
          if (cVar10 == '\0') {
            iVar23 = *(int *)((longlong)local_2e8 + lVar35 + 8);
            iVar13 = iVar23 + -1;
            if (iVar23 == 0) {
              iVar13 = 0;
            }
            FUN_1446f82e2(&local_488,iVar13,*(undefined8 *)((longlong)local_2e8 + lVar35),1);
            FUN_14622b954(uVar22,L"Paths",local_488);
          }
          lVar43 = lVar43 + 1;
          lVar35 = lVar35 + 0x10;
        } while (lVar43 < (int)uStack_2e0);
      }
      FUN_1447a1747(local_2e8);
      if (local_2e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_138 = 0;
  local_130 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_12c = 0xffffffff00000080;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  local_1d8.DebugInfo = local_540;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  p_Var33 = local_540;
  pDVar1 = &local_540[1].Flags;
  cVar10 = FUN_14054d46e(&DAT_14c846b20,L"EnableAllPlugins");
  *(char *)((longlong)&p_Var33[6].CriticalSection + 1) = cVar10;
  local_188 = (undefined1  [8])0x0;
  plStack_180 = (longlong *)0x0;
  local_508 = pDVar1;
  if (cVar10 == '\0') {
    FUN_1427a6ef0(&local_1d8,&local_488,L"EnablePlugins=");
  }
  else {
    FUN_140e83cb0(pDVar1,&local_488);
  }
  FUN_1410e5bda(local_188,&local_488);
  FUN_1447a1747(local_488,(ulonglong)plStack_480 & 0xffffffff);
  if (local_488 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((int)plStack_180 < 1) {
LAB_1427a5094:
    local_2e8 = (longlong *)0x0;
    uStack_2e0 = 0;
    FUN_1427a6ef0(&local_1d8,&local_488,L"DisablePlugins=");
    FUN_1410e5bda(&local_2e8,&local_488);
    FUN_1447a1747(local_488,(ulonglong)plStack_480 & 0xffffffff);
    if (local_488 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    uVar45 = 0;
    if ((longlong)(int)uStack_2e0 == 0) {
      bVar8 = false;
    }
    else {
      plVar34 = local_2e8 + (longlong)(int)uStack_2e0 * 2;
      plVar15 = local_2e8;
      do {
        iVar23 = (int)plVar15[1];
        iVar13 = iVar23 + -1;
        if (iVar23 == 0) {
          iVar13 = 0;
        }
        uVar30 = 0;
        if (0 < iVar13) {
          puVar36 = &DAT_149dfb77a;
          if (iVar23 != 0) {
            puVar36 = (undefined2 *)*plVar15;
          }
          lVar35 = 0;
          uVar30 = 0;
          do {
            uVar39 = ((uint)(0x19 < (ushort)puVar36[lVar35] - 0x61) * 0x20 +
                     (uint)(ushort)puVar36[lVar35]) - 0x20;
            uVar30 = uVar30 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar30 ^ uVar39) & 0xff) * 4);
            uVar30 = uVar30 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ uVar39 >> 8 & 0xff) * 4)
            ;
            lVar35 = lVar35 + 1;
          } while (iVar13 != (int)lVar35);
        }
        if ((int)uStack_100 != local_d4) {
          puVar18 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar18 = local_d0;
          }
          iVar13 = *(int *)(puVar18 + (ulonglong)(local_c0 - 1U & uVar30) * 4);
          if (iVar13 != -1) {
LAB_1427a51e3:
            lVar35 = (longlong)iVar13;
            iVar13 = *(int *)(local_108 + 8 + lVar35 * 0x18);
            if (iVar13 == iVar23) {
              if (1 < iVar23) {
                lVar43 = 0;
                do {
                  uVar5 = *(ushort *)(*(longlong *)(local_108 + lVar35 * 0x18) + lVar43);
                  uVar6 = *(ushort *)(*plVar15 + lVar43);
                  if (uVar5 == uVar6) {
                    if (uVar5 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar6 | uVar5)) {
                      iVar13 = (uint)uVar5 - (uint)uVar6;
                      goto LAB_1427a526c;
                    }
                    if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                    goto code_r0x0001427a5269;
                  }
                  lVar43 = lVar43 + 2;
                } while( true );
              }
            }
            else if (iVar13 + iVar23 != 1) goto LAB_1427a5201;
            goto LAB_1427a52c3;
          }
        }
LAB_1427a527b:
        FUN_1404800ec(&local_488,plVar15,0);
        cVar10 = FUN_1427a75a8(local_540,&local_488,&local_b8);
        FUN_140a49ea0(&local_488);
        if (cVar10 == '\0') {
          bVar8 = true;
          goto LAB_1427a52d9;
        }
        FUN_14482b35e(&local_108,&local_488,plVar15);
LAB_1427a52c3:
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar34);
      bVar8 = false;
LAB_1427a52d9:
      uVar45 = uStack_2e0 & 0xffffffff;
    }
    FUN_1447a1747(local_2e8,uVar45);
    if (local_2e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1427a6ef0(&local_1d8,&local_1b0,L"ExceptPlugins=");
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    uVar11 = FUN_14054d46e(&DAT_14c846b20,L"ExceptRestrictedPlugins");
    local_530 = (_RTL_CRITICAL_SECTION **)CONCAT71(local_530._1_7_,uVar11);
    lVar35 = (longlong)(int)plStack_180;
    bVar7 = true;
    if (lVar35 != 0) {
      pWVar9 = (WORD *)local_188;
      auVar44 = local_188;
      do {
        iVar23 = *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)auVar44)->CriticalSection;
        iVar13 = iVar23 + -1;
        if (iVar23 == 0) {
          iVar13 = 0;
        }
        uVar30 = 0;
        if (0 < iVar13) {
          puVar36 = &DAT_149dfb77a;
          if (iVar23 != 0) {
            puVar36 = *(undefined2 **)auVar44;
          }
          lVar43 = 0;
          uVar30 = 0;
          do {
            uVar39 = ((uint)(0x19 < (ushort)puVar36[lVar43] - 0x61) * 0x20 +
                     (uint)(ushort)puVar36[lVar43]) - 0x20;
            uVar30 = uVar30 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar30 ^ uVar39) & 0xff) * 4);
            bVar31 = (byte)(uVar39 >> 8);
            p_Var33 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)bVar31;
            uVar30 = uVar30 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar30 & 0xff ^ (uint)bVar31) * 4);
            lVar43 = lVar43 + 1;
          } while (iVar13 != (int)lVar43);
        }
        if ((int)uStack_100 != local_d4) {
          puVar18 = local_c8;
          if (local_c8 == (undefined1 *)0x0) {
            puVar18 = local_d0;
          }
          iVar24 = *(int *)(puVar18 + (ulonglong)(local_c0 - 1U & uVar30) * 4);
          if (iVar24 != -1) {
LAB_1427a4dc3:
            lVar43 = (longlong)iVar24;
            iVar24 = *(int *)(local_108 + 8 + lVar43 * 0x18);
            if (iVar24 == iVar23) {
              if (1 < iVar23) {
                p_Var33 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                do {
                  uVar5 = *(ushort *)
                           ((longlong)&p_Var33->Type + *(longlong *)(local_108 + lVar43 * 0x18));
                  uVar6 = *(ushort *)((longlong)&p_Var33->Type + *(longlong *)auVar44);
                  if (uVar5 == uVar6) {
                    if (uVar5 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar6 | uVar5)) {
                      iVar24 = (uint)uVar5 - (uint)uVar6;
                      goto LAB_1427a4e50;
                    }
                    if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                    goto code_r0x0001427a4e4d;
                  }
                  p_Var33 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var33->CreatorBackTraceIndex;
                } while( true );
              }
            }
            else if (iVar24 + iVar23 != 1) goto LAB_1427a4de1;
            goto LAB_1427a4fab;
          }
        }
LAB_1427a4e66:
        if ((longlong)local_1b0.LockCount != 0) {
          p_Var37 = local_1b0.DebugInfo;
LAB_1427a4fcc:
          if (*(int *)&p_Var37->CriticalSection == iVar23) {
            if (1 < iVar23) {
              p_Var33 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              do {
                uVar5 = *(ushort *)((longlong)&p_Var33->Type + *(longlong *)p_Var37);
                uVar6 = *(ushort *)((longlong)&p_Var33->Type + *(longlong *)auVar44);
                if (uVar5 == uVar6) {
                  if (uVar5 == 0) break;
                }
                else {
                  if (0x7f < (uVar6 | uVar5)) {
                    iVar24 = (uint)uVar5 - (uint)uVar6;
                    goto LAB_1427a5043;
                  }
                  if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                  goto code_r0x0001427a5040;
                }
                p_Var33 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var33->CreatorBackTraceIndex;
              } while( true );
            }
          }
          else if (*(int *)&p_Var37->CriticalSection + iVar23 != 1) goto LAB_1427a4fde;
          goto LAB_1427a4fab;
        }
LAB_1427a4e77:
        if ((char)local_530 == '\0') {
LAB_1427a4f52:
          FUN_1404800ec(&local_488,auVar44,1);
          p_Var33 = local_540;
          cVar10 = FUN_1427a75a8(local_540,&local_488,&local_b8);
          FUN_140a49ea0(&local_488);
          if (cVar10 == '\0') {
            if (*(char *)((longlong)&p_Var33[6].CriticalSection + 1) == '\0') {
              bVar7 = false;
              goto LAB_1427a5060;
            }
          }
          else {
            FUN_14482b35e(&local_108,&local_488,auVar44);
          }
        }
        else {
          local_2e8 = *(longlong **)auVar44;
          uStack_2e0 = CONCAT44(uStack_2e0._4_4_,iVar13);
          FUN_14143cec0(local_540,&local_488,&local_2e8);
          pplVar16 = local_488;
          if (local_488 != (longlong **)0x0) {
            (*(code *)(*local_488)[4])(local_488,&local_228);
            local_550 = 0xffffffff;
            local_558 = (undefined8 *)((ulonglong)local_558 & 0xffffffff00000000);
            iVar23 = FUN_1447ee042(&local_228,L"/Restricted/",0xc);
            p_Var33 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)(iVar23 != -1);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
          }
          plVar15 = plStack_480;
          if (plStack_480 != (longlong *)0x0) {
            LOCK();
            plVar34 = plStack_480 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plStack_480)(plStack_480);
              LOCK();
              piVar4 = (int *)((longlong)plVar15 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          if (pplVar16 != (longlong **)0x0 && ((ulonglong)p_Var33 & 1) == 0) goto LAB_1427a4f52;
        }
LAB_1427a4fab:
        auVar44 = (undefined1  [8])&((PRTL_CRITICAL_SECTION_DEBUG)auVar44)->ProcessLocksList;
      } while (auVar44 != (undefined1  [8])(pWVar9 + lVar35 * 8));
      bVar7 = true;
    }
LAB_1427a5060:
    FUN_1447a1747(local_1b0.DebugInfo,local_1b0.LockCount);
    if (local_1b0.DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_1400020a8();
    }
    bVar8 = true;
    if (bVar7) goto LAB_1427a5094;
  }
  FUN_1447a1747(local_188,(ulonglong)plStack_180 & 0xffffffff);
  if (local_188 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
  if (bVar8) {
LAB_1427a5a53:
    bVar7 = false;
  }
  else {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar10 = FUN_14054d46e(&DAT_14c846b20,L"NoEnginePlugins");
    if (cVar10 == '\0') {
      FUN_1447a1747(0,0);
      FUN_1447a1747(0,0);
      plVar15 = (longlong *)FUN_1427a267a();
      lVar35 = (**(code **)(*plVar15 + 8))(plVar15);
      local_531 = 1;
      if (lVar35 != 0) {
        local_531 = *(byte *)(lVar35 + 0x111);
        local_488 = (longlong **)0x0;
        iVar23 = *(int *)(lVar35 + 0x50);
        uVar22 = *(undefined8 *)(lVar35 + 0x48);
        plStack_480 = (longlong *)CONCAT44(plStack_480._4_4_,iVar23);
        if (iVar23 == 0) {
          plStack_480 = (longlong *)0x0;
        }
        else {
          FUN_140b85908(&local_488,iVar23,0);
          FUN_140b84cc6(local_488,uVar22,iVar23);
        }
        if (*(int *)(lVar35 + 0x30) == 0) {
          puVar36 = &DAT_149dfb77a;
        }
        else {
          puVar36 = *(undefined2 **)(lVar35 + 0x28);
        }
        FUN_140002266(&local_2e8,L"Enabled plugins in .uproject for %s",puVar36);
        bVar7 = true;
        if ((longlong)(int)plStack_480 != 0) {
          pplVar40 = local_488 + (longlong)(int)plStack_480 * 0x17;
          pplVar16 = local_488;
          do {
            iVar23 = *(int *)(pplVar16 + 1);
            iVar13 = iVar23 + -1;
            if (iVar23 == 0) {
              iVar13 = 0;
            }
            uVar30 = 0;
            if (0 < iVar13) {
              plVar15 = (longlong *)&DAT_149dfb77a;
              if (iVar23 != 0) {
                plVar15 = *pplVar16;
              }
              lVar35 = 0;
              uVar30 = 0;
              do {
                uVar5 = *(ushort *)((longlong)plVar15 + lVar35 * 2);
                uVar39 = ((uint)uVar5 + (uint)(0x19 < uVar5 - 0x61) * 0x20) - 0x20;
                uVar30 = uVar30 >> 8 ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar30 ^ uVar39) & 0xff) * 4);
                uVar30 = uVar30 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar30 & 0xff ^ uVar39 >> 8 & 0xff) * 4);
                lVar35 = lVar35 + 1;
              } while (iVar13 != (int)lVar35);
            }
            if ((int)uStack_100 != local_d4) {
              puVar18 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar18 = local_d0;
              }
              iVar13 = *(int *)(puVar18 + (ulonglong)(local_c0 - 1U & uVar30) * 4);
              if (iVar13 != -1) {
LAB_1427a5502:
                lVar35 = (longlong)iVar13;
                iVar13 = *(int *)(local_108 + 8 + lVar35 * 0x18);
                if (iVar13 == iVar23) {
                  if (1 < iVar23) {
                    lVar43 = 0;
                    do {
                      uVar5 = *(ushort *)(*(longlong *)(local_108 + lVar35 * 0x18) + lVar43);
                      uVar6 = *(ushort *)((longlong)*pplVar16 + lVar43);
                      if (uVar5 == uVar6) {
                        if (uVar5 == 0) break;
                      }
                      else {
                        if (0x7f < (uVar6 | uVar5)) {
                          iVar13 = (uint)uVar5 - (uint)uVar6;
                          goto LAB_1427a5588;
                        }
                        if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                        goto code_r0x0001427a5585;
                      }
                      lVar43 = lVar43 + 2;
                    } while( true );
                  }
                }
                else if (iVar13 + iVar23 != 1) goto LAB_1427a551e;
                goto LAB_1427a55cb;
              }
            }
LAB_1427a5597:
            cVar10 = FUN_1427a75a8(local_540,pplVar16,&local_b8);
            if (cVar10 == '\0') {
              bVar7 = false;
              goto LAB_1427a55e2;
            }
            FUN_14482b35e(&local_108,&local_228,pplVar16);
LAB_1427a55cb:
            pplVar16 = pplVar16 + 0x17;
          } while (pplVar16 != pplVar40);
          bVar7 = true;
        }
LAB_1427a55e2:
        if (local_2e8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_140a49df3(local_488,(ulonglong)plStack_480 & 0xffffffff);
        if (local_488 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        if (!bVar7) goto LAB_1427a5a53;
        local_531 = local_531 ^ 1;
      }
      FUN_140002266(&local_2e8,L".uplugin files that are enabled by default");
      local_520 = (_LIST_ENTRY *)&local_540[2].CriticalSection;
      uVar30 = local_540[2].EntryCount;
      uVar41 = 1;
      uVar45 = 0;
      pp_Var38 = (_RTL_CRITICAL_SECTION **)0x0;
      uVar39 = 0;
      if (uVar30 != 0) {
        p_Var17 = local_540[2].ProcessLocksList.Blink;
        if (p_Var17 == (_LIST_ENTRY *)0x0) {
          p_Var17 = local_520;
        }
        uVar39 = *(uint *)&p_Var17->Flink;
        if (uVar39 == 0) {
          iVar23 = uVar30 + 0x1e;
          if (-1 < (int)(uVar30 - 1)) {
            iVar23 = uVar30 - 1;
          }
          uVar45 = 0;
          uVar41 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar41 = 0;
          }
          pp_Var38 = (_RTL_CRITICAL_SECTION **)0x0;
          do {
            if (uVar41 == uVar45) goto LAB_1427a5a11;
            pp_Var38 = (_RTL_CRITICAL_SECTION **)(ulonglong)((int)pp_Var38 + 0x20);
            uVar39 = *(uint *)((longlong)&p_Var17->Flink + uVar45 * 4 + 4);
            uVar45 = uVar45 + 1;
          } while (uVar39 == 0);
        }
        else {
          pp_Var38 = (_RTL_CRITICAL_SECTION **)0x0;
          uVar45 = 0;
        }
        uVar41 = (ulonglong)(-uVar39 & uVar39);
        uVar42 = uVar41 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar39 = ((int)pp_Var38 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
        if ((int)uVar30 <= (int)uVar39) {
          uVar39 = uVar30;
        }
      }
      bVar7 = true;
      if (uVar39 != uVar30) {
        local_500 = &local_540->CriticalSection;
        uVar32 = 0xffffffff;
        local_528 = (_LIST_ENTRY *)(ulonglong)uVar30;
        do {
          plVar34 = (longlong *)((longlong)(int)uVar39 * 0x18 + *(longlong *)local_508);
          local_530 = pp_Var38;
          plVar15 = (longlong *)FUN_1427a1d95(local_500,plVar34);
          lVar35 = *plVar15;
          p_Var33 = local_540;
          if (*(char *)(lVar35 + 0x16e) != '\x02') {
            if (*(char *)(lVar35 + 0x16e) == '\x01') {
              if ((1 < *(uint *)(lVar35 + 0x240)) || (local_531 != 0)) {
LAB_1427a5774:
                local_514 = (int)plVar34[1];
                uVar39 = 0;
                iVar23 = local_514 + -1;
                if (local_514 == 0) {
                  iVar23 = 0;
                }
                if (0 < iVar23) {
                  puVar36 = &DAT_149dfb77a;
                  if (local_514 != 0) {
                    puVar36 = (undefined2 *)*plVar34;
                  }
                  lVar35 = 0;
                  do {
                    uVar14 = ((uint)(ushort)puVar36[lVar35] +
                             (uint)(0x19 < (ushort)puVar36[lVar35] - 0x61) * 0x20) - 0x20;
                    uVar39 = uVar39 >> 8 ^
                             *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar39 ^ uVar14) & 0xff) * 4);
                    uVar39 = uVar39 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar39 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
                    lVar35 = lVar35 + 1;
                  } while (iVar23 != (int)lVar35);
                }
                local_510 = uVar45;
                if ((int)uStack_100 != local_d4) {
                  puVar18 = local_c8;
                  if (local_c8 == (undefined1 *)0x0) {
                    puVar18 = local_d0;
                  }
                  iVar23 = *(int *)(puVar18 + (ulonglong)(local_c0 - 1U & uVar39) * 4);
                  if (iVar23 != -1) {
LAB_1427a584a:
                    lVar35 = (longlong)iVar23;
                    iVar23 = *(int *)(local_108 + 8 + lVar35 * 0x18);
                    if (iVar23 == local_514) {
                      if (1 < local_514) {
                        lVar43 = 0;
                        do {
                          uVar5 = *(ushort *)(*(longlong *)(local_108 + lVar35 * 0x18) + lVar43);
                          uVar6 = *(ushort *)(*plVar34 + lVar43);
                          if (uVar5 == uVar6) {
                            if (uVar5 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar6 | uVar5)) {
                              iVar23 = (uint)uVar5 - (uint)uVar6;
                              goto LAB_1427a58cd;
                            }
                            if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                            goto code_r0x0001427a58ca;
                          }
                          lVar43 = lVar43 + 2;
                        } while( true );
                      }
                    }
                    else if (iVar23 + local_514 != 1) goto LAB_1427a5867;
                    goto LAB_1427a594c;
                  }
                }
LAB_1427a58e9:
                FUN_1404800ec(&local_488,plVar34,CONCAT71((uint7)(uint3)((uint)local_514 >> 8),1));
                p_Var33 = local_540;
                cVar10 = FUN_1427a75a8(local_540,&local_488,&local_b8);
                FUN_140a49ea0(&local_488);
                if (cVar10 == '\0') {
                  bVar7 = false;
                  goto LAB_1427a5a18;
                }
                FUN_14482b35e(&local_108,&local_488,plVar34);
                uVar30 = p_Var33[2].EntryCount;
                uVar45 = local_510;
              }
            }
            else if (1 < *(uint *)(lVar35 + 0x240)) goto LAB_1427a5774;
          }
LAB_1427a594c:
          uVar32 = uVar32 & ~(uint)uVar41;
          p_Var17 = p_Var33[2].ProcessLocksList.Blink;
          if (p_Var17 == (_LIST_ENTRY *)0x0) {
            p_Var17 = local_520;
          }
          iVar23 = (int)uVar45;
          lVar35 = (longlong)iVar23;
          uVar39 = *(DWORD *)((longlong)&p_Var17->Flink + lVar35 * 4) & uVar32;
          pp_Var38 = local_530;
          if (uVar39 == 0) {
            iVar13 = uVar30 + 0x1e;
            if (-1 < (int)(uVar30 - 1)) {
              iVar13 = uVar30 - 1;
            }
            iVar13 = iVar13 >> 5;
            pp_Var38 = (_RTL_CRITICAL_SECTION **)(ulonglong)((int)local_530 + 0x20);
            iVar24 = iVar13;
            if (iVar13 < iVar23) {
              iVar24 = iVar23;
            }
            if (iVar23 < iVar13) {
              lVar43 = 0;
              do {
                uVar39 = *(uint *)((longlong)&p_Var17->Flink + lVar43 * 4 + lVar35 * 4 + 4);
                if (uVar39 != 0) {
                  uVar45 = (ulonglong)(iVar23 + (int)lVar43 + 1);
                  uVar32 = 0xffffffff;
                  goto LAB_1427a59c0;
                }
                pp_Var38 = (_RTL_CRITICAL_SECTION **)(ulonglong)((int)pp_Var38 + 0x20);
                lVar43 = lVar43 + 1;
              } while (iVar24 - lVar35 != lVar43);
              uVar32 = 0xffffffff;
              iVar23 = iVar24;
            }
            uVar45 = (ulonglong)(iVar23 + 1);
            uVar39 = uVar30;
          }
          else {
LAB_1427a59c0:
            uVar41 = (ulonglong)(-uVar39 & uVar39);
            uVar42 = uVar41 * 2 + 1;
            lVar35 = 0x3f;
            if (uVar42 != 0) {
              for (; uVar42 >> lVar35 == 0; lVar35 = lVar35 + -1) {
              }
            }
            uVar39 = ((int)pp_Var38 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
            if ((int)uVar30 <= (int)uVar39) {
              uVar39 = uVar30;
            }
          }
        } while (uVar39 != (uint)local_528);
LAB_1427a5a11:
        bVar7 = true;
      }
LAB_1427a5a18:
      if (local_2e8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar7) goto LAB_1427a5a53;
    }
    iVar23 = local_90;
    p_Var33 = local_540;
    if (local_90 == 0) {
      uVar45 = 0;
      uVar42 = 1;
      iVar13 = 0;
      iVar24 = 0;
    }
    else {
      puVar19 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar19 = local_a8;
      }
      uVar30 = *puVar19;
      if (uVar30 == 0) {
        iVar13 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar13 = local_90 + -1;
        }
        uVar45 = 0;
        uVar41 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar41 = uVar45;
        }
        iVar13 = 0;
        do {
          if (uVar41 == uVar45) goto LAB_1427a5ad1;
          iVar13 = iVar13 + 0x20;
          uVar30 = puVar19[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar45 = 0;
        iVar13 = 0;
      }
      uVar42 = (ulonglong)(-uVar30 & uVar30);
      uVar41 = uVar42 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      iVar24 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar24) {
        iVar24 = local_90;
      }
    }
    if (iVar24 != local_90) {
      uVar30 = 0xffffffff;
      iVar25 = local_90;
      do {
        lVar35 = *(longlong *)(local_b8 + 0x10 + (longlong)iVar24 * 0x20);
        if ((*(char *)(lVar35 + 0x178) == '\0') && (0 < *(int *)(lVar35 + 0x148))) {
          FUN_14129e938(lVar35,&local_4b8);
          p_Var33 = local_540;
          iVar25 = local_90;
        }
        *(byte *)(lVar35 + 0x244) = *(byte *)(lVar35 + 0x244) | 1;
        uVar30 = uVar30 & ~(uint)uVar42;
        puVar19 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar19 = local_a8;
        }
        iVar24 = (int)uVar45;
        lVar35 = (longlong)iVar24;
        uVar39 = puVar19[lVar35] & uVar30;
        if (uVar39 == 0) {
          iVar27 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar27 = iVar25 + -1;
          }
          iVar27 = iVar27 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar26 = iVar27;
          if (iVar27 < iVar24) {
            iVar26 = iVar24;
          }
          if (iVar24 < iVar27) {
            lVar43 = 0;
            do {
              uVar39 = puVar19[lVar35 + lVar43 + 1];
              if (uVar39 != 0) {
                uVar45 = (ulonglong)(iVar24 + (int)lVar43 + 1);
                uVar30 = 0xffffffff;
                goto LAB_1427a65d0;
              }
              iVar13 = iVar13 + 0x20;
              lVar43 = lVar43 + 1;
            } while (iVar26 - lVar35 != lVar43);
            uVar30 = 0xffffffff;
            iVar24 = iVar26;
          }
          uVar45 = (ulonglong)(iVar24 + 1);
          p_Var33 = local_540;
          iVar24 = iVar25;
        }
        else {
LAB_1427a65d0:
          uVar42 = (ulonglong)(-uVar39 & uVar39);
          uVar41 = uVar42 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          iVar24 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if (iVar25 <= iVar24) {
            iVar24 = iVar25;
          }
        }
      } while (iVar24 != iVar23);
    }
LAB_1427a5ad1:
    pp_Var3 = &p_Var33[3].ProcessLocksList.Blink;
    uVar45 = (longlong)(int)uStack_b0 - (longlong)local_84;
    uVar30 = (uint)uVar45;
    if (p_Var33[3].EntryCount - *(int *)((longlong)&p_Var33[4].ProcessLocksList.Blink + 4) < uVar30)
    {
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar45);
      }
      FUN_140e83416(pp_Var3,uVar45 & 0xffffffff);
      iVar23 = 1;
      if (3 < uVar30) {
        uVar30 = (uVar30 | 1) + 0xe;
        iVar23 = 0x1f;
        if (uVar30 != 0) {
          for (; uVar30 >> iVar23 == 0; iVar23 = iVar23 + -1) {
          }
        }
        iVar23 = 1 << ((byte)iVar23 & 0x1f);
      }
      iVar24._0_2_ = local_540[5].Type;
      iVar24._2_2_ = local_540[5].CreatorBackTraceIndex;
      if ((iVar24 == 0) || (p_Var33 = local_540, iVar24 < iVar23)) {
        local_540[5].Type = (short)iVar23;
        local_540[5].CreatorBackTraceIndex = (short)((uint)iVar23 >> 0x10);
        FUN_14482b9e8();
        p_Var33 = local_540;
      }
    }
    iVar23 = local_90;
    if (local_90 == 0) {
      uVar42 = 1;
      uVar45 = 0;
      iVar13 = 0;
      iVar24 = 0;
    }
    else {
      puVar19 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar19 = local_a8;
      }
      uVar30 = *puVar19;
      if (uVar30 == 0) {
        iVar13 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar13 = local_90 + -1;
        }
        uVar45 = 0;
        uVar41 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar41 = uVar45;
        }
        iVar13 = 0;
        do {
          if (uVar41 == uVar45) goto LAB_1427a5bd8;
          iVar13 = iVar13 + 0x20;
          uVar30 = puVar19[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar45 = 0;
        iVar13 = 0;
      }
      uVar42 = (ulonglong)(-uVar30 & uVar30);
      uVar41 = uVar42 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      iVar24 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar24) {
        iVar24 = local_90;
      }
    }
    if (iVar24 != local_90) {
      uVar30 = 0xffffffff;
      iVar25 = local_90;
      do {
        if ((*(byte *)(*(longlong *)(local_b8 + 0x10 + (longlong)iVar24 * 0x20) + 0x244) & 1) != 0)
        {
          FUN_14482b35e(pp_Var3,&local_488,local_b8 + (longlong)iVar24 * 0x20,0);
          p_Var33 = local_540;
          iVar25 = local_90;
        }
        uVar30 = uVar30 & ~(uint)uVar42;
        puVar19 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar19 = local_a8;
        }
        iVar24 = (int)uVar45;
        lVar35 = (longlong)iVar24;
        uVar39 = puVar19[lVar35] & uVar30;
        if (uVar39 == 0) {
          iVar27 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar27 = iVar25 + -1;
          }
          iVar27 = iVar27 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar26 = iVar27;
          if (iVar27 < iVar24) {
            iVar26 = iVar24;
          }
          if (iVar24 < iVar27) {
            lVar43 = 0;
            do {
              uVar39 = puVar19[lVar35 + lVar43 + 1];
              if (uVar39 != 0) {
                uVar45 = (ulonglong)(iVar24 + (int)lVar43 + 1);
                uVar30 = 0xffffffff;
                goto LAB_1427a66d6;
              }
              iVar13 = iVar13 + 0x20;
              lVar43 = lVar43 + 1;
            } while (iVar26 - lVar35 != lVar43);
            uVar30 = 0xffffffff;
            iVar24 = iVar26;
          }
          uVar45 = (ulonglong)(iVar24 + 1);
          p_Var33 = local_540;
          iVar24 = iVar25;
        }
        else {
LAB_1427a66d6:
          uVar42 = (ulonglong)(-uVar39 & uVar39);
          uVar41 = uVar42 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          iVar24 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if (iVar25 <= iVar24) {
            iVar24 = iVar25;
          }
        }
      } while (iVar24 != iVar23);
    }
LAB_1427a5bd8:
    *(undefined1 *)&p_Var33[6].CriticalSection = 1;
    local_4c8 = (longlong *)0x0;
    uStack_4c0 = 0;
    local_558 = &DAT_14c872ce8;
    iVar23 = FUN_14105aa76(DAT_14c872ce0,L"BinaryConfig",L"BinaryConfigPlugins");
    if ((iVar23 != 0) && (0 < (int)uStack_4c0)) {
      local_488 = (longlong **)0x0;
      plStack_480 = (longlong *)0x0;
      local_558 = &DAT_14c872ce8;
      FUN_14105aa76(DAT_14c872ce0,L"Core.System",L"PluginPaks");
      if ((DAT_14c872c68 != (longlong *)0x0 && DAT_14c872c70 != 0) &&
         (cVar10 = (**(code **)(*DAT_14c872c68 + 0x30))(), cVar10 != '\0')) {
        if ((longlong)(int)plStack_480 != 0) {
          pplVar40 = local_488 + (longlong)(int)plStack_480 * 2;
          local_530 = &local_540[5].CriticalSection;
          pplVar16 = local_488;
          do {
            iVar23 = *(int *)(pplVar16 + 1);
            if ((longlong)iVar23 != 0) {
              lVar35 = (longlong)iVar23 * 2;
              lVar43 = 0;
              do {
                if (*(short *)((longlong)*pplVar16 + lVar43 * 2) == 0x7c) {
                  iVar13 = (int)lVar43;
                  if (iVar13 != -1) {
                    iVar24 = iVar23 + -1;
                    if (iVar23 == 0) {
                      iVar24 = 0;
                    }
                    if (iVar13 < iVar24) {
                      iVar24 = iVar13;
                    }
                    if (iVar24 < 1) {
                      iVar24 = 0;
                    }
                    FUN_14006620a(&local_2e8,*pplVar16,iVar24);
                    iVar23 = *(int *)(pplVar16 + 1);
                    plVar15 = (longlong *)&DAT_149dfb77a;
                    if (iVar23 != 0) {
                      plVar15 = *pplVar16;
                    }
                    uVar45 = 0;
                    uVar30 = iVar23 - 1;
                    if (iVar23 == 0) {
                      uVar30 = 0;
                    }
                    uVar39 = iVar13 + 1U;
                    if ((int)uVar30 <= (int)(iVar13 + 1U)) {
                      uVar39 = uVar30;
                    }
                    uVar41 = (ulonglong)uVar39;
                    if ((int)uVar39 < 1) {
                      uVar41 = uVar45;
                    }
                    FUN_14006620a(&local_228,(undefined2 *)((longlong)plVar15 + uVar41 * 2),
                                  uVar30 - (int)uVar41);
                    uVar30 = (int)uStack_2e0 - 1;
                    if ((int)uStack_2e0 == 0) {
                      uVar30 = 0;
                    }
                    if (0 < (int)uVar30) {
                      plVar15 = (longlong *)&DAT_149dfb77a;
                      if ((int)uStack_2e0 != 0) {
                        plVar15 = local_2e8;
                      }
                      lVar35 = 0;
                      uVar45 = 0;
                      do {
                        uVar5 = *(ushort *)((longlong)plVar15 + lVar35 * 2);
                        uVar39 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
                        uVar32 = (uint)(uVar45 >> 8) ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(((uint)uVar45 ^ uVar39) & 0xff) * 4);
                        uVar45 = (ulonglong)
                                 (uVar32 >> 8 ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(uVar32 & 0xff ^ uVar39 >> 8 & 0xff) * 4));
                        lVar35 = lVar35 + 1;
                      } while (uVar30 != (uint)lVar35);
                    }
                    iVar23 = FUN_1427afe4a(&local_b8,uVar45,&local_2e8);
                    lVar35 = (longlong)iVar23 * 0x20 + local_b8;
                    if ((lVar35 != 0 && iVar23 != -1) &&
                       (p_Var33 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar35 + 0x10),
                       p_Var33 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
                      local_188 = (undefined1  [8])p_Var33;
                      plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
                      plVar15[1] = (longlong)&DAT_100000001;
                      *plVar15 = (longlong)&PTR_FUN_149e49900;
                      plVar15[2] = (longlong)p_Var33;
                      plStack_180 = plVar15;
                      FUN_146854928(local_188,p_Var33);
                      FUN_1460199f6(local_530,local_188);
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        plVar34 = plVar15 + 1;
                        *(int *)plVar34 = (int)*plVar34 + -1;
                        UNLOCK();
                        if ((int)*plVar34 == 0) {
                          (**(code **)*plVar15)();
                          LOCK();
                          piVar4 = (int *)((longlong)plVar15 + 0xc);
                          *piVar4 = *piVar4 + -1;
                          UNLOCK();
                          if (*piVar4 == 0) {
                            (**(code **)(*plVar15 + 0x10))();
                          }
                        }
                      }
                      plVar15 = DAT_14c872c68;
                      if (DAT_14c872c70 == 0) {
                        plVar15 = (longlong *)0x0;
                      }
                      (**(code **)(*plVar15 + 0x58))(plVar15,&local_228,0);
                    }
                    if (local_228 != 0) {
                      FUN_1400020a8();
                    }
                    if (local_2e8 != (longlong *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  break;
                }
                lVar43 = lVar43 + 1;
                lVar35 = lVar35 + -2;
              } while (lVar35 != 0);
            }
            pplVar16 = pplVar16 + 2;
          } while (pplVar16 != pplVar40);
        }
      }
      FUN_1447a1747(local_488,(ulonglong)plStack_480 & 0xffffffff);
      if (local_488 != (longlong **)0x0) {
        FUN_1400020a8();
      }
    }
    p_Var17 = (_LIST_ENTRY *)&local_540[2].CriticalSection;
    local_4d8 = (longlong *)0x0;
    uStack_4d0 = 0;
    uVar30 = local_540[2].EntryCount;
    if (uVar30 == 0) {
      uVar42 = 1;
      uVar45 = 0;
      iVar23 = 0;
      uVar39 = 0;
    }
    else {
      p_Var20 = local_540[2].ProcessLocksList.Blink;
      if (p_Var20 == (_LIST_ENTRY *)0x0) {
        p_Var20 = p_Var17;
      }
      uVar39 = *(uint *)&p_Var20->Flink;
      if (uVar39 == 0) {
        iVar23 = uVar30 + 0x1e;
        if (-1 < (int)(uVar30 - 1)) {
          iVar23 = uVar30 - 1;
        }
        uVar45 = 0;
        uVar41 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar41 = uVar45;
        }
        iVar23 = 0;
        do {
          if (uVar41 == uVar45) goto LAB_1427a5d5c;
          iVar23 = iVar23 + 0x20;
          uVar39 = *(uint *)((longlong)&p_Var20->Flink + uVar45 * 4 + 4);
          uVar45 = uVar45 + 1;
        } while (uVar39 == 0);
      }
      else {
        uVar45 = 0;
        iVar23 = 0;
      }
      uVar42 = (ulonglong)(-uVar39 & uVar39);
      uVar41 = uVar42 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      uVar39 = (iVar23 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      if ((int)uVar30 <= (int)uVar39) {
        uVar39 = uVar30;
      }
    }
    if (uVar39 != uVar30) {
      local_500 = &local_540->CriticalSection;
      uVar32 = 0xffffffff;
      local_528 = p_Var17;
      local_520 = (_LIST_ENTRY *)(ulonglong)uVar30;
      do {
        local_530 = (_RTL_CRITICAL_SECTION **)CONCAT44(local_530._4_4_,iVar23);
        plVar34 = (longlong *)((longlong)(int)uVar39 * 0x18 + *(longlong *)local_508);
        plVar15 = (longlong *)FUN_1427a1d95(local_500,plVar34);
        uVar41 = uStack_4d0;
        lVar35 = *plVar15;
        plVar15 = (longlong *)plVar15[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        if ((longlong)(int)uStack_4c0 != 0) {
          iVar23 = (int)plVar34[1];
          plVar28 = local_4c8;
LAB_1427a67ad:
          if ((int)plVar28[1] == iVar23) {
            if (1 < iVar23) {
              lVar43 = 0;
              do {
                uVar5 = *(ushort *)(*plVar28 + lVar43);
                uVar6 = *(ushort *)(*plVar34 + lVar43);
                p_Var17 = local_528;
                if (uVar5 == uVar6) {
                  if (uVar5 == 0) break;
                }
                else {
                  if (0x7f < (uVar6 | uVar5)) {
                    iVar13 = (uint)uVar5 - (uint)uVar6;
                    goto LAB_1427a6828;
                  }
                  if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[(uint)uVar6])
                  goto code_r0x0001427a6825;
                }
                lVar43 = lVar43 + 2;
              } while( true );
            }
          }
          else if ((int)plVar28[1] + iVar23 != 1) goto LAB_1427a67bf;
          goto LAB_1427a678c;
        }
LAB_1427a6774:
        if (((*(byte *)(lVar35 + 0x244) & 1) == 0) || (*(char *)(lVar35 + 0x178) != '\0')) {
LAB_1427a678c:
          if (plVar15 != (longlong *)0x0) goto LAB_1427a6887;
        }
        else {
          lVar43 = (longlong)(int)uStack_4d0;
          uVar30 = (int)uStack_4d0 + 1;
          uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar30);
          if (uStack_4d0._4_4_ < uVar30) {
            FUN_14170de88(&local_4d8,uVar41 & 0xffffffff);
          }
          local_4d8[lVar43 * 2] = lVar35;
          local_4d8[lVar43 * 2 + 1] = (longlong)plVar15;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
LAB_1427a6887:
            LOCK();
            plVar34 = plVar15 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar4 = (int *)((longlong)plVar15 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        uVar32 = uVar32 & ~(uint)uVar42;
        p_Var20 = local_540[2].ProcessLocksList.Blink;
        if (p_Var20 == (_LIST_ENTRY *)0x0) {
          p_Var20 = p_Var17;
        }
        uVar30 = local_540[2].EntryCount;
        iVar13 = (int)uVar45;
        lVar35 = (longlong)iVar13;
        uVar39 = *(uint *)((longlong)&p_Var20->Flink + lVar35 * 4) & uVar32;
        iVar23 = (int)local_530;
        if (uVar39 == 0) {
          iVar24 = uVar30 + 0x1e;
          if (-1 < (int)(uVar30 - 1)) {
            iVar24 = uVar30 - 1;
          }
          iVar24 = iVar24 >> 5;
          iVar23 = (int)local_530 + 0x20;
          iVar25 = iVar24;
          if (iVar24 < iVar13) {
            iVar25 = iVar13;
          }
          if (iVar13 < iVar24) {
            lVar43 = 0;
            do {
              uVar39 = *(uint *)((longlong)&p_Var20->Flink + lVar43 * 4 + lVar35 * 4 + 4);
              if (uVar39 != 0) {
                uVar45 = (ulonglong)(iVar13 + (int)lVar43 + 1);
                uVar32 = 0xffffffff;
                goto LAB_1427a692d;
              }
              iVar23 = iVar23 + 0x20;
              lVar43 = lVar43 + 1;
            } while (iVar25 - lVar35 != lVar43);
            uVar32 = 0xffffffff;
            iVar13 = iVar25;
          }
          uVar45 = (ulonglong)(iVar13 + 1);
          p_Var17 = local_528;
          uVar39 = uVar30;
        }
        else {
LAB_1427a692d:
          uVar42 = (ulonglong)(-uVar39 & uVar39);
          uVar41 = uVar42 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar39 = (iVar23 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if ((int)uVar30 <= (int)uVar39) {
            uVar39 = uVar30;
          }
        }
      } while (uVar39 != (uint)local_520);
    }
LAB_1427a5d5c:
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_558 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"Plugins",L"ConfigFilesPluginsCannotOverride",&local_4e8);
    InitializeCriticalSection((LPCRITICAL_SECTION)local_188);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)local_188,4000);
    InitializeCriticalSection(&local_1b0);
    SetCriticalSectionSpinCount(&local_1b0,4000);
    InitializeCriticalSection(&local_1d8);
    SetCriticalSectionSpinCount(&local_1d8,4000);
    local_208 = (uint *)0x0;
    local_200 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_1fc = 0x80;
    uStack_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    local_2e8 = (longlong *)CONCAT62(local_2e8._2_6_,0x101);
    local_2c0 = 0;
    local_2b8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    local_2b4 = 0xffffffff00000080;
    local_2ac = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_260 = 0;
    local_258 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_254 = 0xffffffff00000080;
    local_24c = 0;
    local_240 = 0;
    local_238 = 0;
    uVar45 = 0;
    if ((longlong)(int)uStack_4d0 != 0) {
      plVar34 = local_4d8 + (longlong)(int)uStack_4d0 * 2;
      plVar15 = local_4d8;
      do {
        lVar35 = *plVar15;
        plVar28 = (longlong *)plVar15[1];
        if (plVar28 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar28 + 1) = (int)plVar28[1] + 1;
          UNLOCK();
        }
        puVar36 = &DAT_149dfb77a;
        if (*(int *)(lVar35 + 0x20) != 0) {
          puVar36 = *(undefined2 **)(lVar35 + 0x18);
        }
        FUN_1446f470e(&local_4a8,puVar36,1);
        FUN_14170d33e(lVar35,&local_488);
        FUN_140bee914(&local_498,lVar35 + 0x28);
        local_558 = (undefined8 *)((ulonglong)local_558 & 0xffffffffffffff00);
        FUN_141142eae(local_4a8,&local_498,&local_488,0x14);
        if (local_498 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_488,(ulonglong)plStack_480 & 0xffffffff);
        if (local_488 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_140d6a6b4(&local_488);
        puVar36 = &DAT_149dfb77a;
        if (*(int *)(lVar35 + 0x20) != 0) {
          puVar36 = *(undefined2 **)(lVar35 + 0x18);
        }
        local_3a8 = &local_2e8;
        FUN_1446f470e(&local_498,puVar36,1);
        local_3a0 = local_498;
        puVar36 = &DAT_149dfb77a;
        if (*(int *)(lVar35 + 0x20) != 0) {
          puVar36 = *(undefined2 **)(lVar35 + 0x18);
        }
        FUN_141628e80(&local_488,puVar36);
        FUN_140d6b5be(&local_488);
        if (plVar28 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar28 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar28)(plVar28);
            LOCK();
            piVar4 = (int *)((longlong)plVar28 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
            }
          }
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != plVar34);
      uVar45 = uStack_4d0 & 0xffffffff;
    }
    local_478 = &local_1b0;
    plStack_480 = (longlong *)local_188;
    local_470 = &local_1d8;
    local_460 = &local_4e8;
    local_488 = &local_4d8;
    local_4a0 = &local_488;
    local_468 = &local_228;
    local_450 = local_540;
    local_548 = &local_498;
    local_498 = 0;
    local_490 = 0;
    local_4a8 = FUN_1427aff12;
    local_550 = 1;
    uVar41 = 1;
    local_458 = &local_2e8;
    FUN_1427ae281(L"ParallelFor Task",uVar45,1);
    FUN_14600bc6e(&local_2e8);
    local_1e0 = 0;
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
    uVar45 = 0;
    iVar13 = 0;
    iVar23 = 0;
    if (local_200 != 0) {
      puVar19 = local_208;
      if (local_208 == (uint *)0x0) {
        puVar19 = local_218;
      }
      uVar30 = *puVar19;
      if (uVar30 == 0) {
        iVar23 = local_200 + 0x1e;
        if (-1 < local_200 + -1) {
          iVar23 = local_200 + -1;
        }
        uVar45 = 0;
        uVar41 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar41 = uVar45;
        }
        iVar13 = 0;
        do {
          if (uVar41 == uVar45) goto LAB_1427a6261;
          iVar13 = iVar13 + 0x20;
          uVar30 = puVar19[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar45 = 0;
      }
      uVar41 = (ulonglong)(-uVar30 & uVar30);
      uVar42 = uVar41 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar42 != 0) {
        for (; uVar42 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      iVar23 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      if (local_200 <= iVar23) {
        iVar23 = local_200;
      }
    }
    if (iVar23 < local_200) {
      uVar30 = 0xffffffff;
      do {
        lVar35 = local_228;
        lVar43 = (longlong)iVar23;
        FUN_1427aea5d(*(undefined8 *)(local_228 + 0x10 + lVar43 * 0x28),
                      *(undefined4 *)(local_228 + 0x18 + lVar43 * 0x28));
        if (*(longlong *)(lVar35 + 0x10 + lVar43 * 0x28) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar35 + lVar43 * 0x28) != 0) {
          FUN_1400020a8();
        }
        uVar30 = uVar30 & ~(uint)uVar41;
        puVar19 = local_208;
        if (local_208 == (uint *)0x0) {
          puVar19 = local_218;
        }
        iVar23 = (int)uVar45;
        lVar35 = (longlong)iVar23;
        uVar39 = puVar19[lVar35] & uVar30;
        if (uVar39 == 0) {
          iVar24 = local_200 + 0x1e;
          if (-1 < local_200 + -1) {
            iVar24 = local_200 + -1;
          }
          iVar24 = iVar24 >> 5;
          iVar25 = iVar24;
          if (iVar24 < iVar23) {
            iVar25 = iVar23;
          }
          if (iVar24 <= iVar23) break;
          lVar43 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar39 = puVar19[lVar35 + lVar43 + 1];
            if (uVar39 != 0) break;
            lVar43 = lVar43 + 1;
            if (iVar25 - lVar35 == lVar43) goto LAB_1427a6261;
          }
          uVar45 = (ulonglong)(iVar23 + (int)lVar43 + 1);
          uVar30 = 0xffffffff;
        }
        uVar41 = (ulonglong)(-uVar39 & uVar39);
        uVar42 = uVar41 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar42 != 0) {
          for (; uVar42 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        iVar23 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      } while (iVar23 < local_200);
    }
LAB_1427a6261:
    uVar45 = uStack_220 >> 0x20;
    uStack_220 = uStack_220 & 0xffffffff00000000;
    if ((int)uVar45 != 0) {
      FUN_140549ad6(&local_228,0);
    }
    uStack_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_200 = 0;
    if (0x80 < local_1fc) {
      local_1fc = 0x80;
      FUN_1446efbd8(local_218,0);
    }
    if (local_208 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    DeleteCriticalSection(&local_1d8);
    DeleteCriticalSection(&local_1b0);
    DeleteCriticalSection((LPCRITICAL_SECTION)local_188);
    FUN_1447a1747(local_4e8,uStack_4e0 & 0xffffffff);
    if (local_4e8 != 0) {
      FUN_1400020a8();
    }
    FUN_140a49a56(local_4d8,uStack_4d0 & 0xffffffff);
    if (local_4d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    pp_Var3 = &(local_540->ProcessLocksList).Blink;
    iVar23 = *(int *)(local_540 + 1);
    if (iVar23 == 0) {
      uVar42 = 1;
      uVar45 = 0;
      iVar13 = 0;
      iVar24 = 0;
    }
    else {
      pp_Var21 = *(_LIST_ENTRY ***)&local_540->Flags;
      if (*(_LIST_ENTRY ***)&local_540->Flags == (_LIST_ENTRY **)0x0) {
        pp_Var21 = pp_Var3;
      }
      uVar30 = *(uint *)pp_Var21;
      if (uVar30 == 0) {
        iVar13 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar13 = iVar23 + -1;
        }
        uVar45 = 0;
        uVar41 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar41 = uVar45;
        }
        iVar13 = 0;
        do {
          if (uVar41 == uVar45) goto LAB_1427a63da;
          iVar13 = iVar13 + 0x20;
          uVar30 = *(uint *)((longlong)pp_Var21 + uVar45 * 4 + 4);
          uVar45 = uVar45 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar45 = 0;
        iVar13 = 0;
      }
      uVar42 = (ulonglong)(-uVar30 & uVar30);
      uVar41 = uVar42 * 2 + 1;
      lVar35 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
        }
      }
      iVar24 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar24) {
        iVar24 = iVar23;
      }
    }
    if (iVar24 != iVar23) {
      local_530 = &local_540[10].CriticalSection;
      local_520 = (_LIST_ENTRY *)&local_540[10].EntryCount;
      uVar30 = 0xffffffff;
      p_Var33 = local_540;
      do {
        lVar35 = *(longlong *)
                  ((longlong)p_Var33->CriticalSection[iVar24].OwningThread +
                  (longlong)(*(int *)&p_Var33->CriticalSection[iVar24].LockSemaphore + -1) * 0x10);
        if ((((*(byte *)(lVar35 + 0x244) & 1) != 0) && (*(char *)(lVar35 + 0x178) == '\0')) &&
           ((*(byte *)(lVar35 + 0x244) = *(byte *)(lVar35 + 0x244) | 2,
            *(char *)(lVar35 + 0x16f) != '\0' || (*(char *)(lVar35 + 0x170) == '\x01')))) {
          lVar43 = (longlong)*(int *)&p_Var33[10].ProcessLocksList.Flink;
          if (lVar43 != 0) {
            lVar29 = 0;
            do {
              if ((*(int *)((longlong)&(p_Var33[10].CriticalSection)->LockCount + lVar29) != 0) &&
                 (*(longlong *)((longlong)&(p_Var33[10].CriticalSection)->DebugInfo + lVar29) != 0))
              {
                FUN_146854552(local_530);
                p_Var33 = local_540;
                break;
              }
              lVar29 = lVar29 + 0x10;
            } while (lVar43 * 0x10 != lVar29);
          }
          if (((p_Var33[5].EntryCount != 0) &&
              (p_Var17 = p_Var33[5].ProcessLocksList.Blink, p_Var17 != (_LIST_ENTRY *)0x0)) &&
             (cVar10 = (*(code *)p_Var17->Flink[3].Flink)(), p_Var33 = local_540, cVar10 != '\0')) {
            FUN_14129eb64(lVar35,&local_488);
            FUN_14170d440(lVar35,&local_2e8);
            if (local_540[5].EntryCount == 0) {
              p_Var17 = (_LIST_ENTRY *)0x0;
            }
            else {
              p_Var17 = local_540[5].ProcessLocksList.Blink;
            }
            (*(code *)p_Var17->Flink[5].Blink)(p_Var17,&local_2e8,&local_488);
            if (local_2e8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            p_Var33 = local_540;
            if (local_488 != (longlong **)0x0) {
              FUN_1400020a8();
              p_Var33 = local_540;
            }
          }
          if ((longlong)(int)p_Var33[10].Flags != 0) {
            lVar43 = 0;
            do {
              if ((*(int *)(*(longlong *)&p_Var33[10].EntryCount + 8 + lVar43) != 0) &&
                 (*(longlong *)(*(longlong *)&p_Var33[10].EntryCount + lVar43) != 0)) {
                FUN_146854552(local_520,lVar35);
                p_Var33 = local_540;
                break;
              }
              lVar43 = lVar43 + 0x10;
            } while ((longlong)(int)p_Var33[10].Flags * 0x10 != lVar43);
          }
        }
        uVar30 = uVar30 & ~(uint)uVar42;
        pp_Var21 = *(_LIST_ENTRY ***)&p_Var33->Flags;
        if (*(_LIST_ENTRY ***)&p_Var33->Flags == (_LIST_ENTRY **)0x0) {
          pp_Var21 = pp_Var3;
        }
        iVar25 = *(int *)(p_Var33 + 1);
        iVar24 = (int)uVar45;
        lVar35 = (longlong)iVar24;
        uVar39 = *(uint *)((longlong)pp_Var21 + lVar35 * 4) & uVar30;
        if (uVar39 == 0) {
          iVar27 = iVar25 + 0x1e;
          if (-1 < iVar25 + -1) {
            iVar27 = iVar25 + -1;
          }
          iVar27 = iVar27 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar26 = iVar27;
          if (iVar27 < iVar24) {
            iVar26 = iVar24;
          }
          if (iVar24 < iVar27) {
            lVar43 = 0;
            do {
              uVar39 = *(uint *)((longlong)pp_Var21 + lVar43 * 4 + lVar35 * 4 + 4);
              if (uVar39 != 0) {
                uVar45 = (ulonglong)(iVar24 + (int)lVar43 + 1);
                uVar30 = 0xffffffff;
                goto LAB_1427a6b7b;
              }
              iVar13 = iVar13 + 0x20;
              lVar43 = lVar43 + 1;
            } while (iVar26 - lVar35 != lVar43);
            uVar30 = 0xffffffff;
            iVar24 = iVar26;
          }
          uVar45 = (ulonglong)(iVar24 + 1);
          p_Var33 = local_540;
          iVar24 = iVar25;
        }
        else {
LAB_1427a6b7b:
          uVar42 = (ulonglong)(-uVar39 & uVar39);
          uVar41 = uVar42 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          iVar24 = (iVar13 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if (iVar25 <= iVar24) {
            iVar24 = iVar25;
          }
        }
      } while (iVar24 != iVar23);
    }
LAB_1427a63da:
    if (0 < (int)uStack_4b0) {
      uVar22 = FUN_140008f10();
      local_4f8 = local_4b8;
      local_4f0 = (int)uStack_4b0;
      FUN_1467e81aa(uVar22);
    }
    FUN_145d323a0(local_508,0);
    FUN_1447a1747(local_4c8,uStack_4c0 & 0xffffffff);
    if (local_4c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    bVar7 = true;
  }
  local_110 = 0;
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_158);
  FUN_1447a1747(local_4b8,uStack_4b0 & 0xffffffff);
  if (local_4b8 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1461a7ede(&local_b8);
  if (bVar7) {
    uVar45 = CONCAT71((int7)((ulonglong)local_540 >> 8),*(undefined1 *)&local_540[6].CriticalSection
                     );
  }
  else {
    uVar45 = 0;
  }
LAB_1427a48bd:
  if ((local_60 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return uVar45 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001427a4e4d:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_1427a4e50:
  if (iVar24 == 0) goto LAB_1427a4fab;
LAB_1427a4de1:
  iVar24 = *(int *)(local_108 + 0x10 + lVar43 * 0x18);
  if (iVar24 == -1) goto LAB_1427a4e66;
  goto LAB_1427a4dc3;
code_r0x0001427a5040:
  iVar24 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_1427a5043:
  if (iVar24 == 0) goto LAB_1427a4fab;
LAB_1427a4fde:
  p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var37->ProcessLocksList;
  if (p_Var37 ==
      (PRTL_CRITICAL_SECTION_DEBUG)
      (&(local_1b0.DebugInfo)->Type + (longlong)local_1b0.LockCount * 8)) goto LAB_1427a4e77;
  goto LAB_1427a4fcc;
code_r0x0001427a5269:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_1427a526c:
  if (iVar13 == 0) goto LAB_1427a52c3;
LAB_1427a5201:
  iVar13 = *(int *)(local_108 + 0x10 + lVar35 * 0x18);
  if (iVar13 == -1) goto LAB_1427a527b;
  goto LAB_1427a51e3;
code_r0x0001427a5585:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_1427a5588:
  if (iVar13 == 0) goto LAB_1427a55cb;
LAB_1427a551e:
  iVar13 = *(int *)(local_108 + 0x10 + lVar35 * 0x18);
  if (iVar13 == -1) goto LAB_1427a5597;
  goto LAB_1427a5502;
code_r0x0001427a58ca:
  iVar23 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_1427a58cd:
  if (iVar23 == 0) goto LAB_1427a594c;
LAB_1427a5867:
  iVar23 = *(int *)(local_108 + 0x10 + lVar35 * 0x18);
  if (iVar23 == -1) goto LAB_1427a58e9;
  goto LAB_1427a584a;
code_r0x0001427a6825:
  iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar5] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar6];
LAB_1427a6828:
  if (iVar13 == 0) goto LAB_1427a678c;
LAB_1427a67bf:
  plVar28 = plVar28 + 2;
  if (plVar28 == local_4c8 + (longlong)(int)uStack_4c0 * 2) goto LAB_1427a6774;
  goto LAB_1427a67ad;
}



// FUNCTION 1427a6ef0 FUN_1427a6ef0 body=1719 status=ok
// SIG undefined FUN_1427a6ef0(void)

longlong * FUN_1427a6ef0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  int local_94;
  ulonglong local_90;
  uint *local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68;
  uint local_5c;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = *param_1;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = 0;
  FUN_14063337c(&DAT_14c846b20,param_3,&local_58,0);
  FUN_1403de9f2(&local_58,param_2,&DAT_149e06196);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  uVar22 = (ulonglong)(int)param_2[1];
  uStack_50._0_4_ = 0;
  if (uVar22 != 0) {
    plVar24 = (longlong *)*param_2;
    lVar23 = *plVar24;
    iVar12 = (int)plVar24[1];
    uVar20 = 0;
    local_a0 = plVar24;
    if (lVar23 + (longlong)iVar12 * 2 + -2 != lVar23 && iVar12 != 0) {
      lVar18 = 0;
      uVar20 = 0;
      do {
        uVar21 = 1L << ((byte)*(ushort *)(lVar23 + lVar18) & 0x3f) & 0x8000040000000000;
        if (0x3f < *(ushort *)(lVar23 + lVar18)) {
          uVar21 = 0;
        }
        uVar20 = uVar20 | uVar21;
        lVar18 = lVar18 + 2;
      } while ((longlong)iVar12 * 2 + -2 != lVar18);
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        uStack_50 = 1;
        FUN_1447a1bd6(&local_58,0);
        puVar1 = local_58;
        *local_58 = 0;
        iVar12 = (int)plVar24[1];
        pvVar2 = (void *)*plVar24;
        *(int *)(local_58 + 1) = iVar12;
        if ((longlong)iVar12 == 0) {
          *(undefined4 *)((longlong)local_58 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(local_58,iVar12,0);
          memcpy((void *)*puVar1,pvVar2,(longlong)iVar12 * 2);
        }
        uVar20 = CONCAT71((int7)(uVar21 >> 8),1);
      }
    }
    local_94 = 0;
    uVar21 = 0;
    plVar24 = local_a0;
    local_78 = uVar22;
    local_70 = param_2;
LAB_1427a709c:
    do {
      iVar12 = (int)uVar21;
      local_88 = (uint *)CONCAT44(local_88._4_4_,iVar12);
      local_90 = (ulonglong)iVar12;
      local_5c = iVar12 + 1U;
      if ((int)(iVar12 + 1U) < (int)(uint)uVar22) {
        local_5c = (uint)uVar22;
      }
      uVar21 = local_90 + 1;
      if ((longlong)uVar21 < (longlong)uVar22) {
        bVar3 = true;
        local_80 = CONCAT44(local_80._4_4_,(int)uVar20);
        do {
          uVar4 = uStack_50;
          lVar23 = plVar24[uVar21 * 2];
          iVar12 = (int)plVar24[uVar21 * 2 + 1];
          if (lVar23 + (longlong)iVar12 * 2 + -2 == lVar23 || iVar12 == 0) {
LAB_1427a71a0:
            if ((uVar20 & 1) != 0) {
              FUN_1447a1747(plVar24 + local_90 * 2,(int)uVar21 - (int)local_88);
              uVar20 = 0;
              iVar14 = local_94;
              iVar12 = local_94;
              if (bVar3) goto LAB_1427a709c;
              goto LAB_1427a7282;
            }
          }
          else {
            lVar18 = 0;
            uVar15 = 0;
            do {
              uVar19 = 1L << ((byte)*(ushort *)(lVar23 + lVar18) & 0x3f) & 0x8000040000000000;
              if (0x3f < *(ushort *)(lVar23 + lVar18)) {
                uVar19 = 0;
              }
              uVar15 = uVar15 | uVar19;
              lVar18 = lVar18 + 2;
            } while ((longlong)iVar12 * 2 + -2 != lVar18);
            if (uVar15 == 0) goto LAB_1427a71a0;
            lVar23 = (longlong)(int)uStack_50;
            uVar6 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
            if (uStack_50._4_4_ < uVar6) {
              FUN_1447a1bd6(&local_58,uVar4 & 0xffffffff);
            }
            puVar1 = local_58 + lVar23 * 2;
            local_58[lVar23 * 2] = 0;
            iVar12 = (int)(plVar24 + uVar21 * 2)[1];
            pvVar2 = (void *)plVar24[uVar21 * 2];
            *(int *)(local_58 + lVar23 * 2 + 1) = iVar12;
            if ((longlong)iVar12 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar1,iVar12,0);
              memcpy((void *)*puVar1,pvVar2,(longlong)iVar12 * 2);
            }
            uVar20 = local_80 & 0xffffffff;
            uVar22 = local_78;
            plVar24 = local_a0;
            if ((local_80 & 1) == 0) {
              iVar12 = (int)uVar21 - (int)local_88;
              goto LAB_1427a723f;
            }
          }
          uVar21 = uVar21 + 1;
          bVar3 = (longlong)uVar21 < (longlong)uVar22;
        } while (uVar21 != uVar22);
      }
      else {
        bVar3 = false;
      }
      uVar21 = (ulonglong)local_5c;
      iVar12 = local_5c - (int)local_88;
      if ((uVar20 & 1) == 0) {
LAB_1427a723f:
        iVar14 = local_94;
        if (local_94 != (int)local_88) {
          memmove(plVar24 + (longlong)local_94 * 2,plVar24 + local_90 * 2,(longlong)iVar12 << 4);
        }
        uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
        iVar14 = iVar14 + iVar12;
        iVar12 = local_94;
      }
      else {
        FUN_1447a1747(plVar24 + local_90 * 2,iVar12);
        uVar20 = 0;
        iVar14 = local_94;
        iVar12 = local_94;
      }
      local_94 = iVar14;
      iVar14 = local_94;
    } while (bVar3);
LAB_1427a7282:
    local_94 = iVar12;
    *(int *)(local_70 + 1) = iVar14;
    param_2 = local_70;
    if (0 < (int)uStack_50) {
      uVar6 = *(uint *)(local_68 + 0x80);
      if (uVar6 == 0) {
        uVar20 = 1;
        uVar22 = 0;
        iVar12 = 0;
        uVar7 = 0;
      }
      else {
        puVar8 = *(uint **)(local_68 + 0x78);
        if (*(uint **)(local_68 + 0x78) == (uint *)0x0) {
          puVar8 = (uint *)(local_68 + 0x68);
        }
        uVar7 = *puVar8;
        if (uVar7 == 0) {
          iVar12 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar12 = uVar6 - 1;
          }
          uVar22 = 0;
          uVar20 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar20 = uVar22;
          }
          iVar12 = 0;
          do {
            if (uVar20 == uVar22) goto LAB_1427a7534;
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar8[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar22 = 0;
          iVar12 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar21 = uVar20 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar7 = (iVar12 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar7) {
          uVar7 = uVar6;
        }
      }
      if (uVar7 != uVar6) {
        uVar17 = 0xffffffff;
        local_90 = (ulonglong)uVar6;
        local_88 = (uint *)(local_68 + 0x68);
        local_80 = uVar22;
        do {
          puVar1 = local_58;
          local_78 = CONCAT44(local_78._4_4_,uVar17);
          local_a0 = (longlong *)CONCAT44(local_a0._4_4_,iVar12);
          lVar23 = (longlong)(int)uStack_50;
          if (lVar23 != 0) {
            puVar13 = (undefined8 *)((longlong)(int)uVar7 * 0x18 + *(longlong *)(local_68 + 0x58));
            iVar12 = *(int *)(puVar13 + 1);
            iVar14 = iVar12 + -1;
            if (iVar12 == 0) {
              iVar14 = 0;
            }
            lVar18 = 0;
            do {
              iVar9 = *(int *)((longlong)puVar1 + lVar18 + 8);
              iVar10 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar10 = 0;
              }
              puVar16 = &DAT_149dfb77a;
              if (iVar9 != 0) {
                puVar16 = *(undefined2 **)((longlong)puVar1 + lVar18);
              }
              puVar11 = &DAT_149dfb77a;
              if (iVar12 != 0) {
                puVar11 = (undefined2 *)*puVar13;
              }
              cVar5 = FUN_14038a9c4(puVar11,iVar14,puVar16,iVar10);
              plVar24 = local_70;
              if (cVar5 != '\0') {
                iVar12 = (int)local_70[1];
                *(uint *)(local_70 + 1) = iVar12 + 1U;
                if (*(uint *)((longlong)local_70 + 0xc) < iVar12 + 1U) {
                  FUN_1447a1bd6(local_70,iVar12);
                }
                lVar23 = *plVar24;
                lVar18 = (longlong)iVar12 * 0x10;
                puVar1 = (undefined8 *)(lVar23 + lVar18);
                *(undefined8 *)(lVar23 + lVar18) = 0;
                iVar12 = *(int *)(puVar13 + 1);
                pvVar2 = (void *)*puVar13;
                *(int *)(lVar23 + 8 + lVar18) = iVar12;
                if ((longlong)iVar12 == 0) {
                  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(puVar1,iVar12,0);
                  memcpy((void *)*puVar1,pvVar2,(longlong)iVar12 * 2);
                }
                break;
              }
              lVar18 = lVar18 + 0x10;
            } while (lVar23 * 0x10 != lVar18);
          }
          uVar17 = (uint)local_78 & ~(uint)uVar20;
          puVar8 = *(uint **)(local_68 + 0x78);
          if (*(uint **)(local_68 + 0x78) == (uint *)0x0) {
            puVar8 = local_88;
          }
          uVar6 = *(uint *)(local_68 + 0x80);
          iVar14 = (int)local_80;
          lVar23 = (longlong)iVar14;
          uVar7 = puVar8[lVar23] & uVar17;
          iVar12 = (int)local_a0;
          if (uVar7 == 0) {
            iVar9 = uVar6 + 0x1e;
            if (-1 < (int)(uVar6 - 1)) {
              iVar9 = uVar6 - 1;
            }
            iVar9 = iVar9 >> 5;
            iVar12 = (int)local_a0 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar14) {
              iVar10 = iVar14;
            }
            if (iVar14 < iVar9) {
              lVar18 = 0;
              do {
                uVar7 = puVar8[lVar23 + lVar18 + 1];
                if (uVar7 != 0) {
                  local_80 = (ulonglong)(iVar14 + (int)lVar18 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_1427a74db;
                }
                iVar12 = iVar12 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar10 - lVar23 != lVar18);
              uVar17 = 0xffffffff;
              lVar23 = (longlong)iVar10;
            }
            local_80 = lVar23 + 1;
            uVar7 = uVar6;
          }
          else {
LAB_1427a74db:
            uVar20 = (ulonglong)(-uVar7 & uVar7);
            uVar22 = uVar20 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            uVar7 = (iVar12 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if ((int)uVar6 <= (int)uVar7) {
              uVar7 = uVar6;
            }
          }
        } while (uVar7 != (uint)local_90);
        param_2 = local_70;
      }
    }
  }
LAB_1427a7534:
  FUN_1447a1747(local_58,(int)uStack_50);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427a75a8 FUN_1427a75a8 body=386 status=ok
// SIG undefined FUN_1427a75a8(void)

undefined4 FUN_1427a75a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 *local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined4 local_58 [2];
  undefined8 *local_50;
  longlong lStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58[0] = 3;
  local_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  FUN_140056680(&local_68,L"Win64");
  FUN_1400b22c2(local_78,"OakGame");
  plVar3 = (longlong *)FUN_1427a267a();
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
  local_98 = 0;
  local_a0 = 1;
  local_a8 = 4;
  local_90 = param_1 + 8;
  local_88 = param_3;
  local_80 = local_58;
  uVar2 = FUN_1427a8258(param_2,uVar4,local_78,&local_68);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((char)uVar2 == '\0') {
    cVar1 = FUN_140b3f358();
    if (*(int *)(local_50 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*local_50;
    }
    FUN_140002266(&local_68,L"Unable to load plugin \'%s\'. Aborting.",puVar5);
    if (cVar1 != '\0') {
      puVar5 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar5 = local_68;
      }
      FUN_140033559(".\\Runtime/Projects/Private/PluginManager.cpp",0x97b,&DAT_149e0625e,puVar5);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8(local_68);
    }
  }
  if (lStack_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427a7734 FUN_1427a7734 body=2850 status=ok
// SIG undefined FUN_1427a7734(void)

undefined8
FUN_1427a7734(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,longlong **param_5
             ,undefined8 param_6,undefined8 param_7)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  longlong **pplVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined2 *puVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  longlong **pplVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auStack_268 [32];
  byte local_248;
  byte local_240;
  undefined1 local_238;
  longlong **local_230;
  longlong *local_228;
  undefined8 local_220;
  byte local_216;
  byte local_215;
  int local_214;
  ulonglong local_210;
  longlong *local_208;
  longlong **local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  ulonglong uStack_1c0;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  local_215 = 1;
  local_216 = param_4;
  local_1f0 = param_3;
  local_1e8 = param_1;
  local_1e0 = param_2;
  if (param_1 != 0) {
    local_215 = *(byte *)(param_1 + 0x111);
    local_1c8 = (longlong *)0x0;
    iVar27 = *(int *)(param_1 + 0x50);
    uVar22 = *(undefined8 *)(param_1 + 0x48);
    uStack_1c0 = CONCAT44(uStack_1c0._4_4_,iVar27);
    if (iVar27 == 0) {
      uStack_1c0 = 0;
      uVar16 = 0;
    }
    else {
      FUN_140b85908(&local_1c8,iVar27,0);
      FUN_140b84cc6(local_1c8,uVar22,iVar27);
      uVar16 = 0;
      if ((longlong)(int)uStack_1c0 != 0) {
        plVar13 = local_1c8 + (longlong)(int)uStack_1c0 * 0x17;
        plVar26 = local_1c8;
        do {
          iVar27 = (int)plVar26[1];
          iVar25 = iVar27 + -1;
          if (iVar27 == 0) {
            iVar25 = 0;
          }
          uVar20 = 0;
          if (0 < iVar25) {
            puVar23 = &DAT_149dfb77a;
            if (iVar27 != 0) {
              puVar23 = (undefined2 *)*plVar26;
            }
            lVar18 = 0;
            uVar20 = 0;
            do {
              uVar8 = ((uint)(0x19 < (ushort)puVar23[lVar18] - 0x61) * 0x20 +
                      (uint)(ushort)puVar23[lVar18]) - 0x20;
              uVar20 = uVar20 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar20 ^ uVar8) & 0xff) * 4);
              uVar20 = uVar20 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar20 & 0xff ^ uVar8 >> 8 & 0xff) * 4
                                );
              lVar18 = lVar18 + 1;
            } while (iVar25 != (int)lVar18);
          }
          if ((int)uStack_100 != local_d4) {
            puVar12 = local_c8;
            if (local_c8 == (undefined1 *)0x0) {
              puVar12 = local_d0;
            }
            iVar25 = *(int *)(puVar12 + (ulonglong)(local_c0 - 1U & uVar20) * 4);
            if (iVar25 != -1) {
LAB_1427a7971:
              lVar18 = (longlong)iVar25;
              iVar25 = *(int *)(local_108 + 8 + lVar18 * 0x18);
              if (iVar25 == iVar27) {
                if (1 < iVar27) {
                  lVar11 = 0;
                  do {
                    uVar1 = *(ushort *)(*(longlong *)(local_108 + lVar18 * 0x18) + lVar11);
                    uVar2 = *(ushort *)(*plVar26 + lVar11);
                    if (uVar1 == uVar2) {
                      if (uVar1 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar2 | uVar1)) {
                        iVar25 = (uint)uVar1 - (uint)uVar2;
                        goto LAB_1427a79fa;
                      }
                      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                      goto code_r0x0001427a79f7;
                    }
                    lVar11 = lVar11 + 2;
                  } while( true );
                }
              }
              else if (iVar25 + iVar27 != 1) goto LAB_1427a798f;
              goto LAB_1427a7a8b;
            }
          }
LAB_1427a7a0b:
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_238 = local_216 == 4;
          local_220 = param_7;
          local_228 = local_b8;
          local_230 = param_5;
          local_240 = local_216;
          local_248 = (byte)local_1f0;
          cVar4 = FUN_1427a8258(plVar26,local_1e8,&local_1d8);
          if (cVar4 == '\0') {
            FUN_140a49df3(local_1c8,uStack_1c0 & 0xffffffff);
            if (local_1c8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1427a81c9;
          }
          FUN_14482b35e(&local_108,&local_1d8,plVar26);
LAB_1427a7a8b:
          plVar26 = plVar26 + 0x17;
        } while (plVar26 != plVar13);
        uVar16 = (int)uStack_1c0;
      }
    }
    FUN_140a49df3(local_1c8,uVar16);
    if (local_1c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_215 = local_215 ^ 1;
  }
  uVar19 = 0;
  pplVar28 = param_5 + 2;
  uVar20 = *(uint *)(param_5 + 5);
  uVar15 = (ulonglong)uVar20;
  uVar29 = 1;
  uVar21 = 0;
  uVar8 = 0;
  if (uVar20 != 0) {
    pplVar6 = (longlong **)param_5[4];
    if ((longlong **)param_5[4] == (longlong **)0x0) {
      pplVar6 = pplVar28;
    }
    uVar8 = *(uint *)pplVar6;
    if (uVar8 == 0) {
      iVar27 = uVar20 + 0x1e;
      if (-1 < (int)(uVar20 - 1)) {
        iVar27 = uVar20 - 1;
      }
      uVar19 = 0;
      uVar29 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar29 = uVar19;
      }
      uVar21 = 0;
      do {
        if (uVar29 == uVar19) goto LAB_1427a7b5b;
        uVar21 = (ulonglong)((int)uVar21 + 0x20);
        uVar8 = *(uint *)((longlong)pplVar6 + (uVar19 + 1) * 4);
        uVar19 = uVar19 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar19 = 0;
      uVar21 = 0;
    }
    uVar29 = (ulonglong)(-uVar8 & uVar8);
    uVar24 = uVar29 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar8 = ((int)uVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar20 <= (int)uVar8) {
      uVar8 = uVar20;
    }
  }
  if (uVar8 != uVar20) {
    uVar17 = 0xffffffff;
    local_200 = pplVar28;
    local_1f8 = uVar15;
    do {
      plVar26 = *param_5;
      lVar11 = (longlong)(int)uVar8;
      lVar18 = *(longlong *)
                (plVar26[lVar11 * 5 + 2] + (longlong)((int)plVar26[lVar11 * 5 + 3] + -1) * 0x10);
      iVar27 = (int)uVar21;
      if (*(char *)(lVar18 + 0x16e) != '\x02') {
        if (*(char *)(lVar18 + 0x16e) == '\x01') {
          if (1 < *(uint *)(lVar18 + 0x240) || local_215 != 0) {
LAB_1427a7c1d:
            plVar26 = plVar26 + lVar11 * 5;
            iVar25 = (int)plVar26[1];
            uVar8 = 0;
            iVar9 = iVar25 + -1;
            if (iVar25 == 0) {
              iVar9 = 0;
            }
            if (0 < iVar9) {
              puVar23 = &DAT_149dfb77a;
              if (iVar25 != 0) {
                puVar23 = (undefined2 *)*plVar26;
              }
              lVar18 = 0;
              uVar15 = 0;
              do {
                uVar14 = ((uint)(0x19 < (ushort)puVar23[lVar18] - 0x61) * 0x20 +
                         (uint)(ushort)puVar23[lVar18]) - 0x20;
                uVar8 = (uint)(uVar15 >> 8) ^
                        *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar14) & 0xff) * 4);
                uVar8 = uVar8 >> 8 ^
                        *(uint *)(&DAT_14c75d150 +
                                 (ulonglong)(uVar8 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
                uVar15 = (ulonglong)uVar8;
                lVar18 = lVar18 + 1;
              } while (iVar9 != (int)lVar18);
            }
            uVar24 = uStack_100 & 0xffffffff;
            uVar15 = local_1f8;
            local_214 = iVar27;
            local_210 = uVar19;
            local_208 = plVar26;
            if ((int)uStack_100 != local_d4) {
              puVar12 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar12 = local_d0;
              }
              uVar24 = (ulonglong)*(uint *)(puVar12 + (ulonglong)(local_c0 - 1U & uVar8) * 4);
              if (*(uint *)(puVar12 + (ulonglong)(local_c0 - 1U & uVar8) * 4) != 0xffffffff) {
LAB_1427a7d0d:
                lVar18 = (longlong)(int)uVar24;
                iVar9 = *(int *)(local_108 + 8 + lVar18 * 0x18);
                pplVar28 = local_200;
                if (iVar9 == iVar25) {
                  if (1 < iVar25) {
                    lVar11 = 0;
                    do {
                      uVar1 = *(ushort *)(*(longlong *)(local_108 + lVar18 * 0x18) + lVar11);
                      uVar2 = *(ushort *)(*plVar26 + lVar11);
                      if (uVar1 == uVar2) {
                        if (uVar1 == 0) break;
                      }
                      else {
                        if (0x7f < (uVar2 | uVar1)) {
                          iVar9 = (uint)uVar1 - (uint)uVar2;
                          goto LAB_1427a7d99;
                        }
                        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                        goto code_r0x0001427a7d96;
                      }
                      lVar11 = lVar11 + 2;
                    } while( true );
                  }
                }
                else if (iVar9 + iVar25 != 1) goto LAB_1427a7d2b;
                goto LAB_1427a7e7f;
              }
            }
LAB_1427a7dc2:
            local_1d8 = 0;
            uStack_1d0 = 0;
            FUN_1404800ec(&local_1c8,plVar26,CONCAT71((int7)(uVar24 >> 8),1));
            local_238 = local_216 == 4;
            local_220 = param_7;
            local_228 = local_b8;
            local_230 = param_5;
            local_240 = local_216;
            local_248 = (byte)local_1f0;
            cVar4 = FUN_1427a8258(&local_1c8,local_1e8,&local_1d8,local_1e0);
            FUN_140a49ea0(&local_1c8);
            if (cVar4 == '\0') goto LAB_1427a81c9;
            FUN_14482b35e(&local_108,&local_1c8,plVar26,0);
            uVar20 = *(uint *)(param_5 + 5);
            uVar19 = local_210;
            pplVar28 = local_200;
          }
        }
        else if (1 < *(uint *)(lVar18 + 0x240)) goto LAB_1427a7c1d;
      }
LAB_1427a7e7f:
      uVar17 = uVar17 & ~(uint)uVar29;
      pplVar6 = (longlong **)param_5[4];
      if ((longlong **)param_5[4] == (longlong **)0x0) {
        pplVar6 = pplVar28;
      }
      iVar25 = (int)uVar19;
      lVar18 = (longlong)iVar25;
      uVar8 = *(uint *)((longlong)pplVar6 + lVar18 * 4) & uVar17;
      if (uVar8 == 0) {
        iVar9 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar9 = uVar20 - 1;
        }
        iVar9 = iVar9 >> 5;
        uVar21 = (ulonglong)(iVar27 + 0x20);
        iVar27 = iVar9;
        if (iVar9 < iVar25) {
          iVar27 = iVar25;
        }
        if (iVar25 < iVar9) {
          lVar11 = 0;
          do {
            uVar8 = *(uint *)((longlong)pplVar6 + (lVar18 + lVar11 + 1) * 4);
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar25 + (int)lVar11 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1427a7ef2;
            }
            uVar21 = (ulonglong)((int)uVar21 + 0x20);
            lVar11 = lVar11 + 1;
          } while (iVar27 - lVar18 != lVar11);
          uVar17 = 0xffffffff;
          iVar25 = iVar27;
        }
        uVar19 = (ulonglong)(iVar25 + 1);
        uVar15 = local_1f8;
        pplVar28 = local_200;
        uVar8 = uVar20;
      }
      else {
LAB_1427a7ef2:
        uVar29 = (ulonglong)(-uVar8 & uVar8);
        uVar24 = uVar29 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar8 = ((int)uVar21 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar8) {
          uVar8 = uVar20;
        }
      }
    } while (uVar8 != (uint)uVar15);
  }
LAB_1427a7b5b:
  bVar3 = local_216 & 0xfe;
  cVar4 = (char)local_1f0;
  if (local_90 == 0) {
    uVar19 = 1;
    plVar26 = (longlong *)0x0;
    iVar27 = 0;
    uVar20 = 0;
  }
  else {
    puVar7 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar7 = local_a8;
    }
    uVar20 = *puVar7;
    if (uVar20 == 0) {
      iVar27 = local_90 + 0x1e;
      if (-1 < (int)(local_90 - 1)) {
        iVar27 = local_90 - 1;
      }
      plVar26 = (longlong *)0x0;
      plVar13 = (longlong *)(ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        plVar13 = plVar26;
      }
      iVar27 = 0;
      do {
        if (plVar13 == plVar26) goto LAB_1427a818a;
        iVar27 = iVar27 + 0x20;
        uVar20 = puVar7[(longlong)plVar26 + 1];
        plVar26 = (longlong *)((longlong)plVar26 + 1);
      } while (uVar20 == 0);
    }
    else {
      plVar26 = (longlong *)0x0;
      iVar27 = 0;
    }
    uVar19 = (ulonglong)(-uVar20 & uVar20);
    uVar15 = uVar19 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar20 = (iVar27 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)local_90 <= (int)uVar20) {
      uVar20 = local_90;
    }
  }
  uVar22 = CONCAT71((int7)(uVar21 >> 8),1);
  if (uVar20 != local_90) {
    uVar21 = 0xffffffff;
    local_210 = (ulonglong)local_90;
    local_208 = plVar26;
    do {
      lVar18 = *(longlong *)(local_b8[0] + 0x10 + (longlong)(int)uVar20 * 0x20);
      lVar11 = (longlong)*(int *)(lVar18 + 0x138);
      local_214 = iVar27;
      if (lVar11 != 0) {
        lVar30 = local_b8[0] + (longlong)(int)uVar20 * 0x20;
        lVar18 = *(longlong *)(lVar18 + 0x130);
        lVar11 = lVar11 * 0x168;
        do {
          local_1c8 = (longlong *)0x0;
          uStack_1c0 = 0;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_238 = local_216 != 4;
          local_248 = local_216;
          local_240 = (byte)(cVar4 - 6U) < 0xfe || bVar3 == 4;
          local_230 = &local_1c8;
          cVar5 = FUN_1427a0606(lVar18,local_1e0,local_1f0,&local_1d8);
          if (cVar5 != '\0') {
            FUN_14482b35e(param_6,&local_1c8,lVar30,0);
            break;
          }
          lVar18 = lVar18 + 0x168;
          lVar11 = lVar11 + -0x168;
        } while (lVar11 != 0);
      }
      uVar20 = (uint)uVar21 & ~(uint)uVar19;
      uVar21 = (ulonglong)uVar20;
      puVar7 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar7 = local_a8;
      }
      iVar25 = (int)local_208;
      lVar18 = (longlong)iVar25;
      uVar20 = puVar7[lVar18] & uVar20;
      iVar27 = local_214;
      if (uVar20 == 0) {
        iVar9 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar9 = local_90 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar27 = local_214 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar25) {
          iVar10 = iVar25;
        }
        if (iVar25 < iVar9) {
          lVar11 = 0;
          do {
            uVar20 = puVar7[lVar18 + lVar11 + 1];
            if (uVar20 != 0) {
              local_208 = (longlong *)(ulonglong)(iVar25 + (int)lVar11 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1427a813d;
            }
            iVar27 = iVar27 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar10 - lVar18 != lVar11);
          uVar21 = 0xffffffff;
          lVar18 = (longlong)iVar10;
        }
        local_208 = (longlong *)(lVar18 + 1);
        uVar20 = local_90;
      }
      else {
LAB_1427a813d:
        uVar19 = (ulonglong)(-uVar20 & uVar20);
        uVar15 = uVar19 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar20 = (iVar27 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)local_90 <= (int)uVar20) {
          uVar20 = local_90;
        }
      }
    } while (uVar20 != (uint)local_210);
LAB_1427a818a:
    uVar22 = CONCAT71((int7)(uVar21 >> 8),1);
  }
LAB_1427a81cb:
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1461a7ede(local_b8);
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar22;
code_r0x0001427a79f7:
  iVar25 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1427a79fa:
  if (iVar25 == 0) goto LAB_1427a7a8b;
LAB_1427a798f:
  iVar25 = *(int *)(local_108 + 0x10 + lVar18 * 0x18);
  if (iVar25 == -1) goto LAB_1427a7a0b;
  goto LAB_1427a7971;
code_r0x0001427a7d96:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1427a7d99:
  if (iVar9 == 0) goto LAB_1427a7e7f;
LAB_1427a7d2b:
  uVar8 = *(uint *)(local_108 + 0x10 + lVar18 * 0x18);
  uVar24 = (ulonglong)uVar8;
  if (uVar8 == 0xffffffff) goto LAB_1427a7dc2;
  goto LAB_1427a7d0d;
LAB_1427a81c9:
  uVar22 = 0;
  goto LAB_1427a81cb;
}



// FUNCTION 1427a8258 FUN_1427a8258 body=6223 status=ok
// SIG undefined FUN_1427a8258(void)

ulonglong FUN_1427a8258(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       char param_5,char param_6,char param_7,longlong *param_8,longlong *param_9,
                       undefined4 *param_10)

{
  uint *puVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  byte bVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined8 unaff_RSI;
  ushort uVar26;
  undefined4 *puVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  ushort uVar32;
  uint uVar33;
  longlong lVar34;
  bool bVar35;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  int local_bc;
  longlong *local_b8;
  longlong **local_b0;
  int local_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar8 = (int)param_1[1];
  uVar15 = 0;
  iVar28 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar28 = 0;
  }
  if (0 < iVar28) {
    if (iVar8 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*param_1;
    }
    lVar29 = 0;
    uVar15 = 0;
    do {
      uVar24 = ((uint)(0x19 < (ushort)puVar12[lVar29] - 0x61) * 0x20 + (uint)(ushort)puVar12[lVar29]
               ) - 0x20;
      uVar33 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar24) & 0xff) * 4);
      unaff_RSI = 0;
      uVar15 = (ulonglong)
               (uVar33 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar33 & 0xff ^ uVar24 >> 8 & 0xff) * 4));
      lVar29 = lVar29 + 1;
    } while (iVar28 != (int)lVar29);
  }
  local_128 = param_4;
  iVar8 = FUN_1427afe4a(param_9,uVar15,param_1);
  uVar15 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (iVar8 != -1) goto LAB_1427a9589;
  uVar15 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  param_10[6] = 0;
  if ((int)param_10[7] < 0) {
    FUN_1468549e4(param_10 + 4);
  }
  uStack_d0 = CONCAT44(uStack_d0._4_4_,1);
  FUN_14170dfd2(&local_d8,0);
  *local_d8 = param_1;
  local_b0 = &local_e0;
  local_e0 = param_1;
  local_b8 = param_1;
  FUN_14170e46a(&local_98,&local_a8);
  puVar17 = (undefined8 *)CONCAT44(uStack_9c,local_a0);
  FUN_14170e646(&local_b8);
  *(undefined4 *)(puVar17 + 3) = 0xffffffff;
  local_bc = local_a8;
  iVar8 = *(int *)(puVar17 + 1);
  iVar28 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar28 = 0;
  }
  if (0 < iVar28) {
    if (iVar8 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)*puVar17;
    }
    lVar29 = 0;
    uVar15 = 0;
    do {
      uVar24 = ((uint)(0x19 < (ushort)puVar12[lVar29] - 0x61) * 0x20 + (uint)(ushort)puVar12[lVar29]
               ) - 0x20;
      uVar33 = (uint)(uVar15 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar24) & 0xff) * 4);
      uVar15 = (ulonglong)
               (uVar33 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar33 & 0xff ^ uVar24 >> 8 & 0xff) * 4));
      lVar29 = lVar29 + 1;
    } while (iVar28 != (int)lVar29);
  }
  cVar7 = FUN_140e391ea(&local_98,uVar15,puVar17,&local_bc);
  if (cVar7 == '\0') {
    uVar24 = (int)uStack_90 - local_64;
    iVar8 = 1;
    if (3 < uVar24) {
      uVar20 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
      lVar29 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar29 & 0x1f);
    }
    if (((int)uVar24 < 1) || (iVar8 <= local_50)) {
      uVar24 = local_50 - 1U & (uint)uVar15;
      *(uint *)((longlong)puVar17 + 0x1c) = uVar24;
      puVar14 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar14 = local_60;
      }
      *(undefined4 *)(puVar17 + 3) =
           *(undefined4 *)(puVar14 + ((longlong)local_50 - 1U & (longlong)(int)uVar24) * 4);
      puVar14 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar14 = local_60;
      }
      *(int *)(puVar14 + ((longlong)local_50 - 1U & (longlong)(int)uVar24) * 4) = local_bc;
    }
    else {
      local_50 = iVar8;
      FUN_14170e6aa();
    }
  }
  uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
  if (0 < (int)uStack_d0) {
    local_118 = param_9 + 2;
    local_e8 = param_9 + 7;
    lVar29 = 0;
    local_120 = (longlong *)(param_10 + 4);
    local_108 = param_2;
    local_f0 = param_3;
    do {
      puVar17 = (undefined8 *)local_d8[lVar29];
      cVar7 = FUN_1427a9aa8(puVar17);
      if ((cVar7 != '\0') && (*(char *)(puVar17 + 2) == '\x01')) {
        if ((longlong)*(int *)(puVar17 + 0xc) < 1) {
LAB_1427a8585:
          if ((longlong)*(int *)(puVar17 + 0xe) != 0) {
            lVar22 = 0;
            do {
              if (*(char *)(puVar17[0xd] + lVar22) == param_5) goto LAB_1427a8ad6;
              lVar22 = lVar22 + 1;
            } while (*(int *)(puVar17 + 0xe) != lVar22);
          }
          if ((longlong)*(int *)(puVar17 + 0x10) < 1) {
LAB_1427a85cb:
            if ((longlong)*(int *)(puVar17 + 0x12) != 0) {
              lVar22 = 0;
              do {
                if (*(char *)(puVar17[0x11] + lVar22) == param_6) goto LAB_1427a8ad6;
                lVar22 = lVar22 + 1;
              } while (*(int *)(puVar17 + 0x12) != lVar22);
            }
            if (param_7 == '\0') {
              if (*(char *)(puVar17 + 0x15) == '\x01') {
                if ((longlong)*(int *)(puVar17 + 0x14) != 0) {
                  plVar11 = (longlong *)puVar17[0x13];
                  plVar13 = plVar11 + (longlong)*(int *)(puVar17 + 0x14) * 2;
                  iVar8 = (int)local_128[1];
LAB_1427a8745:
                  if ((int)plVar11[1] == iVar8) {
                    if (1 < iVar8) {
                      lVar22 = 0;
                      do {
                        uVar32 = *(ushort *)(*plVar11 + lVar22);
                        uVar15 = (ulonglong)uVar32;
                        uVar26 = *(ushort *)(*local_128 + lVar22);
                        if (uVar32 == uVar26) {
                          if (uVar32 == 0) break;
                        }
                        else {
                          if (0x7f < (uVar26 | uVar32)) goto LAB_1427a87be;
                          uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                          uVar20 = (ulonglong)uVar26;
                          uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                          if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar20])
                          goto LAB_1427a87be;
                        }
                        lVar22 = lVar22 + 2;
                      } while( true );
                    }
                  }
                  else if ((int)plVar11[1] + iVar8 != 1) goto LAB_1427a875b;
                  goto LAB_1427a8600;
                }
                goto LAB_1427a8ad6;
              }
              if ((longlong)*(int *)(puVar17 + 0x14) != 0) {
                plVar11 = (longlong *)puVar17[0x13];
                plVar13 = plVar11 + (longlong)*(int *)(puVar17 + 0x14) * 2;
                iVar8 = (int)local_128[1];
LAB_1427a87f5:
                if ((int)plVar11[1] == iVar8) {
                  if (1 < iVar8) {
                    lVar22 = 0;
                    do {
                      uVar32 = *(ushort *)(*plVar11 + lVar22);
                      uVar15 = (ulonglong)uVar32;
                      uVar26 = *(ushort *)(*local_128 + lVar22);
                      if (uVar32 == uVar26) {
                        if (uVar32 == 0) break;
                      }
                      else {
                        if (0x7f < (uVar26 | uVar32)) goto LAB_1427a886e;
                        uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                        uVar20 = (ulonglong)uVar26;
                        uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                        if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar20])
                        goto LAB_1427a886e;
                      }
                      lVar22 = lVar22 + 2;
                    } while( true );
                  }
                }
                else if ((int)plVar11[1] + iVar8 != 1) goto LAB_1427a880b;
              }
            }
LAB_1427a8600:
            plVar11 = (longlong *)FUN_1427a1d95(param_8);
            if (plVar11 != (longlong *)0x0) {
              if (*(char *)(puVar17 + 0x16) != '\x01') {
LAB_1427a88b2:
                local_130 = *plVar11;
                if (param_7 == '\0') {
                  if (*(char *)(local_130 + 0x179) == '\x01') {
                    if ((longlong)*(int *)(local_130 + 0x108) != 0) {
                      plVar11 = *(longlong **)(local_130 + 0x100);
                      plVar13 = plVar11 + (longlong)*(int *)(local_130 + 0x108) * 2;
                      iVar8 = (int)local_128[1];
LAB_1427a8b27:
                      if ((int)plVar11[1] != iVar8) {
                        bVar35 = (int)plVar11[1] + iVar8 == 1;
                        goto LAB_1427a8b37;
                      }
                      if (1 < iVar8) {
                        lVar22 = 0;
                        do {
                          uVar32 = *(ushort *)(*plVar11 + lVar22);
                          uVar15 = (ulonglong)uVar32;
                          uVar26 = *(ushort *)(*local_128 + lVar22);
                          if (uVar32 == uVar26) {
                            if (uVar32 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar26 | uVar32)) goto LAB_1427a8ba6;
                            uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                            uVar20 = (ulonglong)uVar26;
                            uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                            if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar20])
                            goto LAB_1427a8ba6;
                          }
                          lVar22 = lVar22 + 2;
                        } while( true );
                      }
                      goto LAB_1427a88c8;
                    }
                    goto LAB_1427a8ad6;
                  }
                  if ((longlong)*(int *)(local_130 + 0x108) != 0) {
                    plVar11 = *(longlong **)(local_130 + 0x100);
                    plVar13 = plVar11 + (longlong)*(int *)(local_130 + 0x108) * 2;
                    iVar8 = (int)local_128[1];
LAB_1427a8ff6:
                    if ((int)plVar11[1] == iVar8) {
                      if (1 < iVar8) {
                        lVar22 = 0;
                        do {
                          uVar32 = *(ushort *)(*plVar11 + lVar22);
                          uVar15 = (ulonglong)uVar32;
                          uVar26 = *(ushort *)(*local_128 + lVar22);
                          if (uVar32 == uVar26) {
                            if (uVar32 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar26 | uVar32)) goto LAB_1427a9079;
                            uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                            uVar20 = (ulonglong)uVar26;
                            uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                            if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar20])
                            goto LAB_1427a9079;
                          }
                          lVar22 = lVar22 + 2;
                        } while( true );
                      }
                    }
                    else if ((int)plVar11[1] + iVar8 != 1) goto LAB_1427a9011;
                  }
                }
LAB_1427a88c8:
                if (param_6 == '\x05') {
                  if ((longlong)*(int *)(local_130 + 0x118) != 0) {
                    plVar11 = *(longlong **)(local_130 + 0x110);
                    plVar13 = plVar11 + (longlong)*(int *)(local_130 + 0x118) * 2;
                    iVar8 = (int)local_f0[1];
LAB_1427a8906:
                    if ((int)plVar11[1] == iVar8) {
                      if (1 < iVar8) {
                        lVar22 = 0;
                        do {
                          uVar32 = *(ushort *)(*plVar11 + lVar22);
                          uVar15 = (ulonglong)uVar32;
                          uVar26 = *(ushort *)(*local_f0 + lVar22);
                          if (uVar32 == uVar26) {
                            if (uVar32 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar26 | uVar32)) goto LAB_1427a8973;
                            uVar32 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                            uVar20 = (ulonglong)uVar26;
                            uVar26 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
                            if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar20])
                            goto LAB_1427a8973;
                          }
                          lVar22 = lVar22 + 2;
                        } while( true );
                      }
                    }
                    else if ((int)plVar11[1] + iVar8 != 1) goto LAB_1427a8918;
                    goto LAB_1427a8982;
                  }
                }
                else {
LAB_1427a8982:
                  if (((local_108 == 0) || (*(int *)(local_130 + 0x240) != 1)) ||
                     (*(char *)(local_108 + 0x110) == '\x01')) {
                    if ((*(char *)((longlong)puVar17 + 0x11) == '\x01') &&
                       ((longlong)*(int *)(local_130 + 0x138) != 0)) {
                      lVar22 = *(longlong *)(local_130 + 0x130);
                      lVar34 = (longlong)*(int *)(local_130 + 0x138) * 0x168;
                      do {
                        cVar7 = FUN_14099815c(lVar22);
                        if (cVar7 != '\0') {
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x110) < DAT_14c874a20) &&
                             (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
                            FUN_145762954(&DAT_14c874628);
                            DAT_14c874a18 = 1;
                            atexit(FUN_14278de47);
                            _Init_thread_footer(&DAT_14c874a20);
                          }
                          FUN_1400021e4(lVar22,&local_a8);
                          puVar12 = &DAT_149dfb77a;
                          if (local_a0 != 0) {
                            puVar12 = (undefined2 *)CONCAT44(uStack_a4,local_a8);
                          }
                          cVar7 = FUN_1457f751e(&DAT_14c874628,puVar12,0);
                          if (CONCAT44(uStack_a4,local_a8) != 0) {
                            FUN_1400020a8();
                          }
                          if (cVar7 == '\0') goto LAB_1427a8ad6;
                        }
                        lVar22 = lVar22 + 0x168;
                        lVar34 = lVar34 + -0x168;
                      } while (lVar34 != 0);
                    }
                    if ((longlong)*(int *)(local_130 + 0x228) != 0) {
                      plVar11 = *(longlong **)(local_130 + 0x220);
                      local_f8 = plVar11 + (longlong)*(int *)(local_130 + 0x228) * 0x17;
                      do {
                        plVar13 = (longlong *)FUN_1427a1d95(param_8,plVar11);
                        local_e0 = (longlong *)0x0;
                        iVar8 = (int)plVar11[1];
                        uVar15 = 0;
                        iVar28 = iVar8 + -1;
                        if (iVar8 == 0) {
                          iVar28 = 0;
                        }
                        if (0 < iVar28) {
                          puVar12 = &DAT_149dfb77a;
                          if (iVar8 != 0) {
                            puVar12 = (undefined2 *)*plVar11;
                          }
                          lVar22 = 0;
                          uVar15 = 0;
                          do {
                            uVar24 = ((uint)(ushort)puVar12[lVar22] +
                                     (uint)(0x19 < (ushort)puVar12[lVar22] - 0x61) * 0x20) - 0x20;
                            uVar33 = (uint)(uVar15 >> 8) ^
                                     *(uint *)(&DAT_14c75d150 +
                                              (ulonglong)(((uint)uVar15 ^ uVar24) & 0xff) * 4);
                            uVar15 = (ulonglong)
                                     (uVar33 >> 8 ^
                                     *(uint *)(&DAT_14c75d150 +
                                              (ulonglong)(uVar33 & 0xff ^ uVar24 >> 8 & 0xff) * 4));
                            lVar22 = lVar22 + 1;
                          } while (iVar28 != (int)lVar22);
                        }
                        iVar8 = FUN_140e3925c(&local_98,uVar15,plVar11);
                        if ((iVar8 == -1) || (local_98 + (longlong)iVar8 * 0x20 == 0)) {
                          local_b0 = &local_e0;
                          local_110 = plVar13;
                          local_b8 = plVar11;
                          FUN_14170e46a(&local_98,&local_a8);
                          lVar22 = CONCAT44(uStack_9c,local_a0);
                          FUN_14170e646(&local_b8,lVar22);
                          iVar8 = local_a8;
                          *(undefined4 *)(lVar22 + 0x18) = 0xffffffff;
                          cVar7 = FUN_140e391ea(&local_98,uVar15,lVar22,&local_a8);
                          if (cVar7 == '\0') {
                            uVar24 = (int)uStack_90 - local_64;
                            iVar28 = 1;
                            if (3 < uVar24) {
                              uVar20 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
                              lVar34 = 0x3f;
                              if (uVar20 != 0) {
                                for (; uVar20 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                                }
                              }
                              iVar28 = 1 << ((byte)lVar34 & 0x1f);
                            }
                            if (((int)uVar24 < 1) || (iVar28 <= local_50)) {
                              uVar24 = local_50 - 1U & (uint)uVar15;
                              *(uint *)(lVar22 + 0x1c) = uVar24;
                              puVar14 = local_58;
                              if (local_58 == (undefined1 *)0x0) {
                                puVar14 = local_60;
                              }
                              *(undefined4 *)(lVar22 + 0x18) =
                                   *(undefined4 *)
                                    (puVar14 + ((longlong)local_50 - 1U & (longlong)(int)uVar24) * 4
                                    );
                              puVar14 = local_58;
                              if (local_58 == (undefined1 *)0x0) {
                                puVar14 = local_60;
                              }
                              *(int *)(puVar14 +
                                      ((longlong)local_50 - 1U & (longlong)(int)uVar24) * 4) = iVar8
                              ;
                            }
                            else {
                              local_50 = iVar28;
                              FUN_14170e6aa(&local_98);
                            }
                          }
                          lVar22 = local_98 + (longlong)iVar8 * 0x20;
                          plVar13 = local_110;
                        }
                        else {
                          lVar22 = local_98 + (longlong)iVar8 * 0x20;
                        }
                        local_100 = (longlong *)(lVar22 + 0x10);
                        local_110 = (longlong *)*local_100;
                        if (local_110 == (longlong *)0x0) {
                          *local_100 = (longlong)puVar17;
                        }
                        if (plVar13 != (longlong *)0x0) {
                          lVar22 = *plVar13;
                          if (*(char *)(lVar22 + 0x176) == '\x01') {
                            *param_10 = 1;
                            *(longlong **)(param_10 + 2) = plVar11;
                            if (*(longlong *)(param_10 + 4) != 0) {
                              FUN_1400020a8();
                            }
                            *local_120 = 0;
                            local_120[1] = 0;
                            if (plVar11 == (longlong *)0x0) goto LAB_1427a9a3c;
                            goto LAB_1427a9784;
                          }
                          if ((longlong)*(int *)(local_130 + 0x238) != 0) {
                            plVar13 = *(longlong **)(local_130 + 0x230);
                            plVar21 = plVar13 + (longlong)*(int *)(local_130 + 0x238) * 2;
                            iVar8 = *(int *)(lVar22 + 0x20);
LAB_1427a8e3e:
                            if ((int)plVar13[1] != iVar8) {
                              if ((int)plVar13[1] + iVar8 == 1) goto LAB_1427a8ebe;
                              goto LAB_1427a8ea7;
                            }
                            if (1 < iVar8) {
                              lVar34 = 0;
                              do {
                                uVar32 = *(ushort *)(*plVar13 + lVar34);
                                uVar26 = *(ushort *)(*(longlong *)(lVar22 + 0x18) + lVar34);
                                if (uVar32 == uVar26) {
                                  if (uVar32 == 0) break;
                                }
                                else {
                                  if (0x7f < (uVar26 | uVar32)) {
                                    iVar28 = (uint)uVar32 - (uint)uVar26;
                                    goto LAB_1427a8e97;
                                  }
                                  if ((&DAT_149e05da0)[uVar32] != (&DAT_149e05da0)[(uint)uVar26])
                                  goto code_r0x0001427a8e94;
                                }
                                lVar34 = lVar34 + 2;
                              } while( true );
                            }
                            goto LAB_1427a8ebe;
                          }
                        }
LAB_1427a8ece:
                        iVar8 = (int)plVar11[1];
                        uVar15 = 0;
                        iVar28 = iVar8 + -1;
                        if (iVar8 == 0) {
                          iVar28 = 0;
                        }
                        if (0 < iVar28) {
                          puVar12 = &DAT_149dfb77a;
                          if (iVar8 != 0) {
                            puVar12 = (undefined2 *)*plVar11;
                          }
                          lVar22 = 0;
                          uVar15 = 0;
                          do {
                            uVar24 = ((uint)(0x19 < (ushort)puVar12[lVar22] - 0x61) * 0x20 +
                                     (uint)(ushort)puVar12[lVar22]) - 0x20;
                            uVar33 = (uint)(uVar15 >> 8) ^
                                     *(uint *)(&DAT_14c75d150 +
                                              (ulonglong)(((uint)uVar15 ^ uVar24) & 0xff) * 4);
                            uVar15 = (ulonglong)
                                     (uVar33 >> 8 ^
                                     *(uint *)(&DAT_14c75d150 +
                                              (ulonglong)(uVar33 & 0xff ^ uVar24 >> 8 & 0xff) * 4));
                            lVar22 = lVar22 + 1;
                          } while (iVar28 != (int)lVar22);
                        }
                        iVar8 = FUN_1427afe4a(param_9,uVar15,plVar11);
                        uVar15 = uStack_d0;
                        if ((local_110 == (longlong *)0x0) && (iVar8 == -1)) {
                          lVar22 = (longlong)(int)uStack_d0;
                          uVar24 = (int)uStack_d0 + 1;
                          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar24);
                          if (uStack_d0._4_4_ < uVar24) {
                            FUN_14170dfd2(&local_d8,uVar15 & 0xffffffff);
                          }
                          local_d8[lVar22] = plVar11;
                        }
                        plVar11 = plVar11 + 0x17;
                      } while (plVar11 != local_f8);
                    }
                    plVar11 = local_118;
                    if (*(int *)((longlong)param_9 + 0x34) == 0) {
                      uVar24 = *(uint *)(param_9 + 1);
                      *(uint *)(param_9 + 1) = uVar24 + 1;
                      if (*(uint *)((longlong)param_9 + 0xc) == uVar24) {
                        FUN_1447711aa(param_9,uVar24);
                      }
                      iVar8 = (int)param_9[5];
                      if (iVar8 == 0) {
                        iVar28 = -1;
                      }
                      else {
                        iVar28 = iVar8 + 0x1e;
                        if (-1 < iVar8 + -1) {
                          iVar28 = iVar8 + -1;
                        }
                        iVar28 = iVar28 >> 5;
                      }
                      iVar19 = iVar8 + 1;
                      iVar25 = iVar8 + 0x1f;
                      if (-1 < iVar8) {
                        iVar25 = iVar8;
                      }
                      if (iVar25 >> 5 == iVar28) {
                        *(int *)(param_9 + 5) = iVar19;
                      }
                      else {
                        if (*(int *)((longlong)param_9 + 0x2c) <= iVar8) {
                          iVar28 = iVar8;
                          if (iVar8 + 0x20U < 0xa0) {
                            iVar19 = 0x80;
                          }
                          else {
                            uVar33 = iVar8 + 0x20U >> 5;
                            if (*(int *)((longlong)param_9 + 0x2c) + 0x1fU < 0xa0) {
                              uVar31 = 4;
                              if (4 < uVar33) {
                                uVar31 = uVar33;
                              }
                            }
                            else {
                              uVar31 = uVar33 + (uVar33 * 3 >> 3) + 0x10;
                            }
                            uVar15 = (ulonglong)(uVar31 * 4);
                            if (DAT_14c872d28 != (longlong *)0x0) {
                              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                uVar9 = (uint)(uVar15 + 0xf);
                                if (uVar31 < 0x1ffd) {
                                  uVar15 = (ulonglong)
                                           (ushort)(&DAT_14c841d90)
                                                   [0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]
                                                   ];
                                }
                                else {
                                  uVar20 = (ulonglong)(uVar9 & 0xfffffff0);
                                  if (uVar20 < 0x7ff1) {
                                    bVar18 = (&DAT_14c841e00)[uVar9 >> 4];
                                    uVar23 = 0x32;
                                    if (0x32 < bVar18) {
                                      uVar23 = (ulonglong)bVar18;
                                    }
                                    uVar30 = 0x32 - (ulonglong)bVar18;
                                    do {
                                      uVar15 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                                      if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0)
                                      goto LAB_1427a93ca;
                                      lVar22 = uVar23 + 1 + uVar30;
                                      uVar30 = uVar30 - 1;
                                    } while (lVar22 != 0x33);
                                  }
                                  uVar15 = (ulonglong)DAT_14c841df8;
                                  if (DAT_14c841df8 < 0x11) {
                                    uVar15 = 0x10;
                                  }
                                  uVar15 = -uVar15 & (uVar20 + uVar15) - 1;
                                }
                              }
                              else {
                                uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar15,0);
                                iVar28 = (int)param_9[5];
                              }
                            }
LAB_1427a93ca:
                            iVar10 = (int)(uVar15 >> 2);
                            iVar19 = iVar10 << 5;
                            if (iVar10 < (int)uVar33) {
                              iVar19 = -0x20;
                            }
                          }
                          plVar11 = local_118;
                          *(int *)((longlong)param_9 + 0x2c) = iVar19;
                          FUN_1446efbd8(local_118,iVar28);
                          iVar19 = (int)param_9[5] + 1;
                        }
                        iVar28 = iVar19 + 0x1f;
                        if (-1 < iVar19) {
                          iVar28 = iVar19;
                        }
                        *(int *)(param_9 + 5) = iVar19;
                        if (iVar19 % 0x20 != 0) {
                          plVar13 = (longlong *)param_9[4];
                          if ((longlong *)param_9[4] == (longlong *)0x0) {
                            plVar13 = plVar11;
                          }
                          bVar18 = -(char)(iVar19 % 0x20);
                          *(uint *)((longlong)plVar13 + (longlong)(iVar28 >> 5) * 4) =
                               (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar28 >> 5) * 4) <<
                                     (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
                        }
                      }
                      lVar22 = (longlong)(int)uVar24;
                      plVar13 = (longlong *)param_9[4];
                      if ((longlong *)param_9[4] == (longlong *)0x0) {
                        plVar13 = plVar11;
                      }
                      bVar18 = (byte)iVar8 & 0x1f;
                      puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar25 >> 5) * 4);
                      *puVar1 = *puVar1 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
                    }
                    else {
                      uVar24 = *(uint *)(param_9 + 6);
                      lVar22 = (longlong)(int)uVar24;
                      iVar8 = *(int *)(*param_9 + 4 + lVar22 * 0x20);
                      *(int *)(param_9 + 6) = iVar8;
                      iVar28 = *(int *)((longlong)param_9 + 0x34) + -1;
                      *(int *)((longlong)param_9 + 0x34) = iVar28;
                      if (iVar28 != 0) {
                        *(undefined4 *)(*param_9 + (longlong)iVar8 * 0x20) = 0xffffffff;
                      }
                    }
                    puVar17 = (undefined8 *)(ulonglong)uVar24;
                    plVar13 = (longlong *)param_9[4];
                    if ((longlong *)param_9[4] == (longlong *)0x0) {
                      plVar13 = plVar11;
                    }
                    uVar33 = uVar24 + 0x1f;
                    if (-1 < (int)uVar24) {
                      uVar33 = uVar24;
                    }
                    puVar1 = (uint *)((longlong)plVar13 + (longlong)((int)uVar33 >> 5) * 4);
                    *puVar1 = *puVar1 | 1 << ((byte)uVar24 & 0x1f);
                    lVar34 = *param_9;
                    lVar22 = lVar22 * 0x20;
                    puVar16 = (undefined8 *)(lVar34 + lVar22);
                    *(undefined8 *)(lVar34 + lVar22) = 0;
                    iVar8 = *(int *)(local_130 + 0x20);
                    _Src = *(void **)(local_130 + 0x18);
                    *(int *)(lVar34 + 8 + lVar22) = iVar8;
                    if ((longlong)iVar8 == 0) {
                      *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
                      iVar8 = 0;
                    }
                    else {
                      FUN_1446dd670(puVar16,iVar8,0);
                      memcpy((void *)*puVar16,_Src,(longlong)iVar8 * 2);
                      iVar8 = *(int *)(puVar16 + 1);
                    }
                    puVar16[2] = local_130;
                    *(undefined4 *)(puVar16 + 3) = 0xffffffff;
                    uVar15 = 0;
                    iVar28 = iVar8 + -1;
                    if (iVar8 == 0) {
                      iVar28 = 0;
                    }
                    if (0 < iVar28) {
                      puVar12 = &DAT_149dfb77a;
                      if (iVar8 != 0) {
                        puVar12 = (undefined2 *)*puVar16;
                      }
                      lVar22 = 0;
                      uVar15 = 0;
                      do {
                        uVar33 = ((uint)(ushort)puVar12[lVar22] +
                                 (uint)(0x19 < (ushort)puVar12[lVar22] - 0x61) * 0x20) - 0x20;
                        uVar31 = (uint)(uVar15 >> 8) ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(((uint)uVar15 ^ uVar33) & 0xff) * 4);
                        uVar15 = (ulonglong)
                                 (uVar31 >> 8 ^
                                 *(uint *)(&DAT_14c75d150 +
                                          (ulonglong)(uVar31 & 0xff ^ uVar33 >> 8 & 0xff) * 4));
                        lVar22 = lVar22 + 1;
                      } while (iVar28 != (int)lVar22);
                    }
                    uVar33 = (int)param_9[1] - *(int *)((longlong)param_9 + 0x34);
                    iVar8 = 1;
                    if (uVar33 != 1) {
                      iVar28 = FUN_1427afe4a(param_9,uVar15);
                      if (iVar28 != -1) {
                        lVar22 = *param_9;
                        if (*(longlong *)(lVar22 + (longlong)iVar28 * 0x20) != 0) {
                          FUN_1400020a8();
                        }
                        puVar27 = (undefined4 *)(lVar22 + (longlong)iVar28 * 0x20);
                        uVar3 = *(undefined4 *)puVar16;
                        uVar4 = *(undefined4 *)((longlong)puVar16 + 4);
                        uVar5 = *(undefined4 *)(puVar16 + 1);
                        uVar6 = *(undefined4 *)((longlong)puVar16 + 0xc);
                        *(undefined8 *)(puVar27 + 4) = puVar16[2];
                        *puVar27 = uVar3;
                        puVar27[1] = uVar4;
                        puVar27[2] = uVar5;
                        puVar27[3] = uVar6;
                        FUN_146854a86(param_9,puVar17);
                        goto LAB_1427a8ad6;
                      }
                      if (3 < uVar33) {
                        uVar20 = (ulonglong)(uVar33 & 0xfffffffe) + 0xf;
                        lVar22 = 0x3f;
                        if (uVar20 != 0) {
                          for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                          }
                        }
                        iVar8 = 1 << ((byte)lVar22 & 0x1f);
                      }
                    }
                    if (((int)uVar33 < 1) || (iVar8 <= (int)param_9[9])) {
                      uVar33 = (int)param_9[9] - 1U & (uint)uVar15;
                      *(uint *)((longlong)puVar16 + 0x1c) = uVar33;
                      plVar11 = (longlong *)param_9[8];
                      if ((longlong *)param_9[8] == (longlong *)0x0) {
                        plVar11 = local_e8;
                      }
                      *(undefined4 *)(puVar16 + 3) =
                           *(undefined4 *)
                            ((longlong)plVar11 +
                            ((longlong)(int)param_9[9] - 1U & (longlong)(int)uVar33) * 4);
                      plVar11 = (longlong *)param_9[8];
                      if ((longlong *)param_9[8] == (longlong *)0x0) {
                        plVar11 = local_e8;
                      }
                      *(uint *)((longlong)plVar11 +
                               ((longlong)(int)param_9[9] - 1U & (longlong)(int)uVar33) * 4) =
                           uVar24;
                    }
                    else {
                      *(int *)(param_9 + 9) = iVar8;
                      FUN_14170e9be();
                    }
                  }
                }
                goto LAB_1427a8ad6;
              }
              iVar8 = *(int *)(puVar17 + 1);
              uVar15 = 0;
              iVar28 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar28 = 0;
              }
              if (0 < iVar28) {
                puVar12 = &DAT_149dfb77a;
                if (iVar8 != 0) {
                  puVar12 = (undefined2 *)*puVar17;
                }
                lVar22 = 0;
                uVar15 = 0;
                do {
                  uVar24 = ((uint)(0x19 < (ushort)puVar12[lVar22] - 0x61) * 0x20 +
                           (uint)(ushort)puVar12[lVar22]) - 0x20;
                  uVar33 = (uint)(uVar15 >> 8) ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(((uint)uVar15 ^ uVar24) & 0xff) * 4);
                  uVar15 = (ulonglong)
                           (uVar33 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar33 & 0xff ^ uVar24 >> 8 & 0xff) * 4));
                  lVar22 = lVar22 + 1;
                } while (iVar28 != (int)lVar22);
              }
              iVar8 = FUN_1427ae02a(param_8,uVar15,puVar17);
              lVar22 = 0;
              if (iVar8 != -1) {
                lVar22 = (longlong)iVar8 * 0x28 + *param_8;
              }
              puVar16 = (undefined8 *)(lVar22 + 0x10);
              if (lVar22 == 0) {
                puVar16 = (undefined8 *)0x0;
              }
              if ((longlong)*(int *)(puVar16 + 1) != 0) {
                plVar13 = (longlong *)*puVar16;
                lVar22 = (longlong)*(int *)(puVar16 + 1) << 4;
                do {
                  if (*(int *)(*plVar13 + 0x48) == *(int *)((longlong)puVar17 + 0xac)) {
                    if ((plVar13 != (longlong *)0x0) &&
                       (((plVar13 == plVar11 || ((*(byte *)(*plVar11 + 0x244) & 1) == 0)) &&
                        (plVar11 = (longlong *)FUN_1427a9c08(param_8), plVar11 != (longlong *)0x0)))
                       ) goto LAB_1427a88b2;
                    break;
                  }
                  plVar13 = plVar13 + 2;
                  lVar22 = lVar22 + -0x10;
                } while (lVar22 != 0);
              }
            }
            if (*(char *)((longlong)puVar17 + 0x11) == '\0') {
              *param_10 = 0;
              *(undefined8 **)(param_10 + 2) = puVar17;
              if (*(longlong *)(param_10 + 4) != 0) {
                FUN_1400020a8();
              }
              plVar11 = local_120;
              *local_120 = 0;
              local_120[1] = 0;
              if (puVar17 == (undefined8 *)0x0) goto LAB_1427a9a3c;
              goto LAB_1427a9614;
            }
          }
          else {
            lVar22 = 0;
            do {
              if (*(char *)(puVar17[0xf] + lVar22) == param_6) goto LAB_1427a85cb;
              lVar22 = lVar22 + 1;
            } while (*(int *)(puVar17 + 0x10) != lVar22);
          }
        }
        else {
          lVar22 = 0;
          do {
            if (*(char *)(puVar17[0xb] + lVar22) == param_5) goto LAB_1427a8585;
            lVar22 = lVar22 + 1;
          } while (*(int *)(puVar17 + 0xc) != lVar22);
        }
      }
LAB_1427a8ad6:
      lVar29 = lVar29 + 1;
    } while (lVar29 < (int)uStack_d0);
    uVar15 = CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
  }
  goto LAB_1427a954d;
LAB_1427a87be:
  if (uVar32 == uVar26) goto LAB_1427a8600;
LAB_1427a875b:
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar13) goto LAB_1427a8ad6;
  goto LAB_1427a8745;
LAB_1427a886e:
  if (uVar32 == uVar26) goto LAB_1427a8600;
LAB_1427a880b:
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar13) goto LAB_1427a8ad6;
  goto LAB_1427a87f5;
LAB_1427a8ba6:
  bVar35 = uVar32 == uVar26;
LAB_1427a8b37:
  if (bVar35) goto LAB_1427a88c8;
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar13) goto LAB_1427a8ad6;
  goto LAB_1427a8b27;
LAB_1427a9079:
  if (uVar32 == uVar26) goto LAB_1427a88c8;
LAB_1427a9011:
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar13) goto LAB_1427a8ad6;
  goto LAB_1427a8ff6;
LAB_1427a8973:
  if (uVar32 == uVar26) goto LAB_1427a8982;
LAB_1427a8918:
  plVar11 = plVar11 + 2;
  if (plVar11 == plVar13) goto LAB_1427a8ad6;
  goto LAB_1427a8906;
  while( true ) {
    iVar8 = param_10[6];
    uVar24 = iVar8 + 1;
    param_10[6] = uVar24;
    if ((uint)param_10[7] < uVar24) {
      FUN_14170dfd2(local_120);
    }
    *(longlong **)(*plVar13 + (longlong)iVar8 * 8) = plVar21;
    plVar11 = plVar21;
    if (plVar21 == (longlong *)0x0) break;
LAB_1427a9784:
    iVar8 = (int)plVar11[1] + -1;
    if ((int)plVar11[1] == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
      iVar28 = 0;
      do {
        iVar28 = iVar28 + 1;
      } while (iVar8 != iVar28);
    }
    iVar8 = FUN_140e3925c(&local_98);
    plVar13 = local_120;
    if ((((iVar8 == -1) || (local_98 + (longlong)iVar8 * 0x20 == 0)) ||
        (puVar17 = (undefined8 *)((longlong)iVar8 * 0x20 + local_98 + 0x10),
        puVar17 == (undefined8 *)0x0)) || (plVar21 = (longlong *)*puVar17, plVar11 == plVar21))
    break;
  }
  uVar24 = param_10[6];
  lVar29 = (longlong)(int)uVar24;
  if (lVar29 < 2) goto LAB_1427a9a3c;
  puVar17 = *(undefined8 **)(param_10 + 4);
  lVar22 = 0;
  uVar15 = 0;
  puVar16 = puVar17;
  do {
    uVar2 = *puVar16;
    *puVar16 = puVar17[lVar29 + lVar22 + -1];
    puVar17[lVar29 + lVar22 + -1] = uVar2;
    lVar22 = lVar22 + -1;
    puVar16 = puVar16 + 1;
  } while (-lVar22 != (ulonglong)(uVar24 >> 1));
  goto LAB_1427a954d;
code_r0x0001427a8e94:
  iVar28 = (uint)(byte)(&DAT_149e05da0)[uVar32] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar26];
LAB_1427a8e97:
  if (iVar28 == 0) {
LAB_1427a8ebe:
    if (plVar13 != (longlong *)0x0) {
      *param_10 = 2;
      *(longlong **)(param_10 + 2) = plVar11;
      if (*(longlong *)(param_10 + 4) != 0) {
        FUN_1400020a8();
      }
      *local_120 = 0;
      local_120[1] = 0;
      *local_100 = (longlong)puVar17;
      if (plVar11 == (longlong *)0x0) goto LAB_1427a99f3;
      goto LAB_1427a990a;
    }
    goto LAB_1427a8ece;
  }
LAB_1427a8ea7:
  plVar13 = plVar13 + 2;
  if (plVar13 == plVar21) goto LAB_1427a8ece;
  goto LAB_1427a8e3e;
  while( true ) {
    iVar8 = param_10[6];
    uVar24 = iVar8 + 1;
    param_10[6] = uVar24;
    if ((uint)param_10[7] < uVar24) {
      FUN_14170dfd2(local_120);
    }
    *(longlong **)(*plVar13 + (longlong)iVar8 * 8) = plVar21;
    plVar11 = plVar21;
    if (plVar21 == (longlong *)0x0) break;
LAB_1427a990a:
    iVar8 = (int)plVar11[1] + -1;
    if ((int)plVar11[1] == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
      iVar28 = 0;
      do {
        iVar28 = iVar28 + 1;
      } while (iVar8 != iVar28);
    }
    iVar8 = FUN_140e3925c(&local_98);
    plVar13 = local_120;
    if (((iVar8 == -1) || (local_98 + (longlong)iVar8 * 0x20 == 0)) ||
       ((puVar17 = (undefined8 *)((longlong)iVar8 * 0x20 + local_98 + 0x10),
        puVar17 == (undefined8 *)0x0 || (plVar21 = (longlong *)*puVar17, plVar11 == plVar21))))
    break;
  }
LAB_1427a99f3:
  uVar24 = param_10[6];
  lVar29 = (longlong)(int)uVar24;
  if (lVar29 < 2) goto LAB_1427a9a3c;
  puVar17 = *(undefined8 **)(param_10 + 4);
  lVar22 = 0;
  uVar15 = 0;
  puVar16 = puVar17;
  do {
    uVar2 = *puVar16;
    *puVar16 = puVar17[lVar29 + lVar22 + -1];
    puVar17[lVar29 + lVar22 + -1] = uVar2;
    lVar22 = lVar22 + -1;
    puVar16 = puVar16 + 1;
  } while (-lVar22 != (ulonglong)(uVar24 >> 1));
  goto LAB_1427a954d;
  while( true ) {
    iVar8 = param_10[6];
    uVar24 = iVar8 + 1;
    param_10[6] = uVar24;
    if ((uint)param_10[7] < uVar24) {
      FUN_14170dfd2(plVar11);
    }
    *(undefined8 **)(*plVar11 + (longlong)iVar8 * 8) = puVar16;
    puVar17 = puVar16;
    if (puVar16 == (undefined8 *)0x0) break;
LAB_1427a9614:
    iVar8 = *(int *)(puVar17 + 1) + -1;
    if (*(int *)(puVar17 + 1) == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
      iVar28 = 0;
      do {
        iVar28 = iVar28 + 1;
      } while (iVar8 != iVar28);
    }
    iVar8 = FUN_140e3925c(&local_98);
    if ((((iVar8 == -1) || (local_98 + (longlong)iVar8 * 0x20 == 0)) ||
        (puVar16 = (undefined8 *)((longlong)iVar8 * 0x20 + local_98 + 0x10),
        puVar16 == (undefined8 *)0x0)) || (puVar16 = (undefined8 *)*puVar16, puVar17 == puVar16))
    break;
  }
  uVar24 = param_10[6];
  lVar29 = (longlong)(int)uVar24;
  if (lVar29 < 2) {
LAB_1427a9a3c:
    uVar15 = 0;
  }
  else {
    puVar17 = *(undefined8 **)(param_10 + 4);
    lVar22 = 0;
    uVar15 = 0;
    puVar16 = puVar17;
    do {
      uVar2 = *puVar16;
      *puVar16 = puVar17[lVar29 + lVar22 + -1];
      puVar17[lVar29 + lVar22 + -1] = uVar2;
      lVar22 = lVar22 + -1;
      puVar16 = puVar16 + 1;
    } while (-lVar22 != (ulonglong)(uVar24 >> 1));
  }
LAB_1427a954d:
  if (local_d8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14170e134(&local_98);
LAB_1427a9589:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427a9aa8 FUN_1427a9aa8 body=352 status=ok
// SIG undefined FUN_1427a9aa8(void)

undefined8 FUN_1427a9aa8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(char *)(param_1 + 0x10) != '\x01') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar8 = (ulonglong)uVar1;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    if ((int)uVar1 < 1) {
LAB_1427a9ad2:
      if ((longlong)*(int *)(param_1 + 0x50) == 0) {
        return 1;
      }
      plVar3 = *(longlong **)(param_1 + 0x48);
      plVar7 = plVar3 + (longlong)*(int *)(param_1 + 0x50) * 2;
      iVar2 = (int)param_2[1];
LAB_1427a9afa:
      if ((int)plVar3[1] == iVar2) {
        if (iVar2 < 2) {
          return 0;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*plVar3 + lVar4);
          uVar8 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return 0;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_1427a9b4d;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            uVar9 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1427a9b4d;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if ((int)plVar3[1] + iVar2 == 1) {
        return 0;
      }
      goto LAB_1427a9b0c;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar8 = (ulonglong)(int)uVar1;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar7 = plVar3 + uVar8 * 2;
  iVar2 = (int)param_2[1];
LAB_1427a9b8a:
  if ((int)plVar3[1] == iVar2) {
    if (1 < iVar2) {
      lVar4 = 0;
      do {
        uVar6 = *(ushort *)(*plVar3 + lVar4);
        uVar8 = (ulonglong)uVar6;
        uVar5 = *(ushort *)(*param_2 + lVar4);
        if (uVar6 == uVar5) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar6)) goto LAB_1427a9be9;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar9 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1427a9be9;
        }
        lVar4 = lVar4 + 2;
      } while( true );
    }
  }
  else if ((int)plVar3[1] + iVar2 != 1) goto LAB_1427a9b9f;
  goto LAB_1427a9ad2;
LAB_1427a9be9:
  if (uVar6 == uVar5) goto LAB_1427a9ad2;
LAB_1427a9b9f:
  plVar3 = plVar3 + 2;
  if (plVar3 == plVar7) {
    return 0;
  }
  goto LAB_1427a9b8a;
LAB_1427a9b4d:
  if (uVar6 == uVar5) {
    return 0;
  }
LAB_1427a9b0c:
  plVar3 = plVar3 + 2;
  if (plVar3 == plVar7) {
    return 1;
  }
  goto LAB_1427a9afa;
}



// FUNCTION 1427a9c08 FUN_1427a9c08 body=437 status=ok
// SIG undefined FUN_1427a9c08(void)

longlong * FUN_1427a9c08(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  
  lVar10 = *param_2;
  iVar7 = *(int *)(lVar10 + 0x20) + -1;
  if (*(int *)(lVar10 + 0x20) == 0) {
    iVar7 = 0;
  }
  if (0 < iVar7) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
    } while (iVar7 != iVar9);
  }
  iVar7 = FUN_1427ae02a(param_1);
  lVar6 = (longlong)iVar7 * 0x28 + *param_1;
  if (((lVar6 == 0 || iVar7 == -1) || (plVar8 = *(longlong **)(lVar6 + 0x10), param_2 < plVar8)) ||
     (plVar8 + (longlong)*(int *)(lVar6 + 0x18) * 2 <= param_2)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = plVar8 + (longlong)(*(int *)(lVar6 + 0x18) + -1) * 2;
    if (plVar8 != param_2) {
      lVar6 = *plVar8;
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        lVar10 = *param_2;
      }
      lVar4 = param_2[1];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)plVar8[1];
      *plVar8 = lVar10;
      plVar8[1] = lVar4;
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)param_2[1];
      *param_2 = lVar6;
      param_2[1] = (longlong)plVar3;
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
  return plVar8;
}



// FUNCTION 1427a9dbe FUN_1427a9dbe body=3896 status=ok
// SIG undefined FUN_1427a9dbe(void)

ulonglong FUN_1427a9dbe(longlong param_1,longlong **param_2,undefined4 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_278 [40];
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240;
  undefined4 local_238;
  longlong *local_230;
  undefined4 local_228;
  undefined8 local_220;
  longlong *local_218;
  longlong *local_210;
  undefined4 local_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined4 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  undefined4 local_160;
  longlong *local_158;
  undefined4 local_150;
  longlong *local_148 [2];
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined4 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong *local_100;
  wchar_t **local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_14099759e(param_3,param_2 + 0x26);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_118 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_110 = 0;
  if (local_b0 == 0) {
    uVar13 = 1;
    uVar6 = 0;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar4 = local_b8;
    if (local_b8 == (uint *)0x0) {
      puVar4 = local_c8;
    }
    uVar10 = *puVar4;
    if (uVar10 == 0) {
      iVar7 = local_b0 + 0x1e;
      if (-1 < local_b0 + -1) {
        iVar7 = local_b0 + -1;
      }
      uVar6 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar6;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar6) goto LAB_1427a9feb;
        iVar11 = iVar11 + 0x20;
        uVar10 = puVar4[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar6 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10);
    uVar2 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (local_b0 <= iVar7) {
      iVar7 = local_b0;
    }
  }
  if (iVar7 < local_b0) {
    puVar4 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar4 = local_b8;
    }
    iVar12 = local_b0 + 0x1e;
    if (-1 < local_b0 + -1) {
      iVar12 = local_b0 + -1;
    }
    iVar12 = iVar12 >> 5;
    uVar10 = 0xffffffff;
    do {
      iVar9 = *(int *)(local_d8[0] + 8 + (longlong)iVar7 * 0x14);
      if (iVar9 != 0) {
        FUN_140009b9a(&local_128,param_2 + 3);
        FUN_145715fae(&local_138,(longlong)iVar7 * 0x14 + local_d8[0]);
        switch(iVar9) {
        case 1:
          local_158 = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 8))();
          }
          local_150 = local_130;
          local_168 = local_128;
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 8))();
          }
          local_160 = local_120;
          local_80 = L"PluginModuleNotFound";
          local_78[0] = 0x14;
          FUN_1446e940c(local_18c,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_190,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to load because module \'{1}\' could not be found.  Please ensure the plugin is properly installed, otherwise consider disabling the plugin for this project."
          ;
          local_78[0] = 0xaf;
          FUN_140208c1e(local_188,local_190,local_18c,&local_80);
          FUN_14023409e(&local_178,local_188,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_168);
          local_60 = 4;
          FUN_14023423e(local_50,&local_158);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_178;
          local_100 = local_170;
          if (local_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_170 + 1) = (int)local_170[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_148,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x30;
          do {
            plVar5 = *(longlong **)((longlong)local_78 + lVar14 + -8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar14 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar14) = 0;
            }
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_170 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar1 = (int *)((longlong)local_170 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_170 + 0x10))(local_170);
              }
            }
          }
          plVar5 = local_158;
          if (local_168 != (longlong *)0x0) {
            (**(code **)(*local_168 + 0x10))();
            plVar5 = local_158;
          }
          break;
        case 2:
          local_1a0 = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 8))();
          }
          local_198 = local_130;
          local_1b0 = local_128;
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 8))();
          }
          local_1a8 = local_120;
          local_80 = L"PluginModuleIncompatible";
          local_78[0] = 0x18;
          FUN_1446e940c(local_18c,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_190,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to load because module \'{1}\' does not appear to be compatible with the current version of the engine.  The plugin may need to be recompiled."
          ;
          local_78[0] = 0xa0;
          FUN_140208c1e(local_188,local_190,local_18c,&local_80);
          FUN_14023409e(&local_1c0,local_188,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_1b0);
          local_60 = 4;
          FUN_14023423e(local_50,&local_1a0);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_1c0;
          local_100 = local_1b8;
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_148,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x30;
          do {
            plVar5 = *(longlong **)((longlong)local_78 + lVar14 + -8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar14 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar14) = 0;
            }
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_1b8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_1b8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_1b8)(local_1b8);
              LOCK();
              piVar1 = (int *)((longlong)local_1b8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_1b8 + 0x10))(local_1b8);
              }
            }
          }
          plVar5 = local_1a0;
          if (local_1b0 != (longlong *)0x0) {
            (**(code **)(*local_1b0 + 0x10))();
            plVar5 = local_1a0;
          }
          break;
        case 3:
          local_1d0 = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 8))();
          }
          local_1c8 = local_130;
          local_1e0 = local_128;
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 8))();
          }
          local_1d8 = local_120;
          local_80 = L"PluginModuleCouldntBeLoaded";
          local_78[0] = 0x1b;
          FUN_1446e940c(local_18c,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_190,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to load because module \'{1}\' could not be loaded.  There may be an operating system error or the module may not be properly set up."
          ;
          local_78[0] = 0x97;
          FUN_140208c1e(local_188,local_190,local_18c,&local_80);
          FUN_14023409e(&local_1f0,local_188,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_1e0);
          local_60 = 4;
          FUN_14023423e(local_50,&local_1d0);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_1f0;
          local_100 = local_1e8;
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_148,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x30;
          do {
            plVar5 = *(longlong **)((longlong)local_78 + lVar14 + -8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar14 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar14) = 0;
            }
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_1e8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_1e8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
          plVar5 = local_1d0;
          if (local_1e0 != (longlong *)0x0) {
            (**(code **)(*local_1e0 + 0x10))();
            plVar5 = local_1d0;
          }
          break;
        case 4:
          local_200 = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 8))();
          }
          local_1f8 = local_130;
          local_210 = local_128;
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 8))();
          }
          local_208 = local_120;
          local_80 = L"PluginModuleFailedToInitialize";
          local_78[0] = 0x1e;
          FUN_1446e940c(local_18c,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_190,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to load because module \'{1}\' could not be initialized successfully after it was loaded."
          ;
          local_78[0] = 0x6b;
          FUN_140208c1e(local_188,local_190,local_18c,&local_80);
          FUN_14023409e(&local_220,local_188,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_210);
          local_60 = 4;
          FUN_14023423e(local_50,&local_200);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_220;
          local_100 = local_218;
          if (local_218 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_218 + 1) = (int)local_218[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_148,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x30;
          do {
            plVar5 = *(longlong **)((longlong)local_78 + lVar14 + -8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar14 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar14) = 0;
            }
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_218 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_218 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_218)(local_218);
              LOCK();
              piVar1 = (int *)((longlong)local_218 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_218 + 0x10))(local_218);
              }
            }
          }
          plVar5 = local_200;
          if (local_210 != (longlong *)0x0) {
            (**(code **)(*local_210 + 0x10))();
            plVar5 = local_200;
          }
          break;
        default:
          local_230 = local_138;
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 8))();
          }
          local_228 = local_130;
          local_240 = local_128;
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 8))();
          }
          local_238 = local_120;
          local_80 = L"PluginGenericLoadFailure";
          local_78[0] = 0x18;
          FUN_1446e940c(local_18c,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_190,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to load because module \'{1}\' could not be loaded for an unspecified reason.  This plugin\'s functionality will not be available.  Please report this error."
          ;
          local_78[0] = 0xae;
          FUN_140208c1e(local_188,local_190,local_18c,&local_80);
          FUN_14023409e(&local_250,local_188,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_240);
          local_60 = 4;
          FUN_14023423e(local_50,&local_230);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_250;
          local_100 = local_248;
          if (local_248 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_248 + 1) = (int)local_248[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_148,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = 0x30;
          do {
            plVar5 = *(longlong **)((longlong)local_78 + lVar14 + -8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar14 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar14) = 0;
            }
            lVar14 = lVar14 + -0x20;
          } while (lVar14 != -0x10);
          if (local_248 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_248 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_248)(local_248);
              LOCK();
              piVar1 = (int *)((longlong)local_248 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_248 + 0x10))(local_248);
              }
            }
          }
          plVar5 = local_230;
          if (local_240 != (longlong *)0x0) {
            (**(code **)(*local_240 + 0x10))();
            plVar5 = local_230;
          }
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        param_2 = local_148;
        FUN_140008f88(&local_118,param_2);
        if (local_148[0] != (longlong *)0x0) {
          (**(code **)(*local_148[0] + 0x10))();
        }
        if (local_188[0] != (longlong *)0x0) {
          (**(code **)(*local_188[0] + 0x10))();
        }
        if (local_138 != (longlong *)0x0) {
          (**(code **)(*local_138 + 0x10))();
        }
        if (local_128 != (longlong *)0x0) {
          (**(code **)(*local_128 + 0x10))();
        }
        break;
      }
      uVar10 = uVar10 & ~(uint)uVar13;
      iVar7 = (int)uVar6;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar4[lVar14] & uVar10;
      if (uVar8 == 0) {
        iVar9 = iVar12;
        if (iVar12 < iVar7) {
          iVar9 = iVar7;
        }
        if (iVar12 <= iVar7) break;
        lVar15 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar4[lVar14 + lVar15 + 1];
          if (uVar8 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar9 - lVar14 == lVar15) goto LAB_1427a9feb;
        }
        uVar6 = (ulonglong)(iVar7 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < local_b0);
  }
LAB_1427a9feb:
  plVar5 = local_118;
  if (*(code **)(*local_118 + 0x50) != FUN_144828418) {
    plVar5 = (longlong *)(**(code **)(*local_118 + 0x50))();
  }
  FUN_1447a1fc0(plVar5);
  pcVar3 = *(code **)(*local_118 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar5 = local_118 + 3;
    if (local_118[5] != 0) {
      plVar5 = (longlong *)(local_118[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar5 = local_118 + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar3)(local_118);
  }
  uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if ((1 < (int)plVar5[1]) && (*(char *)(param_1 + 0x129) == '\0')) {
    FUN_1427863e0();
    uVar6 = 0;
    FUN_1427864dc(0,0,&local_118,&DAT_14c873210);
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427aeaa8(local_d8);
  if ((local_40 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427aacf8 FUN_1427aacf8 body=2253 status=ok
// SIG undefined FUN_1427aacf8(void)

ulonglong FUN_1427aacf8(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                       undefined1 param_5)

{
  int *piVar1;
  code *pcVar2;
  uint *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 *unaff_RBX;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  longlong *local_190 [2];
  undefined8 local_180;
  longlong *local_178;
  longlong *local_170;
  undefined4 local_168;
  longlong *local_160;
  undefined4 local_158;
  longlong *local_150 [2];
  longlong *local_140;
  undefined4 local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong *local_100;
  wchar_t **local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8 [2];
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_1d8 = param_5;
  FUN_14684601a(param_2,param_1 + 0x130);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
  local_118 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_110 = 0;
  if (local_b0 == 0) {
    unaff_RBX = (undefined8 *)&DAT_00000001;
    uVar5 = 0;
    iVar7 = 0;
    iVar12 = 0;
  }
  else {
    puVar3 = local_b8;
    if (local_b8 == (uint *)0x0) {
      puVar3 = local_c8;
    }
    uVar6 = *puVar3;
    if (uVar6 == 0) {
      iVar7 = local_b0 + 0x1e;
      if (-1 < local_b0 + -1) {
        iVar7 = local_b0 + -1;
      }
      uVar5 = 0;
      uVar10 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar10 = uVar5;
      }
      iVar7 = 0;
      do {
        if (uVar10 == uVar5) goto LAB_1427ab405;
        iVar7 = iVar7 + 0x20;
        uVar6 = puVar3[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar5 = 0;
      iVar7 = 0;
    }
    unaff_RBX = (undefined8 *)(ulonglong)(-uVar6 & uVar6);
    uVar10 = (longlong)unaff_RBX * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (iVar7 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (local_b0 <= iVar12) {
      iVar12 = local_b0;
    }
  }
  if (iVar12 != local_b0) {
    puVar3 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar3 = local_b8;
    }
    iVar8 = local_b0 + 0x1e;
    if (-1 < local_b0 + -1) {
      iVar8 = local_b0 + -1;
    }
    uVar9 = iVar8 >> 5;
    uVar6 = 0xffffffff;
    do {
      local_120 = *(undefined8 *)(local_d8[0] + (longlong)iVar12 * 0x14);
      iVar12 = *(int *)(local_d8[0] + 8 + (longlong)iVar12 * 0x14);
      if (iVar12 != 0) {
        FUN_140009b9a(&local_130,param_1 + 0x18);
        FUN_145715fae(&local_140,&local_120);
        if (iVar12 == 1) {
          local_160 = local_140;
          if (local_140 != (longlong *)0x0) {
            (**(code **)(*local_140 + 8))();
          }
          local_158 = local_138;
          local_170 = local_130;
          if (local_130 != (longlong *)0x0) {
            (**(code **)(*local_130 + 8))();
          }
          local_168 = local_128;
          local_80 = L"UnloadNotSupported";
          local_78[0] = 0x12;
          FUN_1446e940c(local_194,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_198,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to unload because module \'{1}\' does not support unloading.";
          local_78[0] = 0x4e;
          FUN_140208c1e(local_190,local_198,local_194,&local_80);
          unaff_RBX = &local_180;
          FUN_14023409e(unaff_RBX,local_190,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_170);
          local_60 = 4;
          FUN_14023423e(local_50,&local_160);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_180;
          local_100 = local_178;
          if (local_178 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_178 + 1) = (int)local_178[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_150,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar13 = 0x30;
          do {
            plVar4 = *(longlong **)((longlong)local_78 + lVar13 + -8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar13 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar13) = 0;
            }
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != -0x10);
          if (local_178 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_178 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_178)(local_178);
              LOCK();
              piVar1 = (int *)((longlong)local_178 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_178 + 0x10))(local_178);
              }
            }
          }
          plVar4 = local_160;
          if (local_170 != (longlong *)0x0) {
            (**(code **)(*local_170 + 0x10))();
            plVar4 = local_160;
          }
        }
        else {
          local_1a8 = local_140;
          if (local_140 != (longlong *)0x0) {
            (**(code **)(*local_140 + 8))();
          }
          local_1a0 = local_138;
          local_1b8 = local_130;
          if (local_130 != (longlong *)0x0) {
            (**(code **)(*local_130 + 8))();
          }
          local_1b0 = local_128;
          local_80 = L"PluginGenericUnloadFailure";
          local_78[0] = 0x1a;
          FUN_1446e940c(local_194,&local_80);
          local_80 = L"PluginManager";
          local_78[0] = 0xd;
          FUN_1446e940c(local_198,&local_80);
          local_80 = 
          L"Plugin \'{0}\' failed to unload because module \'{1}\' could not be unloaded for an unspecified reason. Please report this error."
          ;
          local_78[0] = 0x7d;
          FUN_140208c1e(local_190,local_198,local_194,&local_80);
          unaff_RBX = &local_1c8;
          FUN_14023409e(unaff_RBX,local_190,1);
          local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
          FUN_14023423e(local_70,&local_1b8);
          local_60 = 4;
          FUN_14023423e(local_50,&local_1a8);
          local_f0 = &local_40;
          local_f8 = &local_80;
          FUN_14010d304(&local_e8);
          local_108 = local_1c8;
          local_100 = local_1c0;
          if (local_1c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_150,&local_108,&local_e8);
          FUN_14007f2db(local_e8,local_e0);
          if (local_e8 != 0) {
            FUN_1400020a8();
          }
          lVar13 = 0x30;
          do {
            plVar4 = *(longlong **)((longlong)local_78 + lVar13 + -8);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))();
              *(undefined8 *)((longlong)local_78 + lVar13 + -8) = 0;
              *(undefined4 *)((longlong)local_78 + lVar13) = 0;
            }
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != -0x10);
          if (local_1c0 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_1c0 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_1c0)(local_1c0);
              LOCK();
              piVar1 = (int *)((longlong)local_1c0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_1c0 + 0x10))(local_1c0);
              }
            }
          }
          plVar4 = local_1a8;
          if (local_1b8 != (longlong *)0x0) {
            (**(code **)(*local_1b8 + 0x10))();
            plVar4 = local_1a8;
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        FUN_140008f88(&local_118,local_150);
        if (local_150[0] != (longlong *)0x0) {
          (**(code **)(*local_150[0] + 0x10))();
        }
        if (local_190[0] != (longlong *)0x0) {
          (**(code **)(*local_190[0] + 0x10))();
        }
        if (local_140 != (longlong *)0x0) {
          (**(code **)(*local_140 + 0x10))();
        }
        if (local_130 != (longlong *)0x0) {
          (**(code **)(*local_130 + 0x10))();
        }
        break;
      }
      uVar6 = uVar6 & ~(uint)unaff_RBX;
      iVar12 = (int)uVar5;
      lVar13 = (longlong)iVar12;
      uVar11 = puVar3[lVar13] & uVar6;
      if (uVar11 == 0) {
        unaff_RBX = (undefined8 *)(ulonglong)uVar9;
        if ((int)uVar9 < iVar12) {
          unaff_RBX = (undefined8 *)(uVar5 & 0xffffffff);
        }
        if ((int)uVar9 <= iVar12) break;
        unaff_RBX = (undefined8 *)((int)unaff_RBX - lVar13);
        puVar14 = (undefined8 *)0x0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar11 = puVar3[(longlong)((longlong)puVar14 + lVar13 + 1)];
          if (uVar11 != 0) break;
          puVar14 = (undefined8 *)((longlong)puVar14 + 1);
          if (unaff_RBX == puVar14) goto LAB_1427ab405;
        }
        uVar5 = (ulonglong)(iVar12 + (int)puVar14 + 1);
        uVar6 = 0xffffffff;
      }
      unaff_RBX = (undefined8 *)(ulonglong)(-uVar11 & uVar11);
      uVar10 = (longlong)unaff_RBX * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = (iVar7 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar12 < local_b0);
  }
LAB_1427ab405:
  plVar4 = local_118;
  if (*(code **)(*local_118 + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*local_118 + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  pcVar2 = *(code **)(*local_118 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar4 = local_118 + 3;
    if (local_118[5] != 0) {
      plVar4 = (longlong *)(local_118[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar4 = local_118 + 2;
  }
  else {
    plVar4 = (longlong *)(*pcVar2)(local_118);
  }
  lVar13 = plVar4[1];
  if (1 < (int)lVar13) {
    FUN_1427863e0();
    FUN_1427864dc(0,0,&local_118,&DAT_14c873210);
    if (param_3 != 0) {
      FUN_140008f88(param_3,&local_118);
    }
  }
  if (local_118 != (longlong *)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_146850b6a(local_d8);
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(int)lVar13 < 2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427ab5c6 FUN_1427ab5c6 body=2667 status=ok
// SIG undefined FUN_1427ab5c6(void)

undefined4 FUN_1427ab5c6(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  wchar_t *_Str;
  wchar_t **ppwVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  uint local_204;
  wchar_t **local_200;
  uint *local_1f8;
  longlong local_1f0;
  uint local_1e8;
  int local_1e4;
  ulonglong local_1e0;
  wchar_t *local_1d8;
  size_t local_1d0;
  undefined8 local_1c8;
  int local_1c0;
  undefined1 local_1b4 [4];
  longlong *local_1b0 [2];
  longlong *local_1a0;
  longlong *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  longlong *local_180 [2];
  longlong *local_170 [2];
  undefined1 local_15c [4];
  longlong *local_158 [2];
  wchar_t **local_148;
  ulonglong *local_140;
  wchar_t *local_138;
  undefined4 local_130;
  longlong *local_128 [2];
  longlong *local_118;
  longlong *local_110;
  wchar_t **local_108;
  ulonglong *local_100;
  wchar_t **local_f8;
  undefined1 *local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  longlong *local_d8 [2];
  undefined1 local_c8 [12];
  undefined4 local_bc;
  char local_ac;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  cVar6 = FUN_1427a487c();
  sVar8 = 0;
  uVar17 = 0;
  if (cVar6 != '\0') {
    local_204 = param_2;
    if (param_2 < 10) {
      _Str = (wchar_t *)(&PTR_u_EarliestPossible_149e49da8)[param_2];
      sVar8 = wcslen(_Str);
    }
    else {
      _Str = (wchar_t *)0x0;
    }
    uVar11 = DAT_14c872be8;
    local_130 = (undefined4)sVar8;
    local_1f0 = param_1;
    local_1d8 = _Str;
    local_138 = _Str;
    FUN_1417036e0(local_128);
    local_e8 = L"LoadingModulesForEnabledPlugins";
    local_e0 = 0x1f;
    FUN_1446e940c(local_1b0,&local_e8);
    local_e8 = L"PluginManager";
    local_e0 = 0xd;
    FUN_1446e940c(local_15c,&local_e8);
    local_e8 = L"Loading Plugin Modules for Phase {0}";
    local_e0 = 0x24;
    FUN_140208c1e(local_158,local_15c,local_1b0,&local_e8);
    FUN_14023409e(&local_148,local_158,1);
    local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
    FUN_14023423e(local_d8,local_128);
    local_f0 = local_c8;
    local_f8 = &local_e8;
    FUN_14010d304(&local_88);
    local_108 = local_148;
    local_100 = local_140;
    if (local_140 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_118,&local_108,&local_88);
    FUN_14007f2db(local_88,local_80[0]);
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_1 = local_1f0;
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_140 != (ulonglong *)0x0) {
      LOCK();
      puVar1 = local_140 + 1;
      *(int *)puVar1 = (int)*puVar1 + -1;
      UNLOCK();
      if ((int)*puVar1 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    local_218 = uVar11;
    ppwVar18 = &local_e8;
    FUN_140997f46(ppwVar18,(float)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c)),&local_118,1
                 );
    FUN_140997a0e(ppwVar18);
    if (local_118 != (longlong *)0x0) {
      (**(code **)(*local_118 + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    local_bc = 2;
    puVar10 = (uint *)(param_1 + 0x18);
    uVar26 = *(uint *)(param_1 + 0x30);
    local_1f8 = puVar10;
    local_1d0 = sVar8;
    if (uVar26 == 0) {
      uVar25 = 1;
      uVar21 = 0;
      iVar19 = 0;
      uVar12 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar9 = puVar10;
      }
      uVar12 = *puVar9;
      if (uVar12 == 0) {
        iVar19 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar19 = uVar26 - 1;
        }
        uVar21 = 0;
        uVar25 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar25 = uVar21;
        }
        iVar19 = 0;
        do {
          if (uVar25 == uVar21) goto LAB_1427abccb;
          iVar19 = iVar19 + 0x20;
          uVar12 = puVar9[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar21 = 0;
        iVar19 = 0;
      }
      uVar25 = (ulonglong)(-uVar12 & uVar12);
      uVar4 = uVar25 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar12 = (iVar19 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if ((int)uVar26 <= (int)uVar12) {
        uVar12 = uVar26;
      }
    }
    ppwVar18 = (wchar_t **)CONCAT71((int7)((ulonglong)ppwVar18 >> 8),1);
    if (uVar12 != uVar26) {
      uVar24 = 0xffffffff;
      ppwVar18 = (wchar_t **)0x0;
      local_1e0 = (ulonglong)uVar26;
      do {
        ppwVar18 = (wchar_t **)(ulonglong)((int)ppwVar18 + 1);
        lVar22 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)(int)uVar12 * 0x28);
        lVar20 = (longlong)
                 (*(int *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)(int)uVar12 * 0x28) + -1) *
                 0x10;
        lVar23 = *(longlong *)(lVar22 + lVar20);
        local_200 = ppwVar18;
        local_1e4 = iVar19;
        if (((*(byte *)(lVar23 + 0x244) & 1) != 0) && (*(char *)(lVar23 + 0x178) == '\0')) {
          local_1e8 = uVar24;
          FUN_140009b9a(local_170,lVar23 + 0x18);
          local_190 = local_1d8;
          local_188 = (undefined4)local_1d0;
          FUN_1417036e0(local_180,&local_190);
          local_88 = L"LoadingModulesForPlugin";
          local_80[0] = 0x17;
          FUN_1446e940c(local_15c,&local_88);
          local_88 = L"PluginManager";
          local_80[0] = 0xd;
          FUN_1446e940c(local_1b4,&local_88);
          local_88 = L"Loading {0} Modules for Plugin: {1}";
          local_80[0] = 0x23;
          FUN_140208c1e(local_1b0,local_1b4,local_15c,&local_88);
          FUN_14023409e(&local_1a0,local_1b0,1);
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          FUN_14023423e(local_78,local_180);
          local_68 = 4;
          FUN_14023423e(local_58,local_170);
          local_100 = &local_48;
          local_108 = &local_88;
          FUN_14010d304(&local_f8,&local_108);
          local_118 = local_1a0;
          local_110 = local_198;
          if (local_198 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_198 + 1) = (int)local_198[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_158,&local_118,&local_f8);
          FUN_14007f2db(local_f8,(ulonglong)local_f0 & 0xffffffff);
          if (local_f8 != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
          param_1 = local_1f0;
          lVar23 = 0x30;
          do {
            plVar5 = *(longlong **)((longlong)local_80 + lVar23 + -8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
              *(undefined8 *)((longlong)local_80 + lVar23 + -8) = 0;
              *(undefined4 *)((longlong)local_80 + lVar23) = 0;
            }
            plVar5 = local_198;
            lVar23 = lVar23 + -0x20;
          } while (lVar23 != -0x10);
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_198 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          if (local_180[0] != (longlong *)0x0) {
            (**(code **)(*local_180[0] + 0x10))();
          }
          if (local_170[0] != (longlong *)0x0) {
            (**(code **)(*local_170[0] + 0x10))();
          }
          if (local_1b0[0] != (longlong *)0x0) {
            (**(code **)(*local_1b0[0] + 0x10))();
          }
          FUN_140997b30(&local_e8,(float)(int)local_200,local_158);
          cVar6 = FUN_1427a9dbe(param_1,*(undefined8 *)(lVar22 + lVar20),local_204);
          if (local_158[0] != (longlong *)0x0) {
            (**(code **)(*local_158[0] + 0x10))();
          }
          ppwVar18 = (wchar_t **)0x0;
          if (cVar6 == '\0') goto LAB_1427abccd;
          uVar26 = *(uint *)(param_1 + 0x30);
          puVar10 = local_1f8;
          uVar24 = local_1e8;
        }
        uVar24 = uVar24 & ~(uint)uVar25;
        puVar9 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar9 = puVar10;
        }
        iVar7 = (int)uVar21;
        lVar22 = (longlong)iVar7;
        uVar12 = puVar9[lVar22] & uVar24;
        iVar19 = local_1e4;
        if (uVar12 == 0) {
          iVar13 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar13 = uVar26 - 1;
          }
          iVar13 = iVar13 >> 5;
          iVar19 = local_1e4 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar7) {
            iVar14 = iVar7;
          }
          if (iVar7 < iVar13) {
            lVar23 = 0;
            do {
              uVar12 = puVar9[lVar22 + lVar23 + 1];
              if (uVar12 != 0) {
                uVar21 = (ulonglong)(iVar7 + (int)lVar23 + 1);
                uVar24 = 0xffffffff;
                goto LAB_1427abc81;
              }
              iVar19 = iVar19 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar14 - lVar22 != lVar23);
            uVar24 = 0xffffffff;
            iVar7 = iVar14;
          }
          uVar21 = (ulonglong)(iVar7 + 1);
          param_1 = local_1f0;
          puVar10 = local_1f8;
          uVar12 = uVar26;
        }
        else {
LAB_1427abc81:
          uVar25 = (ulonglong)(-uVar12 & uVar12);
          uVar4 = uVar25 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar12 = (iVar19 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar12) {
            uVar12 = uVar26;
          }
        }
      } while (uVar12 != (uint)local_1e0);
LAB_1427abccb:
      ppwVar18 = (wchar_t **)CONCAT71((int7)((ulonglong)ppwVar18 >> 8),1);
    }
LAB_1427abccd:
    if ((local_204 == 1) && (*(char *)(param_1 + 0x12a) != '\0')) {
      FUN_1400b22c2(&local_88,"Preloading all plugin binaries");
      FUN_14626b818(&local_f8,&local_88);
      if (local_88 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      iVar19 = *(int *)(param_1 + 0x30);
      local_200 = ppwVar18;
      if (iVar19 == 0) {
        uVar25 = 1;
        uVar21 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar10 = local_1f8;
        }
        uVar26 = *puVar10;
        if (uVar26 == 0) {
          iVar7 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar7 = iVar19 + -1;
          }
          uVar21 = 0;
          uVar25 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar25 = uVar21;
          }
          iVar13 = 0;
          do {
            if (uVar25 == uVar21) goto LAB_1427abe41;
            iVar13 = iVar13 + 0x20;
            uVar26 = puVar10[uVar21 + 1];
            uVar21 = uVar21 + 1;
          } while (uVar26 == 0);
        }
        else {
          uVar21 = 0;
          iVar13 = 0;
        }
        uVar25 = (ulonglong)(-uVar26 & uVar26);
        uVar4 = uVar25 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar7) {
          iVar7 = iVar19;
        }
      }
      if (iVar7 != iVar19) {
        uVar26 = 0xffffffff;
        do {
          lVar22 = *(longlong *)(param_1 + 8);
          lVar23 = (longlong)iVar7;
          local_1c8 = *(undefined8 *)(lVar22 + lVar23 * 0x28);
          iVar7 = *(int *)(lVar22 + 8 + lVar23 * 0x28);
          local_1c0 = iVar7 + -1;
          if (iVar7 == 0) {
            local_1c0 = 0;
          }
          cVar6 = FUN_14684a1fc(param_1,&local_1c8);
          if (cVar6 != '\0') {
            lVar22 = lVar22 + lVar23 * 0x28;
            lVar22 = *(longlong *)
                      (*(longlong *)(lVar22 + 0x10) +
                      (longlong)(*(int *)(lVar22 + 0x18) + -1) * 0x10);
            lVar23 = (longlong)*(int *)(lVar22 + 0x138);
            if (lVar23 != 0) {
              lVar22 = *(longlong *)(lVar22 + 0x130);
              lVar23 = lVar23 * 0x168;
              do {
                cVar6 = FUN_140998308(lVar22);
                if (((cVar6 != '\0') &&
                    (*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c874a20)) &&
                   (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
                  FUN_145762954(&DAT_14c874628);
                  DAT_14c874a18 = 1;
                  atexit(FUN_14278de47);
                  _Init_thread_footer(&DAT_14c874a20);
                }
                lVar22 = lVar22 + 0x168;
                lVar23 = lVar23 + -0x168;
              } while (lVar23 != 0);
            }
          }
          uVar26 = uVar26 & ~(uint)uVar25;
          puVar10 = *(uint **)(param_1 + 0x28);
          if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
            puVar10 = local_1f8;
          }
          iVar14 = *(int *)(param_1 + 0x30);
          iVar7 = (int)uVar21;
          lVar22 = (longlong)iVar7;
          uVar12 = puVar10[lVar22] & uVar26;
          if (uVar12 == 0) {
            iVar15 = iVar14 + 0x1e;
            if (-1 < iVar14 + -1) {
              iVar15 = iVar14 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar16 = iVar15;
            if (iVar15 < iVar7) {
              iVar16 = iVar7;
            }
            if (iVar7 < iVar15) {
              lVar23 = 0;
              do {
                uVar12 = puVar10[lVar22 + lVar23 + 1];
                if (uVar12 != 0) {
                  uVar21 = (ulonglong)(iVar7 + (int)lVar23 + 1);
                  uVar26 = 0xffffffff;
                  goto LAB_1427abfdf;
                }
                iVar13 = iVar13 + 0x20;
                lVar23 = lVar23 + 1;
              } while (iVar16 - lVar22 != lVar23);
              uVar26 = 0xffffffff;
              iVar7 = iVar16;
            }
            uVar21 = (ulonglong)(iVar7 + 1);
            param_1 = local_1f0;
            iVar7 = iVar14;
          }
          else {
LAB_1427abfdf:
            uVar25 = (ulonglong)(-uVar12 & uVar12);
            uVar4 = uVar25 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar7 = (iVar13 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if (iVar14 <= iVar7) {
              iVar7 = iVar14;
            }
          }
        } while (iVar7 != iVar19);
      }
LAB_1427abe41:
      lVar22 = FUN_1407bb686();
      uVar11 = FUN_1407bb416();
      FUN_1407bb482(uVar11,*(undefined8 *)(lVar22 + 0x10));
      ppwVar18 = local_200;
    }
    param_2 = local_204;
    uVar17 = SUB84(ppwVar18,0);
    FUN_140997a5c(&local_e8);
    if (local_ac == '\x01') {
      local_ac = '\0';
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_e8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_e8 + 0x10))();
    }
  }
  *(uint *)(param_1 + 0x260) = param_2;
  FUN_1427b03d2(param_1 + 0x248,param_2,uVar17);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 1427ac032 FUN_1427ac032 body=12 status=ok
// SIG undefined FUN_1427ac032(void)

void FUN_1427ac032(void)

{
  FUN_145766626(&DAT_14c926ca8);
  return;
}



// FUNCTION 1427ac03e FUN_1427ac03e body=259 status=ok
// SIG undefined FUN_1427ac03e(void)

longlong * FUN_1427ac03e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar6 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar8 = 0;
    uVar6 = 0;
    do {
      uVar7 = ((uint)(0x19 < (ushort)puVar2[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar8]) -
              0x20;
      uVar9 = (uint)(uVar6 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
      uVar6 = (ulonglong)
              (uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
      lVar8 = lVar8 + 1;
    } while (iVar4 != (int)lVar8);
  }
  iVar1 = FUN_1427ae02a(param_1,uVar6,param_2);
  lVar8 = (longlong)iVar1 * 0x28 + *param_1;
  if (iVar1 == -1) {
    lVar8 = 0;
  }
  if ((lVar8 != 0) && (lVar5 = (longlong)*(int *)(lVar8 + 0x18), 0 < lVar5)) {
    plVar3 = *(longlong **)(lVar8 + 0x10);
    lVar8 = lVar5 * 0x10;
    if (*(char *)(param_2 + 0x16) != '\x01') {
      return plVar3 + lVar5 * 2 + -2;
    }
    do {
      if (*(int *)(*plVar3 + 0x48) == *(int *)((longlong)param_2 + 0xac)) {
        return plVar3;
      }
      plVar3 = plVar3 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 1427ac142 FUN_1427ac142 body=1572 status=ok
// SIG undefined FUN_1427ac142(void)

void FUN_1427ac142(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_128 [40];
  wchar_t ***local_100;
  undefined4 local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  wchar_t ***local_98;
  wchar_t **local_90;
  undefined2 *local_88;
  int local_80;
  wchar_t ***local_78;
  ulonglong uStack_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  lVar12 = DAT_14c872be8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (DAT_14c872be8 != 0) {
    lVar2 = *param_2;
    lVar10 = lVar2 + 0x60;
    if (*(int *)(lVar2 + 0x68) < 2) {
      lVar10 = lVar2 + 0x18;
    }
    FUN_140009b9a(local_c8,lVar10);
    local_78 = (wchar_t ***)0x149e47e6e;
    uStack_70._0_4_ = 0x13;
    FUN_1446e940c(local_ec,&local_78);
    local_78 = (wchar_t ***)0x149e46d76;
    uStack_70._0_4_ = 0xd;
    FUN_1446e940c(local_f0,&local_78);
    local_78 = (wchar_t ***)0x149e47e40;
    uStack_70 = CONCAT44(uStack_70._4_4_,0x16);
    FUN_140208c1e(local_e8,local_f0,local_ec,&local_78);
    FUN_14023409e(&local_d8,local_e8,1);
    local_78 = (wchar_t ***)CONCAT44(local_78._4_4_,4);
    FUN_14023423e(&local_68,local_c8);
    local_90 = &local_58;
    local_98 = (wchar_t ***)&local_78;
    FUN_14010d304(&local_88);
    local_a8 = local_d8;
    local_a0 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_68 + 0x10))();
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    FUN_146810a92(lVar12,local_b8,1,0);
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
  }
  *(byte *)(*param_2 + 0x244) = *(byte *)(*param_2 + 0x244) | 1;
  FUN_14482b35e(param_1 + 0xa8,&local_78,*param_2 + 0x18,0);
  if ((((*(char *)(*param_2 + 0x16f) == '\0') && (*(char *)(*param_2 + 0x170) != '\x01')) ||
      (*(int *)(param_1 + 0x110) == 0)) ||
     ((*(longlong **)(param_1 + 0x108) == (longlong *)0x0 ||
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x30))(), cVar4 == '\0')))) {
    bVar3 = false;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
      lVar12 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x1e8) + 8 + lVar12) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar12) != 0)) {
          FUN_146854552(param_1 + 0x1e8,*param_2);
          break;
        }
        lVar12 = lVar12 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x1f0) * 0x10 != lVar12);
    }
    FUN_14129eb64(*param_2,&local_88);
    FUN_14170d440(*param_2,&local_78);
    if (*(int *)(param_1 + 0x110) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x108);
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,&local_78,&local_88);
    if ((wchar_t ****)local_78 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
    if ((*(char *)(*param_2 + 0x16f) == '\x01') &&
       (lVar12 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872ce8), lVar12 != 0)) {
      local_78 = (wchar_t ***)0x149e46f7c;
      uStack_70 = CONCAT35(uStack_70._5_3_,5);
      uVar5 = FUN_14001a6c0(&local_78,1);
      FUN_140de6e52(lVar12,L"Core.System",uVar5,&local_88);
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    bVar3 = true;
  }
  lVar12 = *param_2;
  if ((*(char *)(lVar12 + 0x178) == '\0') && (0 < *(int *)(lVar12 + 0x148))) {
    local_78 = (wchar_t ***)0x0;
    uStack_70 = 0;
    FUN_14129e938(lVar12,&local_78);
    uVar7 = FUN_140008f10();
    local_100 = local_78;
    local_f8 = (undefined4)uStack_70;
    FUN_1467e81aa(uVar7);
    FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
    if ((wchar_t ****)local_78 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
    lVar12 = *param_2;
  }
  if (0 < *(int *)(lVar12 + 0x138)) {
    FUN_140bee914(&local_98,lVar12 + 0x28);
    local_78 = local_98;
    if ((int)local_90 == 0) {
      local_78 = (wchar_t ***)&DAT_149dfb77a;
    }
    if ((wchar_t ****)local_78 == (wchar_t ****)0x0) {
      uVar5 = 0;
    }
    else {
      sVar6 = wcslen((wchar_t *)local_78);
      uVar5 = (int)sVar6;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
    local_68 = L"Binaries";
    local_60 = 8;
    local_58 = L"Win64";
    local_50 = 5;
    FUN_140bee87a(&local_88,&local_78,3);
    if ((wchar_t ****)local_98 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    puVar9 = local_88;
    if (local_80 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    FUN_14278e6da(&DAT_14c874628,puVar9,1 < *(uint *)(*param_2 + 0x240));
    iVar11 = 0;
    do {
      FUN_1427a9dbe(param_1,*param_2,iVar11);
      iVar11 = iVar11 + 1;
    } while (iVar11 != 9);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar12 = *param_2;
  }
  *(byte *)(lVar12 + 0x244) = *(byte *)(lVar12 + 0x244) | 2;
  if ((bVar3) && ((longlong)*(int *)(param_1 + 0x208) != 0)) {
    lVar12 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x200) + 8 + lVar12) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x200) + lVar12) != 0)) {
        FUN_146854552(param_1 + 0x200,*param_2);
        break;
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x208) * 0x10 != lVar12);
  }
  if (DAT_14c872be8 != 0) {
    FUN_146810c80();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427ac768 FUN_1427ac768 body=176 status=ok
// SIG undefined FUN_1427ac768(void)

ulonglong FUN_1427ac768(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if ((param_2 == (longlong *)0x0) || (*(char *)(*param_2 + 0x178) != '\x01')) {
    uVar5 = 0;
    goto LAB_1427ac7c4;
  }
  plVar3 = (longlong *)FUN_1427a1d95(param_1 + 8,*param_2 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
LAB_1427ac7d2:
    lVar4 = FUN_1427a9c08(param_1 + 8,param_2);
    if (lVar4 == 0) goto LAB_1427ac7f2;
    FUN_1427ac142(param_1,lVar4);
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    lVar4 = *plVar3;
    plVar3 = (longlong *)plVar3[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (((lVar4 == 0) || (lVar4 == *param_2)) || ((*(byte *)(lVar4 + 0x244) & 2) == 0))
    goto LAB_1427ac7d2;
LAB_1427ac7f2:
    uVar5 = 0;
  }
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
LAB_1427ac7c4:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1427ac818 FUN_1427ac818 body=262 status=ok
// SIG undefined FUN_1427ac818(void)

ulonglong FUN_1427ac818(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_1427a1d95(param_1 + 8);
  if (plVar4 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_1427ac8a7;
  }
  lVar3 = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x244) & 2) == 0)) ||
     (*(char *)(lVar3 + 0x178) != '\x01')) {
LAB_1427ac883:
    uVar6 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x245) != '\0') {
      *(char *)(lVar3 + 0x245) = *(char *)(lVar3 + 0x245) + '\x01';
      goto LAB_1427ac883;
    }
    if (*(int *)(lVar3 + 0x148) == 0) goto LAB_1427ac883;
    *(undefined1 *)(lVar3 + 0x245) = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_14129e938(lVar3,&local_28);
    uVar5 = FUN_140008f10();
    local_38 = local_28;
    local_30 = (undefined4)uStack_20;
    FUN_1467e81aa(uVar5);
    FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    uVar6 = CONCAT71((int7)((ulonglong)&local_28 >> 8),1);
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
LAB_1427ac8a7:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427ac920 FUN_1427ac920 body=275 status=ok
// SIG undefined FUN_1427ac920(void)

ulonglong FUN_1427ac920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)FUN_1427a1d95(param_1 + 8);
  if (plVar5 == (longlong *)0x0) {
    uVar7 = 0;
    goto LAB_1427ac9bc;
  }
  lVar4 = *plVar5;
  plVar5 = (longlong *)plVar5[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0x244) & 2) == 0)) ||
     (*(char *)(lVar4 + 0x178) != '\x01')) {
LAB_1427ac998:
    uVar7 = 0;
  }
  else {
    bVar3 = *(byte *)(lVar4 + 0x245);
    if (1 < bVar3) {
      *(byte *)(lVar4 + 0x245) = bVar3 - 1;
      goto LAB_1427ac998;
    }
    if (((bVar3 == 0) || (*(int *)(lVar4 + 0x148) == 0)) || (DAT_14c872bd8 != '\0'))
    goto LAB_1427ac998;
    *(undefined1 *)(lVar4 + 0x245) = 0;
    local_28 = 0;
    uStack_20 = 0;
    FUN_14129e938(lVar4,&local_28);
    uVar6 = FUN_140008f10();
    local_38 = local_28;
    local_30 = (undefined4)uStack_20;
    FUN_1467e852a(uVar6);
    FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    uVar7 = CONCAT71((int7)((ulonglong)&local_28 >> 8),1);
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
LAB_1427ac9bc:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427aca34 FUN_1427aca34 body=1248 status=ok
// SIG undefined FUN_1427aca34(void)

ulonglong FUN_1427aca34(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar10;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  wchar_t *local_88 [2];
  wchar_t *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar5 = (longlong *)FUN_1427a1d95(param_1 + 8);
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (plVar5 == (longlong *)0x0) {
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
    lVar2 = *plVar5;
    plVar5 = (longlong *)plVar5[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    uVar10 = CONCAT71(uVar11,1);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x244) & 1) != 0)) {
      if (*(char *)(lVar2 + 0x178) == '\x01') {
        iVar9 = 9;
        do {
          if (iVar9 != 9) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
            {
              DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
              DAT_14c844840[4] = L'\0';
              DAT_14c844840[5] = L'\0';
              DAT_14c844840[6] = L'\0';
              DAT_14c844840[7] = L'\0';
              *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
              DAT_14c844840[8] = L'\xffff';
              DAT_14c844840[9] = L'\xffff';
              DAT_14c844840[10] = L'\xffff';
              DAT_14c844840[0xb] = L'\xffff';
              DAT_14c844840[0xc] = L'\0';
              DAT_14c844840[0xd] = L'\0';
              DAT_14c844840[0xe] = L'\0';
              DAT_14c844840[0xf] = L'\0';
              DAT_14c844840[0x10] = L'\0';
              DAT_14c844840[0x11] = L'\0';
              DAT_14c844840[0x12] = L'\0';
              DAT_14c844840[0x13] = L'\0';
              DAT_14c844840[0x14] = L'\0';
              DAT_14c844840[0x15] = L'\0';
              DAT_14c844840[0x16] = L'\0';
              DAT_14c844840[0x17] = L'\0';
              if (DAT_14c844840 != (wchar_t *)0x0) {
                LOCK();
                *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
                UNLOCK();
              }
              DAT_14c844848 = 0;
              atexit(FUN_142760bef);
              _Init_thread_footer(&DAT_14c844850);
            }
            local_78 = DAT_14c844840;
            if (DAT_14c844840 != (wchar_t *)0x0) {
              if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
                LOCK();
                *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
                UNLOCK();
              }
              else {
                (**(code **)(*(longlong *)DAT_14c844840 + 8))();
              }
            }
            uStack_70 = uStack_70 & 0xffffffff00000000;
            local_a8 = 1;
            cVar3 = FUN_1427aacf8(lVar2,iVar9,&local_78,1);
            if (cVar3 == '\0') {
              local_88[0] = local_78;
              if (param_3 != 0) {
                FUN_140008f88(param_3,&local_78);
                local_88[0] = local_78;
              }
              goto LAB_1427acd71;
            }
            if (local_78 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_78 + 0x10))();
            }
          }
          bVar12 = iVar9 != 0;
          iVar9 = iVar9 + -1;
        } while (bVar12);
        if (((*(char *)(lVar2 + 0x245) != '\0') && (0 < *(int *)(lVar2 + 0x148))) &&
           (DAT_14c872bd8 == '\0')) {
          *(undefined1 *)(lVar2 + 0x245) = 0;
          local_78 = (wchar_t *)0x0;
          uStack_70 = 0;
          FUN_14129e938(lVar2,&local_78);
          uVar7 = FUN_140008f10();
          local_a0 = local_78;
          local_98 = (undefined4)uStack_70;
          FUN_1467e852a(uVar7);
          FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
          if (local_78 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if (((*(char *)(lVar2 + 0x16f) != '\0') || (*(char *)(lVar2 + 0x170) != '\0')) &&
           ((*(int *)(param_1 + 0x120) != 0 &&
            ((*(longlong **)(param_1 + 0x118) != (longlong *)0x0 &&
             (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x30))(), cVar3 != '\0'))))))
        {
          if ((*(char *)(lVar2 + 0x16f) == '\x01') &&
             (lVar6 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872ce8), lVar6 != 0)) {
            FUN_14129eb64(lVar2,local_88);
            local_78 = L"Paths";
            uStack_70 = CONCAT35(uStack_70._5_3_,5);
            uVar4 = FUN_14001a6c0(&local_78,1);
            FUN_146803810(lVar6,L"Core.System",uVar4,local_88);
            if (local_88[0] != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((longlong)*(int *)(param_1 + 0x238) != 0) {
            lVar6 = 0;
            do {
              if ((*(int *)(*(longlong *)(param_1 + 0x230) + 8 + lVar6) != 0) &&
                 (*(longlong *)(*(longlong *)(param_1 + 0x230) + lVar6) != 0)) {
                FUN_146854552(param_1 + 0x230,lVar2);
                break;
              }
              lVar6 = lVar6 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x238) * 0x10 != lVar6);
          }
          FUN_14129eb64(lVar2,&local_78);
          FUN_14170d440(lVar2,local_88);
          if (*(int *)(param_1 + 0x120) == 0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = *(longlong **)(param_1 + 0x118);
          }
          (**(code **)(*plVar8 + 0x58))(plVar8,local_88,&local_78);
          if (local_88[0] != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if (DAT_14c926ca0 != (undefined8 *)0x0) {
            (**(code **)*DAT_14c926ca0)(DAT_14c926ca0,lVar2);
          }
        }
        iVar9 = 9;
        do {
          if (iVar9 != 9) {
            local_a8 = param_4;
            FUN_1427aacf8(lVar2,iVar9,0,0);
          }
          bVar12 = iVar9 != 0;
          iVar9 = iVar9 + -1;
        } while (bVar12);
        *(byte *)(lVar2 + 0x244) = *(byte *)(lVar2 + 0x244) & 0xfc;
        uVar10 = 0xffffff01;
      }
      else {
        if (param_3 != 0) {
          local_78 = L"UnloadPluginNotExplicitlyLoaded";
          uStack_70._0_4_ = 0x1f;
          FUN_1446e940c(local_8c,&local_78);
          local_78 = L"PluginManager";
          uStack_70._0_4_ = 0xd;
          FUN_1446e940c(local_90,&local_78);
          local_78 = L"Plugin was not explicitly loaded";
          uStack_70 = CONCAT44(uStack_70._4_4_,0x20);
          FUN_140208c1e(local_88,local_90,local_8c,&local_78);
          FUN_140008f88(param_3,local_88);
LAB_1427acd71:
          if (local_88[0] != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_88[0] + 0x10))();
          }
        }
        uVar10 = 0;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar5 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1427acf16 FUN_1427acf16 body=485 status=ok
// SIG undefined FUN_1427acf16(void)

longlong * FUN_1427acf16(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar5 = 1;
    uVar8 = 0;
    iVar9 = 0;
    iVar13 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x18);
    }
    uVar6 = *puVar10;
    if (uVar6 == 0) {
      iVar13 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar13 = iVar2 + -1;
      }
      uVar8 = 0;
      uVar5 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar5 = uVar8;
      }
      iVar9 = 0;
      do {
        if (uVar5 == uVar8) goto LAB_1427ad0b5;
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar10[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar8 = 0;
      iVar9 = 0;
    }
    uVar5 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar5 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar13 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar13) {
      iVar13 = iVar2;
    }
  }
  if (iVar13 < iVar2) {
    iVar7 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = iVar7 >> 5;
    uVar6 = 0xffffffff;
    do {
      lVar12 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar13 * 0x28) +
                (longlong)
                (*(int *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar13 * 0x28) + -1) * 0x10)
      ;
      if (0 < (longlong)*(int *)(lVar12 + 0x138)) {
        lVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar12 + 0x130) + lVar11) == param_3) {
            if (*(int *)(lVar12 + 0x20) == 0) {
              puVar3 = &DAT_149dfb77a;
            }
            else {
              puVar3 = *(undefined2 **)(lVar12 + 0x18);
            }
            FUN_1446f470e(param_2,puVar3,1);
            return param_2;
          }
          lVar11 = lVar11 + 0x168;
        } while ((longlong)*(int *)(lVar12 + 0x138) * 0x168 - lVar11 != 0);
      }
      uVar6 = uVar6 & ~(uint)uVar5;
      puVar10 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x18);
      }
      iVar13 = (int)uVar8;
      lVar12 = (longlong)iVar13;
      uVar14 = puVar10[lVar12] & uVar6;
      if (uVar14 == 0) {
        iVar4 = iVar7;
        if (iVar7 < iVar13) {
          iVar4 = iVar13;
        }
        if (iVar7 <= iVar13) break;
        lVar11 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar10[lVar12 + lVar11 + 1];
          if (uVar14 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar4 - lVar12 == lVar11) goto LAB_1427ad0b5;
        }
        uVar8 = (ulonglong)(iVar13 + (int)lVar11 + 1);
        uVar6 = 0xffffffff;
      }
      uVar5 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar5 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar13 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar2);
  }
LAB_1427ad0b5:
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 1427ad0fb FUN_1427ad0fb body=49 status=ok
// SIG undefined FUN_1427ad0fb(void)

void FUN_1427ad0fb(void)

{
  FUN_144760e21(DAT_14c926f38,DAT_14c926f40);
  if (DAT_14c926f38 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427ad144 FUN_1427ad144 body=583 status=ok
// SIG undefined FUN_1427ad144(void)

undefined4 FUN_1427ad144(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_48 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  local_40 = 0;
  lVar6 = FUN_14001cc68(0x138,0x10);
  FUN_14684d29e(lVar6);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e49bf0;
  plVar7[2] = lVar6;
  uVar5 = FUN_146246cfe(lVar6,param_2,&local_48);
  if ((char)uVar5 == '\0') {
    FUN_1427863e0();
    FUN_1427864dc(0,0,&local_48,&DAT_14c873210);
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x10);
    *(longlong *)(param_1 + 8) = lVar6;
    *(longlong **)(param_1 + 0x10) = plVar7;
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
    iVar3 = *(int *)(param_1 + 0x24);
    FUN_146855785(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((iVar3 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
      FUN_1468557c4(param_1 + 0x18);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427ad38c FUN_1427ad38c body=3162 status=ok
// SIG undefined FUN_1427ad38c(void)

undefined4 FUN_1427ad38c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 unaff_RBX;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_1f8 [40];
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong *local_180;
  undefined4 local_178;
  undefined8 local_170;
  longlong *local_168;
  longlong *local_160;
  undefined4 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  longlong *local_118 [2];
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  wchar_t **local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_14099759e(param_2,*(longlong *)(param_1 + 8) + 0x38);
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)&local_b8 >> 8),(int)uStack_b0 <= local_84);
    if (local_84 < (int)uStack_b0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      local_f8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_f0 = 0;
      if (local_90 == 0) {
        uVar14 = 1;
        uVar6 = 0;
        iVar10 = 0;
        iVar15 = 0;
      }
      else {
        puVar4 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar4 = local_a8;
        }
        uVar8 = *puVar4;
        if (uVar8 == 0) {
          iVar15 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar15 = local_90 + -1;
          }
          uVar6 = 0;
          uVar16 = iVar15 >> 5;
          if (iVar15 >> 5 < 1) {
            uVar16 = 0;
          }
          iVar10 = 0;
          do {
            if (uVar16 == uVar6) goto LAB_1427ad5e5;
            iVar10 = iVar10 + 0x20;
            uVar8 = puVar4[uVar6 + 1];
            uVar6 = uVar6 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar6 = 0;
          iVar10 = 0;
        }
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar3 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar15 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (local_90 <= iVar15) {
          iVar15 = local_90;
        }
      }
      if (iVar15 < local_90) {
        puVar4 = local_a8;
        if (local_98 != (uint *)0x0) {
          puVar4 = local_98;
        }
        iVar11 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar11 = local_90 + -1;
        }
        iVar11 = iVar11 >> 5;
        uVar8 = 0xffffffff;
        do {
          iVar9 = *(int *)(local_b8 + 8 + (longlong)iVar15 * 0x14);
          if (iVar9 != 0) {
            FUN_145715fae(&local_108,local_b8 + (longlong)iVar15 * 0x14);
            switch(iVar9) {
            case 1:
              local_128 = local_108;
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 8))();
              }
              local_120 = local_100;
              local_68 = L"PrimaryGameModuleNotFound";
              local_60 = 0x19;
              FUN_1446e940c(local_14c,&local_68);
              local_68 = L"ProjectManager";
              local_60 = 0xe;
              FUN_1446e940c(local_150,&local_68);
              local_68 = 
              L"The game module \'{0}\' could not be found. Please ensure that this module exists and that it is compiled."
              ;
              local_60 = 0x68;
              FUN_140208c1e(local_148,local_150,local_14c,&local_68);
              FUN_14023409e(&local_138,local_148,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,&local_128);
              local_d0 = &local_48;
              local_d8 = &local_68;
              FUN_14010d304(&local_c8);
              local_e8 = local_138;
              local_e0 = local_130;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_118,&local_e8,&local_c8);
              FUN_14007f2db(local_c8,local_c0);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              plVar5 = local_128;
              if (local_130 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_130 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_130)(local_130);
                  LOCK();
                  piVar2 = (int *)((longlong)local_130 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar5 = local_128;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_130 + 0x10))(local_130);
                    plVar5 = local_128;
                  }
                }
              }
              break;
            case 2:
              local_160 = local_108;
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 8))();
              }
              local_158 = local_100;
              local_68 = L"PrimaryGameModuleIncompatible";
              local_60 = 0x1d;
              FUN_1446e940c(local_14c,&local_68);
              local_68 = L"ProjectManager";
              local_60 = 0xe;
              FUN_1446e940c(local_150,&local_68);
              local_68 = 
              L"The game module \'{0}\' does not appear to be up to date. This may happen after updating the engine. Please recompile this module and try again."
              ;
              local_60 = 0x8e;
              FUN_140208c1e(local_148,local_150,local_14c,&local_68);
              FUN_14023409e(&local_170,local_148,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,&local_160);
              local_d0 = &local_48;
              local_d8 = &local_68;
              FUN_14010d304(&local_c8);
              local_e8 = local_170;
              local_e0 = local_168;
              if (local_168 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_168 + 1) = (int)local_168[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_118,&local_e8,&local_c8);
              FUN_14007f2db(local_c8,local_c0);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              plVar5 = local_160;
              if (local_168 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_168 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_168)(local_168);
                  LOCK();
                  piVar2 = (int *)((longlong)local_168 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar5 = local_160;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_168 + 0x10))(local_168);
                    plVar5 = local_160;
                  }
                }
              }
              break;
            case 3:
              local_1a0 = local_108;
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 8))();
              }
              local_198 = local_100;
              local_68 = L"PrimaryGameModuleCouldntBeLoaded";
              local_60 = 0x20;
              FUN_1446e940c(local_14c,&local_68);
              local_68 = L"ProjectManager";
              local_60 = 0xe;
              FUN_1446e940c(local_150,&local_68);
              local_68 = 
              L"The game module \'{0}\' could not be loaded. There may be an operating system error, the module may not be properly set up, or a plugin which has been included into the build has not been turned on."
              ;
              local_60 = 0xc4;
              FUN_140208c1e(local_148,local_150,local_14c,&local_68);
              FUN_14023409e(&local_1b0,local_148,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,&local_1a0);
              local_d0 = &local_48;
              local_d8 = &local_68;
              FUN_14010d304(&local_c8);
              local_e8 = local_1b0;
              local_e0 = local_1a8;
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_118,&local_e8,&local_c8);
              FUN_14007f2db(local_c8,local_c0);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              plVar5 = local_1a0;
              if (local_1a8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_1a8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_1a8)(local_1a8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1a8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar5 = local_1a0;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_1a8 + 0x10))(local_1a8);
                    plVar5 = local_1a0;
                  }
                }
              }
              break;
            case 4:
              local_180 = local_108;
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 8))();
              }
              local_178 = local_100;
              local_68 = L"PrimaryGameModuleFailedToInitialize";
              local_60 = 0x23;
              FUN_1446e940c(local_14c,&local_68);
              local_68 = L"ProjectManager";
              local_60 = 0xe;
              FUN_1446e940c(local_150,&local_68);
              local_68 = 
              L"The game module \'{0}\' could not be successfully initialized after it was loaded.";
              local_60 = 0x50;
              FUN_140208c1e(local_148,local_150,local_14c,&local_68);
              FUN_14023409e(&local_190,local_148,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,&local_180);
              local_d0 = &local_48;
              local_d8 = &local_68;
              FUN_14010d304(&local_c8);
              local_e8 = local_190;
              local_e0 = local_188;
              if (local_188 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_188 + 1) = (int)local_188[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_118,&local_e8,&local_c8);
              FUN_14007f2db(local_c8,local_c0);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              plVar5 = local_180;
              if (local_188 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_188 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_188)(local_188);
                  LOCK();
                  piVar2 = (int *)((longlong)local_188 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar5 = local_180;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_188 + 0x10))(local_188);
                    plVar5 = local_180;
                  }
                }
              }
              break;
            default:
              local_1c0 = local_108;
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 8))();
              }
              local_1b8 = local_100;
              local_68 = L"PrimaryGameModuleGenericLoadFailure";
              local_60 = 0x23;
              FUN_1446e940c(local_14c,&local_68);
              local_68 = L"ProjectManager";
              local_60 = 0xe;
              FUN_1446e940c(local_150,&local_68);
              local_68 = 
              L"The game module \'{0}\' failed to load for an unspecified reason.  Please report this error."
              ;
              local_60 = 0x5a;
              FUN_140208c1e(local_148,local_150,local_14c,&local_68);
              FUN_14023409e(&local_1d0,local_148,1);
              local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
              FUN_14023423e(local_58,&local_1c0);
              local_d0 = &local_48;
              local_d8 = &local_68;
              FUN_14010d304(&local_c8);
              local_e8 = local_1d0;
              local_e0 = local_1c8;
              if (local_1c8 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_118,&local_e8,&local_c8);
              FUN_14007f2db(local_c8,local_c0);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              if (local_58[0] != (longlong *)0x0) {
                (**(code **)(*local_58[0] + 0x10))();
              }
              plVar5 = local_1c0;
              if (local_1c8 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_1c8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_1c8)(local_1c8);
                  LOCK();
                  piVar2 = (int *)((longlong)local_1c8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar5 = local_1c0;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_1c8 + 0x10))(local_1c8);
                    plVar5 = local_1c0;
                  }
                }
              }
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))();
            }
            FUN_140008f88(&local_f8,local_118);
            if (local_118[0] != (longlong *)0x0) {
              (**(code **)(*local_118[0] + 0x10))();
            }
            if (local_148[0] != (longlong *)0x0) {
              (**(code **)(*local_148[0] + 0x10))();
            }
            if (local_108 != (longlong *)0x0) {
              (**(code **)(*local_108 + 0x10))();
            }
            break;
          }
          uVar8 = uVar8 & ~(uint)uVar14;
          iVar15 = (int)uVar6;
          lVar12 = (longlong)iVar15;
          uVar16 = puVar4[lVar12] & uVar8;
          if (uVar16 == 0) {
            iVar9 = iVar11;
            if (iVar11 < iVar15) {
              iVar9 = iVar15;
            }
            if (iVar11 <= iVar15) break;
            lVar13 = 0;
            while( true ) {
              iVar10 = iVar10 + 0x20;
              uVar16 = puVar4[lVar12 + lVar13 + 1];
              if (uVar16 != 0) break;
              lVar13 = lVar13 + 1;
              if (iVar9 - lVar12 == lVar13) goto LAB_1427ad5e5;
            }
            uVar6 = (ulonglong)(iVar15 + (int)lVar13 + 1);
            uVar8 = 0xffffffff;
          }
          uVar14 = (ulonglong)(-uVar16 & uVar16);
          uVar3 = uVar14 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar15 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        } while (iVar15 < local_90);
      }
LAB_1427ad5e5:
      FUN_1427863e0();
      FUN_1427864dc(0,0,&local_f8,&DAT_14c873210);
      if (local_f8 != (longlong *)0x0) {
        (**(code **)(*local_f8 + 0x10))();
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1427aeaa8(&local_b8);
  }
  FUN_1427b03d2(param_1 + 0x48,param_2,uVar7);
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427adff8 FUN_1427adff8 body=49 status=ok
// SIG undefined FUN_1427adff8(void)

void FUN_1427adff8(void)

{
  FUN_1447a1747(DAT_14c926f88,DAT_14c926f90);
  if (DAT_14c926f88 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1427ae02a FUN_1427ae02a body=199 status=ok
// SIG undefined FUN_1427ae02a(void)

int FUN_1427ae02a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1427ae070:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1427ae0dd;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1427ae0dd;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1427ae08a;
    }
  }
  return -1;
LAB_1427ae0dd:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1427ae08a:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1427ae070;
}



// FUNCTION 1427ae118 FUN_1427ae118 body=29 status=ok
// SIG undefined FUN_1427ae118(void)

undefined8 FUN_1427ae118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427ae136 FUN_1427ae136 body=330 status=ok
// SIG undefined FUN_1427ae136(void)

undefined8 FUN_1427ae136(longlong param_1,wchar_t *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (wchar_t *)0x0 && param_3 == '\0') {
    sVar5 = wcslen(param_2);
    if (0xf < (int)sVar5) {
      lVar6 = 0x10;
      lVar7 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)L".upluginmanifest" + lVar7);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)((longlong)param_2 + lVar7 + ((ulonglong)(uint)((int)sVar5 * 2) - 0x20))
        ;
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_1427ae1de;
LAB_1427ae1ae:
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) goto LAB_1427ae1de;
        lVar7 = lVar7 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1427ae1ae;
      }
      if (uVar8 != uVar10) goto LAB_1427ae25d;
LAB_1427ae1de:
      plVar4 = *(longlong **)(param_1 + 0x10);
      iVar3 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(plVar4,iVar3);
      }
      plVar1 = (longlong *)(*plVar4 + (longlong)iVar3 * 0x10);
      puVar2 = (undefined8 *)(*plVar4 + (longlong)iVar3 * 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_14006620a(&local_40,param_2,sVar5 & 0xffffffff);
      if (&local_40 == plVar1) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        *plVar1 = local_40;
        *(undefined4 *)(plVar1 + 1) = local_38;
        *(undefined4 *)((longlong)plVar1 + 0xc) = local_34;
      }
    }
  }
LAB_1427ae25d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427ae281 FUN_1427ae281 body=1401 status=ok
// SIG undefined FUN_1427ae281(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427ae281(undefined8 param_1,ulonglong param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5,byte param_6,longlong param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined1 uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  undefined1 uVar20;
  undefined1 auStack_138 [32];
  int *local_118;
  undefined1 *local_110;
  byte *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e5;
  int local_e4;
  undefined1 local_e0 [7];
  undefined1 local_d9;
  int local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  int local_c8;
  char local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar15 = (int)param_2;
  if (iVar15 == 0) goto LAB_1427ae6b8;
  bVar7 = FUN_1447e0190();
  iVar9 = 0;
  if (((1 < iVar15) && (((~bVar7 | param_6) & 1) == 0)) &&
     (iVar9 = (param_3 / 2 + iVar15) / param_3, DAT_14c8335d8 < iVar9)) {
    iVar9 = DAT_14c8335d8;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = (uint)(*(undefined **)(lVar4 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar4 + 0x2c8) == 0) +
          iVar9;
  if (DAT_14c8c27ac < 1) {
    memset(&local_d0,0,0x82);
    local_f0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    FUN_140e55932(&local_d0,&local_f0,&local_d4,&local_d8);
    iVar10 = local_d8;
    local_110 = &local_e5;
    local_118 = &local_e4;
    FUN_1457b80ec(local_d4,local_d8,&local_d9,local_e0);
    DAT_14c8c27ac = iVar10;
    if ((0 < local_e4) && (local_e4 <= iVar10)) {
      DAT_14c8c27ac = local_e4;
    }
  }
  iVar10 = DAT_14c8c27ac;
  if (iVar9 < DAT_14c8c27ac) {
    iVar10 = iVar9;
  }
  iVar9 = 1;
  if (iVar10 < 2) {
    iVar10 = 1;
  }
  iVar18 = *(int *)(param_7 + 8);
  iVar5 = iVar18;
  if (iVar10 < iVar18) {
    iVar5 = iVar10;
  }
  if (iVar18 == 0) {
    iVar5 = iVar10;
  }
  if (iVar5 < 2) {
    if (0 < iVar15) {
      iVar9 = 0;
      do {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,iVar9);
        (*(code *)*param_4)(param_4[1],&local_d0);
        iVar9 = iVar9 + 1;
      } while (iVar15 != iVar9);
    }
    goto LAB_1427ae6b8;
  }
  iVar10 = iVar15;
  if ((param_6 & 2) == 0) {
    iVar18 = iVar5 * 6;
    iVar9 = 1;
    iVar19 = -6;
    param_2 = param_2 & 0xffffffff;
    do {
      if (iVar18 <= iVar15) {
        iVar9 = (iVar15 + -1 + iVar18) / iVar18;
        param_2 = (longlong)(iVar9 + iVar15 + -1) / (longlong)iVar9;
        iVar10 = (int)param_2;
        param_2 = param_2 & 0xffffffff;
        if (iVar5 <= iVar10) break;
      }
      iVar10 = (int)param_2;
      iVar18 = iVar18 - iVar5;
      iVar19 = iVar19 + 1;
    } while (iVar19 != 0);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_100 = (byte *)(lVar4 + 0xc60);
  uVar13 = 6;
  if ((*local_100 & 0x37) != 0) {
    uVar13 = 0;
  }
  uVar20 = 3;
  if ((param_6 & 8) == 0) {
    uVar20 = uVar13;
  }
  local_f8 = param_1;
  FUN_144a85b52(&local_f0,1);
  puVar2 = (undefined8 *)(lVar4 + 0x308);
  puVar12 = (uint *)*puVar2;
  if (puVar12 != (uint *)0x0) goto LAB_1427ae4bc;
  while( true ) {
    uVar14 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar14 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar14 | 1;
      __tlregdtor(&LAB_1427ae0f1);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar11 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar11 = 0xffffffff;
    *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
    puVar11[0x12] = 0;
    *puVar2 = puVar11;
    FUN_140217a48(puVar2);
    puVar12 = (uint *)*puVar2;
LAB_1427ae4bc:
    puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0x3fU & 0xffffffffffffffc0);
    puVar16 = (uint *)(puVar17 + 0x10);
    uVar14 = puVar12[0x12];
    if (puVar16 <= puVar12 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
      LOCK();
      uVar3 = *puVar12;
      *puVar12 = *puVar12 + uVar14 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar14) != 0xffffffff) break;
      puVar12 = (uint *)*puVar2;
      *puVar12 = 0xffffffff;
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar2 = puVar12;
      puVar17 = (undefined8 *)((longlong)puVar12 + 0x97U & 0xffffffffffffffc0);
      puVar16 = (uint *)(puVar17 + 0x10);
      uVar14 = 0;
      if (puVar16 <= puVar12 + 0x4000) {
        uVar14 = 1;
        goto LAB_1427ae541;
      }
    }
  }
  uVar14 = uVar14 + 1;
LAB_1427ae541:
  *(uint **)(puVar12 + 0x10) = puVar16;
  puVar12[0x12] = uVar14;
  *puVar17 = &PTR_FUN_149e002e8;
  *(undefined4 *)(puVar17 + 1) = 0;
  *puVar17 = &PTR_FUN_149e49058;
  puVar17[3] = local_f8;
  *(undefined4 *)(puVar17 + 4) = 0;
  *(undefined4 *)(puVar17 + 5) = 0;
  *(int *)((longlong)puVar17 + 0x2c) = iVar15;
  *(int *)(puVar17 + 6) = iVar9;
  *(int *)((longlong)puVar17 + 0x34) = iVar10;
  puVar17[7] = param_7;
  puVar17[8] = param_4;
  puVar17[9] = &local_f0;
  *(undefined1 *)(puVar17 + 10) = uVar20;
  puVar17[0xb] = 0;
  puVar17[0xc] = 0;
  *(int *)((longlong)puVar17 + 0x24) = iVar10;
  FUN_140106120(puVar17 + 0xb,iVar5 + -1);
  if (puVar17 == (undefined8 *)0x0) {
    LOCK();
    iVar15 = _DAT_00000028 + 1;
    UNLOCK();
    if ((_DAT_00000028 != -1) && (iVar9 = _DAT_00000028, _DAT_00000028 < _DAT_00000060))
    goto LAB_1427ae600;
  }
  else {
    LOCK();
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar17 + 5);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    iVar15 = _DAT_00000028;
    if ((iVar9 != -1) && (iVar9 < *(int *)(puVar17 + 0xc))) {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      iVar15 = _DAT_00000028;
LAB_1427ae600:
      _DAT_00000028 = iVar15;
      local_d0 = puVar17;
      FUN_1449921ae(&local_d0,iVar9,1);
      iVar15 = _DAT_00000028;
      if (local_d0 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d0 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar15 = _DAT_00000028;
        if (*piVar1 == 0) {
          (**(code **)*local_d0)(local_d0,1);
          iVar15 = _DAT_00000028;
        }
      }
    }
  }
  _DAT_00000028 = iVar15;
  local_c4 = '\0';
  local_d0 = puVar17;
  local_c8 = iVar5 + -1;
  cVar8 = FUN_140080558(&local_d0,1);
  if (cVar8 == '\0') {
    plVar6 = (longlong *)CONCAT44(uStack_ec,local_f0);
    if (((param_6 & 4) == 0) || (*(int *)local_100 != 0x10)) {
      (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
    }
    else {
      cVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,1,0);
      while (cVar8 == '\0') {
        (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,DAT_14c7585d4);
        cVar8 = (**(code **)(*(longlong *)CONCAT44(uStack_ec,local_f0) + 0x20))
                          ((longlong *)CONCAT44(uStack_ec,local_f0),1,0);
      }
    }
  }
  if ((local_d0 != (undefined8 *)0x0) &&
     ((local_c4 != '\x01' || (FUN_1449921ae(&local_d0,local_c8,1), local_d0 != (undefined8 *)0x0))))
  {
    LOCK();
    piVar1 = (int *)(local_d0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  FUN_144a75412(&local_f0);
LAB_1427ae6b8:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427ae7fc FUN_1427ae7fc body=367 status=ok
// SIG undefined FUN_1427ae7fc(void)

undefined8 * FUN_1427ae7fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_LAB_149e490a0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_1427ae8b8;
  do {
    uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar2 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar2 | 1;
      __tlregdtor(&LAB_1427ae0f1);
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar3 + 0x310);
    *(undefined8 *)(lVar3 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_1467aa772(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_1427ae8b8:
    uVar6 = *(longlong *)(puVar5 + 0x10) + 7;
    while( true ) {
      puVar7 = (undefined8 *)(uVar6 & 0xfffffffffffffff8);
      if (puVar7 + 2 <= puVar5 + 0x4000) {
        *(undefined8 **)(puVar5 + 0x10) = puVar7 + 2;
        puVar5[0x12] = puVar5[0x12] + 1;
        *param_3 = puVar7;
        *puVar7 = *param_2;
        *param_2 = 0;
        *(undefined1 *)((longlong)puVar7 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
        return param_1;
      }
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + puVar5[0x12] + 1;
      UNLOCK();
      if ((uVar2 ^ puVar5[0x12]) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      uVar6 = (longlong)puVar5 + 0x5f;
    }
  } while( true );
}



// FUNCTION 1427ae96c FUN_1427ae96c body=241 status=ok
// SIG undefined FUN_1427ae96c(void)

void FUN_1427ae96c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *_Memory;
  int *piVar5;
  
  plVar2 = (longlong *)*param_2;
  puVar4 = (undefined8 *)*plVar2;
  if (puVar4 != (undefined8 *)0x0) {
    if (*(char *)((longlong)plVar2 + 0xc) == '\x01') {
      FUN_1449921ae(plVar2,(int)plVar2[1],1);
      puVar4 = (undefined8 *)*plVar2;
      if (puVar4 == (undefined8 *)0x0) goto LAB_1427ae98c;
    }
    LOCK();
    piVar5 = (int *)(puVar4 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
LAB_1427ae98c:
  if (plVar2 != (longlong *)0x0) {
    piVar5 = (int *)((ulonglong)plVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1427ae0f1);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001427ae9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1427aea5d FUN_1427aea5d body=75 status=ok
// SIG undefined FUN_1427aea5d(void)

void FUN_1427aea5d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1427aeaa8 FUN_1427aeaa8 body=118 status=ok
// SIG undefined FUN_1427aeaa8(void)

void FUN_1427aeaa8(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1427aeb1e FUN_1427aeb1e body=59 status=ok
// SIG undefined FUN_1427aeb1e(void)

void FUN_1427aeb1e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x10))();
    }
    FUN_140a49b34(param_1);
    param_1 = param_1 + 0x210;
  }
  return;
}



// FUNCTION 1427aeb59 FUN_1427aeb59 body=299 status=ok
// SIG undefined FUN_1427aeb59(void)

void FUN_1427aeb59(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  do {
    FUN_146846940(param_1);
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
    *(longlong **)(param_1 + 0x1f8) = DAT_14c844840;
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
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined1 *)(param_1 + 0x208) = 0;
    param_1 = param_1 + 0x210;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1427aec84 FUN_1427aec84 body=257 status=ok
// SIG undefined FUN_1427aec84(void)

void FUN_1427aec84(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x210;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x3f) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
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
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 / 0x210)) {
      uVar3 = uVar2 / 0x210 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x210,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 1427aed86 FUN_1427aed86 body=87 status=ok
// SIG undefined FUN_1427aed86(void)

void FUN_1427aed86(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)*param_1;
  lVar5 = (longlong)*param_2 * 0x210;
  lVar3 = (longlong)*param_2 * 0x10;
  if (*(int *)(*(longlong *)param_1[1] + 8 + lVar3) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(*(longlong *)param_1[1] + lVar3);
  }
  uVar2 = FUN_1468469fc(lVar1 + lVar5,puVar4,lVar1 + lVar5 + 0x1f8);
  *(undefined1 *)(lVar1 + 0x208 + lVar5) = uVar2;
  return;
}



// FUNCTION 1427aeddd FUN_1427aeddd body=321 status=ok
// SIG undefined FUN_1427aeddd(void)

void FUN_1427aeddd(undefined8 *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_2 + (longlong)param_3 * 0x10;
  iVar2 = *(int *)(*param_2 + 8 + (longlong)param_3 * 0x10);
  local_50 = 1;
  local_58 = &PTR_FUN_149e49840;
  local_48 = 0;
  uStack_40 = 0;
  if (*(int *)(*(longlong *)param_1[2] + 8 + (longlong)param_4 * 0x10) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(*(longlong *)param_1[2] + (longlong)param_4 * 0x10);
  }
  local_38 = lVar1;
  (**(code **)(*(longlong *)param_1[3] + 0x130))((longlong *)param_1[3],puVar4,&local_58);
  if (1 < (int)uStack_40) {
    if (*(int *)(lVar1 + 8) != iVar2) {
      FUN_1468548c8(lVar1,iVar2);
    }
    SRWLock = (PSRWLOCK)*param_1;
    AcquireSRWLockExclusive(SRWLock);
    plVar3 = (longlong *)param_1[1];
    iVar2 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar3,iVar2);
    }
    lVar1 = *plVar3;
    lVar5 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar1 + lVar5) = 0;
    *(longlong *)(lVar1 + lVar5) = local_48;
    local_48 = 0;
    *(int *)(lVar1 + 8 + lVar5) = (int)uStack_40;
    *(undefined4 *)(lVar1 + 0xc + lVar5) = uStack_40._4_4_;
    uStack_40 = 0;
    ReleaseSRWLockExclusive(SRWLock);
  }
  local_58 = &PTR_FUN_149e49840;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427aef20 FUN_1427aef20 body=125 status=ok
// SIG undefined FUN_1427aef20(void)

void FUN_1427aef20(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(lVar3 + 0x28);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 != -1) && (iVar2 < *(int *)(lVar3 + 0x60))) {
    local_18 = (undefined8 *)*param_1;
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
      UNLOCK();
    }
    FUN_1427af942(&local_18);
    if (local_18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_18)(local_18,1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427aef9e FUN_1427aef9e body=939 status=ok
// SIG undefined FUN_1427aef9e(void)

ulonglong FUN_1427aef9e(longlong *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_108 [38];
  byte local_e2;
  byte local_e1;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar7 = 0xffffffff;
    LOCK();
    bVar14 = DAT_14c7585d0 != 0xffffffff;
    DVar6 = dwTlsIndex;
    if (bVar14) {
      DVar7 = DAT_14c7585d0;
      DVar6 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar6;
    UNLOCK();
    if (bVar14) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar7;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_b0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_b0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_a0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_98 = '\0';
  local_90 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_b0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_d0 = -0x8000000000000000;
  lVar8 = *param_1;
  if (param_2 == 0) {
    lVar8 = *param_1;
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
    if (*(int *)(lVar8 + 0x20) + 2 <= (int)*(uint *)(lVar8 + 0x34)) {
      FUN_1427aef20(param_1);
      lVar8 = *param_1;
    }
    uVar13 = 0;
    if ('\x02' < *(char *)(lVar8 + 0x50)) {
      QueryPerformanceCounter(&local_88);
      auVar17._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar17._8_8_ = 0;
      auVar17 = roundpd(auVar17,auVar17,1);
      local_d0 = (longlong)auVar17._0_8_;
      if (0 < (int)DAT_14c7585cc) {
        uVar13 = (ulonglong)DAT_14c7585cc;
      }
      auVar15._0_8_ = (double)(int)uVar13 * 10000.0 + 0.5;
      auVar15._8_8_ = 0;
      auVar17 = roundpd(auVar15,auVar15,1);
      local_e0 = (longlong)auVar17._0_8_;
      lVar8 = *param_1;
      local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
      goto LAB_1427af124;
    }
  }
  else {
    uVar11 = (ulonglong)*(uint *)(lVar8 + 0x34);
  }
  local_c0 = 0;
  local_e0 = 0;
LAB_1427af124:
  iVar2 = *(int *)(lVar8 + 0x2c);
  local_b8 = (ulonglong)*(uint *)(lVar8 + 0x30);
  uVar3 = *(undefined8 *)(lVar8 + 0x38);
  uVar4 = *(undefined8 *)(lVar8 + 0x40);
  local_d4 = (int)uVar11 + -1;
  local_e1 = param_2 ^ 1;
  local_c0 = local_c0 ^ 1;
  local_e2 = param_2;
  local_c8 = uVar11;
  do {
    LOCK();
    piVar1 = (int *)(lVar8 + 0x20);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)local_c8 < iVar2) {
      bVar14 = local_d4 <= iVar9;
      if (local_d4 <= iVar9) {
        iVar9 = local_d4;
      }
      if ((local_e1 & bVar14) != 0) goto LAB_1427af270;
    }
    iVar9 = iVar9 * (int)local_b8;
    iVar12 = iVar9 + (int)local_b8;
    iVar5 = iVar2;
    if (iVar12 < iVar2) {
      iVar5 = iVar12;
    }
    iVar10 = iVar9;
    if (iVar9 < iVar5) {
      do {
        FUN_1427aeddd(uVar4,uVar3,(int)param_1[1],iVar10);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
    if (iVar9 < iVar2) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x24);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        if (local_e2 == 0) {
          (**(code **)(*(longlong *)**(undefined8 **)(*param_1 + 0x48) + 0x10))();
        }
        goto LAB_1427af272;
      }
    }
    if (iVar12 < iVar2 && (char)local_c0 == '\0') {
      QueryPerformanceCounter(&local_88);
      auVar16._0_8_ = ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0 + 0.5;
      auVar16._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,1);
      if (local_e0 < (longlong)auVar17._0_8_ - local_d0) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
LAB_1427af270:
        uVar11 = 0;
LAB_1427af272:
        if (local_98 == '\0') {
          local_98 = '\x01';
          *(int *)(local_b0 + 4) = *(int *)(local_b0 + 4) + -1;
          if (local_a0 != local_b0[2]) {
            FUN_14004673c();
          }
          *local_b0 = local_a8;
          local_b0[3] = local_90;
        }
        if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return uVar11 & 0xffffffff;
      }
    }
    else if (iVar2 <= iVar12) goto LAB_1427af270;
    lVar8 = *param_1;
  } while( true );
}



// FUNCTION 1427af34a FUN_1427af34a body=73 status=ok
// SIG undefined FUN_1427af34a(void)

void FUN_1427af34a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
      FUN_1427af942(param_1,(int)param_1[1]);
      puVar2 = (undefined8 *)*param_1;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
    }
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001427af389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1427af394 FUN_1427af394 body=57 status=ok
// SIG undefined FUN_1427af394(void)

undefined8 * FUN_1427af394(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e49840;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1427af3ce FUN_1427af3ce body=191 status=ok
// SIG undefined FUN_1427af3ce(void)

undefined8 FUN_1427af3ce(longlong param_1,wchar_t *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  wchar_t local_38 [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == '\0') {
    builtin_wcsncpy(local_38,L".uplugin",9);
    sVar3 = wcslen(param_2);
    if (7 < (int)sVar3) {
      iVar2 = wcscmp((wchar_t *)((longlong)param_2 + ((ulonglong)(uint)((int)sVar3 * 2) - 0x10)),
                     local_38);
      if (iVar2 == 0) {
        FUN_14020fad6(param_1 + 0x10,param_2);
        uVar4 = 0;
        goto LAB_1427af45c;
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x20);
    iVar2 = (int)plVar1[1];
    *(uint *)(plVar1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar1 + 0xc) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar1,iVar2);
    }
    FUN_140056680((longlong)iVar2 * 0x10 + *plVar1,param_2);
  }
  uVar4 = 1;
LAB_1427af45c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427af48e FUN_1427af48e body=434 status=ok
// SIG undefined FUN_1427af48e(void)

undefined8 * FUN_1427af48e(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  
  *param_1 = &PTR_FUN_149e49878;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar5);
      }
      lVar5 = lVar5 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar5);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_1427af912(lVar2,uVar4,param_3);
  if (param_1[0xb] != 0) {
    piVar6 = (int *)(param_1[0xb] & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1427ae0f1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) goto LAB_1427af558;
      }
      _aligned_free(piVar3);
    }
  }
LAB_1427af558:
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar6 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      piVar3 = piVar6;
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1427ae0f1);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        piVar3 = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar6;
        if (piVar3 == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(piVar3);
    }
  }
  return param_1;
}



// FUNCTION 1427af640 FUN_1427af640 body=53 status=ok
// SIG undefined FUN_1427af640(void)

void FUN_1427af640(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1427af676 FUN_1427af676 body=667 status=ok
// SIG undefined FUN_1427af676(void)

void FUN_1427af676(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *_Memory;
  uint *puVar9;
  int *piVar10;
  void *_Dst;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar7) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = (int)((ulonglong)uVar7 * 3 >> 3) + uVar7 + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar3) {
    uVar8 = (ulonglong)uVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x48);
  }
  uVar8 = uVar8 * 0x48;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_1427af771;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_1427ae0f1);
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar4 = *(undefined4 **)(lVar2 + 0x310);
    *(undefined8 *)(lVar2 + 0x310) = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar4 = 0xffffffff;
    *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    FUN_140217a48(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_1427af771:
    _Dst = (void *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar9 = (uint *)((longlong)_Dst + uVar8);
    uVar7 = puVar5[0x12];
    if (puVar9 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar3 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      _Dst = (void *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      puVar9 = (uint *)((longlong)_Dst + uVar8);
      uVar7 = 0;
      if (puVar9 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_1427af7eb;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1427af7eb:
  *(uint **)(puVar5 + 0x10) = puVar9;
  puVar5[0x12] = uVar7;
  uVar6 = ((longlong)_Src + 0xffffU & 0xffffffffffff0000) - (longlong)_Src;
  if (uVar6 == 0 || _Src == (void *)0x0) {
    if (_Src == (void *)0x0) goto LAB_1427af892;
  }
  else {
    if (uVar6 < uVar8) {
      uVar8 = uVar6;
    }
    memcpy(_Dst,_Src,uVar8);
  }
  piVar10 = (int *)((ulonglong)_Src & 0xffffffffffff0000);
  LOCK();
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    _Memory = piVar10;
    if (*(longlong *)(piVar10 + 0x10) - (longlong)piVar10 == 0x10000) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1427ae0f1);
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      _Memory = *(int **)(lVar2 + 0x310);
      *(int **)(lVar2 + 0x310) = piVar10;
      if (_Memory == (int *)0x0) goto LAB_1427af892;
    }
    _aligned_free(_Memory);
  }
LAB_1427af892:
  *param_1 = _Dst;
  return;
}



// FUNCTION 1427af912 FUN_1427af912 body=47 status=ok
// SIG undefined FUN_1427af912(void)

void FUN_1427af912(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1427af942 FUN_1427af942 body=369 status=ok
// SIG undefined FUN_1427af942(void)

void FUN_1427af942(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50;
  undefined1 local_4c;
  undefined8 local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x58) + (longlong)param_2 * 0x48);
  uVar4 = *(ulonglong *)(*param_1 + 0x18);
  bVar3 = *(byte *)(*param_1 + 0x50);
  uVar6 = (ulonglong)bVar3;
  LOCK();
  plVar2[8] = -1;
  UNLOCK();
  lVar5 = *param_1;
  *param_1 = 0;
  local_4c = 0;
  local_58 = 0;
  local_3c = 0;
  local_50 = param_2;
  local_40 = param_2;
  (**(code **)(plVar2[5] + 0x18))(plVar2 + 5,plVar2);
  plVar2[5] = (longlong)&PTR_FUN_149e49880;
  *plVar2 = lVar5;
  local_48 = 0;
  *(undefined1 *)((longlong)plVar2 + 0xc) = local_4c;
  *(int *)(plVar2 + 1) = local_50;
  FUN_1427af34a(&local_48);
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar6 = 1;
    if (bVar3 != 6) {
      uVar6 = (ulonglong)bVar3;
    }
    lVar5 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar6 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  plVar2[6] = lVar5;
  plVar2[7] = uVar6 << 0x3b | (uVar4 & 0x1fffffffffffff) << 6 | 0xc000000000000000;
  FUN_1427af34a(&local_58);
  LOCK();
  puVar1 = (ulonglong *)(plVar2 + 7);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 | 2;
  UNLOCK();
  if ((uVar4 >> 1 & 1) != 0) {
    if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1427afad2 FUN_1427afad2 body=450 status=ok
// SIG undefined FUN_1427afad2(void)

void FUN_1427afad2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149e49880;
    puVar6 = param_3;
  }
  else {
    *param_2 = &PTR_LAB_149e498c0;
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x330
             );
    puVar5 = (uint *)*puVar1;
    if (puVar5 != (uint *)0x0) goto LAB_1427afbaf;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1427ae0f1);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar4 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar4 = 0xffffffff;
      *(undefined4 **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      FUN_1467aa772(puVar1);
      puVar5 = (uint *)*puVar1;
LAB_1427afbaf:
      puVar6 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar8 = (uint *)(puVar6 + 2);
      uVar7 = puVar5[0x12];
      if (puVar8 <= puVar5 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
        LOCK();
        uVar2 = *puVar5;
        *puVar5 = *puVar5 + uVar7 + 1;
        UNLOCK();
        if ((uVar2 ^ uVar7) != 0xffffffff) break;
        puVar5 = (uint *)*puVar1;
        *puVar5 = 0xffffffff;
        *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        puVar6 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
        puVar8 = (uint *)(puVar6 + 2);
        uVar7 = 0;
        if (puVar8 <= puVar5 + 0x4000) {
          uVar7 = 1;
          goto LAB_1427afc29;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1427afc29:
    *(uint **)(puVar5 + 0x10) = puVar8;
    puVar5[0x12] = uVar7;
    *param_3 = puVar6;
  }
  *puVar6 = *param_4;
  *param_4 = 0;
  *(undefined1 *)((longlong)puVar6 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_4 + 1);
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1427afc94 FUN_1427afc94 body=26 status=ok
// SIG undefined FUN_1427afc94(void)

undefined8 FUN_1427afc94(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1427aef9e(param_2,0);
  }
  return 0;
}



// FUNCTION 1427afcae FUN_1427afcae body=72 status=ok
// SIG undefined FUN_1427afcae(void)

undefined8
FUN_1427afcae(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,char param_5
             )

{
  if (param_5 != '\0') {
    FUN_1427aef9e(param_3,0);
  }
  FUN_1427afad2(param_1,param_2 + 0x28,param_2,param_3,param_4);
  return 0;
}



// FUNCTION 1427afd28 FUN_1427afd28 body=26 status=ok
// SIG undefined FUN_1427afd28(void)

undefined8 FUN_1427afd28(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1427aef9e(*param_2,0);
  }
  return 0;
}



// FUNCTION 1427afd42 FUN_1427afd42 body=70 status=ok
// SIG undefined FUN_1427afd42(void)

undefined8
FUN_1427afd42(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_1427aef9e(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149e498c0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1427afd88 FUN_1427afd88 body=179 status=ok
// SIG undefined FUN_1427afd88(void)

void FUN_1427afd88(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *_Memory;
  int *piVar4;
  
  uVar2 = *param_2;
  FUN_1427af34a(uVar2);
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 & 0xffffffffffff0000);
    LOCK();
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      _Memory = piVar4;
      if (*(longlong *)(piVar4 + 0x10) - (longlong)piVar4 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1427ae0f1);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar3 + 0x310);
        *(int **)(lVar3 + 0x310) = piVar4;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001427afe03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      _aligned_free(_Memory);
      return;
    }
  }
  return;
}



// FUNCTION 1427afe4a FUN_1427afe4a body=199 status=ok
// SIG undefined FUN_1427afe4a(void)

int FUN_1427afe4a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1427afe90:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1427afefd;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1427afefd;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1427afeaa;
    }
  }
  return -1;
LAB_1427afefd:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1427afeaa:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1427afe90;
}



// FUNCTION 1427aff12 FUN_1427aff12 body=1213 status=ok
// SIG undefined FUN_1427aff12(void)

void FUN_1427aff12(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  LPCRITICAL_SECTION p_Var3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  int iVar15;
  undefined **ppuVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  undefined2 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  int local_98;
  undefined2 *local_90;
  longlong *local_88;
  undefined **local_80;
  uint uStack_78;
  uint uStack_74;
  undefined ***local_70;
  undefined **local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar18 = (longlong)*param_2 * 0x10;
  lVar17 = *(longlong *)(*(longlong *)*param_1 + lVar18);
  if (*(int *)(lVar17 + 0x20) == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = *(undefined2 **)(lVar17 + 0x18);
  }
  lVar2 = param_1[7];
  FUN_1446f470e(&local_50,puVar13,1);
  FUN_1411c7606(DAT_14c872ce0,local_50,param_1[6]);
  if (*(char *)(lVar17 + 0x16f) != '\x01') {
LAB_1427b0379:
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  p_Var3 = (LPCRITICAL_SECTION)param_1[1];
  EnterCriticalSection(p_Var3);
  lVar9 = FUN_141348652(DAT_14c872ce0,&DAT_14c872ce8);
  if (lVar9 != 0) {
    FUN_14129eb64(lVar17,&local_68);
    cVar5 = FUN_1401aeb9c(&local_68);
    if (cVar5 == '\0') {
      plVar10 = (longlong *)FUN_14054d1d4();
      ppuVar16 = local_68;
      if ((int)uStack_60 == 0) {
        ppuVar16 = (undefined **)&DAT_149dfb77a;
      }
      (**(code **)(*plVar10 + 0xf0))(plVar10,&local_80,ppuVar16);
      if (local_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_80;
    }
    local_80 = (undefined **)0x149e46f7c;
    uStack_78 = 5;
    uStack_74 = uStack_74 & 0xffffff00;
    uVar6 = FUN_14001a6c0(&local_80,1);
    FUN_140de6e52(lVar9,L"Core.System",uVar6,&local_68);
    if (local_68 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var3);
  }
  local_70 = &local_68;
  local_68 = (undefined **)0x0;
  uStack_60 = 0;
  uStack_78 = uStack_78 & 0xffffff00;
  local_80 = &PTR_FUN_149e49920;
  plVar11 = (longlong *)FUN_1400dbadc();
  plVar10 = (longlong *)*plVar11;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)FUN_140e92164();
    *plVar11 = (longlong)plVar10;
  }
  FUN_1400b22c2(&local_a0,"Windows");
  FUN_14129eb64(lVar17);
  iVar15 = (int)local_b8;
  iVar7 = ((int)local_b8 == 0) + 5;
  local_b0 = local_c0;
  local_c0 = (undefined2 *)0x0;
  iVar4 = local_b8._4_4_;
  local_a8 = local_b8;
  local_b8 = (longlong *)0x0;
  iVar12 = iVar7 + iVar15;
  if (iVar12 < iVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (-1 < iVar12) {
    if (iVar4 < iVar12) {
      FUN_1446f8c06(&local_b0);
    }
    FUN_1401aebe8(&local_b0,L"Paks",4);
    iVar15 = local_98 + -1;
    if (local_98 == 0) {
      iVar15 = 0;
    }
    iVar4 = (int)local_a8;
    iVar8 = iVar15 + 1 + (uint)((int)local_a8 == 0);
    local_90 = local_b0;
    local_b0 = (undefined2 *)0x0;
    iVar7 = local_a8._4_4_;
    local_88 = local_a8;
    local_a8 = (longlong *)0x0;
    iVar12 = iVar8 + iVar4;
    if (iVar12 < iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar8);
    }
    if (-1 < iVar12) {
      if (iVar7 < iVar12) {
        FUN_1446f8c06(&local_90);
      }
      FUN_1401aebe8(&local_90,local_a0,iVar15);
      puVar13 = local_90;
      if ((int)local_88 == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      (**(code **)(*plVar10 + 0x1a8))(plVar10,puVar13,&local_80);
      if (local_90 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if ((longlong)(int)uStack_60 == 0) {
        uVar14 = 0;
      }
      else {
        local_c8 = lVar2 + 0xf8;
        lVar17 = (longlong)(int)uStack_60 << 4;
        ppuVar16 = local_68;
        do {
          p_Var3 = (LPCRITICAL_SECTION)param_1[2];
          EnterCriticalSection(p_Var3);
          if ((DAT_14c872c68 != (longlong *)0x0 && DAT_14c872c70 != 0) &&
             (cVar5 = (**(code **)(*DAT_14c872c68 + 0x30))(), cVar5 != '\0')) {
            plVar10 = DAT_14c872c68;
            if (DAT_14c872c70 == 0) {
              plVar10 = (longlong *)0x0;
            }
            (**(code **)(*plVar10 + 0x58))(plVar10,ppuVar16,0);
            local_90 = *(undefined2 **)(*(longlong *)*param_1 + lVar18);
            plVar10 = *(longlong **)(*(longlong *)*param_1 + 8 + lVar18);
            local_88 = plVar10;
            if (plVar10 == (longlong *)0x0) {
              FUN_1460199f6(local_c8,&local_90);
            }
            else {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
              FUN_1460199f6(local_c8,&local_90);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar10 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
            }
            FUN_1411c7606(DAT_14c872ce0,local_50);
          }
          if (p_Var3 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(p_Var3);
          }
          ppuVar16 = ppuVar16 + 2;
          lVar17 = lVar17 + -0x10;
        } while (lVar17 != 0);
        uVar14 = uStack_60 & 0xffffffff;
      }
      FUN_1447a1747(local_68,uVar14);
      if (local_68 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1427b0379;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar12);
}


