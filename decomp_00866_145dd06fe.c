// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145dd06fe FUN_145dd06fe body=144 status=ok
// SIG undefined FUN_145dd06fe(void)

code * FUN_145dd06fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14155e106();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"WorkingColorSpace";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FWorkingColorSpaceShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fa008;
}



// FUNCTION 145dd078e FUN_145dd078e body=146 status=ok
// SIG undefined FUN_145dd078e(void)

code * FUN_145dd078e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd0820();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ACESTonemapParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDeviceEncodingACESTonemapShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca29888;
  return FUN_1462f9dda;
}



// FUNCTION 145dd0820 FUN_145dd0820 body=261 status=ok
// SIG undefined FUN_145dd0820(void)

void FUN_145dd0820(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca29908) {
    FUN_144b3d300(&DAT_14ca29908);
    if (DAT_14ca29908 == -1) {
      FUN_145dd0926(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDeviceEncodingACESTonemapShaderParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x53;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca29888,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc0de);
      _Init_thread_footer(&DAT_14ca29908);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd0926 FUN_145dd0926 body=226 status=ok
// SIG undefined FUN_145dd0926(void)

longlong * FUN_145dd0926(longlong *param_1)

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
  pcVar13 = FUN_1462f9e68;
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



// FUNCTION 145dd0a0a FUN_145dd0a0a body=136 status=ok
// SIG undefined FUN_145dd0a0a(void)

code * FUN_145dd0a0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ACESCoefsHigh_0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd0a92;
}



// FUNCTION 145dd0a92 FUN_145dd0a92 body=138 status=ok
// SIG undefined FUN_145dd0a92(void)

code * FUN_145dd0a92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ACESCoefsLow_0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd0b1c;
}



// FUNCTION 145dd0b1c FUN_145dd0b1c body=138 status=ok
// SIG undefined FUN_145dd0b1c(void)

code * FUN_145dd0b1c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ACESMidData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729141c;
}



// FUNCTION 145dd0ba6 FUN_145dd0ba6 body=210 status=ok
// SIG undefined FUN_145dd0ba6(void)

void FUN_145dd0ba6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)FUN_145dd0c79(param_2,param_3);
  plVar1 = plVar4 + 2;
  local_40 = plVar1;
  local_38 = plVar4;
  FUN_145dd0d0a(&local_40,plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_1411d7792(uVar3,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd0c79 FUN_145dd0c79 body=145 status=ok
// SIG undefined FUN_145dd0c79(void)

undefined8 * FUN_145dd0c79(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b4e9f40;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 5) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)puVar2 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  puVar2[6] = param_1;
  puVar2[2] = &PTR_FUN_14b4e9f60;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  FUN_14114e6dc(puVar2 + 7,param_2);
  *(undefined1 *)(puVar2 + 9) = 0;
  return puVar2;
}



// FUNCTION 145dd0d0a FUN_145dd0d0a body=162 status=ok
// SIG undefined FUN_145dd0d0a(void)

