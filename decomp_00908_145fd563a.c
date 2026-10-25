// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145fd563a FUN_145fd563a body=133 status=ok
// SIG undefined FUN_145fd563a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd563a(void)

{
  _DAT_14ca10d48 = L"BASE";
  DAT_14ca10d72 = 4;
  FUN_145fd56c0();
  _DAT_14ca10d58 = DAT_14ca10cf0;
  _DAT_14ca10d50 = &DAT_14ca10d78;
  _DAT_14ca10d60 = &LAB_14682652b;
  DAT_14ca10cf0 = &DAT_14ca10d48;
  DAT_14ca10d45 = DAT_14ca10d45 + '\x01';
  _DAT_14ca10d68 = 0x100000000;
  if (DAT_14ca10ddc != '\0') {
    DAT_14ca10d46 = DAT_14ca10d46 + '\x01';
  }
  return;
}



// FUNCTION 145fd56c0 FUN_145fd56c0 body=205 status=ok
// SIG undefined FUN_145fd56c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd56c0(void)

{
  if ((DAT_14ca10ddf & 2) == 0) {
    DAT_14ca10ddf = DAT_14ca10ddf | 2;
    _DAT_14ca10d80 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca10d98 = FUN_146826540;
    _DAT_14ca10da0 = FUN_146825d77;
    _DAT_14ca10da8 = FUN_146825fd6;
    _DAT_14ca10db0 = FUN_1407e02ea;
    _DAT_14ca10db8 = FUN_146826273;
    _DAT_14ca10d90 = FUN_14724cc94;
    _DAT_14ca10dd0 = 0xffffffff00000110;
    _DAT_14ca10dd8 = 8;
    DAT_14ca10ddc = 0;
    _DAT_14ca10dc0 = &LAB_14724ccd8;
    FUN_145fd578e();
    FUN_1407e00cc(&DAT_14ca10d78);
    return;
  }
  return;
}



// FUNCTION 145fd578e FUN_145fd578e body=225 status=ok
// SIG undefined FUN_145fd578e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd578e(void)

{
  _DAT_14ca10de0 = L"BASE";
  DAT_14ca10e0a = 4;
  _DAT_14ca10de8 = FUN_1411cad6c();
  _DAT_14ca10df0 = DAT_14ca10d88;
  _DAT_14ca10df8 = &LAB_14682652b;
  DAT_14ca10d88 = &DAT_14ca10de0;
  DAT_14ca10ddd = DAT_14ca10ddd + '\x01';
  _DAT_14ca10e00 = &DAT_100000108;
  if (*(char *)(_DAT_14ca10de8 + 100) != '\0') {
    DAT_14ca10dde = DAT_14ca10dde + '\x01';
  }
  _DAT_14ca10e10 = L"BASE";
  DAT_14ca10e3a = 4;
  _DAT_14ca10e18 = FUN_141092e92();
  _DAT_14ca10e20 = DAT_14ca10d88;
  _DAT_14ca10e28 = &LAB_14682652b;
  DAT_14ca10d88 = &DAT_14ca10e10;
  DAT_14ca10ddd = DAT_14ca10ddd + '\x01';
  _DAT_14ca10e30 = 0x100000000;
  if (*(char *)(_DAT_14ca10e18 + 100) != '\0') {
    DAT_14ca10dde = DAT_14ca10dde + '\x01';
  }
  return;
}



// FUNCTION 145fd5870 FUN_145fd5870 body=111 status=ok
// SIG undefined FUN_145fd5870(void)

void FUN_145fd5870(LPCRITICAL_SECTION param_1)

