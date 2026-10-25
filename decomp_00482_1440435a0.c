// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1440435a0 FUN_1440435a0 body=57 status=ok
// SIG undefined FUN_1440435a0(void)

void FUN_1440435a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9bb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9bb0 = FUN_140002ddd(FUN_1465d56f9,uVar1,L"OakUIDisplayDataDef_UICategoryName");
  }
  return;
}



// FUNCTION 1440435e8 FUN_1440435e8 body=267 status=ok
// SIG undefined FUN_1440435e8(void)

void FUN_1440435e8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
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
  *param_2 = &PTR_FUN_14b7449b0;
  return;
}



// FUNCTION 14404370c FUN_14404370c body=57 status=ok
// SIG undefined FUN_14404370c(void)

void FUN_14404370c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9bc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9bc8 = FUN_140002ddd(FUN_1465d578f,uVar1,L"OakUIDisplayDataDef_UILocationTypeName");
  }
  return;
}



// FUNCTION 144043754 FUN_144043754 body=538 status=ok
// SIG undefined FUN_144043754(void)

void FUN_144043754(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xc] = 0;
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
  *param_2 = &PTR_FUN_14b744b30;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
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



// FUNCTION 144043986 FUN_144043986 body=57 status=ok
// SIG undefined FUN_144043986(void)

void FUN_144043986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9be0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9be0 = FUN_140002ddd(FUN_1465d57ee,uVar1,L"OakUIDisplayDataDef_UILocation");
  }
  return;
}



// FUNCTION 1440439ce FUN_1440439ce body=281 status=ok
// SIG undefined FUN_1440439ce(void)

void FUN_1440439ce(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[6] = 0;
  param_2[7] = 0;
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
  *param_2 = &PTR_FUN_14b744cb0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 144043b00 FUN_144043b00 body=57 status=ok
// SIG undefined FUN_144043b00(void)

void FUN_144043b00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9bf8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9bf8 = FUN_140002ddd(FUN_1465d5885,uVar1,L"OakUIDisplayDataDef_RegionInfo");
  }
  return;
}



// FUNCTION 144043bd0 FUN_144043bd0 body=57 status=ok
// SIG undefined FUN_144043bd0(void)

void FUN_144043bd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9cd0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9cd0 = FUN_140002ddd(FUN_1465d5d94,uVar1,L"OakDiscoveryViewableMapBehaviorDef");
  }
  return;
}



// FUNCTION 144043c0a FUN_144043c0a body=29 status=ok
// SIG undefined FUN_144043c0a(void)

undefined8 FUN_144043c0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144043c36 FUN_144043c36 body=180 status=ok
// SIG undefined FUN_144043c36(void)

void FUN_144043c36(undefined8 param_1,void *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  memset(param_2,0,0x2a8);
  do {
    puVar1 = (undefined8 *)((longlong)param_2 + lVar2 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2) = 0;
    ((undefined8 *)((longlong)param_2 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x20) = 0;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x140);
  lVar2 = -0x140;
  do {
    puVar1 = (undefined8 *)((longlong)param_2 + lVar2 + 0x290);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar2 + 0x280);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x2a0) = 0;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0);
  *(undefined2 *)((longlong)param_2 + 0x280) = 0;
  *(undefined8 *)((longlong)param_2 + 0x284) = 0;
  *(undefined8 *)((longlong)param_2 + 0x290) = 0;
  *(undefined8 *)((longlong)param_2 + 0x298) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c8) = 0;
  return;
}



// FUNCTION 144043d80 FUN_144043d80 body=110 status=ok
// SIG undefined FUN_144043d80(void)

void FUN_144043d80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x2a8) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x270;
  do {
    if (*(longlong *)(param_2 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x130);
  lVar1 = 0x140;
  do {
    if (*(longlong *)(param_2 + -0x10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 144043e04 FUN_144043e04 body=63 status=ok
// SIG undefined FUN_144043e04(void)

undefined1 FUN_144043e04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144043ff2(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 144043e6c FUN_144043e6c body=59 status=ok
// SIG undefined FUN_144043e6c(void)

undefined8 FUN_144043e6c(longlong *param_1)

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



// FUNCTION 144043eb8 FUN_144043eb8 body=126 status=ok
// SIG undefined FUN_144043eb8(void)

void FUN_144043eb8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x2d0) == '\x01') {
    if (*(longlong *)(param_2 + 0x2c0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x2a8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = 0x270;
    do {
      if (*(longlong *)(param_2 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0x130);
    lVar1 = 0x140;
    do {
      if (*(longlong *)(param_2 + -0x10 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
    *(undefined1 *)(param_2 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 144043f84 FUN_144043f84 body=110 status=ok
// SIG undefined FUN_144043f84(void)

void FUN_144043f84(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x270;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0x130);
  lVar1 = 0x140;
  do {
    if (*(longlong *)(param_1 + -0x10 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 144043ff2 FUN_144043ff2 body=389 status=ok
// SIG undefined FUN_144043ff2(void)

longlong FUN_144043ff2(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar8 = 0;
  do {
    *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
    puVar1 = (undefined4 *)(param_2 + 8 + lVar8);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 8 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    if (param_1 != param_2) {
      iVar3 = *(int *)(param_2 + 0x20 + lVar8);
      pvVar4 = *(void **)(param_2 + 0x18 + lVar8);
      *(int *)(param_1 + 0x20 + lVar8) = iVar3;
      if (iVar3 == 0 && *(int *)(param_1 + 0x24 + lVar8) == 0) {
        *(undefined4 *)(param_1 + 0x24 + lVar8) = 0;
      }
      else {
        puVar9 = (undefined8 *)(param_1 + lVar8 + 0x18);
        FUN_1446dd670(puVar9,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
        }
      }
    }
    lVar8 = lVar8 + 0x28;
  } while (lVar8 != 0x140);
  lVar8 = 0;
  do {
    *(undefined8 *)(param_1 + 0x140 + lVar8) = *(undefined8 *)(param_2 + 0x140 + lVar8);
    puVar1 = (undefined4 *)(param_2 + 0x148 + lVar8);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0x148 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    if (param_1 != param_2) {
      iVar3 = *(int *)(param_2 + 0x160 + lVar8);
      pvVar4 = *(void **)(param_2 + 0x158 + lVar8);
      *(int *)(param_1 + 0x160 + lVar8) = iVar3;
      if (iVar3 == 0 && *(int *)(param_1 + 0x164 + lVar8) == 0) {
        *(undefined4 *)(param_1 + 0x164 + lVar8) = 0;
      }
      else {
        puVar9 = (undefined8 *)(param_1 + lVar8 + 0x158);
        FUN_1446dd670(puVar9,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar9,pvVar4,(longlong)iVar3 * 2);
        }
      }
    }
    lVar8 = lVar8 + 0x28;
  } while (lVar8 != 0x140);
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  FUN_1447715ec(param_1 + 0x290,param_2 + 0x290);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  FUN_148697b3c(param_1 + 0x2c0,param_2 + 0x2c0);
  return param_1;
}



// FUNCTION 144044186 FUN_144044186 body=613 status=ok
// SIG undefined FUN_144044186(void)

void FUN_144044186(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  memset(param_2 + 2,0,0x560);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b138280;
  param_2[3] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  uVar1 = DAT_14c8463f8;
  param_2[5] = DAT_14c8463f0;
  param_2[6] = uVar1;
  param_2[9] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 10) = 2;
  param_2[0xd] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xb] = DAT_14c8464e0;
  param_2[0xc] = uVar1;
  param_2[0x10] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xe] = DAT_14c8464e0;
  param_2[0xf] = uVar1;
  *(undefined1 *)(param_2 + 0x11) = 1;
  *(undefined4 *)(param_2 + 0x12) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_2 + 0x94) = 1;
  memset(param_2 + 0x13,0,0xa8);
  *(undefined4 *)(param_2 + 0x28) = 0x3c23d70a;
  param_2[0x29] = 0xc0b3880000000000;
  param_2[0x2a] = 0xc0b3880000000000;
  param_2[0x2c] = 0x40b3880000000000;
  param_2[0x2d] = 0x40b3880000000000;
  param_2[0x2e] = 0x40b3880000000000;
  *(undefined1 *)(param_2 + 0x2f) = 1;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x30;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x3e) = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 1;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x447a0000;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0xc47a0000;
  *(undefined1 *)(param_2 + 0x44) = 1;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0x55000000469c4000;
  *(undefined8 *)((longlong)param_2 + 0x22c) = 0x55000000469c4000;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0x1003f000000;
  *(undefined4 *)((longlong)param_2 + 0x23c) = 0x100;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4e] = 0;
  param_2[0x4f] = 0;
  *param_2 = &PTR_FUN_14b745c30;
  *(undefined8 *)((longlong)param_2 + 0x289) = 0;
  *(undefined8 *)((longlong)param_2 + 0x291) = 0;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  lVar2 = -0x140;
  do {
    puVar3 = (undefined8 *)((longlong)param_2 + lVar2 + 0x3f0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = (undefined8 *)((longlong)param_2 + lVar2 + 0x3e0);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x400) = 0;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0);
  lVar2 = -0x140;
  do {
    puVar3 = (undefined8 *)((longlong)param_2 + lVar2 + 0x530);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = (undefined8 *)((longlong)param_2 + lVar2 + 0x520);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x540) = 0;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0);
  *(undefined2 *)(param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x524) = 0;
  param_2[0xa6] = 0;
  param_2[0xa7] = 0;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  param_2[0xa9] = 0;
  param_2[0xaa] = 0;
  param_2[0xab] = 0;
  param_2[0xac] = 0;
  param_2[0xad] = 0;
  return;
}



// FUNCTION 144044404 FUN_144044404 body=57 status=ok
// SIG undefined FUN_144044404(void)

void FUN_144044404(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9d00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9d00 = FUN_140002ddd(FUN_1465d5df4,uVar1,L"OakDiscoveryViewableMapDef");
  }
  return;
}



// FUNCTION 144044458 FUN_144044458 body=57 status=ok
// SIG undefined FUN_144044458(void)

void FUN_144044458(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9da8 = FUN_140002ddd(FUN_1465d5fae,uVar1,L"OakDroneDef");
  }
  return;
}



// FUNCTION 1440444ba FUN_1440444ba body=57 status=ok
// SIG undefined FUN_1440444ba(void)

void FUN_1440444ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ea0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ea0 = FUN_140002ddd(FUN_1465d6304,uVar1,L"OakEcho4StandInDef");
  }
  return;
}



// FUNCTION 144044550 FUN_144044550 body=57 status=ok
// SIG undefined FUN_144044550(void)

void FUN_144044550(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa138 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa138 = FUN_140002ddd(FUN_1465d69e6,uVar1,L"OakEchoLogDef");
  }
  return;
}



// FUNCTION 14404458a FUN_14404458a body=481 status=ok
// SIG undefined FUN_14404458a(void)

longlong FUN_14404458a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *_Src;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_148c11552(param_1 + 0x18,param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_148c115a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_2 + 0x68);
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x68) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  plVar2 = *(longlong **)(param_2 + 0x78);
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x78) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x90);
    _Src = *(void **)(param_2 + 0x88);
    *(int *)(param_1 + 0x90) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x94) == 0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x88),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x88),_Src,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  FUN_148b9d874(param_1 + 0xa0,param_2 + 0xa0);
  plVar2 = *(longlong **)(param_2 + 0xb8);
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0xb8) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  if ((*(longlong *)(param_1 + 200) != *(longlong *)(param_2 + 200)) ||
     (*(int *)(param_1 + 0xd0) != *(int *)(param_2 + 0xd0))) {
    *(longlong *)(param_1 + 200) = *(longlong *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_1486d0488(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 144044772 FUN_144044772 body=2133 status=ok
// SIG undefined FUN_144044772(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144044772(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cba9af8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7392e0,1,&PTR_FUN_14b7392b0);
  ppuStack_60 = &PTR_FUN_14b73a340;
  uStack_58 = 3;
  local_68 = 0xe;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b73a3a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b73a6d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b73ab80);
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73ad90,1,0);
  _DAT_14cba9d38 = 0x47efffffe0000000;
  _DAT_14cba9d40 = 0x47efffffe0000000;
  _DAT_14cba9d48 = 0x47efffffe0000000;
  _DAT_14cba9d50 = 0x47efffffe0000000;
  _DAT_14cba9d58 = 0x47efffffe0000000;
  _DAT_14cba9d60 = 0x47efffffe0000000;
  _DAT_14cba9d68 = 0x47efffffe0000000;
  _DAT_14cba9d70 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cba9d78);
  if (cVar1 == '\0') {
    _DAT_14cba9d78 = 0;
    uRam000000014cba9d80 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73b3b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b73b6e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73ba50,1,0);
  _DAT_14cba9dd0 = 0xffffffff;
  _DAT_14cba9dd4 = 0;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73c370,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73cac0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73db70,2,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73e4b0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73f210,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b73f2b0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b73fd50,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b73fe40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7417e0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b741a40;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b741a60);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b742910;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b742960,1,&PTR_FUN_14b742930);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b742b20 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b742b28 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b742b30 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  _DAT_14cbaa004 = 0;
  FUN_14052b5e0(&DAT_14cbaa000,"PlayerAwareness",0);
  _DAT_14cbaa010 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa018 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa020 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa028 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa030 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa038 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa040 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa048 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa050 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa058 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa060 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa068 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa070 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa078 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa080 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa088 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa090 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa098 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa0a0 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa0a8 = (ulonglong)uVar2;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b743050,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b743330,1,&PTR_FUN_14b743300);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b743910,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b743e50,1,&PTR_FUN_14b743e20);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144044fc8 FUN_144044fc8 body=55 status=ok
// SIG undefined FUN_144044fc8(void)

void FUN_144044fc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa2d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa2d0 = FUN_14171c317(FUN_1465d74fd,uVar1,L"EOakEchoLogPlaybackType");
  }
  return;
}



// FUNCTION 144044fff FUN_144044fff body=55 status=ok
// SIG undefined FUN_144044fff(void)

void FUN_144044fff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa300 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa300 = FUN_14171c317(FUN_1465d7583,uVar1,L"EOakEchoLogDummyEnum");
  }
  return;
}



// FUNCTION 144045036 FUN_144045036 body=55 status=ok
// SIG undefined FUN_144045036(void)

void FUN_144045036(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa318 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa318 = FUN_14171c317(FUN_1465d73cc,uVar1,L"EOakEchoLogPlayerQueryType");
  }
  return;
}



