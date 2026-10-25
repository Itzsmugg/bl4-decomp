// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14592c1e2 FUN_14592c1e2 body=88 status=ok
// SIG undefined FUN_14592c1e2(void)

void FUN_14592c1e2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14592c23a FUN_14592c23a body=88 status=ok
// SIG undefined FUN_14592c23a(void)

void FUN_14592c23a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140b584e0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14592c292 FUN_14592c292 body=133 status=ok
// SIG undefined FUN_14592c292(void)

undefined8 * FUN_14592c292(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14592c318(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014592c2a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)(**(code **)(lVar1 + 0x38))();
    return puVar2;
  }
  puVar2 = (undefined8 *)FUN_1488048ca();
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *puVar2 = &PTR_FUN_14b021d90;
  puVar2[3] = 0x3f6666663f666666;
  *(undefined1 *)(puVar2 + 4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0x3f00000044fa0000;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0x3dcccccd3dcccccd;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x44) = 0x42c8000041a00000;
  memset(puVar2 + 10,0,0x118);
  return puVar2;
}



// FUNCTION 14592c318 FUN_14592c318 body=193 status=ok
// SIG undefined FUN_14592c318(void)

longlong FUN_14592c318(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14592c3da();
  lVar3 = *param_1;
  if (DAT_14cb75db8 != DAT_14cb75de4) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75de8;
    if (DAT_14cb75df0 != (undefined *)0x0) {
      puVar7 = DAT_14cb75df0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75df8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb75db0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb75da8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14592c3da FUN_14592c3da body=157 status=ok
// SIG undefined FUN_14592c3da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14592c3da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75e00) {
    FUN_144b3d300(&DAT_14cb75e00);
    if (DAT_14cb75e00 == -1) {
      DAT_14cb75dd0 = 0;
      _DAT_14cb75dd8 = 0;
      DAT_14cb75db0 = 0;
      _DAT_14cb75db8 = 0;
      _DAT_14cb75ddc = 0xffffffff00000080;
      DAT_14cb75de4 = 0;
      DAT_14cb75df0 = 0;
      DAT_14cb75df8 = 0;
      atexit(FUN_143cd9a80);
      _Init_thread_footer(&DAT_14cb75e00);
    }
  }
  return &DAT_14cb75db0;
}



// FUNCTION 14592c47e FUN_14592c47e body=228 status=ok
// SIG undefined FUN_14592c47e(void)

longlong FUN_14592c47e(void)

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
  if (DAT_14cac8500 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145898b8e;
    local_38 = &LAB_1478a6105;
    local_40 = &LAB_145aca3a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/Engine",L"SphereReflectionCaptureComponent",&DAT_14cac8500,
                  &DAT_1478a6104);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8500;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592c56a FUN_14592c56a body=228 status=ok
// SIG undefined FUN_14592c56a(void)

longlong FUN_14592c56a(void)

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
  if (DAT_14cadacf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463cac50;
    local_38 = &LAB_147aa5e2c;
    local_40 = &LAB_1463cae7e;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x478;
    FUN_14081cfa3(L"/Script/Engine",L"GameMode",&DAT_14cadacf8,FUN_1463cae5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadacf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592c656 FUN_14592c656 body=228 status=ok
// SIG undefined FUN_14592c656(void)

longlong FUN_14592c656(void)

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
  if (DAT_14cb9eda0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d422c;
    local_38 = &LAB_148b79afb;
    local_40 = &LAB_14590771c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 0x10;
    local_68 = 0x6d0;
    FUN_14081cfa3(L"/Script/GameplayDebugger",L"GameplayDebuggerRenderingComponent",&DAT_14cb9eda0,
                  &DAT_148b79afa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9eda0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592c742 FUN_14592c742 body=228 status=ok
// SIG undefined FUN_14592c742(void)

longlong FUN_14592c742(void)

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
  if (DAT_14cba31a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458ce09c;
    local_38 = &LAB_148bb7673;
    local_40 = FUN_145c26619;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x250;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxSkillNetSpecializationComponent_Exo",&DAT_14cba31a0,
                  &DAT_148bb7672);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba31a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592c82e FUN_14592c82e body=228 status=ok
// SIG undefined FUN_14592c82e(void)

longlong FUN_14592c82e(void)

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
  if (DAT_14cbaccb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14592c564;
    local_38 = &LAB_148c31a95;
    local_40 = &LAB_145cb856e;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x4a8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMenuGameMode",&DAT_14cbaccb0,&DAT_148c31a94);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaccb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592c914 FUN_14592c914 body=25 status=ok
// SIG undefined FUN_14592c914(void)

undefined8 FUN_14592c914(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14592c92e FUN_14592c92e body=530 status=ok
// SIG undefined FUN_14592c92e(void)

void FUN_14592c92e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x119) == '\x01') {
    plVar7 = (longlong *)(param_1 + 0x30);
    local_40 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(plVar7);
    FUN_14592cb42(local_78,&DAT_14cb81b90);
    lVar4 = local_50;
    plVar3 = local_58;
    plVar2 = local_60;
    lVar1 = local_68;
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
    plVar6 = local_70;
LAB_14592c9a0:
    if (plVar6 != plVar3) {
      FUN_140e417fc(plVar6[2]);
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == (longlong *)0x0) break;
        if (*(longlong *)(plVar6[2] + 0x5a8) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_1447210f0();
        }
      } while (lVar5 != *plVar2);
      goto LAB_14592c9a0;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
    UNLOCK();
    local_40 = (**(code **)(*plVar7 + 0x48))(plVar7);
    FUN_14592cb42(local_78,&DAT_14cb81b90);
    lVar4 = local_50;
    plVar3 = local_58;
    plVar2 = local_60;
    lVar1 = local_68;
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
    plVar6 = local_70;
LAB_14592ca2f:
    if (plVar6 != plVar3) {
      FUN_140e415a6(plVar6[2]);
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == (longlong *)0x0) break;
        if (*(longlong *)(plVar6[2] + 0x5a8) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_1447210f0();
        }
      } while (lVar5 != *plVar2);
      goto LAB_14592ca2f;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
    UNLOCK();
    local_40 = (**(code **)(*plVar7 + 0x48))(plVar7);
    FUN_14592cb42(local_78,&DAT_14cb81b90);
    lVar4 = local_50;
    lVar1 = local_68;
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
    plVar6 = local_70;
LAB_14592cabe:
    if (plVar6 != local_58) {
      FUN_140e40696(plVar6[2]);
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == (longlong *)0x0) break;
        if (*(longlong *)(plVar6[2] + 0x5a8) == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_1447210f0();
        }
      } while (lVar5 != *local_60);
      goto LAB_14592cabe;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14592cb42 FUN_14592cb42 body=152 status=ok
// SIG undefined FUN_14592cb42(void)

undefined8 * FUN_14592cb42(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = *param_3;
  local_30 = *param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  local_28 = param_2;
  FUN_14592cbdc(param_1 + 1,&local_30,param_1);
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  local_30 = 0;
  local_28 = param_2;
  FUN_14592cbdc(param_1 + 4,&local_30,param_1);
  LOCK();
  *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + -1;
  UNLOCK();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592cbdc FUN_14592cbdc body=94 status=ok
// SIG undefined FUN_14592cbdc(void)

longlong * FUN_14592cbdc(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  LOCK();
  piVar1 = (int *)(lVar3 + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  param_1[2] = param_3;
  lVar3 = *param_1;
  while( true ) {
    if (lVar3 == 0) {
      return param_1;
    }
    plVar2 = (longlong *)param_1[2];
    if (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x5a8) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1447210f0();
    }
    if (lVar3 == *plVar2) break;
    lVar3 = *(longlong *)*param_1;
    *param_1 = lVar3;
  }
  return param_1;
}



// FUNCTION 14592cc3a FUN_14592cc3a body=48 status=ok
// SIG undefined FUN_14592cc3a(void)

void FUN_14592cc3a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x300,0x10);
  }
  return;
}



// FUNCTION 14592cc6a FUN_14592cc6a body=162 status=ok
// SIG undefined FUN_14592cc6a(void)

void FUN_14592cc6a(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0xffffffff;
  local_48 = 0x20;
  local_50 = param_3;
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    lVar3 = 1;
    do {
      lVar2 = FUN_14051345a(&local_50,lVar3 + 1);
      if (lVar3 != lVar2) {
        uVar1 = *puVar4;
        *puVar4 = param_1[lVar2];
        param_1[lVar2] = uVar1;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (puVar4 != param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592cd0e FUN_14592cd0e body=487 status=ok
// SIG undefined FUN_14592cd0e(void)

longlong FUN_14592cd0e(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  lVar5 = FUN_14011c349();
  fVar1 = *(float *)(lVar5 + 0x680);
  if ((0.0 < fVar1) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x1c8);
    if (lVar5 == 0) {
      pdVar6 = (double *)&DAT_14c8464e0;
      uVar14 = SUB84(DAT_14c8464f0,0);
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar14 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
      pdVar6 = (double *)(lVar5 + 0x260);
    }
    dVar3 = *pdVar6;
    dVar4 = pdVar6[1];
    lVar5 = *(longlong *)(param_1 + 0x2680);
    if (lVar5 != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x1c8);
      if (lVar7 == 0) {
        pdVar6 = (double *)&DAT_14c8464e0;
        dVar11 = DAT_14c8464f0;
      }
      else {
        pdVar6 = (double *)(lVar7 + 0x260);
        dVar11 = *(double *)(lVar7 + 0x270);
      }
      dVar11 = dVar11 - (double)CONCAT44(uVar15,uVar14);
      dVar12 = *pdVar6 - dVar3;
      dVar13 = pdVar6[1] - dVar4;
      if ((float)(dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13) < fVar1 * fVar1) {
        return lVar5;
      }
    }
    lVar7 = FUN_1447210f0(param_1);
    iVar9 = 0;
    if (0 < *(int *)(lVar7 + 0x238)) {
      lVar10 = 0;
      do {
        lVar8 = FUN_14479d2ce(*(longlong *)(lVar7 + 0x230) + lVar10);
        if (((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x3d0), lVar8 != lVar5)) && (lVar8 != 0)
           ) {
          lVar2 = *(longlong *)(lVar8 + 0x1c8);
          if (lVar2 == 0) {
            pdVar6 = (double *)&DAT_14c8464e0;
            dVar11 = DAT_14c8464f0;
          }
          else {
            pdVar6 = (double *)(lVar2 + 0x260);
            dVar11 = *(double *)(lVar2 + 0x270);
          }
          dVar11 = dVar11 - (double)CONCAT44(uVar15,uVar14);
          dVar12 = *pdVar6 - dVar3;
          dVar13 = pdVar6[1] - dVar4;
          if ((float)(dVar11 * dVar11 + dVar12 * dVar12 + dVar13 * dVar13) < fVar1 * fVar1) {
            return lVar8;
          }
        }
        lVar10 = lVar10 + 8;
        iVar9 = iVar9 + 1;
        if (*(int *)(lVar7 + 0x238) <= iVar9) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 14592cef6 FUN_14592cef6 body=40 status=ok
// SIG undefined FUN_14592cef6(void)

undefined8 FUN_14592cef6(undefined8 param_1,int param_2)

{
  FUN_14592cf1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592cf1e FUN_14592cf1e body=96 status=ok
// SIG undefined FUN_14592cf1e(void)

void FUN_14592cf1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b52bea0;
  FUN_1449db362(param_1 + 0x2d);
  if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2a] + 0x10))();
  }
  FUN_144760e21(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 14592cf7e FUN_14592cf7e body=112 status=ok
// SIG undefined FUN_14592cf7e(void)

void FUN_14592cf7e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x210) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x208);
    lVar3 = (longlong)*(int *)(param_1 + 0x210) * 0x70;
    do {
      if (((*(byte *)(lVar2 + 0x1c) & 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
        cVar1 = FUN_1413649be(param_1,lVar2);
        if (cVar1 != '\0') {
          FUN_141364a4a(param_2,lVar2,2,*(undefined4 *)(lVar2 + 0x18));
        }
      }
      lVar2 = lVar2 + 0x70;
      lVar3 = lVar3 + -0x70;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14592cfee FUN_14592cfee body=138 status=ok
// SIG undefined FUN_14592cfee(void)

code * FUN_14592cfee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceCacheFinalIrradianceAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14592d078;
}



// FUNCTION 14592d078 FUN_14592d078 body=138 status=ok
// SIG undefined FUN_14592d078(void)

code * FUN_14592d078(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceCacheFinalRadianceAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14592d102;
}



// FUNCTION 14592d102 FUN_14592d102 body=138 status=ok
// SIG undefined FUN_14592d102(void)

code * FUN_14592d102(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadianceProbeIndirectionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd64e8;
}



// FUNCTION 14592d18c FUN_14592d18c body=108 status=ok
// SIG undefined FUN_14592d18c(void)

void FUN_14592d18c(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x410) == param_2) {
          FUN_14592d1f8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x410 + *param_1 + 0x400);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14592d1f8 FUN_14592d1f8 body=135 status=ok
// SIG undefined FUN_14592d1f8(void)

void FUN_14592d1f8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x410;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x404 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x410 + 0x400);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x400);
  FUN_145a5ded4(*param_1 + lVar2 + 0x10);
  FUN_14592d280(param_1,param_2);
  return;
}



// FUNCTION 14592d280 FUN_14592d280 body=120 status=ok
// SIG undefined FUN_14592d280(void)

void FUN_14592d280(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x410) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x410) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x410 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14592d2f8 FUN_14592d2f8 body=37 status=ok
// SIG undefined FUN_14592d2f8(void)

void FUN_14592d2f8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_14592d31e(param_2);
  return;
}



// FUNCTION 14592d31e FUN_14592d31e body=205 status=ok
// SIG undefined FUN_14592d31e(void)

undefined8 * FUN_14592d31e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14b09fe70;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 4) = 0x453b8000;
  *(undefined1 *)(param_1 + 8) = 3;
  *(char *)(param_1 + 9) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 4;
  *(undefined4 *)(param_1 + 0xb) = 0x447a0000;
  *(undefined1 *)(param_1 + 0xf) = 3;
  *(char *)(param_1 + 0x10) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 0x451c4000;
  *(undefined1 *)(param_1 + 0x16) = 3;
  *(char *)(param_1 + 0x17) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x18] = 0x447a000044fa0000;
  return param_1;
}



// FUNCTION 14592d3ec FUN_14592d3ec body=158 status=ok
// SIG undefined FUN_14592d3ec(void)

bool FUN_14592d3ec(longlong param_1,undefined8 param_2)

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



// FUNCTION 14592d48c FUN_14592d48c body=258 status=ok
// SIG undefined FUN_14592d48c(void)

void FUN_14592d48c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x2640) != 0) &&
     (*(longlong **)(param_1 + 0x2618) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x2618) + 0x5d8))();
    if (lVar1 != 0) {
      lVar2 = FUN_140ebc504();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_14485c47a(param_1 + 0x2670,lVar1);
        *(undefined1 *)(param_1 + 0x26a0) = 0;
        FUN_14592d59e(param_1 + 0x25f8,lVar1);
        if (*(char *)(param_1 + 0x178) == '\x03') {
          local_1c = 0;
          local_30 = DAT_14cbc5608;
          local_28 = 0xffffffff;
          FUN_141094e00(param_1 + 0x4d8,&local_30,0);
        }
        FUN_14592d5de(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592d59e FUN_14592d59e body=62 status=ok
// SIG undefined FUN_14592d59e(void)

void FUN_14592d59e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592d5de FUN_14592d5de body=99 status=ok
// SIG undefined FUN_14592d5de(void)

void FUN_14592d5de(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x2640) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2640) + 0x458) == '\0')) {
    cVar1 = FUN_144729dda(param_1 + 0x2670);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x2670);
      if (*(char *)(lVar2 + 0x178) == '\x03') {
        *(undefined1 *)(lVar2 + 0x2832) = 2;
      }
      *(undefined1 *)(lVar2 + 0x2831) = 2;
      FUN_140c7a916(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14592d642 FUN_14592d642 body=80 status=ok
// SIG undefined FUN_14592d642(void)

void FUN_14592d642(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x2640) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2640) + 0x469) == '\x01')) {
    cVar1 = FUN_14582c99a();
    if (cVar1 != '\0') {
      FUN_14592da3e(param_1,param_1 + 0x2690,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x2640) + 0x460));
      return;
    }
  }
  return;
}



// FUNCTION 14592d840 FUN_14592d840 body=254 status=ok
// SIG undefined FUN_14592d840(void)