{
  *(undefined4 *)&param_1[5].SpinCount = 0;
  if (param_1[5].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_145fd58e0(param_1 + 4);
  DeleteCriticalSection(param_1 + 3);
  *(undefined4 *)&param_1[2].SpinCount = 0;
  if (param_1[2].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_145fd5916(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x000145fd58ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 145fd58e0 FUN_145fd58e0 body=53 status=ok
// SIG undefined FUN_145fd58e0(void)

void FUN_145fd58e0(longlong *param_1)

{
  FUN_145fd5ab0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fd5916 FUN_145fd5916 body=53 status=ok
// SIG undefined FUN_145fd5916(void)

void FUN_145fd5916(longlong *param_1)

{
  FUN_145fd594c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fd594c FUN_145fd594c body=354 status=ok
// SIG undefined FUN_145fd594c(void)

void FUN_145fd594c(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
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
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd5ab0 FUN_145fd5ab0 body=356 status=ok
// SIG undefined FUN_145fd5ab0(void)

void FUN_145fd5ab0(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
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
    FUN_144727cd0(param_1,0);
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



// FUNCTION 145fd5c22 FUN_145fd5c22 body=113 status=ok
// SIG undefined FUN_145fd5c22(void)

void FUN_145fd5c22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_147e7377a(*(longlong *)(param_1 + 0xa0) + 0x10);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa8) = 0;
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
  FUN_145fd5c94(param_1 + 0x50);
  return;
}



// FUNCTION 145fd5c94 FUN_145fd5c94 body=75 status=ok
// SIG undefined FUN_145fd5c94(void)

void FUN_145fd5c94(longlong param_1)

{
  if ((0x1f < *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) == 0x20)) {
    FUN_147e8343e(param_1);
    FUN_145cdf5d4(param_1,0x20);
    return;
  }
  FUN_145cdf5d4(param_1,0x20);
  *(undefined4 *)(param_1 + 0x48) = 0x20;
  FUN_1415aef4a(param_1);
  return;
}



// FUNCTION 145fd5cea FUN_145fd5cea body=439 status=ok
// SIG undefined FUN_145fd5cea(void)

undefined8 * FUN_145fd5cea(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406078b6();
  param_1[0x1f] = &PTR_LAB_14bbd4740;
  param_1[0x20] = &PTR_LAB_14bbd4770;
  FUN_145fd5ea2(param_1 + 0x21);
  *param_1 = &PTR_FUN_14bb91650;
  param_1[0x1f] = &PTR_FUN_14bb919a0;
  param_1[0x20] = &PTR_FUN_14bb919d0;
  param_1[0x21] = &PTR_FUN_14bb919f0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x200000000;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_14581db40(&local_21);
  puVar1 = param_1 + 0xd;
  *(undefined1 *)(param_1 + 0xd) = local_21;
  FUN_140ff5708(puVar1,2);
  FUN_140ff5708(puVar1,1);
  FUN_140ff5708(puVar1,0x10);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd5ea2 FUN_145fd5ea2 body=14 status=ok
// SIG undefined FUN_145fd5ea2(void)

void FUN_145fd5ea2(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a4df060;
  return;
}



// FUNCTION 145fd5eb0 FUN_145fd5eb0 body=289 status=ok
// SIG undefined FUN_145fd5eb0(void)

undefined * FUN_145fd5eb0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8f88) {
    FUN_144b3d300(&DAT_14c9e8f88);
    if (DAT_14c9e8f88 == -1) {
      FUN_145fd5fd2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"LightmapDensityPass";
      local_78 = L"FLightmapDensityPassUniformParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x26;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e8f08,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ce7080);
      _Init_thread_footer(&DAT_14c9e8f88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e8f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd5fd2 FUN_145fd5fd2 body=226 status=ok
// SIG undefined FUN_145fd5fd2(void)

longlong * FUN_145fd5fd2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
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
  pcVar13 = FUN_1462d579c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd60b6 FUN_145fd60b6 body=138 status=ok
// SIG undefined FUN_145fd60b6(void)

code * FUN_145fd60b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fd61ca;
}



// FUNCTION 145fd6140 FUN_145fd6140 body=138 status=ok
// SIG undefined FUN_145fd6140(void)

undefined1 * FUN_145fd6140(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x27;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471d6f94;
}



// FUNCTION 145fd61ca FUN_145fd61ca body=138 status=ok
// SIG undefined FUN_145fd61ca(void)

code * FUN_145fd61ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexMappedColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d6f0a;
}



// FUNCTION 145fd6254 FUN_145fd6254 body=132 status=ok
// SIG undefined FUN_145fd6254(void)

void FUN_145fd6254(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fd62e4 FUN_145fd62e4 body=454 status=ok
// SIG undefined FUN_145fd62e4(void)

undefined8 * FUN_145fd62e4(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14a1c1600;
  *(undefined4 *)(param_1 + 0x16) = 0xf00000d0;
  param_1[0x17] = "attribute";
  lVar4 = FUN_14016979c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd63bb;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd63bb:
  FUN_1400b22c2(local_58,"Attributes.Definitions");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd64d6 FUN_145fd64d6 body=146 status=ok
// SIG undefined FUN_145fd64d6(void)

code * FUN_145fd64d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415afa1c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EtcParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FEtcParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6dcb0;
  return FUN_147343fce;
}



// FUNCTION 145fd6568 FUN_145fd6568 body=226 status=ok
// SIG undefined FUN_145fd6568(void)

longlong * FUN_145fd6568(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
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
  pcVar13 = FUN_146317b82;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd6650 FUN_145fd6650 body=132 status=ok
// SIG undefined FUN_145fd6650(void)

undefined1 * FUN_145fd6650(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ALPHA_DISTANCE_TABLES";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145fd664c;
}



// FUNCTION 145fd66e0 FUN_145fd66e0 body=177 status=ok
// SIG undefined FUN_145fd66e0(void)

undefined8 * FUN_145fd66e0(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a657260;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeae10) {
    FUN_144b3d300(&DAT_14caeae10);
    if (DAT_14caeae10 == -1) {
      FUN_1415afbc4();
      atexit(FUN_14356d96c);
      _Init_thread_footer(&DAT_14caeae10);
    }
  }
  return param_1;
}



// FUNCTION 145fd679c FUN_145fd679c body=177 status=ok
// SIG undefined FUN_145fd679c(void)

undefined8 * FUN_145fd679c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a675cd0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb2a0) {
    FUN_144b3d300(&DAT_14caeb2a0);
    if (DAT_14caeb2a0 == -1) {
      FUN_1415afcda();
      atexit(FUN_14356def5);
      _Init_thread_footer(&DAT_14caeb2a0);
    }
  }
  return param_1;
}



// FUNCTION 145fd6858 FUN_145fd6858 body=454 status=ok
// SIG undefined FUN_145fd6858(void)

undefined8 * FUN_145fd6858(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ab9bb60;
  *(undefined4 *)(param_1 + 0x16) = 0xbeeebeee;
  param_1[0x17] = "stance_user_data";
  lVar4 = FUN_1410780a4();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd692f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd692f:
  FUN_1400b22c2(local_58,"Stance.StanceUserData");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd6a2a FUN_145fd6a2a body=221 status=ok
// SIG undefined FUN_145fd6a2a(void)

undefined8 * FUN_145fd6a2a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14130c032();
  *param_1 = &PTR_FUN_14abf26c0;
  param_1[5] = &PTR_LAB_14abf29f0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  FUN_1400b22c2(&local_28,"TimeLimit");
  if (param_1 + 6 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_28;
    *(undefined4 *)(param_1 + 7) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_1c;
  }
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40a00000;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0xf;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xc4;
  *(undefined1 *)((longlong)param_1 + 100) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd6b14 FUN_145fd6b14 body=222 status=ok
// SIG undefined FUN_145fd6b14(void)

undefined8 * FUN_145fd6b14(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac10840;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x44800000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x44800000;
  *(undefined4 *)(param_1 + 0x42) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0x41200000;
  param_1[0x43] = &DAT_41200000;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined2 *)((longlong)param_1 + 0x22c) = 0;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xffffffc0 | 0x1e;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x4a) = 3;
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 4;
  *(undefined1 *)((longlong)param_1 + 0x22d) = 1;
  *(uint *)(param_1 + 0x46) = *(uint *)(param_1 + 0x46) & 0xffffffcf | 0x20;
  *(undefined4 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 145fd6bfe FUN_145fd6bfe body=221 status=ok
// SIG undefined FUN_145fd6bfe(void)

undefined8 * FUN_145fd6bfe(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14ac74090;
  param_1[0x72] = &PTR_FUN_14ac746d0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  FUN_141123976(param_1 + 0x77);
  FUN_1411237f4(param_1 + 0xed);
  FUN_1446f470e(&local_20,L"Root",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd6ce8 FUN_145fd6ce8 body=222 status=ok
// SIG undefined FUN_145fd6ce8(void)

undefined8 * FUN_145fd6ce8(undefined8 *param_1)

{
  FUN_145afdeb6();
  *param_1 = &PTR_FUN_14aea7710;
  param_1[5] = &PTR_FUN_14aea79b0;
  param_1[0xc] = 0;
  param_1[0xe] = &PTR_LAB_14aeb5620;
  param_1[0xf] = &LAB_14841be78;
  param_1[10] = &LAB_14841be3a;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14aeb5660;
  param_1[0x17] = &LAB_14841be7c;
  param_1[0x12] = FUN_14841be8e;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3ff00000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x30] = 0x3ff0000000000000;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 145fd6dd2 FUN_145fd6dd2 body=454 status=ok
// SIG undefined FUN_145fd6dd2(void)

undefined8 * FUN_145fd6dd2(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b014b30;
  *(undefined4 *)(param_1 + 0x16) = 0x5f0a36a0;
  param_1[0x17] = "character_sounds";
  lVar4 = FUN_14573fd8c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd6ea9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd6ea9:
  FUN_1400b22c2(local_58,"CharacterSounds.Sounds");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd6fa4 FUN_145fd6fa4 body=454 status=ok
// SIG undefined FUN_145fd6fa4(void)

undefined8 * FUN_145fd6fa4(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b0154a0;
  *(undefined4 *)(param_1 + 0x16) = 0x5f0a36a1;
  param_1[0x17] = "character_sound_tags";
  lVar4 = FUN_1409ff8bc();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd707b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd707b:
  FUN_1400b22c2(local_58,"CharacterSounds.Tags");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd7176 FUN_145fd7176 body=454 status=ok
// SIG undefined FUN_145fd7176(void)

undefined8 * FUN_145fd7176(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1f2000;
  *(undefined4 *)(param_1 + 0x16) = 0xcd445d63;
  param_1[0x17] = "progress_point_pool";
  lVar4 = FUN_145764ed6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd724d;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd724d:
  FUN_1400b22c2(local_58,"GbxProgress.Progress Point Pools");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd7348 FUN_145fd7348 body=454 status=ok
// SIG undefined FUN_145fd7348(void)

undefined8 * FUN_145fd7348(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1fc2b0;
  *(undefined4 *)(param_1 + 0x16) = 0xf130c0b3;
  param_1[0x17] = "rewards";
  lVar4 = FUN_140c52150();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd741f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd741f:
  FUN_1400b22c2(local_58,"GbxRewards.Rewards");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd751a FUN_145fd751a body=454 status=ok
// SIG undefined FUN_145fd751a(void)

undefined8 * FUN_145fd751a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36e540;
  *(undefined4 *)(param_1 + 0x16) = 0xd00dad13;
  param_1[0x17] = "dialognametag";
  lVar4 = FUN_14043db3a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd75f1;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd75f1:
  FUN_1400b22c2(local_58,"GbxDialog.NameTags");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd76ec FUN_145fd76ec body=454 status=ok
// SIG undefined FUN_145fd76ec(void)

undefined8 * FUN_145fd76ec(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b374890;
  *(undefined4 *)(param_1 + 0x16) = 0x19201;
  param_1[0x17] = "progress_graph_group";
  lVar4 = FUN_14034f1a8();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd77c3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd77c3:
  FUN_1400b22c2(local_58,"GbxProgress.Progress Graph Groups");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd78be FUN_145fd78be body=454 status=ok
// SIG undefined FUN_145fd78be(void)

undefined8 * FUN_145fd78be(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b374da0;
  *(undefined4 *)(param_1 + 0x16) = 0x19202;
  param_1[0x17] = "progression";
  lVar4 = FUN_14034f1e2();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd7995;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd7995:
  FUN_1400b22c2(local_58,"GbxProgress.Game Progression");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd7a90 FUN_145fd7a90 body=454 status=ok
// SIG undefined FUN_145fd7a90(void)

undefined8 * FUN_145fd7a90(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3752a0;
  *(undefined4 *)(param_1 + 0x16) = 0x19100;
  param_1[0x17] = "skill";
  lVar4 = FUN_140feeb70();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd7b67;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd7b67:
  FUN_1400b22c2(local_58,"GbxSkills.Skill");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd7c62 FUN_145fd7c62 body=454 status=ok
// SIG undefined FUN_145fd7c62(void)

undefined8 * FUN_145fd7c62(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b375cd0;
  *(undefined4 *)(param_1 + 0x16) = 0x1910e;
  param_1[0x17] = "skill_alias";
  lVar4 = FUN_1411ef8e8();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd7d39;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd7d39:
  FUN_1400b22c2(local_58,"GbxSkills.Alias");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd7e34 FUN_145fd7e34 body=454 status=ok
// SIG undefined FUN_145fd7e34(void)

undefined8 * FUN_145fd7e34(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b376710;
  *(undefined4 *)(param_1 + 0x16) = 0x19111;
  param_1[0x17] = "skill_condition_ref";
  lVar4 = FUN_14155b406();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd7f0b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd7f0b:
  FUN_1400b22c2(local_58,"GbxSkills.Skill Condition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd8006 FUN_145fd8006 body=454 status=ok
// SIG undefined FUN_145fd8006(void)

undefined8 * FUN_145fd8006(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37dad0;
  *(undefined4 *)(param_1 + 0x16) = 0x19101;
  param_1[0x17] = "skill_state";
  lVar4 = FUN_14110242a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd80dd;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd80dd:
  FUN_1400b22c2(local_58,"GbxSkills.Skill State");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd81d8 FUN_145fd81d8 body=454 status=ok
// SIG undefined FUN_145fd81d8(void)

undefined8 * FUN_145fd81d8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b380400;
  *(undefined4 *)(param_1 + 0x16) = 0x9106;
  param_1[0x17] = "se_tick_group";
  lVar4 = FUN_1458c8590();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd82af;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd82af:
  FUN_1400b22c2(local_58,"GbxStatusEffects.Tick Group");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd83aa FUN_145fd83aa body=454 status=ok
// SIG undefined FUN_145fd83aa(void)

undefined8 * FUN_145fd83aa(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b387000;
  *(undefined4 *)(param_1 + 0x16) = 0x1030;
  param_1[0x17] = "itempool";
  lVar4 = FUN_140d2dc4a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd8481;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd8481:
  FUN_1400b22c2(local_58,"Item Pool.Definitions");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd857c FUN_145fd857c body=454 status=ok
// SIG undefined FUN_145fd857c(void)

undefined8 * FUN_145fd857c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3874e0;
  *(undefined4 *)(param_1 + 0x16) = 0x1040;
  param_1[0x17] = "itempoollist";
  lVar4 = FUN_141096302();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd8653;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd8653:
  FUN_1400b22c2(local_58,"Item Pool.Lists");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd874e FUN_145fd874e body=454 status=ok
// SIG undefined FUN_145fd874e(void)

undefined8 * FUN_145fd874e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b6b0370;
  *(undefined4 *)(param_1 + 0x16) = 0x10019100;
  param_1[0x17] = "skill_token_stack";
  lVar4 = FUN_1406eea5e();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd8825;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd8825:
  FUN_1400b22c2(local_58,"GbxSkills.Skill Token Stack");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd8920 FUN_145fd8920 body=454 status=ok
// SIG undefined FUN_145fd8920(void)

undefined8 * FUN_145fd8920(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b748730;
  *(undefined4 *)(param_1 + 0x16) = 0x266d2c36;
  param_1[0x17] = "oak_echo_log_def";
  lVar4 = FUN_140b7bb2c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd89f7;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd89f7:
  FUN_1400b22c2(local_58,"Echo Log.Log Definition");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd8af2 FUN_145fd8af2 body=454 status=ok
// SIG undefined FUN_145fd8af2(void)

undefined8 * FUN_145fd8af2(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b939f30;
  *(undefined4 *)(param_1 + 0x16) = 0x7ae04d35;
  param_1[0x17] = "vault_cards";
  lVar4 = FUN_141218768();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd8bc9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd8bc9:
  FUN_1400b22c2(local_58,"Vault Cards");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd8cc2 FUN_145fd8cc2 body=225 status=ok
// SIG undefined FUN_145fd8cc2(void)

undefined8 * FUN_145fd8cc2(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc53600;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"ShaderType");
  *param_1 = &PTR_FUN_14bc54c70;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"TwoSided");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"TwoSidedTransmission");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"OpacityMaskClipValue");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"IsAShaderFunction");
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14020fad6(param_1 + 0x16,L"ScreenSpaceReflections");
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_14020fad6(param_1 + 0x18,L"BlendMode");
  return param_1;
}



// FUNCTION 145fd8da4 FUN_145fd8da4 body=24 status=ok
// SIG undefined FUN_145fd8da4(void)

void FUN_145fd8da4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145fd8db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145fd8dbc FUN_145fd8dbc body=38 status=ok
// SIG undefined FUN_145fd8dbc(void)

undefined8 FUN_145fd8dbc(undefined8 param_1,int param_2)

{
  FUN_145fd8de2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fd8de2 FUN_145fd8de2 body=439 status=ok
// SIG undefined FUN_145fd8de2(void)

void FUN_145fd8de2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ed2890;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  plVar3 = (longlong *)param_1[0x17];
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
  plVar3 = (longlong *)param_1[0x15];
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
  plVar3 = (longlong *)param_1[0x11];
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
  plVar3 = (longlong *)param_1[0xf];
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
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145fd8f9a(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 145fd8f9a FUN_145fd8f9a body=53 status=ok
// SIG undefined FUN_145fd8f9a(void)

void FUN_145fd8f9a(longlong *param_1)

{
  FUN_145fd8fd0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fd8fd0 FUN_145fd8fd0 body=378 status=ok
// SIG undefined FUN_145fd8fd0(void)

void FUN_145fd8fd0(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
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



// FUNCTION 145fd914c FUN_145fd914c body=388 status=ok
// SIG undefined FUN_145fd914c(void)

undefined4 * FUN_145fd914c(longlong param_1,undefined4 *param_2,longlong *param_3)

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
  FUN_145fd93a4(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = ((ulonglong *)*param_3)[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = uVar6;
  local_40[2] = *puVar1;
  local_40[3] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,uVar5 >> 0x10 ^ uVar5);
  cVar3 = FUN_145fd92d2(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_145fd9704(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd92d2 FUN_145fd92d2 body=209 status=ok
// SIG undefined FUN_145fd92d2(void)

undefined8 FUN_145fd92d2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      while( true ) {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar12 * 0x28);
        if ((*plVar11 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar12 * 0x28) == param_3[1])) break;
        iVar12 = (int)plVar11[4];
        if (iVar12 == -1) {
          return 0;
        }
      }
      plVar3 = (longlong *)plVar11[3];
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
      lVar8 = *param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      lVar9 = param_3[1];
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
      lVar10 = param_3[3];
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
      *(int *)(plVar11 + 2) = (int)param_3[2];
      *(undefined4 *)((longlong)plVar11 + 0x14) = uVar6;
      *(int *)(plVar11 + 3) = (int)lVar10;
      *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar7;
      *(int *)plVar11 = (int)lVar8;
      *(undefined4 *)((longlong)plVar11 + 4) = uVar4;
      *(int *)(plVar11 + 1) = (int)lVar9;
      *(undefined4 *)((longlong)plVar11 + 0xc) = uVar5;
      FUN_1457fdd04(param_1,*param_4);
      *param_4 = iVar12;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145fd93a4 FUN_145fd93a4 body=227 status=ok
// SIG undefined FUN_145fd93a4(void)

int * FUN_145fd93a4(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145fd9488 FUN_145fd9488 body=510 status=ok
// SIG undefined FUN_145fd9488(void)

longlong * FUN_145fd9488(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 0x50);
  if ((iVar1 < 1) || (DAT_14c872bd8 != '\0')) goto LAB_145fd9597;
  local_58 = 0;
  uStack_50 = 0;
  FUN_145fd968e(param_2,param_1 + 2);
  if (0 < (int)param_1[3]) {
    lVar3 = FUN_144a772c4();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) != lVar3 + 0x30)) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar1) {
        FUN_145fd96a4(param_1,iVar1);
      }
      iVar6 = 0;
      do {
        lVar3 = FUN_14090ceee(param_2,0,0);
        if ((longlong)(int)param_1[3] != 0) {
          lVar4 = param_1[2];
          lVar5 = (longlong)(int)param_1[3] << 4;
          do {
            thunk_FUN_1415b0836(lVar3,lVar4,param_3,iVar6);
            lVar4 = lVar4 + 0x10;
            lVar5 = lVar5 + -0x10;
          } while (lVar5 != 0);
        }
        lVar4 = param_1[1];
        uVar2 = (int)lVar4 + 1;
        *(uint *)(param_1 + 1) = uVar2;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar2) {
          FUN_1457d5db8(param_1);
        }
        *(longlong *)(*param_1 + (longlong)(int)lVar4 * 8) = lVar3;
        if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar3);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar1);
    }
    else {
      *(undefined1 *)(param_1 + 4) = 1;
      if (param_2 == 0) {
LAB_145fd9614:
        param_2 = 0;
      }
      else {
        lVar3 = FUN_144a772c4();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_145fd9614;
      }
      if ((longlong)(int)param_1[3] != 0) {
        lVar3 = param_1[2];
        lVar4 = (longlong)(int)param_1[3] << 4;
        do {
          thunk_FUN_1415b0836(param_2,lVar3,param_3,0);
          lVar3 = lVar3 + 0x10;
          lVar4 = lVar4 + -0x10;
        } while (lVar4 != 0);
      }
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1457d5db8(param_1,iVar1);
      }
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_145fd9597:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd9688 thunk_FUN_1415b0836 body=5 status=ok
// SIG undefined thunk_FUN_1415b0836(void)

void thunk_FUN_1415b0836(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_e8 [32];
  code **ppcStack_c8;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  uint uStack_80;
  uint uStack_7c;
  longlong *plStack_78;
  longlong alStack_68 [5];
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != 0) {
    FUN_1400337aa(param_3);
  }
  plVar15 = param_1 + 0x3e;
  iVar8 = (int)param_1[0x3f];
  lVar20 = (longlong)iVar8;
  if (0 < lVar20) {
    puVar12 = (uint *)*plVar15;
    lVar19 = lVar20;
    do {
      if (((*param_2 == *(longlong *)puVar12) && (puVar12[3] == *(uint *)((longlong)param_2 + 0xc)))
         && ((char)puVar12[2] == (char)param_2[1])) {
        if (puVar12 != (uint *)0x0) {
          if ((*(longlong *)(puVar12 + 4) != param_3) || (puVar12[6] != param_4))
          goto LAB_1415b090b;
          goto LAB_1415b0bd5;
        }
        break;
      }
      puVar12 = puVar12 + 0xc;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  *(uint *)(param_1 + 0x3f) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1fc) < iVar8 + 1U) {
    FUN_1463eac36(plVar15,iVar8);
  }
  lVar19 = *plVar15;
  lVar20 = lVar20 * 0x30;
  puVar12 = (uint *)(lVar19 + lVar20);
  *(undefined8 *)(lVar19 + lVar20) = 0;
  *(undefined1 *)(lVar19 + 8 + lVar20) = 2;
  *(undefined4 *)(lVar19 + 0xc + lVar20) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar19 + 0x1c + lVar20);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar4 = param_2[1];
  *(longlong *)(lVar19 + lVar20) = *param_2;
  ((longlong *)(lVar19 + lVar20))[1] = lVar4;
  puVar2 = (undefined8 *)(lVar19 + 0x1c + lVar20);
  *puVar2 = 0;
  puVar2[1] = 0;
LAB_1415b090b:
  if ((param_3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(puVar12 + 4) = param_3;
    puVar12[6] = param_4;
    if (param_3 != 0) goto LAB_1415b092a;
  }
  else {
    FUN_1456cec3c(param_3);
    *(longlong *)(puVar12 + 4) = param_3;
    puVar12[6] = param_4;
LAB_1415b092a:
    FUN_1406555d4(param_3,param_1,1);
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
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1415b0bd5;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_1415b0bd5;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  uStack_98 = 0;
  uStack_90 = 0;
  lVar20 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar20 != 0) && (*(byte *)(lVar20 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar20 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&pcStack_88,L"Renderer",1);
      pcVar6 = pcStack_88;
      uVar13 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,pcVar6);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar20 = param_1[0x49];
  lVar19 = *(longlong *)(puVar12 + 4);
  if (lVar19 == 0) {
LAB_1415b0a0b:
    uStack_a0 = 0;
  }
  else {
    uVar14 = puVar12[6];
    if (((longlong)(int)uVar14 < 0) || (*(int *)(lVar19 + 0x50) <= (int)uVar14)) goto LAB_1415b0a0b;
    uStack_a0 = *(undefined8 *)(*(longlong *)(lVar19 + 0x48) + (longlong)(int)uVar14 * 8);
  }
  uStack_b0 = *puVar12;
  uStack_ac = puVar12[1];
  uStack_a8 = puVar12[2];
  uStack_a4 = puVar12[3];
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar19 + 0xc60);
  uStack_b8 = lVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_1415b0a49;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1415b0a52;
      goto LAB_1415b0b0a;
    }
  }
  else {
LAB_1415b0a49:
    if (iVar8 != 0x10) {
LAB_1415b0b0a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar19 + 0xc60), iVar8 == 2))
        goto LAB_1415b0a52;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_1415b0a52;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1415b0ca2;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1415b0ca2:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
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
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x19);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1415b0d22;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1415b0d22:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9d49d0;
        *(undefined4 *)(puVar18 + 0x15) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)puVar18 + 0xac) = uStack_b8._4_4_;
        *(uint *)(puVar18 + 0x16) = uStack_b0;
        *(uint *)((longlong)puVar18 + 0xb4) = uStack_ac;
        *(uint *)(puVar18 + 0x17) = uStack_a8;
        *(uint *)((longlong)puVar18 + 0xbc) = uStack_a4;
        *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_a0._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          pcStack_88 = (code *)CONCAT71(pcStack_88._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        pcStack_88 = (code *)0x0;
        plStack_78 = (longlong *)FUN_14001cc68(0x28,8);
        *plStack_78 = (longlong)&PTR_LAB_14a9d49b0;
        *(uint *)(plStack_78 + 3) = uStack_a8;
        *(uint *)((longlong)plStack_78 + 0x1c) = uStack_a4;
        *(undefined4 *)(plStack_78 + 4) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)plStack_78 + 0x24) = uStack_a0._4_4_;
        *(undefined4 *)(plStack_78 + 1) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)plStack_78 + 0xc) = uStack_b8._4_4_;
        *(uint *)(plStack_78 + 2) = uStack_b0;
        *(uint *)((longlong)plStack_78 + 0x14) = uStack_ac;
        if (plStack_78 + 1 != (longlong *)0x0) {
          pcStack_88 = FUN_1463eacca;
        }
        ppcStack_c8 = &pcStack_88;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec374);
        if (pcStack_88 != (code *)0x0) {
          plVar15 = plStack_78;
          if (plStack_78 == (longlong *)0x0) {
            plVar15 = alStack_68;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_1415b0bd5;
    }
  }
LAB_1415b0a52:
  pcStack_88 = (code *)(ulonglong)uStack_b0;
  uStack_80 = uStack_ac;
  uStack_7c = uStack_a4;
  plStack_78 = (longlong *)CONCAT71(plStack_78._1_7_,(undefined1)uStack_a8);
  FUN_1408ec8a8(lVar20,&pcStack_88,&uStack_a0);
  FUN_14006fee2(lVar20,&DAT_14ca85100,0);
LAB_1415b0bd5:
  if ((uStack_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fd968e FUN_145fd968e body=21 status=ok
// SIG undefined FUN_145fd968e(void)

void FUN_145fd968e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000145fd96a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1,5,param_2,param_3);
  return;
}



// FUNCTION 145fd96a4 FUN_145fd96a4 body=96 status=ok
// SIG undefined FUN_145fd96a4(void)

void FUN_145fd96a4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145fd9704 FUN_145fd9704 body=529 status=ok
// SIG undefined FUN_145fd9704(void)

void FUN_145fd9704(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
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
        lVar2 = *local_88;
        lVar11 = (longlong)iVar5;
        uVar7 = *(ulonglong *)(lVar2 + lVar11 * 0x28);
        uVar3 = *(ulonglong *)(lVar2 + 8 + lVar11 * 0x28);
        uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar10 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        iVar6 = FUN_144a78877(uVar8 >> 0x10 ^ uVar8,uVar10 >> 0x10 ^ uVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24 + lVar11 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar11 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145fd9922 FUN_145fd9922 body=222 status=ok
// SIG undefined FUN_145fd9922(void)

undefined8 * FUN_145fd9922(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"PathFollowingComponent",1);
  uVar1 = FUN_1459eb90e();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_145ac7a3c(param_1,param_2);
  *param_1 = &PTR_FUN_14abfe830;
  param_1[0x72] = &PTR_FUN_14abff080;
  param_1[0x85] = &PTR_FUN_14abff0e0;
  param_1[0x86] = &PTR_FUN_14abff100;
  param_1[0x87] = &PTR_FUN_14abff150;
  param_1[0x88] = &PTR_FUN_14abff180;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd9a0c FUN_145fd9a0c body=222 status=ok
// SIG undefined FUN_145fd9a0c(void)

undefined8 * FUN_145fd9a0c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"PathFollowingComponent",1);
  uVar1 = FUN_145a75ebc();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_145ac7a3c(param_1,param_2);
  *param_1 = &PTR_FUN_14ac11a90;
  param_1[0x72] = &PTR_FUN_14ac122e0;
  param_1[0x85] = &PTR_FUN_14ac12340;
  param_1[0x86] = &PTR_FUN_14ac12360;
  param_1[0x87] = &PTR_FUN_14ac123b0;
  param_1[0x88] = &PTR_FUN_14ac123e0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd9aec FUN_145fd9aec body=53 status=ok
// SIG undefined FUN_145fd9aec(void)

void FUN_145fd9aec(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1414b2f6c();
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145fd9b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,*(undefined4 *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 145fd9b22 FUN_145fd9b22 body=158 status=ok
// SIG undefined FUN_145fd9b22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd9b22(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"fps_histogram",1);
  FUN_14147d486(&DAT_14cb97a50,local_28,6);
  _DAT_14cb97a50 = &PTR_FUN_14b4f8108;
  FUN_1446ddc76(&local_20,"device_profile",1);
  FUN_145fd9bc2(&DAT_14cb97a50,local_20);
  _DAT_14cb97aa8 = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd9bc2 FUN_145fd9bc2 body=74 status=ok
// SIG undefined FUN_145fd9bc2(void)

void FUN_145fd9bc2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144a13f80(param_1 + 0xb8,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd9c0e FUN_145fd9c0e body=56 status=ok
// SIG undefined FUN_145fd9c0e(void)

void FUN_145fd9c0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_145fd9c46(*(undefined8 *)(param_1 + 0x20));
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  return;
}



// FUNCTION 145fd9c46 FUN_145fd9c46 body=177 status=ok
// SIG undefined FUN_145fd9c46(void)

undefined8 FUN_145fd9c46(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145998a5a();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd9cf8 FUN_145fd9cf8 body=43 status=ok
// SIG undefined FUN_145fd9cf8(void)

undefined8 FUN_145fd9cf8(undefined8 param_1,int param_2)

{
  FUN_145fd9d24();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 145fd9d24 FUN_145fd9d24 body=191 status=ok
// SIG undefined FUN_145fd9d24(void)

void FUN_145fd9d24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c10a0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145fd9de4 FUN_145fd9de4 body=43 status=ok
// SIG undefined FUN_145fd9de4(void)

undefined8 FUN_145fd9de4(undefined8 param_1,int param_2)

{
  FUN_145fd9e10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 145fd9e10 FUN_145fd9e10 body=191 status=ok
// SIG undefined FUN_145fd9e10(void)

void FUN_145fd9e10(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14be88df0;
  plVar3 = (longlong *)param_1[8];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x000145fd9ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145fd9ed0 FUN_145fd9ed0 body=40 status=ok
// SIG undefined FUN_145fd9ed0(void)

undefined8 FUN_145fd9ed0(undefined8 param_1,int param_2)

{
  FUN_145fd9ef8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fd9ef8 FUN_145fd9ef8 body=194 status=ok
// SIG undefined FUN_145fd9ef8(void)

void FUN_145fd9ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14befb900;
  FUN_1447a1747(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145fd9fba FUN_145fd9fba body=37 status=ok
// SIG undefined FUN_145fd9fba(void)

void FUN_145fd9fba(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1d8);
  FUN_145fd9fe0(param_2);
  return;
}



// FUNCTION 145fd9fe0 FUN_145fd9fe0 body=256 status=ok
// SIG undefined FUN_145fd9fe0(void)

undefined8 * FUN_145fd9fe0(undefined8 *param_1)

{
  FUN_140e48d86();
  *param_1 = &PTR_FUN_14b0cf0f0;
  FUN_14044066a(param_1 + 0x10,0x14,7);
  FUN_14044066a(param_1 + 0x17,0x14,7);
  FUN_14044066a(param_1 + 0x1e,0x14,7);
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x29) = 4;
  *(undefined4 *)(param_1 + 0x26) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x2a) = 3;
  *(char *)(param_1 + 0x2b) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x30) = 4;
  *(undefined4 *)(param_1 + 0x2d) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x31) = 3;
  *(char *)(param_1 + 0x32) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x33] = 0;
  *(undefined2 *)(param_1 + 0x37) = 4;
  *(undefined4 *)(param_1 + 0x34) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x38) = 3;
  *(char *)(param_1 + 0x39) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x3a) = 1;
  return param_1;
}



// FUNCTION 145fda0e0 FUN_145fda0e0 body=39 status=ok
// SIG undefined FUN_145fda0e0(void)

void FUN_145fda0e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000145fda103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 145fda108 FUN_145fda108 body=81 status=ok
// SIG undefined FUN_145fda108(void)

void FUN_145fda108(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(int *)(param_1 + 0xe0) != 0) && (*(int *)(param_1 + 0xe4) != 0)) &&
     (*(int *)(param_1 + 0xe0) != DAT_14c948000)) {
    uVar1 = FUN_140059518(param_1 + 0x44);
    FUN_145fda15a(param_1 + 0x58,uVar1,param_1 + 0xe0);
    return;
  }
  return;
}



// FUNCTION 145fda15a FUN_145fda15a body=173 status=ok
// SIG undefined FUN_145fda15a(void)

void FUN_145fda15a(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_145fda1f1;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145fda1f1:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145fda208 FUN_145fda208 body=68 status=ok
// SIG undefined FUN_145fda208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fda208(void)

{
  if (DAT_14cb0ac80 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb0ac78 = 0;
  if (DAT_14cb0ac70 != 0) {
    FUN_1400020a8();
  }
  FUN_145fda24c(&DAT_14cb0ac30);
  return;
}



// FUNCTION 145fda24c FUN_145fda24c body=53 status=ok
// SIG undefined FUN_145fda24c(void)

void FUN_145fda24c(longlong *param_1)

{
  FUN_145fda282();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fda282 FUN_145fda282 body=347 status=ok
// SIG undefined FUN_145fda282(void)

void FUN_145fda282(longlong *param_1)

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
      FUN_147d6931a(*local_68 + (longlong)iStack_4c * 0x60 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
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



// FUNCTION 145fda3de FUN_145fda3de body=84 status=ok
// SIG undefined FUN_145fda3de(void)

void FUN_145fda3de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_145fda434(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fda434 FUN_145fda434 body=91 status=ok
// SIG undefined FUN_145fda434(void)

void FUN_145fda434(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x1c]);
  if (*(char *)(param_2 + 0x2b) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2a]);
    return;
  }
  return;
}



// FUNCTION 145fda490 FUN_145fda490 body=219 status=ok
// SIG undefined FUN_145fda490(void)

void FUN_145fda490(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  FUN_140df9946(param_2,&local_38);
  iVar3 = *(int *)(param_1 + 0x360);
  *(uint *)(param_1 + 0x360) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x364) < iVar3 + 1U) {
    FUN_145fda56c((longlong *)(param_1 + 0x358),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x358);
  *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = local_38;
  *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fda56c FUN_145fda56c body=132 status=ok
// SIG undefined FUN_145fda56c(void)

void FUN_145fda56c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fda5f0 FUN_145fda5f0 body=284 status=ok
// SIG undefined FUN_145fda5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fda5f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85f38) {
    FUN_144b3d300(&DAT_14ca85f38);
    if (DAT_14ca85f38 == -1) {
      FUN_145fda70c();
      FUN_140db5666(&DAT_14ca85e90,0,&DAT_14ca85e28,L"FClearReplacementVS_Bounds",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearVS",0,1,FUN_147415ea4,
                    FUN_147415e60,&LAB_147415e5c,&LAB_147415e58,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca85e90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e1b);
      _Init_thread_footer(&DAT_14ca85f38);
    }
  }
  return &DAT_14ca85e90;
}



// FUNCTION 145fda70c FUN_145fda70c body=313 status=ok
// SIG undefined FUN_145fda70c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fda70c(void)

{
  if ((DAT_14ca85e8f & 2) == 0) {
    DAT_14ca85e8f = DAT_14ca85e8f | 2;
    _DAT_14ca85e30 = L"FClearReplacementVS_Bounds";
    _DAT_14ca85e48 = FUN_146826540;
    _DAT_14ca85e50 = FUN_146825d77;
    _DAT_14ca85e58 = FUN_146825fd6;
    _DAT_14ca85e60 = FUN_1407e02ea;
    _DAT_14ca85e68 = FUN_146826273;
    _DAT_14ca85e40 = FUN_147415e28;
    _DAT_14ca85e80 = 0xffffffff00000100;
    _DAT_14ca85e88 = 8;
    DAT_14ca85e8c = 0;
    _DAT_14ca85e70 = &LAB_147415e54;
    _DAT_14ca92070 = L"DepthParam";
    DAT_14ca9209a = FUN_140850cc5();
    _DAT_14ca92078 = FUN_140ec6960();
    _DAT_14ca92088 = &LAB_14682652b;
    _DAT_14ca92090 = 0x1000000f8;
    _DAT_14ca92098 = 0;
    _DAT_14ca92080 = DAT_14ca85e38;
    DAT_14ca85e38 = &DAT_14ca92070;
    FUN_145fda846();
    FUN_1407e00cc(&DAT_14ca85e28);
    return;
  }
  return;
}



// FUNCTION 145fda846 FUN_145fda846 body=133 status=ok
// SIG undefined FUN_145fda846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fda846(void)

{
  _DAT_14ca920a0 = L"BASE";
  DAT_14ca920ca = 4;
  FUN_145fda8cc();
  _DAT_14ca920b0 = DAT_14ca85e38;
  _DAT_14ca920a8 = &DAT_14ca920d0;
  _DAT_14ca920b8 = &LAB_14682652b;
  DAT_14ca85e38 = &DAT_14ca920a0;
  DAT_14ca85e8d = DAT_14ca85e8d + '\x01';
  _DAT_14ca920c0 = 0x100000000;
  if (DAT_14ca92134 != '\0') {
    DAT_14ca85e8e = DAT_14ca85e8e + '\x01';
  }
  return;
}



// FUNCTION 145fda8cc FUN_145fda8cc body=210 status=ok
// SIG undefined FUN_145fda8cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fda8cc(void)

{
  if ((DAT_14ca92137 & 2) == 0) {
    DAT_14ca92137 = DAT_14ca92137 | 2;
    _DAT_14ca920d8 = L"TClearReplacementBase";
    _DAT_14ca920f0 = FUN_146826540;
    _DAT_14ca920f8 = FUN_146825d77;
    _DAT_14ca92100 = FUN_146825fd6;
    _DAT_14ca92108 = FUN_1407e02ea;
    _DAT_14ca92110 = FUN_146826273;
    _DAT_14ca920e8 = FUN_147425b9e;
    _DAT_14ca92128 = 0xffffffff000000f8;
    _DAT_14ca92130 = 8;
    DAT_14ca92134 = 0;
    _DAT_14ca92118 = &LAB_147425bca;
    FUN_145fda99e();
    FUN_145fdaa18();
    FUN_1407e00cc(&DAT_14ca920d0);
    return;
  }
  return;
}



// FUNCTION 145fda99e FUN_145fda99e body=121 status=ok
// SIG undefined FUN_145fda99e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fda99e(void)

{
  FUN_145fdaa9e();
  _DAT_14ca92138 = L"ClearValueParam";
  DAT_14ca92162 = FUN_140850cc5();
  _DAT_14ca92140 = FUN_140ec6960();
  _DAT_14ca92150 = &LAB_14682652b;
  _DAT_14ca92158 = 0x1000000e0;
  _DAT_14ca92160 = 0;
  _DAT_14ca92148 = DAT_14ca920e0;
  DAT_14ca920e0 = &DAT_14ca92138;
  return;
}



// FUNCTION 145fdaa18 FUN_145fdaa18 body=133 status=ok
// SIG undefined FUN_145fdaa18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fdaa18(void)

{
  _DAT_14ca921c8 = L"BASE";
  DAT_14ca921f2 = 4;
  FUN_140b35ae4();
  _DAT_14ca921d8 = DAT_14ca920e0;
  _DAT_14ca921d0 = &DAT_14ca8c6c8;
  _DAT_14ca921e0 = &LAB_14682652b;
  DAT_14ca920e0 = &DAT_14ca921c8;
  DAT_14ca92135 = DAT_14ca92135 + '\x01';
  _DAT_14ca921e8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca92136 = DAT_14ca92136 + '\x01';
  }
  return;
}



// FUNCTION 145fdaa9e FUN_145fdaa9e body=216 status=ok
// SIG undefined FUN_145fdaa9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fdaa9e(void)

{
  _DAT_14ca92198 = L"MaxBoundsParam";
  DAT_14ca921c2 = FUN_140850cc5();
  _DAT_14ca921a0 = FUN_140ec6960();
  _DAT_14ca921b0 = &LAB_14682652b;
  _DAT_14ca921b8 = 0x1000000ec;
  _DAT_14ca921c0 = 0;
  _DAT_14ca921a8 = DAT_14ca920e0;
  DAT_14ca920e0 = &DAT_14ca92198;
  _DAT_14ca92168 = L"MinBoundsParam";
  DAT_14ca92192 = FUN_140850cc5();
  _DAT_14ca92170 = FUN_140ec6960();
  _DAT_14ca92180 = &LAB_14682652b;
  _DAT_14ca92188 = 0x1000000e6;
  _DAT_14ca92190 = 0;
  _DAT_14ca92178 = DAT_14ca920e0;
  DAT_14ca920e0 = &DAT_14ca92168;
  return;
}



// FUNCTION 145fdab76 FUN_145fdab76 body=43 status=ok
// SIG undefined FUN_145fdab76(void)

undefined8
FUN_145fdab76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140002266(param_1,L"%s %s %d",param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 145fdabb8 FUN_145fdabb8 body=223 status=ok
// SIG undefined FUN_145fdabb8(void)

undefined8 * FUN_145fdabb8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a410b50;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_28,L"ISMPoolComp",1);
  uVar2 = FUN_1458d4146();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdaca4 FUN_145fdaca4 body=223 status=ok
// SIG undefined FUN_145fdaca4(void)

undefined8 * FUN_145fdaca4(undefined8 *param_1)

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
  FUN_145c37414();
  *param_1 = &PTR_FUN_14aa37800;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"Thruster0",1);
  uVar2 = FUN_145991fe4();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdad90 FUN_145fdad90 body=223 status=ok
// SIG undefined FUN_145fdad90(void)

undefined8 * FUN_145fdad90(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14aaf11c0;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"VectorFieldComponent0",1);
  uVar2 = FUN_14595994e();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdae7c FUN_145fdae7c body=458 status=ok
// SIG undefined FUN_145fdae7c(void)

undefined8 * FUN_145fdae7c(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ab804e0;
  *(undefined4 *)(param_1 + 0x16) = 0xbeeebee2;
  lVar4 = FUN_1408fae60();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fdaf45;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fdaf45:
  param_1[0x17] = "navfilteroverrides";
  FUN_1400b22c2(local_58,"AI.NavFilterOverrides");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdb052 FUN_145fdb052 body=223 status=ok
// SIG undefined FUN_145fdb052(void)

undefined8 * FUN_145fdb052(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ab8b730;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"TriggerBox",1);
  uVar2 = FUN_14599351a();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdb132 FUN_145fdb132 body=40 status=ok
// SIG undefined FUN_145fdb132(void)

undefined8 FUN_145fdb132(undefined8 param_1,int param_2)

{
  FUN_145fdb15a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fdb15a FUN_145fdb15a body=195 status=ok
// SIG undefined FUN_145fdb15a(void)

void FUN_145fdb15a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc51a0;
  param_1[5] = &PTR_FUN_14abc5620;
  param_1[6] = &PTR_LAB_14abc5660;
  param_1[0x22] = &PTR_FUN_14abc56b0;
  param_1[0x23] = &PTR_FUN_14abc5700;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145fdb228 FUN_145fdb228 body=223 status=ok
// SIG undefined FUN_145fdb228(void)

undefined8 * FUN_145fdb228(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ad22950;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"CameraComponent",1);
  uVar2 = FUN_1458f1c64();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdb314 FUN_145fdb314 body=223 status=ok
// SIG undefined FUN_145fdb314(void)

undefined8 * FUN_145fdb314(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ad24450;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"CameraSystemComponent",1);
  uVar2 = FUN_1458f1d4e();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdb3fc FUN_145fdb3fc body=227 status=ok
// SIG undefined FUN_145fdb3fc(void)

undefined8 * FUN_145fdb3fc(undefined8 *param_1)

{
  FUN_145a3619c();
  *param_1 = &PTR_FUN_14aeb0d10;
  param_1[5] = &PTR_FUN_14aeb0ff0;
  param_1[7] = &PTR_FUN_14aeb1010;
  param_1[8] = &PTR_FUN_14aeb1050;
  param_1[0x16] = 0;
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
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x18] = &PTR_LAB_14aeb6a30;
  param_1[0x19] = &LAB_14841c71e;
  param_1[0x14] = FUN_146bd3274;
  param_1[0x1e] = 0;
  param_1[0x20] = &PTR_LAB_14aeb57c0;
  param_1[0x21] = &LAB_14841c722;
  param_1[0x1c] = &LAB_14841c726;
  *(undefined2 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  return param_1;
}



// FUNCTION 145fdb4ea FUN_145fdb4ea body=458 status=ok
// SIG undefined FUN_145fdb4ea(void)

undefined8 * FUN_145fdb4ea(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b0a3cd0;
  *(undefined4 *)(param_1 + 0x16) = 0xbeeebee0;
  lVar4 = FUN_1409fd3bc();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fdb5b3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fdb5b3:
  param_1[0x17] = "ainodefollowsettings";
  FUN_1400b22c2(local_58,"AINode.TravelFollowSettings");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdb6c0 FUN_145fdb6c0 body=458 status=ok
// SIG undefined FUN_145fdb6c0(void)

undefined8 * FUN_145fdb6c0(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b0a4110;
  *(undefined4 *)(param_1 + 0x16) = 0xbeeebee1;
  lVar4 = FUN_1409fd3f6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fdb789;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fdb789:
  param_1[0x17] = "ainodeLeadsettings";
  FUN_1400b22c2(local_58,"AINode.TravelLeadSettings");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdb896 FUN_145fdb896 body=458 status=ok
// SIG undefined FUN_145fdb896(void)

undefined8 * FUN_145fdb896(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b0af3e0;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0007;
  lVar4 = FUN_14058f0dc();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fdb95f;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fdb95f:
  param_1[0x17] = "animupdaterateparams";
  FUN_1400b22c2(local_58,"Animation.AnimUpdateRateParams");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdba68 FUN_145fdba68 body=271 status=ok
// SIG undefined FUN_145fdba68(void)

void FUN_145fdba68(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    local_88 = FUN_1449409f6;
    local_80 = 0;
    FUN_145fdbb78(local_98,param_1,&local_88);
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,local_98);
    local_48 = 1;
    local_a8 = 1;
    local_a0 = 0xbf800000;
    FUN_1406f3fee(uVar1,param_1 + 0xc50,&local_88,0x3dcccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(local_98);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdbb78 FUN_145fdbb78 body=428 status=ok
// SIG undefined FUN_145fdbb78(void)

longlong * FUN_145fdbb78(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145fdbc58:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42bb30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145fdbc58;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42bb30;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145fdbd24 FUN_145fdbd24 body=40 status=ok
// SIG undefined FUN_145fdbd24(void)

undefined8 FUN_145fdbd24(undefined8 param_1,int param_2)

{
  FUN_145fdbd4c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fdbd4c FUN_145fdbd4c body=195 status=ok
// SIG undefined FUN_145fdbd4c(void)

void FUN_145fdbd4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5a6d00;
  param_1[5] = &PTR_FUN_14b5a6fa0;
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145fdbe10 FUN_145fdbe10 body=158 status=ok
// SIG undefined FUN_145fdbe10(void)

longlong * FUN_145fdbe10(undefined8 param_1,longlong *param_2)

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
  plVar4 = (longlong *)FUN_145fdbeb1();
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145fdbf44(&local_30,plVar1);
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



// FUNCTION 145fdbeb1 FUN_145fdbeb1 body=147 status=ok
// SIG undefined FUN_145fdbeb1(void)

undefined8 * FUN_145fdbeb1(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b9a04e0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[2] = &PTR_LAB_14b42ca20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  FUN_144a63cba(puVar1 + 8);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[2] = &PTR_FUN_14b9a0500;
  puVar1[0xf] = 0;
  return puVar1;
}



// FUNCTION 145fdbf44 FUN_145fdbf44 body=162 status=ok
// SIG undefined FUN_145fdbf44(void)

void FUN_145fdbf44(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145fdbf83;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145fdbf83;
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
LAB_145fdbf83:
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
                    /* WARNING: Could not recover jumptable at 0x000145fdbfe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145fdbff2 FUN_145fdbff2 body=223 status=ok
// SIG undefined FUN_145fdbff2(void)

undefined8 * FUN_145fdbff2(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ba83980;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"GeometryCacheComponent",1);
  uVar2 = FUN_1458d5f9a();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdc0de FUN_145fdc0de body=223 status=ok
// SIG undefined FUN_145fdc0de(void)

undefined8 * FUN_145fdc0de(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ba8cb20;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"GroomComponent0",1);
  uVar2 = FUN_14586a468();
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdc1be FUN_145fdc1be body=117 status=ok
// SIG undefined FUN_145fdc1be(void)

void FUN_145fdc1be(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,char param_7)

{
  undefined8 unaff_RBX;
  
  if (param_7 != '\0') {
    FUN_1447a1747(*param_2,*(undefined4 *)(param_2 + 1));
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1408be2c4(param_2,0);
    }
  }
  FUN_145fdc234(param_2,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,param_6);
  return;
}



// FUNCTION 145fdc234 FUN_145fdc234 body=588 status=ok
// SIG undefined FUN_145fdc234(void)

void FUN_145fdc234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined2 *_Src;
  undefined2 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined **local_98 [4];
  longlong local_78;
  undefined2 *local_60;
  int local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140056680(local_50,param_3);
  lVar8 = 0;
  FUN_1448097c4(local_50,&DAT_149e01f64,&DAT_149e065c6,0);
  FUN_144a06ecc(&local_60,local_50);
  _Src = local_60;
  puVar1 = &DAT_149dfb77a;
  if ((longlong)local_58 != 0) {
    puVar1 = local_60;
  }
  while( true ) {
    uVar4 = *(ushort *)((longlong)puVar1 + lVar8);
    uVar5 = (ulonglong)uVar4;
    uVar7 = *(ushort *)((longlong)&DAT_149e060b2 + lVar8);
    if (uVar4 != uVar7) break;
    if (uVar4 == 0) goto LAB_145fdc39b;
LAB_145fdc2e3:
    lVar8 = lVar8 + 2;
  }
  if ((uVar7 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar6 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar6]) goto LAB_145fdc2e3;
  }
  if (uVar4 != uVar7) {
    lVar8 = 0;
    goto LAB_145fdc31c;
  }
LAB_145fdc39b:
  FUN_140056680(&local_a8,&DAT_149e060b2);
LAB_145fdc3ac:
  local_b8 = param_5;
  local_b0 = 1;
  FUN_140e435be(local_98,param_1,&local_a8,param_4);
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)FUN_1400dbadc();
  plVar3 = (longlong *)*plVar2;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_140e92164();
    *plVar2 = (longlong)plVar3;
  }
  (**(code **)(*plVar3 + 0x1a8))(plVar3,param_2,local_98);
  local_98[0] = &PTR_FUN_149e13640;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145fdc31c:
  uVar4 = *(ushort *)((longlong)puVar1 + lVar8);
  uVar5 = (ulonglong)uVar4;
  uVar7 = *(ushort *)((longlong)&DAT_149e14148 + lVar8);
  if (uVar4 != uVar7) {
    if ((uVar7 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar6 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar6]) goto LAB_145fdc331;
    }
    if (uVar4 != uVar7) {
      local_a8 = (void *)0x0;
      local_a0 = local_58;
      if (local_58 == 0) {
        local_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_58,0);
        memcpy(local_a8,_Src,(longlong)local_58 * 2);
      }
      goto LAB_145fdc3ac;
    }
    goto LAB_145fdc39b;
  }
  if (uVar4 == 0) goto LAB_145fdc39b;
LAB_145fdc331:
  lVar8 = lVar8 + 2;
  goto LAB_145fdc31c;
}



// FUNCTION 145fdc482 FUN_145fdc482 body=163 status=ok
// SIG undefined FUN_145fdc482(void)

bool FUN_145fdc482(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdc526 FUN_145fdc526 body=188 status=ok
// SIG undefined FUN_145fdc526(void)

void FUN_145fdc526(longlong param_1,longlong param_2,undefined8 param_3,byte *param_4)

{
  undefined2 *puVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      if ((*param_4 & 0xfe) != 2) goto LAB_145fdc5c7;
      *(undefined1 *)(param_1 + 0x29) = 1;
      pcVar2 = "TitleScreen_On";
    }
    else {
      if (2 < (byte)(*param_4 - 6)) goto LAB_145fdc5c7;
      *(undefined1 *)(param_1 + 0x29) = 0;
      pcVar2 = "TitleScreen_Off";
    }
    FUN_1400b22c2(&local_18,pcVar2);
    if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
      puVar1 = local_18;
      if (local_10 == 0) {
        puVar1 = &DAT_149dfb77a;
      }
      (*DAT_14cc2d210)(puVar1);
    }
    if (local_18 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_145fdc5c7:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fdc5e4 FUN_145fdc5e4 body=159 status=ok
// SIG undefined FUN_145fdc5e4(void)

bool FUN_145fdc5e4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdc684 FUN_145fdc684 body=251 status=ok
// SIG undefined FUN_145fdc684(void)

void FUN_145fdc684(void)

{
  undefined2 *puVar1;
  char *pcVar2;
  char in_R9B;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (in_R9B == '\x02') {
    pcVar2 = "FFYL_Stop";
  }
  else {
    pcVar2 = "FFYL_Stop";
    if (in_R9B == '\x03') {
      FUN_1400b22c2(&local_18,"FFYL_Stop");
      if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
        puVar1 = local_18;
        if (local_10 == 0) {
          puVar1 = &DAT_149dfb77a;
        }
        (*DAT_14cc2d210)(puVar1);
      }
      if (local_18 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      pcVar2 = "Respawn_Start";
    }
  }
  FUN_1400b22c2(&local_18,pcVar2);
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d221 == '\x01')) {
    puVar1 = local_18;
    if (local_10 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (*DAT_14cc2d210)(puVar1);
  }
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fdc780 FUN_145fdc780 body=1146 status=ok
// SIG undefined FUN_145fdc780(void)

void FUN_145fdc780(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145fdcbfc(param_2);
  uVar6 = FUN_1409e7438();
  FUN_145fdce4e(uVar6);
  FUN_145fdcd70(uVar6);
  lVar7 = FUN_140313b20();
  lVar8 = *(longlong *)(lVar7 + 0x110);
  if (lVar8 == 0) {
    FUN_140aa6c08(lVar7);
    lVar8 = *(longlong *)(lVar7 + 0x110);
  }
  local_48 = (undefined8 *)FUN_140902e46();
  if ((local_48 != (undefined8 *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_48);
  }
  lVar8 = FUN_140313ab6(lVar8,&local_48);
  *(undefined8 *)((longlong)param_1 + 0x94) = *(undefined8 *)(lVar8 + 0x44);
  uVar2 = *(undefined1 *)(lVar8 + 0x40);
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x91) = uVar2;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_48);
  plVar4 = local_40;
  if ((undefined8 **)(param_1 + 9) != &local_48) {
    param_1[9] = (longlong)local_48;
    local_48 = (undefined8 *)0x0;
    plVar3 = (longlong *)param_1[10];
    if (local_40 != plVar3) {
      local_40 = (longlong *)0x0;
      param_1[10] = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar8 = DAT_14c98e618;
  if (DAT_14c98e618 != 0) {
    local_58 = param_1[9];
    local_50 = param_1[10];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    FUN_1456d4652(lVar8,&local_58,5);
  }
  uVar6 = FUN_1401cb356();
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar5 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e02020;
  uVar9 = FUN_144a3f946();
  puVar5[2] = uVar9;
  *puVar5 = &PTR_FUN_14ae3d710;
  puVar5[3] = 0;
  FUN_14485c47a(puVar5 + 3,param_1);
  puVar5[4] = &LAB_1402d0840;
  local_78 = 0x3dcccccd;
  FUN_1405f67fc(uVar6,&local_48,&local_68,L"UCommonInputSubsystem_Tick");
  if ((undefined8 **)(param_1 + 0xb) != &local_48) {
    param_1[0xb] = (longlong)local_48;
    local_48 = (undefined8 *)0x0;
    plVar4 = (longlong *)param_1[0xc];
    param_1[0xc] = (longlong)local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  FUN_1449db362(&local_68);
  plVar4 = DAT_14cb44978;
  local_48 = (undefined8 *)0x0;
  local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar5 = local_48;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
  *local_48 = &PTR_LAB_149e170a0;
  uVar6 = FUN_144a3f946();
  puVar5[2] = uVar6;
  *puVar5 = &PTR_FUN_14ae3d780;
  puVar5[3] = 0;
  FUN_14485c47a(puVar5 + 3,param_1);
  puVar5[4] = &LAB_148217bb8;
  (**(code **)(*plVar4 + 200))(plVar4,&local_48);
  FUN_1449db362(&local_48);
  FUN_1446ddc76(&local_48,"CommonInput",1);
  puVar5 = local_48;
  uVar6 = FUN_144a52528();
  FUN_1402c9134(uVar6,puVar5,&local_68,1);
  lVar8 = FUN_1409e7438();
  if ((*(char *)(lVar8 + 0xda) == '\x01') && (param_1[4] != 0)) {
    lVar8 = FUN_1400b6e86();
    if (lVar8 != 0) {
      FUN_1446f470e(&local_48,L"BroadcastInputMethodChanged",1);
      FUN_14485c47a((longlong)param_1 + 0x104,param_1);
      *(undefined8 **)((longlong)param_1 + 0x10c) = local_48;
      local_40 = local_48;
      local_48 = *(undefined8 **)((longlong)param_1 + 0x104);
      FUN_1403350f6(lVar8 + 0x180,&local_48);
      FUN_144a7b126(lVar8 + 0x180,&local_68,1);
    }
  }
  lVar8 = FUN_1409e7438();
  lVar8 = *(longlong *)(lVar8 + 0x118);
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  param_1[0x1f] = lVar8;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdcbfc FUN_145fdcbfc body=108 status=ok
// SIG undefined FUN_145fdcbfc(void)

void FUN_145fdcbfc(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1400b6f3c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_14134816c(param_1,&local_18);
  if (lVar1 != 0) {
    FUN_1400b6f3c();
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdcc6a FUN_145fdcc6a body=132 status=ok
// SIG undefined FUN_145fdcc6a(void)

longlong * FUN_145fdcc6a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x148,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14ae3d7f0;
  FUN_145fdccee(plVar3 + 2,param_1);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 145fdccee FUN_145fdccee body=129 status=ok
// SIG undefined FUN_145fdccee(void)

void FUN_145fdccee(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14ae3af30;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  lVar2 = 0x78;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x168);
  *(undefined1 *)((longlong)param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return;
}



// FUNCTION 145fdcd70 FUN_145fdcd70 body=157 status=ok
// SIG undefined FUN_145fdcd70(void)

void FUN_145fdcd70(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = DAT_14c9647bc;
  if (*(char *)(param_1 + 0x109) == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    lVar4 = FUN_145fdce0e(param_1 + 0xe0);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
    if (iVar1 <= iVar3 && lVar4 != 0) {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_1447f71cc(lVar4,0x40000000);
    }
    *(undefined1 *)(param_1 + 0x109) = 1;
  }
  return;
}



// FUNCTION 145fdce0e FUN_145fdce0e body=63 status=ok
// SIG undefined FUN_145fdce0e(void)

longlong FUN_145fdce0e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1458f1f24();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145fdce4e FUN_145fdce4e body=418 status=ok
// SIG undefined FUN_145fdce4e(void)

void FUN_145fdce4e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  iVar3 = DAT_14c9647bc;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x108) != '\0') goto LAB_145fdcf94;
  iVar1 = *(int *)(param_1 + 0xc);
  lVar4 = FUN_145fdcff2(param_1 + 0x38);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x110) = lVar4;
    if (lVar4 != 0) goto LAB_145fdceac;
  }
  else {
    FUN_1456cec3c(lVar4);
    *(longlong *)(param_1 + 0x110) = lVar4;
LAB_145fdceac:
    lVar5 = FUN_1459099b8();
    if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)) &&
       ((iVar1 <= iVar3 && (lVar4 = *(longlong *)(param_1 + 0x110), lVar4 != 0)))) {
      lVar5 = FUN_1459099b8();
      if ((lVar5 == 0) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
           lVar5 + 0x30)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x110);
      }
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_1447f71cc(lVar4,0x40000000);
    }
  }
  lVar5 = FUN_140313b20();
  lVar4 = *(longlong *)(lVar5 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar5);
    lVar4 = *(longlong *)(lVar5 + 0x110);
  }
  local_30 = FUN_140902e46();
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_30);
  }
  lVar4 = FUN_140313ab6(lVar4,&local_30);
  if (lVar4 != 0) {
    FUN_145fdd056(lVar4);
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
LAB_145fdcf94:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdcff2 FUN_145fdcff2 body=100 status=ok
// SIG undefined FUN_145fdcff2(void)

longlong FUN_145fdcff2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1459099b8(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145fdd056 FUN_145fdd056 body=396 status=ok
// SIG undefined FUN_145fdd056(void)

void FUN_145fdd056(longlong param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != *(int *)(param_1 + 0x68)) && (iVar1 != 0)) {
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar3 = puVar4 + (longlong)iVar1 * 5;
    do {
      local_70 = *puVar4;
      local_68 = *(undefined4 *)(puVar4 + 1);
      uStack_64 = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_60 = *(undefined4 *)(puVar4 + 2);
      uStack_5c = *(undefined4 *)((longlong)puVar4 + 0x14);
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar4 + 4);
      lVar5 = (longlong)local_50;
      _Src = (void *)puVar4[3];
      if (lVar5 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar5 * 2);
      }
      lVar5 = FUN_145fdd1e4(&local_70);
      if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar5 != 0) goto LAB_145fdd108;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_145fdd108:
        lVar2 = FUN_145876a42();
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          iVar1 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
            FUN_145fdd248((longlong *)(param_1 + 0x60),iVar1);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8) = lVar5;
          if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar5);
          }
        }
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = puVar4 + 5;
    } while (puVar4 != puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdd1e4 FUN_145fdd1e4 body=100 status=ok
// SIG undefined FUN_145fdd1e4(void)

longlong FUN_145fdd1e4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_145876a42(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 145fdd248 FUN_145fdd248 body=132 status=ok
// SIG undefined FUN_145fdd248(void)

void FUN_145fdd248(longlong param_1,int param_2)

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



// FUNCTION 145fdd2cc FUN_145fdd2cc body=172 status=ok
// SIG undefined FUN_145fdd2cc(void)

void FUN_145fdd2cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b525ec0;
  FUN_145fdd70a();
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145fdd378(param_1 + 0x1b);
  param_1[0x17] = &PTR_FUN_14b525fc0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145fdd3ae(param_1 + 0xb);
  FUN_145fdd3e4(param_1);
  return;
}



// FUNCTION 145fdd378 FUN_145fdd378 body=53 status=ok
// SIG undefined FUN_145fdd378(void)

void FUN_145fdd378(longlong *param_1)

{
  FUN_145fdd5ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fdd3ae FUN_145fdd3ae body=53 status=ok
// SIG undefined FUN_145fdd3ae(void)

void FUN_145fdd3ae(longlong *param_1)

{
  FUN_145fdd454();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fdd3e4 FUN_145fdd3e4 body=111 status=ok
// SIG undefined FUN_145fdd3e4(void)

void FUN_145fdd3e4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b526b20;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fdd454 FUN_145fdd454 body=345 status=ok
// SIG undefined FUN_145fdd454(void)

void FUN_145fdd454(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
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



// FUNCTION 145fdd5ae FUN_145fdd5ae body=346 status=ok
// SIG undefined FUN_145fdd5ae(void)

void FUN_145fdd5ae(longlong *param_1)

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



// FUNCTION 145fdd70a FUN_145fdd70a body=242 status=ok
// SIG undefined FUN_145fdd70a(void)

void FUN_145fdd70a(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145fdd7fe(param_1 + 0x58);
  FUN_1400b22c2(&local_28,&DAT_149e02088);
  if ((longlong *)(param_1 + 0xa8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xa8) = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0xb0) = local_20;
    *(undefined4 *)(param_1 + 0xb4) = local_1c;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_1446dd670(param_1 + 0xc0,0);
  }
  *(undefined1 *)(param_1 + 0xd4) = 0;
  FUN_145fdd83e(param_1 + 0xd8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdd7fe FUN_145fdd7fe body=63 status=ok
// SIG undefined FUN_145fdd7fe(void)

void FUN_145fdd7fe(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145fdd87e(param_1);
    FUN_145fdd454(param_1);
    return;
  }
  FUN_145fdd454(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_148aec86a(param_1);
  return;
}



// FUNCTION 145fdd83e FUN_145fdd83e body=63 status=ok
// SIG undefined FUN_145fdd83e(void)

void FUN_145fdd83e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145fdd9ce(param_1);
    FUN_145fdd5ae(param_1);
    return;
  }
  FUN_145fdd5ae(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_148aece9e(param_1);
  return;
}



// FUNCTION 145fdd87e FUN_145fdd87e body=335 status=ok
// SIG undefined FUN_145fdd87e(void)

void FUN_145fdd87e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fdd9ce FUN_145fdd9ce body=335 status=ok
// SIG undefined FUN_145fdd9ce(void)

void FUN_145fdd9ce(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fddb1e FUN_145fddb1e body=232 status=ok
// SIG undefined FUN_145fddb1e(void)

longlong * FUN_145fddb1e(longlong *param_1)

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
  pcVar12 = FUN_1462b7426;
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



// FUNCTION 145fddc0c FUN_145fddc0c body=232 status=ok
// SIG undefined FUN_145fddc0c(void)

longlong * FUN_145fddc0c(longlong *param_1)

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
  pcVar12 = FUN_1462d6a7a;
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



// FUNCTION 145fddcfa FUN_145fddcfa body=232 status=ok
// SIG undefined FUN_145fddcfa(void)

longlong * FUN_145fddcfa(longlong *param_1)

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
  pcVar12 = FUN_1462f2de4;
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



// FUNCTION 145fddde8 FUN_145fddde8 body=232 status=ok
// SIG undefined FUN_145fddde8(void)

longlong * FUN_145fddde8(longlong *param_1)

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
  pcVar12 = FUN_146318888;
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



// FUNCTION 145fdded6 FUN_145fdded6 body=232 status=ok
// SIG undefined FUN_145fdded6(void)

longlong * FUN_145fdded6(longlong *param_1)

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
  pcVar12 = FUN_14631f5a4;
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



// FUNCTION 145fddfc4 FUN_145fddfc4 body=232 status=ok
// SIG undefined FUN_145fddfc4(void)

longlong * FUN_145fddfc4(longlong *param_1)

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
  pcVar12 = FUN_14631f730;
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



// FUNCTION 145fde0b2 FUN_145fde0b2 body=158 status=ok
// SIG undefined FUN_145fde0b2(void)

bool FUN_145fde0b2(longlong param_1,undefined8 param_2)

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



// FUNCTION 145fde152 FUN_145fde152 body=141 status=ok
// SIG undefined FUN_145fde152(void)

void FUN_145fde152(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  FUN_145fde1e0(DAT_14c98e618);
  lVar3 = *(longlong *)(param_1 + 0xc20);
  uVar5 = (**(code **)**(undefined8 **)(param_1 + 0x1370))();
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x108))(lVar3 + 0x28,uVar5);
  *(undefined8 *)(param_1 + 0x1370) = 0;
  plVar4 = *(longlong **)(param_1 + 0x1378);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1378) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145fde1db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145fde1e0 FUN_145fde1e0 body=172 status=ok
// SIG undefined FUN_145fde1e0(void)

void FUN_145fde1e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_1413f6830();
  *(undefined2 *)(param_1 + 0x4c1) = 0;
  if (((*(longlong *)(param_1 + 0x3b0) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x3b8), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_14581f87a(0,0);
        goto LAB_145fde238;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_14581f87a(*(undefined8 *)(param_1 + 0x3b0),0);
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
LAB_145fde238:
  plVar3 = *(longlong **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145fde288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145fde28c FUN_145fde28c body=40 status=ok
// SIG undefined FUN_145fde28c(void)

undefined8 FUN_145fde28c(undefined8 param_1,int param_2)

{
  FUN_145fde2b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fde2b4 FUN_145fde2b4 body=196 status=ok
// SIG undefined FUN_145fde2b4(void)

void FUN_145fde2b4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14aa38fc0;
  param_1[5] = &PTR_FUN_14aa395a0;
  param_1[6] = &PTR_LAB_14aa395e0;
  lVar1 = 0x358;
  do {
    FUN_1408bc7be(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x318);
  lVar1 = 0x318;
  do {
    FUN_1408bc7be(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x2d8);
  lVar1 = 0x2d8;
  do {
    FUN_1408bc7be(*(undefined8 *)((longlong)param_1 + lVar1),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 8));
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x298);
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 145fde378 FUN_145fde378 body=75 status=ok
// SIG undefined FUN_145fde378(void)

undefined8 * FUN_145fde378(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad88390;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fde3c4(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fde3c4 FUN_145fde3c4 body=53 status=ok
// SIG undefined FUN_145fde3c4(void)

void FUN_145fde3c4(longlong *param_1)

{
  FUN_145fde3fa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fde3fa FUN_145fde3fa body=343 status=ok
// SIG undefined FUN_145fde3fa(void)

void FUN_145fde3fa(longlong *param_1)

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
      FUN_1480b3938(*local_68 + (longlong)iStack_4c * 0x38 + 8);
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



// FUNCTION 145fde552 FUN_145fde552 body=82 status=ok
// SIG undefined FUN_145fde552(void)

void FUN_145fde552(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145fde5a4(puVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 145fde5a4 FUN_145fde5a4 body=154 status=ok
// SIG undefined FUN_145fde5a4(void)

void FUN_145fde5a4(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adbde90;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(bool *)(param_1 + 3) = (*(byte *)(param_2 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(param_2 + 0x48) & 0xfe) == 2) {
    bVar1 = *(byte *)(param_2 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)param_1 + 0x19) = bVar1;
  return;
}



// FUNCTION 145fde63e FUN_145fde63e body=82 status=ok
// SIG undefined FUN_145fde63e(void)

void FUN_145fde63e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145fde690(puVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 145fde690 FUN_145fde690 body=154 status=ok
// SIG undefined FUN_145fde690(void)

void FUN_145fde690(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adbeb70;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(bool *)(param_1 + 3) = (*(byte *)(param_2 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(param_2 + 0x48) & 0xfe) == 2) {
    bVar1 = *(byte *)(param_2 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)param_1 + 0x19) = bVar1;
  return;
}



// FUNCTION 145fde72a FUN_145fde72a body=82 status=ok
// SIG undefined FUN_145fde72a(void)

void FUN_145fde72a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145fde77c(puVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 145fde77c FUN_145fde77c body=154 status=ok
// SIG undefined FUN_145fde77c(void)

void FUN_145fde77c(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adbf1d0;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(bool *)(param_1 + 3) = (*(byte *)(param_2 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(param_2 + 0x48) & 0xfe) == 2) {
    bVar1 = *(byte *)(param_2 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)param_1 + 0x19) = bVar1;
  return;
}



// FUNCTION 145fde816 FUN_145fde816 body=82 status=ok
// SIG undefined FUN_145fde816(void)

void FUN_145fde816(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145fde868(puVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 145fde868 FUN_145fde868 body=154 status=ok
// SIG undefined FUN_145fde868(void)

void FUN_145fde868(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adbfff0;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(bool *)(param_1 + 3) = (*(byte *)(param_2 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(param_2 + 0x48) & 0xfe) == 2) {
    bVar1 = *(byte *)(param_2 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)param_1 + 0x19) = bVar1;
  return;
}



// FUNCTION 145fde902 FUN_145fde902 body=82 status=ok
// SIG undefined FUN_145fde902(void)

void FUN_145fde902(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145fde954(puVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 145fde954 FUN_145fde954 body=154 status=ok
// SIG undefined FUN_145fde954(void)

void FUN_145fde954(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adc0650;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(bool *)(param_1 + 3) = (*(byte *)(param_2 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(param_2 + 0x48) & 0xfe) == 2) {
    bVar1 = *(byte *)(param_2 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)param_1 + 0x19) = bVar1;
  return;
}



// FUNCTION 145fde9ee FUN_145fde9ee body=82 status=ok
// SIG undefined FUN_145fde9ee(void)

void FUN_145fde9ee(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145fdea40(puVar2,param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar1 != puVar2) && (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar1 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140af31ba(param_1);
  return;
}



// FUNCTION 145fdea40 FUN_145fdea40 body=154 status=ok
// SIG undefined FUN_145fdea40(void)

void FUN_145fdea40(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adc0cb0;
  param_1[2] = param_2;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(bool *)(param_1 + 3) = (*(byte *)(param_2 + 0x48) & 0xfd) == 1;
  if ((*(byte *)(param_2 + 0x48) & 0xfe) == 2) {
    bVar1 = *(byte *)(param_2 + 0x30) >> 1 & 1;
  }
  *(byte *)((longlong)param_1 + 0x19) = bVar1;
  return;
}



// FUNCTION 145fdeada FUN_145fdeada body=75 status=ok
// SIG undefined FUN_145fdeada(void)

undefined8 * FUN_145fdeada(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adbb960;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fdeb26(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fdeb26 FUN_145fdeb26 body=53 status=ok
// SIG undefined FUN_145fdeb26(void)

void FUN_145fdeb26(longlong *param_1)

{
  FUN_145fdeb5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fdeb5c FUN_145fdeb5c body=343 status=ok
// SIG undefined FUN_145fdeb5c(void)

void FUN_145fdeb5c(longlong *param_1)

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
      FUN_1481220e6(*local_68 + (longlong)iStack_4c * 0x38 + 8);
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



// FUNCTION 145fdecc0 FUN_145fdecc0 body=224 status=ok
// SIG undefined FUN_145fdecc0(void)

undefined8 * FUN_145fdecc0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14adc2ae0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = FUN_144830b78(param_1 + 0xd,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x11) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 10;
  local_38 = FUN_1446f8646();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar1 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 0xd) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdeda2 FUN_145fdeda2 body=40 status=ok
// SIG undefined FUN_145fdeda2(void)

undefined8 FUN_145fdeda2(undefined8 param_1,int param_2)

{
  FUN_145fdedca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fdedca FUN_145fdedca body=196 status=ok
// SIG undefined FUN_145fdedca(void)

void FUN_145fdedca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b6c0810;
  param_1[5] = &PTR_FUN_14b6c0b10;
  param_1[6] = &PTR_FUN_14b6c0b40;
  plVar2 = (longlong *)param_1[0x2b];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x24];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  return;
}



// FUNCTION 145fdee8e FUN_145fdee8e body=40 status=ok
// SIG undefined FUN_145fdee8e(void)

undefined8 FUN_145fdee8e(undefined8 param_1,int param_2)

{
  FUN_145fdeeb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fdeeb6 FUN_145fdeeb6 body=540 status=ok
// SIG undefined FUN_145fdeeb6(void)

void FUN_145fdeeb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7a9430;
  param_1[0x72] = &PTR_FUN_14b7a9b70;
  param_1[0x73] = &PTR_FUN_14b7a9be0;
  param_1[0x74] = &PTR_FUN_14b7a9c50;
  param_1[0x75] = &PTR_FUN_14b7a9c80;
  param_1[0x76] = &PTR_FUN_14b7a9cb0;
  param_1[0x77] = &PTR_FUN_14b7a9ce0;
  param_1[0x78] = &PTR_FUN_14b7a9d20;
  param_1[0x79] = &PTR_FUN_14b7a9d40;
  param_1[0x7a] = &PTR_FUN_14b7a9d70;
  param_1[0x7b] = &PTR_FUN_14b7a9e40;
  param_1[0x7c] = &PTR_FUN_14b7a9e90;
  param_1[0x7d] = &PTR_FUN_14b7a9f50;
  param_1[0x7e] = &PTR_FUN_14b7a9f70;
  param_1[0x7f] = &PTR_FUN_14b7a9ff0;
  param_1[0x80] = &PTR_FUN_14b7aa010;
  param_1[0x81] = &PTR_FUN_14b7aa020;
  param_1[0x82] = &PTR_FUN_14b7aa060;
  param_1[0x83] = &PTR_FUN_14b7aa0d0;
  param_1[0x84] = &PTR_FUN_14b7aa100;
  param_1[0x85] = &PTR_FUN_14b7aa1a0;
  param_1[0x86] = &PTR_FUN_14b7aa1c0;
  param_1[0x87] = &PTR_FUN_14b7aa1e0;
  param_1[0x2a7] = &PTR_FUN_14b7aa200;
  param_1[0x2a8] = &PTR_FUN_14b7aa240;
  param_1[0x2a9] = &PTR_FUN_14b7aa270;
  param_1[0x2aa] = &PTR_FUN_14b7aa290;
  param_1[0x2ab] = &PTR_FUN_14b7aa2d0;
  param_1[0x2ac] = &PTR_FUN_14b7aa320;
  param_1[0x588] = &PTR_FUN_14b7aa340;
  param_1[0x589] = &PTR_FUN_14b7aa380;
  param_1[0x58a] = &PTR_FUN_14b7aa3a0;
  param_1[0x58b] = &PTR_FUN_14b7aa3f0;
  param_1[0x58c] = &PTR_FUN_14b7aa420;
  param_1[0x58d] = &PTR_FUN_14b7aa440;
  FUN_145fdf0d2(param_1 + 0x5eb,1);
  if (param_1[0x5e4] != 0) {
    FUN_1400020a8();
  }
  FUN_141368c9c(param_1);
  return;
}



// FUNCTION 145fdf0d2 FUN_145fdf0d2 body=128 status=ok
// SIG undefined FUN_145fdf0d2(void)

void FUN_145fdf0d2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145fdf152 FUN_145fdf152 body=388 status=ok
// SIG undefined FUN_145fdf152(void)

void FUN_145fdf152(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = L"ComputeFramework";
  local_70 = 0x10;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
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
  FUN_140056680(&local_38,L"/Plugin/ComputeFramework");
  FUN_141414c4a(&local_38,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  DAT_14cc17420 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *DAT_14cc17420 = &PTR_FUN_14bcdb500;
  DAT_14cc17420[5] = 0;
  *(undefined4 *)(DAT_14cc17420 + 6) = 0;
  DAT_14cc17420[1] = 0;
  DAT_14cc17420[2] = 0;
  *(undefined8 *)((longlong)DAT_14cc17420 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)DAT_14cc17420 + 0x3c) = 0;
  DAT_14cc17420[9] = 0;
  *(undefined4 *)(DAT_14cc17420 + 10) = 0;
  FUN_145fdf2d7(DAT_14cc17420);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdf2d7 FUN_145fdf2d7 body=62 status=ok
// SIG undefined FUN_145fdf2d7(void)

void FUN_145fdf2d7(undefined8 param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_145fdf316(&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdf316 FUN_145fdf316 body=116 status=ok
// SIG undefined FUN_145fdf316(void)

void FUN_145fdf316(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = DAT_14c9c2258;
  lVar3 = (longlong)(int)DAT_14c9c2258;
  if (lVar3 != 0) {
    uVar2 = 0;
    do {
      if (*(longlong *)(DAT_14c9c2250 + uVar2) == *param_1) {
        if ((int)(~uVar2 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar2 = uVar2 + 8;
    } while (lVar3 * 8 - uVar2 != 0);
  }
  DAT_14c9c2258 = DAT_14c9c2258 + 1;
  if (DAT_14c9c225c < DAT_14c9c2258) {
    FUN_145fdf38a(iVar1);
  }
  *(longlong *)(DAT_14c9c2250 + lVar3 * 8) = *param_1;
  return;
}



// FUNCTION 145fdf38a FUN_145fdf38a body=140 status=ok
// SIG undefined FUN_145fdf38a(void)

void FUN_145fdf38a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9c2258;
  if (param_1 <= (int)DAT_14c9c2258) {
    if (DAT_14c9c225c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9c2258) {
        uVar2 = DAT_14c9c2258;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14c9c2258 + ((ulonglong)((longlong)(int)DAT_14c9c2258 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14c9c225c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9c2250,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fdf416 FUN_145fdf416 body=243 status=ok
// SIG undefined FUN_145fdf416(void)

undefined4 * FUN_145fdf416(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fdf882(local_40);
  FUN_145fdf50a(param_2,local_38);
  local_38[0x16] = 0xffffffff;
  local_44 = local_40[0];
  uVar5 = *local_38;
  cVar3 = FUN_145fdf7be(uVar5,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb988c0 - DAT_14cb988ec;
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14cb98900)) {
      uVar5 = DAT_14cb98900 - 1U & uVar5;
      local_38[0x17] = uVar5;
      puVar8 = &DAT_14cb988f0;
      if (DAT_14cb988f8 != (undefined *)0x0) {
        puVar8 = DAT_14cb988f8;
      }
      local_38[0x16] = *(uint *)(puVar8 + (longlong)(int)uVar5 * 4);
      *(undefined4 *)(puVar8 + (longlong)(int)uVar5 * 4) = local_44;
    }
    else {
      DAT_14cb98900 = iVar7;
      FUN_145fdfb74();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdf50a FUN_145fdf50a body=149 status=ok
// SIG undefined FUN_145fdf50a(void)

undefined4 * FUN_145fdf50a(undefined8 *param_1,undefined4 *param_2)

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
  *param_2 = *(undefined4 *)*param_1;
  FUN_145fdf5d6(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145fdf5a0(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdf5a0 FUN_145fdf5a0 body=53 status=ok
// SIG undefined FUN_145fdf5a0(void)

void FUN_145fdf5a0(longlong *param_1)

{
  FUN_145fdf654();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fdf5d6 FUN_145fdf5d6 body=125 status=ok
// SIG undefined FUN_145fdf5d6(void)

undefined8 * FUN_145fdf5d6(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145fdf998();
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



// FUNCTION 145fdf654 FUN_145fdf654 body=360 status=ok
// SIG undefined FUN_145fdf654(void)

void FUN_145fdf654(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fdf7be FUN_145fdf7be body=196 status=ok
// SIG undefined FUN_145fdf7be(void)

undefined8 FUN_145fdf7be(uint param_1,int *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_14cb988c0 - DAT_14cb988ec != 1) && (DAT_14cb988c0 != DAT_14cb988ec)) {
    puVar1 = &DAT_14cb988f0;
    if (DAT_14cb988f8 != (undefined *)0x0) {
      puVar1 = DAT_14cb988f8;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14cb98900 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14cb988b8 + (longlong)iVar2 * 0x60);
        if (*(int *)(DAT_14cb988b8 + (longlong)iVar2 * 0x60) == *param_2) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_145fdf5a0((longlong)_Dst + 8);
          memmove(_Dst,param_2,0x58);
          FUN_145d164b2(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145fdf882 FUN_145fdf882 body=278 status=ok
// SIG undefined FUN_145fdf882(void)

int * FUN_145fdf882(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb988e8;
  iVar3 = DAT_14cb988c0;
  if (DAT_14cb988ec == 0) {
    iVar2 = DAT_14cb988c0 + 1;
    bVar7 = DAT_14cb988c4 == DAT_14cb988c0;
    DAT_14cb988c0 = iVar2;
    if (bVar7) {
      FUN_14488f93c(&DAT_14cb988b8,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb988c8,1);
    puVar4 = DAT_14cb988d8;
    if (DAT_14cb988d8 == (undefined *)0x0) {
      puVar4 = &DAT_14cb988c8;
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
    lVar6 = (longlong)DAT_14cb988e8;
    DAT_14cb988e8 = *(int *)(DAT_14cb988b8 + 4 + lVar6 * 0x60);
    DAT_14cb988ec = DAT_14cb988ec + -1;
    if (DAT_14cb988ec != 0) {
      *(undefined4 *)(DAT_14cb988b8 + (longlong)DAT_14cb988e8 * 0x60) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb988c8;
  if (DAT_14cb988d8 != (undefined *)0x0) {
    puVar4 = DAT_14cb988d8;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x60 + DAT_14cb988b8;
  return param_1;
}



// FUNCTION 145fdf998 FUN_145fdf998 body=475 status=ok
// SIG undefined FUN_145fdf998(void)

longlong * FUN_145fdf998(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
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
        lVar8 = (longlong)iVar6 * 0x60;
        *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
        if (*(longlong *)(lVar2 + 0x48 + lVar8) != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(lVar2 + lVar8 + 8);
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



// FUNCTION 145fdfb74 FUN_145fdfb74 body=477 status=ok
// SIG undefined FUN_145fdfb74(void)

void FUN_145fdfb74(void)

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
  if (DAT_14cb988f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb988f8,0,0,4);
  }
  uVar2 = DAT_14cb98900;
  uVar3 = local_50;
  if (DAT_14cb98900 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb988f0,0,DAT_14cb98900,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb988f8;
        if (DAT_14cb988f8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb988f0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb98900 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb988c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb988e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb988b8;
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
        lVar6 = (longlong)iVar4 * 0x60;
        uVar9 = (longlong)(int)DAT_14cb98900 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x5c + lVar6) = iVar8;
        puVar5 = DAT_14cb988f8;
        if (DAT_14cb988f8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb988f0;
        }
        *(undefined4 *)(lVar1 + 0x58 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb98900 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb988f8;
        if (DAT_14cb988f8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb988f0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb98900 - 1U) * 4) = iVar4;
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



// FUNCTION 145fdfd52 FUN_145fdfd52 body=230 status=ok
// SIG undefined FUN_145fdfd52(void)

undefined4 * FUN_145fdfd52(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140630e34(&local_38);
  if (local_30 != (longlong *)0x0) {
    iVar7 = (int)local_30[1];
    do {
      if (iVar7 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_30[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(local_30 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar8 = local_30;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_1415b1212(local_38,param_1,param_3);
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (local_38 != 0) {
        if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_1;
      }
    }
  }
  *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *param_1 = (undefined4)DAT_14c8464e0;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 145fdfe3c FUN_145fdfe3c body=308 status=ok
// SIG undefined FUN_145fdfe3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fdfe3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc312e0) {
    FUN_144b3d300(&DAT_14cc312e0);
    if (DAT_14cc312e0 == -1) {
      uVar1 = FUN_145fe00e6();
      FUN_145fdff9c();
      FUN_140db5666(&DAT_14cc31238,0,&DAT_14cc311d0,L"FExrSwizzlePS",
                    L"/Plugin/ExrReaderShaders/Private/ExrSwizzler.usf",L"MainPS",3,0x10,
                    FUN_1498c691a,FUN_1498c68ba,&LAB_1498c68b6,&LAB_1498c68b2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1,uVar2);
      _DAT_14cc31238 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14468938e);
      _Init_thread_footer(&DAT_14cc312e0);
    }
  }
  return &DAT_14cc31238;
}



// FUNCTION 145fdff70 Unwind@145fdff70 body=44 status=ok
// SIG undefined Unwind@145fdff70(void)

void Unwind_145fdff70(void)

{
  FUN_144d8db2c(&DAT_14cc312e0);
  return;
}



// FUNCTION 145fdff9c FUN_145fdff9c body=206 status=ok
// SIG undefined FUN_145fdff9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fdff9c(void)

{
  if ((DAT_14cc31237 & 2) == 0) {
    DAT_14cc31237 = DAT_14cc31237 | 2;
    _DAT_14cc311d8 = L"FExrSwizzlePS";
    _DAT_14cc311f0 = FUN_146826540;
    _DAT_14cc311f8 = FUN_146825d77;
    _DAT_14cc31200 = FUN_146825fd6;
    _DAT_14cc31208 = FUN_1407e02ea;
    _DAT_14cc31210 = FUN_146826273;
    _DAT_14cc311e8 = FUN_1498c6884;
    _DAT_14cc31228 = 0xffffffff000000e0;
    _DAT_14cc31230 = 8;
    DAT_14cc31234 = 0;
    _DAT_14cc31218 = &LAB_1498c68ae;
    FUN_145fe006a();
    FUN_1407e00cc(&DAT_14cc311d0);
  }
  return &DAT_14cc311d0;
}



// FUNCTION 145fe006a FUN_145fe006a body=123 status=ok
// SIG undefined FUN_145fe006a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fe006a(void)

{
  _DAT_14cc314a8 = L"BASE";
  DAT_14cc314d2 = 4;
  _DAT_14cc314b0 = FUN_140b35ae4();
  _DAT_14cc314b8 = DAT_14cc311e0;
  _DAT_14cc314c0 = &LAB_14682652b;
  DAT_14cc311e0 = &DAT_14cc314a8;
  DAT_14cc31235 = DAT_14cc31235 + '\x01';
  _DAT_14cc314c8 = 0x100000000;
  if (*(char *)(_DAT_14cc314b0 + 100) != '\0') {
    DAT_14cc31236 = DAT_14cc31236 + '\x01';
  }
  return;
}



// FUNCTION 145fe00e6 FUN_145fe00e6 body=243 status=ok
// SIG undefined FUN_145fe00e6(void)

undefined * FUN_145fe00e6(void)

{
  longlong local_28 [2];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc314a0) {
    FUN_144b3d300(&DAT_14cc314a0);
    if (DAT_14cc314a0 == -1) {
      FUN_145fe0228(local_28);
      FUN_140b49562(&DAT_14cc31420,0,1,L"FParameters",L"FParameters",0,0,"Unknown",0x24,0x30,
                    local_28,0,0,0);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1446893a6);
      _Init_thread_footer(&DAT_14cc314a0);
    }
  }
  return &DAT_14cc31420;
}



// FUNCTION 145fe01da Unwind@145fe01da body=40 status=ok
// SIG undefined Unwind@145fe01da(void)

void Unwind_145fe01da(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 145fe0202 Unwind@145fe0202 body=38 status=ok
// SIG undefined Unwind@145fe0202(void)

void Unwind_145fe0202(void)

{
  FUN_144d8db2c(&DAT_14cc314a0);
  return;
}



// FUNCTION 145fe0228 FUN_145fe0228 body=207 status=ok
// SIG undefined FUN_145fe0228(void)

longlong * FUN_145fe0228(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  
  uVar19 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar16 = FUN_145fe03a2;
  do {
    pcVar16 = (code *)(*pcVar16)(uVar19,param_1);
    uVar19 = extraout_XMM0_Da;
  } while (pcVar16 != (code *)0x0);
  uVar3 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar3) {
    lVar4 = *param_1;
    lVar17 = (longlong)(int)uVar3 * 0x30;
    lVar18 = 0;
    do {
      lVar17 = lVar17 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar18);
      uVar6 = ((undefined8 *)(lVar4 + lVar18))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar18);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = *(undefined8 *)(lVar4 + lVar17);
      uVar12 = ((undefined8 *)(lVar4 + lVar17))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar17);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar17);
      uVar15 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar15;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar18);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(undefined8 *)(lVar4 + lVar18) = uVar11;
      ((undefined8 *)(lVar4 + lVar18))[1] = uVar12;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar17);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar17);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar4 + lVar17) = uVar5;
      ((undefined8 *)(lVar4 + lVar17))[1] = uVar6;
      lVar18 = lVar18 + 0x30;
    } while ((ulonglong)(uVar3 >> 1) * 0x30 != lVar18);
  }
  return param_1;
}



// FUNCTION 145fe02f8 Unwind@145fe02f8 body=38 status=ok
// SIG undefined Unwind@145fe02f8(void)

void Unwind_145fe02f8(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 145fe031e FUN_145fe031e body=132 status=ok
// SIG undefined FUN_145fe031e(void)

undefined1 * FUN_145fe031e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UnswizzledBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1498c6ba0;
}



// FUNCTION 145fe03a2 FUN_145fe03a2 body=136 status=ok
// SIG undefined FUN_145fe03a2(void)

code * FUN_145fe03a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumChannels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fe042a;
}



// FUNCTION 145fe042a FUN_145fe042a body=138 status=ok
// SIG undefined FUN_145fe042a(void)

code * FUN_145fe042a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumTiles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498c6a8c;
}



// FUNCTION 145fe04b4 FUN_145fe04b4 body=75 status=ok
// SIG undefined FUN_145fe04b4(void)

undefined8 * FUN_145fe04b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad7f490;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe0500(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe0500 FUN_145fe0500 body=53 status=ok
// SIG undefined FUN_145fe0500(void)

void FUN_145fe0500(longlong *param_1)

{
  FUN_145fe0536();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe0536 FUN_145fe0536 body=344 status=ok
// SIG undefined FUN_145fe0536(void)

void FUN_145fe0536(longlong *param_1)

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
      FUN_140038ae8(*local_68 + (longlong)iStack_4c * 0x28 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fe0690 FUN_145fe0690 body=156 status=ok
// SIG undefined FUN_145fe0690(void)

longlong * FUN_145fe0690(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68(0x40,0x10);
  FUN_145fe072c(lVar3,param_2,param_3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e44400;
  plVar4[2] = lVar3;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar4;
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
  return param_1;
}



// FUNCTION 145fe072c FUN_145fe072c body=199 status=ok
// SIG undefined FUN_145fe072c(void)

undefined8 * FUN_145fe072c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *_Dst;
  
  *param_1 = &PTR_FUN_149e443a0;
  _Dst = (longlong *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0x90);
  FUN_144869430(_Dst);
  _Dst[0x12] = 0;
  *_Dst = (longlong)&PTR_FUN_149e1e590;
  _Dst[0x13] = (longlong)(param_1 + 5);
  _Dst[0x14] = 0;
  FUN_144a69558(_Dst,1);
  (**(code **)(*_Dst + 0xf0))(_Dst,0);
  *_Dst = (longlong)&PTR_FUN_149e1e330;
  param_1[1] = _Dst;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  *param_1 = &PTR_FUN_149e443a0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  return param_1;
}



// FUNCTION 145fe07f4 FUN_145fe07f4 body=253 status=ok
// SIG undefined FUN_145fe07f4(void)

void FUN_145fe07f4(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1415b18c8();
  lVar3 = FUN_145fe08f2();
  if (lVar3 != 0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14b435170;
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
    local_30[2] = lVar4;
    *local_30 = &PTR_FUN_14b435100;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = param_1;
    FUN_1415b19fc(lVar3 + 0x2d0,local_38,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe08f2 FUN_145fe08f2 body=8 status=ok
// SIG undefined FUN_145fe08f2(void)

undefined8 FUN_145fe08f2(void)

{
  return DAT_14cb7ca88;
}



// FUNCTION 145fe08fa FUN_145fe08fa body=50 status=ok
// SIG undefined FUN_145fe08fa(void)

longlong FUN_145fe08fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145fe092c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145fe092c FUN_145fe092c body=187 status=ok
// SIG undefined FUN_145fe092c(void)

void FUN_145fe092c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab3c730;
  param_1[1] = &PTR_FUN_14ab3c760;
  plVar3 = (longlong *)param_1[9];
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
  plVar3 = (longlong *)param_1[7];
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
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145fe09e8 FUN_145fe09e8 body=75 status=ok
// SIG undefined FUN_145fe09e8(void)

undefined8 * FUN_145fe09e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad964b0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe0a34(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe0a34 FUN_145fe0a34 body=53 status=ok
// SIG undefined FUN_145fe0a34(void)

void FUN_145fe0a34(longlong *param_1)

{
  FUN_145fe0a6a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe0a6a FUN_145fe0a6a body=345 status=ok
// SIG undefined FUN_145fe0a6a(void)

void FUN_145fe0a6a(longlong *param_1)

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
      FUN_1480da1f0(*local_68 + (longlong)iStack_4c * 0x140 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1480da246(param_1);
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



// FUNCTION 145fe0bd0 FUN_145fe0bd0 body=462 status=ok
// SIG undefined FUN_145fe0bd0(void)

undefined8 * FUN_145fe0bd0(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b1a61a0;
  *(undefined4 *)(param_1 + 0x16) = 0xbeef3000;
  param_1[0x17] = "station_type";
  FUN_1400b22c2(local_58,"Streaming Level.StationType");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_1457bc4fa();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe0cd3;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe0cd3:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe0daa FUN_145fe0daa body=462 status=ok
// SIG undefined FUN_145fe0daa(void)

undefined8 * FUN_145fe0daa(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b2cbc00;
  *(undefined4 *)(param_1 + 0x16) = 0x2010;
  param_1[0x17] = "ui_mission_reward_tier";
  FUN_1400b22c2(local_58,"GbxUI.UIMissionRewardTier");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_140c5407a();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe0ead;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe0ead:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe0f80 FUN_145fe0f80 body=277 status=ok
// SIG undefined FUN_145fe0f80(void)

void FUN_145fe0f80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined1 local_a0 [16];
  undefined2 local_90 [2];
  undefined4 local_8c;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_14479d2ce(param_1 + 8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar3 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar3;
    local_88 = FUN_1449837d2;
    local_80 = 0;
    FUN_145fe1096(local_a0,param_1,&local_88);
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 1;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar1,param_1 + 0x30,&local_88,0x3dcccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(local_a0);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe1096 FUN_145fe1096 body=428 status=ok
// SIG undefined FUN_145fe1096(void)

longlong * FUN_145fe1096(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_145fe1176:
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42feb0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145fe1176;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b42feb0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145fe124e FUN_145fe124e body=462 status=ok
// SIG undefined FUN_145fe124e(void)

undefined8 * FUN_145fe124e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b6bf6a0;
  *(undefined4 *)(param_1 + 0x16) = 0x401e;
  param_1[0x17] = "achievement";
  FUN_1400b22c2(local_58,"Achievement");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_140b3e2ee();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe1351;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe1351:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe1428 FUN_145fe1428 body=462 status=ok
// SIG undefined FUN_145fe1428(void)

undefined8 * FUN_145fe1428(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b781f80;
  *(undefined4 *)(param_1 + 0x16) = 0x19121;
  param_1[0x17] = "aihitreactions";
  FUN_1400b22c2(local_58,"AI.HitReactions");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_145702a16();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe152b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe152b:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe1602 FUN_145fe1602 body=462 status=ok
// SIG undefined FUN_145fe1602(void)

undefined8 * FUN_145fe1602(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b80f190;
  *(undefined4 *)(param_1 + 0x16) = 0x19122;
  param_1[0x17] = "trait";
  FUN_1400b22c2(local_58,"Traits.Trait");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_14117f018();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe1705;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe1705:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe17dc FUN_145fe17dc body=462 status=ok
// SIG undefined FUN_145fe17dc(void)

undefined8 * FUN_145fe17dc(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b847a20;
  *(undefined4 *)(param_1 + 0x16) = 0x2007;
  param_1[0x17] = "ui_element_damage_effect";
  FUN_1400b22c2(local_58,"GbxUI.UIElementDamageEffect");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_14587cfba();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe18df;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe18df:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe19b6 FUN_145fe19b6 body=462 status=ok
// SIG undefined FUN_145fe19b6(void)

undefined8 * FUN_145fe19b6(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b85a400;
  *(undefined4 *)(param_1 + 0x16) = 0x2006;
  param_1[0x17] = "ui_movement_type";
  FUN_1400b22c2(local_58,"GbxUI.UIMovementType");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_140e3bfa2();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe1ab9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe1ab9:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe1b90 FUN_145fe1b90 body=462 status=ok
// SIG undefined FUN_145fe1b90(void)

undefined8 * FUN_145fe1b90(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b85a840;
  *(undefined4 *)(param_1 + 0x16) = 0x9c6f15a6;
  param_1[0x17] = "uiname_weightedlist";
  FUN_1400b22c2(local_58,"UI.Weighted Name List");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_140e1399c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe1c93;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe1c93:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe1d60 FUN_145fe1d60 body=38 status=ok
// SIG undefined FUN_145fe1d60(void)

undefined8 FUN_145fe1d60(undefined8 param_1,int param_2)

{
  FUN_1415b1b76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe1d92 FUN_145fe1d92 body=462 status=ok
// SIG undefined FUN_145fe1d92(void)

undefined8 * FUN_145fe1d92(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = FUN_14007ca06();
  FUN_140c6b96a(param_1,uVar4);
  *param_1 = &PTR_FUN_14b93a680;
  *(undefined4 *)(param_1 + 0x16) = 0x1648dde6;
  param_1[0x17] = "trait_mission";
  FUN_1400b22c2(local_58,"Missions.Trait Mission");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_141417e7c();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fe1e95;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_145fe1e95:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe1f62 FUN_145fe1f62 body=50 status=ok
// SIG undefined FUN_145fe1f62(void)

void FUN_145fe1f62(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1458d9664(param_1,0xffffffff);
  if (lVar1 != 0) {
    lVar1 = FUN_145da44aa(lVar1);
    if (lVar1 != 0) {
      FUN_145fe1f94(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 145fe1f94 FUN_145fe1f94 body=186 status=ok
// SIG undefined FUN_145fe1f94(void)

void FUN_145fe1f94(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402815f4(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x160);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  iVar4 = *(int *)(lVar3 + 8);
  if (0 < iVar4) {
    do {
      FUN_145be4292(lVar3,iVar4 + -1,1);
      iVar4 = *(int *)(lVar3 + 8);
    } while (0 < iVar4);
    FUN_145be43ec(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145fe200a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe2050 FUN_145fe2050 body=9 status=ok
// SIG undefined FUN_145fe2050(void)

void FUN_145fe2050(longlong param_1)

{
  FUN_1415b1c3e(param_1 + 0x10);
  return;
}



// FUNCTION 145fe205a FUN_145fe205a body=135 status=ok
// SIG undefined FUN_145fe205a(void)

void FUN_145fe205a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1415b1ce8();
  if (iVar1 < 0x18) {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_38 = &LAB_145c6a324;
    local_30 = 0;
    FUN_145fe20e2(local_28,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3a0))
              (*(longlong **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x30),local_28);
    FUN_1449db362(local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe20e2 FUN_145fe20e2 body=428 status=ok
// SIG undefined FUN_145fe20e2(void)

longlong * FUN_145fe20e2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145fe21c2:
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebf50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145fe21c2;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ebf50;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145fe228e FUN_145fe228e body=191 status=ok
// SIG undefined FUN_145fe228e(void)

void FUN_145fe228e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x988))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe234e thunk_FUN_1574cb0ab body=5 status=ok
// SIG undefined thunk_FUN_1574cb0ab(void)

undefined8 thunk_FUN_1574cb0ab(void)

{
  return 0xffffffff8024fd9c;
}



// FUNCTION 145fe251b FUN_145fe251b body=66 status=ok
// SIG undefined FUN_145fe251b(void)

void FUN_145fe251b(void)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145fe255e(local_10);
  FUN_145fe262a(local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe255e FUN_145fe255e body=203 status=ok
// SIG undefined FUN_145fe255e(void)

undefined8 FUN_145fe255e(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e020b0;
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
  *local_28 = &PTR_FUN_14a290000;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe262a FUN_145fe262a body=203 status=ok
// SIG undefined FUN_145fe262a(void)

undefined8 FUN_145fe262a(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e020b0;
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
  *local_28 = &PTR_FUN_14a290160;
  FUN_1448b6402(&DAT_14c872d10,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fe26f6 FUN_145fe26f6 body=75 status=ok
// SIG undefined FUN_145fe26f6(void)

undefined8 * FUN_145fe26f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad7f530;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe2742(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe2742 FUN_145fe2742 body=53 status=ok
// SIG undefined FUN_145fe2742(void)

void FUN_145fe2742(longlong *param_1)

{
  FUN_145fe2778();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe2778 FUN_145fe2778 body=346 status=ok
// SIG undefined FUN_145fe2778(void)

void FUN_145fe2778(longlong *param_1)

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
      FUN_148084a1c(*local_68 + (longlong)iStack_4c * 0xd8 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145880e08(param_1,0);
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



// FUNCTION 145fe28d4 FUN_145fe28d4 body=75 status=ok
// SIG undefined FUN_145fe28d4(void)

undefined8 * FUN_145fe28d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad7f5c0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe2920(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe2920 FUN_145fe2920 body=53 status=ok
// SIG undefined FUN_145fe2920(void)

void FUN_145fe2920(longlong *param_1)

{
  FUN_145fe2956();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe2956 FUN_145fe2956 body=346 status=ok
// SIG undefined FUN_145fe2956(void)

void FUN_145fe2956(longlong *param_1)

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
      FUN_148085920(*local_68 + (longlong)iStack_4c * 0xe0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140442250(param_1,0);
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



// FUNCTION 145fe2ab2 FUN_145fe2ab2 body=75 status=ok
// SIG undefined FUN_145fe2ab2(void)

undefined8 * FUN_145fe2ab2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad88320;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe2afe(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe2afe FUN_145fe2afe body=53 status=ok
// SIG undefined FUN_145fe2afe(void)

void FUN_145fe2afe(longlong *param_1)

{
  FUN_145fe2b34();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe2b34 FUN_145fe2b34 body=346 status=ok
// SIG undefined FUN_145fe2b34(void)

void FUN_145fe2b34(longlong *param_1)

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
      FUN_1480b3014(*local_68 + (longlong)iStack_4c * 0x110 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403c5a5e(param_1,0);
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



// FUNCTION 145fe2c90 FUN_145fe2c90 body=75 status=ok
// SIG undefined FUN_145fe2c90(void)

undefined8 * FUN_145fe2c90(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ad965e0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145fe2cdc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fe2cdc FUN_145fe2cdc body=53 status=ok
// SIG undefined FUN_145fe2cdc(void)

void FUN_145fe2cdc(longlong *param_1)

{
  FUN_145fe2d12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fe2d12 FUN_145fe2d12 body=346 status=ok
// SIG undefined FUN_145fe2d12(void)

void FUN_145fe2d12(longlong *param_1)

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
      FUN_1480da404(*local_68 + (longlong)iStack_4c * 0x130 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14572247c(param_1,0);
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