// FUNCTION 14404506d FUN_14404506d body=55 status=ok
// SIG undefined FUN_14404506d(void)

void FUN_14404506d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa378 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa378 = FUN_14171c317(FUN_1465d770e,uVar1,L"EOakElementalEffectSource");
  }
  return;
}



// FUNCTION 1440450a4 FUN_1440450a4 body=55 status=ok
// SIG undefined FUN_1440450a4(void)

void FUN_1440450a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa390 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa390 = FUN_14171c317(FUN_1465d773d,uVar1,L"EOakElementalStatusEffectType");
  }
  return;
}



// FUNCTION 1440450db FUN_1440450db body=55 status=ok
// SIG undefined FUN_1440450db(void)

void FUN_1440450db(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa3a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa3a8 = FUN_14171c317(FUN_1465d776c,uVar1,L"EOakElementalResourceEffectType");
  }
  return;
}



// FUNCTION 144045112 FUN_144045112 body=55 status=ok
// SIG undefined FUN_144045112(void)

void FUN_144045112(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa3c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa3c0 = FUN_14171c317(FUN_1465d779b,uVar1,L"EOakElementalEffectType");
  }
  return;
}



// FUNCTION 144045149 FUN_144045149 body=55 status=ok
// SIG undefined FUN_144045149(void)

void FUN_144045149(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa528 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa528 = FUN_14171c317(FUN_1465d7c9d,uVar1,L"EOakInvertAxisContext");
  }
  return;
}



// FUNCTION 144045184 FUN_144045184 body=39 status=ok
// SIG undefined FUN_144045184(void)

void FUN_144045184(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409915e6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b74e790;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 1440451ac FUN_1440451ac body=227 status=ok
// SIG undefined FUN_1440451ac(void)

longlong FUN_1440451ac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaa5b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14181c830;
    local_38 = &LAB_144045181;
    local_40 = FUN_144045184;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakInputModifier_IgnoredSteamDeckTouchScreen",&DAT_14cbaa5b0,
                  &DAT_144045180);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa5b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144045290 FUN_144045290 body=47 status=ok
// SIG undefined FUN_144045290(void)

longlong FUN_144045290(void)

{
  if (DAT_14cbaa5b8 == 0) {
    FUN_14073dd9a(&DAT_14cbaa5b8,&PTR_FUN_14b74e748);
  }
  return DAT_14cbaa5b8;
}



// FUNCTION 1440452bf FUN_1440452bf body=55 status=ok
// SIG undefined FUN_1440452bf(void)

void FUN_1440452bf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa6e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa6e0 = FUN_14171c317(FUN_1465d82fa,uVar1,L"EOakEquipmentAction");
  }
  return;
}



// FUNCTION 1440452f6 FUN_1440452f6 body=55 status=ok
// SIG undefined FUN_1440452f6(void)

void FUN_1440452f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa6f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa6f8 = FUN_14171c317(FUN_1465d8329,uVar1,L"EOakEquipInventoryItemFlags");
  }
  return;
}



// FUNCTION 14404532e FUN_14404532e body=38 status=ok
// SIG undefined FUN_14404532e(void)

undefined8 FUN_14404532e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144045354 FUN_144045354 body=48 status=ok
// SIG undefined FUN_144045354(void)

longlong FUN_144045354(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144045384 FUN_144045384 body=48 status=ok
// SIG undefined FUN_144045384(void)

longlong FUN_144045384(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440453b4 FUN_1440453b4 body=48 status=ok
// SIG undefined FUN_1440453b4(void)

longlong FUN_1440453b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440453e4 FUN_1440453e4 body=48 status=ok
// SIG undefined FUN_1440453e4(void)

longlong FUN_1440453e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144045478 FUN_144045478 body=57 status=ok
// SIG undefined FUN_144045478(void)

void FUN_144045478(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa360 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa360 = FUN_140002ddd(FUN_1465d76af,uVar1,L"OakEchoPresentationDef");
  }
  return;
}



// FUNCTION 1440454f8 FUN_1440454f8 body=252 status=ok
// SIG undefined FUN_1440454f8(void)

void FUN_1440454f8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14b753d50;
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
  return;
}



// FUNCTION 144045628 FUN_144045628 body=55 status=ok
// SIG undefined FUN_144045628(void)

void FUN_144045628(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00014404565b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1440456fa FUN_1440456fa body=2443 status=ok
// SIG undefined FUN_1440456fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1440456fa(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
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
  _DAT_14cbaa148 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbaa150);
  if (cVar1 == '\0') {
    _DAT_14cbaa150 = 0;
    uRam000000014cbaa158 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa160 = 0x47efffffe0000000;
  _DAT_14cbaa168 = 0x47efffffe0000000;
  _DAT_14cbaa170 = 0x47efffffe0000000;
  _DAT_14cbaa178 = 0x47efffffe0000000;
  _DAT_14cbaa180 = 0x47efffffe0000000;
  _DAT_14cbaa188 = 0x47efffffe0000000;
  _DAT_14cbaa190 = 0x47efffffe0000000;
  _DAT_14cbaa198 = 0x47efffffe0000000;
  _DAT_14cbaa1a4 = 0;
  FUN_14052b5e0(&DAT_14cbaa1a0,"PlayerAwareness",0);
  _DAT_14cbaa1b0 = "PlayerAwareness";
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1b8 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1c0 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1c8 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1d0 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1d8 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1e0 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1e8 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1f0 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa1f8 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa200 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa208 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa210 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa218 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa220 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa228 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa230 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa238 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa240 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa248 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b749d60,1,0);
  FUN_14098d3d2(FUN_144044fc8,L"/Script/OakGame",L"EOakEchoLogPlaybackType",&DAT_14cbaa2c8);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74a140,1,0);
  ppuStack_60 = &PTR_FUN_14b74a450;
  local_68 = 1;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b74a490);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74a830,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b74a930);
  FUN_14098d3d2(FUN_14404506d,L"/Script/OakGame",L"EOakElementalEffectSource",&DAT_14cbaa370);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b74ac10 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b74ac18 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b74ac20 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x70);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b74aff0);
  _DAT_14cbaa404 = 0;
  FUN_14052b5e0(&DAT_14cbaa400,"trait_mission",0);
  _DAT_14cbaa410 = "trait_mission";
  _DAT_14cbaa41c = 0;
  FUN_14052b5e0(&DAT_14cbaa418,"weekly_trait_mission",0);
  _DAT_14cbaa428 = "weekly_trait_mission";
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b74b3e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74b770,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74bb00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74be80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74c210,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74c5b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74c940,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74d320,3,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b74ea40;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74ea60,6,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74eec0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74f440,1,&PTR_FUN_14b74f410);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b74f940,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b750020);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b750440,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b750510,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b750620);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b750ac0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b750b00,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b750d20);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7511d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b751650,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b751710);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b751a10);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b752050,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b752ce0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404608c FUN_14404608c body=46 status=ok
// SIG undefined FUN_14404608c(void)

void FUN_14404608c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14100d4d0(puVar1);
  *puVar1 = &PTR_FUN_14b75ed80;
  puVar1[0x33] = &PTR_FUN_14b75f0c0;
  return;
}



// FUNCTION 1440460ba FUN_1440460ba body=227 status=ok
// SIG undefined FUN_1440460ba(void)

longlong FUN_1440460ba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaabc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591be6;
    local_38 = &LAB_144046089;
    local_40 = FUN_14404608c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakGameSettingDiscrete_CrossSave",&DAT_14cbaabc0,
                  &DAT_144046088);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaabc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404619e FUN_14404619e body=47 status=ok
// SIG undefined FUN_14404619e(void)

longlong FUN_14404619e(void)

{
  if (DAT_14cbaabc8 == 0) {
    FUN_14073dd9a(&DAT_14cbaabc8,&PTR_FUN_14b75ed38);
  }
  return DAT_14cbaabc8;
}



// FUNCTION 1440461de FUN_1440461de body=48 status=ok
// SIG undefined FUN_1440461de(void)

longlong FUN_1440461de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_141608ff2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404621a FUN_14404621a body=48 status=ok
// SIG undefined FUN_14404621a(void)

longlong FUN_14404621a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1410bf6a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404624a FUN_14404624a body=38 status=ok
// SIG undefined FUN_14404624a(void)

undefined8 FUN_14404624a(undefined8 param_1,int param_2)

{
  FUN_1410bf6a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144046270 FUN_144046270 body=48 status=ok
// SIG undefined FUN_144046270(void)

longlong FUN_144046270(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x198;
  FUN_1410bf6a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440462a8 FUN_1440462a8 body=48 status=ok
// SIG undefined FUN_1440462a8(void)

longlong FUN_1440462a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x138;
  FUN_140ee3dc0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440462d8 FUN_1440462d8 body=48 status=ok
// SIG undefined FUN_1440462d8(void)

longlong FUN_1440462d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_1415aec28(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144046324 FUN_144046324 body=48 status=ok
// SIG undefined FUN_144046324(void)

longlong FUN_144046324(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_1415aec28(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440463bc FUN_1440463bc body=275 status=ok
// SIG undefined FUN_1440463bc(void)

undefined8
FUN_1440463bc(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             byte *param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_2c = (uint)*param_5;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *param_5 = local_2c != 0;
  }
  else {
    *param_5 = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_2c = (uint)param_5[1];
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    plVar2 = (longlong *)(ulonglong)local_2c;
    param_5[1] = local_2c != 0;
  }
  else {
    param_5[1] = *piVar1 != 0;
    plVar2 = (longlong *)param_2[1];
    *plVar2 = *plVar2 + 4;
  }
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404656e FUN_14404656e body=1230 status=ok
// SIG undefined FUN_14404656e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404656e(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaa818 = (ulonglong)uVar2;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7568c0,1,&PTR_FUN_14b756820);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7569a0);
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b756ef0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbaa8c8);
  if (cVar1 == '\0') {
    _DAT_14cbaa8c8 = 0;
    uRam000000014cbaa8d0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b757080);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7573e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b758960,1,0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b758d80);
  FUN_1446f470e(&DAT_14cbaa968,L"UNSET",1);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b759150,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b759dd0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75a420,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75ab50,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75aea0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75b590,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75c1e0,1,0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b75c3b0);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b75c680);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75ca80,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75ce60,1,0);
  _DAT_14cbaaab0 = 0x47efffffe0000000;
  _DAT_14cbaaab8 = 0x47efffffe0000000;
  _DAT_14cbaaac0 = 0x47efffffe0000000;
  _DAT_14cbaaac8 = 0x47efffffe0000000;
  _DAT_14cbaaad0 = 0x47efffffe0000000;
  _DAT_14cbaaad8 = 0x47efffffe0000000;
  _DAT_14cbaaae0 = 0x47efffffe0000000;
  _DAT_14cbaaae8 = 0x47efffffe0000000;
  _DAT_14cbaaaf4 = 0;
  FUN_14052b5e0(&DAT_14cbaaaf0,"PlayerAwareness",0);
  _DAT_14cbaab00 = "PlayerAwareness";
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75e040,1,&PTR_FUN_14b75dfc0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75e830,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75eca0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75f100,1,0);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b75f580,1,0);
  FUN_1446f470e(&DAT_14cbaabf0,L"BroadcastOakLog",1);
  FUN_1446f470e(&DAT_14cbaac00,L"Net_EndActorFlight",1);
  FUN_1446f470e(&DAT_14cbaac10,L"Net_FlyActorToActor",1);
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b760ec0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144046a40 FUN_144046a40 body=55 status=ok
// SIG undefined FUN_144046a40(void)

void FUN_144046a40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaad08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaad08 = FUN_14171c317(FUN_1465da56d,uVar1,L"EOakGlideModifierPropellantMode");
  }
  return;
}



// FUNCTION 144046a77 FUN_144046a77 body=55 status=ok
// SIG undefined FUN_144046a77(void)

void FUN_144046a77(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaad20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaad20 = FUN_14171c317(FUN_1465da59c,uVar1,L"EOakGlideModiferAutoAtivateType");
  }
  return;
}



// FUNCTION 144046aae FUN_144046aae body=55 status=ok
// SIG undefined FUN_144046aae(void)

void FUN_144046aae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaae00 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaae00 = FUN_14171c317(FUN_144046ae5,uVar1,L"EOakDifficultyType");
  }
  return;
}



// FUNCTION 144046ae5 FUN_144046ae5 body=47 status=ok
// SIG undefined FUN_144046ae5(void)

longlong FUN_144046ae5(void)

{
  if (DAT_14cbaadf8 == 0) {
    FUN_1409ce572(&DAT_14cbaadf8,&PTR_FUN_14b764890);
  }
  return DAT_14cbaadf8;
}



// FUNCTION 144046b96 FUN_144046b96 body=112 status=ok
// SIG undefined FUN_144046b96(void)

void FUN_144046b96(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0xf00d1e03;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined1 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  *(undefined1 **)((longlong)param_2 + 100) = &DAT_3f8000003f800000;
  memset((void *)((longlong)param_2 + 0xa0),0,0xcc);
  *(undefined4 *)((longlong)param_2 + 0x16c) = 0x3f800000;
  return;
}



// FUNCTION 144046c54 FUN_144046c54 body=604 status=ok
// SIG undefined FUN_144046c54(void)

longlong * FUN_144046c54(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = (int)param_2[9];
  plVar6 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
    if (iVar2 == 0) goto LAB_144046ce5;
  }
  else {
    FUN_1446efa72(plVar6,0,iVar2,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar6 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar6;
  }
  plVar6 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar6,(longlong)iVar2 << 2);
LAB_144046ce5:
  *(int *)(param_1 + 9) = iVar2;
  uVar1 = *(uint *)(param_2 + 1);
  FUN_144046eb0(param_1,(ulonglong)uVar1);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
    FUN_1447711aa(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar7 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    plVar6 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar1) {
    lVar4 = *param_1;
    lVar3 = *param_2;
    lVar9 = 0;
    uVar10 = 0;
    do {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar6 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) & 1)
          == 0) {
        *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
      }
      else {
        *(undefined1 *)(lVar4 + lVar9) = *(undefined1 *)(lVar3 + lVar9);
        *(undefined8 *)(lVar4 + 8 + lVar9) = 0;
        iVar2 = *(int *)(lVar3 + 0x10 + lVar9);
        _Src = *(void **)(lVar3 + 8 + lVar9);
        *(int *)(lVar4 + 0x10 + lVar9) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)(lVar4 + 0x14 + lVar9) = 0;
        }
        else {
          FUN_1447a127e(lVar4 + 8 + lVar9,iVar2,0);
          memcpy(*(void **)(lVar4 + 8 + lVar9),_Src,(longlong)iVar2);
        }
        *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar1 != uVar10);
  }
  return param_1;
}