undefined8
FUN_14592d840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9636e0;
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
  *local_48 = &PTR_FUN_14b963670;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14592d940(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592d940 FUN_14592d940 body=216 status=ok
// SIG undefined FUN_14592d940(void)

undefined8 * FUN_14592d940(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592da26 FUN_14592da26 body=24 status=ok
// SIG undefined FUN_14592da26(void)

bool FUN_14592da26(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14592da3e FUN_14592da3e body=440 status=ok
// SIG undefined FUN_14592da3e(void)

void FUN_14592da3e(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    if (ABS(param_3) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
    }
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar3 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_a8[2] = lVar4;
    *local_a8 = &PTR_FUN_14b963750;
    local_a8[3] = 0;
    FUN_14485c47a(local_a8 + 3,param_1);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_1411ab890;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    local_b0 = 0xbf800000;
    local_b8 = 0;
    FUN_1406f3fee(uVar1,param_2,&local_98,param_3);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592dc16 FUN_14592dc16 body=373 status=ok
// SIG undefined FUN_14592dc16(void)

void FUN_14592dc16(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [4];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x26a0) == '\0') {
    FUN_14592dd8c(param_1 + 0x2608);
    if (*(char *)(param_1 + 0x178) == '\x03') {
      local_24 = 0;
      local_38 = DAT_14cbc5608;
      local_30 = 0xffffffff;
      FUN_141094e00(param_1 + 0x4d8,&local_38,1);
    }
    cVar2 = FUN_144729dda(param_1 + 0x2670);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x2680);
      *(uint *)(param_1 + 0x2680) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x2684) < iVar1 + 1U) {
        FUN_14592dd94(param_1 + 0x2678,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x2678) + (longlong)iVar1 * 8) =
           *(undefined8 *)(param_1 + 0x2670);
      lVar3 = FUN_14479d2ce(param_1 + 0x2670);
      local_38 = FUN_14619caa0;
      local_30 = 0;
      FUN_1413660f2(lVar3 + 0x2b8,local_28,param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0x2618);
    if (lVar3 != 0) {
      FUN_145960f54(lVar3);
      FUN_1413662ce(lVar3);
      *(undefined8 *)(lVar3 + 0x2c8) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x26a0) = 1;
  if ((*(longlong *)(param_1 + 0x2640) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2640) + 0x468) == '\x01')) {
    cVar2 = FUN_14582c99a(param_1);
    if (cVar2 != '\0') {
      FUN_14592da3e(param_1,param_1 + 0x2688,
                    *(undefined4 *)(*(longlong *)(param_1 + 0x2640) + 0x45c));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592dd8c FUN_14592dd8c body=7 status=ok
// SIG undefined FUN_14592dd8c(void)

void FUN_14592dd8c(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 14592dd94 FUN_14592dd94 body=132 status=ok
// SIG undefined FUN_14592dd94(void)

void FUN_14592dd94(longlong param_1,int param_2)

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



// FUNCTION 14592de18 FUN_14592de18 body=40 status=ok
// SIG undefined FUN_14592de18(void)

undefined8 FUN_14592de18(undefined8 param_1,int param_2)

{
  FUN_1413662e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592de46 FUN_14592de46 body=101 status=ok
// SIG undefined FUN_14592de46(void)

bool FUN_14592de46(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x1f8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x11e8) + 0x490))();
    FUN_1400bc96c(*(longlong *)(param_1 + 0x11e8) + 0x11f0,&DAT_14cb712e8);
    FUN_1447cd2ec(param_1 + 0x31c0,0);
  }
  return lVar1 != 0;
}



// FUNCTION 14592deac FUN_14592deac body=38 status=ok
// SIG undefined FUN_14592deac(void)

undefined8 FUN_14592deac(undefined8 param_1,int param_2)

{
  FUN_14592df1c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592ded2 FUN_14592ded2 body=74 status=ok
// SIG undefined FUN_14592ded2(void)

void FUN_14592ded2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14592df1c FUN_14592df1c body=79 status=ok
// SIG undefined FUN_14592df1c(void)

void FUN_14592df1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b434000;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b433f68;
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14592df6c FUN_14592df6c body=154 status=ok
// SIG undefined FUN_14592df6c(void)

bool FUN_14592df6c(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
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



// FUNCTION 14592e008 FUN_14592e008 body=755 status=ok
// SIG undefined FUN_14592e008(void)

void FUN_14592e008(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  byte *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar8 = 0;
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  if (*(int *)(param_2 + 0x30) == 0) {
    local_78 = 0;
    FUN_1401412e0(param_2 + 0x38,&local_58,1,0);
    FUN_1446dcc2e(&local_48,&local_58);
    plVar7 = (longlong *)CONCAT44(uStack_4c,local_50);
  }
  else {
    local_70 = 0;
    local_60 = 0;
    uVar5 = FUN_144a8232a(&DAT_14cb8dd60);
    FUN_14131b4b0(&local_58,uVar5,&local_60,&local_70);
    if ((local_58 == (byte *)0x0) || ((*local_58 & 0x68) != 0 || (*local_58 & 3) == 0)) {
      FUN_14009b010(&local_48,3,0);
    }
    else {
      local_78 = 0;
      FUN_1401412e0(&local_58,&local_70,1,0);
      FUN_1446dcc2e(&local_48,&local_70);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_68 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)local_68 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
          }
        }
      }
    }
    plVar7 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  plVar7 = plStack_40;
  uVar5 = local_48;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  local_58 = (byte *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  pbVar3 = local_58;
  local_50 = 4;
  *(undefined ***)local_58 = &PTR_LAB_14b4345a0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_58 + 0x10) = lVar6;
  *(undefined ***)local_58 = &PTR_FUN_14b434530;
  local_58[0x18] = 0;
  local_58[0x19] = 0;
  local_58[0x1a] = 0;
  local_58[0x1b] = 0;
  local_58[0x1c] = 0;
  local_58[0x1d] = 0;
  local_58[0x1e] = 0;
  local_58[0x1f] = 0;
  FUN_14485c47a(local_58 + 0x18,param_1);
  *(longlong *)(pbVar3 + 0x20) = param_1;
  *(undefined8 *)(pbVar3 + 0x28) = uVar5;
  *(longlong **)(pbVar3 + 0x30) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_14130c794(uVar8,param_1,&local_58,0);
    FUN_1449db362(&local_58);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_14130c794(uVar8,param_1,&local_58,0);
    FUN_1449db362(&local_58);
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
  plVar7 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592e30a FUN_14592e30a body=77 status=ok
// SIG undefined FUN_14592e30a(void)

undefined8 * FUN_14592e30a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4665c8;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592e366 FUN_14592e366 body=77 status=ok
// SIG undefined FUN_14592e366(void)

undefined8 * FUN_14592e366(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b938100;
  if ((param_1[0x1e] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1e] + 0x50));
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592e3b4 FUN_14592e3b4 body=40 status=ok
// SIG undefined FUN_14592e3b4(void)

undefined8 FUN_14592e3b4(undefined8 param_1,int param_2)

{
  FUN_14592e3dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592e3dc FUN_14592e3dc body=87 status=ok
// SIG undefined FUN_14592e3dc(void)

void FUN_14592e3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab21db0;
  FUN_14592e433(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14592e433 FUN_14592e433 body=40 status=ok
// SIG undefined FUN_14592e433(void)

void FUN_14592e433(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147dcba4c(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 14592e45c FUN_14592e45c body=85 status=ok
// SIG undefined FUN_14592e45c(void)

void FUN_14592e45c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (0 < (int)*(uint *)(param_1 + 0x298)) {
    plVar2 = (longlong *)(param_1 + 0x290);
    plVar3 = (longlong *)(*plVar2 + 0x118);
    uVar1 = 0;
    do {
      if (*plVar3 == param_2) {
        FUN_14592e564(plVar2,uVar1 & 0xffffffff);
        FUN_14592e4b2(plVar2);
        return;
      }
      uVar1 = uVar1 + 1;
      plVar3 = plVar3 + 0x2a;
    } while (*(uint *)(param_1 + 0x298) != uVar1);
  }
  return;
}



// FUNCTION 14592e4b2 FUN_14592e4b2 body=63 status=ok
// SIG undefined FUN_14592e4b2(void)

void FUN_14592e4b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14592e4f2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x150,8);
  }
  return;
}



// FUNCTION 14592e4f2 FUN_14592e4f2 body=113 status=ok
// SIG undefined FUN_14592e4f2(void)

ulonglong FUN_14592e4f2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x150) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x150,8);
      uVar1 = uVar1 / 0x150;
    }
  }
  return uVar1;
}



// FUNCTION 14592e564 FUN_14592e564 body=114 status=ok
// SIG undefined FUN_14592e564(void)

void FUN_14592e564(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x150 + lVar1);
  FUN_14592e5d6(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x150),(longlong)iVar3 * 0x150);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14592e5d6 FUN_14592e5d6 body=111 status=ok
// SIG undefined FUN_14592e5d6(void)

void FUN_14592e5d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3d840;
  FUN_14127b1cd(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
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
  FUN_14124efea(param_1);
  return;
}



// FUNCTION 14592e646 FUN_14592e646 body=91 status=ok
// SIG undefined FUN_14592e646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14592e646(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_20);
  FUN_14592e6b0(&local_18,local_20);
  _DAT_14cb46390 = local_18;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592e6b0 FUN_14592e6b0 body=29 status=ok
// SIG undefined FUN_14592e6b0(void)

undefined8 * FUN_14592e6b0(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_14592e6ce();
  return param_1;
}



// FUNCTION 14592e6ce FUN_14592e6ce body=79 status=ok
// SIG undefined FUN_14592e6ce(void)

void FUN_14592e6ce(ulonglong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14592e71e();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  bVar1 = FUN_14592e804(lVar3,param_2);
  *param_1 = *param_1 | 1L << (bVar1 & 0x3f);
  return;
}



// FUNCTION 14592e71e FUN_14592e71e body=228 status=ok
// SIG undefined FUN_14592e71e(void)

longlong FUN_14592e71e(void)

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
  if (DAT_14cab6e90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_1476cba91;
    local_40 = &LAB_145ee9cb0;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 8;
    local_68 = 0x6e8;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetStateSettings",&DAT_14cab6e90,&DAT_1476cba90);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6e90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592e804 FUN_14592e804 body=165 status=ok
// SIG undefined FUN_14592e804(void)

undefined8 FUN_14592e804(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2c0) != *(int *)(param_1 + 0x2e4)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x2e8;
    if (*(longlong *)(param_1 + 0x328) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x328);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x330) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = param_1 + 0x38;
      if (*(longlong *)(param_1 + 0x2b8) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x2b8);
      }
      do {
        plVar3 = (longlong *)(lVar2 + (longlong)iVar4 * 0x14);
        if (*plVar3 == param_2) break;
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        plVar3 = (longlong *)0x0;
      } while (iVar4 != -1);
      goto LAB_14592e893;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_14592e893:
  return CONCAT71((int7)((ulonglong)plVar3 >> 8),(char)plVar3[1]);
}



// FUNCTION 14592e8aa FUN_14592e8aa body=31 status=ok
// SIG undefined FUN_14592e8aa(void)

void FUN_14592e8aa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2c8,0x10);
  FUN_14592e8ca(uVar1);
  return;
}



// FUNCTION 14592e8ca FUN_14592e8ca body=94 status=ok
// SIG undefined FUN_14592e8ca(void)

undefined8 * FUN_14592e8ca(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140e8cffc();
  *param_1 = &PTR_FUN_14b9c1780;
  FUN_141366fce(param_1 + 0x53);
  *(undefined4 *)(param_1 + 0x56) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x57] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x58) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 14592e936 FUN_14592e936 body=40 status=ok
// SIG undefined FUN_14592e936(void)

undefined8 FUN_14592e936(undefined8 param_1,int param_2)

{
  FUN_14592e95e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592e95e FUN_14592e95e body=159 status=ok
// SIG undefined FUN_14592e95e(void)

void FUN_14592e95e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2413e0;
  FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14592e9fe FUN_14592e9fe body=103 status=ok
// SIG undefined FUN_14592e9fe(void)

ulonglong FUN_14592e9fe(longlong param_1)

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
LAB_14592ea48:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14592ea48;
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



// FUNCTION 14592ea89 FUN_14592ea89 body=53 status=ok
// SIG undefined FUN_14592ea89(void)

void FUN_14592ea89(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14592eabe(puVar1);
  *puVar1 = &PTR_FUN_14b611530;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 14592eabe FUN_14592eabe body=98 status=ok
// SIG undefined FUN_14592eabe(void)

undefined8 * FUN_14592eabe(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14592eb20(param_1,uVar1);
  *param_1 = &PTR_FUN_14b136b60;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14592eb20 FUN_14592eb20 body=47 status=ok
// SIG undefined FUN_14592eb20(void)

undefined8 * FUN_14592eb20(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b128cd0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14592eb50 FUN_14592eb50 body=40 status=ok
// SIG undefined FUN_14592eb50(void)

undefined8 FUN_14592eb50(undefined8 param_1,int param_2)

{
  FUN_14592eb78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14592eb78 FUN_14592eb78 body=65 status=ok
// SIG undefined FUN_14592eb78(void)

void FUN_14592eb78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc43e00;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14592ebba(param_1);
  return;
}



// FUNCTION 14592ebba FUN_14592ebba body=65 status=ok
// SIG undefined FUN_14592ebba(void)

void FUN_14592ebba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc43610;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14592ebfc(param_1);
  return;
}



// FUNCTION 14592ebfc FUN_14592ebfc body=133 status=ok
// SIG undefined FUN_14592ebfc(void)

void FUN_14592ebfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc42db0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14592ec82(param_1);
  return;
}



// FUNCTION 14592ec82 FUN_14592ec82 body=93 status=ok
// SIG undefined FUN_14592ec82(void)

void FUN_14592ec82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc41be0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 14592ece0 FUN_14592ece0 body=103 status=ok
// SIG undefined FUN_14592ece0(void)

ulonglong FUN_14592ece0(longlong param_1)

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
LAB_14592ed2a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14592ed2a;
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



// FUNCTION 14592ed47 FUN_14592ed47 body=41 status=ok
// SIG undefined FUN_14592ed47(void)

void FUN_14592ed47(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14592ed70(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 14592ed70 FUN_14592ed70 body=101 status=ok
// SIG undefined FUN_14592ed70(void)

void FUN_14592ed70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014592edd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14592edd6 FUN_14592edd6 body=9 status=ok
// SIG undefined FUN_14592edd6(void)

void FUN_14592edd6(longlong param_1)

{
  FUN_14592ede0(param_1 + 0x10);
  return;
}



// FUNCTION 14592ede0 FUN_14592ede0 body=389 status=ok
// SIG undefined FUN_14592ede0(void)

void FUN_14592ede0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  
  FUN_14592ef66();
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
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
  cVar4 = FUN_144729dda(param_1 + 0x48);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 0x48);
    FUN_1400bc8c2(lVar5 + 0x80,&DAT_14cb784f0);
    FUN_1402798cc(lVar5);
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x120);
  plVar3 = *(longlong **)(param_1 + 0x118);
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
  FUN_140f68e5d(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014592ef61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14592ef66 FUN_14592ef66 body=106 status=ok
// SIG undefined FUN_14592ef66(void)

void FUN_14592ef66(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = param_1 + 0xf8;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      plVar3 = (longlong *)FUN_14479d2ce(lVar1);
      (**(code **)(*plVar3 + 0xa68))(plVar3);
    }
    plVar3 = (longlong *)FUN_14479d2ce(lVar1);
    (**(code **)(*plVar3 + 0xa48))(plVar3);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_14592efd0(param_1,0);
  return;
}



// FUNCTION 14592efd0 FUN_14592efd0 body=259 status=ok
// SIG undefined FUN_14592efd0(void)

void FUN_14592efd0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    local_48 = 0;
    uStack_44 = 0x3f800000;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    local_38 = &DAT_100000001;
    local_30 = 0x10101;
  }
  else {
    local_48 = *(undefined4 *)(lVar1 + 0x5c);
    uStack_44 = *(undefined4 *)(lVar1 + 0x60);
    uStack_40 = *(undefined4 *)(lVar1 + 100);
    uStack_3c = *(undefined4 *)(lVar1 + 0x68);
    local_38 = *(undefined1 **)(lVar1 + 0x6c);
    local_30 = *(undefined4 *)(lVar1 + 0x74);
  }
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x170) != 0) {
      uVar2 = FUN_14479d2ce(param_1 + 0x40);
      FUN_14592f0d4(uVar2,param_1 + 0x170);
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x170) == 0) {
    uVar2 = FUN_14479d2ce(param_1 + 0x50);
    uVar3 = FUN_14479d2ce(param_1 + 0x40);
    FUN_14592f5e0(&local_50,uVar3,uVar2,&local_48);
    *(undefined8 *)(param_1 + 0x170) = local_50;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14592f0d4 FUN_14592f0d4 body=197 status=ok
// SIG undefined FUN_14592f0d4(void)

void FUN_14592f0d4(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1447210f0(param_1);
  }
  FUN_14027ab42(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_14592f19a(local_30,param_1,param_2);
      }
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14592f19a FUN_14592f19a body=263 status=ok
// SIG undefined FUN_14592f19a(void)

void FUN_14592f19a(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x168);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x170) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x128);
      iVar7 = iVar6;
      do {
        if (*(ulonglong *)(lVar5 + (longlong)iVar7 * 0x20) == param_2) goto LAB_14592f21f;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14592f25d;
  while (iVar6 = *(int *)(lVar8 + 0x18), iVar6 != -1) {
LAB_14592f21f:
    lVar8 = lVar5 + (longlong)iVar6 * 0x20;
    if (*(ulonglong *)(lVar5 + (longlong)iVar6 * 0x20) == param_2) goto LAB_14592f230;
  }
  lVar8 = 0;
LAB_14592f230:
  lVar5 = *(longlong *)(lVar8 + 8);
  plVar3 = *(longlong **)(lVar8 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    FUN_14592f2a2(lVar5 + 0x48,param_3);
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
LAB_14592f25d:
  FUN_1410974b4(param_1);
  return;
}



// FUNCTION 14592f2a2 FUN_14592f2a2 body=103 status=ok
// SIG undefined FUN_14592f2a2(void)

void FUN_14592f2a2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_14592f30a();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14592f30a FUN_14592f30a body=89 status=ok
// SIG undefined FUN_14592f30a(void)

void FUN_14592f30a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14592f364();
  return;
}