void FUN_145dd0d0a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145dd0d49;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145dd0d49;
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
LAB_145dd0d49:
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
                    /* WARNING: Could not recover jumptable at 0x000145dd0da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145dd0dac FUN_145dd0dac body=292 status=ok
// SIG undefined FUN_145dd0dac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd0dac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1d6e8) {
    FUN_144b3d300(&DAT_14ca1d6e8);
    if (DAT_14ca1d6e8 == -1) {
      FUN_145dd101a();
      FUN_145dd0ed0();
      FUN_140db5666(&DAT_14ca1d640,0,&DAT_14ca1d5d8,L"FPathTracingBuildLightGridCS",
                    L"/Engine/Private/PathTracing/PathTracingBuildLightGrid.usf",
                    L"PathTracingBuildLightGridCS",5,1,FUN_147271de6,FUN_147271d86,&LAB_1462f517e,
                    &LAB_147271d82,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21920);
      _DAT_14ca1d640 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70a18);
      _Init_thread_footer(&DAT_14ca1d6e8);
    }
  }
  return &DAT_14ca1d640;
}



// FUNCTION 145dd0ed0 FUN_145dd0ed0 body=205 status=ok
// SIG undefined FUN_145dd0ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd0ed0(void)

{
  if ((DAT_14ca1d63f & 2) == 0) {
    DAT_14ca1d63f = DAT_14ca1d63f | 2;
    _DAT_14ca1d5e0 = L"FPathTracingBuildLightGridCS";
    _DAT_14ca1d5f8 = FUN_146826540;
    _DAT_14ca1d600 = FUN_146825d77;
    _DAT_14ca1d608 = FUN_146825fd6;
    _DAT_14ca1d610 = FUN_1407e02ea;
    _DAT_14ca1d618 = FUN_146826273;
    _DAT_14ca1d5f0 = FUN_147271d52;
    _DAT_14ca1d630 = 0xffffffff000000e0;
    _DAT_14ca1d638 = 8;
    DAT_14ca1d63c = 0;
    _DAT_14ca1d620 = &LAB_147271d7e;
    FUN_145dd0f9e();
    FUN_1407e00cc(&DAT_14ca1d5d8);
    return;
  }
  return;
}



// FUNCTION 145dd0f9e FUN_145dd0f9e body=123 status=ok
// SIG undefined FUN_145dd0f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd0f9e(void)

{
  _DAT_14ca247e0 = L"BASE";
  DAT_14ca2480a = 4;
  _DAT_14ca247e8 = FUN_140b35ae4();
  _DAT_14ca247f0 = DAT_14ca1d5e8;
  _DAT_14ca247f8 = &LAB_14682652b;
  DAT_14ca1d5e8 = &DAT_14ca247e0;
  DAT_14ca1d63d = DAT_14ca1d63d + '\x01';
  _DAT_14ca24800 = 0x100000000;
  if (*(char *)(_DAT_14ca247e8 + 100) != '\0') {
    DAT_14ca1d63e = DAT_14ca1d63e + '\x01';
  }
  return;
}



// FUNCTION 145dd101a FUN_145dd101a body=261 status=ok
// SIG undefined FUN_145dd101a(void)

void FUN_145dd101a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca219a0) {
    FUN_144b3d300(&DAT_14ca219a0);
    if (DAT_14ca219a0 == -1) {
      FUN_145dd1120(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x3ea;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c3d);
      _Init_thread_footer(&DAT_14ca219a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd1120 FUN_145dd1120 body=226 status=ok
// SIG undefined FUN_145dd1120(void)

longlong * FUN_145dd1120(longlong *param_1)

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
  pcVar13 = FUN_1462f5ad8;
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



// FUNCTION 145dd1204 FUN_145dd1204 body=130 status=ok
// SIG undefined FUN_145dd1204(void)

undefined1 * FUN_145dd1204(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneLights";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPathTracingLight>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14727ad30;
}



// FUNCTION 145dd1286 FUN_145dd1286 body=138 status=ok
// SIG undefined FUN_145dd1286(void)

code * FUN_145dd1286(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneLightCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd1204;
}



// FUNCTION 145dd1310 FUN_145dd1310 body=146 status=ok
// SIG undefined FUN_145dd1310(void)

code * FUN_145dd1310(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd13a2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FPathTracingLightGrid";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca219a8;
  return FUN_145dd1286;
}



// FUNCTION 145dd13a2 FUN_145dd13a2 body=261 status=ok
// SIG undefined FUN_145dd13a2(void)

void FUN_145dd13a2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca21a28) {
    FUN_144b3d300(&DAT_14ca21a28);
    if (DAT_14ca21a28 == -1) {
      FUN_145dd14a8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPathTracingLightGrid";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x3cc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca219a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c49);
      _Init_thread_footer(&DAT_14ca21a28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd14a8 FUN_145dd14a8 body=226 status=ok
// SIG undefined FUN_145dd14a8(void)

longlong * FUN_145dd14a8(longlong *param_1)

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
  pcVar13 = FUN_1462f5b60;
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



// FUNCTION 145dd158c FUN_145dd158c body=132 status=ok
// SIG undefined FUN_145dd158c(void)

undefined1 * FUN_145dd158c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneInfiniteLightCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14727ad2c;
}



// FUNCTION 145dd1610 FUN_145dd1610 body=136 status=ok
// SIG undefined FUN_145dd1610(void)

code * FUN_145dd1610(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000003d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727aca2;
}



// FUNCTION 145dd1698 FUN_145dd1698 body=138 status=ok
// SIG undefined FUN_145dd1698(void)

code * FUN_145dd1698(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneLightsTranslatedBoundMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd158c;
}



// FUNCTION 145dd1722 FUN_145dd1722 body=205 status=ok
// SIG undefined FUN_145dd1722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd1722(void)

{
  if ((DAT_14c9ca1a7 & 2) == 0) {
    DAT_14c9ca1a7 = DAT_14c9ca1a7 | 2;
    _DAT_14c9ca148 = L"FDistortionApplyScreenPS";
    _DAT_14c9ca160 = FUN_146826540;
    _DAT_14c9ca168 = FUN_146825d77;
    _DAT_14c9ca170 = FUN_146825fd6;
    _DAT_14c9ca178 = FUN_1407e02ea;
    _DAT_14c9ca180 = FUN_146826273;
    _DAT_14c9ca158 = FUN_147157918;
    _DAT_14c9ca198 = 0xffffffff000000e0;
    _DAT_14c9ca1a0 = 8;
    DAT_14c9ca1a4 = 0;
    _DAT_14c9ca188 = &LAB_147157942;
    FUN_145dd17f0();
    FUN_1407e00cc(&DAT_14c9ca140);
    return;
  }
  return;
}



// FUNCTION 145dd17f0 FUN_145dd17f0 body=123 status=ok
// SIG undefined FUN_145dd17f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd17f0(void)

{
  _DAT_14c9cef08 = L"BASE";
  DAT_14c9cef32 = 4;
  _DAT_14c9cef10 = FUN_140b35ae4();
  _DAT_14c9cef18 = DAT_14c9ca150;
  _DAT_14c9cef20 = &LAB_14682652b;
  DAT_14c9ca150 = &DAT_14c9cef08;
  DAT_14c9ca1a5 = DAT_14c9ca1a5 + '\x01';
  _DAT_14c9cef28 = 0x100000000;
  if (*(char *)(_DAT_14c9cef10 + 100) != '\0') {
    DAT_14c9ca1a6 = DAT_14c9ca1a6 + '\x01';
  }
  return;
}



// FUNCTION 145dd1870 FUN_145dd1870 body=138 status=ok
// SIG undefined FUN_145dd1870(void)

code * FUN_145dd1870(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistortionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715c990;
}



// FUNCTION 145dd18fa FUN_145dd18fa body=138 status=ok
// SIG undefined FUN_145dd18fa(void)

code * FUN_145dd18fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StandardTranslucentTransmittanceMSAATexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DMS<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715caa4;
}



// FUNCTION 145dd1984 FUN_145dd1984 body=205 status=ok
// SIG undefined FUN_145dd1984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd1984(void)

{
  if ((DAT_14ca138af & 2) == 0) {
    DAT_14ca138af = DAT_14ca138af | 2;
    _DAT_14ca13850 = L"FNaniteMarkStencilPS";
    _DAT_14ca13868 = FUN_146826540;
    _DAT_14ca13870 = FUN_146825d77;
    _DAT_14ca13878 = FUN_146825fd6;
    _DAT_14ca13880 = FUN_1407e02ea;
    _DAT_14ca13888 = FUN_146826273;
    _DAT_14ca13860 = FUN_147250f96;
    _DAT_14ca138a0 = 0xffffffff000000e0;
    _DAT_14ca138a8 = 8;
    DAT_14ca138ac = 0;
    _DAT_14ca13890 = &LAB_147250fc2;
    FUN_145dd1a52();
    FUN_1407e00cc(&DAT_14ca13848);
    return;
  }
  return;
}



// FUNCTION 145dd1a52 FUN_145dd1a52 body=123 status=ok
// SIG undefined FUN_145dd1a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd1a52(void)

{
  _DAT_14ca18c98 = L"BASE";
  DAT_14ca18cc2 = 4;
  _DAT_14ca18ca0 = FUN_140b35ae4();
  _DAT_14ca18ca8 = DAT_14ca13858;
  _DAT_14ca18cb0 = &LAB_14682652b;
  DAT_14ca13858 = &DAT_14ca18c98;
  DAT_14ca138ad = DAT_14ca138ad + '\x01';
  _DAT_14ca18cb8 = 0x100000000;
  if (*(char *)(_DAT_14ca18ca0 + 100) != '\0') {
    DAT_14ca138ae = DAT_14ca138ae + '\x01';
  }
  return;
}



// FUNCTION 145dd1ace FUN_145dd1ace body=226 status=ok
// SIG undefined FUN_145dd1ace(void)

longlong * FUN_145dd1ace(longlong *param_1)

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
  pcVar13 = FUN_1462efc00;
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



// FUNCTION 145dd1bb6 FUN_145dd1bb6 body=138 status=ok
// SIG undefined FUN_145dd1bb6(void)

code * FUN_145dd1bb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisBuffer64";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<UlongType>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd1c40;
}



// FUNCTION 145dd1c40 FUN_145dd1c40 body=138 status=ok
// SIG undefined FUN_145dd1c40(void)

undefined1 * FUN_145dd1c40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x36;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145dd1bb2;
}



// FUNCTION 145dd1cca FUN_145dd1cca body=38 status=ok
// SIG undefined FUN_145dd1cca(void)

undefined8 FUN_145dd1cca(undefined8 param_1,int param_2)

{
  FUN_145dd1cf0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dd1cf0 FUN_145dd1cf0 body=153 status=ok
// SIG undefined FUN_145dd1cf0(void)

void FUN_145dd1cf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149faf660;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145dd1d8a(param_1 + 5);
  FUN_145dd1dbf(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dd1d8a FUN_145dd1d8a body=53 status=ok
// SIG undefined FUN_145dd1d8a(void)

void FUN_145dd1d8a(longlong *param_1)

{
  FUN_145dd1e0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dd1dbf FUN_145dd1dbf body=77 status=ok
// SIG undefined FUN_145dd1dbf(void)

void FUN_145dd1dbf(longlong param_1,int param_2)

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



// FUNCTION 145dd1e0c FUN_145dd1e0c body=370 status=ok
// SIG undefined FUN_145dd1e0c(void)

void FUN_145dd1e0c(longlong *param_1)

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
      FUN_145dd1dbf(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
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



// FUNCTION 145dd1f80 FUN_145dd1f80 body=86 status=ok
// SIG undefined FUN_145dd1f80(void)

void FUN_145dd1f80(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_14c760da4 != 0) {
    uVar2 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar3 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    do {
      FUN_145dd1fd6(*(undefined8 *)(param_1 + 2000 + (ulonglong)uVar3 * 8));
      bVar1 = (byte)uVar3 & 0x1f;
      uVar2 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar2;
      if (uVar2 == 0) {
        uVar3 = 0x20;
      }
      else {
        uVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 145dd1fd6 FUN_145dd1fd6 body=87 status=ok
// SIG undefined FUN_145dd1fd6(void)

void FUN_145dd1fd6(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x48,0x10);
  *plVar1 = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar1 + 1),4000);
  plVar1[6] = 0;
  plVar1[7] = 0;
  *(undefined4 *)(plVar1 + 8) = 0;
  *(longlong **)(param_1 + 0x1500) = plVar1;
  return;
}



// FUNCTION 145dd202d FUN_145dd202d body=83 status=ok
// SIG undefined FUN_145dd202d(void)

void FUN_145dd202d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e2f36c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a59f650;
  puVar1[5] = &PTR_LAB_14a59fb00;
  puVar1[0x2d] = &PTR_LAB_14a59fb40;
  FUN_14155658c(puVar1 + 0x5a);
  puVar1[0x6f] = 0;
  return;
}



// FUNCTION 145dd2080 FUN_145dd2080 body=171 status=ok
// SIG undefined FUN_145dd2080(void)

void FUN_145dd2080(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar3 = (longlong *)FUN_1448c2e86();
    lVar4 = *(longlong *)(param_1 + 8) + 8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar4 = 0;
    }
    FUN_1459cd38a(&local_30);
    (**(code **)(*plVar3 + 0x30))(plVar3,local_30,lVar4);
    *(undefined8 *)(param_1 + 8) = 0;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd212c FUN_145dd212c body=1 status=ok
// SIG undefined FUN_145dd212c(void)

void FUN_145dd212c(void)

{
  return;
}



// FUNCTION 145dd212e FUN_145dd212e body=38 status=ok
// SIG undefined FUN_145dd212e(void)

undefined8 FUN_145dd212e(undefined8 param_1,int param_2)

{
  FUN_1415565e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dd215a FUN_145dd215a body=168 status=ok
// SIG undefined FUN_145dd215a(void)

undefined8 * FUN_145dd215a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9bfb90;
  _Dst[0x55] = 0;
  *(undefined4 *)(_Dst + 0x56) = 0;
  _Dst[0x53] = 0;
  *(undefined8 *)((longlong)_Dst + 0x29d) = 0;
  _Dst[0x57] = 0x3fdcccccc0000000;
  _Dst[0x58] = 0x3fd6666660000000;
  _Dst[0x59] = 0x4000000000000000;
  _Dst[0x5a] = 0;
  *(undefined4 *)(_Dst + 0x5b) = 0;
  *(undefined1 *)((longlong)_Dst + 0x2dc) = 0;
  return _Dst;
}



// FUNCTION 145dd2202 FUN_145dd2202 body=40 status=ok
// SIG undefined FUN_145dd2202(void)

undefined8 FUN_145dd2202(undefined8 param_1,int param_2)

{
  FUN_145dd222a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dd222a FUN_145dd222a body=133 status=ok
// SIG undefined FUN_145dd222a(void)

void FUN_145dd222a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc6af90;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
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
  FUN_1457df34e(param_1);
  return;
}



// FUNCTION 145dd22b0 FUN_145dd22b0 body=40 status=ok
// SIG undefined FUN_145dd22b0(void)

undefined8 FUN_145dd22b0(undefined8 param_1,int param_2)

{
  FUN_145dd22d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dd22d8 FUN_145dd22d8 body=133 status=ok
// SIG undefined FUN_145dd22d8(void)

void FUN_145dd22d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd71d50;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x1d);
  FUN_1447a1747(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145dd235e FUN_145dd235e body=40 status=ok
// SIG undefined FUN_145dd235e(void)

undefined8 FUN_145dd235e(undefined8 param_1,int param_2)

{
  FUN_145dd2386();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dd2386 FUN_145dd2386 body=133 status=ok
// SIG undefined FUN_145dd2386(void)

void FUN_145dd2386(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd76b10;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x1d);
  FUN_1447a1747(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140e36c74(param_1);
  return;
}



// FUNCTION 145dd240c FUN_145dd240c body=107 status=ok
// SIG undefined FUN_145dd240c(void)

void FUN_145dd240c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145dd245b:
      FUN_140bb2a52(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1406e2aa2(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145dd245b;
  FUN_145dd2478(param_1);
  FUN_140bb2a52(param_1,param_2);
  return;
}



// FUNCTION 145dd2478 FUN_145dd2478 body=325 status=ok
// SIG undefined FUN_145dd2478(void)

void FUN_145dd2478(longlong *param_1)

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



// FUNCTION 145dd25ca FUN_145dd25ca body=173 status=ok
// SIG undefined FUN_145dd25ca(void)

undefined8 * FUN_145dd25ca(undefined8 *param_1)

{
  FUN_14155666e();
  *param_1 = &PTR_FUN_14b88b840;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 2;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bb) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 2;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  return param_1;
}



// FUNCTION 145dd2678 FUN_145dd2678 body=284 status=ok
// SIG undefined FUN_145dd2678(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd2678(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca94f58) {
    FUN_144b3d300(&DAT_14ca94f58);
    if (DAT_14ca94f58 == -1) {
      FUN_145dd2794();
      FUN_140db5666(&DAT_14ca94eb0,0,&DAT_14ca94e48,L"FRayTracingValidateGeometryBuildParamsCS",
                    L"/Engine/Private/RayTracing/RayTracingValidation.usf",
                    L"RayTracingValidateGeometryBuildParamsCS",5,1,FUN_147428538,FUN_147428510,
                    FUN_14631eb16,&LAB_14742850c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0);
      _DAT_14ca94eb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143201cb1);
      _Init_thread_footer(&DAT_14ca94f58);
    }
  }
  return &DAT_14ca94eb0;
}



// FUNCTION 145dd2794 FUN_145dd2794 body=210 status=ok
// SIG undefined FUN_145dd2794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2794(void)

{
  if ((DAT_14ca94eaf & 2) == 0) {
    DAT_14ca94eaf = DAT_14ca94eaf | 2;
    _DAT_14ca94e50 = L"FRayTracingValidateGeometryBuildParamsCS";
    _DAT_14ca94e68 = FUN_146826540;
    _DAT_14ca94e70 = FUN_146825d77;
    _DAT_14ca94e78 = FUN_146825fd6;
    _DAT_14ca94e80 = FUN_1407e02ea;
    _DAT_14ca94e88 = FUN_146826273;
    _DAT_14ca94e60 = FUN_1474284de;
    _DAT_14ca94ea0 = 0xffffffff00000110;
    _DAT_14ca94ea8 = 8;
    DAT_14ca94eac = 0;
    _DAT_14ca94e90 = &LAB_147428508;
    FUN_145dd2866();
    FUN_145dd2b42();
    FUN_1407e00cc(&DAT_14ca94e48);
    return;
  }
  return;
}



// FUNCTION 145dd2866 FUN_145dd2866 body=121 status=ok
// SIG undefined FUN_145dd2866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2866(void)

{
  FUN_145dd28e0();
  _DAT_14ca95bd8 = L"IndexBufferParam";
  DAT_14ca95c02 = FUN_140850cc5();
  _DAT_14ca95be0 = FUN_140fb78d0();
  _DAT_14ca95bf0 = &LAB_14682652b;
  _DAT_14ca95bf8 = 0x1000000e0;
  _DAT_14ca95c00 = 0;
  _DAT_14ca95be8 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95bd8;
  return;
}



// FUNCTION 145dd28e0 FUN_145dd28e0 body=121 status=ok
// SIG undefined FUN_145dd28e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd28e0(void)

{
  FUN_145dd295a();
  _DAT_14ca95c08 = L"VertexBufferParam";
  DAT_14ca95c32 = FUN_140850cc5();
  _DAT_14ca95c10 = FUN_140fb78d0();
  _DAT_14ca95c20 = &LAB_14682652b;
  _DAT_14ca95c28 = 0x1000000e4;
  _DAT_14ca95c30 = 0;
  _DAT_14ca95c18 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95c08;
  return;
}



// FUNCTION 145dd295a FUN_145dd295a body=121 status=ok
// SIG undefined FUN_145dd295a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd295a(void)

{
  FUN_145dd29d4();
  _DAT_14ca95c38 = L"VertexBufferStrideParam";
  DAT_14ca95c62 = FUN_140850cc5();
  _DAT_14ca95c40 = FUN_140ec6960();
  _DAT_14ca95c50 = &LAB_14682652b;
  _DAT_14ca95c58 = 0x1000000e8;
  _DAT_14ca95c60 = 0;
  _DAT_14ca95c48 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95c38;
  return;
}



// FUNCTION 145dd29d4 FUN_145dd29d4 body=121 status=ok
// SIG undefined FUN_145dd29d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd29d4(void)

{
  FUN_145dd2a4e();
  _DAT_14ca95c68 = L"VertexBufferOffsetInBytesParam";
  DAT_14ca95c92 = FUN_140850cc5();
  _DAT_14ca95c70 = FUN_140ec6960();
  _DAT_14ca95c80 = &LAB_14682652b;
  _DAT_14ca95c88 = 0x1000000ee;
  _DAT_14ca95c90 = 0;
  _DAT_14ca95c78 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95c68;
  return;
}



// FUNCTION 145dd2a4e FUN_145dd2a4e body=121 status=ok
// SIG undefined FUN_145dd2a4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2a4e(void)

{
  FUN_145dd2ac8();
  _DAT_14ca95c98 = L"IndexBufferOffsetInBytesParam";
  DAT_14ca95cc2 = FUN_140850cc5();
  _DAT_14ca95ca0 = FUN_140ec6960();
  _DAT_14ca95cb0 = &LAB_14682652b;
  _DAT_14ca95cb8 = 0x1000000f4;
  _DAT_14ca95cc0 = 0;
  _DAT_14ca95ca8 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95c98;
  return;
}



// FUNCTION 145dd2ac8 FUN_145dd2ac8 body=121 status=ok
// SIG undefined FUN_145dd2ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2ac8(void)

{
  FUN_145dd2bbe();
  _DAT_14ca95cc8 = L"IndexBufferStrideParam";
  DAT_14ca95cf2 = FUN_140850cc5();
  _DAT_14ca95cd0 = FUN_140ec6960();
  _DAT_14ca95ce0 = &LAB_14682652b;
  _DAT_14ca95ce8 = 0x1000000fa;
  _DAT_14ca95cf0 = 0;
  _DAT_14ca95cd8 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95cc8;
  return;
}



// FUNCTION 145dd2b42 FUN_145dd2b42 body=123 status=ok
// SIG undefined FUN_145dd2b42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2b42(void)

{
  _DAT_14ca96068 = L"BASE";
  DAT_14ca96092 = 4;
  _DAT_14ca96070 = FUN_140b35ae4();
  _DAT_14ca96078 = DAT_14ca94e58;
  _DAT_14ca96080 = &LAB_14682652b;
  DAT_14ca94e58 = &DAT_14ca96068;
  DAT_14ca94ead = DAT_14ca94ead + '\x01';
  _DAT_14ca96088 = 0x100000000;
  if (*(char *)(_DAT_14ca96070 + 100) != '\0') {
    DAT_14ca94eae = DAT_14ca94eae + '\x01';
  }
  return;
}



// FUNCTION 145dd2bbe FUN_145dd2bbe body=216 status=ok
// SIG undefined FUN_145dd2bbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2bbe(void)

{
  _DAT_14ca95d28 = L"MaxVerticesParam";
  DAT_14ca95d52 = FUN_140850cc5();
  _DAT_14ca95d30 = FUN_140ec6960();
  _DAT_14ca95d40 = &LAB_14682652b;
  _DAT_14ca95d48 = 0x100000106;
  _DAT_14ca95d50 = 0;
  _DAT_14ca95d38 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95d28;
  _DAT_14ca95cf8 = L"NumPrimitivesParam";
  DAT_14ca95d22 = FUN_140850cc5();
  _DAT_14ca95d00 = FUN_140ec6960();
  _DAT_14ca95d10 = &LAB_14682652b;
  _DAT_14ca95d18 = 0x100000100;
  _DAT_14ca95d20 = 0;
  _DAT_14ca95d08 = DAT_14ca94e58;
  DAT_14ca94e58 = &DAT_14ca95cf8;
  return;
}



// FUNCTION 145dd2c96 FUN_145dd2c96 body=284 status=ok
// SIG undefined FUN_145dd2c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd2c96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad3f68) {
    FUN_144b3d300(&DAT_14cad3f68);
    if (DAT_14cad3f68 == -1) {
      FUN_145dd2db2();
      FUN_140db5666(&DAT_14cad3ec0,0,&DAT_14cad3e58,L"FCubemapTexturePropertiesPS",
                    L"/Engine/Private/SimpleElementPixelShader.usf",L"CubemapTextureProperties",3,4,
                    FUN_147a3c502,FUN_147a3c4da,&LAB_147a3c49a,&LAB_147a3c496,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cad3ec0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1434a7244);
      _Init_thread_footer(&DAT_14cad3f68);
    }
  }
  return &DAT_14cad3ec0;
}



// FUNCTION 145dd2db2 FUN_145dd2db2 body=210 status=ok
// SIG undefined FUN_145dd2db2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2db2(void)

{
  if ((DAT_14cad3ebf & 2) == 0) {
    DAT_14cad3ebf = DAT_14cad3ebf | 2;
    _DAT_14cad3e60 = L"FCubemapTexturePropertiesPS";
    _DAT_14cad3e78 = FUN_146826540;
    _DAT_14cad3e80 = FUN_146825d77;
    _DAT_14cad3e88 = FUN_146825fd6;
    _DAT_14cad3e90 = FUN_1407e02ea;
    _DAT_14cad3e98 = FUN_146826273;
    _DAT_14cad3e70 = FUN_147a3c468;
    _DAT_14cad3eb0 = 0xffffffff00000110;
    _DAT_14cad3eb8 = 8;
    DAT_14cad3ebc = 0;
    _DAT_14cad3ea0 = &LAB_147a3c492;
    FUN_145dd2e84();
    FUN_145dd3160();
    FUN_1407e00cc(&DAT_14cad3e58);
    return;
  }
  return;
}



// FUNCTION 145dd2e84 FUN_145dd2e84 body=121 status=ok
// SIG undefined FUN_145dd2e84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2e84(void)

{
  FUN_145dd2efe();
  _DAT_14cad5658 = L"CubeTexture";
  DAT_14cad5682 = FUN_140850cc5();
  _DAT_14cad5660 = FUN_140fb78d0();
  _DAT_14cad5670 = &LAB_14682652b;
  _DAT_14cad5678 = 0x1000000e0;
  _DAT_14cad5680 = 0;
  _DAT_14cad5668 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad5658;
  return;
}



// FUNCTION 145dd2efe FUN_145dd2efe body=121 status=ok
// SIG undefined FUN_145dd2efe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2efe(void)

{
  FUN_145dd2f78();
  _DAT_14cad5688 = L"CubeTextureSampler";
  DAT_14cad56b2 = FUN_140850cc5();
  _DAT_14cad5690 = FUN_140fb78d0();
  _DAT_14cad56a0 = &LAB_14682652b;
  _DAT_14cad56a8 = 0x1000000e4;
  _DAT_14cad56b0 = 0;
  _DAT_14cad5698 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad5688;
  return;
}



// FUNCTION 145dd2f78 FUN_145dd2f78 body=121 status=ok
// SIG undefined FUN_145dd2f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2f78(void)

{
  FUN_145dd2ff2();
  _DAT_14cad56b8 = L"PackedProperties0";
  DAT_14cad56e2 = FUN_140850cc5();
  _DAT_14cad56c0 = FUN_140ec6960();
  _DAT_14cad56d0 = &LAB_14682652b;
  _DAT_14cad56d8 = 0x1000000e8;
  _DAT_14cad56e0 = 0;
  _DAT_14cad56c8 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad56b8;
  return;
}



// FUNCTION 145dd2ff2 FUN_145dd2ff2 body=121 status=ok
// SIG undefined FUN_145dd2ff2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd2ff2(void)

{
  FUN_145dd306c();
  _DAT_14cad56e8 = L"ColorWeights";
  DAT_14cad5712 = FUN_140850cc5();
  _DAT_14cad56f0 = FUN_140ec6960();
  _DAT_14cad5700 = &LAB_14682652b;
  _DAT_14cad5708 = 0x1000000ee;
  _DAT_14cad5710 = 0;
  _DAT_14cad56f8 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad56e8;
  return;
}



// FUNCTION 145dd306c FUN_145dd306c body=121 status=ok
// SIG undefined FUN_145dd306c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd306c(void)

{
  FUN_145dd30e6();
  _DAT_14cad5718 = L"Gamma";
  DAT_14cad5742 = FUN_140850cc5();
  _DAT_14cad5720 = FUN_140ec6960();
  _DAT_14cad5730 = &LAB_14682652b;
  _DAT_14cad5738 = 0x1000000f4;
  _DAT_14cad5740 = 0;
  _DAT_14cad5728 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad5718;
  return;
}



// FUNCTION 145dd30e6 FUN_145dd30e6 body=121 status=ok
// SIG undefined FUN_145dd30e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd30e6(void)

{
  FUN_145dd31dc();
  _DAT_14cad5748 = L"NumSlices";
  DAT_14cad5772 = FUN_140850cc5();
  _DAT_14cad5750 = FUN_140ec6960();
  _DAT_14cad5760 = &LAB_14682652b;
  _DAT_14cad5768 = 0x1000000fa;
  _DAT_14cad5770 = 0;
  _DAT_14cad5758 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad5748;
  return;
}



// FUNCTION 145dd3160 FUN_145dd3160 body=123 status=ok
// SIG undefined FUN_145dd3160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd3160(void)

{
  _DAT_14cad5898 = L"BASE";
  DAT_14cad58c2 = 4;
  _DAT_14cad58a0 = FUN_140b35ae4();
  _DAT_14cad58a8 = DAT_14cad3e68;
  _DAT_14cad58b0 = &LAB_14682652b;
  DAT_14cad3e68 = &DAT_14cad5898;
  DAT_14cad3ebd = DAT_14cad3ebd + '\x01';
  _DAT_14cad58b8 = 0x100000000;
  if (*(char *)(_DAT_14cad58a0 + 100) != '\0') {
    DAT_14cad3ebe = DAT_14cad3ebe + '\x01';
  }
  return;
}



// FUNCTION 145dd31dc FUN_145dd31dc body=216 status=ok
// SIG undefined FUN_145dd31dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd31dc(void)

{
  _DAT_14cad57a8 = L"ViewMatrix";
  DAT_14cad57d2 = FUN_140850cc5();
  _DAT_14cad57b0 = FUN_140ec6960();
  _DAT_14cad57c0 = &LAB_14682652b;
  _DAT_14cad57c8 = 0x100000106;
  _DAT_14cad57d0 = 0;
  _DAT_14cad57b8 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad57a8;
  _DAT_14cad5778 = L"SliceIndex";
  DAT_14cad57a2 = FUN_140850cc5();
  _DAT_14cad5780 = FUN_140ec6960();
  _DAT_14cad5790 = &LAB_14682652b;
  _DAT_14cad5798 = 0x100000100;
  _DAT_14cad57a0 = 0;
  _DAT_14cad5788 = DAT_14cad3e68;
  DAT_14cad3e68 = &DAT_14cad5778;
  return;
}



// FUNCTION 145dd32b4 FUN_145dd32b4 body=303 status=ok
// SIG undefined FUN_145dd32b4(void)

void FUN_145dd32b4(longlong param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_140056680(local_38,L"Cancel");
  FUN_145dd33e4(&local_28,local_38);
  *(undefined8 *)(param_1 + 8) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"Confirm");
  FUN_145dd33e4(&local_28,local_38);
  *(undefined8 *)(param_1 + 0x20) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"PreviousTab");
  FUN_145dd33e4(&local_28,local_38);
  *(undefined8 *)(param_1 + 0x10) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_38,L"NextTab");
  FUN_145dd33e4(&local_28,local_38);
  *(undefined8 *)(param_1 + 0x18) = local_28;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd33e4 FUN_145dd33e4 body=388 status=ok
// SIG undefined FUN_145dd33e4(void)

undefined8 * FUN_145dd33e4(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 8) < 2) {
    *param_1 = 0;
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_140002266(&local_48,&DAT_14ae67640,L"UI.Action");
    iVar4 = local_40 + -1;
    puVar3 = local_48;
    if (local_40 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar4 = 0;
    }
    cVar2 = FUN_144a791f8(param_2,puVar3,iVar4,1);
    if (cVar2 == '\0') {
      FUN_140474144(&local_58,&local_48,param_2);
      local_38 = (undefined2 *)CONCAT44(uStack_54,local_58);
      uStack_30 = CONCAT44(uStack_4c,uStack_50);
    }
    else {
      FUN_144a787a6(&local_38,param_2);
    }
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    lVar1 = DAT_14caa8580;
    FUN_140056680(&local_58,L"(Native)");
    puVar3 = local_38;
    if ((int)uStack_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_68,puVar3,1);
    FUN_1413e432a(lVar1,&local_60,local_68,&local_58);
    *param_1 = local_60;
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd356a FUN_145dd356a body=985 status=ok
// SIG undefined FUN_145dd356a(void)

bool FUN_145dd356a(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_138 [32];
  undefined ***local_118;
  undefined8 local_110;
  undefined1 local_108;
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  int local_e0;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined **local_58;
  int local_50;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar1 = FUN_14490d72a(param_4);
  if (iVar1 == 3) {
    lVar5 = param_1[0x18];
    if ((((lVar5 == 0) || (lVar7 = FUN_144a75eb4(), lVar7 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1[0x18];
    }
    local_118 = &local_d8;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = (undefined **)0x0;
    uStack_d0 = 0;
    local_a8 = 0x4800000100;
    local_98 = 0;
    local_88 = (longlong *)0x0;
    lVar5 = FUN_141137228(param_4,lVar5,0,0);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    param_1[6] = lVar5;
    plVar2 = (longlong *)FUN_140161992(DAT_14cb0d2b0,param_4);
    uVar3 = 0xff;
    if ((longlong)(int)plVar2[1] != 0) {
      lVar5 = (longlong)(int)plVar2[1] << 3;
      lVar7 = 0;
      do {
        if (*(longlong **)(*plVar2 + lVar7 * 8) == param_1) {
          uVar3 = (undefined1)lVar7;
          break;
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    *(undefined1 *)(param_1[6] + 0x5a4) = uVar3;
    lVar5 = param_1[6];
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    *(longlong **)(lVar5 + 0x430) = param_1;
    if (local_98 != 0) {
      plVar2 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar2 = local_78;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  else {
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    FUN_140245d8a(&local_d8,0,puVar6,0);
    (**(code **)(*param_1 + 0x330))(param_1,&local_e8);
    if (local_e0 - 2U < 0x7fffffff) {
      FUN_140002266(&local_58,L"Name=%s");
      ppuVar4 = local_58;
      if (local_50 == 0) {
        ppuVar4 = (undefined **)&DAT_149dfb77a;
      }
      FUN_141556918(&local_d8,ppuVar4);
      if (local_58 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*param_1 + 0x338))(param_1,&local_f8);
    if (local_f0 - 2U < 0x7fffffff) {
      FUN_140002266(&local_58,&DAT_149e0625e);
      ppuVar4 = local_58;
      if (local_50 == 0) {
        ppuVar4 = (undefined **)&DAT_149dfb77a;
      }
      FUN_141556918(&local_d8,ppuVar4);
      if (local_58 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*param_1 + 0x350))(param_1,&local_58);
    plVar2 = (longlong *)FUN_140161992(DAT_14cb0d2b0,param_4);
    local_108 = 0xff;
    if ((longlong)(int)plVar2[1] != 0) {
      lVar5 = (longlong)(int)plVar2[1] << 3;
      lVar7 = 0;
      do {
        if (*(longlong **)(*plVar2 + lVar7 * 8) == param_1) {
          local_108 = (undefined1)lVar7;
          break;
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    local_118 = &local_58;
    local_110 = param_3;
    lVar5 = FUN_141556b84(param_4,param_1,1,&local_d8);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    param_1[6] = lVar5;
    local_58 = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_141238aee(&local_d8);
  }
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1[6] != 0;
}



// FUNCTION 145dd3944 FUN_145dd3944 body=240 status=ok
// SIG undefined FUN_145dd3944(void)

undefined8 * FUN_145dd3944(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined1 local_38 [16];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_140489acc();
    local_48 = 0;
    (**(code **)(*plVar2 + 0x2f0))(plVar2,&local_40,lVar1,(int)param_1[0x20]);
    *param_2 = &PTR_FUN_14a184370;
    *(byte *)(param_2 + 3) = local_28;
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_28])(param_2 + 1,local_38);
    *param_2 = &PTR_FUN_14a5af930;
    param_2[4] = 0;
    param_2[5] = 0;
    local_40 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_28])(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14a5af930;
  param_2[4] = 0;
  param_2[5] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145dd3a36 FUN_145dd3a36 body=364 status=ok
// SIG undefined FUN_145dd3a36(void)

longlong * FUN_145dd3a36(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined **local_58;
  uint local_50;
  undefined4 uStack_4c;
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    local_68 = 0;
    uStack_60 = 0;
    plVar4 = (longlong *)FUN_140489acc();
    cVar2 = (**(code **)(*plVar4 + 0x300))(plVar4,lVar3,(int)param_1[0x20],&local_68);
    if (cVar2 != '\0') {
      *param_2 = local_68;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
      goto LAB_145dd3aae;
    }
    (**(code **)(*param_1 + 0x350))(param_1,&local_58);
    if ((&DAT_149fc1b6e)[local_40] == '\x01') {
      if ((longlong *)CONCAT44(uStack_4c,local_50) != (longlong *)0x0) {
        cVar2 = (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x28))();
        if (cVar2 != '\0') goto LAB_145dd3b7f;
      }
LAB_145dd3b0c:
      bVar1 = false;
    }
    else {
      if ((local_50 & 0xffffff) == 0) goto LAB_145dd3b0c;
LAB_145dd3b7f:
      plVar4 = (longlong *)FUN_140489acc();
      (**(code **)(*plVar4 + 0x2f8))(plVar4,param_2,lVar3,&local_58);
      bVar1 = true;
    }
    local_58 = &PTR_FUN_14a5af930;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    local_58 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])(&local_50);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (bVar1) goto LAB_145dd3aae;
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
LAB_145dd3aae:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd3ba4 FUN_145dd3ba4 body=140 status=ok
// SIG undefined FUN_145dd3ba4(void)

undefined1 * FUN_145dd3ba4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd3c30();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"QueueParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FQueueParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca1b898;
  return &LAB_147267acc;
}



// FUNCTION 145dd3c30 FUN_145dd3c30 body=258 status=ok
// SIG undefined FUN_145dd3c30(void)

void FUN_145dd3c30(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b918) {
    FUN_144b3d300(&DAT_14ca1b918);
    if (DAT_14ca1b918 == -1) {
      FUN_145dd3d34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_50 = 0x20;
      local_58 = 0x20;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FQueueParameters";
      local_38 = 0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b898,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a6c0);
      _Init_thread_footer(&DAT_14ca1b918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd3d34 FUN_145dd3d34 body=226 status=ok
// SIG undefined FUN_145dd3d34(void)

longlong * FUN_145dd3d34(longlong *param_1)

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
  pcVar13 = FUN_1462f4024;
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



// FUNCTION 145dd3e18 FUN_145dd3e18 body=138 status=ok
// SIG undefined FUN_145dd3e18(void)

code * FUN_145dd3e18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNodes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd3f2c;
}



// FUNCTION 145dd3ea2 FUN_145dd3ea2 body=138 status=ok
// SIG undefined FUN_145dd3ea2(void)

code * FUN_145dd3ea2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodesAndClusterBatches";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f40ac;
}



// FUNCTION 145dd3f2c FUN_145dd3f2c body=138 status=ok
// SIG undefined FUN_145dd3f2c(void)

code * FUN_145dd3f2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CandidateClusters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd3ea2;
}



// FUNCTION 145dd3fbc FUN_145dd3fbc body=226 status=ok
// SIG undefined FUN_145dd3fbc(void)

void FUN_145dd3fbc(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb28af0 == '\0') {
    lVar2 = FUN_14038fb82();
    FUN_1446f470e(&local_38,L"Transform",1);
    uVar3 = FUN_1458cbe84();
    iVar1 = *(int *)(lVar2 + 0xd60);
    lVar5 = (longlong)iVar1;
    *(uint *)(lVar2 + 0xd60) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xd64) < iVar1 + 1U) {
      FUN_145dd40a0(lVar2 + 0xd30,iVar1);
    }
    lVar4 = lVar2 + 0xd30;
    if (*(longlong *)(lVar2 + 0xd58) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0xd58);
    }
    *(undefined8 *)(lVar4 + lVar5 * 0x28) = uVar3;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x28) = local_38;
    *(undefined2 *)(lVar4 + 0x10 + lVar5 * 0x28) = 0xffff;
    *(code **)(lVar4 + 0x18 + lVar5 * 0x28) = FUN_147fc0a9a;
    *(code **)(lVar4 + 0x20 + lVar5 * 0x28) = FUN_147fc0ad4;
    DAT_14cb28af0 = '\x01';
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd40a0 FUN_145dd40a0 body=147 status=ok
// SIG undefined FUN_145dd40a0(void)

void FUN_145dd40a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 2) {
      uVar5 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x34) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x28,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
        uVar5 = uVar4 / 0x28 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x34) = (int)uVar5;
    FUN_145dd4134(param_1,param_2,uVar5,0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145dd4134 FUN_145dd4134 body=141 status=ok
// SIG undefined FUN_145dd4134(void)

void FUN_145dd4134(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 145dd41c2 FUN_145dd41c2 body=140 status=ok
// SIG undefined FUN_145dd41c2(void)

undefined1 * FUN_145dd41c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd424e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FEdgeDetection2ApplyTargetChangesParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c3930;
  return &LAB_145e7e848;
}



// FUNCTION 145dd424e FUN_145dd424e body=261 status=ok
// SIG undefined FUN_145dd424e(void)

void FUN_145dd424e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c39b0) {
    FUN_144b3d300(&DAT_14c9c39b0);
    if (DAT_14c9c39b0 == -1) {
      FUN_145dd4354(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEdgeDetection2ApplyTargetChangesParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x119;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3930,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc0a64);
      _Init_thread_footer(&DAT_14c9c39b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd4354 FUN_145dd4354 body=226 status=ok
// SIG undefined FUN_145dd4354(void)

longlong * FUN_145dd4354(longlong *param_1)

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
  pcVar13 = FUN_1462bc3a4;
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



// FUNCTION 145dd4438 FUN_145dd4438 body=136 status=ok
// SIG undefined FUN_145dd4438(void)

undefined1 * FUN_145dd4438(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147148ad6;
}



// FUNCTION 145dd44c0 FUN_145dd44c0 body=138 status=ok
// SIG undefined FUN_145dd44c0(void)

code * FUN_145dd44c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ApplySampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147148a4c;
}



// FUNCTION 145dd454a FUN_145dd454a body=138 status=ok
// SIG undefined FUN_145dd454a(void)

code * FUN_145dd454a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd4438;
}



// FUNCTION 145dd45d4 FUN_145dd45d4 body=292 status=ok
// SIG undefined FUN_145dd45d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd45d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f3798) {
    FUN_144b3d300(&DAT_14c9f3798);
    if (DAT_14c9f3798 == -1) {
      FUN_145dd46f8();
      FUN_145dd47fe();
      FUN_140db5666(&DAT_14c9f36f0,0,&DAT_14c9f3688,L"FLumenReflectionHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/LumenReflectionHardwareRayTracing.usf",
                    L"LumenReflectionHardwareRayTracingCS",5,0x300,FUN_1471ee014,FUN_1471edfb4,
                    &LAB_140bb8c90,&LAB_1471edfb0,&LAB_1471edfac,&LAB_14712ac08,0xe0,&DAT_14c9f6618)
      ;
      _DAT_14c9f36f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3bc64);
      _Init_thread_footer(&DAT_14c9f3798);
    }
  }
  return &DAT_14c9f36f0;
}



// FUNCTION 145dd46f8 FUN_145dd46f8 body=261 status=ok
// SIG undefined FUN_145dd46f8(void)

void FUN_145dd46f8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f6698) {
    FUN_144b3d300(&DAT_14c9f6698);
    if (DAT_14c9f6698 == -1) {
      FUN_141556d34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x5b0;
      local_58 = 0x78;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6618,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58717);
      _Init_thread_footer(&DAT_14c9f6698);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd47fe FUN_145dd47fe body=205 status=ok
// SIG undefined FUN_145dd47fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd47fe(void)

{
  if ((DAT_14c9f36ef & 2) == 0) {
    DAT_14c9f36ef = DAT_14c9f36ef | 2;
    _DAT_14c9f3690 = L"FLumenReflectionHardwareRayTracingCS";
    _DAT_14c9f36a8 = FUN_146826540;
    _DAT_14c9f36b0 = FUN_146825d77;
    _DAT_14c9f36b8 = FUN_146825fd6;
    _DAT_14c9f36c0 = FUN_1407e02ea;
    _DAT_14c9f36c8 = FUN_146826273;
    _DAT_14c9f36a0 = FUN_1471edf7e;
    _DAT_14c9f36e0 = 0xffffffff000000e0;
    _DAT_14c9f36e8 = 8;
    DAT_14c9f36ec = 0;
    _DAT_14c9f36d0 = &LAB_1471edfa8;
    FUN_145dd48cc();
    FUN_1407e00cc(&DAT_14c9f3688);
    return;
  }
  return;
}



// FUNCTION 145dd48cc FUN_145dd48cc body=123 status=ok
// SIG undefined FUN_145dd48cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd48cc(void)

{
  _DAT_14c9f7c38 = L"BASE";
  DAT_14c9f7c62 = 4;
  _DAT_14c9f7c40 = FUN_140b35ae4();
  _DAT_14c9f7c48 = DAT_14c9f3698;
  _DAT_14c9f7c50 = &LAB_14682652b;
  DAT_14c9f3698 = &DAT_14c9f7c38;
  DAT_14c9f36ed = DAT_14c9f36ed + '\x01';
  _DAT_14c9f7c58 = 0x100000000;
  if (*(char *)(_DAT_14c9f7c40 + 100) != '\0') {
    DAT_14c9f36ee = DAT_14c9f36ee + '\x01';
  }
  return;
}



// FUNCTION 145dd494c FUN_145dd494c body=138 status=ok
// SIG undefined FUN_145dd494c(void)

code * FUN_145dd494c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HitLightingSkylight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b80000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f6aa2;
}



// FUNCTION 145dd49d6 FUN_145dd49d6 body=138 status=ok
// SIG undefined FUN_145dd49d6(void)

code * FUN_145dd49d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f7340;
}



// FUNCTION 145dd4a60 FUN_145dd4a60 body=292 status=ok
// SIG undefined FUN_145dd4a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd4a60(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa580) {
    FUN_144b3d300(&DAT_14c9fa580);
    if (DAT_14c9fa580 == -1) {
      FUN_145dd4b84();
      FUN_145dd4c8a();
      FUN_140db5666(&DAT_14c9fa4d8,0,&DAT_14c9fa470,L"FLumenDirectLightingHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingHardwareRayTracing.usf",
                    L"LumenSceneDirectLightingHardwareRayTracingCS",5,0x20,FUN_14720614c,
                    FUN_1472060ec,FUN_14176b5ba,&LAB_1472060e8,&LAB_1472060e4,&LAB_14712ac08,0xe0,
                    &DAT_14c9fe778);
      _DAT_14c9fa4d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b491);
      _Init_thread_footer(&DAT_14c9fa580);
    }
  }
  return &DAT_14c9fa4d8;
}



// FUNCTION 145dd4b84 FUN_145dd4b84 body=261 status=ok
// SIG undefined FUN_145dd4b84(void)

void FUN_145dd4b84(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe7f8) {
    FUN_144b3d300(&DAT_14c9fe7f8);
    if (DAT_14c9fe7f8 == -1) {
      FUN_141556e18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x350;
      local_58 = 0x6a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe778,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9b93d);
      _Init_thread_footer(&DAT_14c9fe7f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd4c8a FUN_145dd4c8a body=205 status=ok
// SIG undefined FUN_145dd4c8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd4c8a(void)

{
  if ((DAT_14c9fa4d7 & 2) == 0) {
    DAT_14c9fa4d7 = DAT_14c9fa4d7 | 2;
    _DAT_14c9fa478 = L"FLumenDirectLightingHardwareRayTracingCS";
    _DAT_14c9fa490 = FUN_146826540;
    _DAT_14c9fa498 = FUN_146825d77;
    _DAT_14c9fa4a0 = FUN_146825fd6;
    _DAT_14c9fa4a8 = FUN_1407e02ea;
    _DAT_14c9fa4b0 = FUN_146826273;
    _DAT_14c9fa488 = FUN_1472060b6;
    _DAT_14c9fa4c8 = 0xffffffff000000e0;
    _DAT_14c9fa4d0 = 8;
    DAT_14c9fa4d4 = 0;
    _DAT_14c9fa4b8 = &LAB_1472060e0;
    FUN_145dd4d58();
    FUN_1407e00cc(&DAT_14c9fa470);
    return;
  }
  return;
}



// FUNCTION 145dd4d58 FUN_145dd4d58 body=123 status=ok
// SIG undefined FUN_145dd4d58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd4d58(void)

{
  _DAT_14c9fff98 = L"BASE";
  DAT_14c9fffc2 = 4;
  _DAT_14c9fffa0 = FUN_140b35ae4();
  _DAT_14c9fffa8 = DAT_14c9fa480;
  _DAT_14c9fffb0 = &LAB_14682652b;
  DAT_14c9fa480 = &DAT_14c9fff98;
  DAT_14c9fa4d5 = DAT_14c9fa4d5 + '\x01';
  _DAT_14c9fffb8 = 0x100000000;
  if (*(char *)(_DAT_14c9fffa0 + 100) != '\0') {
    DAT_14c9fa4d6 = DAT_14c9fa4d6 + '\x01';
  }
  return;
}



// FUNCTION 145dd4dd8 FUN_145dd4dd8 body=138 status=ok
// SIG undefined FUN_145dd4dd8(void)

code * FUN_145dd4dd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowTraces";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22800000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721305c;
}



// FUNCTION 145dd4e62 FUN_145dd4e62 body=138 status=ok
// SIG undefined FUN_145dd4e62(void)

code * FUN_145dd4e62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedLightSampleAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472128d0;
}



// FUNCTION 145dd4eec FUN_145dd4eec body=292 status=ok
// SIG undefined FUN_145dd4eec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd4eec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27c38) {
    FUN_144b3d300(&DAT_14ca27c38);
    if (DAT_14ca27c38 == -1) {
      FUN_145dd5010();
      FUN_145dd5116();
      FUN_140db5666(&DAT_14ca27b90,0,&DAT_14ca27b28,L"FHMDDistortionPS",
                    L"/Engine/Private/PostProcessHMD.usf",L"MainPS",3,1,FUN_14728c316,FUN_14728c2b6,
                    &LAB_14728c2b2,&LAB_14728c2ae,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca2bc80)
      ;
      _DAT_14ca27b90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ec3377);
      _Init_thread_footer(&DAT_14ca27c38);
    }
  }
  return &DAT_14ca27b90;
}



// FUNCTION 145dd5010 FUN_145dd5010 body=261 status=ok
// SIG undefined FUN_145dd5010(void)

void FUN_145dd5010(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2bd00) {
    FUN_144b3d300(&DAT_14ca2bd00);
    if (DAT_14ca2bd00 == -1) {
      FUN_145dd5260(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHMDDistortionParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2bc80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee4353);
      _Init_thread_footer(&DAT_14ca2bd00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd5116 FUN_145dd5116 body=205 status=ok
// SIG undefined FUN_145dd5116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd5116(void)

{
  if ((DAT_14ca27b8f & 2) == 0) {
    DAT_14ca27b8f = DAT_14ca27b8f | 2;
    _DAT_14ca27b30 = L"FHMDDistortionPS";
    _DAT_14ca27b48 = FUN_146826540;
    _DAT_14ca27b50 = FUN_146825d77;
    _DAT_14ca27b58 = FUN_146825fd6;
    _DAT_14ca27b60 = FUN_1407e02ea;
    _DAT_14ca27b68 = FUN_146826273;
    _DAT_14ca27b40 = FUN_14728c27e;
    _DAT_14ca27b80 = 0xffffffff000000e0;
    _DAT_14ca27b88 = 8;
    DAT_14ca27b8c = 0;
    _DAT_14ca27b70 = &LAB_14728c2aa;
    FUN_145dd51e4();
    FUN_1407e00cc(&DAT_14ca27b28);
    return;
  }
  return;
}



// FUNCTION 145dd51e4 FUN_145dd51e4 body=123 status=ok
// SIG undefined FUN_145dd51e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd51e4(void)

{
  _DAT_14ca2c270 = L"BASE";
  DAT_14ca2c29a = 4;
  _DAT_14ca2c278 = FUN_140b35ae4();
  _DAT_14ca2c280 = DAT_14ca27b38;
  _DAT_14ca2c288 = &LAB_14682652b;
  DAT_14ca27b38 = &DAT_14ca2c270;
  DAT_14ca27b8d = DAT_14ca27b8d + '\x01';
  _DAT_14ca2c290 = 0x100000000;
  if (*(char *)(_DAT_14ca2c278 + 100) != '\0') {
    DAT_14ca27b8e = DAT_14ca27b8e + '\x01';
  }
  return;
}



// FUNCTION 145dd5260 FUN_145dd5260 body=226 status=ok
// SIG undefined FUN_145dd5260(void)

longlong * FUN_145dd5260(longlong *param_1)

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
  pcVar13 = FUN_1462faf48;
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



// FUNCTION 145dd5348 FUN_145dd5348 body=138 status=ok
// SIG undefined FUN_145dd5348(void)

code * FUN_145dd5348(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeToSrcUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147291f66;
}



// FUNCTION 145dd53d2 FUN_145dd53d2 body=138 status=ok
// SIG undefined FUN_145dd53d2(void)

code * FUN_145dd53d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeToSrcUVOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd5348;
}



// FUNCTION 145dd545c FUN_145dd545c body=292 status=ok
// SIG undefined FUN_145dd545c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd545c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca693b0) {
    FUN_144b3d300(&DAT_14ca693b0);
    if (DAT_14ca693b0 == -1) {
      FUN_145dd5580();
      FUN_145dd5686();
      FUN_140db5666(&DAT_14ca69308,0,&DAT_14ca692a0,L"FVisualizeVolumetricLightmapVS",
                    L"/Engine/Private/VisualizeVolumetricLightmap.usf",
                    L"VisualizeVolumetricLightmapVS",0,1,FUN_147333b0a,FUN_147333aaa,&LAB_147333a92,
                    &LAB_147333a8e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca6c5d8);
      _DAT_14ca69308 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430f5a81);
      _Init_thread_footer(&DAT_14ca693b0);
    }
  }
  return &DAT_14ca69308;
}



// FUNCTION 145dd5580 FUN_145dd5580 body=261 status=ok
// SIG undefined FUN_145dd5580(void)

void FUN_145dd5580(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c658) {
    FUN_144b3d300(&DAT_14ca6c658);
    if (DAT_14ca6c658 == -1) {
      FUN_145dd57d0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVisualizeVolumetricLightmapParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x33;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c5d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d41b);
      _Init_thread_footer(&DAT_14ca6c658);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd5686 FUN_145dd5686 body=205 status=ok
// SIG undefined FUN_145dd5686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd5686(void)

{
  if ((DAT_14ca69307 & 2) == 0) {
    DAT_14ca69307 = DAT_14ca69307 | 2;
    _DAT_14ca692a8 = L"FVisualizeVolumetricLightmapVS";
    _DAT_14ca692c0 = FUN_146826540;
    _DAT_14ca692c8 = FUN_146825d77;
    _DAT_14ca692d0 = FUN_146825fd6;
    _DAT_14ca692d8 = FUN_1407e02ea;
    _DAT_14ca692e0 = FUN_146826273;
    _DAT_14ca692b8 = FUN_147333a60;
    _DAT_14ca692f8 = 0xffffffff000000e0;
    _DAT_14ca69300 = 8;
    DAT_14ca69304 = 0;
    _DAT_14ca692e8 = &LAB_147333a8a;
    FUN_145dd5754();
    FUN_1407e00cc(&DAT_14ca692a0);
    return;
  }
  return;
}



// FUNCTION 145dd5754 FUN_145dd5754 body=123 status=ok
// SIG undefined FUN_145dd5754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd5754(void)

{
  _DAT_14ca6d130 = L"BASE";
  DAT_14ca6d15a = 4;
  _DAT_14ca6d138 = FUN_140b35ae4();
  _DAT_14ca6d140 = DAT_14ca692b0;
  _DAT_14ca6d148 = &LAB_14682652b;
  DAT_14ca692b0 = &DAT_14ca6d130;
  DAT_14ca69305 = DAT_14ca69305 + '\x01';
  _DAT_14ca6d150 = 0x100000000;
  if (*(char *)(_DAT_14ca6d138 + 100) != '\0') {
    DAT_14ca69306 = DAT_14ca69306 + '\x01';
  }
  return;
}



// FUNCTION 145dd57d0 FUN_145dd57d0 body=226 status=ok
// SIG undefined FUN_145dd57d0(void)

longlong * FUN_145dd57d0(longlong *param_1)

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
  pcVar13 = FUN_146313d64;
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



// FUNCTION 145dd58b8 FUN_145dd58b8 body=138 status=ok
// SIG undefined FUN_145dd58b8(void)

code * FUN_145dd58b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiffuseColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146313dec;
}



// FUNCTION 145dd5942 FUN_145dd5942 body=138 status=ok
// SIG undefined FUN_145dd5942(void)

code * FUN_145dd5942(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizationRadiusScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd58b8;
}



// FUNCTION 145dd59cc FUN_145dd59cc body=48 status=ok
// SIG undefined FUN_145dd59cc(void)

void FUN_145dd59cc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145dd59fc FUN_145dd59fc body=91 status=ok
// SIG undefined FUN_145dd59fc(void)

void FUN_145dd59fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_145dd5a58();
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
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
    DAT_14cbce1ec = 0;
  }
  return;
}



// FUNCTION 145dd5a58 FUN_145dd5a58 body=177 status=ok
// SIG undefined FUN_145dd5a58(void)

void FUN_145dd5a58(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145d6e806();
  local_48 = 0;
  uStack_40 = 0;
  FUN_145d6e8b0();
  local_58 = 0;
  uStack_50 = 0;
  FUN_145d6e95a();
  local_68 = 0;
  uStack_60 = 0;
  FUN_145d6ea04();
  local_78 = 0;
  uStack_70 = 0;
  FUN_145d6eaae();
  uVar1 = FUN_145d6e79a();
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14480f766(uVar1);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd5b0a FUN_145dd5b0a body=217 status=ok
// SIG undefined FUN_145dd5b0a(void)

void FUN_145dd5b0a(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x5f0);
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4f58c0;
  local_38[3] = param_1;
  *(undefined1 *)(local_38 + 4) = param_2;
  FUN_145dd5be4(uVar1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd5be4 FUN_145dd5be4 body=227 status=ok
// SIG undefined FUN_145dd5be4(void)

void FUN_145dd5be4(undefined8 param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  FUN_145dd5d6a(plVar3,param_2);
  plVar1 = plVar3 + 2;
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_145dd5cc8(&local_40,plVar1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_30 = plVar1;
  local_28 = plVar3;
  FUN_1411d7792(param_1,&local_30);
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd5cc8 FUN_145dd5cc8 body=162 status=ok
// SIG undefined FUN_145dd5cc8(void)

void FUN_145dd5cc8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145dd5d07;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145dd5d07;
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
LAB_145dd5d07:
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
                    /* WARNING: Could not recover jumptable at 0x000145dd5d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145dd5d6a FUN_145dd5d6a body=172 status=ok
// SIG undefined FUN_145dd5d6a(void)

undefined8 * FUN_145dd5d6a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_FUN_14b4f5930;
  local_28 = *param_2;
  *param_2 = 0;
  local_20 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x2c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[2] = &PTR_FUN_14b4f5950;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14009d848(param_1 + 6,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd5e18 FUN_145dd5e18 body=376 status=ok
// SIG undefined FUN_145dd5e18(void)

void FUN_145dd5e18(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eff4e8;
  FUN_144760e21(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x28];
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
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145dd5f9a(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145dd5fd0(param_1 + 7);
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



// FUNCTION 145dd5f90 FUN_145dd5f90 body=9 status=ok
// SIG undefined FUN_145dd5f90(void)

void FUN_145dd5f90(longlong param_1)

{
  FUN_145dd6006(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145dd5f9a FUN_145dd5f9a body=53 status=ok
// SIG undefined FUN_145dd5f9a(void)

void FUN_145dd5f9a(longlong *param_1)

{
  FUN_145dd60d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dd5fd0 FUN_145dd5fd0 body=53 status=ok
// SIG undefined FUN_145dd5fd0(void)

void FUN_145dd5fd0(longlong *param_1)

{
  FUN_145dd6210();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dd6006 FUN_145dd6006 body=74 status=ok
// SIG undefined FUN_145dd6006(void)

void FUN_145dd6006(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 145dd6050 FUN_145dd6050 body=9 status=ok
// SIG undefined FUN_145dd6050(void)

void FUN_145dd6050(longlong param_1)

{
  FUN_145dd605a(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145dd605a FUN_145dd605a body=64 status=ok
// SIG undefined FUN_145dd605a(void)

void FUN_145dd605a(longlong param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145dd609a(param_1);
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 145dd609a FUN_145dd609a body=53 status=ok
// SIG undefined FUN_145dd609a(void)

void FUN_145dd609a(longlong *param_1)

{
  FUN_145dd636c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145dd60d0 FUN_145dd60d0 body=318 status=ok
// SIG undefined FUN_145dd60d0(void)

void FUN_145dd60d0(longlong *param_1)

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
      FUN_14582c2d6(*local_68 + (longlong)iStack_4c * 0x80 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14095c99c(param_1,0);
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



// FUNCTION 145dd6210 FUN_145dd6210 body=346 status=ok
// SIG undefined FUN_145dd6210(void)

void FUN_145dd6210(longlong *param_1)

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
      FUN_1469e470c(*local_68 + (longlong)iStack_4c * 0xb0 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1467f17ac(param_1,0);
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



// FUNCTION 145dd636c FUN_145dd636c body=378 status=ok
// SIG undefined FUN_145dd636c(void)

void FUN_145dd636c(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x28 + (longlong)iStack_54 * 0x40);
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
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 145dd64e8 FUN_145dd64e8 body=138 status=ok
// SIG undefined FUN_145dd64e8(void)

undefined1 * FUN_145dd64e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd6572();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheInputs";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRadianceCacheInputs";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x29;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147137160;
}



// FUNCTION 145dd6572 FUN_145dd6572 body=268 status=ok
// SIG undefined FUN_145dd6572(void)

undefined * FUN_145dd6572(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0368) {
    FUN_144b3d300(&DAT_14c9c0368);
    if (DAT_14c9c0368 == -1) {
      FUN_141557076(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRadianceCacheInputs";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x13;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c02e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8dfaf);
      _Init_thread_footer(&DAT_14c9c0368);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c02e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd6680 FUN_145dd6680 body=132 status=ok
// SIG undefined FUN_145dd6680(void)

undefined1 * FUN_145dd6680(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReprojectionRadiusScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147137752;
}



// FUNCTION 145dd6704 FUN_145dd6704 body=138 status=ok
// SIG undefined FUN_145dd6704(void)

code * FUN_145dd6704(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IrradianceProbeResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b6e48;
}



// FUNCTION 145dd678e FUN_145dd678e body=138 status=ok
// SIG undefined FUN_145dd678e(void)

code * FUN_145dd678e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvClipmapFadeSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713763e;
}



// FUNCTION 145dd6818 FUN_145dd6818 body=1028 status=ok
// SIG undefined FUN_145dd6818(void)

void FUN_145dd6818(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145dd6c1e();
  FUN_145dd6c28(param_1);
  cVar6 = FUN_1414e62ca(*(undefined8 *)(param_1 + 0x50));
  if (cVar6 != '\0') {
    FUN_145c2b2ec(param_1,&local_40);
    if (local_40 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      plStack_50 = (longlong *)0x0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      local_68 = local_40;
      local_60 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_140b7090e(uVar4,&local_58,&local_68);
      plVar8 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_60 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    FUN_14101cf30(*(undefined8 *)(param_1 + 0x50),&local_68);
    if ((longlong)(int)local_60 == 0) {
      uVar7 = 0;
    }
    else {
      lVar9 = (longlong)(int)local_60 << 4;
      plVar8 = local_68;
      do {
        if ((((local_58 == (longlong *)0x0) || (local_58 != (longlong *)*plVar8)) &&
            (*(int *)(*plVar8 + 0x14) == 0)) &&
           (cVar6 = FUN_145dd6ca2(param_1 + 0x1f8,plVar8), cVar6 != '\0')) {
          local_78 = *(longlong *)*plVar8;
          plVar5 = (longlong *)((longlong *)*plVar8)[1];
          if (plVar5 == (longlong *)0x0) {
            local_70 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_70 = plVar5;
          }
          FUN_140056680(local_88,L"player_left");
          FUN_145c29a14(param_1,local_88,&local_78);
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          plVar1 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_70 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
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
        }
        plVar8 = plVar8 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      uVar7 = (ulonglong)local_60 & 0xffffffff;
    }
    FUN_14101cee4(local_68,uVar7);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar8 = plStack_50;
    if (local_58 != (longlong *)0x0) {
      local_68 = local_58;
      local_60 = plStack_50;
      if (plStack_50 == (longlong *)0x0) {
        cVar6 = FUN_145dd6ca2(param_1 + 0x1f8,&local_68);
      }
      else {
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        cVar6 = FUN_145dd6ca2(param_1 + 0x1f8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
      }
      if (cVar6 != '\0') {
        local_68 = (longlong *)*local_58;
        plVar8 = (longlong *)local_58[1];
        if (plVar8 == (longlong *)0x0) {
          local_60 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_60 = plVar8;
        }
        FUN_140056680(&local_78,L"player_left");
        FUN_145c29a14(param_1,&local_78,&local_68);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar8 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
      }
    }
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_50 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_38 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145dd6c1e FUN_145dd6c1e body=10 status=ok
// SIG undefined FUN_145dd6c1e(void)

void FUN_145dd6c1e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145dd6c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}



// FUNCTION 145dd6c28 FUN_145dd6c28 body=121 status=ok
// SIG undefined FUN_145dd6c28(void)

void FUN_145dd6c28(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x2d0))();
    if (lVar1 != 0) {
      lVar2 = FUN_1403ca142();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         (*(longlong *)(param_1 + 0x198) != 0)) {
        FUN_14480f766(lVar1 + 0x1c8);
      }
    }
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}



// FUNCTION 145dd6ca2 FUN_145dd6ca2 body=147 status=ok
// SIG undefined FUN_145dd6ca2(void)

undefined4 FUN_145dd6ca2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)*param_2;
  plVar3 = (longlong *)((undefined8 *)*param_2)[1];
  local_20 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    uVar4 = FUN_145dd6d36(param_1,&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = FUN_145dd6d36();
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd6d36 FUN_145dd6d36 body=176 status=ok
// SIG undefined FUN_145dd6d36(void)

int FUN_145dd6d36(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    iVar4 = FUN_145dd6de8(param_1 + 0x48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_28 = plVar3;
    iVar4 = FUN_145dd6de8(param_1 + 0x48);
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
  if (iVar4 != 0) {
    FUN_145c29ef6(param_1);
    FUN_145c29c4e(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd6de8 FUN_145dd6de8 body=270 status=ok
// SIG undefined FUN_145dd6de8(void)

undefined8 FUN_145dd6de8(longlong *param_1,longlong *param_2)

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
  undefined8 uVar10;
  undefined4 *puVar11;
  
  uVar10 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x40))();
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar8 + uVar9 * 4);
    if (iVar6 != -1) {
      puVar11 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
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
        cVar5 = '\x01';
        if (puVar4 != (undefined8 *)*param_2) {
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
          FUN_145dd6ef6(param_1,*puVar11);
          uVar10 = 1;
          break;
        }
        lVar3 = lVar3 + lVar7 * 0x28;
        iVar6 = *(int *)(lVar3 + 0x20);
        puVar11 = (undefined4 *)(lVar3 + 0x20);
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return uVar10;
}



// FUNCTION 145dd6ef6 FUN_145dd6ef6 body=116 status=ok
// SIG undefined FUN_145dd6ef6(void)

void FUN_145dd6ef6(longlong *param_1,int param_2)

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
  FUN_145dd6f6a((longlong)param_2 * 0x28 + *param_1);
  FUN_145dd6fd0(param_1,param_2);
  return;
}



// FUNCTION 145dd6f6a FUN_145dd6f6a body=101 status=ok
// SIG undefined FUN_145dd6f6a(void)

void FUN_145dd6f6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000145dd6fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145dd6fd0 FUN_145dd6fd0 body=112 status=ok
// SIG undefined FUN_145dd6fd0(void)

void FUN_145dd6fd0(longlong *param_1,int param_2)

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



// FUNCTION 145dd7040 FUN_145dd7040 body=63 status=ok
// SIG undefined FUN_145dd7040(void)

undefined1 FUN_145dd7040(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145dd7080(param_2,param_3);
    param_3 = param_3 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return 1;
}



// FUNCTION 145dd7080 FUN_145dd7080 body=328 status=ok
// SIG undefined FUN_145dd7080(void)

undefined8 * FUN_145dd7080(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar6 = param_2[2];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[2];
    }
  }
  bVar5 = DAT_14c950c29;
  param_1[2] = lVar6;
  param_1[3] = param_2[3];
  lVar6 = param_2[4];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[4];
      bVar5 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar6;
  param_1[5] = param_2[5];
  lVar6 = param_2[6];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[6];
      bVar5 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar6;
  param_1[7] = param_2[7];
  lVar6 = param_2[8];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[8];
    }
  }
  param_1[8] = lVar6;
  param_1[9] = param_2[9];
  FUN_1407b25f0(param_1 + 10,param_2 + 10);
  uVar1 = *(undefined4 *)((longlong)param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x26);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  FUN_1447715ec(param_1 + 0x27,param_2 + 0x27);
  uVar4 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar4;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
  return param_1;
}



// FUNCTION 145dd71c8 FUN_145dd71c8 body=146 status=ok
// SIG undefined FUN_145dd71c8(void)

code * FUN_145dd71c8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd725a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GeometryAwareUpsampleParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGeometryAwareUpsampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c80e0;
  return FUN_1462be710;
}



// FUNCTION 145dd725a FUN_145dd725a body=261 status=ok
// SIG undefined FUN_145dd725a(void)

void FUN_145dd725a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c8160) {
    FUN_144b3d300(&DAT_14c9c8160);
    if (DAT_14c9c8160 == -1) {
      FUN_145dd7360(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGeometryAwareUpsampleParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x4c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c80e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be763a);
      _Init_thread_footer(&DAT_14c9c8160);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd7360 FUN_145dd7360 body=226 status=ok
// SIG undefined FUN_145dd7360(void)

longlong * FUN_145dd7360(longlong *param_1)

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
  pcVar13 = FUN_1462be7a0;
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



// FUNCTION 145dd7444 FUN_145dd7444 body=132 status=ok
// SIG undefined FUN_145dd7444(void)

undefined1 * FUN_145dd7444(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldNormalTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471516a4;
}



// FUNCTION 145dd74c8 FUN_145dd74c8 body=138 status=ok
// SIG undefined FUN_145dd74c8(void)

code * FUN_145dd74c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldNormalSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd7444;
}



// FUNCTION 145dd7552 FUN_145dd7552 body=138 status=ok
// SIG undefined FUN_145dd7552(void)

code * FUN_145dd7552(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldGBufferJitterOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715147c;
}



// FUNCTION 145dd75dc FUN_145dd75dc body=140 status=ok
// SIG undefined FUN_145dd75dc(void)

undefined1 * FUN_145dd75dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd7668();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricCloud";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVolumetricCloudCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x278;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6c6e8;
  return &LAB_147336560;
}



// FUNCTION 145dd7668 FUN_145dd7668 body=261 status=ok
// SIG undefined FUN_145dd7668(void)

void FUN_145dd7668(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c768) {
    FUN_144b3d300(&DAT_14ca6c768);
    if (DAT_14ca6c768 == -1) {
      FUN_14155715a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVolumetricCloudCommonShaderParameters";
      local_38 = 0;
      local_50 = 0x370;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c6e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d433);
      _Init_thread_footer(&DAT_14ca6c768);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd776e FUN_145dd776e body=138 status=ok
// SIG undefined FUN_145dd776e(void)

code * FUN_145dd776e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudShadowmapLightDir";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733692a;
}



// FUNCTION 145dd77f8 FUN_145dd77f8 body=138 status=ok
// SIG undefined FUN_145dd77f8(void)

code * FUN_145dd77f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudShadowmapTranslatedWorldToLightClipMatrixInv";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473369b4;
}



// FUNCTION 145dd7882 FUN_145dd7882 body=138 status=ok
// SIG undefined FUN_145dd7882(void)

code * FUN_145dd7882(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightCloudBottomVisibility";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147336e04;
}



// FUNCTION 145dd790c FUN_145dd790c body=210 status=ok
// SIG undefined FUN_145dd790c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd790c(void)

{
  if ((DAT_14cb2cbdf & 2) == 0) {
    DAT_14cb2cbdf = DAT_14cb2cbdf | 2;
    _DAT_14cb2cb80 = L"FNiagaraSpriteVertexFactoryShaderParametersVS";
    _DAT_14cb2cb98 = FUN_146826540;
    _DAT_14cb2cba0 = FUN_146825d77;
    _DAT_14cb2cba8 = FUN_146825fd6;
    _DAT_14cb2cbb0 = FUN_1407e02ea;
    _DAT_14cb2cbb8 = FUN_146826273;
    _DAT_14cb2cb90 = &LAB_148043630;
    _DAT_14cb2cbd0 = 0xffffffff00000024;
    _DAT_14cb2cbd8 = 4;
    DAT_14cb2cbdc = 0;
    _DAT_14cb2cbc0 = &LAB_148043646;
    FUN_145dd79de();
    FUN_145dd7bc6();
    FUN_1407e00cc(&DAT_14cb2cb78);
    return;
  }
  return;
}



// FUNCTION 145dd79de FUN_145dd79de body=121 status=ok
// SIG undefined FUN_145dd79de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd79de(void)

{
  FUN_145dd7a58();
  _DAT_14cb2d110 = L"NumCutoutVerticesPerFrame";
  DAT_14cb2d13a = FUN_140850cc5();
  _DAT_14cb2d118 = FUN_140ec6960();
  _DAT_14cb2d128 = &LAB_14682652b;
  _DAT_14cb2d130 = &DAT_100000004;
  _DAT_14cb2d138 = 0;
  _DAT_14cb2d120 = DAT_14cb2cb88;
  DAT_14cb2cb88 = &DAT_14cb2d110;
  return;
}



// FUNCTION 145dd7a58 FUN_145dd7a58 body=121 status=ok
// SIG undefined FUN_145dd7a58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd7a58(void)

{
  FUN_145dd7ad2();
  _DAT_14cb2d140 = L"ParticleAlignmentMode";
  DAT_14cb2d16a = FUN_140850cc5();
  _DAT_14cb2d148 = FUN_140ec6960();
  _DAT_14cb2d158 = &LAB_14682652b;
  _DAT_14cb2d160 = &DAT_10000000a;
  _DAT_14cb2d168 = 0;
  _DAT_14cb2d150 = DAT_14cb2cb88;
  DAT_14cb2cb88 = &DAT_14cb2d140;
  return;
}



// FUNCTION 145dd7ad2 FUN_145dd7ad2 body=121 status=ok
// SIG undefined FUN_145dd7ad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd7ad2(void)

{
  FUN_145dd7b4c();
  _DAT_14cb2d170 = L"ParticleFacingMode";
  DAT_14cb2d19a = FUN_140850cc5();
  _DAT_14cb2d178 = FUN_140ec6960();
  _DAT_14cb2d188 = &LAB_14682652b;
  _DAT_14cb2d190 = &DAT_100000010;
  _DAT_14cb2d198 = 0;
  _DAT_14cb2d180 = DAT_14cb2cb88;
  DAT_14cb2cb88 = &DAT_14cb2d170;
  return;
}



// FUNCTION 145dd7b4c FUN_145dd7b4c body=121 status=ok
// SIG undefined FUN_145dd7b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd7b4c(void)

{
  FUN_145dd7c4c();
  _DAT_14cb2d1a0 = L"CutoutGeometry";
  DAT_14cb2d1ca = FUN_140850cc5();
  _DAT_14cb2d1a8 = FUN_140fb78d0();
  _DAT_14cb2d1b8 = &LAB_14682652b;
  _DAT_14cb2d1c0 = 0x100000016;
  _DAT_14cb2d1c8 = 0;
  _DAT_14cb2d1b0 = DAT_14cb2cb88;
  DAT_14cb2cb88 = &DAT_14cb2d1a0;
  return;
}



// FUNCTION 145dd7bc6 FUN_145dd7bc6 body=133 status=ok
// SIG undefined FUN_145dd7bc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd7bc6(void)

{
  _DAT_14cb2d410 = L"BASE";
  DAT_14cb2d43a = 4;
  FUN_145be946e();
  _DAT_14cb2d420 = DAT_14cb2cb88;
  _DAT_14cb2d418 = &DAT_14cb2cce8;
  _DAT_14cb2d428 = &LAB_14682652b;
  DAT_14cb2cb88 = &DAT_14cb2d410;
  DAT_14cb2cbdd = DAT_14cb2cbdd + '\x01';
  _DAT_14cb2d430 = 0x100000000;
  if (DAT_14cb2cd4c != '\0') {
    DAT_14cb2cbde = DAT_14cb2cbde + '\x01';
  }
  return;
}



// FUNCTION 145dd7c4c FUN_145dd7c4c body=216 status=ok
// SIG undefined FUN_145dd7c4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd7c4c(void)

{
  _DAT_14cb2d200 = L"SortedIndicesOffset";
  DAT_14cb2d22a = FUN_140850cc5();
  _DAT_14cb2d208 = FUN_140ec6960();
  _DAT_14cb2d218 = &LAB_14682652b;
  _DAT_14cb2d220 = 0x10000001e;
  _DAT_14cb2d228 = 0;
  _DAT_14cb2d210 = DAT_14cb2cb88;
  DAT_14cb2cb88 = &DAT_14cb2d200;
  _DAT_14cb2d1d0 = L"SortedIndices";
  DAT_14cb2d1fa = FUN_140850cc5();
  _DAT_14cb2d1d8 = FUN_140fb78d0();
  _DAT_14cb2d1e8 = &LAB_14682652b;
  _DAT_14cb2d1f0 = 0x10000001a;
  _DAT_14cb2d1f8 = 0;
  _DAT_14cb2d1e0 = DAT_14cb2cb88;
  DAT_14cb2cb88 = &DAT_14cb2d1d0;
  return;
}



// FUNCTION 145dd7d2a FUN_145dd7d2a body=169 status=ok
// SIG undefined FUN_145dd7d2a(void)

void FUN_145dd7d2a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_149fbb000;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 2;
  puVar1[9] = 0x3ee889a03eb4efed;
  puVar1[10] = &DAT_3f8000003f800000;
  puVar1[7] = 0x3e30ba1f3f800000;
  puVar1[8] = 0x3f80000000000000;
  puVar1[0xb] = 0x3f451eb83c5e69ad;
  puVar1[0xc] = 0x3f8000003edbf5b6;
  puVar1[0xd] = 0x3f19999a3e4ccccd;
  puVar1[0xe] = &DAT_3f8000003f800000;
  puVar1[0xf] = 0x3e99999a3e99999a;
  puVar1[0x10] = 0x3f8000003e99999a;
  return;
}



// FUNCTION 145dd7dde FUN_145dd7dde body=172 status=ok
// SIG undefined FUN_145dd7dde(void)

undefined8 * FUN_145dd7dde(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a663cb0;
  memset(param_1 + 0x16,0,0xf0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb260) {
    FUN_144b3d300(&DAT_14caeb260);
    if (DAT_14caeb260 == -1) {
      FUN_14155723e();
      atexit((_func_5014 *)&LAB_14356ddf1);
      _Init_thread_footer(&DAT_14caeb260);
    }
  }
  return param_1;
}



// FUNCTION 145dd7e96 FUN_145dd7e96 body=172 status=ok
// SIG undefined FUN_145dd7e96(void)

undefined8 * FUN_145dd7e96(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6664c0;
  memset(param_1 + 0x16,0,0x88);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebdb8) {
    FUN_144b3d300(&DAT_14caebdb8);
    if (DAT_14caebdb8 == -1) {
      FUN_1415572e4();
      atexit((_func_5014 *)&LAB_14356f1e6);
      _Init_thread_footer(&DAT_14caebdb8);
    }
  }
  return param_1;
}



// FUNCTION 145dd7f4e FUN_145dd7f4e body=172 status=ok
// SIG undefined FUN_145dd7f4e(void)

undefined8 * FUN_145dd7f4e(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67bbb0;
  memset(param_1 + 0x16,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeba70) {
    FUN_144b3d300(&DAT_14caeba70);
    if (DAT_14caeba70 == -1) {
      FUN_14155738a();
      atexit((_func_5014 *)&LAB_14356eeb5);
      _Init_thread_footer(&DAT_14caeba70);
    }
  }
  return param_1;
}



// FUNCTION 145dd8006 FUN_145dd8006 body=172 status=ok
// SIG undefined FUN_145dd8006(void)

undefined8 * FUN_145dd8006(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a681680;
  memset(param_1 + 0x16,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb248) {
    FUN_144b3d300(&DAT_14caeb248);
    if (DAT_14caeb248 == -1) {
      FUN_141557430();
      atexit((_func_5014 *)&LAB_14356dddd);
      _Init_thread_footer(&DAT_14caeb248);
    }
  }
  return param_1;
}



// FUNCTION 145dd80be FUN_145dd80be body=172 status=ok
// SIG undefined FUN_145dd80be(void)

undefined8 * FUN_145dd80be(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a684900;
  memset(param_1 + 0x16,0,0x168);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeaa50) {
    FUN_144b3d300(&DAT_14caeaa50);
    if (DAT_14caeaa50 == -1) {
      FUN_1415574d6();
      atexit((_func_5014 *)&LAB_14356d51c);
      _Init_thread_footer(&DAT_14caeaa50);
    }
  }
  return param_1;
}



// FUNCTION 145dd8176 FUN_145dd8176 body=172 status=ok
// SIG undefined FUN_145dd8176(void)

undefined8 * FUN_145dd8176(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a68a610;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb278) {
    FUN_144b3d300(&DAT_14caeb278);
    if (DAT_14caeb278 == -1) {
      FUN_14155757c();
      atexit((_func_5014 *)&LAB_14356dee1);
      _Init_thread_footer(&DAT_14caeb278);
    }
  }
  return param_1;
}



// FUNCTION 145dd822e FUN_145dd822e body=172 status=ok
// SIG undefined FUN_145dd822e(void)

undefined8 * FUN_145dd822e(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a68b790;
  memset(param_1 + 0x16,0,0xa0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebd10) {
    FUN_144b3d300(&DAT_14caebd10);
    if (DAT_14caebd10 == -1) {
      FUN_141557622();
      atexit((_func_5014 *)&LAB_14356f15a);
      _Init_thread_footer(&DAT_14caebd10);
    }
  }
  return param_1;
}



// FUNCTION 145dd82e6 FUN_145dd82e6 body=163 status=ok
// SIG undefined FUN_145dd82e6(void)

undefined8 * FUN_145dd82e6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_14a6d40e0;
  param_1[0x13] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x85) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  param_1[0x16] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x14] = DAT_14c8464e0;
  param_1[0x15] = uVar1;
  param_1[0x19] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x17] = DAT_14c8464e0;
  param_1[0x18] = uVar1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x83;
  return param_1;
}



// FUNCTION 145dd838a FUN_145dd838a body=37 status=ok
// SIG undefined FUN_145dd838a(void)

void FUN_145dd838a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  FUN_145dd83b0(param_2);
  return;
}



// FUNCTION 145dd83b0 FUN_145dd83b0 body=137 status=ok
// SIG undefined FUN_145dd83b0(void)

undefined8 * FUN_145dd83b0(undefined8 *param_1)

{
  FUN_140d710e4();
  *param_1 = &PTR_FUN_14ac860d0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x14] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = &PTR_FUN_14a1a0a00;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 145dd843a FUN_145dd843a body=279 status=ok
// SIG undefined FUN_145dd843a(void)

undefined4 * FUN_145dd843a(longlong param_1,undefined4 *param_2,undefined8 param_3)

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
  FUN_145dd87ba(param_1,local_48);
  FUN_145dd8552(param_3,local_40);
  local_40[0x16] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_145dd86fc(param_1,uVar4,local_40,&local_4c);
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
      FUN_145dd88aa(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd8552 FUN_145dd8552 body=149 status=ok
// SIG undefined FUN_145dd8552(void)

undefined4 * FUN_145dd8552(undefined8 *param_1,undefined4 *param_2)

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
  FUN_145dd85e8(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd85e8 FUN_145dd85e8 body=125 status=ok
// SIG undefined FUN_145dd85e8(void)

undefined8 * FUN_145dd85e8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145dd8666();
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



// FUNCTION 145dd8666 FUN_145dd8666 body=150 status=ok
// SIG undefined FUN_145dd8666(void)

longlong * FUN_145dd8666(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
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
  return param_1;
}



// FUNCTION 145dd86fc FUN_145dd86fc body=189 status=ok
// SIG undefined FUN_145dd86fc(void)

undefined8 FUN_145dd86fc(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_145852fa4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_145cc7aaa(param_1,*param_4);
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



// FUNCTION 145dd87ba FUN_145dd87ba body=239 status=ok
// SIG undefined FUN_145dd87ba(void)

int * FUN_145dd87ba(longlong *param_1,int *param_2)

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



// FUNCTION 145dd88aa FUN_145dd88aa body=432 status=ok
// SIG undefined FUN_145dd88aa(void)

void FUN_145dd88aa(longlong *param_1)

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



// FUNCTION 145dd8a5c FUN_145dd8a5c body=40 status=ok
// SIG undefined FUN_145dd8a5c(void)

undefined8 FUN_145dd8a5c(undefined8 param_1,int param_2)

{
  FUN_145dd8a84();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145dd8a84 FUN_145dd8a84 body=134 status=ok
// SIG undefined FUN_145dd8a84(void)

void FUN_145dd8a84(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdc5830;
  param_1[5] = &PTR_FUN_14bdc5c40;
  param_1[0x13] = &PTR_FUN_14bdc5c60;
  param_1[0x17] = &PTR_FUN_14bdc5c90;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
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



// FUNCTION 145dd8b0a FUN_145dd8b0a body=158 status=ok
// SIG undefined FUN_145dd8b0a(void)

bool FUN_145dd8b0a(longlong param_1,undefined8 param_2)

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



// FUNCTION 145dd8baa FUN_145dd8baa body=232 status=ok
// SIG undefined FUN_145dd8baa(void)

void FUN_145dd8baa(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  *(int *)(lVar3 + 0x1f8) = *(int *)(lVar3 + 0x1f8) + 1;
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
  FUN_140f9ed8d(*(undefined8 *)(lVar3 + 0x60),*(undefined4 *)(lVar3 + 0x68));
  *(undefined4 *)(lVar3 + 0x68) = 0;
  if (*(int *)(lVar3 + 0x6c) != 0) {
    FUN_140f9edf6(lVar3 + 0x60,0);
  }
  *(int *)(lVar3 + 0x70) = *(int *)(lVar3 + 0x70) + 1;
  FUN_140f9ed8d(*(undefined8 *)(lVar3 + 0x48),*(undefined4 *)(lVar3 + 0x50));
  *(undefined4 *)(lVar3 + 0x50) = 0;
  if (*(int *)(lVar3 + 0x54) != 0) {
    FUN_140f9edf6(lVar3 + 0x48,0);
  }
  *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd8c94 FUN_145dd8c94 body=292 status=ok
// SIG undefined FUN_145dd8c94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd8c94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa330) {
    FUN_144b3d300(&DAT_14c9fa330);
    if (DAT_14c9fa330 == -1) {
      FUN_145dd8db8();
      FUN_145dd8ebe();
      FUN_140db5666(&DAT_14c9fa288,0,&DAT_14c9fa220,L"FLumenSceneDebugHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/LumenSceneDebugHardwareRayTracing.usf",
                    L"LumenSceneDebugHardwareRayTracingCS",5,2,FUN_147205fca,FUN_147205f6a,
                    &LAB_145885402,&LAB_147205f66,&LAB_147205f62,&LAB_14712ac08,0xe0,&DAT_14c9fe6f0)
      ;
      _DAT_14c9fa288 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b479);
      _Init_thread_footer(&DAT_14c9fa330);
    }
  }
  return &DAT_14c9fa288;
}



// FUNCTION 145dd8db8 FUN_145dd8db8 body=261 status=ok
// SIG undefined FUN_145dd8db8(void)

void FUN_145dd8db8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe770) {
    FUN_144b3d300(&DAT_14c9fe770);
    if (DAT_14c9fe770 == -1) {
      FUN_145dd9008(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x220;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe6f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9b931);
      _Init_thread_footer(&DAT_14c9fe770);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd8ebe FUN_145dd8ebe body=205 status=ok
// SIG undefined FUN_145dd8ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd8ebe(void)

{
  if ((DAT_14c9fa287 & 2) == 0) {
    DAT_14c9fa287 = DAT_14c9fa287 | 2;
    _DAT_14c9fa228 = L"FLumenSceneDebugHardwareRayTracingCS";
    _DAT_14c9fa240 = FUN_146826540;
    _DAT_14c9fa248 = FUN_146825d77;
    _DAT_14c9fa250 = FUN_146825fd6;
    _DAT_14c9fa258 = FUN_1407e02ea;
    _DAT_14c9fa260 = FUN_146826273;
    _DAT_14c9fa238 = FUN_147205f34;
    _DAT_14c9fa278 = 0xffffffff000000e0;
    _DAT_14c9fa280 = 8;
    DAT_14c9fa284 = 0;
    _DAT_14c9fa268 = &LAB_147205f5e;
    FUN_145dd8f8c();
    FUN_1407e00cc(&DAT_14c9fa220);
    return;
  }
  return;
}



// FUNCTION 145dd8f8c FUN_145dd8f8c body=123 status=ok
// SIG undefined FUN_145dd8f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd8f8c(void)

{
  _DAT_14c9fff38 = L"BASE";
  DAT_14c9fff62 = 4;
  _DAT_14c9fff40 = FUN_140b35ae4();
  _DAT_14c9fff48 = DAT_14c9fa230;
  _DAT_14c9fff50 = &LAB_14682652b;
  DAT_14c9fa230 = &DAT_14c9fff38;
  DAT_14c9fa285 = DAT_14c9fa285 + '\x01';
  _DAT_14c9fff58 = 0x100000000;
  if (*(char *)(_DAT_14c9fff40 + 100) != '\0') {
    DAT_14c9fa286 = DAT_14c9fa286 + '\x01';
  }
  return;
}



// FUNCTION 145dd9008 FUN_145dd9008 body=226 status=ok
// SIG undefined FUN_145dd9008(void)

longlong * FUN_145dd9008(longlong *param_1)

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
  pcVar13 = FUN_1462e3c4a;
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



// FUNCTION 145dd90f0 FUN_145dd90f0 body=138 status=ok
// SIG undefined FUN_145dd90f0(void)

code * FUN_145dd90f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ResolutionScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dd917a;
}



// FUNCTION 145dd917a FUN_145dd917a body=144 status=ok
// SIG undefined FUN_145dd917a(void)

code * FUN_145dd917a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1f000000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e3cd2;
}



// FUNCTION 145dd920a FUN_145dd920a body=292 status=ok
// SIG undefined FUN_145dd920a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145dd920a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca08c10) {
    FUN_144b3d300(&DAT_14ca08c10);
    if (DAT_14ca08c10 == -1) {
      FUN_145dd932e();
      FUN_145dd9434();
      FUN_140db5666(&DAT_14ca08b68,0,&DAT_14ca08b00,L"FHardwareRayTraceLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsHardwareRayTracing.usf",
                    L"HardwareRayTraceLightSamplesCS",5,0x60,FUN_1472394e4,FUN_147239484,
                    &LAB_140db4146,&LAB_147239480,&LAB_14723947c,&LAB_14712ac08,0xe0,&DAT_14ca0e200)
      ;
      _DAT_14ca08b68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de1569);
      _Init_thread_footer(&DAT_14ca08c10);
    }
  }
  return &DAT_14ca08b68;
}



// FUNCTION 145dd932e FUN_145dd932e body=261 status=ok
// SIG undefined FUN_145dd932e(void)

void FUN_145dd932e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0e280) {
    FUN_144b3d300(&DAT_14ca0e280);
    if (DAT_14ca0e280 == -1) {
      FUN_1415576c8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x360;
      local_58 = 0x16e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e200,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeb73);
      _Init_thread_footer(&DAT_14ca0e280);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd9434 FUN_145dd9434 body=205 status=ok
// SIG undefined FUN_145dd9434(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd9434(void)

{
  if ((DAT_14ca08b67 & 2) == 0) {
    DAT_14ca08b67 = DAT_14ca08b67 | 2;
    _DAT_14ca08b08 = L"FHardwareRayTraceLightSamplesCS";
    _DAT_14ca08b20 = FUN_146826540;
    _DAT_14ca08b28 = FUN_146825d77;
    _DAT_14ca08b30 = FUN_146825fd6;
    _DAT_14ca08b38 = FUN_1407e02ea;
    _DAT_14ca08b40 = FUN_146826273;
    _DAT_14ca08b18 = FUN_14723944e;
    _DAT_14ca08b58 = 0xffffffff000000e0;
    _DAT_14ca08b60 = 8;
    DAT_14ca08b64 = 0;
    _DAT_14ca08b48 = &LAB_147239478;
    FUN_145dd9502();
    FUN_1407e00cc(&DAT_14ca08b00);
    return;
  }
  return;
}



// FUNCTION 145dd9502 FUN_145dd9502 body=123 status=ok
// SIG undefined FUN_145dd9502(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145dd9502(void)

{
  _DAT_14ca0ea90 = L"BASE";
  DAT_14ca0eaba = 4;
  _DAT_14ca0ea98 = FUN_140b35ae4();
  _DAT_14ca0eaa0 = DAT_14ca08b10;
  _DAT_14ca0eaa8 = &LAB_14682652b;
  DAT_14ca08b10 = &DAT_14ca0ea90;
  DAT_14ca08b65 = DAT_14ca08b65 + '\x01';
  _DAT_14ca0eab0 = 0x100000000;
  if (*(char *)(_DAT_14ca0ea98 + 100) != '\0') {
    DAT_14ca08b66 = DAT_14ca08b66 + '\x01';
  }
  return;
}



// FUNCTION 145dd9582 FUN_145dd9582 body=138 status=ok
// SIG undefined FUN_145dd9582(void)

code * FUN_145dd9582(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightSampleRayDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31000000174;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147242ad2;
}



// FUNCTION 145dd960c FUN_145dd960c body=144 status=ok
// SIG undefined FUN_145dd960c(void)

code * FUN_145dd960c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1414087ac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MegaLightsParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMegaLightsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000170;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145c10acc;
}



// FUNCTION 145dd969c FUN_145dd969c body=142 status=ok
// SIG undefined FUN_145dd969c(void)

code * FUN_145dd969c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd972a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Attributes";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceAttributeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe00000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147175e9a;
}



// FUNCTION 145dd972a FUN_145dd972a body=268 status=ok
// SIG undefined FUN_145dd972a(void)

undefined * FUN_145dd972a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d5748) {
    FUN_144b3d300(&DAT_14c9d5748);
    if (DAT_14c9d5748 == -1) {
      FUN_145dd9838(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairStrandsInstanceAttributeParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d56c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2be);
      _Init_thread_footer(&DAT_14c9d5748);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d56c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd9838 FUN_145dd9838 body=226 status=ok
// SIG undefined FUN_145dd9838(void)

longlong * FUN_145dd9838(longlong *param_1)

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
  pcVar13 = FUN_1462c9212;
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



// FUNCTION 145dd991c FUN_145dd991c body=132 status=ok
// SIG undefined FUN_145dd991c(void)

undefined1 * FUN_145dd991c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveAttributeIndexToChunkDivAsShift";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471760c2;
}



// FUNCTION 145dd99a0 FUN_145dd99a0 body=138 status=ok
// SIG undefined FUN_145dd99a0(void)

code * FUN_145dd99a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointAttributeChunkElementCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c929a;
}



// FUNCTION 145dd9a2a FUN_145dd9a2a body=138 status=ok
// SIG undefined FUN_145dd9a2a(void)

code * FUN_145dd9a2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveAttributeChunkStrideInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176038;
}



// FUNCTION 145dd9ab4 FUN_145dd9ab4 body=138 status=ok
// SIG undefined FUN_145dd9ab4(void)

undefined1 * FUN_145dd9ab4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd9b3e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNiagaraMeshCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x53;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_148044d34;
}



// FUNCTION 145dd9b3e FUN_145dd9b3e body=268 status=ok
// SIG undefined FUN_145dd9b3e(void)

undefined * FUN_145dd9b3e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2d080) {
    FUN_144b3d300(&DAT_14cb2d080);
    if (DAT_14cb2d080 == -1) {
      FUN_1415577ac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraMeshCommonParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x1f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2d000,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6d53);
      _Init_thread_footer(&DAT_14cb2d080);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2d000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd9c4c FUN_145dd9c4c body=136 status=ok
// SIG undefined FUN_145dd9c4c(void)

code * FUN_145dd9c4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DefaultPrevScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148044ed6;
}



// FUNCTION 145dd9cd4 FUN_145dd9cd4 body=138 status=ok
// SIG undefined FUN_145dd9cd4(void)

code * FUN_145dd9cd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac0000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1480454c4;
}



// FUNCTION 145dd9d5e FUN_145dd9d5e body=138 status=ok
// SIG undefined FUN_145dd9d5e(void)

code * FUN_145dd9d5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RotationDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa400000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804554e;
}



// FUNCTION 145dd9de8 FUN_145dd9de8 body=144 status=ok
// SIG undefined FUN_145dd9de8(void)

code * FUN_145dd9de8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd9e78();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"UV1Settings";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNiagaraRibbonUVSettingsParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd0000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6f044;
}



// FUNCTION 145dd9e78 FUN_145dd9e78 body=268 status=ok
// SIG undefined FUN_145dd9e78(void)

undefined * FUN_145dd9e78(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb33de0) {
    FUN_144b3d300(&DAT_14cb33de0);
    if (DAT_14cb33de0 == -1) {
      FUN_145dd9f86(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraRibbonUVSettingsParams";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xba;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33d60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb760);
      _Init_thread_footer(&DAT_14cb33de0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33d60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dd9f86 FUN_145dd9f86 body=226 status=ok
// SIG undefined FUN_145dd9f86(void)

longlong * FUN_145dd9f86(longlong *param_1)

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
  pcVar13 = FUN_146462012;
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



// FUNCTION 145dda06a FUN_145dda06a body=132 status=ok
// SIG undefined FUN_145dda06a(void)

undefined1 * FUN_145dda06a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Offset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148051e34;
}



// FUNCTION 145dda0ee FUN_145dda0ee body=136 status=ok
// SIG undefined FUN_145dda0ee(void)

code * FUN_145dda0ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistributionMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148051d20;
}



// FUNCTION 145dda176 FUN_145dda176 body=138 status=ok
// SIG undefined FUN_145dda176(void)

code * FUN_145dda176(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bEnablePerParticleUOverride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148051c0c;
}



// FUNCTION 145dda200 FUN_145dda200 body=351 status=ok
// SIG undefined FUN_145dda200(void)

void FUN_145dda200(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    local_20 = FUN_145dda360();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 3;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    local_20 = FUN_145dda399();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 3;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    local_20 = FUN_145dda3d2();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 3;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dda360 FUN_145dda360 body=57 status=ok
// SIG undefined FUN_145dda360(void)

void FUN_145dda360(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992258 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992258 = FUN_14171c317(FUN_146284cd2,uVar1,L"EFieldVectorType");
  }
  return;
}



// FUNCTION 145dda399 FUN_145dda399 body=57 status=ok
// SIG undefined FUN_145dda399(void)

void FUN_145dda399(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992270 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992270 = FUN_14171c317(FUN_146284d01,uVar1,L"EFieldScalarType");
  }
  return;
}



// FUNCTION 145dda3d2 FUN_145dda3d2 body=57 status=ok
// SIG undefined FUN_145dda3d2(void)

void FUN_145dda3d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992288 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992288 = FUN_14171c317(FUN_146284d30,uVar1,L"EFieldIntegerType");
  }
  return;
}



// FUNCTION 145dda40c FUN_145dda40c body=144 status=ok
// SIG undefined FUN_145dda40c(void)

code * FUN_145dda40c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dda49c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldUpdateParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGlobalDistanceFieldUpdateParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000068c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ce958;
  return FUN_145f4064a;
}



// FUNCTION 145dda49c FUN_145dda49c body=261 status=ok
// SIG undefined FUN_145dda49c(void)

void FUN_145dda49c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ce9d8) {
    FUN_144b3d300(&DAT_14c9ce9d8);
    if (DAT_14c9ce9d8 == -1) {
      FUN_141557890(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGlobalDistanceFieldUpdateParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x66b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce958,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e24c);
      _Init_thread_footer(&DAT_14c9ce9d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dda5a2 FUN_145dda5a2 body=138 status=ok
// SIG undefined FUN_145dda5a2(void)

code * FUN_145dda5a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapVolumeTranslatedWorldToUVAddAndMul";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000678;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163a4a;
}



// FUNCTION 145dda62c FUN_145dda62c body=138 status=ok
// SIG undefined FUN_145dda62c(void)

code * FUN_145dda62c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapMinBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000067a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c478a;
}



// FUNCTION 145dda6b6 FUN_145dda6b6 body=138 status=ok
// SIG undefined FUN_145dda6b6(void)

code * FUN_145dda6b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000066f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163e9a;
}



// FUNCTION 145dda740 FUN_145dda740 body=144 status=ok
// SIG undefined FUN_145dda740(void)

code * FUN_145dda740(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dda7d0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CameraAVSM";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAdaptiveVolumetricShadowMapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d0000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9e0ed0;
  return FUN_145f01100;
}



// FUNCTION 145dda7d0 FUN_145dda7d0 body=261 status=ok
// SIG undefined FUN_145dda7d0(void)

void FUN_145dda7d0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0f50) {
    FUN_144b3d300(&DAT_14c9e0f50);
    if (DAT_14c9e0f50 == -1) {
      FUN_145dda8d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAdaptiveVolumetricShadowMapParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x1b7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0ed0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0ec9);
      _Init_thread_footer(&DAT_14c9e0f50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145dda8d6 FUN_145dda8d6 body=226 status=ok
// SIG undefined FUN_145dda8d6(void)

longlong * FUN_145dda8d6(longlong *param_1)

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
  pcVar13 = FUN_1462cffbc;
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



// FUNCTION 145dda9ba FUN_145dda9ba body=138 status=ok
// SIG undefined FUN_145dda9ba(void)

code * FUN_145dda9ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000001ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddaa44;
}



// FUNCTION 145ddaa44 FUN_145ddaa44 body=138 status=ok
// SIG undefined FUN_145ddaa44(void)

code * FUN_145ddaa44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslatedWorldOrigin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471aaa5e;
}



// FUNCTION 145ddaace FUN_145ddaace body=138 status=ok
// SIG undefined FUN_145ddaace(void)

code * FUN_145ddaace(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a0000001bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dda9ba;
}



// FUNCTION 145ddab58 FUN_145ddab58 body=146 status=ok
// SIG undefined FUN_145ddab58(void)

code * FUN_145ddab58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ddabea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenVisualizeSceneSoftwareRayTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x29000000135;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06780;
  return FUN_1462ea064;
}



// FUNCTION 145ddabea FUN_145ddabea body=261 status=ok
// SIG undefined FUN_145ddabea(void)

void FUN_145ddabea(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06800) {
    FUN_144b3d300(&DAT_14ca06800);
    if (DAT_14ca06800 == -1) {
      FUN_145ddacf0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenVisualizeSceneSoftwareRayTracingParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x121;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06780,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a67);
      _Init_thread_footer(&DAT_14ca06800);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddacf0 FUN_145ddacf0 body=226 status=ok
// SIG undefined FUN_145ddacf0(void)

longlong * FUN_145ddacf0(longlong *param_1)

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
  pcVar13 = FUN_1462ea0f4;
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



// FUNCTION 145ddadd4 FUN_145ddadd4 body=136 status=ok
// SIG undefined FUN_145ddadd4(void)

code * FUN_145ddadd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722c6fa;
}



// FUNCTION 145ddae5c FUN_145ddae5c body=138 status=ok
// SIG undefined FUN_145ddae5c(void)

code * FUN_145ddae5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardInterpolateInfluenceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9400000128;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddaee6;
}



// FUNCTION 145ddaee6 FUN_145ddaee6 body=138 status=ok
// SIG undefined FUN_145ddaee6(void)

code * FUN_145ddaee6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxMeshSDFTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000127;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722c670;
}



// FUNCTION 145ddaf70 FUN_145ddaf70 body=292 status=ok
// SIG undefined FUN_145ddaf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ddaf70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4dc60) {
    FUN_144b3d300(&DAT_14ca4dc60);
    if (DAT_14ca4dc60 == -1) {
      FUN_145ddb094();
      FUN_145ddb19a();
      FUN_140db5666(&DAT_14ca4dbb8,0,&DAT_14ca4db50,L"FShaderDrawSymbolsVS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"DrawSymbolsVS",0,1,FUN_1472eb132,
                    FUN_1472eb0d2,&LAB_1472eb0a8,&LAB_1472eb0a4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca560d8);
      _DAT_14ca4dbb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9c2);
      _Init_thread_footer(&DAT_14ca4dc60);
    }
  }
  return &DAT_14ca4dbb8;
}



// FUNCTION 145ddb094 FUN_145ddb094 body=261 status=ok
// SIG undefined FUN_145ddb094(void)

void FUN_145ddb094(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca56158) {
    FUN_144b3d300(&DAT_14ca56158);
    if (DAT_14ca56158 == -1) {
      FUN_145ddb2e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x228;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca560d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7f9);
      _Init_thread_footer(&DAT_14ca56158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ddb19a FUN_145ddb19a body=205 status=ok
// SIG undefined FUN_145ddb19a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddb19a(void)

{
  if ((DAT_14ca4dbb7 & 2) == 0) {
    DAT_14ca4dbb7 = DAT_14ca4dbb7 | 2;
    _DAT_14ca4db58 = L"FShaderDrawSymbolsVS";
    _DAT_14ca4db70 = FUN_146826540;
    _DAT_14ca4db78 = FUN_146825d77;
    _DAT_14ca4db80 = FUN_146825fd6;
    _DAT_14ca4db88 = FUN_1407e02ea;
    _DAT_14ca4db90 = FUN_146826273;
    _DAT_14ca4db68 = FUN_1472eb074;
    _DAT_14ca4dba8 = 0xffffffff000000e0;
    _DAT_14ca4dbb0 = 8;
    DAT_14ca4dbb4 = 0;
    _DAT_14ca4db98 = &LAB_1472eb0a0;
    FUN_145ddb268();
    FUN_1407e00cc(&DAT_14ca4db50);
    return;
  }
  return;
}



// FUNCTION 145ddb268 FUN_145ddb268 body=123 status=ok
// SIG undefined FUN_145ddb268(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ddb268(void)

{
  _DAT_14ca56a08 = L"BASE";
  DAT_14ca56a32 = 4;
  _DAT_14ca56a10 = FUN_140b35ae4();
  _DAT_14ca56a18 = DAT_14ca4db60;
  _DAT_14ca56a20 = &LAB_14682652b;
  DAT_14ca4db60 = &DAT_14ca56a08;
  DAT_14ca4dbb5 = DAT_14ca4dbb5 + '\x01';
  _DAT_14ca56a28 = 0x100000000;
  if (*(char *)(_DAT_14ca56a10 + 100) != '\0') {
    DAT_14ca4dbb6 = DAT_14ca4dbb6 + '\x01';
  }
  return;
}



// FUNCTION 145ddb2e4 FUN_145ddb2e4 body=226 status=ok
// SIG undefined FUN_145ddb2e4(void)

longlong * FUN_145ddb2e4(longlong *param_1)

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
  pcVar13 = FUN_146307ddc;
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



// FUNCTION 145ddb3cc FUN_145ddb3cc body=138 status=ok
// SIG undefined FUN_145ddb3cc(void)

code * FUN_145ddb3cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SymbolsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1180000022c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472f640c;
}