// FUNCTION 144046eb0 FUN_144046eb0 body=494 status=ok
// SIG undefined FUN_144046eb0(void)

void FUN_144046eb0(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_14404700c;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x20) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_14404700c;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_14404700c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1440470a0 FUN_1440470a0 body=54 status=ok
// SIG undefined FUN_1440470a0(void)

void FUN_1440470a0(longlong *param_1)

{
  FUN_144046eb0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1440470f2 FUN_1440470f2 body=228 status=ok
// SIG undefined FUN_1440470f2(void)

void FUN_1440470f2(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    do {
      puVar6[-8] = *param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = *(undefined4 *)(param_2 + 2);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar6 + -7) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar6 + -0x34) = uVar3;
      *(undefined4 *)(puVar6 + -6) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -0x2c) = uVar5;
      puVar6[-5] = 0;
      iVar1 = *(int *)(param_2 + 4);
      pvVar2 = (void *)param_2[3];
      *(int *)(puVar6 + -4) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar6 + -5,iVar1,0);
        memcpy((void *)puVar6[-5],pvVar2,(longlong)iVar1 * 2);
      }
      puVar6[-3] = param_2[5];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar4 = *(undefined4 *)(param_2 + 7);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
      *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(param_2 + 6);
      *(undefined4 *)((longlong)puVar6 + -0xc) = uVar3;
      *(undefined4 *)(puVar6 + -1) = uVar4;
      *(undefined4 *)((longlong)puVar6 + -4) = uVar5;
      *puVar6 = 0;
      iVar1 = *(int *)(param_2 + 9);
      pvVar2 = (void *)param_2[8];
      *(int *)(puVar6 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar6,iVar1,0);
        memcpy((void *)*puVar6,pvVar2,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 10);
      param_2 = param_2 + 0xb;
      puVar6 = puVar6 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144047270 FUN_144047270 body=1542 status=ok
// SIG undefined FUN_144047270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144047270(void)

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
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b762bd0,1,0);
  ppuStack_60 = &PTR_FUN_14b763d80;
  local_68 = 1;
  local_58 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b763df0,1,&PTR_FUN_14b763dc0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaad70 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b764190,1,0);
  _DAT_14cbaad94 = 0;
  FUN_14052b5e0(&DAT_14cbaad90,"PlayerAwareness",0);
  _DAT_14cbaada0 = "PlayerAwareness";
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7644e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b766540;
  local_68 = 7;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b766680,1,&PTR_FUN_14b766560);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbaaea0);
  if (cVar1 == '\0') {
    _DAT_14cbaaea0 = 0;
    uRam000000014cbaaea8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaeb0 = 0x47efffffe0000000;
  _DAT_14cbaaeb8 = 0x47efffffe0000000;
  _DAT_14cbaaec0 = 0x47efffffe0000000;
  _DAT_14cbaaec8 = 0x47efffffe0000000;
  _DAT_14cbaaed0 = 0x47efffffe0000000;
  _DAT_14cbaaed8 = 0x47efffffe0000000;
  _DAT_14cbaaee0 = 0x47efffffe0000000;
  _DAT_14cbaaee8 = 0x47efffffe0000000;
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaef0 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaef8 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf00 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf08 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf10 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf18 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf20 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf28 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf30 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf38 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf40 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf48 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf50 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf58 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf60 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf68 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf70 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf78 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbaaf80 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b767530);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b769020);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 9;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76a030);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144047878 FUN_144047878 body=55 status=ok
// SIG undefined FUN_144047878(void)

void FUN_144047878(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab388 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab388 = FUN_14171c317(FUN_1465dc46c,uVar1,L"EOakUI_FilterCategory");
  }
  return;
}



// FUNCTION 144047a7a FUN_144047a7a body=54 status=ok
// SIG undefined FUN_144047a7a(void)

void FUN_144047a7a(longlong *param_1)

{
  FUN_144047ab0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144047ab0 FUN_144047ab0 body=128 status=ok
// SIG undefined FUN_144047ab0(void)

void FUN_144047ab0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 144047b32 FUN_144047b32 body=54 status=ok
// SIG undefined FUN_144047b32(void)

void FUN_144047b32(longlong *param_1)

{
  FUN_144047b68(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144047b68 FUN_144047b68 body=514 status=ok
// SIG undefined FUN_144047b68(void)

void FUN_144047b68(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar4 = 0;
    uVar6 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar9 = *puVar7;
    if (uVar9 == 0) {
      iVar12 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar12 = iVar3 + -1;
      }
      uVar4 = 0;
      uVar6 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar6 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar6 == uVar4) goto LAB_144047ce5;
        iVar5 = iVar5 + 0x20;
        uVar9 = puVar7[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar6 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar6 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar12) {
      iVar12 = iVar3;
    }
  }
  if (iVar12 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      if ((*(longlong *)(*param_1 + (longlong)iVar12 * 0x48) != 0) &&
         (lVar14 = *param_1 + (longlong)iVar12 * 0x48, *(int *)(lVar14 + 8) != -1)) {
        *(undefined4 *)(lVar14 + 8) = 0xffffffff;
        iVar3 = (int)param_1[5];
      }
      uVar9 = uVar9 & ~(uint)uVar6;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar12 = (int)uVar4;
      lVar14 = (longlong)iVar12;
      uVar13 = puVar7[lVar14] & uVar9;
      if (uVar13 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar12) {
          iVar11 = iVar12;
        }
        if (iVar10 <= iVar12) break;
        lVar8 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar13 = puVar7[lVar14 + lVar8 + 1];
          if (uVar13 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar11 - lVar14 == lVar8) goto LAB_144047ce5;
        }
        uVar4 = (ulonglong)(iVar12 + (int)lVar8 + 1);
        uVar9 = 0xffffffff;
      }
      uVar6 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar6 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar3);
  }
LAB_144047ce5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar9 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar9 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar13 = 0x80;
    if (0x80 < (int)uVar9) {
      uVar13 = uVar9;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar13;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 144047d6c FUN_144047d6c body=549 status=ok
// SIG undefined FUN_144047d6c(void)

longlong * FUN_144047d6c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar3 = (int)param_2[9];
  plVar8 = param_1 + 8;
  if ((ulonglong)(longlong)iVar3 < 2) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0,4);
    }
    if (iVar3 == 0) goto LAB_144047dec;
  }
  else {
    FUN_1446efa72(plVar8,0,iVar3,4);
  }
  plVar10 = param_1 + 7;
  if ((longlong *)*plVar8 != (longlong *)0x0) {
    plVar10 = (longlong *)*plVar8;
  }
  plVar8 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar8 = (longlong *)param_2[8];
  }
  memcpy(plVar10,plVar8,(longlong)iVar3 << 2);
LAB_144047dec:
  *(int *)(param_1 + 9) = iVar3;
  uVar4 = *(uint *)(param_2 + 1);
  FUN_144047b68(param_1,(ulonglong)uVar4);
  lVar6 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar6 + uVar4;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar4) {
    FUN_14021b4e8(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar9 = 0x80;
    if (0x80 < (int)uVar7) {
      uVar9 = uVar7;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar9;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar3 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar3;
  if (iVar3 != 0) {
    plVar8 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar8 = param_2 + 2;
    }
    plVar10 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    memcpy(plVar10,plVar8,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar4) {
    lVar6 = *param_1;
    lVar5 = *param_2;
    lVar11 = 0;
    uVar7 = 0;
    do {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar8 + (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
        *(undefined4 *)(lVar6 + lVar11) = *(undefined4 *)(lVar5 + lVar11);
        *(undefined4 *)(lVar6 + 4 + lVar11) = *(undefined4 *)(lVar5 + 4 + lVar11);
      }
      else {
        puVar1 = (undefined8 *)(lVar6 + lVar11);
        *(undefined4 *)(puVar1 + 1) = 0xffffffff;
        *puVar1 = 0;
        lVar2 = lVar5 + 0x10 + lVar11;
        *puVar1 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar2 + -8);
        FUN_148c21edc();
        FUN_148c21edc(lVar6 + lVar11 + 0x28,lVar11 + lVar5 + 0x28);
        *(undefined8 *)(lVar6 + lVar11 + 0x40) = *(undefined8 *)(lVar11 + lVar5 + 0x40);
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 0x48;
    } while ((ulonglong)uVar4 * 0x48 != lVar11);
  }
  return param_1;
}



// FUNCTION 144047f92 FUN_144047f92 body=498 status=ok
// SIG undefined FUN_144047f92(void)

longlong * FUN_144047f92(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar6 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
    if (iVar1 == 0) goto LAB_14404800b;
  }
  else {
    FUN_1446efa72(plVar6,0,iVar1,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar6 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar6;
  }
  plVar6 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar6,(longlong)iVar1 << 2);
LAB_14404800b:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_144047ab0(param_1,(ulonglong)uVar2);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
    FUN_140549c28(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar7 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar6 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar6,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar4 = *param_1;
    lVar3 = *param_2;
    lVar10 = 0;
    uVar9 = 0;
    do {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar6 + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1)
          == 0) {
        *(undefined4 *)(lVar4 + lVar10) = *(undefined4 *)(lVar3 + lVar10);
        *(undefined4 *)(lVar4 + 4 + lVar10) = *(undefined4 *)(lVar3 + 4 + lVar10);
      }
      else {
        *(undefined8 *)(lVar4 + lVar10) = *(undefined8 *)(lVar3 + lVar10);
        FUN_148c21edc(lVar4 + 8 + lVar10,lVar3 + 8 + lVar10);
        *(undefined8 *)(lVar4 + 0x20 + lVar10) = *(undefined8 *)(lVar3 + 0x20 + lVar10);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x28;
    } while (uVar2 != uVar9);
  }
  return param_1;
}



// FUNCTION 144048184 FUN_144048184 body=1348 status=ok
// SIG undefined FUN_144048184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144048184(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab0c0 = (ulonglong)uVar2;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76de30);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76df90);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76e460);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76e630);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76f280);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbab1a0);
  if (cVar1 == '\0') {
    _DAT_14cbab1a0 = 0;
    uRam000000014cbab1a8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b76f990);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7708e0);
  local_50 = "basic";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab240 = (ulonglong)uVar2;
  local_50 = "challenge";
  local_48 = 9;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab248 = (ulonglong)uVar2;
  local_50 = "online";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab250 = (ulonglong)uVar2;
  local_50 = "social";
  local_48 = 6;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab258 = (ulonglong)uVar2;
  local_50 = "alert";
  local_48 = 5;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab260 = (ulonglong)uVar2;
  local_50 = "photo_mode";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab268 = (ulonglong)uVar2;
  local_50 = "generic_task";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab270 = (ulonglong)uVar2;
  local_50 = "mission";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab278 = (ulonglong)uVar2;
  local_50 = "mail";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab280 = (ulonglong)uVar2;
  local_50 = "respawn";
  local_48 = 7;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab288 = (ulonglong)uVar2;
  local_50 = "tutorial";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab290 = (ulonglong)uVar2;
  local_50 = "special_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab298 = (ulonglong)uVar2;
  local_50 = "generic_notification";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2a0 = (ulonglong)uVar2;
  local_50 = "vault_card";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2a8 = (ulonglong)uVar2;
  local_50 = "ONLINE_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2b0 = (ulonglong)uVar2;
  local_50 = "INGAME_MESSAGE";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2b8 = (ulonglong)uVar2;
  local_50 = "NOTIFICATION_MESSAGE";
  local_48 = 0x14;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2c0 = (ulonglong)uVar2;
  local_50 = "MENU_TUTORIAL_MESSAGE";
  local_48 = 0x15;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2c8 = (ulonglong)uVar2;
  local_50 = "collectible";
  local_48 = 0xb;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab2d0 = (ulonglong)uVar2;
  local_60 = &PTR_FUN_14b774ba0;
  uStack_58 = 1;
  local_68 = 0x10;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b774bc0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144048710 FUN_144048710 body=55 status=ok
// SIG undefined FUN_144048710(void)

void FUN_144048710(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab590 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab590 = FUN_14171c317(FUN_1465dd386,uVar1,L"ELockedHitReaction");
  }
  return;
}



// FUNCTION 144048748 FUN_144048748 body=5806 status=ok
// SIG undefined FUN_144048748(void)

void FUN_144048748(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  char cVar8;
  undefined7 *_Src;
  undefined1 *_Src_00;
  uint *_Src_01;
  undefined4 *puVar9;
  int *_Src_02;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined *local_108;
  code *local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  int local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uStack_38 = 0;
  uStack_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_1468d96f0;
      local_110 = 0;
      local_118 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_38);
            goto LAB_14404893d;
          }
        }
        _Src = (undefined7 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_38,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_38,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_38,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_38 = (undefined7)uVar2;
      uStack_31 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_38);
    }
  }
LAB_14404893d:
  local_39 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_140a4831c;
      local_118 = 0x1000000008001;
      local_110 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_39);
            goto LAB_144048b0c;
          }
        }
        _Src_00 = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_39) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_39,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_39,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_39,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_39,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_39);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_39);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_39 = (undefined1)uVar2;
      uStack_38 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_39);
    }
  }
LAB_144048b0c:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_1403a682c;
      local_110 = 0;
      local_118 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_48);
            goto LAB_144048cdf;
          }
        }
        puVar10 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_48,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_48,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_48,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
LAB_144048cdf:
  uStack_90 = uStack_90 & 0xffffff00;
  uStack_8c = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0xf00000d0;
  local_70 = 0;
  local_68 = 0;
  uStack_64 = uStack_64 & 0xffffff00;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_1403a682c;
      local_110 = 0;
      local_118 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_90);
            goto LAB_144048ef7;
          }
        }
        _Src_01 = (uint *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_01 != &uStack_90) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_90,_Src_01,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_90,_Src_01,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_90,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_90,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_90);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_90);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_90 = (uint)uVar2;
      uStack_8c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_90);
    }
  }
LAB_144048ef7:
  local_94 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_100 = FUN_1408a629c;
      local_108 = &DAT_14c9520b8;
      local_110 = 0;
      local_118 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_94);
            goto LAB_1440490c9;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &local_94) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_94,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&local_94,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_94,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_94,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_94);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_94);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_94 = (undefined4)uVar2;
      uStack_90 = (uint)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_94);
    }
  }