// FUNCTION 14592f364 FUN_14592f364 body=78 status=ok
// SIG undefined FUN_14592f364(void)

void FUN_14592f364(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14592f3bc(param_1,param_2);
  return;
}



// FUNCTION 14592f3bc FUN_14592f3bc body=112 status=ok
// SIG undefined FUN_14592f3bc(void)

void FUN_14592f3bc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14592f42c FUN_14592f42c body=177 status=ok
// SIG undefined FUN_14592f42c(void)

void FUN_14592f42c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14592f484;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      uVar7 = FUN_14479d2ce(param_1 + 0x18);
      uVar8 = FUN_14479d2ce(param_1 + 0x10);
      FUN_14592f4de(lVar4,uVar8,uVar7);
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
LAB_14592f484:
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014592f4d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14592f4de FUN_14592f4de body=257 status=ok
// SIG undefined FUN_14592f4de(void)

void FUN_14592f4de(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x1d0;
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1d8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1e0) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x198);
      iVar7 = iVar6;
      do {
        if (*(ulonglong *)(lVar5 + (longlong)iVar7 * 0x20) == param_2) goto LAB_14592f572;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14592f5b8;
  while (iVar6 = *(int *)(lVar8 + 0x18), iVar6 != -1) {
LAB_14592f572:
    lVar8 = lVar5 + (longlong)iVar6 * 0x20;
    if (*(ulonglong *)(lVar5 + (longlong)iVar6 * 0x20) == param_2) goto LAB_14592f58f;
  }
  lVar8 = 0;
LAB_14592f58f:
  lVar5 = *(longlong *)(lVar8 + 8);
  plVar3 = *(longlong **)(lVar8 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    FUN_14592fb20(lVar5,param_3);
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
LAB_14592f5b8:
  FUN_14592f6f0(param_1);
  return;
}



// FUNCTION 14592f5e0 FUN_14592f5e0 body=271 status=ok
// SIG undefined FUN_14592f5e0(void)

undefined8 *
FUN_14592f5e0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1447210f0(param_2);
  }
  FUN_14027ab42(&local_40,uVar5);
  if (local_38 != (longlong *)0x0) {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_38;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_40 != 0) {
        local_48 = param_4;
        FUN_14592fe84(local_40,param_1,param_2,param_3);
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
        goto LAB_14592f678;
      }
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
  }
  *param_1 = 0;
LAB_14592f678:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14592f6f0 FUN_14592f6f0 body=576 status=ok
// SIG undefined FUN_14592f6f0(void)

void FUN_14592f6f0(longlong param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  ulonglong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x198);
  local_78 = (ulonglong *)0x0;
  uStack_70 = 0;
  lVar7 = param_1 + 0x1a8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar7;
  if (*(int *)(param_1 + 0x1c0) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x1c0);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (undefined4)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar7)) {
    do {
      lVar3 = *local_a0;
      lVar11 = (longlong)iStack_84;
      lVar9 = *(longlong *)(lVar3 + 8 + lVar11 * 0x20);
      if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x20) != 0)) {
        lVar12 = *(longlong *)(lVar9 + 0x18);
        lVar9 = (longlong)*(int *)(lVar9 + 0x20) * 0xc;
        do {
          cVar5 = FUN_144729dda(lVar12);
          if (cVar5 != '\0') goto LAB_14592f7e1;
          lVar12 = lVar12 + 0xc;
          lVar9 = lVar9 + -0xc;
        } while (lVar9 != 0);
      }
      FUN_1447d0588(&local_78,lVar3 + lVar11 * 0x20);
LAB_14592f7e1:
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar7 || iStack_84 != iVar10));
    if ((longlong)(int)uStack_70 != 0) {
      puVar2 = local_78 + (int)uStack_70;
      puVar8 = local_78;
      do {
        if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
          uVar4 = *puVar8;
          uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          lVar7 = *(longlong *)(param_1 + 0x1d8);
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            lVar7 = param_1 + 0x1d0;
          }
          iVar10 = *(int *)(lVar7 + (ulonglong)
                                    (*(int *)(param_1 + 0x1e0) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
          if (iVar10 != -1) {
            do {
              if (*(ulonglong *)(*plVar1 + (longlong)iVar10 * 0x20) == uVar4) {
                FUN_14592f932(plVar1);
                break;
              }
              iVar10 = *(int *)((longlong)iVar10 * 0x20 + *plVar1 + 0x18);
            } while (iVar10 != -1);
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar2);
    }
    if (local_78 != (ulonglong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14592f932 FUN_14592f932 body=132 status=ok
// SIG undefined FUN_14592f932(void)

void FUN_14592f932(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14592f9b6(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14592f9b6 FUN_14592f9b6 body=89 status=ok
// SIG undefined FUN_14592f9b6(void)

void FUN_14592f9b6(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14592fa10();
  return;
}



// FUNCTION 14592fa10 FUN_14592fa10 body=78 status=ok
// SIG undefined FUN_14592fa10(void)

void FUN_14592fa10(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_14592fab0(param_1,param_2);
  return;
}



// FUNCTION 14592fa5e FUN_14592fa5e body=9 status=ok
// SIG undefined FUN_14592fa5e(void)

void FUN_14592fa5e(longlong param_1)

{
  FUN_14592fa68(param_1 + 0x10);
  return;
}



// FUNCTION 14592fa68 FUN_14592fa68 body=71 status=ok
// SIG undefined FUN_14592fa68(void)

void FUN_14592fa68(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014592faab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14592fab0 FUN_14592fab0 body=112 status=ok
// SIG undefined FUN_14592fab0(void)

void FUN_14592fab0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14592fb20 FUN_14592fb20 body=692 status=ok
// SIG undefined FUN_14592fb20(void)

void FUN_14592fb20(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (longlong *)(param_1 + 0x18);
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x18);
    lVar8 = lVar10 + (longlong)*(int *)(param_1 + 0x20) * 0xc;
    do {
      cVar1 = FUN_144729dda(lVar10);
      if (((cVar1 == '\0') || (lVar3 = FUN_14479d2ce(lVar10), lVar3 == param_2)) &&
         ((longlong)*(int *)(param_1 + 0x30) != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x28);
        lVar7 = (longlong)*(int *)(param_1 + 0x30) * 0xc;
        do {
          lVar4 = FUN_141367111(lVar3);
          if (lVar4 != 0) {
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0x3f800000;
            FUN_140b3c54c(lVar4,*(undefined4 *)(lVar10 + 8),&local_58);
            FUN_14136725e(lVar4,*(undefined4 *)(lVar10 + 8),0);
          }
          lVar3 = lVar3 + 0xc;
          lVar7 = lVar7 + -0xc;
        } while (lVar7 != 0);
      }
      lVar10 = lVar10 + 0xc;
    } while (lVar10 != lVar8);
    iVar2 = *(int *)(param_1 + 0x20);
    if (0 < iVar2) {
      lVar8 = 0;
      bVar6 = false;
      do {
        while( true ) {
          lVar10 = *local_60 + lVar8 * 0xc;
          cVar1 = FUN_144729dda(lVar10);
          if ((cVar1 != '\0') && (lVar10 = FUN_14479d2ce(lVar10), lVar10 != param_2)) break;
          iVar2 = *(int *)(param_1 + 0x20);
          iVar5 = iVar2 + ~(uint)lVar8;
          if (iVar5 != 0) {
            iVar9 = 1;
            if (iVar5 < 1) {
              iVar9 = iVar5;
            }
            memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar8 * 0xc),
                    (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar2 - iVar9) * 0xc),
                    (longlong)iVar9 * 0xc);
            iVar2 = *(int *)(param_1 + 0x20);
          }
          *(int *)(param_1 + 0x20) = iVar2 + -1;
          bVar6 = true;
          if (iVar2 + -1 <= lVar8) goto LAB_14592fc48;
        }
        lVar8 = lVar8 + 1;
        iVar2 = *(int *)(param_1 + 0x20);
      } while (lVar8 < iVar2);
      if (bVar6) {
LAB_14592fc48:
        FUN_14592fdd6(local_60);
        iVar2 = *(int *)(param_1 + 0x20);
      }
    }
    if (iVar2 != 0) {
      lVar8 = *local_60;
      lVar10 = (longlong)iVar2 * 0xc;
      do {
        cVar1 = FUN_144729dda(lVar8);
        if (cVar1 != '\0') goto LAB_14592fcd2;
        lVar8 = lVar8 + 0xc;
        lVar10 = lVar10 + -0xc;
      } while (lVar10 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    FUN_14882c528(local_60);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar10 = (longlong)*(int *)(param_1 + 0x30) * 0xc;
    do {
      lVar3 = FUN_141367111(lVar8);
      if (lVar3 != 0) {
        FUN_140b3c4ca(lVar3,0);
        FUN_1459315f4(lVar3);
        FUN_141367278(lVar3);
        if (*(char *)(lVar8 + 8) == '\x01') {
          lVar7 = FUN_144a7a726();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            *(byte *)(lVar3 + 0x66c) = *(byte *)(lVar3 + 0x66c) & 0xfd;
          }
        }
      }
      lVar8 = lVar8 + 0xc;
      lVar10 = lVar10 + -0xc;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_14882c558(param_1 + 0x28);
  }
LAB_14592fcd2:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14592fdd6 FUN_14592fdd6 body=62 status=ok
// SIG undefined FUN_14592fdd6(void)

void FUN_14592fdd6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14592fe14(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 14592fe14 FUN_14592fe14 body=111 status=ok
// SIG undefined FUN_14592fe14(void)

ulonglong FUN_14592fe14(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xc) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 14592fe84 FUN_14592fe84 body=820 status=ok
// SIG undefined FUN_14592fe84(void)

undefined8 *
FUN_14592fe84(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  ulonglong *local_50;
  longlong **local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)(param_1 + 0x128);
  local_58 = param_3;
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x168);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x170) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      lVar4 = *plVar9;
      iVar8 = iVar6;
      do {
        if (*(ulonglong *)(lVar4 + (longlong)iVar8 * 0x20) == param_3) goto LAB_14592ff30;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar4 + 0x18);
      } while (iVar8 != -1);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 == (longlong *)0x0) {
LAB_14592ffdb:
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_14592ffdb;
      LOCK();
      iVar8 = (int)plVar2[1];
      bVar10 = iVar6 == iVar8;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar8 = iVar6;
      }
      iVar6 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_68 = *(undefined8 *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    plStack_60 = plVar2;
    if ((int)*plVar5 == 0) {
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
  plVar5 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3f8cb0;
  plVar2 = plVar5 + 2;
  FUN_14622d6d8(plVar2,local_58,&local_68);
  local_88 = plVar2;
  local_80 = plVar5;
  FUN_14622d638(&local_88,plVar2);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_50 = &local_58;
  local_48 = &local_78;
  local_78 = plVar2;
  local_70 = plVar5;
  FUN_14622d77a(plVar9,&local_3c);
  plVar2 = local_70;
  lVar4 = *(longlong *)(*plVar9 + 8 + (longlong)local_3c * 0x20);
  plVar9 = *(longlong **)(*plVar9 + 0x10 + (longlong)local_3c * 0x20);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_14592ff5b:
  if (lVar4 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1459301ba(lVar4,param_2,param_4,param_5);
  }
  FUN_1410974b4(param_1);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
  while (iVar6 = *(int *)(lVar7 + 0x18), iVar6 != -1) {
LAB_14592ff30:
    lVar7 = lVar4 + (longlong)iVar6 * 0x20;
    if (*(ulonglong *)(lVar4 + (longlong)iVar6 * 0x20) == param_3) goto LAB_14592ff45;
  }
  lVar7 = 0;
LAB_14592ff45:
  lVar4 = *(longlong *)(lVar7 + 8);
  plVar9 = *(longlong **)(lVar7 + 0x10);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  goto LAB_14592ff5b;
}



// FUNCTION 1459301ba FUN_1459301ba body=545 status=ok
// SIG undefined FUN_1459301ba(void)

longlong * FUN_1459301ba(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong **pplVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  longlong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined2 *)(param_1 + 0x21) = 0;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0x1010100000001;
    *param_2 = 0;
  }
  else {
    uVar3 = *param_4;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    uVar6 = param_4[3];
    uVar7 = param_4[4];
    uVar8 = param_4[5];
    uVar9 = param_4[6];
    *(undefined4 *)(param_1 + 0x1c) = param_4[3];
    *(undefined4 *)(param_1 + 0x20) = uVar7;
    *(undefined4 *)(param_1 + 0x24) = uVar8;
    *(undefined4 *)(param_1 + 0x28) = uVar9;
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c75f6d8 + 1;
    lVar12 = DAT_14c75f6d8 + 1;
    if (lVar15 == 0) {
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c75f6d8 + 2;
      lVar12 = DAT_14c75f6d8 + 2;
    }
    DAT_14c75f6d8 = lVar12;
    *param_2 = lVar15;
    local_60 = 0;
    local_58 = *(longlong **)(param_1 + 0x40);
    if (local_58 != (longlong *)0x0) {
      iVar13 = (int)local_58[1];
      do {
        if (iVar13 == 0) {
          local_58 = (longlong *)0x0;
          goto LAB_145930259;
        }
        LOCK();
        iVar11 = (int)local_58[1];
        bVar16 = iVar13 == iVar11;
        if (bVar16) {
          *(int *)(local_58 + 1) = iVar13 + 1;
          iVar11 = iVar13;
        }
        iVar13 = iVar11;
        UNLOCK();
      } while (!bVar16);
      if (local_58 != (longlong *)0x0) {
        local_60 = *(undefined8 *)(param_1 + 0x38);
      }
    }
LAB_145930259:
    local_68 = FUN_14479d2ce(param_1 + 0x2c);
    plVar14 = (longlong *)FUN_14593047b(&local_68,&local_40,param_4,&local_60);
    plVar1 = plVar14 + 2;
    local_38 = plVar1;
    local_30 = (longlong **)plVar14;
    FUN_1459303dc(&local_38,plVar1);
    pplVar10 = local_30;
    local_50 = plVar1;
    local_48 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      if (local_30 != (longlong **)0x0) {
        LOCK();
        plVar1 = (longlong *)(local_30 + 1);
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (*(code *)**local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)pplVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)((longlong)*pplVar10 + 0x10))(pplVar10);
          }
        }
      }
    }
    plVar1 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_58 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    local_30 = &local_50;
    local_38 = param_2;
    FUN_145930626(param_1 + 0x48,&local_60);
    plVar1 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_48 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_48)(local_48);
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
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1459303dc FUN_1459303dc body=159 status=ok
// SIG undefined FUN_1459303dc(void)