LAB_1440490c9:
  uStack_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_100 = FUN_1408a629c;
      local_108 = &DAT_14c9520b8;
      local_110 = 0;
      local_118 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_98);
            goto LAB_14404929b;
          }
        }
        puVar9 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar9 != &uStack_98) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_98,puVar9,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_98,puVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_98,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_98,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_98);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_98);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_98 = (undefined4)uVar2;
      local_94 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_98);
    }
  }
LAB_14404929b:
  local_9c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_14067a048;
      local_110 = 0;
      local_118 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_9c);
            goto LAB_14404946d;
          }
        }
        _Src_02 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_02 != &local_9c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_9c,_Src_02,(int)plVar4[6]);
          }
          else {
            memcpy(&local_9c,_Src_02,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_9c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_9c,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_9c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_9c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_9c = (int)uVar2;
      uStack_98 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_9c);
    }
  }
LAB_14404946d:
  iVar7 = local_9c;
  local_a8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_108 = (undefined *)FUN_1446ddbd2();
      local_100 = FUN_1468d96f0;
      local_110 = 0;
      local_118 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_a8);
            goto LAB_14404964f;
          }
        }
        puVar10 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_a8) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_a8,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_a8,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_110 = CONCAT44(local_110._4_4_,(int)plVar4[6]);
        local_118 = local_118 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_a8,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_a8,lVar5);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar10;
        puVar10 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_a8);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a8);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_a8 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a8);
    }
  }
LAB_14404964f:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f0 = CONCAT44(uStack_8c,uStack_90);
  local_e8 = uStack_88;
  local_e0 = local_80;
  local_d8 = local_78;
  local_d0 = 0;
  local_c8 = local_68;
  uStack_c4 = uStack_64;
  uStack_c0 = (undefined4)uStack_60;
  uStack_bc = uStack_60._4_4_;
  local_b8 = (undefined4)uStack_58;
  uStack_b4 = uStack_58._4_4_;
  uStack_b0 = (undefined4)uStack_50;
  uStack_ac = uStack_50._4_4_;
  local_108 = (undefined *)CONCAT71(local_108._1_7_,iVar7 != 0);
  local_100 = (code *)local_a8;
  local_110 = CONCAT44(local_110._4_4_,uStack_98);
  local_118 = CONCAT44(local_118._4_4_,local_94);
  FUN_144167b86(CONCAT17(uStack_31,uStack_38),local_39,local_48);
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144049df7 FUN_144049df7 body=55 status=ok
// SIG undefined FUN_144049df7(void)

void FUN_144049df7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab648 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab648 = FUN_14171c317(FUN_1465dd77f,uVar1,L"EOakBaseHitReaction");
  }
  return;
}



// FUNCTION 144049e2e FUN_144049e2e body=55 status=ok
// SIG undefined FUN_144049e2e(void)

void FUN_144049e2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab690 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab690 = FUN_14171c317(FUN_1465dd8da,uVar1,L"EOakVehicleCollisionResponse");
  }
  return;
}



// FUNCTION 144049e65 FUN_144049e65 body=55 status=ok
// SIG undefined FUN_144049e65(void)

void FUN_144049e65(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab710 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab710 = FUN_14171c317(FUN_1465dd4d3,uVar1,L"ELiveHitReaction");
  }
  return;
}



// FUNCTION 144049e9c FUN_144049e9c body=55 status=ok
// SIG undefined FUN_144049e9c(void)

void FUN_144049e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab728 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab728 = FUN_14171c317(FUN_1465ddafe,uVar1,L"EElementalHitReaction");
  }
  return;
}



// FUNCTION 144049ed3 FUN_144049ed3 body=55 status=ok
// SIG undefined FUN_144049ed3(void)

void FUN_144049ed3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab740 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab740 = FUN_14171c317(FUN_1465dd3b5,uVar1,L"EDeathHitReaction");
  }
  return;
}



// FUNCTION 144049f0a FUN_144049f0a body=55 status=ok
// SIG undefined FUN_144049f0a(void)

void FUN_144049f0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab758 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab758 = FUN_14171c317(FUN_1465ddb2d,uVar1,L"EHitReactionElement");
  }
  return;
}



// FUNCTION 144049f41 FUN_144049f41 body=55 status=ok
// SIG undefined FUN_144049f41(void)

void FUN_144049f41(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab770 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab770 = FUN_14171c317(FUN_1465dd444,uVar1,L"EDeathHitAnim");
  }
  return;
}



// FUNCTION 144049f78 FUN_144049f78 body=55 status=ok
// SIG undefined FUN_144049f78(void)

void FUN_144049f78(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab788 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab788 = FUN_14171c317(FUN_1465ddb5c,uVar1,L"EDeathHitFX");
  }
  return;
}



// FUNCTION 144049fb0 FUN_144049fb0 body=48 status=ok
// SIG undefined FUN_144049fb0(void)

longlong FUN_144049fb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144049fe0 FUN_144049fe0 body=48 status=ok
// SIG undefined FUN_144049fe0(void)

longlong FUN_144049fe0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404a010 FUN_14404a010 body=48 status=ok
// SIG undefined FUN_14404a010(void)

longlong FUN_14404a010(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404a040 FUN_14404a040 body=48 status=ok
// SIG undefined FUN_14404a040(void)

longlong FUN_14404a040(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404a0b6 FUN_14404a0b6 body=1172 status=ok
// SIG undefined FUN_14404a0b6(void)

void FUN_14404a0b6(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
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
  *param_2 = &PTR_FUN_14b77f5a0;
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
  return;
}



// FUNCTION 14404a582 FUN_14404a582 body=57 status=ok
// SIG undefined FUN_14404a582(void)

void FUN_14404a582(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab618 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab618 = FUN_140002ddd(FUN_1465dd6f1,uVar1,L"OakHitReactionDef");
  }
  return;
}



// FUNCTION 14404a5e6 FUN_14404a5e6 body=76 status=ok
// SIG undefined FUN_14404a5e6(void)

void FUN_14404a5e6(undefined8 param_1,void *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0x90);
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x10) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x18) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x20) = DAT_14c8464f0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined4 *)((longlong)param_2 + 0x40) = 0x3002;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 2;
  return;
}



// FUNCTION 14404a684 FUN_14404a684 body=260 status=ok
// SIG undefined FUN_14404a684(void)

undefined1 FUN_14404a684(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      lVar12 = *(longlong *)(param_3 + 8 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + 8 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1[1] = lVar12;
      lVar12 = *(longlong *)(param_3 + 0x10 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + 0x10 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1[2] = lVar12;
      lVar12 = *(longlong *)(param_3 + 0x18 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + 0x18 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1[3] = lVar12;
      puVar2 = (undefined4 *)(param_3 + 0x20 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x30 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 4) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar4;
      *(undefined4 *)(plVar1 + 5) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar6;
      *(undefined4 *)(plVar1 + 6) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x34) = uVar8;
      *(undefined4 *)(plVar1 + 7) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x3c) = uVar10;
      plVar1[8] = *(longlong *)(param_3 + 0x40 + lVar13);
      lVar13 = lVar13 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14404a7a4 FUN_14404a7a4 body=57 status=ok
// SIG undefined FUN_14404a7a4(void)

void FUN_14404a7a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab7d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab7d0 =
         FUN_140002ddd(FUN_1465ddc25,uVar1,L"GbxSkillComponentData_TimerExtension_OakHUDIcon");
  }
  return;
}



// FUNCTION 14404a7dd FUN_14404a7dd body=1046 status=ok
// SIG undefined FUN_14404a7dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404a7dd(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab470 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b778210);
  FUN_140056680(&DAT_14cbab490,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1440486cc);
  FUN_140056680(&DAT_14cbab4a0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1440486dd);
  FUN_140056680(&DAT_14cbab4b0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1440486ee);
  FUN_140056680(&DAT_14cbab4c0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1440486ff);
  FUN_1446f470e(&DAT_14cbab4d0,L"LIMB_GORED",1);
  _DAT_14cbab4d8 = 0x4072c00000000000;
  _DAT_14cbab4e0 = 0x4082c00000000000;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7782a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b778360);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbab518);
  if (cVar1 == '\0') {
    _DAT_14cbab518 = 0;
    uRam000000014cbab520 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b778420,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7784f0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7788d0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b77a1e0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77a200,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77a700,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77af10,1,&PTR_FUN_14b77aee0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b77bb60;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77bbf0,1,&PTR_FUN_14b77bba0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b77c590);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b77ca20 + lVar3),L"/Script/OakGame",
                  *(undefined8 *)(&UNK_14b77ca28 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b77ca30 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0xd0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77d480,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77dc10,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b77dd50);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77de10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77e210,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b77efb0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404abfc FUN_14404abfc body=55 status=ok
// SIG undefined FUN_14404abfc(void)

void FUN_14404abfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbab940 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbab940 = FUN_14171c317(FUN_1465de537,uVar1,L"EOakIntrinsicElementOverride");
  }
  return;
}



// FUNCTION 14404ac33 FUN_14404ac33 body=55 status=ok
// SIG undefined FUN_14404ac33(void)

void FUN_14404ac33(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaba60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaba60 = FUN_14171c317(FUN_1465dead8,uVar1,L"EOakGbxItemStateFlags");
  }
  return;
}



// FUNCTION 14404ac6a FUN_14404ac6a body=55 status=ok
// SIG undefined FUN_14404ac6a(void)

void FUN_14404ac6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabab0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabab0 = FUN_14171c317(FUN_1465debd4,uVar1,L"EVendingMachineType");
  }
  return;
}



// FUNCTION 14404acb2 FUN_14404acb2 body=55 status=ok
// SIG undefined FUN_14404acb2(void)

void FUN_14404acb2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabc18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabc18 = FUN_14171c317(FUN_1465ded2b,uVar1,L"EOakVendingMachineState");
  }
  return;
}



// FUNCTION 14404ace9 FUN_14404ace9 body=55 status=ok
// SIG undefined FUN_14404ace9(void)

void FUN_14404ace9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabc30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabc30 = FUN_14171c317(FUN_1465ded5a,uVar1,L"EOakVendingMachineInUseState");
  }
  return;
}



// FUNCTION 14404ad20 FUN_14404ad20 body=55 status=ok
// SIG undefined FUN_14404ad20(void)

void FUN_14404ad20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabc60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabc60 = FUN_14171c317(FUN_1465dedbe,uVar1,L"EInventoryTransactionType");
  }
  return;
}



// FUNCTION 14404ad57 FUN_14404ad57 body=55 status=ok
// SIG undefined FUN_14404ad57(void)

void FUN_14404ad57(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabc78 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabc78 = FUN_14171c317(FUN_1465dedef,uVar1,L"EItemContainerMenuButton");
  }
  return;
}



// FUNCTION 14404ad8e FUN_14404ad8e body=55 status=ok
// SIG undefined FUN_14404ad8e(void)

void FUN_14404ad8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabc90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabc90 = FUN_14171c317(FUN_1465dee1e,uVar1,L"EGenerateInventoryMatchOptions");
  }
  return;
}



// FUNCTION 14404af4c FUN_14404af4c body=90 status=ok
// SIG undefined FUN_14404af4c(void)

void FUN_14404af4c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,200);
  *(undefined4 *)(param_2 + 10) = 0xaaad1010;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x41f00000;
  *param_2 = &PTR_FUN_14b78a7f0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0xffffffff00000080;
  return;
}



// FUNCTION 14404afaa FUN_14404afaa body=57 status=ok
// SIG undefined FUN_14404afaa(void)

void FUN_14404afaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaba48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaba48 = FUN_140002ddd(FUN_1465dea79,uVar1,L"OakInventoryDialogAspect");
  }
  return;
}



// FUNCTION 14404b01a FUN_14404b01a body=57 status=ok
// SIG undefined FUN_14404b01a(void)

void FUN_14404b01a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabae0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabae0 = FUN_140002ddd(FUN_1465dec9a,uVar1,L"OakInventoryShopDef");
  }
  return;
}



// FUNCTION 14404b053 FUN_14404b053 body=1115 status=ok
// SIG undefined FUN_14404b053(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404b053(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b782ec0,1,&PTR_FUN_14b782e70);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbab8d8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b783690);
  FUN_1446f470e(&DAT_14cbab908,L"OnIntrinsicElementChanedBP",1);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b7857e0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7858a0,2,&PTR_FUN_14b785800);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b785c30,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b786040,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b786240);
  FUN_14098d3d2(FUN_14404ac33,L"/Script/OakGame",L"EOakGbxItemStateFlags",&DAT_14cbaba58);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b786440);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b786790,1,0);
  local_50 = "Cash";
  local_48 = 4;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  DAT_14cbabaa0 = (ulonglong)uVar2;
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b787010;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b787080,1,&PTR_FUN_14b787030);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbabb08);
  if (cVar1 == '\0') {
    _DAT_14cbabb08 = 0;
    uRam000000014cbabb10 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbabb18 = 0x47efffffe0000000;
  _DAT_14cbabb20 = 0x47efffffe0000000;
  _DAT_14cbabb28 = 0x47efffffe0000000;
  _DAT_14cbabb30 = 0x47efffffe0000000;
  _DAT_14cbabb38 = 0x47efffffe0000000;
  _DAT_14cbabb40 = 0x47efffffe0000000;
  _DAT_14cbabb48 = 0x47efffffe0000000;
  _DAT_14cbabb50 = 0x47efffffe0000000;
  FUN_1400b22c2(&DAT_14cbabb58,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14404aca1);
  _DAT_14cbabb6c = 0;
  FUN_14052b5e0(&DAT_14cbabb68,"VendingMachineState",0);
  _DAT_14cbabb78 = "VendingMachineState";
  _DAT_14cbabb84 = 0;
  FUN_14052b5e0(&DAT_14cbabb80,"InUseState",0);
  _DAT_14cbabb90 = "InUseState";
  _DAT_14cbabb9c = 0;
  FUN_14052b5e0(&DAT_14cbabb98,"state",0);
  _DAT_14cbabba8 = "state";
  _DAT_14cbabbb4 = 0;
  FUN_14052b5e0(&DAT_14cbabbb0,"shuffle_timestamp",0);
  _DAT_14cbabbc0 = "shuffle_timestamp";
  _DAT_14cbabbcc = 0;
  FUN_14052b5e0(&DAT_14cbabbc8,"iotd_timestamp",0);
  _DAT_14cbabbd8 = "iotd_timestamp";
  _DAT_14cbabbe4 = 0;
  FUN_14052b5e0(&DAT_14cbabbe0,"items",0);
  _DAT_14cbabbf0 = "items";
  _DAT_14cbabbfc = 0;
  FUN_14052b5e0(&DAT_14cbabbf8,&DAT_14b3fc248,0);
  _DAT_14cbabc08 = &DAT_14b3fc248;
  ppuStack_60 = &PTR_FUN_14b787240;
  local_68 = 0;
  uStack_58 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b787280,1,0);
  ppuStack_60 = &PTR_FUN_14b789b80;
  local_68 = 0;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b789be0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404b4b0 FUN_14404b4b0 body=55 status=ok
// SIG undefined FUN_14404b4b0(void)

void FUN_14404b4b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabda8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabda8 = FUN_14171c317(FUN_1465df6e6,uVar1,L"KillStingerTier");
  }
  return;
}



// FUNCTION 14404b4e7 FUN_14404b4e7 body=55 status=ok
// SIG undefined FUN_14404b4e7(void)

void FUN_14404b4e7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabfa0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabfa0 = FUN_14171c317(FUN_1465dfbb6,uVar1,L"EMotionControlsSetting");
  }
  return;
}



// FUNCTION 14404b51e FUN_14404b51e body=55 status=ok
// SIG undefined FUN_14404b51e(void)

void FUN_14404b51e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabfb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabfb8 = FUN_14171c317(FUN_1465dfbe5,uVar1,L"EEnableJcmsControl");
  }
  return;
}



// FUNCTION 14404b555 FUN_14404b555 body=47 status=ok
// SIG undefined FUN_14404b555(void)

longlong FUN_14404b555(void)

{
  if (DAT_14cbabfd0 == 0) {
    FUN_14000fc22(&DAT_14cbabfd0,&PTR_FUN_14b78e0d8);
  }
  return DAT_14cbabfd0;
}



// FUNCTION 14404b5a6 FUN_14404b5a6 body=47 status=ok
// SIG undefined FUN_14404b5a6(void)

longlong FUN_14404b5a6(void)

{
  if (DAT_14cbac210 == 0) {
    FUN_14000fc22(&DAT_14cbac210,&PTR_FUN_14b791050);
  }
  return DAT_14cbac210;
}



// FUNCTION 14404b5f4 FUN_14404b5f4 body=47 status=ok
// SIG undefined FUN_14404b5f4(void)

longlong FUN_14404b5f4(void)

{
  if (DAT_14cbac218 == 0) {
    FUN_14000fc22(&DAT_14cbac218,&PTR_FUN_14b7910f8);
  }
  return DAT_14cbac218;
}



// FUNCTION 14404b642 FUN_14404b642 body=47 status=ok
// SIG undefined FUN_14404b642(void)

longlong FUN_14404b642(void)

{
  if (DAT_14cbac298 == 0) {
    FUN_14000fc22(&DAT_14cbac298,&PTR_FUN_14b791b08);
  }
  return DAT_14cbac298;
}



// FUNCTION 14404b68c FUN_14404b68c body=47 status=ok
// SIG undefined FUN_14404b68c(void)

longlong FUN_14404b68c(void)

{
  if (DAT_14cbac330 == 0) {
    FUN_14000fc22(&DAT_14cbac330,&PTR_FUN_14b7926a0);
  }
  return DAT_14cbac330;
}



// FUNCTION 14404b6bc FUN_14404b6bc body=738 status=ok
// SIG undefined FUN_14404b6bc(void)

void FUN_14404b6bc(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_14404b88d;
          }
        }
        _Src = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_14404b88d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x3f4) = local_2c;
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404b9a4 FUN_14404b9a4 body=47 status=ok
// SIG undefined FUN_14404b9a4(void)

longlong FUN_14404b9a4(void)

{
  if (DAT_14cbac5f8 == 0) {
    FUN_14000fc22(&DAT_14cbac5f8,&PTR_FUN_14b7965b0);
  }
  return DAT_14cbac5f8;
}



// FUNCTION 14404b9d4 FUN_14404b9d4 body=729 status=ok
// SIG undefined FUN_14404b9d4(void)

void FUN_14404b9d4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_14404bba5;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_14404bba5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x458) = local_2c != 0;
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404bcb2 FUN_14404bcb2 body=47 status=ok
// SIG undefined FUN_14404bcb2(void)

longlong FUN_14404bcb2(void)

{
  if (DAT_14cbac600 == 0) {
    FUN_14000fc22(&DAT_14cbac600,&PTR_FUN_14b796678);
  }
  return DAT_14cbac600;
}



// FUNCTION 14404bce2 FUN_14404bce2 body=729 status=ok
// SIG undefined FUN_14404bce2(void)

void FUN_14404bce2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_14404beb3;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_14404beb3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x459) = local_2c != 0;
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404bfc0 FUN_14404bfc0 body=47 status=ok
// SIG undefined FUN_14404bfc0(void)

longlong FUN_14404bfc0(void)

{
  if (DAT_14cbac680 == 0) {
    FUN_14000fc22(&DAT_14cbac680,&PTR_FUN_14b7971c0);
  }
  return DAT_14cbac680;
}



// FUNCTION 14404bff0 FUN_14404bff0 body=729 status=ok
// SIG undefined FUN_14404bff0(void)

void FUN_14404bff0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_14404c1c1;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_14404c1c1:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x3e6) = local_2c != 0;
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404c2ca FUN_14404c2ca body=48 status=ok
// SIG undefined FUN_14404c2ca(void)

longlong FUN_14404c2ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404c2fa FUN_14404c2fa body=48 status=ok
// SIG undefined FUN_14404c2fa(void)

longlong FUN_14404c2fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404c32a FUN_14404c32a body=48 status=ok
// SIG undefined FUN_14404c32a(void)

longlong FUN_14404c32a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404c35a FUN_14404c35a body=48 status=ok
// SIG undefined FUN_14404c35a(void)

longlong FUN_14404c35a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_140e4561e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404c38a FUN_14404c38a body=48 status=ok
// SIG undefined FUN_14404c38a(void)

longlong FUN_14404c38a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x330;
  FUN_14156de5a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404c424 FUN_14404c424 body=57 status=ok
// SIG undefined FUN_14404c424(void)

void FUN_14404c424(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbabed8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbabed8 = FUN_140002ddd(FUN_1465df8dd,uVar1,L"OakLevelStationData");
  }
  return;
}



// FUNCTION 14404c4bb FUN_14404c4bb body=824 status=ok
// SIG undefined FUN_14404c4bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404c4bb(void)

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
  _DAT_14cbabd80 = (ulonglong)uVar2;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b78c220;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78c270,1,&PTR_FUN_14b78c240);
  _DAT_14cbabdd0 = 0xffffffff;
  _DAT_14cbabdd4 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78c710,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78c7d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78cb90,1,0);
  _DAT_14cbabe20 = 0x47efffffe0000000;
  _DAT_14cbabe28 = 0x47efffffe0000000;
  _DAT_14cbabe30 = 0x47efffffe0000000;
  _DAT_14cbabe38 = 0x47efffffe0000000;
  _DAT_14cbabe40 = 0x47efffffe0000000;
  _DAT_14cbabe48 = 0x47efffffe0000000;
  _DAT_14cbabe50 = 0x47efffffe0000000;
  _DAT_14cbabe58 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbabe60);
  if (cVar1 == '\0') {
    _DAT_14cbabe60 = 0;
    uRam000000014cbabe68 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbabe74 = 0;
  FUN_14052b5e0(&DAT_14cbabe70,"PlayerAwareness",0);
  _DAT_14cbabe80 = "PlayerAwareness";
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78cfb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78d220,1,&PTR_FUN_14b78d1f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b78d5d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78d6a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b78d730);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78d8b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b78da90);
  FUN_1446f470e(&DAT_14cbabf78,L"UNSET",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b78def0,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b79a330;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b79a370,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404c7f4 FUN_14404c7f4 body=55 status=ok
// SIG undefined FUN_14404c7f4(void)

void FUN_14404c7f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac7d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac7d8 = FUN_14171c317(FUN_1465e2afe,uVar1,L"ELostLootUsabilityFunction");
  }
  return;
}



// FUNCTION 14404c82b FUN_14404c82b body=55 status=ok
// SIG undefined FUN_14404c82b(void)

void FUN_14404c82b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac7f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac7f0 = FUN_14171c317(FUN_1465e2b2f,uVar1,L"ELostLootEventType");
  }
  return;
}



// FUNCTION 14404c884 FUN_14404c884 body=55 status=ok
// SIG undefined FUN_14404c884(void)

void FUN_14404c884(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac8e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac8e0 = FUN_14171c317(FUN_1465e2dd2,uVar1,L"EOakLostLootAttributeType");
  }
  return;
}



// FUNCTION 14404c8bb FUN_14404c8bb body=55 status=ok
// SIG undefined FUN_14404c8bb(void)

void FUN_14404c8bb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac960 = FUN_14171c317(FUN_1465e30c6,uVar1,L"EOakMapViewerLoadingState");
  }
  return;
}



// FUNCTION 14404c8f2 FUN_14404c8f2 body=55 status=ok
// SIG undefined FUN_14404c8f2(void)

void FUN_14404c8f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac978 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac978 = FUN_140002ddd(FUN_14404c929,uVar1,L"OakMapViewerCachedMaterialKey");
  }
  return;
}



// FUNCTION 14404c929 FUN_14404c929 body=47 status=ok
// SIG undefined FUN_14404c929(void)

longlong FUN_14404c929(void)

{
  if (DAT_14cbac970 == 0) {
    FUN_14086a14e(&DAT_14cbac970,&PTR_FUN_14b7a0b70);
  }
  return DAT_14cbac970;
}



// FUNCTION 14404c95e FUN_14404c95e body=48 status=ok
// SIG undefined FUN_14404c95e(void)

void FUN_14404c95e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14b7a8070;
  return;
}



// FUNCTION 14404c99e FUN_14404c99e body=55 status=ok
// SIG undefined FUN_14404c99e(void)

void FUN_14404c99e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaca50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaca50 = FUN_14171c317(FUN_1465e350a,uVar1,L"EOakMapViewerLabelTextSource");
  }
  return;
}



// FUNCTION 14404c9e2 FUN_14404c9e2 body=227 status=ok
// SIG undefined FUN_14404c9e2(void)

longlong FUN_14404c9e2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbacac0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411d02ec;
    local_38 = &LAB_14404c9d7;
    local_40 = &LAB_14404c9da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMapViewerPreferencesRole",&DAT_14cbacac0,&DAT_14404c9d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbacac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404cac6 FUN_14404cac6 body=47 status=ok
// SIG undefined FUN_14404cac6(void)

longlong FUN_14404cac6(void)

{
  if (DAT_14cbacac8 == 0) {
    FUN_14073dd9a(&DAT_14cbacac8,&PTR_FUN_14b7a3b38);
  }
  return DAT_14cbacac8;
}



// FUNCTION 14404caf5 FUN_14404caf5 body=55 status=ok
// SIG undefined FUN_14404caf5(void)

void FUN_14404caf5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacb18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacb18 = FUN_14171c317(FUN_1465e30f5,uVar1,L"EOakMapViewerRegionMaterialType");
  }
  return;
}



// FUNCTION 14404cb2c FUN_14404cb2c body=55 status=ok
// SIG undefined FUN_14404cb2c(void)

void FUN_14404cb2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacb48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacb48 = FUN_140002ddd(FUN_14404cb63,uVar1,L"OakMapViewerFilterDef");
  }
  return;
}



// FUNCTION 14404cb63 FUN_14404cb63 body=47 status=ok
// SIG undefined FUN_14404cb63(void)

longlong FUN_14404cb63(void)

{
  if (DAT_14cbacb40 == 0) {
    FUN_14086a14e(&DAT_14cbacb40,&PTR_FUN_14b7a5d38);
  }
  return DAT_14cbacb40;
}



// FUNCTION 14404cb92 FUN_14404cb92 body=48 status=ok
// SIG undefined FUN_14404cb92(void)

void FUN_14404cb92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14b7a8d30;
  return;
}



// FUNCTION 14404cbc2 FUN_14404cbc2 body=48 status=ok
// SIG undefined FUN_14404cbc2(void)

longlong FUN_14404cbc2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cbf2 FUN_14404cbf2 body=48 status=ok
// SIG undefined FUN_14404cbf2(void)

longlong FUN_14404cbf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cc22 FUN_14404cc22 body=48 status=ok
// SIG undefined FUN_14404cc22(void)

longlong FUN_14404cc22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1538;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cc52 FUN_14404cc52 body=48 status=ok
// SIG undefined FUN_14404cc52(void)

longlong FUN_14404cc52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1540;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cc82 FUN_14404cc82 body=48 status=ok
// SIG undefined FUN_14404cc82(void)

longlong FUN_14404cc82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c40;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404ccb2 FUN_14404ccb2 body=48 status=ok
// SIG undefined FUN_14404ccb2(void)

longlong FUN_14404ccb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c48;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cce2 FUN_14404cce2 body=48 status=ok
// SIG undefined FUN_14404cce2(void)

longlong FUN_14404cce2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c50;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cd12 FUN_14404cd12 body=48 status=ok
// SIG undefined FUN_14404cd12(void)

longlong FUN_14404cd12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c58;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cd42 FUN_14404cd42 body=48 status=ok
// SIG undefined FUN_14404cd42(void)

longlong FUN_14404cd42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c60;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cd72 FUN_14404cd72 body=48 status=ok
// SIG undefined FUN_14404cd72(void)

longlong FUN_14404cd72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c68;
  FUN_145fdeeb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cda2 FUN_14404cda2 body=48 status=ok
// SIG undefined FUN_14404cda2(void)

longlong FUN_14404cda2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cdd2 FUN_14404cdd2 body=48 status=ok
// SIG undefined FUN_14404cdd2(void)

longlong FUN_14404cdd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404ce02 FUN_14404ce02 body=48 status=ok
// SIG undefined FUN_14404ce02(void)

longlong FUN_14404ce02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404ce32 FUN_14404ce32 body=48 status=ok
// SIG undefined FUN_14404ce32(void)

longlong FUN_14404ce32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404ce62 FUN_14404ce62 body=48 status=ok
// SIG undefined FUN_14404ce62(void)

longlong FUN_14404ce62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404ce92 FUN_14404ce92 body=48 status=ok
// SIG undefined FUN_14404ce92(void)

longlong FUN_14404ce92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cec2 FUN_14404cec2 body=48 status=ok
// SIG undefined FUN_14404cec2(void)