void FUN_1459303dc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_145930419;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145930419;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145930419:
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
                    /* WARNING: Could not recover jumptable at 0x000145930477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14593047b FUN_14593047b body=174 status=ok
// SIG undefined FUN_14593047b(void)

undefined8 *
FUN_14593047b(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b3f8cd0;
  local_40 = *param_4;
  local_38 = param_4[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = &local_40;
  FUN_14593052a(puVar1 + 2,*param_1,*param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593052a FUN_14593052a body=252 status=ok
// SIG undefined FUN_14593052a(void)

undefined8 *
FUN_14593052a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14485c47a(param_1 + 2,param_3);
  param_1[3] = 0;
  FUN_14485c47a(param_1 + 3,param_2);
  param_1[4] = *param_5;
  lVar3 = param_5[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_1[5];
    if (plVar4 != (longlong *)0x0) {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_1459305e2;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      lVar3 = param_1[4];
      if (lVar3 != 0) {
        uVar7 = FUN_14479d2ce(param_1 + 3);
        uVar8 = FUN_14479d2ce(param_1 + 2);
        FUN_14593090e(lVar3,uVar8,param_4,uVar7);
      }
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
LAB_1459305e2:
  plVar4 = (longlong *)param_5[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 145930626 FUN_145930626 body=320 status=ok
// SIG undefined FUN_145930626(void)

undefined4 * FUN_145930626(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145930828(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *local_38 = uVar5;
  local_38[1] = *puVar1;
  lVar8 = puVar1[1];
  local_38[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5;
  cVar3 = FUN_145930768(param_1,uVar9,local_38,&local_44);
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14593161a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145930768 FUN_145930768 body=192 status=ok
// SIG undefined FUN_145930768(void)

undefined8 FUN_145930768(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14592f3bc(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145930828 FUN_145930828 body=230 status=ok
// SIG undefined FUN_145930828(void)

int * FUN_145930828(longlong *param_1,int *param_2)

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



// FUNCTION 14593090e FUN_14593090e body=656 status=ok
// SIG undefined FUN_14593090e(void)

void FUN_14593090e(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  ulonglong *local_48;
  longlong **local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar8 = (longlong *)(param_1 + 0x198);
  local_50 = param_2;
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x1d0;
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1d8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1e0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      lVar4 = *plVar8;
      iVar9 = iVar6;
      do {
        if (*(ulonglong *)(lVar4 + (longlong)iVar9 * 0x20) == param_2) goto LAB_145930afe;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar4 + 0x18);
      } while (iVar9 != -1);
    }
  }
  plVar5 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b3f8c90;
  plVar1 = plVar5 + 2;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  local_70 = plVar1;
  local_68 = plVar5;
  FUN_145930ba0(&local_70,plVar1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = &local_50;
  local_40 = &local_60;
  local_60 = plVar1;
  local_58 = plVar5;
  FUN_145930f02(plVar8,&local_34);
  plVar1 = local_58;
  lVar4 = *(longlong *)(*plVar8 + 8 + (longlong)local_34 * 0x20);
  plVar8 = *(longlong **)(*plVar8 + 0x10 + (longlong)local_34 * 0x20);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (lVar4 == 0) goto LAB_145930ac0;
  FUN_145931202(lVar4,local_50,param_3);
  goto LAB_145930ab2;
  while (iVar6 = *(int *)(lVar7 + 0x18), iVar6 != -1) {
LAB_145930afe:
    lVar7 = lVar4 + (longlong)iVar6 * 0x20;
    if (*(ulonglong *)(lVar4 + (longlong)iVar6 * 0x20) == param_2) goto LAB_145930b80;
  }
  lVar7 = 0;
LAB_145930b80:
  lVar4 = *(longlong *)(lVar7 + 8);
  plVar8 = *(longlong **)(lVar7 + 0x10);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) goto LAB_145930ac0;
LAB_145930ab2:
  FUN_145930c40(lVar4,param_4,param_3);
LAB_145930ac0:
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145930ba0 FUN_145930ba0 body=159 status=ok
// SIG undefined FUN_145930ba0(void)

void FUN_145930ba0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_145930bdd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_145930bdd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145930bdd:
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
                    /* WARNING: Could not recover jumptable at 0x000145930c3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145930c40 FUN_145930c40 body=276 status=ok
// SIG undefined FUN_145930c40(void)

void FUN_145930c40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  FUN_145930d56(local_4c);
  uVar3 = FUN_145930da0(plVar1,local_4c);
  if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x20))) &&
     ((longlong)*(int *)(param_1 + 0x30) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x28);
    lVar7 = (longlong)*(int *)(param_1 + 0x30) * 0xc;
    do {
      cVar2 = FUN_144729dda(lVar6);
      if (cVar2 != '\0') {
        lVar4 = FUN_14479d2ce(lVar6);
        if (lVar4 != 0) {
          lVar5 = FUN_14081cebe();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            local_68 = *param_3;
            uStack_64 = param_3[1];
            uStack_60 = param_3[2];
            uStack_5c = param_3[3];
            FUN_140b3c54c(lVar4,*(undefined4 *)(*plVar1 + 8 + (ulonglong)uVar3 * 0xc),&local_68);
            FUN_14136725e(lVar4,*(undefined4 *)(*plVar1 + 8 + (ulonglong)uVar3 * 0xc),
                          *(undefined1 *)(param_3 + 6));
          }
        }
      }
      lVar6 = lVar6 + 0xc;
      lVar7 = lVar7 + -0xc;
    } while (lVar7 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145930d56 FUN_145930d56 body=73 status=ok
// SIG undefined FUN_145930d56(void)

undefined8 * FUN_145930d56(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14485c47a();
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1);
    FUN_14016169c(uVar2,param_1 + 1);
  }
  return param_1;
}



// FUNCTION 145930da0 FUN_145930da0 body=90 status=ok
// SIG undefined FUN_145930da0(void)

int FUN_145930da0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_145930dfa();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_145930e6e(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0xc) = *param_2;
  }
  return iVar2;
}



// FUNCTION 145930dfa FUN_145930dfa body=115 status=ok
// SIG undefined FUN_145930dfa(void)

int FUN_145930dfa(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar4 = 0;
    do {
      cVar3 = FUN_144729dda(lVar1 + uVar4);
      if ((cVar3 != '\0') && (cVar3 = FUN_141291ffc(lVar1 + uVar4,param_2), cVar3 != '\0')) {
        return (int)(uVar4 >> 2) * -0x55555555;
      }
      uVar4 = uVar4 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != uVar4);
  }
  return -1;
}



// FUNCTION 145930e6e FUN_145930e6e body=147 status=ok
// SIG undefined FUN_145930e6e(void)

void FUN_145930e6e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145930f02 FUN_145930f02 body=340 status=ok
// SIG undefined FUN_145930f02(void)

undefined4 * FUN_145930f02(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14593111c(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_145931058(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1459317e6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145931058 FUN_145931058 body=195 status=ok
// SIG undefined FUN_145931058(void)

undefined8 FUN_145931058(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14592fab0(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14593111c FUN_14593111c body=230 status=ok
// SIG undefined FUN_14593111c(void)

int * FUN_14593111c(longlong *param_1,int *param_2)

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



// FUNCTION 145931202 FUN_145931202 body=1009 status=ok
// SIG undefined FUN_145931202(void)

void FUN_145931202(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_b8;
  longlong local_b0 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong local_68 [2];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = param_1 + 0x10;
  FUN_14485c47a(lVar7);
  cVar2 = FUN_144729dda(lVar7);
  if (cVar2 != '\0') {
    local_58 = param_3;
    local_50 = param_1;
    local_70 = FUN_14081cebe();
    if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_70);
    }
    uVar4 = FUN_14479d2ce(lVar7);
    local_c8 = 0;
    FUN_141274158(local_68,uVar4,&local_70,0);
    FUN_1413677d2(&local_58,local_68);
    local_88 = 0;
    uStack_80 = 0;
    uVar4 = FUN_14479d2ce(lVar7);
    FUN_14490f2e4(uVar4,&local_88,1,1);
    lVar8 = local_88;
    lVar6 = (longlong)(int)uStack_80;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar8 + lVar5);
        local_a0 = FUN_14081cebe();
        if ((local_a0 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_a0);
        }
        local_c8 = 0;
        FUN_141274158(&local_98,uVar4,&local_a0,0);
        FUN_1413677d2(&local_58,&local_98);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    uVar4 = FUN_14479d2ce(lVar7);
    FUN_14153d700(&local_98,uVar4,0,0);
    lVar7 = local_98;
    if ((longlong)local_90 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar7 + lVar8);
        local_b8 = FUN_14081cebe();
        if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_b8);
        }
        local_c8 = 0;
        FUN_141274158(local_b0,uVar4,&local_b8,0);
        FUN_1413677d2(&local_58,local_b0);
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)local_90 * 8 != lVar8);
    }
    if (local_98 != 0) {
      FUN_1400020a8(local_98);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb78570) && (FUN_144b3d300(&DAT_14cb78570), DAT_14cb78570 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb78568 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.CustomDepth.AllowNanite",1);
      _Init_thread_footer(&DAT_14cb78570);
    }
    if (DAT_14cb78568 == (longlong *)0x0) {
      bVar1 = true;
    }
    else {
      iVar3 = (**(code **)(*DAT_14cb78568 + 0xb0))();
      bVar1 = 0 < iVar3;
    }
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x28);
      lVar8 = (longlong)*(int *)(param_1 + 0x30) * 0xc;
      do {
        lVar6 = FUN_141367111(lVar7);
        if (lVar6 != 0) {
          FUN_140b3c4ca(lVar6,*(undefined1 *)(param_3 + 0x19));
          FUN_1459315f4(lVar6,*(undefined1 *)(param_3 + 0x10));
          FUN_141367278(lVar6,*(undefined4 *)(param_3 + 0x14));
          if (*(char *)(param_3 + 0x1a) == '\x01' && !bVar1) {
            lVar5 = FUN_144a7a726();
            if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
               ((*(byte *)(lVar6 + 0x66c) & 2) == 0)) {
              *(byte *)(lVar6 + 0x66c) = *(byte *)(lVar6 + 0x66c) | 2;
              *(undefined1 *)(lVar7 + 8) = 1;
            }
          }
        }
        lVar7 = lVar7 + 0xc;
        lVar8 = lVar8 + -0xc;
      } while (lVar8 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459315f4 FUN_1459315f4 body=38 status=ok
// SIG undefined FUN_1459315f4(void)

void FUN_1459315f4(longlong param_1,byte param_2)

{
  if (((*(uint *)(param_1 + 0x2e4) & 2) == 0) == (bool)param_2) {
    *(uint *)(param_1 + 0x2e4) = (*(uint *)(param_1 + 0x2e4) & 0xfffffffd) + (uint)param_2 * 2;
    FUN_1448215fa();
    return;
  }
  return;
}



// FUNCTION 14593161a FUN_14593161a body=459 status=ok
// SIG undefined FUN_14593161a(void)

void FUN_14593161a(longlong *param_1)

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
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1459317e6 FUN_1459317e6 body=486 status=ok
// SIG undefined FUN_1459317e6(void)

void FUN_1459317e6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459319cd FUN_1459319cd body=46 status=ok
// SIG undefined FUN_1459319cd(void)

void FUN_1459319cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459319fc(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b565bd0;
  puVar1[5] = &PTR_FUN_14b565ed0;
  return;
}



// FUNCTION 1459319fc FUN_1459319fc body=179 status=ok
// SIG undefined FUN_1459319fc(void)

undefined8 * FUN_1459319fc(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined1 *puStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145931bf6();
  *param_1 = &PTR_FUN_14ae3ecb0;
  param_1[5] = &PTR_FUN_14ae3efb0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  FUN_145931ab0(param_1,0);
  local_38 = &DAT_3f8000003f800000;
  puStack_30 = &DAT_3f8000003f800000;
  FUN_145931b2a(param_1);
  local_48 = &DAT_3f8000003f800000;
  puStack_40 = &DAT_3f8000003f800000;
  FUN_145931b90(param_1);
  FUN_145931acc(param_1,0x3c23d70a);
  *(undefined1 *)((longlong)param_1 + 0x5fc) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145931ab0 FUN_145931ab0 body=27 status=ok
// SIG undefined FUN_145931ab0(void)

void FUN_145931ab0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x5d0) = param_2;
  if (*(longlong *)(param_1 + 0x650) == 0) {
    return;
  }
  FUN_146a86ae6(*(longlong *)(param_1 + 0x650),param_2);
  return;
}



// FUNCTION 145931acc FUN_145931acc body=93 status=ok
// SIG undefined FUN_145931acc(void)

void FUN_145931acc(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x5f8) = param_2;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_146a86bac();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145931b2a FUN_145931b2a body=101 status=ok
// SIG undefined FUN_145931b2a(void)

void FUN_145931b2a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x5d8) = uVar1;
  *(undefined4 *)(param_1 + 0x5dc) = uVar2;
  *(undefined4 *)(param_1 + 0x5e0) = uVar3;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146a86afc();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145931b90 FUN_145931b90 body=101 status=ok
// SIG undefined FUN_145931b90(void)

void FUN_145931b90(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x5e8) = uVar1;
  *(undefined4 *)(param_1 + 0x5ec) = uVar2;
  *(undefined4 *)(param_1 + 0x5f0) = uVar3;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146a86b28();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145931bf6 FUN_145931bf6 body=213 status=ok
// SIG undefined FUN_145931bf6(void)

undefined8 * FUN_145931bf6(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a52c470;
  param_1[5] = &PTR_FUN_14a52c770;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  FUN_145931ccc(param_1 + 0x32);
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0x3f80000000000000;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbf) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x5fc) = 1;
  *(undefined2 *)((longlong)param_1 + 0x5f6) = 0x100;
  lVar1 = FUN_140bcc93a();
  FUN_145931d36(param_1 + 0x32,lVar1 + 0x3080);
  return param_1;
}



// FUNCTION 145931ccc FUN_145931ccc body=106 status=ok
// SIG undefined FUN_145931ccc(void)

undefined8 * FUN_145931ccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee34c0;
  FUN_140ca8f8e(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x18);
  FUN_140ca8f8e(param_1 + 0x2e);
  FUN_140ca8f8e(param_1 + 0x44);
  FUN_140ca8f8e(param_1 + 0x5a);
  FUN_140ca8f8e(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x86) = 0x40000000;
  return param_1;
}



// FUNCTION 145931d36 FUN_145931d36 body=136 status=ok
// SIG undefined FUN_145931d36(void)

longlong FUN_145931d36(longlong param_1,longlong param_2)

{
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140f13d9e(param_1 + 0x220,param_2 + 0x220);
  FUN_140f13d9e(param_1 + 0x2d0,param_2 + 0x2d0);
  FUN_140f13d9e(param_1 + 0x380,param_2 + 0x380);
  *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_2 + 0x430);
  return param_1;
}



// FUNCTION 145931dbe FUN_145931dbe body=135 status=ok
// SIG undefined FUN_145931dbe(void)

void FUN_145931dbe(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402f20d0(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1413679d4(local_30,param_1,param_2);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145931e58 FUN_145931e58 body=336 status=ok
// SIG undefined FUN_145931e58(void)

void FUN_145931e58(longlong param_1,ulonglong param_2)

{
  float *pfVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  cVar2 = FUN_144729dda(param_1 + 0x18);
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  uVar6 = param_2 & 0xff;
  if (((byte)param_2 < 2) &&
     (pfVar1 = (float *)(param_1 + 0x948 + uVar6 * 8), *pfVar1 <= 0.0 && *pfVar1 != 0.0)) {
    *(undefined4 *)(param_1 + 0x948 + uVar6 * 8) = 0;
    FUN_141367a8a(plVar4 + 8,param_2 & 0xffffffff);
    plVar4 = *(longlong **)(param_1 + 8);
  }
  cVar2 = (**(code **)(*plVar4 + 0x20))();
  if (cVar2 == '\0') {
    return;
  }
  if ((byte)param_2 == 0) {
    if (*(char *)(param_1 + 0x4a0) == '\0') {
      return;
    }
LAB_145931eee:
    lVar3 = param_1 + 0x28;
  }
  else {
    if ((int)uVar6 == 1) {
      if (*(char *)(param_1 + 0x920) == '\0') {
        return;
      }
    }
    else {
      if ((int)uVar6 != 2) {
        return;
      }
      if (*(char *)(param_1 + 0x4a0) != '\0') goto LAB_145931eee;
      if (*(char *)(param_1 + 0x920) != '\x01') {
        return;
      }
    }
    lVar3 = param_1 + 0x4a8;
  }
  if (lVar3 != 0) {
    cVar2 = *(char *)(lVar3 + 0x460);
    if (cVar2 == '\x03') {
      plVar4 = *(longlong **)(param_1 + 8);
      if ((*(longlong *)(param_1 + 0x20) == 0) ||
         (cVar2 = FUN_144729dda(param_1 + 0x18), cVar2 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
                    /* WARNING: Could not recover jumptable at 0x000145931f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x30))(plVar4,uVar5,param_2 & 0xffffffff);
      return;
    }
    if ((cVar2 == '\0') || ((cVar2 == '\x02' && ((*(uint *)(lVar3 + 0x458) & 3) != 1)))) {
      FUN_141367b2c(param_1,param_2 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 145931fa8 FUN_145931fa8 body=40 status=ok
// SIG undefined FUN_145931fa8(void)

void FUN_145931fa8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145931fd0(puVar1);
  *puVar1 = &PTR_FUN_149f81030;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 145931fd0 FUN_145931fd0 body=82 status=ok
// SIG undefined FUN_145931fd0(void)

undefined8 * FUN_145931fd0(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f833a0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_1458c7138(param_1 + 5,0);
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 145932022 FUN_145932022 body=38 status=ok
// SIG undefined FUN_145932022(void)

undefined8 FUN_145932022(undefined8 param_1,int param_2)

{
  FUN_145932048();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145932048 FUN_145932048 body=84 status=ok
// SIG undefined FUN_145932048(void)

void FUN_145932048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9c2e00;
  FUN_140d46ff6(param_1 + 0x98);
  FUN_140d46ff6(param_1 + 0x5b);
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 14593209c FUN_14593209c body=83 status=ok
// SIG undefined FUN_14593209c(void)

undefined1 FUN_14593209c(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1459320ef(DAT_14ca76748,L"dred");
  if (cVar1 == '\0') {
    cVar1 = FUN_1459320ef(DAT_14ca76760,L"lightdred");
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = DAT_14ca84df4 != 0x8086;
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



// FUNCTION 1459320ef FUN_1459320ef body=631 status=ok
// SIG undefined FUN_1459320ef(void)

ulonglong FUN_1459320ef(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca83bbc) && (FUN_144b3d300(&DAT_14ca83bbc), DAT_14ca83bbc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca83bb8 = FUN_14054d46e(&DAT_14c846b20,L"nogpucrashdebugging");
    _Init_thread_footer(&DAT_14ca83bbc);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca83bc4) && (FUN_144b3d300(&DAT_14ca83bc4), DAT_14ca83bc4 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca83bc0 = FUN_14054d46e(&DAT_14c846b20,L"gpucrashdebugging");
    _Init_thread_footer(&DAT_14ca83bc4);
  }
  if (DAT_14ca83bb8 == '\0') {
    uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
    bVar4 = true;
    if ((DAT_14ca83bc0 == '\0') && (iVar3 = (**(code **)(*DAT_14ca83b98 + 0xb0))(), iVar3 < 1)) {
      iVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
      bVar4 = 0 < iVar3;
    }
  }
  else {
    bVar4 = false;
    uVar5 = 0;
  }
  local_24 = 0;
  FUN_140002266(&local_38,&DAT_149e2b6ae,param_2);
  puVar6 = local_38;
  if (local_30 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_141369f9a(&DAT_14c846b20,puVar6,&local_24);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    bVar2 = FUN_14054d46e(&DAT_14c846b20,param_2);
    bVar2 = bVar4 | bVar2;
  }
  else {
    bVar2 = 0 < local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar5,bVar2) & 0xffffffff;
}



// FUNCTION 145932368 FUN_145932368 body=91 status=ok
// SIG undefined FUN_145932368(void)

void FUN_145932368(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14136a010(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1459323c4 FUN_1459323c4 body=24 status=ok
// SIG undefined FUN_1459323c4(void)

void FUN_1459323c4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459323d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1459323dc FUN_1459323dc body=38 status=ok
// SIG undefined FUN_1459323dc(void)

undefined8 FUN_1459323dc(undefined8 param_1,int param_2)

{
  FUN_145932402();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145932402 FUN_145932402 body=653 status=ok
// SIG undefined FUN_145932402(void)

void FUN_145932402(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a5b02c0;
  if (*(char *)(param_1 + 0x8a) == '\x01') {
    FUN_14136a010(param_1);
  }
  FUN_144760e21(param_1[0x87],*(undefined4 *)(param_1 + 0x88));
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  FUN_145932904(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_1459326ba(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 0x39);
  FUN_1459327ae(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 0x2d);
  FUN_1459327fb(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_145932848(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1459326f0(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_145932726(param_1 + 0x15);
  lVar4 = 0x98;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x78);
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  (*(code *)(&PTR_FUN_14a5b3c40)[*(byte *)(param_1 + 0xc)])(param_1 + 4);
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014593268b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145932690 FUN_145932690 body=42 status=ok
// SIG undefined FUN_145932690(void)

void FUN_145932690(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_14593275c(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1459326ba FUN_1459326ba body=53 status=ok
// SIG undefined FUN_1459326ba(void)

void FUN_1459326ba(longlong *param_1)

{
  FUN_1459329f8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459326f0 FUN_1459326f0 body=53 status=ok
// SIG undefined FUN_1459326f0(void)

void FUN_1459326f0(longlong *param_1)

{
  FUN_145932b6c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145932726 FUN_145932726 body=53 status=ok
// SIG undefined FUN_145932726(void)

void FUN_145932726(longlong *param_1)

{
  FUN_145932ce0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14593275c FUN_14593275c body=82 status=ok
// SIG undefined FUN_14593275c(void)

void FUN_14593275c(LPCRITICAL_SECTION param_1)

{
  FUN_145932896();
  FUN_14136a0ba(param_1[1].OwningThread,*(undefined4 *)&param_1[1].LockSemaphore);
  if (param_1[1].OwningThread != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_14136a0ba(param_1[1].DebugInfo,param_1[1].LockCount);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1459327ae FUN_1459327ae body=77 status=ok
// SIG undefined FUN_1459327ae(void)

void FUN_1459327ae(longlong param_1,int param_2)

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



// FUNCTION 1459327fb FUN_1459327fb body=77 status=ok
// SIG undefined FUN_1459327fb(void)

void FUN_1459327fb(longlong param_1,int param_2)

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



// FUNCTION 145932848 FUN_145932848 body=77 status=ok
// SIG undefined FUN_145932848(void)

void FUN_145932848(longlong param_1,int param_2)

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



// FUNCTION 145932896 FUN_145932896 body=109 status=ok
// SIG undefined FUN_145932896(void)

void FUN_145932896(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  FUN_14136a0ba(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_147850bba(param_1 + 0x28);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  FUN_14136a0ba(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_147850bba(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 145932904 FUN_145932904 body=187 status=ok
// SIG undefined FUN_145932904(void)

void FUN_145932904(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0x170;
  lVar1 = -0xa0;
  do {
    *(undefined4 *)(lVar2 + 0x48) = 0;
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1459329c0(lVar2);
    lVar2 = lVar2 + -0x50;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  lVar2 = param_1 + 0xd0;
  lVar1 = -0xa0;
  do {
    *(undefined4 *)(lVar2 + 0x48) = 0;
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1459329c0(lVar2);
    lVar2 = lVar2 + -0x50;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0);
  lVar2 = 0x70;
  do {
    if (*(longlong *)(param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0x30);
  lVar2 = 0x40;
  do {
    if (*(longlong *)(param_1 + -0x10 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 1459329c0 FUN_1459329c0 body=55 status=ok
// SIG undefined FUN_1459329c0(void)

void FUN_1459329c0(longlong *param_1)

{
  FUN_14136a0f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459329f8 FUN_1459329f8 body=370 status=ok
// SIG undefined FUN_1459329f8(void)

void FUN_1459329f8(longlong *param_1)

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
      FUN_1459327ae(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145932b6c FUN_145932b6c body=370 status=ok
// SIG undefined FUN_145932b6c(void)

void FUN_145932b6c(longlong *param_1)

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
      FUN_145932848(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145932ce0 FUN_145932ce0 body=370 status=ok
// SIG undefined FUN_145932ce0(void)

void FUN_145932ce0(longlong *param_1)

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
      FUN_145932848(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145932e54 FUN_145932e54 body=1620 status=ok
// SIG undefined FUN_145932e54(void)

undefined8 FUN_145932e54(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) &&
     (lVar15 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar15 != 0)) {
    plVar6 = param_1 + 9;
    cVar7 = FUN_144a7e912(plVar6);
    if ((cVar7 != '\0') && (cVar7 = FUN_145933504(param_1), cVar7 != '\0')) {
      *(undefined1 *)(param_1 + 0x15) = 0;
      lVar11 = param_1[9];
      if ((lVar11 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar11);
      }
      uVar10 = 0;
      if ((lVar11 != 0) && ((longlong *)param_1[10] != (longlong *)0x0)) {
        uVar10 = (**(code **)(*(longlong *)param_1[10] + 0x10))();
      }
      lVar11 = FUN_1412c348c(uVar10);
      if ((lVar11 == 0) || (cVar7 = FUN_148cc6424(lVar11), cVar7 == '\0')) {
        plVar12 = (longlong *)FUN_1412c3498(plVar6);
        plVar12 = (longlong *)*plVar12;
        if (plVar12 == (longlong *)0x0) {
LAB_145933359:
          bVar9 = FUN_1412c32aa(plVar6);
          lVar11 = (ulonglong)bVar9 * 8 + 0x530;
        }
        else {
          uVar10 = FUN_140437bea();
          lVar11 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar10);
          if (lVar11 == 0) goto LAB_145933359;
          uVar10 = FUN_140437bea();
          lVar13 = FUN_144718840(lVar11,uVar10);
          if ((lVar11 == lVar13) || (lVar11 = 0x540, lVar13 == 0)) goto LAB_145933359;
        }
        uVar10 = *(undefined8 *)(lVar15 + lVar11);
      }
      else {
        uVar10 = *(undefined8 *)(lVar15 + 0x548);
        *(undefined1 *)(param_1 + 0x15) = 1;
      }
      local_78 = 0;
      uVar8 = (**(code **)(*(longlong *)(*param_1 + 0x3ae0) + 0x28))
                        (*param_1 + 0x3ae0,uVar10,*(undefined8 *)(lVar15 + 0x550));
      *(undefined1 *)(param_1 + 0x5b) = uVar8;
      local_54 = 0;
      local_58 = 0;
      FUN_145933a24(param_1);
      if ((*param_1 != 0) && (*(longlong **)(&DAT_00006850 + *param_1) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(&DAT_00006850 + *param_1) + 3000))();
      }
      uVar3 = local_54;
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,2,0x10);
      local_60 = 2;
      *local_68 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar15 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar15 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar15;
      local_68[2] = lVar11;
      *local_68 = &PTR_FUN_14b9749e0;
      local_68[3] = param_1;
      if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
        FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x54,&local_68,uVar3);
      }
      FUN_1449db362(&local_68);
      uVar3 = local_58;
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,2,0x10);
      local_60 = 2;
      *local_68 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar15 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar15 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar15;
      local_68[2] = lVar11;
      *local_68 = &PTR_FUN_14b974a50;
      local_68[3] = param_1;
      if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
        FUN_14136a272(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x55,&local_68,uVar3);
      }
      FUN_1449db362(&local_68);
      if ((char)param_1[0x5b] != '\0') {
        *(undefined1 *)(param_1 + 8) = 1;
        lVar15 = *param_1;
        if (lVar15 != 0) {
          FUN_144a62f0c(lVar15,*(undefined8 *)(lVar15 + 0x28),0x4d);
        }
        FUN_145933696(param_1,plVar6);
        cVar7 = FUN_1412c32aa(plVar6);
        plVar12 = param_1 + 0x16;
        plVar14 = plVar12;
        if (cVar7 != '\0') {
          plVar14 = param_1 + 0x23;
        }
        FUN_1459334aa(plVar14,plVar6);
        lVar15 = *param_1;
        if ((lVar15 != 0) && (*(char *)(lVar15 + 0x178) == '\x03')) {
          lVar11 = param_1[9];
          if (DAT_14c950c29 == 1) {
            if (lVar11 == 0) {
              lVar11 = 0;
              goto LAB_1459331a8;
            }
            FUN_1456cec3c(lVar11);
            lVar15 = *param_1;
            lVar11 = param_1[9];
            param_1[0x30] = lVar11;
            param_1[0x31] = param_1[10];
            *(int *)(param_1 + 0x32) = (int)param_1[0xb];
            if (lVar15 != 0) goto LAB_1459331c3;
          }
          else {
LAB_1459331a8:
            param_1[0x30] = lVar11;
            param_1[0x31] = param_1[10];
            *(int *)(param_1 + 0x32) = (int)param_1[0xb];
LAB_1459331c3:
            FUN_144a62f0c(lVar15,*(undefined8 *)(lVar15 + 0x28),0x4d);
            lVar11 = *plVar6;
          }
          if ((lVar11 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar11);
          }
          if (((lVar11 != 0) && (plVar14 = (longlong *)param_1[10], plVar14 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar14 + 0x58))(plVar14), cVar7 != '\0')) {
            plVar14 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14);
            lVar15 = *param_1;
            if ((lVar15 == 0) || (DAT_14c950c29 == 0)) {
              *plVar14 = lVar15;
              if (lVar15 == 0) {
                plVar14[1] = 0;
              }
            }
            else {
              FUN_1456cec3c(lVar15);
              *plVar14 = lVar15;
            }
            plVar2 = (longlong *)*param_1;
            if (plVar2 == (longlong *)0x0) {
LAB_1459333a8:
              lVar11 = 0;
            }
            else {
              uVar10 = FUN_140437cd0();
              lVar15 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar10);
              if (lVar15 == 0) goto LAB_1459333a8;
              uVar10 = FUN_140437cd0();
              lVar11 = FUN_144718840(lVar15,uVar10);
              if (lVar15 == lVar11) goto LAB_1459333a8;
            }
            plVar14[1] = lVar11;
            if ((plVar14[3] != 0) && ((longlong *)plVar14[4] != (longlong *)0x0)) {
              (**(code **)(*(longlong *)plVar14[4] + 0x28))();
            }
          }
        }
        lVar15 = *(longlong *)(*param_1 + 0x1c8);
        if (lVar15 == 0) {
          puVar16 = &DAT_14c8464e0;
          lVar15 = DAT_14c8464f0;
        }
        else {
          puVar16 = (undefined8 *)(lVar15 + 0x260);
          lVar15 = *(longlong *)(lVar15 + 0x270);
        }
        uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
        uVar4 = *(undefined4 *)(puVar16 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
        *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)puVar16;
        *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar3;
        *(undefined4 *)(param_1 + 0x3a) = uVar4;
        *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar5;
        param_1[0x3b] = lVar15;
        cVar7 = FUN_144a7e912(plVar12);
        plVar14 = param_1 + 0x23;
        if (cVar7 != '\0') {
          plVar14 = plVar12;
        }
        cVar7 = FUN_1412c32aa(plVar14);
        if (cVar7 != '\0') {
          FUN_1409c9c98(param_1,1);
          *(undefined1 *)(param_1 + 0x37) = 1;
          if ((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
            FUN_14593384e();
          }
        }
        FUN_14136a512(param_1,plVar6);
        uVar10 = (**(code **)(*(longlong *)(*param_1 + 0x10e0) + 0x50))(*param_1 + 0x10e0);
        FUN_140dc01da(uVar10,&local_68,(char)param_1[0x5b]);
        if (local_68 != (undefined8 *)0x0) {
          FUN_1459335b0(local_68 + 3,local_70,param_1);
        }
        plVar6 = (longlong *)CONCAT44(uStack_5c,local_60);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar6 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
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
        uVar10 = 1;
        goto LAB_145932eaa;
      }
    }
  }
  uVar10 = 0;
LAB_145932eaa:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1459334aa FUN_1459334aa body=89 status=ok
// SIG undefined FUN_1459334aa(void)

longlong * FUN_1459334aa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  FUN_140eb23de(param_1 + 3,param_2 + 3);
  *(char *)(param_1 + 0xc) = (char)param_2[0xc];
  return param_1;
}



// FUNCTION 145933504 FUN_145933504 body=171 status=ok
// SIG undefined FUN_145933504(void)

undefined8 FUN_145933504(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*param_1 != 0) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) &&
     (*(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0) != 0)) {
    cVar2 = FUN_144a7e912(param_1 + 9);
    if (((cVar2 != '\0') && (cVar2 = FUN_14136a3ac(param_1), cVar2 != '\0')) &&
       (cVar2 = FUN_140666516(param_1,param_1 + 9), cVar2 != '\0')) {
      if ((char)param_1[0x5b] == '\0') {
        return 1;
      }
      lVar3 = (longlong)*(int *)(*param_1 + 0x1550);
      if (lVar3 != 0) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x1548) + lVar4);
          if ((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == (char)param_1[0x5b])) {
            return 0;
          }
          lVar4 = lVar4 + 0x10;
        } while (lVar3 * 0x10 != lVar4);
      }
      *(undefined1 *)(param_1 + 0x5b) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1459335b0 FUN_1459335b0 body=228 status=ok
// SIG undefined FUN_1459335b0(void)

undefined8 FUN_1459335b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e9c20;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b974ac0;
  local_38[3] = param_3;
  local_38[4] = FUN_1458c5d10;
  FUN_140ebcfd8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145933696 FUN_145933696 body=439 status=ok
// SIG undefined FUN_145933696(void)

void FUN_145933696(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 **local_98;
  code *local_90;
  undefined8 **local_88;
  undefined8 local_80;
  code **local_78;
  code *local_70;
  undefined8 *local_68;
  undefined1 local_5c [28];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)FUN_1412c3498(param_2);
  plVar1 = (longlong *)*plVar1;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140437b04();
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140437b04();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        uVar2 = FUN_1412c3498(param_2);
        FUN_14136a5f7(param_1 + 0x5e,plVar1,uVar2);
        uVar2 = FUN_1412c3498(param_2);
        FUN_141123ce0(param_1 + 0x60,plVar1,uVar2);
        if ((longlong *)*param_1 != (longlong *)0x0) {
          lVar5 = (**(code **)(*(longlong *)*param_1 + 0x5d8))();
          if (lVar5 != 0) {
            lVar6 = FUN_144a5dd5e();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              uVar2 = FUN_140e27f24();
              local_a0 = &local_a9;
              local_98 = &local_a8;
              local_a8 = &LAB_144165804;
              local_88 = &local_98;
              local_90 = FUN_140c4fb00;
              FUN_140d8b592(local_5c,lVar5);
              local_68 = &local_80;
              local_70 = FUN_140c4fac4;
              local_80 = uVar2;
              local_78 = &local_90;
              FUN_140d8b39e(uVar2,local_5c,lVar5);
            }
          }
        }
        (**(code **)(*plVar4 + 0x38))(plVar4,*param_1,param_2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593384e FUN_14593384e body=126 status=ok
// SIG undefined FUN_14593384e(void)

void FUN_14593384e(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0xf18))(param_1,0);
  cVar1 = (**(code **)(*param_1 + 0xeb8))(param_1);
  if (cVar1 != '\0') {
    FUN_14880ef48(param_1,0);
    cVar1 = FUN_148cfdcdc(param_1);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x774) = *(byte *)(param_1 + 0x774) & 0xfe;
    }
  }
  cVar1 = (**(code **)(*param_1 + 0xf38))(param_1);
  if (cVar1 != '\0') {
    FUN_140153cb0(param_1,0);
    cVar1 = FUN_148cfdcdc(param_1);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 0x88b) = *(byte *)(param_1 + 0x88b) & 0xfe;
    }
  }
  *(undefined1 *)(param_1 + 0x845) = 0;
  return;
}



// FUNCTION 1459338cc FUN_1459338cc body=193 status=ok
// SIG undefined FUN_1459338cc(void)

void FUN_1459338cc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0;
  local_50 = DAT_14c9a6400;
  local_48 = 0xffffffff;
  local_68 = DAT_14cbcb0b8;
  local_60 = 0xffffffff;
  FUN_140f8b8f2(param_1 + -0x1600);
  FUN_14580d048(param_1,param_2,param_3);
  FUN_141460aa2(&local_50);
  FUN_141460ac0(param_1 + -0xeb8,&DAT_14cbcd4f8,&local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14593398e FUN_14593398e body=149 status=ok
// SIG undefined FUN_14593398e(void)

void FUN_14593398e(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return;
}



// FUNCTION 145933a24 FUN_145933a24 body=720 status=ok
// SIG undefined FUN_145933a24(void)

void FUN_145933a24(longlong *param_1,float *param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong *local_128;
  float local_120;
  longlong local_e8;
  longlong *local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_2 = 0.0;
  *param_3 = 0.0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  fVar11 = 1.0;
  if (*param_1 != 0) {
    if ((*(longlong *)(&DAT_00006850 + *param_1) != 0) &&
       (lVar8 = *(longlong *)(*(longlong *)(&DAT_00006850 + *param_1) + 0x44c0), lVar8 != 0)) {
      lVar8 = lVar8 + 0x558;
      lVar3 = FUN_14018aa1e(lVar8);
      if (lVar3 == 0) {
        if ((char)param_1[0x5b] != '\0') {
          if (*param_1 == 0) goto LAB_145933b59;
          FUN_140dc01da(*param_1 + 0x1508,&local_130);
          if (local_130 != (longlong *)0x0) {
            (**(code **)(*local_130 + 8))(local_130,&local_68,&DAT_14cb8d438);
          }
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_128 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar2 = (int *)((longlong)local_128 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_128 + 0x10))(local_128);
              }
            }
          }
        }
      }
      else {
        uVar4 = FUN_14018aa1e(lVar8);
        uStack_60 = CONCAT44(uStack_60._4_4_,1);
        FUN_141022c24(&local_68,0);
        *local_68 = uVar4;
      }
    }
    if (*param_1 != 0) {
      FUN_140dc01da(*param_1 + 0x1508,&local_78,(char)param_1[0x5b]);
      fVar11 = 1.0;
      if ((local_78 != (longlong *)0x0) && (lVar8 = (**(code **)(*local_78 + 0x20))(), lVar8 != 0))
      {
        FUN_140bb5078(lVar8,&local_130,*param_1 + 0x10e0,&DAT_14cb8d438);
        fVar11 = local_120;
      }
      plVar7 = (longlong *)CONCAT44(uStack_6c,local_70);
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
  }
LAB_145933b59:
  FUN_145933cf5(&local_78,&local_68);
  iVar5 = 0;
  if ((longlong)local_70 != 0) {
    lVar8 = (longlong)local_70 * 0xb8;
    plVar7 = local_78;
    do {
      FUN_140ed40b0(&local_130,plVar7);
      if ((local_e8 != 0) &&
         ((pfVar6 = param_2, *(char *)(local_e8 + 0x38) == '\0' ||
          (pfVar6 = param_3, *(char *)(local_e8 + 0x38) == '\x01')))) {
        fVar9 = (float)FUN_14136ab98(&local_130);
        fVar10 = *pfVar6;
        if (*pfVar6 <= fVar9) {
          fVar10 = fVar9;
        }
        *pfVar6 = fVar10 / fVar11;
      }
      plVar7 = plVar7 + 0x17;
      lVar8 = lVar8 + -0xb8;
      iVar5 = local_70;
    } while (lVar8 != 0);
  }
  FUN_14499183d(local_78,iVar5);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145933cf5 FUN_145933cf5 body=157 status=ok
// SIG undefined FUN_145933cf5(void)

undefined8 * FUN_145933cf5(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_14136abce(&local_40,*(undefined8 *)(lVar1 + lVar3));
      FUN_140ed4016(param_1,&local_40);
      FUN_14499183d(local_40,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145933d94 FUN_145933d94 body=40 status=ok
// SIG undefined FUN_145933d94(void)

undefined8 FUN_145933d94(undefined8 param_1,int param_2)

{
  FUN_145933dbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145933dbc FUN_145933dbc body=110 status=ok
// SIG undefined FUN_145933dbc(void)

void FUN_145933dbc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aecf320;
  param_1[5] = &PTR_FUN_14aecf5c0;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_145933e42(param_1);
  return;
}



// FUNCTION 145933e42 FUN_145933e42 body=70 status=ok
// SIG undefined FUN_145933e42(void)

void FUN_145933e42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aeceb40;
  param_1[5] = &PTR_FUN_14aecede0;
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145933e88 FUN_145933e88 body=31 status=ok
// SIG undefined FUN_145933e88(void)

undefined8 FUN_145933e88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145933ea8 FUN_145933ea8 body=31 status=ok
// SIG undefined FUN_145933ea8(void)

undefined8 FUN_145933ea8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145933ec8 FUN_145933ec8 body=140 status=ok
// SIG undefined FUN_145933ec8(void)

void FUN_145933ec8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145933f56();
  FUN_1446f470e(&local_38,L"ReplicatedMoveState",1);
  uVar1 = FUN_14595c908();
  FUN_14595c908();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145933f56 FUN_145933f56 body=226 status=ok
// SIG undefined FUN_145933f56(void)

void FUN_145933f56(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"ControlledActor",1);
  uVar1 = FUN_14136b172();
  FUN_14136b172();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"SplineTrackActor",1);
  uVar1 = FUN_14136b172();
  FUN_14136b172();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145934044 FUN_145934044 body=127 status=ok
// SIG undefined FUN_145934044(void)

undefined8 * FUN_145934044(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b4d49a0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 2;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1459340c4(param_1 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 1459340c4 FUN_1459340c4 body=90 status=ok
// SIG undefined FUN_1459340c4(void)

undefined8 * FUN_1459340c4(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14593411e(param_1 + 4);
  FUN_14593413b(param_1 + 6);
  FUN_1459341e1(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_14136b258(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 1;
  return param_1;
}



// FUNCTION 14593411e FUN_14593411e body=29 status=ok
// SIG undefined FUN_14593411e(void)

undefined8 FUN_14593411e(undefined8 param_1)

{
  FUN_1400b22c2(param_1,&DAT_14b4da15a);
  return param_1;
}



// FUNCTION 14593413b FUN_14593413b body=165 status=ok
// SIG undefined FUN_14593413b(void)

undefined8 FUN_14593413b(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459341e1(local_38);
  FUN_145934313(local_48);
  FUN_14593427e(local_58);
  FUN_140f2ad5a(param_1,local_58,local_48,local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459341e1 FUN_1459341e1 body=149 status=ok
// SIG undefined FUN_1459341e1(void)

undefined8 * FUN_1459341e1(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar6 + 0x38);
  plVar5 = *(longlong **)(lVar6 + 0x40);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_145934276(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
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
  return param_1;
}



// FUNCTION 145934276 FUN_145934276 body=8 status=ok
// SIG undefined FUN_145934276(void)

longlong FUN_145934276(longlong param_1)

{
  return param_1 + 0x98;
}



// FUNCTION 14593427e FUN_14593427e body=149 status=ok
// SIG undefined FUN_14593427e(void)

undefined8 * FUN_14593427e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar6 + 0x38);
  plVar5 = *(longlong **)(lVar6 + 0x40);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_14142d800(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
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
  return param_1;
}



// FUNCTION 145934313 FUN_145934313 body=149 status=ok
// SIG undefined FUN_145934313(void)

undefined8 * FUN_145934313(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = FUN_140d5712e();
  uVar4 = *(undefined8 *)(lVar6 + 0x38);
  plVar5 = *(longlong **)(lVar6 + 0x40);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_1459343a8(uVar4);
  *param_1 = 0;
  iVar3 = *(int *)(puVar7 + 1);
  _Src = (void *)*puVar7;
  *(int *)(param_1 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar3,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar3 * 2);
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
  return param_1;
}



// FUNCTION 1459343a8 FUN_1459343a8 body=8 status=ok
// SIG undefined FUN_1459343a8(void)

longlong FUN_1459343a8(longlong param_1)

{
  return param_1 + 0xb8;
}



// FUNCTION 1459343b0 FUN_1459343b0 body=40 status=ok
// SIG undefined FUN_1459343b0(void)

undefined8 FUN_1459343b0(undefined8 param_1,int param_2)

{
  FUN_1459343d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459343d8 FUN_1459343d8 body=47 status=ok
// SIG undefined FUN_1459343d8(void)

void FUN_1459343d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a628460;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145934408 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  FUN_144760e82();
  return;
}



// FUNCTION 14593440e FUN_14593440e body=38 status=ok
// SIG undefined FUN_14593440e(void)

undefined8 FUN_14593440e(undefined8 param_1,int param_2)

{
  FUN_145934434();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145934434 FUN_145934434 body=170 status=ok
// SIG undefined FUN_145934434(void)

void FUN_145934434(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aadee30;
  param_1[10] = &PTR_FUN_14aadef00;
  param_1[0xc] = &PTR_FUN_14aadef80;
  if (param_1[0x15] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x15] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x14] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x14] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x13] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x13] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1459344de(param_1);
  return;
}



// FUNCTION 1459344de FUN_1459344de body=68 status=ok
// SIG undefined FUN_1459344de(void)

void FUN_1459344de(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *(undefined ***)(param_1 + 0x50) = &PTR_LAB_14aadd7d0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c04d8(param_1);
  return;
}



// FUNCTION 145934522 FUN_145934522 body=72 status=ok
// SIG undefined FUN_145934522(void)

void FUN_145934522(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x210);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b6024d0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  FUN_14136b39e(param_2 + 0x1d);
  return;
}



// FUNCTION 145934580 FUN_145934580 body=84 status=ok
// SIG undefined FUN_145934580(void)

undefined8 * FUN_145934580(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141094b14();
  *param_1 = &PTR_FUN_14bb3d2d0;
  if (DAT_14cc044a8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc044a8 = FUN_140002ddd(FUN_1466b8e4f,uVar1,L"RigVMDispatch_ArraySetAtIndex");
  }
  param_1[1] = DAT_14cc044a8;
  return param_1;
}



// FUNCTION 1459345d4 FUN_1459345d4 body=40 status=ok
// SIG undefined FUN_1459345d4(void)

undefined8 FUN_1459345d4(undefined8 param_1,int param_2)

{
  FUN_1459345fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459345fc FUN_1459345fc body=83 status=ok
// SIG undefined FUN_1459345fc(void)

void FUN_1459345fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b877f40;
  param_1[0x33] = &PTR_FUN_14b8782a0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_1410bf6a4(param_1);
  return;
}



// FUNCTION 145934650 FUN_145934650 body=53 status=ok
// SIG undefined FUN_145934650(void)

void FUN_145934650(longlong *param_1)

{
  FUN_145934686();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145934686 FUN_145934686 body=346 status=ok
// SIG undefined FUN_145934686(void)

void FUN_145934686(longlong *param_1)

{
  longlong *plVar1;
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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459347e2 FUN_1459347e2 body=122 status=ok
// SIG undefined FUN_1459347e2(void)

void FUN_1459347e2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14593485e(param_1,iVar1);
    }
    FUN_14136b668((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148cf91e6(param_1,param_2,iVar1 - param_2);
    FUN_148cf9248(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14593485e FUN_14593485e body=147 status=ok
// SIG undefined FUN_14593485e(void)

void FUN_14593485e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1459348f2 FUN_1459348f2 body=459 status=ok
// SIG undefined FUN_1459348f2(void)

void FUN_1459348f2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145934abe FUN_145934abe body=55 status=ok
// SIG undefined FUN_145934abe(void)

void FUN_145934abe(longlong *param_1)

{
  FUN_145934af6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145934af6 FUN_145934af6 body=129 status=ok
// SIG undefined FUN_145934af6(void)

void FUN_145934af6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145934b78 FUN_145934b78 body=38 status=ok
// SIG undefined FUN_145934b78(void)

undefined8 FUN_145934b78(undefined8 param_1,int param_2)

{
  FUN_145934b9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145934b9e FUN_145934b9e body=147 status=ok
// SIG undefined FUN_145934b9e(void)

void FUN_145934b9e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b692540;
  plVar3 = (longlong *)param_1[100];
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
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[0x5f],*(undefined4 *)(param_1 + 0x60));
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_141420c64(param_1);
  return;
}



// FUNCTION 145934c31 FUN_145934c31 body=196 status=ok
// SIG undefined FUN_145934c31(void)

bool FUN_145934c31(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_20 = param_3;
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    lVar4 = FUN_145934cf6();
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_28 = plVar3;
    lVar4 = FUN_145934cf6();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145934cf6 FUN_145934cf6 body=127 status=ok
// SIG undefined FUN_145934cf6(void)

longlong * FUN_145934cf6(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = (longlong)*(int *)(param_1 + 1) << 5;
    plVar6 = (longlong *)*param_1;
    do {
      plVar5 = plVar6;
      if ((*plVar5 == *param_2) && (cVar3 = FUN_1409d2f40(plVar5 + 2,param_2[2]), cVar3 != '\0'))
      break;
      plVar6 = plVar5 + 4;
      lVar4 = lVar4 + -0x20;
      plVar5 = (longlong *)0x0;
    } while (lVar4 != 0);
  }
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return plVar5;
}



// FUNCTION 145934d76 FUN_145934d76 body=103 status=ok
// SIG undefined FUN_145934d76(void)

ulonglong FUN_145934d76(longlong param_1)

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
LAB_145934dc0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145934dc0;
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



// FUNCTION 145934de4 FUN_145934de4 body=144 status=ok
// SIG undefined FUN_145934de4(void)

void FUN_145934de4(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar1 = FUN_144a800f8();
    lVar2 = FUN_144718840(param_2,uVar1);
    if (lVar2 != 0) {
      FUN_14136cc1e(local_48,param_1 + 0xda8,param_3,param_4);
      FUN_145934e76(lVar2,local_48,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145934e76 FUN_145934e76 body=1087 status=ok
// SIG undefined FUN_145934e76(void)

void FUN_145934e76(longlong *param_1,longlong *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined1 auStack_988 [44];
  undefined1 local_95c [4];
  longlong local_958;
  undefined1 local_950;
  undefined1 local_948 [16];
  char local_938 [1120];
  char local_4d8 [1184];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_988;
  if ((((param_1[1] == 0) || (param_1[2] == 0)) || (*(int *)(param_1[2] + 8) < 1)) ||
     ((param_1[4] == 0 || (cVar1 = FUN_144729dda(param_1 + 3), cVar1 == '\0')))) goto LAB_145935189;
  local_958 = 0;
  if (*param_2 != 0) {
    local_958 = param_2[1];
  }
  local_950 = 1;
  FUN_144a44f9a(local_948,param_1);
  local_4d8[0x18] = '\0';
  local_4d8[0x498] = '\0';
  FUN_140931e3c(param_1,&local_958,local_948);
  cVar1 = (char)param_2[2];
  if (cVar1 == '\0') {
    if (local_4d8[0x18] == '\0') goto LAB_145934f5a;
LAB_145934f3b:
    pcVar5 = local_938;
LAB_145934f40:
    if ((pcVar5 == (char *)0x0) || ((pcVar5[0x460] == '\x03' & (param_3 ^ 1)) == 0))
    goto LAB_145934f5a;
  }
  else {
    if (cVar1 == '\x01') {
      if (local_4d8[0x498] != '\0') {
LAB_1459351dd:
        pcVar5 = local_4d8 + 0x20;
        goto LAB_145934f40;
      }
    }
    else if (cVar1 == '\x02') {
      if (local_4d8[0x18] != '\0') goto LAB_145934f3b;
      if (local_4d8[0x498] == '\x01') goto LAB_1459351dd;
    }
LAB_145934f5a:
    cVar1 = FUN_14136cc74(local_948,param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_1489ae7e6(local_948,param_2);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x88))(param_1,param_2);
      }
    }
    else {
      lVar2 = (**(code **)(*param_1 + 8))(param_1);
      if (lVar2 == 0) {
LAB_1459351b3:
        lVar2 = 0;
      }
      else {
        lVar3 = FUN_144a6c4d8();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1459351b3;
      }
      FUN_14136cf00(local_95c,*param_2,lVar2,0);
      cVar1 = (char)param_2[2];
      if (cVar1 == '\0') {
        if (local_4d8[0x18] != '\0') {
LAB_145934fd9:
          pcVar5 = local_938;
LAB_145934fde:
          if (pcVar5 != (char *)0x0) {
            cVar1 = *(char *)((longlong)param_2 + 0x11);
            lVar2 = (**(code **)(*param_1 + 8))(param_1);
            if (lVar2 == 0) {
LAB_1459351ba:
              lVar2 = 0;
            }
            else {
              lVar3 = FUN_144a6c4d8();
              if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_1459351ba;
            }
            lVar3 = *param_2;
            pcVar7 = pcVar5 + 0x2e8;
            if (cVar1 == '\0') {
              pcVar7 = pcVar5 + 0xb8;
            }
            cVar1 = FUN_1401038ca(pcVar7,lVar3,lVar2);
            if (cVar1 != '\0') {
              FUN_1459353ac(pcVar7,lVar3,lVar2);
            }
          }
        }
      }
      else if (cVar1 == '\x01') {
        if (local_4d8[0x498] != '\0') {
LAB_145935222:
          pcVar5 = local_4d8 + 0x20;
          goto LAB_145934fde;
        }
      }
      else if (cVar1 == '\x02') {
        if (local_4d8[0x18] != '\0') goto LAB_145934fd9;
        if (local_4d8[0x498] == '\x01') goto LAB_145935222;
      }
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2);
      if (cVar1 != '\0') {
        lVar2 = (**(code **)(*param_1 + 0x40))(param_1);
        FUN_1459352fe(lVar2 + 0x10,param_1,param_2);
        lVar3 = 0;
        if ((*param_2 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) {
          lVar3 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
          if (lVar3 != 0) {
            lVar4 = FUN_144a6c4d8();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_1459350d3;
          }
          lVar3 = 0;
        }
LAB_1459350d3:
        FUN_1459352b6(lVar2,lVar3,(char)param_2[2],*(undefined1 *)((longlong)param_2 + 0x11));
      }
      (**(code **)(*param_1 + 0x80))(param_1,param_2);
      cVar1 = (char)param_2[2];
      if (cVar1 == '\0') {
        pcVar5 = local_938;
LAB_145935106:
        pcVar7 = (char *)0x0;
        if (pcVar5[0x478] != '\0') {
          pcVar7 = pcVar5;
        }
LAB_145935113:
        plVar6 = (longlong *)(pcVar7 + 0x218);
        if ((*(byte *)((longlong)param_2 + 0x11) & 1) != 0) {
          plVar6 = (longlong *)(pcVar7 + 0x448);
        }
        if ((pcVar7 != (char *)0x0) && (plVar6 != (longlong *)0x0)) {
          lVar2 = 0x220;
          if ((*(byte *)((longlong)param_2 + 0x11) & 1) != 0) {
            lVar2 = 0x450;
          }
          if (((*(int *)(pcVar7 + lVar2) != 0) && ((longlong *)*plVar6 != (longlong *)0x0)) &&
             (cVar1 = (**(code **)(*(longlong *)*plVar6 + 0x30))(), cVar1 != '\0')) {
            if (*(int *)(pcVar7 + lVar2) == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)*plVar6;
            }
            (**(code **)(*plVar6 + 0x58))(plVar6,param_2);
          }
        }
      }
      else {
        if (cVar1 == '\x01') {
LAB_145935234:
          pcVar5 = local_4d8 + 0x20;
          goto LAB_145935106;
        }
        if (cVar1 == '\x02') {
          if (local_4d8[0x18] == '\0') goto LAB_145935234;
          pcVar7 = local_938;
          goto LAB_145935113;
        }
      }
      FUN_14136cce2(local_95c);
    }
  }
  FUN_14023c33c(local_948);
LAB_145935189:
  if ((local_38 ^ (ulonglong)auStack_988) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459352b6 FUN_1459352b6 body=70 status=ok
// SIG undefined FUN_1459352b6(void)

void FUN_1459352b6(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  undefined1 local_f;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  local_f = param_4;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459352fe FUN_1459352fe body=173 status=ok
// SIG undefined FUN_1459352fe(void)

void FUN_1459352fe(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145935395;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145935395:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1459353ac FUN_1459353ac body=1833 status=ok
// SIG undefined FUN_1459353ac(void)

void FUN_1459353ac(longlong param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [24];
  longlong local_b8;
  undefined4 local_a8;
  undefined1 local_a0 [40];
  undefined4 local_78;
  uint local_70;
  undefined4 uStack_6c;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = FUN_144815c48();
  if (cVar3 == '\0') goto LAB_1459353e3;
  bVar2 = true;
  uVar5 = 0;
  if (param_2 == (longlong *)0x0) {
LAB_145935460:
    lVar9 = 0;
  }
  else {
    uVar7 = FUN_140ac4d32();
    lVar8 = (**(code **)(*param_2 + 0x288))(param_2,uVar7);
    if (lVar8 == 0) goto LAB_145935460;
    uVar7 = FUN_140ac4d32();
    lVar9 = FUN_144718840(lVar8,uVar7);
    if (lVar9 == 0 || lVar8 == lVar9) goto LAB_145935460;
    FUN_14485c47a(lVar9 + 8,param_3);
    bVar2 = false;
  }
  bVar4 = *(byte *)(param_1 + 0xc0);
  if (bVar4 == 1) {
    plVar15 = param_2;
    if (*(char *)(param_1 + 0xc1) == '\0') {
      plVar15 = param_3;
    }
    local_d0[0] = 0;
    local_a8 = 0;
    FUN_1456bb102(local_d0,plVar15);
    puVar14 = &local_70;
    FUN_1448729ea(param_1 + 200,puVar14,local_d0);
    uVar5 = FUN_140103fe6(puVar14);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_58) {
        puVar14 = (uint *)CONCAT44(uStack_6c,local_70);
      }
      (*pcVar1)(puVar14);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(CONCAT44(uStack_6c,local_70));
    }
    FUN_144a5ac3a(local_d0);
    bVar4 = *(byte *)(param_1 + 0xc0);
  }
  if ((bVar4 & 1) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x120);
    if (lVar8 == 0) {
      uVar7 = FUN_14016979c();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x120) = lVar8;
    }
    lVar10 = *(longlong *)(param_1 + 0x128);
    if (lVar10 == 0) {
      if ((lVar8 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
        plVar15 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0x128) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar10 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x118));
          *(longlong *)(param_1 + 0x128) = lVar10;
          if (lVar10 != 0) goto LAB_1459354a4;
        }
      }
    }
    else {
LAB_1459354a4:
      cVar3 = FUN_1470dbef6(lVar10);
      if (cVar3 != '\0') {
        local_d0[0] = 0;
        local_a8 = 0;
        FUN_1456bb102(local_d0,param_2);
        local_a0[0] = 0;
        local_78 = 0;
        FUN_144750e81(&local_70,lVar10,local_d0);
        uVar6 = FUN_140103fe6(&local_70);
        puVar14 = &local_70;
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_58) {
            puVar14 = (uint *)CONCAT44(uStack_6c,local_70);
          }
          (*pcVar1)(puVar14);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(CONCAT44(uStack_6c,local_70));
        }
        FUN_144a5ac3a(local_a0);
        FUN_144a5ac3a(local_d0);
        if (uVar5 <= uVar6) {
          puVar14 = &local_70;
          local_58 = 4;
          local_70 = 0x7fffffff;
          if (uVar6 - uVar5 < 0x7fffffff) {
            local_70 = uVar6 - uVar5;
          }
          local_50 = 2;
          local_d0[0] = 0;
          local_a8 = 0;
          FUN_1456bb102(local_d0,param_2);
          local_a0[0] = 0;
          local_78 = 0;
          FUN_140e4698e(lVar10,local_d0,puVar14);
          FUN_144a5ac3a(local_a0);
          FUN_144a5ac3a(local_d0);
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar1 != (code *)0x0) {
            if (0x18 < local_58) {
              puVar14 = (uint *)CONCAT44(uStack_6c,local_70);
            }
            (*pcVar1)(puVar14);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(CONCAT44(uStack_6c,local_70));
          }
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x138);
  if (lVar8 == 0) {
    uVar7 = FUN_140103600();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x138) = lVar8;
  }
  plVar15 = (longlong *)(param_1 + 0x130);
  plVar12 = param_2;
  if (*(longlong *)(param_1 + 0x140) == 0) {
    if ((lVar8 != 0) && (*plVar15 != 0)) {
      plVar12 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar12 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
        plVar12 = (longlong *)FUN_144aff482(uVar7,plVar15);
        *(longlong **)(param_1 + 0x140) = plVar12;
        if (param_2 != (longlong *)0x0) goto joined_r0x000145935698;
      }
    }
  }
  else {
joined_r0x000145935698:
    if (plVar12 != (longlong *)0x0) {
      uVar7 = FUN_14119f41e();
      lVar8 = FUN_144718840(param_2,uVar7);
      if (lVar8 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x138);
        if (lVar10 == 0) {
          uVar7 = FUN_140103600();
          lVar10 = FUN_14477b664(uVar7);
          *(longlong *)(param_1 + 0x138) = lVar10;
        }
        lVar11 = *(longlong *)(param_1 + 0x140);
        if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*plVar15 != 0)) {
          plVar12 = *(longlong **)(lVar10 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
            lVar11 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar11 = FUN_144aff482(uVar7,plVar15);
          }
          *(longlong *)(param_1 + 0x140) = lVar11;
        }
        FUN_1488c69ac(local_d0,lVar8,lVar11,0);
        if ((char)local_a8 == '\x01') {
          FUN_1488c633e(lVar8,local_d0);
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x150);
  if (lVar8 == 0) {
    uVar7 = FUN_14010363a();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x150) = lVar8;
  }
  plVar15 = (longlong *)(param_1 + 0x148);
  plVar12 = param_2;
  if (*(longlong *)(param_1 + 0x158) == 0) {
    if ((lVar8 != 0) && (*plVar15 != 0)) {
      plVar12 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar12 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
        plVar12 = (longlong *)FUN_144aff482(uVar7,plVar15);
        *(longlong **)(param_1 + 0x158) = plVar12;
        if (param_2 != (longlong *)0x0) goto joined_r0x000145935706;
      }
    }
  }
  else {
joined_r0x000145935706:
    if (plVar12 != (longlong *)0x0) {
      uVar7 = FUN_14119f41e();
      lVar8 = FUN_144718840(param_2,uVar7);
      if (lVar8 != 0) {
        if (param_3 == (longlong *)0x0) {
          lVar10 = 0;
        }
        else {
          uVar7 = FUN_14119f41e();
          lVar10 = FUN_144718840(param_3,uVar7);
        }
        if (lVar10 == 0) {
          lVar10 = lVar8;
        }
        lVar11 = *(longlong *)(param_1 + 0x150);
        if (lVar11 == 0) {
          uVar7 = FUN_14010363a();
          lVar11 = FUN_14477b664(uVar7);
          *(longlong *)(param_1 + 0x150) = lVar11;
        }
        lVar13 = *(longlong *)(param_1 + 0x158);
        if (((lVar13 == 0) && (lVar13 = 0, lVar11 != 0)) && (*plVar15 != 0)) {
          plVar12 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar12 + 0x108))(), cVar3 == '\0')) {
            lVar13 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar13 = FUN_144aff482(uVar7,plVar15);
          }
          *(longlong *)(param_1 + 0x158) = lVar13;
        }
        FUN_1488d87b3(lVar13,lVar8,lVar10,0);
      }
    }
  }
  if (!bVar2) {
    *(undefined8 *)(lVar9 + 8) = 0;
  }
LAB_1459353e3:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145935ad6 FUN_145935ad6 body=242 status=ok
// SIG undefined FUN_145935ad6(void)

void FUN_145935ad6(undefined8 param_1,longlong param_2)

{
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
  FUN_145935bca(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145935bca FUN_145935bca body=4 status=ok
// SIG undefined FUN_145935bca(void)

void FUN_145935bca(longlong param_1)

{
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return;
}



// FUNCTION 145935bce FUN_145935bce body=64 status=ok
// SIG undefined FUN_145935bce(void)

longlong FUN_145935bce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145935cf4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x160 + *param_1;
  thunk_FUN_145935c14(lVar2);
  return lVar2;
}



// FUNCTION 145935c0e thunk_FUN_145935c14 body=5 status=ok
// SIG undefined thunk_FUN_145935c14(void)

void * thunk_FUN_145935c14(void *param_1)

{
  memset(param_1,0,0x88);
  *(undefined4 *)((longlong)param_1 + 0x88) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0xf00000d0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x155) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15d) = 0x101;
  return param_1;
}



// FUNCTION 145935c14 FUN_145935c14 body=224 status=ok
// SIG undefined FUN_145935c14(void)

void * FUN_145935c14(void *param_1)

{
  memset(param_1,0,0x88);
  *(undefined4 *)((longlong)param_1 + 0x88) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0xf00000d0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x155) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15d) = 0x101;
  return param_1;
}



// FUNCTION 145935cf4 FUN_145935cf4 body=146 status=ok
// SIG undefined FUN_145935cf4(void)

void FUN_145935cf4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x160,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145935d88 FUN_145935d88 body=9 status=ok
// SIG undefined FUN_145935d88(void)

void FUN_145935d88(longlong param_1)

{
  FUN_145935d92(param_1 + 0x10);
  return;
}



// FUNCTION 145935d92 FUN_145935d92 body=76 status=ok
// SIG undefined FUN_145935d92(void)

void FUN_145935d92(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b42f4c0;
  plVar3 = (longlong *)param_1[0x13];
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
  FUN_140fae274(param_1);
  return;
}



// FUNCTION 145935dde FUN_145935dde body=537 status=ok
// SIG undefined FUN_145935dde(void)

void FUN_145935dde(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_1412bdaf0(param_1 + 0x30);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1400d6ce6(lVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x160);
  if (0 < (int)uVar2) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x158);
      lVar5 = (ulonglong)uVar2 * 0x30;
      puVar1 = (undefined4 *)(lVar3 + -0x30 + lVar5);
      local_78 = *puVar1;
      uStack_74 = puVar1[1];
      uStack_70 = puVar1[2];
      uStack_6c = puVar1[3];
      puVar1 = (undefined4 *)(lVar3 + -0x20 + lVar5);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_58 = *(longlong *)(lVar3 + -0x10 + lVar5);
      *(undefined8 *)(lVar3 + -0x10 + lVar5) = 0;
      local_50 = *(undefined4 *)(lVar3 + -8 + lVar5);
      local_4c = *(undefined4 *)(lVar3 + -4 + lVar5);
      *(undefined8 *)(lVar3 + -8 + lVar5) = 0;
      FUN_145936038(param_1 + 0x158,*(int *)(param_1 + 0x160) + -1);
      FUN_145935ff8(param_1 + 0x158);
      if (CONCAT44(uStack_6c,uStack_70) != 0) {
        local_c8 = CONCAT44(uStack_5c,uStack_60);
        local_c0 = &local_58;
        FUN_14593609c(uVar4,&local_b0,CONCAT44(uStack_74,local_78),CONCAT44(uStack_64,local_68));
        lVar3 = CONCAT44(uStack_6c,uStack_70);
        if ((longlong *)(lVar3 + 0x90) == &local_b0) {
          *(undefined4 *)(lVar3 + 0xc0) = local_80;
          *(undefined4 *)(lVar3 + 0xb0) = local_90;
          *(undefined4 *)(lVar3 + 0xb4) = uStack_8c;
          *(undefined4 *)(lVar3 + 0xb8) = uStack_88;
          *(undefined4 *)(lVar3 + 0xbc) = uStack_84;
          *(undefined4 *)(lVar3 + 0xa0) = local_a0;
          *(undefined4 *)(lVar3 + 0xa4) = uStack_9c;
          *(undefined4 *)(lVar3 + 0xa8) = uStack_98;
          *(undefined4 *)(lVar3 + 0xac) = uStack_94;
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar3 + 0x90) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar3 + 0x90) = local_b0;
          local_b0 = 0;
          *(undefined4 *)(lVar3 + 0x98) = local_a8;
          *(undefined4 *)(lVar3 + 0x9c) = local_a4;
          *(undefined4 *)(lVar3 + 0xa0) = local_a0;
          *(undefined4 *)(lVar3 + 0xa4) = uStack_9c;
          *(undefined4 *)(lVar3 + 0xa8) = uStack_98;
          *(undefined4 *)(lVar3 + 0xac) = uStack_94;
          *(ulonglong *)(lVar3 + 0xb0) = CONCAT44(uStack_8c,local_90);
          *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_84,uStack_88);
          *(undefined4 *)(lVar3 + 0xc0) = local_80;
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(uint *)(param_1 + 0x160);
    } while (0 < (int)uVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145935ff8 FUN_145935ff8 body=63 status=ok
// SIG undefined FUN_145935ff8(void)

void FUN_145935ff8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145936104(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 145936038 FUN_145936038 body=100 status=ok
// SIG undefined FUN_145936038(void)

void FUN_145936038(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14593609c FUN_14593609c body=104 status=ok
// SIG undefined FUN_14593609c(void)

undefined8 *
FUN_14593609c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  FUN_144a787a6(param_2,param_6);
  param_2[2] = DAT_14cbe4638;
  param_2[3] = param_3;
  param_2[4] = param_5;
  param_2[5] = param_4;
  FUN_14136da10(param_1,param_2);
  return param_2;
}



// FUNCTION 145936104 FUN_145936104 body=105 status=ok
// SIG undefined FUN_145936104(void)

ulonglong FUN_145936104(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x30) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 14593616e FUN_14593616e body=739 status=ok
// SIG undefined FUN_14593616e(void)

int FUN_14593616e(longlong *param_1,longlong param_2,char param_3,char param_4,undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_68 [8];
  longlong *local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_3 == '\x01' && param_4 == '\0') && param_2 == 0) {
    lVar4 = param_1[0x1af];
    if ((longlong)(int)lVar4 == 0) {
      iVar8 = 0;
    }
    else {
      lVar5 = param_1[0x1ae];
      lVar7 = 0;
      do {
        local_98 = *(longlong *)(lVar5 + lVar7);
        (*(code *)*param_5)(param_5[1],&local_98);
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar7);
      iVar8 = (int)param_1[0x1af];
    }
  }
  else {
    lVar4 = (**(code **)(*param_1 + 0xb98))(param_1);
    iVar8 = 0;
    if ((lVar4 != 0) && (lVar5 = FUN_144a81888(param_1), iVar8 = 0, lVar5 != 0)) {
      if (((*(byte *)((longlong)param_1 + 0x9c) & 8) == 0) ||
         ((*(byte *)((longlong)param_1 + 0xc61) & 0x10) == 0)) {
        FUN_1446ddc76(local_a0,&DAT_14a492018,1);
        FUN_14276766e(&local_98,local_a0);
        local_58 = L"InvalidBodies";
        local_50 = 0xd;
        FUN_1446e940c(local_a4,&local_58);
        local_58 = L"SkeletalMeshComponentPhysics";
        local_50 = 0x1c;
        FUN_1446e940c(local_a8,&local_58);
        FUN_140208bae(&local_58,local_a8,local_a4,
                      L"Invalid Bodies : Make sure collision is enabled or root bone has body in PhysicsAsset."
                     );
        FUN_1427679d4(&local_98,local_68,&local_58);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
        FUN_1427678c0(&local_98);
      }
      else {
        local_98 = 0;
        uStack_90 = 0;
        iVar8 = (int)param_1[0x1af];
        if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar8);
        }
        if (iVar8 != 0) {
          FUN_14481578e(&local_98);
        }
        uVar6 = FUN_144a81888(param_1);
        local_b8 = param_3;
        FUN_14041817e(lVar4,&local_98,param_2,uVar6);
        lVar5 = local_98;
        lVar7 = (longlong)(int)uStack_90;
        if (lVar7 == 0) {
          iVar8 = 0;
        }
        else {
          lVar9 = 0;
          iVar8 = 0;
          do {
            if (((param_4 == '\0') ||
                (lVar3 = *(longlong *)
                          (*(longlong *)(lVar4 + 0x40) + (longlong)*(int *)(lVar5 + lVar9) * 8),
                lVar3 == 0)) || (*(char *)(lVar3 + 0x30) == '\0')) {
              iVar8 = iVar8 + 1;
              local_58 = *(wchar_t **)(param_1[0x1ae] + (longlong)*(int *)(lVar5 + lVar9) * 8);
              (*(code *)*param_5)(param_5[1],&local_58);
            }
            lVar9 = lVar9 + 4;
          } while (lVar7 * 4 != lVar9);
        }
        if (local_98 != 0) {
          FUN_1400020a8(local_98);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 145936452 FUN_145936452 body=431 status=ok
// SIG undefined FUN_145936452(void)

void FUN_145936452(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  param_1 = param_1 + 8;
  cVar5 = FUN_144729dda(param_1);
  if (cVar5 != '\0') {
    lVar6 = FUN_14479d2ce(param_1);
    lVar6 = *(longlong *)(lVar6 + 0x430);
    if (lVar6 != 0) {
      lVar7 = FUN_140993a2e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        lVar7 = lVar6 + 0x1110;
        if (*(longlong *)(lVar6 + 0x1140) != 0) {
          lVar7 = *(longlong *)(lVar6 + 0x1140);
        }
        if ((longlong)*(int *)(lVar6 + 0x1148) != 0) {
          lVar9 = (longlong)*(int *)(lVar6 + 0x1148) * 0xc;
          do {
            if (*(longlong *)(lVar7 + 4) == DAT_14cb857e8) {
              if (lVar7 != 0) {
                uVar1 = *(undefined4 *)(lVar6 + 0x1fc);
                *(undefined4 *)(lVar6 + 0x1fc) = 0;
                lVar7 = FUN_14479d2ce(param_1);
                lVar9 = FUN_14479d2ce(param_1);
                uVar2 = *(undefined4 *)(lVar9 + 0x568);
                *(undefined4 *)(lVar9 + 0x568) = *(undefined4 *)(lVar7 + 0x568);
                lVar7 = FUN_14479d2ce(param_1);
                lVar8 = FUN_14479d2ce(param_1);
                uVar3 = *(undefined4 *)(lVar8 + 0x56c);
                *(undefined4 *)(lVar8 + 0x56c) = *(undefined4 *)(lVar7 + 0x56c);
                uVar4 = *(undefined4 *)(&DAT_00002bb0 + lVar6);
                FUN_1409df526(lVar6,&DAT_14cb857e8);
                FUN_140d735ec(lVar6);
                *(undefined4 *)(&DAT_00002bb0 + lVar6) = uVar4;
                *(undefined4 *)(lVar8 + 0x56c) = uVar3;
                *(undefined4 *)(lVar9 + 0x568) = uVar2;
                *(undefined4 *)(lVar6 + 0x1fc) = uVar1;
              }
              break;
            }
            lVar7 = lVar7 + 0xc;
            lVar9 = lVar9 + -0xc;
          } while (lVar9 != 0);
        }
        cVar5 = FUN_14136dfde(lVar6 + 0x1b98,&DAT_14cb857e8);
        if (cVar5 != '\0') {
          FUN_1400bc8c2(lVar6 + 0x1b98,&DAT_14cb857e8);
        }
        return;
      }
    }
  }
  return;
}



// FUNCTION 145936602 FUN_145936602 body=175 status=ok
// SIG undefined FUN_145936602(void)

bool FUN_145936602(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459366da FUN_1459366da body=40 status=ok
// SIG undefined FUN_1459366da(void)

undefined8 FUN_1459366da(undefined8 param_1,int param_2)

{
  FUN_145936702();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145936702 FUN_145936702 body=146 status=ok
// SIG undefined FUN_145936702(void)

void FUN_145936702(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a4effd0;
  param_1[0x1f] = &PTR_FUN_14a4f0340;
  lVar1 = 0x768;
  do {
    FUN_1404dbc70((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != 0x548);
  lVar1 = 0x548;
  do {
    FUN_1404dbc70((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != 0x328);
  FUN_1404dbc70(param_1 + 0x65);
  lVar1 = 0x218;
  do {
    FUN_1404dbc70((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
  } while (lVar1 != -8);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 145936794 FUN_145936794 body=25 status=ok
// SIG undefined FUN_145936794(void)

undefined8 FUN_145936794(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1459367ae FUN_1459367ae body=37 status=ok
// SIG undefined FUN_1459367ae(void)

void FUN_1459367ae(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_14583be3e();
  if (cVar1 != '\0') {
    FUN_14583bf3a(param_1);
    return;
  }
  return;
}



// FUNCTION 1459367d4 FUN_1459367d4 body=40 status=ok
// SIG undefined FUN_1459367d4(void)

undefined8 FUN_1459367d4(undefined8 param_1,int param_2)

{
  FUN_1459367fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459367fc FUN_1459367fc body=269 status=ok
// SIG undefined FUN_1459367fc(void)

void FUN_1459367fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc8c980;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_14593690a(param_1);
  return;
}



// FUNCTION 14593690a FUN_14593690a body=293 status=ok
// SIG undefined FUN_14593690a(void)

void FUN_14593690a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc89a00;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_145936a30(param_1 + 0x48);
  FUN_140fed6e2(param_1 + 0x44);
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145936a30 FUN_145936a30 body=111 status=ok
// SIG undefined FUN_145936a30(void)

void FUN_145936a30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145936aa0(param_1);
  return;
}



// FUNCTION 145936aa0 FUN_145936aa0 body=55 status=ok
// SIG undefined FUN_145936aa0(void)

void FUN_145936aa0(longlong *param_1)

{
  FUN_145936ad8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145936ad8 FUN_145936ad8 body=378 status=ok
// SIG undefined FUN_145936ad8(void)

void FUN_145936ad8(longlong *param_1,int param_2)

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
      FUN_149305118((longlong)iStack_54 * 0x48 + *local_70);
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
    FUN_1403af08a(param_1,param_2);
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



// FUNCTION 145936c53 FUN_145936c53 body=7 status=ok
// SIG undefined FUN_145936c53(void)

void FUN_145936c53(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 145936c98 FUN_145936c98 body=241 status=ok
// SIG undefined FUN_145936c98(void)

undefined4 * FUN_145936c98(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145936f6c(local_48);
  FUN_145936df6(param_3,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar2 = FUN_145936d8a(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c866c58 - DAT_14c866c84;
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= DAT_14c866c98)) {
      param_2 = DAT_14c866c98 - 1U & param_2;
      *(uint *)(local_40 + 100) = param_2;
      puVar6 = &DAT_14c866c88;
      if (DAT_14c866c90 != (undefined *)0x0) {
        puVar6 = DAT_14c866c90;
      }
      *(undefined4 *)(local_40 + 0x60) = *(undefined4 *)(puVar6 + (longlong)(int)param_2 * 4);
      *(undefined4 *)(puVar6 + (longlong)(int)param_2 * 4) = local_48[0];
    }
    else {
      DAT_14c866c98 = iVar5;
      FUN_14136f7d6();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145936d8a FUN_145936d8a body=107 status=ok
// SIG undefined FUN_145936d8a(void)

undefined8 FUN_145936d8a(undefined8 param_1,void *param_2,int *param_3)

{
  int iVar1;
  void *_Dst;
  
  if ((DAT_14c866c58 - DAT_14c866c84 != 1) && (iVar1 = FUN_14136f700(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + DAT_14c866c50);
    FUN_1459b5842(_Dst);
    memmove(_Dst,param_2,0x60);
    FUN_146807048(*param_3);
    *param_3 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145936df6 FUN_145936df6 body=144 status=ok
// SIG undefined FUN_145936df6(void)

undefined8 FUN_145936df6(undefined8 *param_1,undefined8 param_2)

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
  FUN_145936e88(param_2,*param_1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145936e88 FUN_145936e88 body=101 status=ok
// SIG undefined FUN_145936e88(void)

undefined8 * FUN_145936e88(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_145936eee(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 145936eee FUN_145936eee body=125 status=ok
// SIG undefined FUN_145936eee(void)

undefined8 * FUN_145936eee(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145937084();
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



// FUNCTION 145936f6c FUN_145936f6c body=279 status=ok
// SIG undefined FUN_145936f6c(void)

int * FUN_145936f6c(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c866c80;
  iVar3 = DAT_14c866c58;
  if (DAT_14c866c84 == 0) {
    iVar2 = DAT_14c866c58 + 1;
    bVar7 = DAT_14c866c5c == DAT_14c866c58;
    DAT_14c866c58 = iVar2;
    if (bVar7) {
      FUN_1406a7630(&DAT_14c866c50,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14c866c60,1);
    puVar4 = DAT_14c866c70;
    if (DAT_14c866c70 == (undefined *)0x0) {
      puVar4 = &DAT_14c866c60;
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
    lVar6 = (longlong)DAT_14c866c80;
    DAT_14c866c80 = *(int *)(DAT_14c866c50 + 4 + lVar6 * 0x68);
    DAT_14c866c84 = DAT_14c866c84 + -1;
    if (DAT_14c866c84 != 0) {
      *(undefined4 *)(DAT_14c866c50 + (longlong)DAT_14c866c80 * 0x68) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14c866c60;
  if (DAT_14c866c70 != (undefined *)0x0) {
    puVar4 = DAT_14c866c70;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x68 + DAT_14c866c50;
  return param_1;
}



// FUNCTION 145937084 FUN_145937084 body=464 status=ok
// SIG undefined FUN_145937084(void)

longlong * FUN_145937084(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar7 = 0;
    local_58 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[5];
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = param_1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar5, local_58 != plVar1)) {
      do {
        local_70 = uVar5;
        lVar2 = *local_88;
        if (*(longlong *)(lVar2 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x28) != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (((local_70._4_4_ != iVar7) || (local_78 != plVar1)) || (local_88 != param_1));
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
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar2 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)lVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
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
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145937256 FUN_145937256 body=25 status=ok
// SIG undefined FUN_145937256(void)

undefined8 FUN_145937256(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145937270 FUN_145937270 body=118 status=ok
// SIG undefined FUN_145937270(void)

void FUN_145937270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1447210f0(param_2);
    lVar1 = FUN_141164a58(param_1);
    if (lVar3 == lVar1) {
      lVar3 = FUN_1401b2ade(param_2);
      uVar4 = 0xffffffff;
      if (lVar3 != 0) {
        lVar3 = FUN_144a7ba4c(lVar3);
        if (lVar3 != 0) {
          uVar4 = *(undefined4 *)(lVar3 + 0xe0);
        }
      }
      cVar2 = FUN_1459372e6(param_1,uVar4);
      if (cVar2 != '\0') {
        FUN_14047a6d2(param_1,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1459372e6 FUN_1459372e6 body=82 status=ok
// SIG undefined FUN_1459372e6(void)

undefined8 FUN_1459372e6(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar1 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x68);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        bVar4 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0xc) == param_2;
        uVar2 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),bVar4);
        if (bVar4) {
          return uVar2;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 145937338 FUN_145937338 body=117 status=ok
// SIG undefined FUN_145937338(void)

ulonglong FUN_145937338(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  cVar1 = FUN_141370352();
  if (cVar1 == '\0') {
    uVar3 = (ulonglong)local_19;
  }
  else {
    if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    uVar3 = FUN_14137049e(param_1,param_2,uVar2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459373ae FUN_1459373ae body=227 status=ok
// SIG undefined FUN_1459373ae(void)

void FUN_1459373ae(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14c979c68 = 1;
  uVar3 = FUN_1459374a4();
  local_40 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_FUN_149efd610;
  puVar4[2] = uVar3;
  local_38 = puVar4;
  FUN_145937544(local_30,&local_40);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    puVar4 = local_38;
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar4 = local_38;
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        puVar4 = local_38;
      }
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