longlong FUN_14404cec2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cef2 FUN_14404cef2 body=48 status=ok
// SIG undefined FUN_14404cef2(void)

longlong FUN_14404cef2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cf22 FUN_14404cf22 body=48 status=ok
// SIG undefined FUN_14404cf22(void)

longlong FUN_14404cf22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_145ce4502(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cf52 FUN_14404cf52 body=48 status=ok
// SIG undefined FUN_14404cf52(void)

longlong FUN_14404cf52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cf82 FUN_14404cf82 body=38 status=ok
// SIG undefined FUN_14404cf82(void)

undefined8 FUN_14404cf82(undefined8 param_1,int param_2)

{
  FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404cfd2 FUN_14404cfd2 body=57 status=ok
// SIG undefined FUN_14404cfd2(void)

void FUN_14404cfd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbac860 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbac860 = FUN_140002ddd(FUN_1465e2d38,uVar1,L"OakLostLootMachineDef");
  }
  return;
}



// FUNCTION 14404d028 FUN_14404d028 body=65 status=ok
// SIG undefined FUN_14404d028(void)

void FUN_14404d028(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((longlong)param_2 + 0x74) = 0x42b40000;
  return;
}



// FUNCTION 14404d06a FUN_14404d06a body=29 status=ok
// SIG undefined FUN_14404d06a(void)

undefined8 FUN_14404d06a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404d11c FUN_14404d11c body=357 status=ok
// SIG undefined FUN_14404d11c(void)

uint FUN_14404d11c(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  iVar2 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4);
  iVar3 = iVar2 - (uint)*(byte *)(param_2 + 1);
  uVar6 = iVar3 * 0x100 ^ 0x9e3779b9U - iVar2;
  uVar5 = uVar6 >> 0xd ^ ((uint)*(byte *)(param_2 + 1) - iVar3) - uVar6;
  uVar4 = uVar5 >> 0xc ^ (iVar3 - uVar6) - uVar5;
  uVar7 = uVar4 << 0x10 ^ (uVar6 - uVar5) - uVar4;
  uVar6 = uVar7 >> 5 ^ (uVar5 - uVar4) - uVar7;
  uVar5 = uVar6 >> 3 ^ (uVar4 - uVar7) - uVar6;
  uVar4 = uVar5 << 10 ^ (uVar7 - uVar6) - uVar5;
  uVar4 = uVar4 >> 0xf ^ uVar6 - (uVar5 + uVar4);
  iVar2 = uVar4 - *(byte *)((longlong)param_2 + 9);
  uVar6 = iVar2 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar5 = uVar6 >> 0xd ^ ((uint)*(byte *)((longlong)param_2 + 9) - iVar2) - uVar6;
  uVar4 = uVar5 >> 0xc ^ (iVar2 - uVar6) - uVar5;
  uVar6 = uVar4 << 0x10 ^ (uVar6 - uVar5) - uVar4;
  uVar7 = uVar6 >> 5 ^ (uVar5 - uVar4) - uVar6;
  uVar5 = uVar7 >> 3 ^ (uVar4 - uVar6) - uVar7;
  uVar4 = uVar5 << 10 ^ (uVar6 - uVar7) - uVar5;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 >> 0xf ^ uVar7 - (uVar5 + uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404d320 FUN_14404d320 body=57 status=ok
// SIG undefined FUN_14404d320(void)

void FUN_14404d320(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaca08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaca08 = FUN_140002ddd(FUN_1465e3382,uVar1,L"OakMapViewerDef");
  }
  return;
}



// FUNCTION 14404d35a FUN_14404d35a body=1697 status=ok
// SIG undefined FUN_14404d35a(void)

longlong FUN_14404d35a(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  uVar20 = *(undefined8 *)(param_2 + 0x18);
  uVar21 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x38);
  uVar10 = *(undefined4 *)(param_2 + 0x3c);
  uVar11 = *(undefined4 *)(param_2 + 0x40);
  uVar12 = *(undefined4 *)(param_2 + 0x44);
  uVar13 = *(undefined4 *)(param_2 + 0x4c);
  uVar14 = *(undefined4 *)(param_2 + 0x50);
  uVar15 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar13;
  *(undefined4 *)(param_1 + 0x50) = uVar14;
  *(undefined4 *)(param_1 + 0x54) = uVar15;
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  *(undefined4 *)(param_1 + 0x3c) = uVar10;
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  *(undefined4 *)(param_1 + 0x44) = uVar12;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uVar20;
  *(undefined8 *)(param_1 + 0x20) = uVar21;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 100);
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  if (param_1 == param_2) {
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    uVar20 = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = uVar20;
    uVar20 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = uVar20;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    uVar20 = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = uVar20;
    *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
    uVar20 = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(param_1 + 0x108) = uVar20;
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    uVar20 = *(undefined8 *)(param_2 + 0x138);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_1 + 0x138) = uVar20;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    uVar20 = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(param_1 + 0x160) = uVar20;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x78);
    pvVar4 = *(void **)(param_2 + 0x70);
    *(int *)(param_1 + 0x78) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x7c) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x70),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x70),pvVar4,(longlong)iVar3 * 2);
      }
    }
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    uVar5 = *(undefined4 *)(param_2 + 0x8c);
    uVar6 = *(undefined4 *)(param_2 + 0x90);
    uVar7 = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
    *(undefined4 *)(param_1 + 0x90) = uVar6;
    *(undefined4 *)(param_1 + 0x94) = uVar7;
    iVar3 = *(int *)(param_2 + 0xa0);
    pvVar4 = *(void **)(param_2 + 0x98);
    *(int *)(param_1 + 0xa0) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0xa4) == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x98),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x98),pvVar4,(longlong)iVar3 * 2);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    uVar20 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = uVar20;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    uVar5 = *(undefined4 *)(param_2 + 0xcc);
    uVar6 = *(undefined4 *)(param_2 + 0xd0);
    uVar7 = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = uVar5;
    *(undefined4 *)(param_1 + 0xd0) = uVar6;
    *(undefined4 *)(param_1 + 0xd4) = uVar7;
    iVar3 = *(int *)(param_2 + 0xe0);
    pvVar4 = *(void **)(param_2 + 0xd8);
    *(int *)(param_1 + 0xe0) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0xe4) == 0) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0xd8),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0xd8),pvVar4,(longlong)iVar3 * 2);
      }
    }
    *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
    uVar5 = *(undefined4 *)(param_2 + 0x104);
    uVar6 = *(undefined4 *)(param_2 + 0x108);
    uVar7 = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = uVar5;
    *(undefined4 *)(param_1 + 0x108) = uVar6;
    *(undefined4 *)(param_1 + 0x10c) = uVar7;
    iVar3 = *(int *)(param_2 + 0x118);
    pvVar4 = *(void **)(param_2 + 0x110);
    *(int *)(param_1 + 0x118) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x11c) == 0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x110),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x110),pvVar4,(longlong)iVar3 * 2);
      }
    }
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
    uVar5 = *(undefined4 *)(param_2 + 0x134);
    uVar6 = *(undefined4 *)(param_2 + 0x138);
    uVar7 = *(undefined4 *)(param_2 + 0x13c);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = uVar5;
    *(undefined4 *)(param_1 + 0x138) = uVar6;
    *(undefined4 *)(param_1 + 0x13c) = uVar7;
    iVar3 = *(int *)(param_2 + 0x148);
    pvVar4 = *(void **)(param_2 + 0x140);
    *(int *)(param_1 + 0x148) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x14c) == 0) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x140),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x140),pvVar4,(longlong)iVar3 * 2);
      }
    }
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
    uVar5 = *(undefined4 *)(param_2 + 0x15c);
    uVar6 = *(undefined4 *)(param_2 + 0x160);
    uVar7 = *(undefined4 *)(param_2 + 0x164);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = uVar5;
    *(undefined4 *)(param_1 + 0x160) = uVar6;
    *(undefined4 *)(param_1 + 0x164) = uVar7;
    iVar3 = *(int *)(param_2 + 0x170);
    pvVar4 = *(void **)(param_2 + 0x168);
    *(int *)(param_1 + 0x170) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x174) == 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x168),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x168),pvVar4,(longlong)iVar3 * 2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  lVar22 = 0;
  do {
    *(undefined8 *)(param_1 + 0x180 + lVar22) = *(undefined8 *)(param_2 + 0x180 + lVar22);
    puVar1 = (undefined4 *)(param_2 + 0x188 + lVar22);
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar2 = (undefined4 *)(param_1 + 0x188 + lVar22);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    if (param_1 != param_2) {
      iVar3 = *(int *)(param_2 + 0x1a0 + lVar22);
      pvVar4 = *(void **)(param_2 + 0x198 + lVar22);
      *(int *)(param_1 + 0x1a0 + lVar22) = iVar3;
      if (iVar3 == 0 && *(int *)(param_1 + 0x1a4 + lVar22) == 0) {
        *(undefined4 *)(param_1 + 0x1a4 + lVar22) = 0;
      }
      else {
        puVar23 = (undefined8 *)(param_1 + lVar22 + 0x198);
        FUN_1446dd670(puVar23,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*puVar23,pvVar4,(longlong)iVar3 * 2);
        }
      }
    }
    lVar22 = lVar22 + 0x28;
  } while (lVar22 != 0x140);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  FUN_148c30bfe(param_1 + 0x2d0,param_2 + 0x2d0);
  uVar5 = *(undefined4 *)(param_2 + 0x2e4);
  uVar6 = *(undefined4 *)(param_2 + 0x2e8);
  uVar7 = *(undefined4 *)(param_2 + 0x2ec);
  uVar8 = *(undefined4 *)(param_2 + 0x2f0);
  uVar9 = *(undefined4 *)(param_2 + 0x2f4);
  uVar10 = *(undefined4 *)(param_2 + 0x2f8);
  uVar11 = *(undefined4 *)(param_2 + 0x2fc);
  uVar12 = *(undefined4 *)(param_2 + 0x300);
  uVar13 = *(undefined4 *)(param_2 + 0x304);
  uVar14 = *(undefined4 *)(param_2 + 0x308);
  uVar15 = *(undefined4 *)(param_2 + 0x30c);
  uVar16 = *(undefined4 *)(param_2 + 0x309);
  uVar17 = *(undefined4 *)(param_2 + 0x30d);
  uVar18 = *(undefined4 *)(param_2 + 0x311);
  uVar19 = *(undefined4 *)(param_2 + 0x315);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x2e4) = uVar5;
  *(undefined4 *)(param_1 + 0x2e8) = uVar6;
  *(undefined4 *)(param_1 + 0x2ec) = uVar7;
  *(undefined4 *)(param_1 + 0x2f0) = uVar8;
  *(undefined4 *)(param_1 + 0x2f4) = uVar9;
  *(undefined4 *)(param_1 + 0x2f8) = uVar10;
  *(undefined4 *)(param_1 + 0x2fc) = uVar11;
  *(undefined4 *)(param_1 + 0x300) = uVar12;
  *(undefined4 *)(param_1 + 0x304) = uVar13;
  *(undefined4 *)(param_1 + 0x308) = uVar14;
  *(undefined4 *)(param_1 + 0x30c) = uVar15;
  *(undefined4 *)(param_1 + 0x309) = uVar16;
  *(undefined4 *)(param_1 + 0x30d) = uVar17;
  *(undefined4 *)(param_1 + 0x311) = uVar18;
  *(undefined4 *)(param_1 + 0x315) = uVar19;
  FUN_1465e3ce2(param_1 + 800,param_2 + 800);
  FUN_1465e3ce2(param_1 + 0x338,param_2 + 0x338);
  FUN_1465e3ce2(param_1 + 0x350,param_2 + 0x350);
  uVar20 = *(undefined8 *)(param_2 + 0x370);
  uVar5 = *(undefined4 *)(param_2 + 0x378);
  uVar6 = *(undefined4 *)(param_2 + 0x37c);
  uVar7 = *(undefined4 *)(param_2 + 0x380);
  uVar8 = *(undefined4 *)(param_2 + 900);
  uVar9 = *(undefined4 *)(param_2 + 0x388);
  uVar10 = *(undefined4 *)(param_2 + 0x38c);
  uVar11 = *(undefined4 *)(param_2 + 0x390);
  uVar12 = *(undefined4 *)(param_2 + 0x394);
  uVar13 = *(undefined4 *)(param_2 + 0x394);
  uVar14 = *(undefined4 *)(param_2 + 0x398);
  uVar15 = *(undefined4 *)(param_2 + 0x39c);
  uVar16 = *(undefined4 *)(param_2 + 0x3a0);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = uVar20;
  *(undefined4 *)(param_1 + 0x378) = uVar5;
  *(undefined4 *)(param_1 + 0x37c) = uVar6;
  *(undefined4 *)(param_1 + 0x380) = uVar7;
  *(undefined4 *)(param_1 + 900) = uVar8;
  *(undefined4 *)(param_1 + 0x388) = uVar9;
  *(undefined4 *)(param_1 + 0x38c) = uVar10;
  *(undefined4 *)(param_1 + 0x390) = uVar11;
  *(undefined4 *)(param_1 + 0x394) = uVar12;
  *(undefined4 *)(param_1 + 0x394) = uVar13;
  *(undefined4 *)(param_1 + 0x398) = uVar14;
  *(undefined4 *)(param_1 + 0x39c) = uVar15;
  *(undefined4 *)(param_1 + 0x3a0) = uVar16;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x3a8);
  uVar5 = *(undefined4 *)(param_2 + 0x3b4);
  uVar6 = *(undefined4 *)(param_2 + 0x3b8);
  uVar7 = *(undefined4 *)(param_2 + 0x3bc);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
  *(undefined4 *)(param_1 + 0x3b4) = uVar5;
  *(undefined4 *)(param_1 + 0x3b8) = uVar6;
  *(undefined4 *)(param_1 + 0x3bc) = uVar7;
  if (param_1 == param_2) {
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x3d0);
    uVar20 = *(undefined8 *)(param_2 + 0x3e0);
    *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_2 + 0x3d8);
    *(undefined8 *)(param_1 + 0x3e0) = uVar20;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x3c8);
    pvVar4 = *(void **)(param_2 + 0x3c0);
    *(int *)(param_1 + 0x3c8) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x3cc) == 0) {
      *(undefined4 *)(param_1 + 0x3cc) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 0x3c0),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 0x3c0),pvVar4,(longlong)iVar3 * 2);
      }
    }
    *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_2 + 0x3d0);
    uVar5 = *(undefined4 *)(param_2 + 0x3dc);
    uVar6 = *(undefined4 *)(param_2 + 0x3e0);
    uVar7 = *(undefined4 *)(param_2 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
    *(undefined4 *)(param_1 + 0x3dc) = uVar5;
    *(undefined4 *)(param_1 + 0x3e0) = uVar6;
    *(undefined4 *)(param_1 + 0x3e4) = uVar7;
    iVar3 = *(int *)(param_2 + 0x3f0);
    pvVar4 = *(void **)(param_2 + 1000);
    *(int *)(param_1 + 0x3f0) = iVar3;
    if (iVar3 == 0 && *(int *)(param_1 + 0x3f4) == 0) {
      *(undefined4 *)(param_1 + 0x3f4) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(param_1 + 1000),iVar3);
      if (iVar3 != 0) {
        memcpy(*(void **)(param_1 + 1000),pvVar4,(longlong)iVar3 * 2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x3f8);
  FUN_148c309bc(param_1 + 0x400,param_2 + 0x400);
  return param_1;
}



// FUNCTION 14404da18 FUN_14404da18 body=273 status=ok
// SIG undefined FUN_14404da18(void)

void FUN_14404da18(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14b7a8d10;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2b) = 0;
  return;
}



// FUNCTION 14404db36 FUN_14404db36 body=57 status=ok
// SIG undefined FUN_14404db36(void)

void FUN_14404db36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacb30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacb30 = FUN_140002ddd(FUN_1465e37b5,uVar1,L"OakUIDisplayDataDef_UIFilterCategoryDef");
  }
  return;
}



// FUNCTION 14404db70 FUN_14404db70 body=29 status=ok
// SIG undefined FUN_14404db70(void)

undefined8 FUN_14404db70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404dc60 FUN_14404dc60 body=219 status=ok
// SIG undefined FUN_14404dc60(void)

undefined8 FUN_14404dc60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      if (*(char *)(param_3 + 0x10 + lVar2) == '\0') {
        *(undefined1 *)(param_2 + 0x10 + lVar2) = 0;
        *(undefined8 *)(param_2 + 8 + lVar2) = *(undefined8 *)(param_3 + 8 + lVar2);
      }
      lVar1 = param_2 + 0x28 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_3 + lVar2 + 0x20);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2 + 0x18);
      FUN_148c0cba8();
      FUN_148c3116e(param_2 + lVar2 + 0x40,param_3 + lVar2 + 0x40);
      FUN_1486944c2(param_2 + lVar2 + 0x58,param_3 + lVar2 + 0x58);
      FUN_148c311c2(param_2 + lVar2 + 0x68,param_3 + lVar2 + 0x68);
      FUN_148c31212(param_2 + lVar2 + 0x78,param_3 + lVar2 + 0x78);
      *(undefined1 *)(param_2 + lVar2 + 0x88) = *(undefined1 *)(param_3 + lVar2 + 0x88);
      lVar2 = lVar2 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14404dd64 FUN_14404dd64 body=59 status=ok
// SIG undefined FUN_14404dd64(void)

undefined8 FUN_14404dd64(longlong *param_1)

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



// FUNCTION 14404ddb0 FUN_14404ddb0 body=177 status=ok
// SIG undefined FUN_14404ddb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404ddb0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b7ac6a0;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    if (param_2[0xd] != 0) {
      FUN_1400020a8();
    }
    if (param_2[0xb] != 0) {
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
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14404deb4 FUN_14404deb4 body=182 status=ok
// SIG undefined FUN_14404deb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14404deb4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b7ac6a0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
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



// FUNCTION 14404df6a FUN_14404df6a body=55 status=ok
// SIG undefined FUN_14404df6a(void)

void FUN_14404df6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacb48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacb48 = FUN_140002ddd(FUN_14404cb63,uVar1,L"OakMapViewerFilterDef");
  }
  return;
}



// FUNCTION 14404dfea FUN_14404dfea body=1085 status=ok
// SIG undefined FUN_14404dfea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404dfea(void)

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
  _DAT_14cbac720 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b79ce90,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b79d440,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b79d5d0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbac7b0);
  if (cVar1 == '\0') {
    _DAT_14cbac7b0 = 0;
    uRam000000014cbac7b8 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b79edd0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b79ee10,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b79f310);
  local_50 = "lostloot";
  local_48 = 8;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  _DAT_14cbac870 = 0;
  uRam000000014cbac878 = 0;
  _DAT_14cbac880 = 0;
  DAT_14cbac888 = 0;
  uRam000000014cbac890 = 0;
  FUN_1446ddda2(&DAT_14cbac870,"lostloot",0);
  atexit((_func_5014 *)&LAB_14404c862);
  _DAT_14cbac898 = 0;
  uRam000000014cbac8a0 = 0;
  _DAT_14cbac8a8 = 0;
  DAT_14cbac8b0 = 0;
  uRam000000014cbac8b8 = 0;
  FUN_1446ddda2(&DAT_14cbac898,"oak.lostloot",0);
  atexit((_func_5014 *)&LAB_14404c873);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b79f6f0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b79fa00;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b79fa20);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a0910,2,&PTR_FUN_14b7a08e0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b7a0df0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a0e40,1,&PTR_FUN_14b7a0e10);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a1440,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7a2280);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a2550,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7a2a40);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b7a33a0;
  local_68 = 0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a33c0,2,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a34a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a3ab0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a3b80,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a4a00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7a5720,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b7a73c0;
  local_68 = 6;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7a73e0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404e428 FUN_14404e428 body=57 status=ok
// SIG undefined FUN_14404e428(void)

void FUN_14404e428(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacc40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacc40 = FUN_14171c317(FUN_1465e401e,uVar1,L"EMeleeNotify");
  }
  return;
}



// FUNCTION 14404e461 FUN_14404e461 body=55 status=ok
// SIG undefined FUN_14404e461(void)

void FUN_14404e461(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacc40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacc40 = FUN_14171c317(FUN_1465e401e,uVar1,L"EMeleeNotify");
  }
  return;
}



// FUNCTION 14404e498 FUN_14404e498 body=55 status=ok
// SIG undefined FUN_14404e498(void)

void FUN_14404e498(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacce8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacce8 = FUN_14171c317(FUN_1465e42c0,uVar1,L"EOakMigrationEventActorType");
  }
  return;
}



// FUNCTION 14404e4e8 FUN_14404e4e8 body=55 status=ok
// SIG undefined FUN_14404e4e8(void)

void FUN_14404e4e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacf10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacf10 = FUN_14171c317(FUN_1465e4a38,uVar1,L"EOakMusicCombatType");
  }
  return;
}



// FUNCTION 14404e51f FUN_14404e51f body=55 status=ok
// SIG undefined FUN_14404e51f(void)

void FUN_14404e51f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacf28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacf28 = FUN_14171c317(FUN_1465e4a67,uVar1,L"EOakMusicGameplayState");
  }
  return;
}



// FUNCTION 14404e556 FUN_14404e556 body=55 status=ok
// SIG undefined FUN_14404e556(void)

void FUN_14404e556(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad118 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad118 = FUN_14171c317(FUN_1465e527a,uVar1,L"ENewGameState");
  }
  return;
}



// FUNCTION 14404e5c4 FUN_14404e5c4 body=48 status=ok
// SIG undefined FUN_14404e5c4(void)

longlong FUN_14404e5c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e5f4 FUN_14404e5f4 body=48 status=ok
// SIG undefined FUN_14404e5f4(void)

longlong FUN_14404e5f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e624 FUN_14404e624 body=48 status=ok
// SIG undefined FUN_14404e624(void)

longlong FUN_14404e624(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e654 FUN_14404e654 body=48 status=ok
// SIG undefined FUN_14404e654(void)

longlong FUN_14404e654(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e684 FUN_14404e684 body=48 status=ok
// SIG undefined FUN_14404e684(void)

longlong FUN_14404e684(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e6b4 FUN_14404e6b4 body=48 status=ok
// SIG undefined FUN_14404e6b4(void)

longlong FUN_14404e6b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e6e4 FUN_14404e6e4 body=48 status=ok
// SIG undefined FUN_14404e6e4(void)

longlong FUN_14404e6e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e714 FUN_14404e714 body=48 status=ok
// SIG undefined FUN_14404e714(void)

longlong FUN_14404e714(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14404e76c FUN_14404e76c body=278 status=ok
// SIG undefined FUN_14404e76c(void)

void FUN_14404e76c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2 + 6,0,0x160);
  *param_2 = &PTR_FUN_14b33eb80;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x74) = 2;
  uVar1 = DAT_14c8464e8;
  param_2[0x10] = DAT_14c8464e0;
  param_2[0x11] = uVar1;
  param_2[0x12] = DAT_14c8464f0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  param_2[0x17] = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0xc4) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_2 + 0xcd) = 0;
  *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  *(undefined4 *)(param_2 + 0x25) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *param_2 = &PTR_FUN_14b6ff1c0;
  *(undefined4 *)(param_2 + 0x31) = 0x3f800000;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 14404e8aa FUN_14404e8aa body=57 status=ok
// SIG undefined FUN_14404e8aa(void)

void FUN_14404e8aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacc70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacc70 = FUN_140002ddd(FUN_1465e40e4,uVar1,L"OakMeleeDef");
  }
  return;
}



// FUNCTION 14404e9ac FUN_14404e9ac body=57 status=ok
// SIG undefined FUN_14404e9ac(void)

void FUN_14404e9ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacd18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacd18 = FUN_140002ddd(FUN_1465e4386,uVar1,L"OakMigrationEventDef");
  }
  return;
}



// FUNCTION 14404ea4c FUN_14404ea4c body=57 status=ok
// SIG undefined FUN_14404ea4c(void)

void FUN_14404ea4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacd60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacd60 = FUN_140002ddd(FUN_1465e4472,uVar1,L"OakMigrationEventPointDef");
  }
  return;
}



// FUNCTION 14404eaac FUN_14404eaac body=57 status=ok
// SIG undefined FUN_14404eaac(void)

void FUN_14404eaac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacd90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacd90 = FUN_140002ddd(FUN_1465e4524,uVar1,L"OakMissionDef");
  }
  return;
}



// FUNCTION 14404eb0e FUN_14404eb0e body=57 status=ok
// SIG undefined FUN_14404eb0e(void)

void FUN_14404eb0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacdd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacdd8 = FUN_140002ddd(FUN_1465e4611,uVar1,L"OakMissionGiverRecord");
  }
  return;
}



// FUNCTION 14404ebb2 FUN_14404ebb2 body=54 status=ok
// SIG undefined FUN_14404ebb2(void)

void FUN_14404ebb2(longlong *param_1)

{
  FUN_14404ebe8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14404ebe8 FUN_14404ebe8 body=511 status=ok
// SIG undefined FUN_14404ebe8(void)

void FUN_14404ebe8(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar4 = 0;
    uVar6 = 1;
    iVar5 = 0;
    iVar12 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar9 = *puVar7;
    if (uVar9 == 0) {
      iVar12 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar12 = iVar3 + -1;
      }
      uVar4 = 0;
      uVar6 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar6 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar6 == uVar4) goto LAB_14404ed64;
        iVar5 = iVar5 + 0x20;
        uVar9 = puVar7[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar6 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar6 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar12) {
      iVar12 = iVar3;
    }
  }
  if (iVar12 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      if ((*(longlong *)(*param_1 + (longlong)iVar12 * 0x20) != 0) &&
         (lVar14 = *param_1 + (longlong)iVar12 * 0x20, *(int *)(lVar14 + 8) != -1)) {
        *(undefined4 *)(lVar14 + 8) = 0xffffffff;
        iVar3 = (int)param_1[5];
      }
      uVar9 = uVar9 & ~(uint)uVar6;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar12 = (int)uVar4;
      lVar14 = (longlong)iVar12;
      uVar13 = puVar7[lVar14] & uVar9;
      if (uVar13 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar12) {
          iVar11 = iVar12;
        }
        if (iVar10 <= iVar12) break;
        lVar8 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar13 = puVar7[lVar14 + lVar8 + 1];
          if (uVar13 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar11 - lVar14 == lVar8) goto LAB_14404ed64;
        }
        uVar4 = (ulonglong)(iVar12 + (int)lVar8 + 1);
        uVar9 = 0xffffffff;
      }
      uVar6 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar6 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar3);
  }
LAB_14404ed64:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar9 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar9 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar13 = 0x80;
    if (0x80 < (int)uVar9) {
      uVar13 = uVar9;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar13;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 14404ede8 FUN_14404ede8 body=480 status=ok
// SIG undefined FUN_14404ede8(void)

longlong * FUN_14404ede8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar9 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
    if (iVar1 == 0) goto LAB_14404ee5c;
  }
  else {
    FUN_1446efa72(plVar9,0,iVar1,4);
  }
  plVar7 = param_1 + 7;
  if ((longlong *)*plVar9 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar9;
  }
  plVar9 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[8];
  }
  memcpy(plVar7,plVar9,(longlong)iVar1 << 2);
LAB_14404ee5c:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_14404ebe8(param_1,(ulonglong)uVar2);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
    FUN_1447711aa(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar6 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(param_1 + 2);
  }
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar9 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    plVar7 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    memcpy(plVar7,plVar9,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar4 = *param_1;
    lVar3 = *param_2;
    lVar8 = 0;
    uVar10 = 0;
    do {
      plVar9 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar9 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar9 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) & 1)
          == 0) {
        *(undefined4 *)(lVar4 + lVar8) = *(undefined4 *)(lVar3 + lVar8);
        *(undefined4 *)(lVar4 + 4 + lVar8) = *(undefined4 *)(lVar3 + 4 + lVar8);
      }
      else {
        *(undefined4 *)(lVar4 + 8 + lVar8) = 0xffffffff;
        *(undefined8 *)(lVar4 + lVar8) = 0;
        *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
        *(undefined4 *)(lVar4 + 8 + lVar8) = *(undefined4 *)(lVar3 + 8 + lVar8);
        *(undefined4 *)(lVar4 + 0x10 + lVar8) = *(undefined4 *)(lVar3 + 0x10 + lVar8);
        *(undefined8 *)(lVar4 + 0x18 + lVar8) = *(undefined8 *)(lVar3 + 0x18 + lVar8);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x20;
    } while (uVar2 != uVar10);
  }
  return param_1;
}



// FUNCTION 14404efe2 FUN_14404efe2 body=57 status=ok
// SIG undefined FUN_14404efe2(void)

void FUN_14404efe2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbace38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbace38 = FUN_140002ddd(FUN_1465e4832,uVar1,L"OakMissionObjectiveDef");
  }
  return;
}



// FUNCTION 14404f038 FUN_14404f038 body=159 status=ok
// SIG undefined FUN_14404f038(void)

void FUN_14404f038(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *param_2 = &PTR_FUN_14b366840;
  *(undefined1 *)(param_2 + 0xb) = 1;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x69) = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  param_2[0x16] = &DAT_14a171d50;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x17] = DAT_14cb86da8 + 0x480;
  *param_2 = &PTR_FUN_14b7b8fa0;
  param_2[0x1b] = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0x646c63;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 14404f0e4 FUN_14404f0e4 body=57 status=ok
// SIG undefined FUN_14404f0e4(void)

void FUN_14404f0e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbace68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbace68 = FUN_140002ddd(FUN_1465e4928,uVar1,L"OakMissionSetDef");
  }
  return;
}



// FUNCTION 14404f1b6 FUN_14404f1b6 body=231 status=ok
// SIG undefined FUN_14404f1b6(void)

void FUN_14404f1b6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x1e8);
  *param_2 = 0x44fa00003fa00000;
  param_2[1] = 0x3e80000045bb8000;
  *(undefined4 *)(param_2 + 2) = 0x461c4000;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  param_2[0x24] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  param_2[0x2e] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0xffffffff00000080;
  param_2[0x34] = 0x4120000041a00000;
  param_2[0x35] = 0x4120000041a00000;
  param_2[0x36] = 0x4120000041a00000;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0x40800000;
  return;
}



// FUNCTION 14404f2b8 FUN_14404f2b8 body=377 status=ok
// SIG undefined FUN_14404f2b8(void)

void FUN_14404f2b8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x2d0);
  param_2[1] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0xaaad1010;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[6] = &PTR_FUN_14b1d7d10;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  *(undefined8 *)((longlong)param_2 + 0x71) = 0;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  param_2[0x1b] = 0;
  *param_2 = &PTR_FUN_14b7b9820;
  param_2[0x1d] = 0x44fa00003fa00000;
  param_2[0x1e] = 0x3e80000045bb8000;
  *(undefined4 *)(param_2 + 0x1f) = 0x461c4000;
  *(undefined4 *)(param_2 + 0x2b) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 0x15c) = 0xffffffff00000080;
  param_2[0x2e] = 0;
  param_2[0x34] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0xffffffff00000080;
  param_2[0x38] = 0;
  param_2[0x41] = 0;
  param_2[0x3e] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0xffffffff00000080;
  param_2[0x45] = 0;
  param_2[0x4b] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  *(undefined8 *)((longlong)param_2 + 0x264) = 0xffffffff00000080;
  param_2[0x4f] = 0;
  param_2[0x51] = 0x4120000041a00000;
  param_2[0x52] = 0x4120000041a00000;
  param_2[0x53] = 0x4120000041a00000;
  param_2[0x5a] = 0;
  param_2[0x58] = 0;
  param_2[0x59] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  *(undefined4 *)(param_2 + 0x5b) = 0x40800000;
  return;
}



// FUNCTION 14404f43e FUN_14404f43e body=57 status=ok
// SIG undefined FUN_14404f43e(void)

void FUN_14404f43e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacfa0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacfa0 = FUN_140002ddd(FUN_1465e4cf2,uVar1,L"OakMusicDef");
  }
  return;
}



// FUNCTION 14404f4ba FUN_14404f4ba body=57 status=ok
// SIG undefined FUN_14404f4ba(void)

void FUN_14404f4ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacfe8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacfe8 = FUN_140002ddd(FUN_1465e4e53,uVar1,L"GbxMusicAction_OverrideGameplayState");
  }
  return;
}



// FUNCTION 14404f56a FUN_14404f56a body=57 status=ok
// SIG undefined FUN_14404f56a(void)

void FUN_14404f56a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad048 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad048 = FUN_140002ddd(FUN_1465e43b5,uVar1,L"OakNavFormationDef");
  }
  return;
}



// FUNCTION 14404f5a3 FUN_14404f5a3 body=1682 status=ok
// SIG undefined FUN_14404f5a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14404f5a3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbacbb8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ad0a0,1,&PTR_FUN_14b7ad070);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ad4f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ad870,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ae130,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b7ae260;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7ae280);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7ae470);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7ae8e0,1,&PTR_FUN_14b7ae8b0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7af2b0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7af360);
  FUN_14098d3d2(FUN_14404e498,L"/Script/OakGame",L"EOakMigrationEventActorType",&DAT_14cbacce0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7af880,1,&PTR_FUN_14b7af830);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b0020,2,&PTR_FUN_14b7afff0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b04c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b06b0,1,&PTR_FUN_14b7b0680);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b0760);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b1470);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b1570);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b1620);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b1760);
  _DAT_14cbace78 = 0xffffffff;
  _DAT_14cbace7c = 0;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b1b70,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b24a0,1,0);
  _DAT_14cbaceb0 = 0x47efffffe0000000;
  _DAT_14cbaceb8 = 0x47efffffe0000000;
  _DAT_14cbacec0 = 0x47efffffe0000000;
  _DAT_14cbacec8 = 0x47efffffe0000000;
  _DAT_14cbaced0 = 0x47efffffe0000000;
  _DAT_14cbaced8 = 0x47efffffe0000000;
  _DAT_14cbacee0 = 0x47efffffe0000000;
  _DAT_14cbacee8 = 0x47efffffe0000000;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b3210,1,0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14b7b4220;
  local_68 = 5;
  FUN_14282b410(L"/Script/OakGame",0,0,&PTR_FUN_14b7b4260);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b4b80,1,&PTR_FUN_14b7b4ae0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b5470,2,&PTR_FUN_14b7b5420);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b5540,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cbad0a8);
  if (cVar1 == '\0') {
    _DAT_14cbad0a8 = 0;
    uRam000000014cbad0b0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b5600,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b5e30,1,0);
  local_50 = "Standard";
  local_48 = 8;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbad0e8 = (ulonglong)uVar2;
  local_50 = "PrologueSkip";
  local_48 = 0xc;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbad0f0 = (ulonglong)uVar2;
  local_50 = "UltimateVaultHunterSkip";
  local_48 = 0x17;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbad0f8 = (ulonglong)uVar2;
  local_50 = "SkipToDLC_Cowbell";
  local_48 = 0x11;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbad100 = (ulonglong)uVar2;
  local_50 = "SkipToDLC_Harmonica";
  local_48 = 0x13;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cbad108 = (ulonglong)uVar2;
  ppuStack_60 = &PTR_FUN_14b7b63a0;
  local_68 = 0;
  uStack_58 = 1;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b63c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b6490,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b69b0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b6a80,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/OakGame",&PTR_FUN_14b7b7560,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404fc6b FUN_14404fc6b body=55 status=ok
// SIG undefined FUN_14404fc6b(void)

void FUN_14404fc6b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad3b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad3b8 = FUN_14171c317(FUN_1465e6068,uVar1,L"EOakOrderRewindMode");
  }
  return;
}



// FUNCTION 14404fca2 FUN_14404fca2 body=228 status=ok
// SIG undefined FUN_14404fca2(void)

longlong FUN_14404fca2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbadd90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f2e4c;
    local_38 = &LAB_148c39de3;
    local_40 = &LAB_1457a9eb2;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbadd90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14404fd87 FUN_14404fd87 body=55 status=ok
// SIG undefined FUN_14404fd87(void)

void FUN_14404fd87(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad5f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad5f8 = FUN_14171c317(FUN_1465e6972,uVar1,L"EOakPlayerBankValueResolverType");
  }
  return;
}



// FUNCTION 14404fdbe FUN_14404fdbe body=55 status=ok
// SIG undefined FUN_14404fdbe(void)

void FUN_14404fdbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad658 = FUN_14171c317(FUN_1465e6b08,uVar1,L"ECharacterSelectPhase");
  }
  return;
}



// FUNCTION 14404fe06 FUN_14404fe06 body=47 status=ok
// SIG undefined FUN_14404fe06(void)

longlong FUN_14404fe06(void)

{
  if (DAT_14cbad778 == 0) {
    FUN_14000fc22(&DAT_14cbad778,&PTR_FUN_14b7c5f80);
  }
  return DAT_14cbad778;
}



// FUNCTION 14404fe36 FUN_14404fe36 body=726 status=ok
// SIG undefined FUN_14404fe36(void)

void FUN_14404fe36(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_40);
            goto LAB_14404ffff;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != local_40) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_40,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(local_40,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_40,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_40,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40[0] = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_40);
    }
  }
LAB_14404ffff:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x1108))(param_1,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14405010e FUN_14405010e body=466 status=ok
// SIG undefined FUN_14405010e(void)

void FUN_14405010e(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  plVar3 = DAT_14c844840;
  local_70 = DAT_14c844840;
  if (DAT_14c844840 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
    LOCK();
    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar3 != plVar1) {
    local_70 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  local_68 = *(undefined4 *)(param_2 + 1);
  FUN_1447715ec(&local_60,param_3);
  uVar2 = FUN_14477b072(param_1,DAT_14cbad840);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_70);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1440502e2 FUN_1440502e2 body=1662 status=ok
// SIG undefined FUN_1440502e2(void)

void FUN_1440502e2(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong **_Src;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  local_68 = DAT_14c844840;
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
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963ee0) {
    FUN_144b3d300(&DAT_14c963ee0);
    if (DAT_14c963ee0 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_140fb5c52;
      local_80 = 0;
      local_88 = 0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_68);
            goto LAB_14405050a;
          }
        }
        _Src = (longlong **)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_68) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_68,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_68,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_68,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_68,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(longlong **)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
LAB_14405050a:
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1403a682c;
      local_80 = 0;
      local_88 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_58);
            goto LAB_1440506ca;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_80 = CONCAT44(local_80._4_4_,(int)plVar4[6]);
        local_88 = local_88 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_1440506ca:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x13b8))(param_1,&local_68,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144050962 FUN_144050962 body=735 status=ok
// SIG undefined FUN_144050962(void)

void FUN_144050962(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_144050b34;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_144050b34:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x13b0))(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144050c42 FUN_144050c42 body=735 status=ok
// SIG undefined FUN_144050c42(void)

void FUN_144050c42(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1403a682c;
      local_50 = 0;
      local_58 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_144050e14;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_144050e14:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x13a8))(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144050f22 FUN_144050f22 body=47 status=ok
// SIG undefined FUN_144050f22(void)

longlong FUN_144050f22(void)

{
  if (DAT_14cbad988 == 0) {
    FUN_14000fc22(&DAT_14cbad988,&PTR_FUN_14b7c87c8);
  }
  return DAT_14cbad988;
}



// FUNCTION 144051010 FUN_144051010 body=48 status=ok
// SIG undefined FUN_144051010(void)

longlong FUN_144051010(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_14185f2ee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051040 FUN_144051040 body=48 status=ok
// SIG undefined FUN_144051040(void)

longlong FUN_144051040(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_14185f2ee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051070 FUN_144051070 body=48 status=ok
// SIG undefined FUN_144051070(void)

longlong FUN_144051070(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440510a0 FUN_1440510a0 body=48 status=ok
// SIG undefined FUN_1440510a0(void)

longlong FUN_1440510a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440510d0 FUN_1440510d0 body=48 status=ok
// SIG undefined FUN_1440510d0(void)

longlong FUN_1440510d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051100 FUN_144051100 body=48 status=ok
// SIG undefined FUN_144051100(void)

longlong FUN_144051100(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051130 FUN_144051130 body=48 status=ok
// SIG undefined FUN_144051130(void)

longlong FUN_144051130(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051160 FUN_144051160 body=48 status=ok
// SIG undefined FUN_144051160(void)

longlong FUN_144051160(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051190 FUN_144051190 body=48 status=ok
// SIG undefined FUN_144051190(void)

longlong FUN_144051190(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xbf0;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440511c0 FUN_1440511c0 body=48 status=ok
// SIG undefined FUN_1440511c0(void)

longlong FUN_1440511c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc30;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440511f0 FUN_1440511f0 body=48 status=ok
// SIG undefined FUN_1440511f0(void)

longlong FUN_1440511f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc38;
  FUN_14081002e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051220 FUN_144051220 body=48 status=ok
// SIG undefined FUN_144051220(void)

longlong FUN_144051220(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051250 FUN_144051250 body=48 status=ok
// SIG undefined FUN_144051250(void)

longlong FUN_144051250(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051280 FUN_144051280 body=48 status=ok
// SIG undefined FUN_144051280(void)

longlong FUN_144051280(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440512b0 FUN_1440512b0 body=48 status=ok
// SIG undefined FUN_1440512b0(void)

longlong FUN_1440512b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1403d7a0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440512e0 FUN_1440512e0 body=48 status=ok
// SIG undefined FUN_1440512e0(void)

longlong FUN_1440512e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x620;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051310 FUN_144051310 body=48 status=ok
// SIG undefined FUN_144051310(void)

longlong FUN_144051310(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x7f8;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051340 FUN_144051340 body=48 status=ok
// SIG undefined FUN_144051340(void)

longlong FUN_144051340(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x840;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051370 FUN_144051370 body=48 status=ok
// SIG undefined FUN_144051370(void)

longlong FUN_144051370(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x848;
  FUN_14028f33c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440513a0 FUN_1440513a0 body=48 status=ok
// SIG undefined FUN_1440513a0(void)

longlong FUN_1440513a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440513d0 FUN_1440513d0 body=48 status=ok
// SIG undefined FUN_1440513d0(void)

longlong FUN_1440513d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051400 FUN_144051400 body=48 status=ok
// SIG undefined FUN_144051400(void)

longlong FUN_144051400(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051430 FUN_144051430 body=48 status=ok
// SIG undefined FUN_144051430(void)

longlong FUN_144051430(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051460 FUN_144051460 body=48 status=ok
// SIG undefined FUN_144051460(void)

longlong FUN_144051460(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x448;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051490 FUN_144051490 body=48 status=ok
// SIG undefined FUN_144051490(void)

longlong FUN_144051490(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x450;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440514c0 FUN_1440514c0 body=48 status=ok
// SIG undefined FUN_1440514c0(void)

longlong FUN_1440514c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a58;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1440514f0 FUN_1440514f0 body=48 status=ok
// SIG undefined FUN_1440514f0(void)

longlong FUN_1440514f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a90;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144051520 FUN_144051520 body=48 status=ok
// SIG undefined FUN_144051520(void)

longlong FUN_144051520(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ac8;
  FUN_140639172(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


