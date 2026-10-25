// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e65e0c FUN_145e65e0c body=138 status=ok
// SIG undefined FUN_145e65e0c(void)

code * FUN_145e65e0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountsAndValuesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e65d88;
}



// FUNCTION 145e65e96 FUN_145e65e96 body=292 status=ok
// SIG undefined FUN_145e65e96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e65e96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e538) {
    FUN_144b3d300(&DAT_14cb2e538);
    if (DAT_14cb2e538 == -1) {
      FUN_145e66104();
      FUN_145e65fba();
      FUN_140db5666(&DAT_14cb2e490,0,&DAT_14cb2e428,L"FNiagaraClearCountsUIntCS_Legacy",
                    L"/Plugin/FX/Niagara/Private/NiagaraClearCounts.usf",L"ClearCountsUIntCS",5,1,
                    FUN_14804cbbe,FUN_14804cb5e,&LAB_14804cb5a,&LAB_14804cb56,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb33700);
      _DAT_14cb2e490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8e42);
      _Init_thread_footer(&DAT_14cb2e538);
    }
  }
  return &DAT_14cb2e490;
}



// FUNCTION 145e65fba FUN_145e65fba body=205 status=ok
// SIG undefined FUN_145e65fba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e65fba(void)

{
  if ((DAT_14cb2e48f & 2) == 0) {
    DAT_14cb2e48f = DAT_14cb2e48f | 2;
    _DAT_14cb2e430 = L"FNiagaraClearCountsUIntCS_Legacy";
    _DAT_14cb2e448 = FUN_146826540;
    _DAT_14cb2e450 = FUN_146825d77;
    _DAT_14cb2e458 = FUN_146825fd6;
    _DAT_14cb2e460 = FUN_1407e02ea;
    _DAT_14cb2e468 = FUN_146826273;
    _DAT_14cb2e440 = FUN_14804cb28;
    _DAT_14cb2e480 = 0xffffffff000000e0;
    _DAT_14cb2e488 = 8;
    DAT_14cb2e48c = 0;
    _DAT_14cb2e470 = &LAB_14804cb52;
    FUN_145e66088();
    FUN_1407e00cc(&DAT_14cb2e428);
    return;
  }
  return;
}



// FUNCTION 145e66088 FUN_145e66088 body=123 status=ok
// SIG undefined FUN_145e66088(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e66088(void)

{
  _DAT_14cb35480 = L"BASE";
  DAT_14cb354aa = 4;
  _DAT_14cb35488 = FUN_140b35ae4();
  _DAT_14cb35490 = DAT_14cb2e438;
  _DAT_14cb35498 = &LAB_14682652b;
  DAT_14cb2e438 = &DAT_14cb35480;
  DAT_14cb2e48d = DAT_14cb2e48d + '\x01';
  _DAT_14cb354a0 = 0x100000000;
  if (*(char *)(_DAT_14cb35488 + 100) != '\0') {
    DAT_14cb2e48e = DAT_14cb2e48e + '\x01';
  }
  return;
}



// FUNCTION 145e66104 FUN_145e66104 body=261 status=ok
// SIG undefined FUN_145e66104(void)

void FUN_145e66104(void)

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
              0x110) < DAT_14cb33780) {
    FUN_144b3d300(&DAT_14cb33780);
    if (DAT_14cb33780 == -1) {
      FUN_145e6620a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x8f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33700,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6d0);
      _Init_thread_footer(&DAT_14cb33780);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6620a FUN_145e6620a body=226 status=ok
// SIG undefined FUN_145e6620a(void)

longlong * FUN_145e6620a(longlong *param_1)

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
  pcVar13 = FUN_1464614d4;
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



// FUNCTION 145e662f2 FUN_145e662f2 body=132 status=ok
// SIG undefined FUN_145e662f2(void)

undefined1 * FUN_145e662f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e662ee;
}



// FUNCTION 145e66376 FUN_145e66376 body=138 status=ok
// SIG undefined FUN_145e66376(void)

code * FUN_145e66376(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CountsAndValuesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e662f2;
}



// FUNCTION 145e66400 FUN_145e66400 body=292 status=ok
// SIG undefined FUN_145e66400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e66400(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e7c0) {
    FUN_144b3d300(&DAT_14cb2e7c0);
    if (DAT_14cb2e7c0 == -1) {
      FUN_145e6666e();
      FUN_145e66524();
      FUN_140db5666(&DAT_14cb2e718,0,&DAT_14cb2e6b0,L"FNiagaraClearUAVCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDebugDraw.usf",L"MainCS",5,1,FUN_14804d03e,
                    FUN_14804cfde,&LAB_14804cfda,&LAB_14804cfd6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb33810);
      _DAT_14cb2e718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f98cb);
      _Init_thread_footer(&DAT_14cb2e7c0);
    }
  }
  return &DAT_14cb2e718;
}



// FUNCTION 145e66524 FUN_145e66524 body=205 status=ok
// SIG undefined FUN_145e66524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e66524(void)

{
  if ((DAT_14cb2e717 & 2) == 0) {
    DAT_14cb2e717 = DAT_14cb2e717 | 2;
    _DAT_14cb2e6b8 = L"FNiagaraClearUAVCS";
    _DAT_14cb2e6d0 = FUN_146826540;
    _DAT_14cb2e6d8 = FUN_146825d77;
    _DAT_14cb2e6e0 = FUN_146825fd6;
    _DAT_14cb2e6e8 = FUN_1407e02ea;
    _DAT_14cb2e6f0 = FUN_146826273;
    _DAT_14cb2e6c8 = FUN_14804cfa8;
    _DAT_14cb2e708 = 0xffffffff000000e0;
    _DAT_14cb2e710 = 8;
    DAT_14cb2e714 = 0;
    _DAT_14cb2e6f8 = &LAB_14804cfd2;
    FUN_145e665f2();
    FUN_1407e00cc(&DAT_14cb2e6b0);
    return;
  }
  return;
}



// FUNCTION 145e665f2 FUN_145e665f2 body=123 status=ok
// SIG undefined FUN_145e665f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e665f2(void)

{
  _DAT_14cb354e0 = L"BASE";
  DAT_14cb3550a = 4;
  _DAT_14cb354e8 = FUN_140b35ae4();
  _DAT_14cb354f0 = DAT_14cb2e6c0;
  _DAT_14cb354f8 = &LAB_14682652b;
  DAT_14cb2e6c0 = &DAT_14cb354e0;
  DAT_14cb2e715 = DAT_14cb2e715 + '\x01';
  _DAT_14cb35500 = 0x100000000;
  if (*(char *)(_DAT_14cb354e8 + 100) != '\0') {
    DAT_14cb2e716 = DAT_14cb2e716 + '\x01';
  }
  return;
}



// FUNCTION 145e6666e FUN_145e6666e body=261 status=ok
// SIG undefined FUN_145e6666e(void)

void FUN_145e6666e(void)

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
              0x110) < DAT_14cb33890) {
    FUN_144b3d300(&DAT_14cb33890);
    if (DAT_14cb33890 == -1) {
      FUN_145e66774(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x62;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33810,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6e8);
      _Init_thread_footer(&DAT_14cb33890);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e66774 FUN_145e66774 body=226 status=ok
// SIG undefined FUN_145e66774(void)

longlong * FUN_145e66774(longlong *param_1)

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
  pcVar13 = FUN_1464615e4;
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



// FUNCTION 145e6685c FUN_145e6685c body=132 status=ok
// SIG undefined FUN_145e6685c(void)

undefined1 * FUN_145e6685c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClearValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e66858;
}



// FUNCTION 145e668e0 FUN_145e668e0 body=138 status=ok
// SIG undefined FUN_145e668e0(void)

code * FUN_145e668e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClearSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6685c;
}



// FUNCTION 145e6696a FUN_145e6696a body=292 status=ok
// SIG undefined FUN_145e6696a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6696a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2ea10) {
    FUN_144b3d300(&DAT_14cb2ea10);
    if (DAT_14cb2ea10 == -1) {
      FUN_145e66bd8();
      FUN_145e66a8e();
      FUN_140db5666(&DAT_14cb2e968,0,&DAT_14cb2e900,L"FNiagaraDebugDrawLinePS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDebugDraw.usf",L"MainPS",3,1,FUN_14804d1d2,
                    FUN_14804d172,&LAB_14804d16e,&LAB_14804d16a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb33920);
      _DAT_14cb2e968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f98e3);
      _Init_thread_footer(&DAT_14cb2ea10);
    }
  }
  return &DAT_14cb2e968;
}



// FUNCTION 145e66a8e FUN_145e66a8e body=205 status=ok
// SIG undefined FUN_145e66a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e66a8e(void)

{
  if ((DAT_14cb2e967 & 2) == 0) {
    DAT_14cb2e967 = DAT_14cb2e967 | 2;
    _DAT_14cb2e908 = L"FNiagaraDebugDrawLinePS";
    _DAT_14cb2e920 = FUN_146826540;
    _DAT_14cb2e928 = FUN_146825d77;
    _DAT_14cb2e930 = FUN_146825fd6;
    _DAT_14cb2e938 = FUN_1407e02ea;
    _DAT_14cb2e940 = FUN_146826273;
    _DAT_14cb2e918 = FUN_14804d13c;
    _DAT_14cb2e958 = 0xffffffff000000e0;
    _DAT_14cb2e960 = 8;
    DAT_14cb2e964 = 0;
    _DAT_14cb2e948 = &LAB_14804d166;
    FUN_145e66b5c();
    FUN_1407e00cc(&DAT_14cb2e900);
    return;
  }
  return;
}



// FUNCTION 145e66b5c FUN_145e66b5c body=123 status=ok
// SIG undefined FUN_145e66b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e66b5c(void)

{
  _DAT_14cb35540 = L"BASE";
  DAT_14cb3556a = 4;
  _DAT_14cb35548 = FUN_140b35ae4();
  _DAT_14cb35550 = DAT_14cb2e910;
  _DAT_14cb35558 = &LAB_14682652b;
  DAT_14cb2e910 = &DAT_14cb35540;
  DAT_14cb2e965 = DAT_14cb2e965 + '\x01';
  _DAT_14cb35560 = 0x100000000;
  if (*(char *)(_DAT_14cb35548 + 100) != '\0') {
    DAT_14cb2e966 = DAT_14cb2e966 + '\x01';
  }
  return;
}



// FUNCTION 145e66bd8 FUN_145e66bd8 body=261 status=ok
// SIG undefined FUN_145e66bd8(void)

void FUN_145e66bd8(void)

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
              0x110) < DAT_14cb339a0) {
    FUN_144b3d300(&DAT_14cb339a0);
    if (DAT_14cb339a0 == -1) {
      FUN_145e66cde(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x93;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb700);
      _Init_thread_footer(&DAT_14cb339a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e66cde FUN_145e66cde body=226 status=ok
// SIG undefined FUN_145e66cde(void)

longlong * FUN_145e66cde(longlong *param_1)

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
  pcVar13 = FUN_1464616f4;
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



// FUNCTION 145e66dc6 FUN_145e66dc6 body=132 status=ok
// SIG undefined FUN_145e66dc6(void)

undefined1 * FUN_145e66dc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputInvResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x94;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e66dc2;
}



// FUNCTION 145e66e4a FUN_145e66e4a body=138 status=ok
// SIG undefined FUN_145e66e4a(void)

code * FUN_145e66e4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804fdd0;
}



// FUNCTION 145e66ed4 FUN_145e66ed4 body=292 status=ok
// SIG undefined FUN_145e66ed4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e66ed4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47aa0) {
    FUN_144b3d300(&DAT_14cb47aa0);
    if (DAT_14cb47aa0 == -1) {
      FUN_145e67142();
      FUN_145e66ff8();
      FUN_140db5666(&DAT_14cb479f8,0,&DAT_14cb47990,L"FWaterQuadTreeVS",
                    L"/Plugin/Water/Private/WaterQuadTreeVertexShader.usf",L"Main",0,3,FUN_1483fc742
                    ,FUN_1483fc6e2,&LAB_1483fc6de,&LAB_1483fc6da,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48a78);
      _DAT_14cb479f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bcb9);
      _Init_thread_footer(&DAT_14cb47aa0);
    }
  }
  return &DAT_14cb479f8;
}



// FUNCTION 145e66ff8 FUN_145e66ff8 body=205 status=ok
// SIG undefined FUN_145e66ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e66ff8(void)

{
  if ((DAT_14cb479f7 & 2) == 0) {
    DAT_14cb479f7 = DAT_14cb479f7 | 2;
    _DAT_14cb47998 = L"FWaterQuadTreeVS";
    _DAT_14cb479b0 = FUN_146826540;
    _DAT_14cb479b8 = FUN_146825d77;
    _DAT_14cb479c0 = FUN_146825fd6;
    _DAT_14cb479c8 = FUN_1407e02ea;
    _DAT_14cb479d0 = FUN_146826273;
    _DAT_14cb479a8 = FUN_1483fc6ac;
    _DAT_14cb479e8 = 0xffffffff000000e0;
    _DAT_14cb479f0 = 8;
    DAT_14cb479f4 = 0;
    _DAT_14cb479d8 = &LAB_1483fc6d6;
    FUN_145e670c6();
    FUN_1407e00cc(&DAT_14cb47990);
    return;
  }
  return;
}



// FUNCTION 145e670c6 FUN_145e670c6 body=123 status=ok
// SIG undefined FUN_145e670c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e670c6(void)

{
  _DAT_14cb491c8 = L"BASE";
  DAT_14cb491f2 = 4;
  _DAT_14cb491d0 = FUN_140b35ae4();
  _DAT_14cb491d8 = DAT_14cb479a0;
  _DAT_14cb491e0 = &LAB_14682652b;
  DAT_14cb479a0 = &DAT_14cb491c8;
  DAT_14cb479f5 = DAT_14cb479f5 + '\x01';
  _DAT_14cb491e8 = 0x100000000;
  if (*(char *)(_DAT_14cb491d0 + 100) != '\0') {
    DAT_14cb479f6 = DAT_14cb479f6 + '\x01';
  }
  return;
}



// FUNCTION 145e67142 FUN_145e67142 body=261 status=ok
// SIG undefined FUN_145e67142(void)

void FUN_145e67142(void)

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
              0x110) < DAT_14cb48af8) {
    FUN_144b3d300(&DAT_14cb48af8);
    if (DAT_14cb48af8 == -1) {
      FUN_145e67248(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x37;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48a78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d1b9);
      _Init_thread_footer(&DAT_14cb48af8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e67248 FUN_145e67248 body=226 status=ok
// SIG undefined FUN_145e67248(void)

longlong * FUN_145e67248(longlong *param_1)

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
  pcVar13 = FUN_146488668;
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



// FUNCTION 145e67330 FUN_145e67330 body=132 status=ok
// SIG undefined FUN_145e67330(void)

undefined1 * FUN_145e67330(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Transform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6732c;
}



// FUNCTION 145e673b4 FUN_145e673b4 body=138 status=ok
// SIG undefined FUN_145e673b4(void)

code * FUN_145e673b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"JitterScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e67330;
}



// FUNCTION 145e6743e FUN_145e6743e body=292 status=ok
// SIG undefined FUN_145e6743e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6743e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47e18) {
    FUN_144b3d300(&DAT_14cb47e18);
    if (DAT_14cb47e18 == -1) {
      FUN_145e676ac();
      FUN_145e67562();
      FUN_140db5666(&DAT_14cb47d70,0,&DAT_14cb47d08,L"FWaterQuadTreeBuildPS",
                    L"/Plugin/Water/Private/WaterQuadTreeBuild.usf",L"Main",3,1,FUN_1483fc9a0,
                    FUN_1483fc940,&LAB_1483fc93c,&LAB_1483fc938,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48c10);
      _DAT_14cb47d70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bcdd);
      _Init_thread_footer(&DAT_14cb47e18);
    }
  }
  return &DAT_14cb47d70;
}



// FUNCTION 145e67562 FUN_145e67562 body=205 status=ok
// SIG undefined FUN_145e67562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e67562(void)

{
  if ((DAT_14cb47d6f & 2) == 0) {
    DAT_14cb47d6f = DAT_14cb47d6f | 2;
    _DAT_14cb47d10 = L"FWaterQuadTreeBuildPS";
    _DAT_14cb47d28 = FUN_146826540;
    _DAT_14cb47d30 = FUN_146825d77;
    _DAT_14cb47d38 = FUN_146825fd6;
    _DAT_14cb47d40 = FUN_1407e02ea;
    _DAT_14cb47d48 = FUN_146826273;
    _DAT_14cb47d20 = FUN_1483fc90a;
    _DAT_14cb47d60 = 0xffffffff000000e0;
    _DAT_14cb47d68 = 8;
    DAT_14cb47d6c = 0;
    _DAT_14cb47d50 = &LAB_1483fc934;
    FUN_145e67630();
    FUN_1407e00cc(&DAT_14cb47d08);
    return;
  }
  return;
}



// FUNCTION 145e67630 FUN_145e67630 body=123 status=ok
// SIG undefined FUN_145e67630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e67630(void)

{
  _DAT_14cb49258 = L"BASE";
  DAT_14cb49282 = 4;
  _DAT_14cb49260 = FUN_140b35ae4();
  _DAT_14cb49268 = DAT_14cb47d18;
  _DAT_14cb49270 = &LAB_14682652b;
  DAT_14cb47d18 = &DAT_14cb49258;
  DAT_14cb47d6d = DAT_14cb47d6d + '\x01';
  _DAT_14cb49278 = 0x100000000;
  if (*(char *)(_DAT_14cb49260 + 100) != '\0') {
    DAT_14cb47d6e = DAT_14cb47d6e + '\x01';
  }
  return;
}



// FUNCTION 145e676ac FUN_145e676ac body=261 status=ok
// SIG undefined FUN_145e676ac(void)

void FUN_145e676ac(void)

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
              0x110) < DAT_14cb48c90) {
    FUN_144b3d300(&DAT_14cb48c90);
    if (DAT_14cb48c90 == -1) {
      FUN_145e677b2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x86;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48c10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d1dd);
      _Init_thread_footer(&DAT_14cb48c90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e677b2 FUN_145e677b2 body=226 status=ok
// SIG undefined FUN_145e677b2(void)

longlong * FUN_145e677b2(longlong *param_1)

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
  pcVar13 = FUN_146488888;
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



// FUNCTION 145e6789a FUN_145e6789a body=132 status=ok
// SIG undefined FUN_145e6789a(void)

undefined1 * FUN_145e6789a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x87;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e67896;
}



// FUNCTION 145e6791e FUN_145e6791e body=138 status=ok
// SIG undefined FUN_145e6791e(void)

code * FUN_145e6791e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputMipLevelIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffbc2;
}



// FUNCTION 145e679a8 FUN_145e679a8 body=292 status=ok
// SIG undefined FUN_145e679a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e679a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48068) {
    FUN_144b3d300(&DAT_14cb48068);
    if (DAT_14cb48068 == -1) {
      FUN_145e67c16();
      FUN_145e67acc();
      FUN_140db5666(&DAT_14cb47fc0,0,&DAT_14cb47f58,L"FWaterQuadTreeClearPerViewBuffersCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,1,FUN_1483fcb34,
                    FUN_1483fcad4,&LAB_1483fcad0,&LAB_1483fcacc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48d20);
      _DAT_14cb47fc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bcf5);
      _Init_thread_footer(&DAT_14cb48068);
    }
  }
  return &DAT_14cb47fc0;
}



// FUNCTION 145e67acc FUN_145e67acc body=205 status=ok
// SIG undefined FUN_145e67acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e67acc(void)

{
  if ((DAT_14cb47fbf & 2) == 0) {
    DAT_14cb47fbf = DAT_14cb47fbf | 2;
    _DAT_14cb47f60 = L"FWaterQuadTreeClearPerViewBuffersCS";
    _DAT_14cb47f78 = FUN_146826540;
    _DAT_14cb47f80 = FUN_146825d77;
    _DAT_14cb47f88 = FUN_146825fd6;
    _DAT_14cb47f90 = FUN_1407e02ea;
    _DAT_14cb47f98 = FUN_146826273;
    _DAT_14cb47f70 = FUN_1483fca9e;
    _DAT_14cb47fb0 = 0xffffffff000000e0;
    _DAT_14cb47fb8 = 8;
    DAT_14cb47fbc = 0;
    _DAT_14cb47fa0 = &LAB_1483fcac8;
    FUN_145e67b9a();
    FUN_1407e00cc(&DAT_14cb47f58);
    return;
  }
  return;
}



// FUNCTION 145e67b9a FUN_145e67b9a body=123 status=ok
// SIG undefined FUN_145e67b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e67b9a(void)

{
  _DAT_14cb492b8 = L"BASE";
  DAT_14cb492e2 = 4;
  _DAT_14cb492c0 = FUN_140b35ae4();
  _DAT_14cb492c8 = DAT_14cb47f68;
  _DAT_14cb492d0 = &LAB_14682652b;
  DAT_14cb47f68 = &DAT_14cb492b8;
  DAT_14cb47fbd = DAT_14cb47fbd + '\x01';
  _DAT_14cb492d8 = 0x100000000;
  if (*(char *)(_DAT_14cb492c0 + 100) != '\0') {
    DAT_14cb47fbe = DAT_14cb47fbe + '\x01';
  }
  return;
}



// FUNCTION 145e67c16 FUN_145e67c16 body=261 status=ok
// SIG undefined FUN_145e67c16(void)

void FUN_145e67c16(void)

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
              0x110) < DAT_14cb48da0) {
    FUN_144b3d300(&DAT_14cb48da0);
    if (DAT_14cb48da0 == -1) {
      FUN_145e67d1c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xb3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48d20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d1f5);
      _Init_thread_footer(&DAT_14cb48da0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e67d1c FUN_145e67d1c body=226 status=ok
// SIG undefined FUN_145e67d1c(void)

longlong * FUN_145e67d1c(longlong *param_1)

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
  pcVar13 = FUN_146488998;
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



// FUNCTION 145e67e04 FUN_145e67e04 body=132 status=ok
// SIG undefined FUN_145e67e04(void)

undefined1 * FUN_145e67e04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BucketCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e67e00;
}



// FUNCTION 145e67e88 FUN_145e67e88 body=138 status=ok
// SIG undefined FUN_145e67e88(void)

code * FUN_145e67e88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedNodes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e67e04;
}



// FUNCTION 145e67f12 FUN_145e67f12 body=205 status=ok
// SIG undefined FUN_145e67f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e67f12(void)

{
  if ((DAT_14cb5091f & 2) == 0) {
    DAT_14cb5091f = DAT_14cb5091f | 2;
    _DAT_14cb508c0 = L"FJacobiSORPassCS";
    _DAT_14cb508d8 = FUN_146826540;
    _DAT_14cb508e0 = FUN_146825d77;
    _DAT_14cb508e8 = FUN_146825fd6;
    _DAT_14cb508f0 = FUN_1407e02ea;
    _DAT_14cb508f8 = FUN_146826273;
    _DAT_14cb508d0 = FUN_1485ec7c2;
    _DAT_14cb50910 = 0xffffffff000000e0;
    _DAT_14cb50918 = 8;
    DAT_14cb5091c = 0;
    _DAT_14cb50900 = &LAB_1485ec7ec;
    FUN_145e67fe0();
    FUN_1407e00cc(&DAT_14cb508b8);
    return;
  }
  return;
}



// FUNCTION 145e67fe0 FUN_145e67fe0 body=123 status=ok
// SIG undefined FUN_145e67fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e67fe0(void)

{
  _DAT_14cb50f98 = L"BASE";
  DAT_14cb50fc2 = 4;
  _DAT_14cb50fa0 = FUN_140b35ae4();
  _DAT_14cb50fa8 = DAT_14cb508c8;
  _DAT_14cb50fb0 = &LAB_14682652b;
  DAT_14cb508c8 = &DAT_14cb50f98;
  DAT_14cb5091d = DAT_14cb5091d + '\x01';
  _DAT_14cb50fb8 = 0x100000000;
  if (*(char *)(_DAT_14cb50fa0 + 100) != '\0') {
    DAT_14cb5091e = DAT_14cb5091e + '\x01';
  }
  return;
}



// FUNCTION 145e6805c FUN_145e6805c body=226 status=ok
// SIG undefined FUN_145e6805c(void)

longlong * FUN_145e6805c(longlong *param_1)

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
  pcVar13 = FUN_1464a4b28;
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



// FUNCTION 145e68144 FUN_145e68144 body=138 status=ok
// SIG undefined FUN_145e68144(void)

code * FUN_145e68144(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutX";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed958;
}



// FUNCTION 145e681ce FUN_145e681ce body=138 status=ok
// SIG undefined FUN_145e681ce(void)

code * FUN_145e681ce(undefined8 param_1,longlong *param_2)

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
  *(undefined2 **)(lVar2 + lVar3) = &DAT_149e25cc8;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4c38;
}



// FUNCTION 145e68258 FUN_145e68258 body=292 status=ok
// SIG undefined FUN_145e68258(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e68258(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb523a0) {
    FUN_144b3d300(&DAT_14cb523a0);
    if (DAT_14cb523a0 == -1) {
      FUN_145e684c6();
      FUN_145e6837c();
      FUN_140db5666(&DAT_14cb522f8,0,&DAT_14cb52290,L"FStreamlineUIHintExtractionCS",
                    L"/Plugin/StreamlineCore/Private/UIHintExtraction.usf",L"UIHintExtractionMain",5
                    ,1,FUN_1485f49d2,FUN_1485f4972,&LAB_1485f4942,&LAB_1485f493e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb524f8);
      _DAT_14cb522f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143c0a193);
      _Init_thread_footer(&DAT_14cb523a0);
    }
  }
  return &DAT_14cb522f8;
}



// FUNCTION 145e6837c FUN_145e6837c body=205 status=ok
// SIG undefined FUN_145e6837c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6837c(void)

{
  if ((DAT_14cb522f7 & 2) == 0) {
    DAT_14cb522f7 = DAT_14cb522f7 | 2;
    _DAT_14cb52298 = L"FStreamlineUIHintExtractionCS";
    _DAT_14cb522b0 = FUN_146826540;
    _DAT_14cb522b8 = FUN_146825d77;
    _DAT_14cb522c0 = FUN_146825fd6;
    _DAT_14cb522c8 = FUN_1407e02ea;
    _DAT_14cb522d0 = FUN_146826273;
    _DAT_14cb522a8 = FUN_1485f4910;
    _DAT_14cb522e8 = 0xffffffff000000e0;
    _DAT_14cb522f0 = 8;
    DAT_14cb522f4 = 0;
    _DAT_14cb522d8 = &LAB_1485f493a;
    FUN_145e6844a();
    FUN_1407e00cc(&DAT_14cb52290);
    return;
  }
  return;
}



// FUNCTION 145e6844a FUN_145e6844a body=123 status=ok
// SIG undefined FUN_145e6844a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6844a(void)

{
  _DAT_14cb52608 = L"BASE";
  DAT_14cb52632 = 4;
  _DAT_14cb52610 = FUN_140b35ae4();
  _DAT_14cb52618 = DAT_14cb522a0;
  _DAT_14cb52620 = &LAB_14682652b;
  DAT_14cb522a0 = &DAT_14cb52608;
  DAT_14cb522f5 = DAT_14cb522f5 + '\x01';
  _DAT_14cb52628 = 0x100000000;
  if (*(char *)(_DAT_14cb52610 + 100) != '\0') {
    DAT_14cb522f6 = DAT_14cb522f6 + '\x01';
  }
  return;
}



// FUNCTION 145e684c6 FUN_145e684c6 body=261 status=ok
// SIG undefined FUN_145e684c6(void)

void FUN_145e684c6(void)

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
              0x110) < DAT_14cb52578) {
    FUN_144b3d300(&DAT_14cb52578);
    if (DAT_14cb52578 == -1) {
      FUN_145e685cc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x29;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb524f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c0abd3);
      _Init_thread_footer(&DAT_14cb52578);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e685cc FUN_145e685cc body=226 status=ok
// SIG undefined FUN_145e685cc(void)

longlong * FUN_145e685cc(longlong *param_1)

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
  pcVar13 = FUN_1464a8b0a;
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



// FUNCTION 145e686b4 FUN_145e686b4 body=132 status=ok
// SIG undefined FUN_145e686b4(void)

undefined1 * FUN_145e686b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlphaThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e686b0;
}



// FUNCTION 145e68738 FUN_145e68738 body=138 status=ok
// SIG undefined FUN_145e68738(void)

code * FUN_145e68738(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BackBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e686b4;
}



// FUNCTION 145e687c2 FUN_145e687c2 body=292 status=ok
// SIG undefined FUN_145e687c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e687c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb533b0) {
    FUN_144b3d300(&DAT_14cb533b0);
    if (DAT_14cb533b0 == -1) {
      FUN_145e68a30();
      FUN_145e688e6();
      FUN_140db5666(&DAT_14cb53308,0,&DAT_14cb532a0,L"FXeFGExtractUICS",
                    L"/Plugin/XeSS/Private/ExtractUI.usf",L"MainCS",5,1,FUN_1485f9d4a,FUN_1485f9cea,
                    &LAB_1485f9cd2,&LAB_1485f9cce,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb53458)
      ;
      _DAT_14cb53308 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143c1b1bc);
      _Init_thread_footer(&DAT_14cb533b0);
    }
  }
  return &DAT_14cb53308;
}



// FUNCTION 145e688e6 FUN_145e688e6 body=205 status=ok
// SIG undefined FUN_145e688e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e688e6(void)

{
  if ((DAT_14cb53307 & 2) == 0) {
    DAT_14cb53307 = DAT_14cb53307 | 2;
    _DAT_14cb532a8 = L"FXeFGExtractUICS";
    _DAT_14cb532c0 = FUN_146826540;
    _DAT_14cb532c8 = FUN_146825d77;
    _DAT_14cb532d0 = FUN_146825fd6;
    _DAT_14cb532d8 = FUN_1407e02ea;
    _DAT_14cb532e0 = FUN_146826273;
    _DAT_14cb532b8 = FUN_1485f9ca0;
    _DAT_14cb532f8 = 0xffffffff000000e0;
    _DAT_14cb53300 = 8;
    DAT_14cb53304 = 0;
    _DAT_14cb532e8 = &LAB_1485f9cca;
    FUN_145e689b4();
    FUN_1407e00cc(&DAT_14cb532a0);
    return;
  }
  return;
}



// FUNCTION 145e689b4 FUN_145e689b4 body=123 status=ok
// SIG undefined FUN_145e689b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e689b4(void)

{
  _DAT_14cb53510 = L"BASE";
  DAT_14cb5353a = 4;
  _DAT_14cb53518 = FUN_140b35ae4();
  _DAT_14cb53520 = DAT_14cb532b0;
  _DAT_14cb53528 = &LAB_14682652b;
  DAT_14cb532b0 = &DAT_14cb53510;
  DAT_14cb53305 = DAT_14cb53305 + '\x01';
  _DAT_14cb53530 = 0x100000000;
  if (*(char *)(_DAT_14cb53518 + 100) != '\0') {
    DAT_14cb53306 = DAT_14cb53306 + '\x01';
  }
  return;
}



// FUNCTION 145e68a30 FUN_145e68a30 body=261 status=ok
// SIG undefined FUN_145e68a30(void)

void FUN_145e68a30(void)

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
              0x110) < DAT_14cb534d8) {
    FUN_144b3d300(&DAT_14cb534d8);
    if (DAT_14cb534d8 == -1) {
      FUN_145e68b36(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x54;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb53458,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143c1bd8d);
      _Init_thread_footer(&DAT_14cb534d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e68b36 FUN_145e68b36 body=226 status=ok
// SIG undefined FUN_145e68b36(void)

longlong * FUN_145e68b36(longlong *param_1)

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
  pcVar13 = FUN_1464aa7d6;
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



// FUNCTION 145e68c1e FUN_145e68c1e body=132 status=ok
// SIG undefined FUN_145e68c1e(void)

undefined1 * FUN_145e68c1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AlphaThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e68c1a;
}



// FUNCTION 145e68ca2 FUN_145e68ca2 body=138 status=ok
// SIG undefined FUN_145e68ca2(void)

code * FUN_145e68ca2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BackBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e68c1e;
}



// FUNCTION 145e68d2c FUN_145e68d2c body=292 status=ok
// SIG undefined FUN_145e68d2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e68d2c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf9710) {
    FUN_144b3d300(&DAT_14cbf9710);
    if (DAT_14cbf9710 == -1) {
      FUN_145e68f9a();
      FUN_145e68e50();
      FUN_140db5666(&DAT_14cbf9668,0,&DAT_14cbf9600,L"FHairTranscodeCS",
                    L"/Engine/Private/HairStrands/HairStrandsTranscode.usf",L"MainCS",5,2,
                    FUN_14908d384,FUN_14908d324,&LAB_14667bb3e,&LAB_14908d320,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa018);
      _DAT_14cbf9668 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443494f);
      _Init_thread_footer(&DAT_14cbf9710);
    }
  }
  return &DAT_14cbf9668;
}



// FUNCTION 145e68e50 FUN_145e68e50 body=205 status=ok
// SIG undefined FUN_145e68e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e68e50(void)

{
  if ((DAT_14cbf9667 & 2) == 0) {
    DAT_14cbf9667 = DAT_14cbf9667 | 2;
    _DAT_14cbf9608 = L"FHairTranscodeCS";
    _DAT_14cbf9620 = FUN_146826540;
    _DAT_14cbf9628 = FUN_146825d77;
    _DAT_14cbf9630 = FUN_146825fd6;
    _DAT_14cbf9638 = FUN_1407e02ea;
    _DAT_14cbf9640 = FUN_146826273;
    _DAT_14cbf9618 = FUN_14908d2f2;
    _DAT_14cbf9658 = 0xffffffff000000e0;
    _DAT_14cbf9660 = 8;
    DAT_14cbf9664 = 0;
    _DAT_14cbf9648 = &LAB_14908d31c;
    FUN_145e68f1e();
    FUN_1407e00cc(&DAT_14cbf9600);
    return;
  }
  return;
}



// FUNCTION 145e68f1e FUN_145e68f1e body=123 status=ok
// SIG undefined FUN_145e68f1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e68f1e(void)

{
  _DAT_14cbfa488 = L"BASE";
  DAT_14cbfa4b2 = 4;
  _DAT_14cbfa490 = FUN_140b35ae4();
  _DAT_14cbfa498 = DAT_14cbf9610;
  _DAT_14cbfa4a0 = &LAB_14682652b;
  DAT_14cbf9610 = &DAT_14cbfa488;
  DAT_14cbf9665 = DAT_14cbf9665 + '\x01';
  _DAT_14cbfa4a8 = 0x100000000;
  if (*(char *)(_DAT_14cbfa490 + 100) != '\0') {
    DAT_14cbf9666 = DAT_14cbf9666 + '\x01';
  }
  return;
}



// FUNCTION 145e68f9a FUN_145e68f9a body=261 status=ok
// SIG undefined FUN_145e68f9a(void)

void FUN_145e68f9a(void)

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
              0x110) < DAT_14cbfa098) {
    FUN_144b3d300(&DAT_14cbfa098);
    if (DAT_14cbfa098 == -1) {
      FUN_145e690a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x112;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa018,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144438fd0);
      _Init_thread_footer(&DAT_14cbfa098);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e690a0 FUN_145e690a0 body=226 status=ok
// SIG undefined FUN_145e690a0(void)

longlong * FUN_145e690a0(longlong *param_1)

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
  pcVar13 = FUN_14667bf74;
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



// FUNCTION 145e69188 FUN_145e69188 body=132 status=ok
// SIG undefined FUN_145e69188(void)

undefined1 * FUN_145e69188(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OffsetInBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x113;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e69184;
}



// FUNCTION 145e6920c FUN_145e6920c body=138 status=ok
// SIG undefined FUN_145e6920c(void)

code * FUN_145e6920c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149094cc8;
}



// FUNCTION 145e69296 FUN_145e69296 body=292 status=ok
// SIG undefined FUN_145e69296(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e69296(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf98b0) {
    FUN_144b3d300(&DAT_14cbf98b0);
    if (DAT_14cbf98b0 == -1) {
      FUN_145e69504();
      FUN_145e693ba();
      FUN_140db5666(&DAT_14cbf9808,0,&DAT_14cbf97a0,L"FHairStrandTextureClearCS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainCS",5,1,
                    FUN_14909254e,FUN_1490924ee,&LAB_14667bce4,&LAB_1490924ea,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa0a0);
      _DAT_14cbf9808 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144436b70);
      _Init_thread_footer(&DAT_14cbf98b0);
    }
  }
  return &DAT_14cbf9808;
}



// FUNCTION 145e693ba FUN_145e693ba body=205 status=ok
// SIG undefined FUN_145e693ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e693ba(void)

{
  if ((DAT_14cbf9807 & 2) == 0) {
    DAT_14cbf9807 = DAT_14cbf9807 | 2;
    _DAT_14cbf97a8 = L"FHairStrandTextureClearCS";
    _DAT_14cbf97c0 = FUN_146826540;
    _DAT_14cbf97c8 = FUN_146825d77;
    _DAT_14cbf97d0 = FUN_146825fd6;
    _DAT_14cbf97d8 = FUN_1407e02ea;
    _DAT_14cbf97e0 = FUN_146826273;
    _DAT_14cbf97b8 = FUN_1490924bc;
    _DAT_14cbf97f8 = 0xffffffff000000e0;
    _DAT_14cbf9800 = 8;
    DAT_14cbf9804 = 0;
    _DAT_14cbf97e8 = &LAB_1490924e6;
    FUN_145e69488();
    FUN_1407e00cc(&DAT_14cbf97a0);
    return;
  }
  return;
}



// FUNCTION 145e69488 FUN_145e69488 body=123 status=ok
// SIG undefined FUN_145e69488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e69488(void)

{
  _DAT_14cbfa4b8 = L"BASE";
  DAT_14cbfa4e2 = 4;
  _DAT_14cbfa4c0 = FUN_140b35ae4();
  _DAT_14cbfa4c8 = DAT_14cbf97b0;
  _DAT_14cbfa4d0 = &LAB_14682652b;
  DAT_14cbf97b0 = &DAT_14cbfa4b8;
  DAT_14cbf9805 = DAT_14cbf9805 + '\x01';
  _DAT_14cbfa4d8 = 0x100000000;
  if (*(char *)(_DAT_14cbfa4c0 + 100) != '\0') {
    DAT_14cbf9806 = DAT_14cbf9806 + '\x01';
  }
  return;
}



// FUNCTION 145e69504 FUN_145e69504 body=261 status=ok
// SIG undefined FUN_145e69504(void)

void FUN_145e69504(void)

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
              0x110) < DAT_14cbfa120) {
    FUN_144b3d300(&DAT_14cbfa120);
    if (DAT_14cbfa120 == -1) {
      FUN_145e6960a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1d6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa0a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396ad);
      _Init_thread_footer(&DAT_14cbfa120);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6960a FUN_145e6960a body=226 status=ok
// SIG undefined FUN_145e6960a(void)

longlong * FUN_145e6960a(longlong *param_1)

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
  pcVar13 = FUN_14667c0c0;
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



// FUNCTION 145e696f2 FUN_145e696f2 body=132 status=ok
// SIG undefined FUN_145e696f2(void)

undefined1 * FUN_145e696f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LayoutIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e696ee;
}



// FUNCTION 145e69776 FUN_145e69776 body=138 status=ok
// SIG undefined FUN_145e69776(void)

code * FUN_145e69776(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e696f2;
}



// FUNCTION 145e69800 FUN_145e69800 body=292 status=ok
// SIG undefined FUN_145e69800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e69800(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfc1e8) {
    FUN_144b3d300(&DAT_14cbfc1e8);
    if (DAT_14cbfc1e8 == -1) {
      FUN_145e69a6e();
      FUN_145e69924();
      FUN_140db5666(&DAT_14cbfc140,0,&DAT_14cbfc0d8,L"FHairUpdatePositionOffsetCS",
                    L"/Engine/Private/HairStrands/HairStrandsMesh.usf",L"MainCS",5,4,FUN_14909c24a,
                    FUN_14909c1ea,&LAB_14667c94e,&LAB_14909c1e6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbfd380);
      _DAT_14cbfc140 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144444c4b);
      _Init_thread_footer(&DAT_14cbfc1e8);
    }
  }
  return &DAT_14cbfc140;
}



// FUNCTION 145e69924 FUN_145e69924 body=205 status=ok
// SIG undefined FUN_145e69924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e69924(void)

{
  if ((DAT_14cbfc13f & 2) == 0) {
    DAT_14cbfc13f = DAT_14cbfc13f | 2;
    _DAT_14cbfc0e0 = L"FHairUpdatePositionOffsetCS";
    _DAT_14cbfc0f8 = FUN_146826540;
    _DAT_14cbfc100 = FUN_146825d77;
    _DAT_14cbfc108 = FUN_146825fd6;
    _DAT_14cbfc110 = FUN_1407e02ea;
    _DAT_14cbfc118 = FUN_146826273;
    _DAT_14cbfc0f0 = FUN_14909c1b8;
    _DAT_14cbfc130 = 0xffffffff000000e0;
    _DAT_14cbfc138 = 8;
    DAT_14cbfc13c = 0;
    _DAT_14cbfc120 = &LAB_14909c1e2;
    FUN_145e699f2();
    FUN_1407e00cc(&DAT_14cbfc0d8);
    return;
  }
  return;
}



// FUNCTION 145e699f2 FUN_145e699f2 body=123 status=ok
// SIG undefined FUN_145e699f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e699f2(void)

{
  _DAT_14cbfda58 = L"BASE";
  DAT_14cbfda82 = 4;
  _DAT_14cbfda60 = FUN_140b35ae4();
  _DAT_14cbfda68 = DAT_14cbfc0e8;
  _DAT_14cbfda70 = &LAB_14682652b;
  DAT_14cbfc0e8 = &DAT_14cbfda58;
  DAT_14cbfc13d = DAT_14cbfc13d + '\x01';
  _DAT_14cbfda78 = 0x100000000;
  if (*(char *)(_DAT_14cbfda60 + 100) != '\0') {
    DAT_14cbfc13e = DAT_14cbfc13e + '\x01';
  }
  return;
}



// FUNCTION 145e69a6e FUN_145e69a6e body=261 status=ok
// SIG undefined FUN_145e69a6e(void)

void FUN_145e69a6e(void)

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
              0x110) < DAT_14cbfd400) {
    FUN_144b3d300(&DAT_14cbfd400);
    if (DAT_14cbfd400 == -1) {
      FUN_145e69b74(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x408;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd380,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449f7b);
      _Init_thread_footer(&DAT_14cbfd400);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e69b74 FUN_145e69b74 body=226 status=ok
// SIG undefined FUN_145e69b74(void)

longlong * FUN_145e69b74(longlong *param_1)

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
  pcVar13 = FUN_14667e252;
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



// FUNCTION 145e69c5c FUN_145e69c5c body=132 status=ok
// SIG undefined FUN_145e69c5c(void)

undefined1 * FUN_145e69c5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UpdateType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x409;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e69c58;
}



// FUNCTION 145e69ce0 FUN_145e69ce0 body=138 status=ok
// SIG undefined FUN_145e69ce0(void)

code * FUN_145e69ce0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceRegisteredIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000040b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ac6a2;
}



// FUNCTION 145e69d6a FUN_145e69d6a body=292 status=ok
// SIG undefined FUN_145e69d6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e69d6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfdd20) {
    FUN_144b3d300(&DAT_14cbfdd20);
    if (DAT_14cbfdd20 == -1) {
      FUN_145e69fd8();
      FUN_145e69e8e();
      FUN_140db5666(&DAT_14cbfdc78,0,&DAT_14cbfdc10,L"FClearPressureGridCS",
                    L"/Plugin/Runtime/HairStrands/Private/NiagaraClearPressureGrid.usf",L"MainCS",5,
                    1,FUN_1490bcdee,FUN_1490bcd8e,&LAB_1490bcd8a,&LAB_1490bcd86,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfdfd0);
      _DAT_14cbfdc78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144453f3c);
      _Init_thread_footer(&DAT_14cbfdd20);
    }
  }
  return &DAT_14cbfdc78;
}



// FUNCTION 145e69e8e FUN_145e69e8e body=205 status=ok
// SIG undefined FUN_145e69e8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e69e8e(void)

{
  if ((DAT_14cbfdc77 & 2) == 0) {
    DAT_14cbfdc77 = DAT_14cbfdc77 | 2;
    _DAT_14cbfdc18 = L"FClearPressureGridCS";
    _DAT_14cbfdc30 = FUN_146826540;
    _DAT_14cbfdc38 = FUN_146825d77;
    _DAT_14cbfdc40 = FUN_146825fd6;
    _DAT_14cbfdc48 = FUN_1407e02ea;
    _DAT_14cbfdc50 = FUN_146826273;
    _DAT_14cbfdc28 = FUN_1490bcd58;
    _DAT_14cbfdc68 = 0xffffffff000000e0;
    _DAT_14cbfdc70 = 8;
    DAT_14cbfdc74 = 0;
    _DAT_14cbfdc58 = &LAB_1490bcd82;
    FUN_145e69f5c();
    FUN_1407e00cc(&DAT_14cbfdc10);
    return;
  }
  return;
}



// FUNCTION 145e69f5c FUN_145e69f5c body=123 status=ok
// SIG undefined FUN_145e69f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e69f5c(void)

{
  _DAT_14cbfe168 = L"BASE";
  DAT_14cbfe192 = 4;
  _DAT_14cbfe170 = FUN_140b35ae4();
  _DAT_14cbfe178 = DAT_14cbfdc20;
  _DAT_14cbfe180 = &LAB_14682652b;
  DAT_14cbfdc20 = &DAT_14cbfe168;
  DAT_14cbfdc75 = DAT_14cbfdc75 + '\x01';
  _DAT_14cbfe188 = 0x100000000;
  if (*(char *)(_DAT_14cbfe170 + 100) != '\0') {
    DAT_14cbfdc76 = DAT_14cbfdc76 + '\x01';
  }
  return;
}



// FUNCTION 145e69fd8 FUN_145e69fd8 body=261 status=ok
// SIG undefined FUN_145e69fd8(void)

void FUN_145e69fd8(void)

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
              0x110) < DAT_14cbfe050) {
    FUN_144b3d300(&DAT_14cbfe050);
    if (DAT_14cbfe050 == -1) {
      FUN_145e6a0de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x17d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfdfd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14445542b);
      _Init_thread_footer(&DAT_14cbfe050);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6a0de FUN_145e6a0de body=226 status=ok
// SIG undefined FUN_145e6a0de(void)

longlong * FUN_145e6a0de(longlong *param_1)

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
  pcVar13 = FUN_14667ea8c;
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



// FUNCTION 145e6a1c6 FUN_145e6a1c6 body=132 status=ok
// SIG undefined FUN_145e6a1c6(void)

undefined1 * FUN_145e6a1c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6a1c2;
}



// FUNCTION 145e6a24a FUN_145e6a24a body=138 status=ok
// SIG undefined FUN_145e6a24a(void)

code * FUN_145e6a24a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CopyPressure";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000017f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6a1c6;
}



// FUNCTION 145e6a2d4 FUN_145e6a2d4 body=292 status=ok
// SIG undefined FUN_145e6a2d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6a2d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfdfb8) {
    FUN_144b3d300(&DAT_14cbfdfb8);
    if (DAT_14cbfdfb8 == -1) {
      FUN_145e6a542();
      FUN_145e6a3f8();
      FUN_140db5666(&DAT_14cbfdf10,0,&DAT_14cbfdea8,L"FCopyVelocityGridCS",
                    L"/Plugin/Runtime/HairStrands/Private/NiagaraCopyVelocityGrid.usf",L"MainCS",5,1
                    ,FUN_1490be340,FUN_1490be2e0,&LAB_1490be2dc,&LAB_1490be2d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfe0e0);
      _DAT_14cbfdf10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144455076);
      _Init_thread_footer(&DAT_14cbfdfb8);
    }
  }
  return &DAT_14cbfdf10;
}



// FUNCTION 145e6a3f8 FUN_145e6a3f8 body=205 status=ok
// SIG undefined FUN_145e6a3f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6a3f8(void)

{
  if ((DAT_14cbfdf0f & 2) == 0) {
    DAT_14cbfdf0f = DAT_14cbfdf0f | 2;
    _DAT_14cbfdeb0 = L"FCopyVelocityGridCS";
    _DAT_14cbfdec8 = FUN_146826540;
    _DAT_14cbfded0 = FUN_146825d77;
    _DAT_14cbfded8 = FUN_146825fd6;
    _DAT_14cbfdee0 = FUN_1407e02ea;
    _DAT_14cbfdee8 = FUN_146826273;
    _DAT_14cbfdec0 = FUN_1490be2aa;
    _DAT_14cbfdf00 = 0xffffffff000000e0;
    _DAT_14cbfdf08 = 8;
    DAT_14cbfdf0c = 0;
    _DAT_14cbfdef0 = &LAB_1490be2d4;
    FUN_145e6a4c6();
    FUN_1407e00cc(&DAT_14cbfdea8);
    return;
  }
  return;
}



// FUNCTION 145e6a4c6 FUN_145e6a4c6 body=123 status=ok
// SIG undefined FUN_145e6a4c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6a4c6(void)

{
  _DAT_14cbfe260 = L"BASE";
  DAT_14cbfe28a = 4;
  _DAT_14cbfe268 = FUN_140b35ae4();
  _DAT_14cbfe270 = DAT_14cbfdeb8;
  _DAT_14cbfe278 = &LAB_14682652b;
  DAT_14cbfdeb8 = &DAT_14cbfe260;
  DAT_14cbfdf0d = DAT_14cbfdf0d + '\x01';
  _DAT_14cbfe280 = 0x100000000;
  if (*(char *)(_DAT_14cbfe268 + 100) != '\0') {
    DAT_14cbfdf0e = DAT_14cbfdf0e + '\x01';
  }
  return;
}



// FUNCTION 145e6a542 FUN_145e6a542 body=261 status=ok
// SIG undefined FUN_145e6a542(void)

void FUN_145e6a542(void)

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
              0x110) < DAT_14cbfe160) {
    FUN_144b3d300(&DAT_14cbfe160);
    if (DAT_14cbfe160 == -1) {
      FUN_145e6a648(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x28a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfe0e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14445575f);
      _Init_thread_footer(&DAT_14cbfe160);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6a648 FUN_145e6a648 body=226 status=ok
// SIG undefined FUN_145e6a648(void)

longlong * FUN_145e6a648(longlong *param_1)

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
  pcVar13 = FUN_14667eb9c;
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



// FUNCTION 145e6a730 FUN_145e6a730 body=132 status=ok
// SIG undefined FUN_145e6a730(void)

undefined1 * FUN_145e6a730(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6a72c;
}



// FUNCTION 145e6a7b4 FUN_145e6a7b4 body=138 status=ok
// SIG undefined FUN_145e6a7b4(void)

code * FUN_145e6a7b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GridCurrentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000028c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6a730;
}



// FUNCTION 145e6a83e FUN_145e6a83e body=292 status=ok
// SIG undefined FUN_145e6a83e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6a83e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27ac0) {
    FUN_144b3d300(&DAT_14cc27ac0);
    if (DAT_14cc27ac0 == -1) {
      FUN_145e6aaac();
      FUN_145e6a962();
      FUN_140db5666(&DAT_14cc27a18,0,&DAT_14cc279b0,L"FColorConversionCS",
                    L"/Plugin/FSR/Private/PostProcessFFX_HDRColorConversion.usf",L"MainCS",5,0x10,
                    FUN_149805912,FUN_1498058b2,&LAB_14463d5bc,&LAB_1498058ae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc280c0);
      _DAT_14cc27a18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14463d611);
      _Init_thread_footer(&DAT_14cc27ac0);
    }
  }
  return &DAT_14cc27a18;
}



// FUNCTION 145e6a962 FUN_145e6a962 body=205 status=ok
// SIG undefined FUN_145e6a962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6a962(void)

{
  if ((DAT_14cc27a17 & 2) == 0) {
    DAT_14cc27a17 = DAT_14cc27a17 | 2;
    _DAT_14cc279b8 = L"FColorConversionCS";
    _DAT_14cc279d0 = FUN_146826540;
    _DAT_14cc279d8 = FUN_146825d77;
    _DAT_14cc279e0 = FUN_146825fd6;
    _DAT_14cc279e8 = FUN_1407e02ea;
    _DAT_14cc279f0 = FUN_146826273;
    _DAT_14cc279c8 = FUN_149805880;
    _DAT_14cc27a08 = 0xffffffff000000e0;
    _DAT_14cc27a10 = 8;
    DAT_14cc27a14 = 0;
    _DAT_14cc279f8 = &LAB_1498058aa;
    FUN_145e6aa30();
    FUN_1407e00cc(&DAT_14cc279b0);
    return;
  }
  return;
}



// FUNCTION 145e6aa30 FUN_145e6aa30 body=123 status=ok
// SIG undefined FUN_145e6aa30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6aa30(void)

{
  _DAT_14cc283a0 = L"BASE";
  DAT_14cc283ca = 4;
  _DAT_14cc283a8 = FUN_140b35ae4();
  _DAT_14cc283b0 = DAT_14cc279c0;
  _DAT_14cc283b8 = &LAB_14682652b;
  DAT_14cc279c0 = &DAT_14cc283a0;
  DAT_14cc27a15 = DAT_14cc27a15 + '\x01';
  _DAT_14cc283c0 = 0x100000000;
  if (*(char *)(_DAT_14cc283a8 + 100) != '\0') {
    DAT_14cc27a16 = DAT_14cc27a16 + '\x01';
  }
  return;
}



// FUNCTION 145e6aaac FUN_145e6aaac body=261 status=ok
// SIG undefined FUN_145e6aaac(void)

void FUN_145e6aaac(void)

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
              0x110) < DAT_14cc28140) {
    FUN_144b3d300(&DAT_14cc28140);
    if (DAT_14cc28140 == -1) {
      FUN_145e6abb2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x66;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc280c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14463e54a);
      _Init_thread_footer(&DAT_14cc28140);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6abb2 FUN_145e6abb2 body=226 status=ok
// SIG undefined FUN_145e6abb2(void)

longlong * FUN_145e6abb2(longlong *param_1)

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
  pcVar13 = FUN_14675f102;
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



// FUNCTION 145e6ac9a FUN_145e6ac9a body=132 status=ok
// SIG undefined FUN_145e6ac9a(void)

undefined1 * FUN_145e6ac9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x67;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6ac96;
}



// FUNCTION 145e6ad1e FUN_145e6ad1e body=138 status=ok
// SIG undefined FUN_145e6ad1e(void)

code * FUN_145e6ad1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6ac9a;
}



// FUNCTION 145e6ada8 FUN_145e6ada8 body=289 status=ok
// SIG undefined FUN_145e6ada8(void)

undefined * FUN_145e6ada8(void)

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
              0x110) < DAT_14c9d7b28) {
    FUN_144b3d300(&DAT_14c9d7b28);
    if (DAT_14c9d7b28 == -1) {
      FUN_145e6aeca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"HairVisibilityPass";
      local_78 = L"FVisibilityPassUniformParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x53c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d7aa8,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6606f);
      _Init_thread_footer(&DAT_14c9d7b28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d7aa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6aeca FUN_145e6aeca body=226 status=ok
// SIG undefined FUN_145e6aeca(void)

longlong * FUN_145e6aeca(longlong *param_1)

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
  pcVar13 = FUN_1462cc446;
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



// FUNCTION 145e6afb2 FUN_145e6afb2 body=132 status=ok
// SIG undefined FUN_145e6afb2(void)

undefined1 * FUN_145e6afb2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxPPLLNodeCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x53d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6afae;
}



// FUNCTION 145e6b036 FUN_145e6b036 body=138 status=ok
// SIG undefined FUN_145e6b036(void)

code * FUN_145e6b036(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PPLLCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000053e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6afb2;
}



// FUNCTION 145e6b0c0 FUN_145e6b0c0 body=289 status=ok
// SIG undefined FUN_145e6b0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6b0c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26148) {
    FUN_144b3d300(&DAT_14ca26148);
    if (DAT_14ca26148 == -1) {
      FUN_145e6b32c();
      FUN_145e6b1e2();
      FUN_140db5666(&DAT_14ca260a0,0,&DAT_14ca26038,L"FMobileAmbientOcclusionUpsamplePS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",
                    L"AmbientOcclusionUpsamplePS",3,3,FUN_14728a7f8,FUN_14728a798,&LAB_14728a75c,
                    &LAB_14728a758,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca28668);
      _DAT_14ca260a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb3633);
      _Init_thread_footer(&DAT_14ca26148);
    }
  }
  return &DAT_14ca260a0;
}



// FUNCTION 145e6b1e2 FUN_145e6b1e2 body=205 status=ok
// SIG undefined FUN_145e6b1e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6b1e2(void)

{
  if ((DAT_14ca2609f & 2) == 0) {
    DAT_14ca2609f = DAT_14ca2609f | 2;
    _DAT_14ca26040 = L"FMobileAmbientOcclusionUpsamplePS";
    _DAT_14ca26058 = FUN_146826540;
    _DAT_14ca26060 = FUN_146825d77;
    _DAT_14ca26068 = FUN_146825fd6;
    _DAT_14ca26070 = FUN_1407e02ea;
    _DAT_14ca26078 = FUN_146826273;
    _DAT_14ca26050 = FUN_14728a728;
    _DAT_14ca26090 = 0xffffffff000000e0;
    _DAT_14ca26098 = 8;
    DAT_14ca2609c = 0;
    _DAT_14ca26080 = &LAB_14728a754;
    FUN_145e6b2b0();
    FUN_1407e00cc(&DAT_14ca26038);
    return;
  }
  return;
}



// FUNCTION 145e6b2b0 FUN_145e6b2b0 body=123 status=ok
// SIG undefined FUN_145e6b2b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6b2b0(void)

{
  _DAT_14ca2bf70 = L"BASE";
  DAT_14ca2bf9a = 4;
  _DAT_14ca2bf78 = FUN_140b35ae4();
  _DAT_14ca2bf80 = DAT_14ca26048;
  _DAT_14ca2bf88 = &LAB_14682652b;
  DAT_14ca26048 = &DAT_14ca2bf70;
  DAT_14ca2609d = DAT_14ca2609d + '\x01';
  _DAT_14ca2bf90 = 0x100000000;
  if (*(char *)(_DAT_14ca2bf78 + 100) != '\0') {
    DAT_14ca2609e = DAT_14ca2609e + '\x01';
  }
  return;
}



// FUNCTION 145e6b32c FUN_145e6b32c body=261 status=ok
// SIG undefined FUN_145e6b32c(void)

void FUN_145e6b32c(void)

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
              0x110) < DAT_14ca286e8) {
    FUN_144b3d300(&DAT_14ca286e8);
    if (DAT_14ca286e8 == -1) {
      FUN_145e6b432(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x2e5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28668,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6c20);
      _Init_thread_footer(&DAT_14ca286e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6b432 FUN_145e6b432 body=226 status=ok
// SIG undefined FUN_145e6b432(void)

longlong * FUN_145e6b432(longlong *param_1)

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
  pcVar13 = FUN_1462f9218;
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



// FUNCTION 145e6b51a FUN_145e6b51a body=136 status=ok
// SIG undefined FUN_145e6b51a(void)

undefined1 * FUN_145e6b51a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a890ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e6b516;
}



// FUNCTION 145e6b5a2 FUN_145e6b5a2 body=138 status=ok
// SIG undefined FUN_145e6b5a2(void)

code * FUN_145e6b5a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AOSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728d51e;
}



// FUNCTION 145e6b62c FUN_145e6b62c body=238 status=ok
// SIG undefined FUN_145e6b62c(void)

void FUN_145e6b62c(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14016fae4();
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_1449f3324();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (*(char *)(lVar2 + 0xa99) == '\x01') {
        uVar1 = *(undefined1 *)(lVar2 + 0xa98);
      }
      else {
        uVar1 = 0;
      }
      *(undefined1 *)(param_1 + 0x9c) = uVar1;
    }
  }
  lVar2 = FUN_1412bdaf0(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_38 = &LAB_1459b8eac;
      local_30 = 0;
      FUN_145e6b71c(lVar2 + 0x2a8,local_28,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6b71c FUN_145e6b71c body=254 status=ok
// SIG undefined FUN_145e6b71c(void)

undefined8
FUN_145e6b71c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b9aaf60;
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



// FUNCTION 145e6b81c FUN_145e6b81c body=40 status=ok
// SIG undefined FUN_145e6b81c(void)

undefined8 FUN_145e6b81c(undefined8 param_1,int param_2)

{
  FUN_145e6b844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e6b844 FUN_145e6b844 body=153 status=ok
// SIG undefined FUN_145e6b844(void)

void FUN_145e6b844(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14affe740;
  param_1[0x72] = &PTR_FUN_14affed80;
  *(undefined4 *)(param_1 + 0x85) = 0;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  FUN_145e6b8de(param_1 + 0x7c);
  plVar3 = (longlong *)param_1[0x78];
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
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145e6b8de FUN_145e6b8de body=53 status=ok
// SIG undefined FUN_145e6b8de(void)

void FUN_145e6b8de(longlong *param_1)

{
  FUN_145e6b914();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e6b914 FUN_145e6b914 body=346 status=ok
// SIG undefined FUN_145e6b914(void)

void FUN_145e6b914(longlong *param_1)

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



// FUNCTION 145e6ba70 FUN_145e6ba70 body=205 status=ok
// SIG undefined FUN_145e6ba70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6ba70(void)

{
  if ((DAT_14c9ec34f & 2) == 0) {
    DAT_14c9ec34f = DAT_14c9ec34f | 2;
    _DAT_14c9ec2f0 = L"FApplyLightShaftsPixelShader";
    _DAT_14c9ec308 = FUN_146826540;
    _DAT_14c9ec310 = FUN_146825d77;
    _DAT_14c9ec318 = FUN_146825fd6;
    _DAT_14c9ec320 = FUN_1407e02ea;
    _DAT_14c9ec328 = FUN_146826273;
    _DAT_14c9ec300 = FUN_1471dc27c;
    _DAT_14c9ec340 = 0xffffffff000000e0;
    _DAT_14c9ec348 = 8;
    DAT_14c9ec34c = 0;
    _DAT_14c9ec330 = &LAB_1471dc2a6;
    FUN_145e6bb3e();
    FUN_1407e00cc(&DAT_14c9ec2e8);
    return;
  }
  return;
}



// FUNCTION 145e6bb3e FUN_145e6bb3e body=123 status=ok
// SIG undefined FUN_145e6bb3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6bb3e(void)

{
  _DAT_14c9f1588 = L"BASE";
  DAT_14c9f15b2 = 4;
  _DAT_14c9f1590 = FUN_140b35ae4();
  _DAT_14c9f1598 = DAT_14c9ec2f8;
  _DAT_14c9f15a0 = &LAB_14682652b;
  DAT_14c9ec2f8 = &DAT_14c9f1588;
  DAT_14c9ec34d = DAT_14c9ec34d + '\x01';
  _DAT_14c9f15a8 = 0x100000000;
  if (*(char *)(_DAT_14c9f1590 + 100) != '\0') {
    DAT_14c9ec34e = DAT_14c9ec34e + '\x01';
  }
  return;
}



// FUNCTION 145e6bbba FUN_145e6bbba body=226 status=ok
// SIG undefined FUN_145e6bbba(void)

longlong * FUN_145e6bbba(longlong *param_1)

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
  pcVar13 = FUN_1462d77c4;
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



// FUNCTION 145e6bca2 FUN_145e6bca2 body=138 status=ok
// SIG undefined FUN_145e6bca2(void)

code * FUN_145e6bca2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6bd2c;
}



// FUNCTION 145e6bd2c FUN_145e6bd2c body=140 status=ok
// SIG undefined FUN_145e6bd2c(void)

undefined1 * FUN_145e6bd2c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456e3770();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightShafts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLightShaftPixelShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9efe78;
  return &LAB_145e6bc9e;
}



// FUNCTION 145e6bdb8 FUN_145e6bdb8 body=205 status=ok
// SIG undefined FUN_145e6bdb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6bdb8(void)

{
  if ((DAT_14ca14e3f & 2) == 0) {
    DAT_14ca14e3f = DAT_14ca14e3f | 2;
    _DAT_14ca14de0 = L"FCompactViewsVSM_CS";
    _DAT_14ca14df8 = FUN_146826540;
    _DAT_14ca14e00 = FUN_146825d77;
    _DAT_14ca14e08 = FUN_146825fd6;
    _DAT_14ca14e10 = FUN_1407e02ea;
    _DAT_14ca14e18 = FUN_146826273;
    _DAT_14ca14df0 = FUN_147252324;
    _DAT_14ca14e30 = 0xffffffff000000e0;
    _DAT_14ca14e38 = 8;
    DAT_14ca14e3c = 0;
    _DAT_14ca14e20 = &LAB_147252350;
    FUN_145e6be86();
    FUN_1407e00cc(&DAT_14ca14dd8);
    return;
  }
  return;
}



// FUNCTION 145e6be86 FUN_145e6be86 body=123 status=ok
// SIG undefined FUN_145e6be86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6be86(void)

{
  _DAT_14ca19100 = L"BASE";
  DAT_14ca1912a = 4;
  _DAT_14ca19108 = FUN_140b35ae4();
  _DAT_14ca19110 = DAT_14ca14de8;
  _DAT_14ca19118 = &LAB_14682652b;
  DAT_14ca14de8 = &DAT_14ca19100;
  DAT_14ca14e3d = DAT_14ca14e3d + '\x01';
  _DAT_14ca19120 = 0x100000000;
  if (*(char *)(_DAT_14ca19108 + 100) != '\0') {
    DAT_14ca14e3e = DAT_14ca14e3e + '\x01';
  }
  return;
}



// FUNCTION 145e6bf02 FUN_145e6bf02 body=226 status=ok
// SIG undefined FUN_145e6bf02(void)

longlong * FUN_145e6bf02(longlong *param_1)

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
  pcVar13 = FUN_1462f1076;
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



// FUNCTION 145e6bfea FUN_145e6bfea body=138 status=ok
// SIG undefined FUN_145e6bfea(void)

code * FUN_145e6bfea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedViewsOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FPackedNaniteView >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000398;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6c074;
}



// FUNCTION 145e6c074 FUN_145e6c074 body=140 status=ok
// SIG undefined FUN_145e6c074(void)

undefined1 * FUN_145e6c074(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c5add2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCullingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x396;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca17820;
  return &LAB_145e6bfe6;
}



// FUNCTION 145e6c100 FUN_145e6c100 body=205 status=ok
// SIG undefined FUN_145e6c100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6c100(void)

{
  if ((DAT_14ca5cfcf & 2) == 0) {
    DAT_14ca5cfcf = DAT_14ca5cfcf | 2;
    _DAT_14ca5cf70 = L"FRenderMultiScatteredLuminanceLutCS";
    _DAT_14ca5cf88 = FUN_146826540;
    _DAT_14ca5cf90 = FUN_146825d77;
    _DAT_14ca5cf98 = FUN_146825fd6;
    _DAT_14ca5cfa0 = FUN_1407e02ea;
    _DAT_14ca5cfa8 = FUN_146826273;
    _DAT_14ca5cf80 = FUN_147315d62;
    _DAT_14ca5cfc0 = 0xffffffff000000e0;
    _DAT_14ca5cfc8 = 8;
    DAT_14ca5cfcc = 0;
    _DAT_14ca5cfb0 = &LAB_147315d8c;
    FUN_145e6c1ce();
    FUN_1407e00cc(&DAT_14ca5cf68);
    return;
  }
  return;
}



// FUNCTION 145e6c1ce FUN_145e6c1ce body=123 status=ok
// SIG undefined FUN_145e6c1ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6c1ce(void)

{
  _DAT_14ca5fa00 = L"BASE";
  DAT_14ca5fa2a = 4;
  _DAT_14ca5fa08 = FUN_140b35ae4();
  _DAT_14ca5fa10 = DAT_14ca5cf78;
  _DAT_14ca5fa18 = &LAB_14682652b;
  DAT_14ca5cf78 = &DAT_14ca5fa00;
  DAT_14ca5cfcd = DAT_14ca5cfcd + '\x01';
  _DAT_14ca5fa20 = 0x100000000;
  if (*(char *)(_DAT_14ca5fa08 + 100) != '\0') {
    DAT_14ca5cfce = DAT_14ca5cfce + '\x01';
  }
  return;
}



// FUNCTION 145e6c24a FUN_145e6c24a body=226 status=ok
// SIG undefined FUN_145e6c24a(void)

longlong * FUN_145e6c24a(longlong *param_1)

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
  pcVar13 = FUN_14630bb6c;
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



// FUNCTION 145e6c332 FUN_145e6c332 body=138 status=ok
// SIG undefined FUN_145e6c332(void)

code * FUN_145e6c332(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceLutTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000033f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731a93c;
}



// FUNCTION 145e6c3bc FUN_145e6c3bc body=140 status=ok
// SIG undefined FUN_145e6c3bc(void)

undefined1 * FUN_145e6c3bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8a5d4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Atmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAtmosphereUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5cac0;
  return &LAB_145e6c32e;
}



// FUNCTION 145e6c448 FUN_145e6c448 body=205 status=ok
// SIG undefined FUN_145e6c448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6c448(void)

{
  if ((DAT_14ca6528f & 2) == 0) {
    DAT_14ca6528f = DAT_14ca6528f | 2;
    _DAT_14ca65230 = L"FPackAvailablePagesCS";
    _DAT_14ca65248 = FUN_146826540;
    _DAT_14ca65250 = FUN_146825d77;
    _DAT_14ca65258 = FUN_146825fd6;
    _DAT_14ca65260 = FUN_1407e02ea;
    _DAT_14ca65268 = FUN_146826273;
    _DAT_14ca65240 = FUN_14732b796;
    _DAT_14ca65280 = 0xffffffff000000e0;
    _DAT_14ca65288 = 8;
    DAT_14ca6528c = 0;
    _DAT_14ca65270 = &LAB_14732b7c0;
    FUN_145e6c516();
    FUN_1407e00cc(&DAT_14ca65228);
    return;
  }
  return;
}



// FUNCTION 145e6c516 FUN_145e6c516 body=123 status=ok
// SIG undefined FUN_145e6c516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6c516(void)

{
  _DAT_14ca68cc0 = L"BASE";
  DAT_14ca68cea = 4;
  _DAT_14ca68cc8 = FUN_140b35ae4();
  _DAT_14ca68cd0 = DAT_14ca65238;
  _DAT_14ca68cd8 = &LAB_14682652b;
  DAT_14ca65238 = &DAT_14ca68cc0;
  DAT_14ca6528d = DAT_14ca6528d + '\x01';
  _DAT_14ca68ce0 = 0x100000000;
  if (*(char *)(_DAT_14ca68cc8 + 100) != '\0') {
    DAT_14ca6528e = DAT_14ca6528e + '\x01';
  }
  return;
}



// FUNCTION 145e6c592 FUN_145e6c592 body=226 status=ok
// SIG undefined FUN_145e6c592(void)

longlong * FUN_145e6c592(longlong *param_1)

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
  pcVar13 = FUN_146311a74;
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



// FUNCTION 145e6c67a FUN_145e6c67a body=138 status=ok
// SIG undefined FUN_145e6c67a(void)

code * FUN_145e6c67a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPageLists";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6c704;
}



// FUNCTION 145e6c704 FUN_145e6c704 body=140 status=ok
// SIG undefined FUN_145e6c704(void)

undefined1 * FUN_145e6c704(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145e6c676;
}



// FUNCTION 145e6c790 FUN_145e6c790 body=205 status=ok
// SIG undefined FUN_145e6c790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6c790(void)

{
  if ((DAT_14ca653b7 & 2) == 0) {
    DAT_14ca653b7 = DAT_14ca653b7 | 2;
    _DAT_14ca65358 = L"FAppendPhysicalPageListsCS";
    _DAT_14ca65370 = FUN_146826540;
    _DAT_14ca65378 = FUN_146825d77;
    _DAT_14ca65380 = FUN_146825fd6;
    _DAT_14ca65388 = FUN_1407e02ea;
    _DAT_14ca65390 = FUN_146826273;
    _DAT_14ca65368 = FUN_14732b894;
    _DAT_14ca653a8 = 0xffffffff000000e0;
    _DAT_14ca653b0 = 8;
    DAT_14ca653b4 = 0;
    _DAT_14ca65398 = &LAB_14732b8be;
    FUN_145e6c85e();
    FUN_1407e00cc(&DAT_14ca65350);
    return;
  }
  return;
}



// FUNCTION 145e6c85e FUN_145e6c85e body=123 status=ok
// SIG undefined FUN_145e6c85e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6c85e(void)

{
  _DAT_14ca68cf0 = L"BASE";
  DAT_14ca68d1a = 4;
  _DAT_14ca68cf8 = FUN_140b35ae4();
  _DAT_14ca68d00 = DAT_14ca65360;
  _DAT_14ca68d08 = &LAB_14682652b;
  DAT_14ca65360 = &DAT_14ca68cf0;
  DAT_14ca653b5 = DAT_14ca653b5 + '\x01';
  _DAT_14ca68d10 = 0x100000000;
  if (*(char *)(_DAT_14ca68cf8 + 100) != '\0') {
    DAT_14ca653b6 = DAT_14ca653b6 + '\x01';
  }
  return;
}



// FUNCTION 145e6c8da FUN_145e6c8da body=226 status=ok
// SIG undefined FUN_145e6c8da(void)

longlong * FUN_145e6c8da(longlong *param_1)

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
  pcVar13 = FUN_146311afc;
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



// FUNCTION 145e6c9c2 FUN_145e6c9c2 body=138 status=ok
// SIG undefined FUN_145e6c9c2(void)

code * FUN_145e6c9c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bAppendEmptyToAvailable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000506;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732f9f8;
}



// FUNCTION 145e6ca4c FUN_145e6ca4c body=140 status=ok
// SIG undefined FUN_145e6ca4c(void)

undefined1 * FUN_145e6ca4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x504;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145e6c9be;
}



// FUNCTION 145e6cad8 FUN_145e6cad8 body=205 status=ok
// SIG undefined FUN_145e6cad8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6cad8(void)

{
  if ((DAT_14ca65bcf & 2) == 0) {
    DAT_14ca65bcf = DAT_14ca65bcf | 2;
    _DAT_14ca65b70 = L"FVirtualSmFeedbackStatusCS";
    _DAT_14ca65b88 = FUN_146826540;
    _DAT_14ca65b90 = FUN_146825d77;
    _DAT_14ca65b98 = FUN_146825fd6;
    _DAT_14ca65ba0 = FUN_1407e02ea;
    _DAT_14ca65ba8 = FUN_146826273;
    _DAT_14ca65b80 = FUN_14732bf86;
    _DAT_14ca65bc0 = 0xffffffff000000e0;
    _DAT_14ca65bc8 = 8;
    DAT_14ca65bcc = 0;
    _DAT_14ca65bb0 = &LAB_14732bfb0;
    FUN_145e6cba6();
    FUN_1407e00cc(&DAT_14ca65b68);
    return;
  }
  return;
}



// FUNCTION 145e6cba6 FUN_145e6cba6 body=123 status=ok
// SIG undefined FUN_145e6cba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6cba6(void)

{
  _DAT_14ca68e40 = L"BASE";
  DAT_14ca68e6a = 4;
  _DAT_14ca68e48 = FUN_140b35ae4();
  _DAT_14ca68e50 = DAT_14ca65b78;
  _DAT_14ca68e58 = &LAB_14682652b;
  DAT_14ca65b78 = &DAT_14ca68e40;
  DAT_14ca65bcd = DAT_14ca65bcd + '\x01';
  _DAT_14ca68e60 = 0x100000000;
  if (*(char *)(_DAT_14ca68e48 + 100) != '\0') {
    DAT_14ca65bce = DAT_14ca65bce + '\x01';
  }
  return;
}



// FUNCTION 145e6cc22 FUN_145e6cc22 body=226 status=ok
// SIG undefined FUN_145e6cc22(void)

longlong * FUN_145e6cc22(longlong *param_1)

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
  pcVar13 = FUN_146312052;
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



// FUNCTION 145e6cd0a FUN_145e6cd0a body=138 status=ok
// SIG undefined FUN_145e6cd0a(void)

code * FUN_145e6cd0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalPageLists";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< int >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000005b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6cd94;
}



// FUNCTION 145e6cd94 FUN_145e6cd94 body=140 status=ok
// SIG undefined FUN_145e6cd94(void)

undefined1 * FUN_145e6cd94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145e6cd06;
}



// FUNCTION 145e6ce20 FUN_145e6ce20 body=205 status=ok
// SIG undefined FUN_145e6ce20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6ce20(void)

{
  if ((DAT_14ca6650f & 2) == 0) {
    DAT_14ca6650f = DAT_14ca6650f | 2;
    _DAT_14ca664b0 = L"FUpdateAndClearDirtyFlagsCS";
    _DAT_14ca664c8 = FUN_146826540;
    _DAT_14ca664d0 = FUN_146825d77;
    _DAT_14ca664d8 = FUN_146825fd6;
    _DAT_14ca664e0 = FUN_1407e02ea;
    _DAT_14ca664e8 = FUN_146826273;
    _DAT_14ca664c0 = FUN_14732c85e;
    _DAT_14ca66500 = 0xffffffff000000e0;
    _DAT_14ca66508 = 8;
    DAT_14ca6650c = 0;
    _DAT_14ca664f0 = &LAB_14732c888;
    FUN_145e6ceee();
    FUN_1407e00cc(&DAT_14ca664a8);
    return;
  }
  return;
}



// FUNCTION 145e6ceee FUN_145e6ceee body=123 status=ok
// SIG undefined FUN_145e6ceee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6ceee(void)

{
  _DAT_14ca68fc0 = L"BASE";
  DAT_14ca68fea = 4;
  _DAT_14ca68fc8 = FUN_140b35ae4();
  _DAT_14ca68fd0 = DAT_14ca664b8;
  _DAT_14ca68fd8 = &LAB_14682652b;
  DAT_14ca664b8 = &DAT_14ca68fc0;
  DAT_14ca6650d = DAT_14ca6650d + '\x01';
  _DAT_14ca68fe0 = 0x100000000;
  if (*(char *)(_DAT_14ca68fc8 + 100) != '\0') {
    DAT_14ca6650e = DAT_14ca6650e + '\x01';
  }
  return;
}



// FUNCTION 145e6cf6a FUN_145e6cf6a body=226 status=ok
// SIG undefined FUN_145e6cf6a(void)

longlong * FUN_145e6cf6a(longlong *param_1)

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
  pcVar13 = FUN_146312b20;
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



// FUNCTION 145e6d052 FUN_145e6d052 body=138 status=ok
// SIG undefined FUN_145e6d052(void)

code * FUN_145e6d052(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DirtyPageFlagsInOut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000b38;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6d0dc;
}



// FUNCTION 145e6d0dc FUN_145e6d0dc body=140 status=ok
// SIG undefined FUN_145e6d0dc(void)

undefined1 * FUN_145e6d0dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144938434();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb37;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_145e6d04e;
}



// FUNCTION 145e6d168 FUN_145e6d168 body=205 status=ok
// SIG undefined FUN_145e6d168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6d168(void)

{
  if ((DAT_14ca8bdf7 & 2) == 0) {
    DAT_14ca8bdf7 = DAT_14ca8bdf7 | 2;
    _DAT_14ca8bd98 = L"FBuildIndirectDispatchArgsBufferCS";
    _DAT_14ca8bdb0 = FUN_146826540;
    _DAT_14ca8bdb8 = FUN_146825d77;
    _DAT_14ca8bdc0 = FUN_146825fd6;
    _DAT_14ca8bdc8 = FUN_1407e02ea;
    _DAT_14ca8bdd0 = FUN_146826273;
    _DAT_14ca8bda8 = FUN_14741bf5a;
    _DAT_14ca8bde8 = 0xffffffff000000e0;
    _DAT_14ca8bdf0 = 8;
    DAT_14ca8bdf4 = 0;
    _DAT_14ca8bdd8 = &LAB_14741bf86;
    FUN_145e6d236();
    FUN_1407e00cc(&DAT_14ca8bd90);
    return;
  }
  return;
}



// FUNCTION 145e6d236 FUN_145e6d236 body=133 status=ok
// SIG undefined FUN_145e6d236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6d236(void)

{
  _DAT_14ca94340 = L"BASE";
  DAT_14ca9436a = 4;
  FUN_140b35ae4();
  _DAT_14ca94350 = DAT_14ca8bda0;
  _DAT_14ca94348 = &DAT_14ca8c6c8;
  _DAT_14ca94358 = &LAB_14682652b;
  DAT_14ca8bda0 = &DAT_14ca94340;
  DAT_14ca8bdf5 = DAT_14ca8bdf5 + '\x01';
  _DAT_14ca94360 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8bdf6 = DAT_14ca8bdf6 + '\x01';
  }
  return;
}



// FUNCTION 145e6d2bc FUN_145e6d2bc body=226 status=ok
// SIG undefined FUN_145e6d2bc(void)

longlong * FUN_145e6d2bc(longlong *param_1)

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
  pcVar13 = FUN_14631c718;
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



// FUNCTION 145e6d3a4 FUN_145e6d3a4 body=130 status=ok
// SIG undefined FUN_145e6d3a4(void)

undefined1 * FUN_145e6d3a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e6d3a0;
}



// FUNCTION 145e6d426 FUN_145e6d426 body=138 status=ok
// SIG undefined FUN_145e6d426(void)

code * FUN_145e6d426(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumMips";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422ddc;
}



// FUNCTION 145e6d4b0 FUN_145e6d4b0 body=205 status=ok
// SIG undefined FUN_145e6d4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6d4b0(void)

{
  if ((DAT_14cb50a47 & 2) == 0) {
    DAT_14cb50a47 = DAT_14cb50a47 | 2;
    _DAT_14cb509e8 = L"FProjectionCS";
    _DAT_14cb50a00 = FUN_146826540;
    _DAT_14cb50a08 = FUN_146825d77;
    _DAT_14cb50a10 = FUN_146825fd6;
    _DAT_14cb50a18 = FUN_1407e02ea;
    _DAT_14cb50a20 = FUN_146826273;
    _DAT_14cb509f8 = FUN_1485ec88c;
    _DAT_14cb50a38 = 0xffffffff000000e0;
    _DAT_14cb50a40 = 8;
    DAT_14cb50a44 = 0;
    _DAT_14cb50a28 = &LAB_1485ec8b6;
    FUN_145e6d57e();
    FUN_1407e00cc(&DAT_14cb509e0);
    return;
  }
  return;
}



// FUNCTION 145e6d57e FUN_145e6d57e body=123 status=ok
// SIG undefined FUN_145e6d57e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6d57e(void)

{
  _DAT_14cb50fc8 = L"BASE";
  DAT_14cb50ff2 = 4;
  _DAT_14cb50fd0 = FUN_140b35ae4();
  _DAT_14cb50fd8 = DAT_14cb509f0;
  _DAT_14cb50fe0 = &LAB_14682652b;
  DAT_14cb509f0 = &DAT_14cb50fc8;
  DAT_14cb50a45 = DAT_14cb50a45 + '\x01';
  _DAT_14cb50fe8 = 0x100000000;
  if (*(char *)(_DAT_14cb50fd0 + 100) != '\0') {
    DAT_14cb50a46 = DAT_14cb50a46 + '\x01';
  }
  return;
}



// FUNCTION 145e6d5fa FUN_145e6d5fa body=226 status=ok
// SIG undefined FUN_145e6d5fa(void)

longlong * FUN_145e6d5fa(longlong *param_1)

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
  pcVar13 = FUN_1464a4cc4;
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



// FUNCTION 145e6d6e2 FUN_145e6d6e2 body=138 status=ok
// SIG undefined FUN_145e6d6e2(void)

code * FUN_145e6d6e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Obstacles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed9e2;
}



// FUNCTION 145e6d76c FUN_145e6d76c body=140 status=ok
// SIG undefined FUN_145e6d76c(void)

undefined1 * FUN_145e6d76c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8d58a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxWindParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGbxWindUniformBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb50380;
  return &LAB_145e6d6de;
}



// FUNCTION 145e6d804 FUN_145e6d804 body=370 status=ok
// SIG undefined FUN_145e6d804(void)

undefined8 * FUN_145e6d804(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a4b40f0;
  param_1[0x1f] = &PTR_LAB_14a4b4460;
  FUN_145e6d978(param_1 + 0x20);
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_145e6da16(plVar1,param_1 + 0x20);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    param_1[0x1c] = local_38;
    plVar4 = (longlong *)param_1[0x1d];
    if (plVar4 == (longlong *)0x0) goto LAB_145e6d8ca;
    param_1[0x1d] = 0;
LAB_145e6d91c:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145e6d8ca;
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
      if (plVar4 == (longlong *)0x0) goto LAB_145e6d8ca;
      goto LAB_145e6d91c;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145e6d8ca;
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
LAB_145e6d8ca:
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



// FUNCTION 145e6d978 FUN_145e6d978 body=157 status=ok
// SIG undefined FUN_145e6d978(void)

void FUN_145e6d978(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a4ab2a0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 145e6da16 FUN_145e6da16 body=197 status=ok
// SIG undefined FUN_145e6da16(void)

undefined8 * FUN_145e6da16(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_145e6dadc();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 145e6dadc FUN_145e6dadc body=55 status=ok
// SIG undefined FUN_145e6dadc(void)

void FUN_145e6dadc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab4880 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab4880 = FUN_140002ddd(FUN_14634568c,uVar1,L"MovieSceneCameraShakeSourceTriggerChannel");
  }
  return;
}



// FUNCTION 145e6db14 FUN_145e6db14 body=289 status=ok
// SIG undefined FUN_145e6db14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6db14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f5f0) {
    FUN_144b3d300(&DAT_14ca2f5f0);
    if (DAT_14ca2f5f0 == -1) {
      FUN_145e6dd80();
      FUN_145e6dc36();
      FUN_140db5666(&DAT_14ca2f548,0,&DAT_14ca2f4e0,
                    L"FPixelProjectedReflectionMobile_ReflectionPassPS",
                    L"/Engine/Private/PostProcessPixelProjectedReflectionMobile.usf",
                    L"ReflectionPassPS",3,3,FUN_147298d64,FUN_147298d04,&LAB_14583c02e,
                    &LAB_147298d00,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca33700);
      _DAT_14ca2f548 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f03bb2);
      _Init_thread_footer(&DAT_14ca2f5f0);
    }
  }
  return &DAT_14ca2f548;
}



// FUNCTION 145e6dc36 FUN_145e6dc36 body=205 status=ok
// SIG undefined FUN_145e6dc36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6dc36(void)

{
  if ((DAT_14ca2f547 & 2) == 0) {
    DAT_14ca2f547 = DAT_14ca2f547 | 2;
    _DAT_14ca2f4e8 = L"FPixelProjectedReflectionMobile_ReflectionPassPS";
    _DAT_14ca2f500 = FUN_146826540;
    _DAT_14ca2f508 = FUN_146825d77;
    _DAT_14ca2f510 = FUN_146825fd6;
    _DAT_14ca2f518 = FUN_1407e02ea;
    _DAT_14ca2f520 = FUN_146826273;
    _DAT_14ca2f4f8 = FUN_147298cd0;
    _DAT_14ca2f538 = 0xffffffff000000e0;
    _DAT_14ca2f540 = 8;
    DAT_14ca2f544 = 0;
    _DAT_14ca2f528 = &LAB_147298cfc;
    FUN_145e6dd04();
    FUN_1407e00cc(&DAT_14ca2f4e0);
    return;
  }
  return;
}



// FUNCTION 145e6dd04 FUN_145e6dd04 body=123 status=ok
// SIG undefined FUN_145e6dd04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6dd04(void)

{
  _DAT_14ca34b00 = L"BASE";
  DAT_14ca34b2a = 4;
  _DAT_14ca34b08 = FUN_140b35ae4();
  _DAT_14ca34b10 = DAT_14ca2f4f0;
  _DAT_14ca34b18 = &LAB_14682652b;
  DAT_14ca2f4f0 = &DAT_14ca34b00;
  DAT_14ca2f545 = DAT_14ca2f545 + '\x01';
  _DAT_14ca34b20 = 0x100000000;
  if (*(char *)(_DAT_14ca34b08 + 100) != '\0') {
    DAT_14ca2f546 = DAT_14ca2f546 + '\x01';
  }
  return;
}



// FUNCTION 145e6dd80 FUN_145e6dd80 body=261 status=ok
// SIG undefined FUN_145e6dd80(void)

void FUN_145e6dd80(void)

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
              0x110) < DAT_14ca33780) {
    FUN_144b3d300(&DAT_14ca33780);
    if (DAT_14ca33780 == -1) {
      FUN_145e6de86(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x86;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33700,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14045);
      _Init_thread_footer(&DAT_14ca33780);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6de86 FUN_145e6de86 body=226 status=ok
// SIG undefined FUN_145e6de86(void)

longlong * FUN_145e6de86(longlong *param_1)

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
  pcVar13 = FUN_1462fd9e0;
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



// FUNCTION 145e6df6e FUN_145e6df6e body=138 status=ok
// SIG undefined FUN_145e6df6e(void)

code * FUN_145e6df6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BufferSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462fda68;
}



// FUNCTION 145e6dff8 FUN_145e6dff8 body=138 status=ok
// SIG undefined FUN_145e6dff8(void)

undefined1 * FUN_145e6dff8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x87;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e6df6a;
}



// FUNCTION 145e6e082 FUN_145e6e082 body=97 status=ok
// SIG undefined FUN_145e6e082(void)

void FUN_145e6e082(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949898) {
    FUN_144b3d300(&DAT_14c949898);
    if (DAT_14c949898 == -1) {
      FUN_14157afbe();
      atexit(FUN_1427e2320);
      _Init_thread_footer(&DAT_14c949898);
      return;
    }
  }
  return;
}



// FUNCTION 145e6e0e4 FUN_145e6e0e4 body=132 status=ok
// SIG undefined FUN_145e6e0e4(void)

void FUN_145e6e0e4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x118))(param_1,local_20,1);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_28 = (ulonglong)DAT_14c892fa4;
  (**(code **)(*param_1 + 0x18))(param_1,&local_28,param_2,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6e16a FUN_145e6e16a body=65 status=ok
// SIG undefined FUN_145e6e16a(void)

undefined8 * FUN_145e6e16a(undefined8 param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  
  if (param_3 == '\x01') {
    puVar1 = &DAT_14c9908e8;
  }
  else {
    if (param_3 != '\x02') {
      *param_2 = 0;
      return param_2;
    }
    puVar1 = (undefined8 *)&DAT_14c9908f8;
  }
  FUN_1446f57c6(puVar1,param_2);
  return param_2;
}



// FUNCTION 145e6e1ac FUN_145e6e1ac body=292 status=ok
// SIG undefined FUN_145e6e1ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6e1ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb680) {
    FUN_144b3d300(&DAT_14c9cb680);
    if (DAT_14c9cb680 == -1) {
      FUN_145e6e41a();
      FUN_145e6e2d0();
      FUN_140db5666(&DAT_14c9cb5d8,0,&DAT_14c9cb570,L"FPostProcessKuwaharaVisualizePS",
                    L"/Engine/Private/Gearbox/PostProcessKuwaharaVisualize.usf",L"MainPS",3,1,
                    FUN_14715a56e,FUN_14715a50e,&LAB_14715a506,&LAB_14715a502,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ce2f8);
      _DAT_14c9cb5d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c00113);
      _Init_thread_footer(&DAT_14c9cb680);
    }
  }
  return &DAT_14c9cb5d8;
}



// FUNCTION 145e6e2d0 FUN_145e6e2d0 body=205 status=ok
// SIG undefined FUN_145e6e2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6e2d0(void)

{
  if ((DAT_14c9cb5d7 & 2) == 0) {
    DAT_14c9cb5d7 = DAT_14c9cb5d7 | 2;
    _DAT_14c9cb578 = L"FPostProcessKuwaharaVisualizePS";
    _DAT_14c9cb590 = FUN_146826540;
    _DAT_14c9cb598 = FUN_146825d77;
    _DAT_14c9cb5a0 = FUN_146825fd6;
    _DAT_14c9cb5a8 = FUN_1407e02ea;
    _DAT_14c9cb5b0 = FUN_146826273;
    _DAT_14c9cb588 = FUN_14715a4d4;
    _DAT_14c9cb5c8 = 0xffffffff000000e0;
    _DAT_14c9cb5d0 = 8;
    DAT_14c9cb5d4 = 0;
    _DAT_14c9cb5b8 = &LAB_14715a4fe;
    FUN_145e6e39e();
    FUN_1407e00cc(&DAT_14c9cb570);
    return;
  }
  return;
}



// FUNCTION 145e6e39e FUN_145e6e39e body=123 status=ok
// SIG undefined FUN_145e6e39e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6e39e(void)

{
  _DAT_14c9cf370 = L"BASE";
  DAT_14c9cf39a = 4;
  _DAT_14c9cf378 = FUN_140b35ae4();
  _DAT_14c9cf380 = DAT_14c9cb580;
  _DAT_14c9cf388 = &LAB_14682652b;
  DAT_14c9cb580 = &DAT_14c9cf370;
  DAT_14c9cb5d5 = DAT_14c9cb5d5 + '\x01';
  _DAT_14c9cf390 = 0x100000000;
  if (*(char *)(_DAT_14c9cf378 + 100) != '\0') {
    DAT_14c9cb5d6 = DAT_14c9cb5d6 + '\x01';
  }
  return;
}



// FUNCTION 145e6e41a FUN_145e6e41a body=261 status=ok
// SIG undefined FUN_145e6e41a(void)

void FUN_145e6e41a(void)

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
              0x110) < DAT_14c9ce378) {
    FUN_144b3d300(&DAT_14c9ce378);
    if (DAT_14c9ce378 == -1) {
      FUN_145e6e520(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x1e2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce2f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e07b);
      _Init_thread_footer(&DAT_14c9ce378);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6e520 FUN_145e6e520 body=226 status=ok
// SIG undefined FUN_145e6e520(void)

longlong * FUN_145e6e520(longlong *param_1)

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
  pcVar13 = FUN_1462c3abe;
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



// FUNCTION 145e6e608 FUN_145e6e608 body=136 status=ok
// SIG undefined FUN_145e6e608(void)

code * FUN_145e6e608(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6e690;
}



// FUNCTION 145e6e690 FUN_145e6e690 body=138 status=ok
// SIG undefined FUN_145e6e690(void)

undefined1 * FUN_145e6e690(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e6e604;
}



// FUNCTION 145e6e71a FUN_145e6e71a body=292 status=ok
// SIG undefined FUN_145e6e71a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6e71a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0fb8) {
    FUN_144b3d300(&DAT_14c9d0fb8);
    if (DAT_14c9d0fb8 == -1) {
      FUN_145e6e988();
      FUN_145e6e83e();
      FUN_140db5666(&DAT_14c9d0f10,0,&DAT_14c9d0ea8,L"FVoxelVirtualRaymarchingCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelDebug.usf",L"MainCS",5,2,
                    FUN_14716b7bc,FUN_14716b75c,&LAB_14587e76c,&LAB_14716b758,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3fa8);
      _DAT_14c9d0f10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33afd);
      _Init_thread_footer(&DAT_14c9d0fb8);
    }
  }
  return &DAT_14c9d0f10;
}



// FUNCTION 145e6e83e FUN_145e6e83e body=205 status=ok
// SIG undefined FUN_145e6e83e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6e83e(void)

{
  if ((DAT_14c9d0f0f & 2) == 0) {
    DAT_14c9d0f0f = DAT_14c9d0f0f | 2;
    _DAT_14c9d0eb0 = L"FVoxelVirtualRaymarchingCS";
    _DAT_14c9d0ec8 = FUN_146826540;
    _DAT_14c9d0ed0 = FUN_146825d77;
    _DAT_14c9d0ed8 = FUN_146825fd6;
    _DAT_14c9d0ee0 = FUN_1407e02ea;
    _DAT_14c9d0ee8 = FUN_146826273;
    _DAT_14c9d0ec0 = FUN_14716b728;
    _DAT_14c9d0f00 = 0xffffffff000000e0;
    _DAT_14c9d0f08 = 8;
    DAT_14c9d0f0c = 0;
    _DAT_14c9d0ef0 = &LAB_14716b754;
    FUN_145e6e90c();
    FUN_1407e00cc(&DAT_14c9d0ea8);
    return;
  }
  return;
}



// FUNCTION 145e6e90c FUN_145e6e90c body=123 status=ok
// SIG undefined FUN_145e6e90c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6e90c(void)

{
  _DAT_14c9d4ed8 = L"BASE";
  DAT_14c9d4f02 = 4;
  _DAT_14c9d4ee0 = FUN_140b35ae4();
  _DAT_14c9d4ee8 = DAT_14c9d0eb8;
  _DAT_14c9d4ef0 = &LAB_14682652b;
  DAT_14c9d0eb8 = &DAT_14c9d4ed8;
  DAT_14c9d0f0d = DAT_14c9d0f0d + '\x01';
  _DAT_14c9d4ef8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4ee0 + 100) != '\0') {
    DAT_14c9d0f0e = DAT_14c9d0f0e + '\x01';
  }
  return;
}



// FUNCTION 145e6e988 FUN_145e6e988 body=261 status=ok
// SIG undefined FUN_145e6e988(void)

void FUN_145e6e988(void)

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
              0x110) < DAT_14c9d4028) {
    FUN_144b3d300(&DAT_14c9d4028);
    if (DAT_14c9d4028 == -1) {
      FUN_145e6ea8e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x2f7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3fa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494b3);
      _Init_thread_footer(&DAT_14c9d4028);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6ea8e FUN_145e6ea8e body=226 status=ok
// SIG undefined FUN_145e6ea8e(void)

longlong * FUN_145e6ea8e(longlong *param_1)

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
  pcVar13 = FUN_1462c762a;
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



// FUNCTION 145e6eb76 FUN_145e6eb76 body=136 status=ok
// SIG undefined FUN_145e6eb76(void)

code * FUN_145e6eb76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthBeforeCompositionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000002fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471717fc;
}



// FUNCTION 145e6ebfe FUN_145e6ebfe body=138 status=ok
// SIG undefined FUN_145e6ebfe(void)

undefined1 * FUN_145e6ebfe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14127a7f2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e6eb72;
}



// FUNCTION 145e6ec88 FUN_145e6ec88 body=292 status=ok
// SIG undefined FUN_145e6ec88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6ec88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7968) {
    FUN_144b3d300(&DAT_14c9d7968);
    if (DAT_14c9d7968 == -1) {
      FUN_145e6eef6();
      FUN_145e6edac();
      FUN_140db5666(&DAT_14c9d78c0,0,&DAT_14c9d7858,L"FHairAttributeDebugCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"CSMain",5,1,FUN_147181cd8,
                    FUN_147181c78,&LAB_1462ca422,&LAB_147181c74,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9da7b0);
      _DAT_14c9d78c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66057);
      _Init_thread_footer(&DAT_14c9d7968);
    }
  }
  return &DAT_14c9d78c0;
}



// FUNCTION 145e6edac FUN_145e6edac body=205 status=ok
// SIG undefined FUN_145e6edac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6edac(void)

{
  if ((DAT_14c9d78bf & 2) == 0) {
    DAT_14c9d78bf = DAT_14c9d78bf | 2;
    _DAT_14c9d7860 = L"FHairAttributeDebugCS";
    _DAT_14c9d7878 = FUN_146826540;
    _DAT_14c9d7880 = FUN_146825d77;
    _DAT_14c9d7888 = FUN_146825fd6;
    _DAT_14c9d7890 = FUN_1407e02ea;
    _DAT_14c9d7898 = FUN_146826273;
    _DAT_14c9d7870 = FUN_147181c46;
    _DAT_14c9d78b0 = 0xffffffff000000e0;
    _DAT_14c9d78b8 = 8;
    DAT_14c9d78bc = 0;
    _DAT_14c9d78a0 = &LAB_147181c70;
    FUN_145e6ee7a();
    FUN_1407e00cc(&DAT_14c9d7858);
    return;
  }
  return;
}



// FUNCTION 145e6ee7a FUN_145e6ee7a body=123 status=ok
// SIG undefined FUN_145e6ee7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6ee7a(void)

{
  _DAT_14c9dbb58 = L"BASE";
  DAT_14c9dbb82 = 4;
  _DAT_14c9dbb60 = FUN_140b35ae4();
  _DAT_14c9dbb68 = DAT_14c9d7868;
  _DAT_14c9dbb70 = &LAB_14682652b;
  DAT_14c9d7868 = &DAT_14c9dbb58;
  DAT_14c9d78bd = DAT_14c9d78bd + '\x01';
  _DAT_14c9dbb78 = 0x100000000;
  if (*(char *)(_DAT_14c9dbb60 + 100) != '\0') {
    DAT_14c9d78be = DAT_14c9d78be + '\x01';
  }
  return;
}



// FUNCTION 145e6eef6 FUN_145e6eef6 body=261 status=ok
// SIG undefined FUN_145e6eef6(void)

void FUN_145e6eef6(void)

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
              0x110) < DAT_14c9da830) {
    FUN_144b3d300(&DAT_14c9da830);
    if (DAT_14c9da830 == -1) {
      FUN_145e6effc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x481;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da7b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71cc1);
      _Init_thread_footer(&DAT_14c9da830);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6effc FUN_145e6effc body=226 status=ok
// SIG undefined FUN_145e6effc(void)

longlong * FUN_145e6effc(longlong *param_1)

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
  pcVar13 = FUN_1462cc0fa;
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



// FUNCTION 145e6f0e4 FUN_145e6f0e4 body=136 status=ok
// SIG undefined FUN_145e6f0e4(void)

code * FUN_145e6f0e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodeIndexTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000483;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718b7fc;
}



// FUNCTION 145e6f16c FUN_145e6f16c body=138 status=ok
// SIG undefined FUN_145e6f16c(void)

code * FUN_145e6f16c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NodeVisBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FPackedHairVis>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000484;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6f0e4;
}



// FUNCTION 145e6f1f6 FUN_145e6f1f6 body=292 status=ok
// SIG undefined FUN_145e6f1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6f1f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8db0) {
    FUN_144b3d300(&DAT_14c9d8db0);
    if (DAT_14c9d8db0 == -1) {
      FUN_145e6f464();
      FUN_145e6f31a();
      FUN_140db5666(&DAT_14c9d8d08,0,&DAT_14c9d8ca0,L"FHairVisibilityDepthPS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityDepthPS.usf",L"MainPS",3,4,
                    FUN_1471848ea,FUN_14718488a,&LAB_1462ca454,&LAB_147184886,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9dac78);
      _DAT_14c9d8d08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c6615d);
      _Init_thread_footer(&DAT_14c9d8db0);
    }
  }
  return &DAT_14c9d8d08;
}



// FUNCTION 145e6f31a FUN_145e6f31a body=205 status=ok
// SIG undefined FUN_145e6f31a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6f31a(void)

{
  if ((DAT_14c9d8d07 & 2) == 0) {
    DAT_14c9d8d07 = DAT_14c9d8d07 | 2;
    _DAT_14c9d8ca8 = L"FHairVisibilityDepthPS";
    _DAT_14c9d8cc0 = FUN_146826540;
    _DAT_14c9d8cc8 = FUN_146825d77;
    _DAT_14c9d8cd0 = FUN_146825fd6;
    _DAT_14c9d8cd8 = FUN_1407e02ea;
    _DAT_14c9d8ce0 = FUN_146826273;
    _DAT_14c9d8cb8 = FUN_147184858;
    _DAT_14c9d8cf8 = 0xffffffff000000e0;
    _DAT_14c9d8d00 = 8;
    DAT_14c9d8d04 = 0;
    _DAT_14c9d8ce8 = &LAB_147184882;
    FUN_145e6f3e8();
    FUN_1407e00cc(&DAT_14c9d8ca0);
    return;
  }
  return;
}



// FUNCTION 145e6f3e8 FUN_145e6f3e8 body=123 status=ok
// SIG undefined FUN_145e6f3e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6f3e8(void)

{
  _DAT_14c9dc188 = L"BASE";
  DAT_14c9dc1b2 = 4;
  _DAT_14c9dc190 = FUN_140b35ae4();
  _DAT_14c9dc198 = DAT_14c9d8cb0;
  _DAT_14c9dc1a0 = &LAB_14682652b;
  DAT_14c9d8cb0 = &DAT_14c9dc188;
  DAT_14c9d8d05 = DAT_14c9d8d05 + '\x01';
  _DAT_14c9dc1a8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc190 + 100) != '\0') {
    DAT_14c9d8d06 = DAT_14c9d8d06 + '\x01';
  }
  return;
}



// FUNCTION 145e6f464 FUN_145e6f464 body=261 status=ok
// SIG undefined FUN_145e6f464(void)

void FUN_145e6f464(void)

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
              0x110) < DAT_14c9dacf8) {
    FUN_144b3d300(&DAT_14c9dacf8);
    if (DAT_14c9dacf8 == -1) {
      FUN_145e6f56a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0xa95;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dac78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d2d);
      _Init_thread_footer(&DAT_14c9dacf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6f56a FUN_145e6f56a body=226 status=ok
// SIG undefined FUN_145e6f56a(void)

longlong * FUN_145e6f56a(longlong *param_1)

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
  pcVar13 = FUN_1462ccc58;
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



// FUNCTION 145e6f652 FUN_145e6f652 body=136 status=ok
// SIG undefined FUN_145e6f652(void)

code * FUN_145e6f652(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CoverageTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000a99;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e6f6da;
}



// FUNCTION 145e6f6da FUN_145e6f6da body=138 status=ok
// SIG undefined FUN_145e6f6da(void)

code * FUN_145e6f6da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bClear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000a98;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ccce0;
}



// FUNCTION 145e6f764 FUN_145e6f764 body=292 status=ok
// SIG undefined FUN_145e6f764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6f764(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8ed8) {
    FUN_144b3d300(&DAT_14c9d8ed8);
    if (DAT_14c9d8ed8 == -1) {
      FUN_145e6f9d2();
      FUN_145e6f888();
      FUN_140db5666(&DAT_14c9d8e30,0,&DAT_14c9d8dc8,L"FHairCountToCoverageCS",
                    L"/Engine/Private/HairStrands/HairStrandsCoverage.usf",L"MainCS",5,2,
                    FUN_1471849b0,FUN_147184950,&LAB_1462ca45e,&LAB_14718494c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9dad00);
      _DAT_14c9d8e30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66169);
      _Init_thread_footer(&DAT_14c9d8ed8);
    }
  }
  return &DAT_14c9d8e30;
}



// FUNCTION 145e6f888 FUN_145e6f888 body=205 status=ok
// SIG undefined FUN_145e6f888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6f888(void)

{
  if ((DAT_14c9d8e2f & 2) == 0) {
    DAT_14c9d8e2f = DAT_14c9d8e2f | 2;
    _DAT_14c9d8dd0 = L"FHairCountToCoverageCS";
    _DAT_14c9d8de8 = FUN_146826540;
    _DAT_14c9d8df0 = FUN_146825d77;
    _DAT_14c9d8df8 = FUN_146825fd6;
    _DAT_14c9d8e00 = FUN_1407e02ea;
    _DAT_14c9d8e08 = FUN_146826273;
    _DAT_14c9d8de0 = FUN_14718491e;
    _DAT_14c9d8e20 = 0xffffffff000000e0;
    _DAT_14c9d8e28 = 8;
    DAT_14c9d8e2c = 0;
    _DAT_14c9d8e10 = &LAB_147184948;
    FUN_145e6f956();
    FUN_1407e00cc(&DAT_14c9d8dc8);
    return;
  }
  return;
}



// FUNCTION 145e6f956 FUN_145e6f956 body=123 status=ok
// SIG undefined FUN_145e6f956(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6f956(void)

{
  _DAT_14c9dc1b8 = L"BASE";
  DAT_14c9dc1e2 = 4;
  _DAT_14c9dc1c0 = FUN_140b35ae4();
  _DAT_14c9dc1c8 = DAT_14c9d8dd8;
  _DAT_14c9dc1d0 = &LAB_14682652b;
  DAT_14c9d8dd8 = &DAT_14c9dc1b8;
  DAT_14c9d8e2d = DAT_14c9d8e2d + '\x01';
  _DAT_14c9dc1d8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc1c0 + 100) != '\0') {
    DAT_14c9d8e2e = DAT_14c9d8e2e + '\x01';
  }
  return;
}



// FUNCTION 145e6f9d2 FUN_145e6f9d2 body=261 status=ok
// SIG undefined FUN_145e6f9d2(void)

void FUN_145e6f9d2(void)

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
              0x110) < DAT_14c9dad80) {
    FUN_144b3d300(&DAT_14c9dad80);
    if (DAT_14c9dad80 == -1) {
      FUN_145e6fad8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xbda;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dad00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d39);
      _Init_thread_footer(&DAT_14c9dad80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e6fad8 FUN_145e6fad8 body=226 status=ok
// SIG undefined FUN_145e6fad8(void)

longlong * FUN_145e6fad8(longlong *param_1)

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
  pcVar13 = FUN_1462ccdfa;
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



// FUNCTION 145e6fbc0 FUN_145e6fbc0 body=136 status=ok
// SIG undefined FUN_145e6fbc0(void)

code * FUN_145e6fbc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LUT_HairRadiusCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000bdd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718d6a2;
}



// FUNCTION 145e6fc48 FUN_145e6fc48 body=138 status=ok
// SIG undefined FUN_145e6fc48(void)

code * FUN_145e6fc48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairCountTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000be0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718d58e;
}



// FUNCTION 145e6fcd2 FUN_145e6fcd2 body=292 status=ok
// SIG undefined FUN_145e6fcd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e6fcd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d94a0) {
    FUN_144b3d300(&DAT_14c9d94a0);
    if (DAT_14c9d94a0 == -1) {
      FUN_145e6ff40();
      FUN_145e6fdf6();
      FUN_140db5666(&DAT_14c9d93f8,0,&DAT_14c9d9390,L"FVisiblityRasterComputeRasterizeCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterCompute.usf",
                    L"RasterCS",5,2,FUN_147185482,FUN_147185422,&LAB_1462ca490,&LAB_14718541e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9db030);
      _DAT_14c9d93f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661a5);
      _Init_thread_footer(&DAT_14c9d94a0);
    }
  }
  return &DAT_14c9d93f8;
}



// FUNCTION 145e6fdf6 FUN_145e6fdf6 body=205 status=ok
// SIG undefined FUN_145e6fdf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6fdf6(void)

{
  if ((DAT_14c9d93f7 & 2) == 0) {
    DAT_14c9d93f7 = DAT_14c9d93f7 | 2;
    _DAT_14c9d9398 = L"FVisiblityRasterComputeRasterizeCS";
    _DAT_14c9d93b0 = FUN_146826540;
    _DAT_14c9d93b8 = FUN_146825d77;
    _DAT_14c9d93c0 = FUN_146825fd6;
    _DAT_14c9d93c8 = FUN_1407e02ea;
    _DAT_14c9d93d0 = FUN_146826273;
    _DAT_14c9d93a8 = FUN_1471853f0;
    _DAT_14c9d93e8 = 0xffffffff000000e0;
    _DAT_14c9d93f0 = 8;
    DAT_14c9d93f4 = 0;
    _DAT_14c9d93d8 = &LAB_14718541a;
    FUN_145e6fec4();
    FUN_1407e00cc(&DAT_14c9d9390);
    return;
  }
  return;
}



// FUNCTION 145e6fec4 FUN_145e6fec4 body=123 status=ok
// SIG undefined FUN_145e6fec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e6fec4(void)

{
  _DAT_14c9dc2a8 = L"BASE";
  DAT_14c9dc2d2 = 4;
  _DAT_14c9dc2b0 = FUN_140b35ae4();
  _DAT_14c9dc2b8 = DAT_14c9d93a0;
  _DAT_14c9dc2c0 = &LAB_14682652b;
  DAT_14c9d93a0 = &DAT_14c9dc2a8;
  DAT_14c9d93f5 = DAT_14c9d93f5 + '\x01';
  _DAT_14c9dc2c8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc2b0 + 100) != '\0') {
    DAT_14c9d93f6 = DAT_14c9d93f6 + '\x01';
  }
  return;
}



// FUNCTION 145e6ff40 FUN_145e6ff40 body=261 status=ok
// SIG undefined FUN_145e6ff40(void)

void FUN_145e6ff40(void)

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
              0x110) < DAT_14c9db0b0) {
    FUN_144b3d300(&DAT_14c9db0b0);
    if (DAT_14c9db0b0 == -1) {
      FUN_145e70046(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x250;
      local_58 = 0xd2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db030,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d81);
      _Init_thread_footer(&DAT_14c9db0b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e70046 FUN_145e70046 body=226 status=ok
// SIG undefined FUN_145e70046(void)

longlong * FUN_145e70046(longlong *param_1)

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
  pcVar13 = FUN_1462cd50a;
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



// FUNCTION 145e7012e FUN_145e7012e body=136 status=ok
// SIG undefined FUN_145e7012e(void)

code * FUN_145e7012e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22000000d33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e701b6;
}



// FUNCTION 145e701b6 FUN_145e701b6 body=138 status=ok
// SIG undefined FUN_145e701b6(void)

code * FUN_145e701b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21800000d32;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718ea0a;
}



// FUNCTION 145e70240 FUN_145e70240 body=292 status=ok
// SIG undefined FUN_145e70240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e70240(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3a68) {
    FUN_144b3d300(&DAT_14c9e3a68);
    if (DAT_14c9e3a68 == -1) {
      FUN_145e704ae();
      FUN_145e70364();
      FUN_140db5666(&DAT_14c9e39c0,0,&DAT_14c9e3958,L"FCompressVolumetricShadowMapCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridShadows.usf"
                    ,L"CompressVolumetricShadowMapCS",5,2,FUN_1471b9a18,FUN_1471b99b8,&LAB_1471b997c
                    ,&LAB_1471b9978,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6310);
      _DAT_14c9e39c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cb7772);
      _Init_thread_footer(&DAT_14c9e3a68);
    }
  }
  return &DAT_14c9e39c0;
}



// FUNCTION 145e70364 FUN_145e70364 body=205 status=ok
// SIG undefined FUN_145e70364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e70364(void)

{
  if ((DAT_14c9e39bf & 2) == 0) {
    DAT_14c9e39bf = DAT_14c9e39bf | 2;
    _DAT_14c9e3960 = L"FCompressVolumetricShadowMapCS";
    _DAT_14c9e3978 = FUN_146826540;
    _DAT_14c9e3980 = FUN_146825d77;
    _DAT_14c9e3988 = FUN_146825fd6;
    _DAT_14c9e3990 = FUN_1407e02ea;
    _DAT_14c9e3998 = FUN_146826273;
    _DAT_14c9e3970 = FUN_1471b994a;
    _DAT_14c9e39b0 = 0xffffffff000000e0;
    _DAT_14c9e39b8 = 8;
    DAT_14c9e39bc = 0;
    _DAT_14c9e39a0 = &LAB_1471b9974;
    FUN_145e70432();
    FUN_1407e00cc(&DAT_14c9e3958);
    return;
  }
  return;
}



// FUNCTION 145e70432 FUN_145e70432 body=123 status=ok
// SIG undefined FUN_145e70432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e70432(void)

{
  _DAT_14c9e6ef0 = L"BASE";
  DAT_14c9e6f1a = 4;
  _DAT_14c9e6ef8 = FUN_140b35ae4();
  _DAT_14c9e6f00 = DAT_14c9e3968;
  _DAT_14c9e6f08 = &LAB_14682652b;
  DAT_14c9e3968 = &DAT_14c9e6ef0;
  DAT_14c9e39bd = DAT_14c9e39bd + '\x01';
  _DAT_14c9e6f10 = 0x100000000;
  if (*(char *)(_DAT_14c9e6ef8 + 100) != '\0') {
    DAT_14c9e39be = DAT_14c9e39be + '\x01';
  }
  return;
}



// FUNCTION 145e704ae FUN_145e704ae body=261 status=ok
// SIG undefined FUN_145e704ae(void)

void FUN_145e704ae(void)

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
              0x110) < DAT_14c9e6390) {
    FUN_144b3d300(&DAT_14c9e6390);
    if (DAT_14c9e6390 == -1) {
      FUN_145e705b4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xbe1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6310,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfca);
      _Init_thread_footer(&DAT_14c9e6390);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e705b4 FUN_145e705b4 body=226 status=ok
// SIG undefined FUN_145e705b4(void)

longlong * FUN_145e705b4(longlong *param_1)

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
  pcVar13 = FUN_1462d2a4e;
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



// FUNCTION 145e7069c FUN_145e7069c body=136 status=ok
// SIG undefined FUN_145e7069c(void)

code * FUN_145e7069c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000be4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c4360;
}



// FUNCTION 145e70724 FUN_145e70724 body=138 status=ok
// SIG undefined FUN_145e70724(void)

code * FUN_145e70724(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricShadowLinkedListBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FAVSMLinkedListPackedData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000be5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e7069c;
}



// FUNCTION 145e707ae FUN_145e707ae body=292 status=ok
// SIG undefined FUN_145e707ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e707ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9a78) {
    FUN_144b3d300(&DAT_14c9e9a78);
    if (DAT_14c9e9a78 == -1) {
      FUN_145e70a1c();
      FUN_145e708d2();
      FUN_140db5666(&DAT_14c9e99d0,0,&DAT_14c9e9968,L"FDeferredLightOverlapPS",
                    L"/Engine/Private/StationaryLightOverlapShaders.usf",L"OverlapPixelMain",3,2,
                    FUN_1471d2ede,FUN_1471d2e7e,&LAB_1471d2e66,&LAB_1471d2e62,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ea8b0);
      _DAT_14c9e99d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce86c2);
      _Init_thread_footer(&DAT_14c9e9a78);
    }
  }
  return &DAT_14c9e99d0;
}



// FUNCTION 145e708d2 FUN_145e708d2 body=205 status=ok
// SIG undefined FUN_145e708d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e708d2(void)

{
  if ((DAT_14c9e99cf & 2) == 0) {
    DAT_14c9e99cf = DAT_14c9e99cf | 2;
    _DAT_14c9e9970 = L"FDeferredLightOverlapPS";
    _DAT_14c9e9988 = FUN_146826540;
    _DAT_14c9e9990 = FUN_146825d77;
    _DAT_14c9e9998 = FUN_146825fd6;
    _DAT_14c9e99a0 = FUN_1407e02ea;
    _DAT_14c9e99a8 = FUN_146826273;
    _DAT_14c9e9980 = FUN_1471d2e34;
    _DAT_14c9e99c0 = 0xffffffff000000e0;
    _DAT_14c9e99c8 = 8;
    DAT_14c9e99cc = 0;
    _DAT_14c9e99b0 = &LAB_1471d2e5e;
    FUN_145e709a0();
    FUN_1407e00cc(&DAT_14c9e9968);
    return;
  }
  return;
}



// FUNCTION 145e709a0 FUN_145e709a0 body=123 status=ok
// SIG undefined FUN_145e709a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e709a0(void)

{
  _DAT_14c9eb8e0 = L"BASE";
  DAT_14c9eb90a = 4;
  _DAT_14c9eb8e8 = FUN_140b35ae4();
  _DAT_14c9eb8f0 = DAT_14c9e9978;
  _DAT_14c9eb8f8 = &LAB_14682652b;
  DAT_14c9e9978 = &DAT_14c9eb8e0;
  DAT_14c9e99cd = DAT_14c9e99cd + '\x01';
  _DAT_14c9eb900 = 0x100000000;
  if (*(char *)(_DAT_14c9eb8e8 + 100) != '\0') {
    DAT_14c9e99ce = DAT_14c9e99ce + '\x01';
  }
  return;
}



// FUNCTION 145e70a1c FUN_145e70a1c body=261 status=ok
// SIG undefined FUN_145e70a1c(void)

void FUN_145e70a1c(void)

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
              0x110) < DAT_14c9ea930) {
    FUN_144b3d300(&DAT_14c9ea930);
    if (DAT_14c9ea930 == -1) {
      FUN_145e70b22(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x453;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea8b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf48c5);
      _Init_thread_footer(&DAT_14c9ea930);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e70b22 FUN_145e70b22 body=226 status=ok
// SIG undefined FUN_145e70b22(void)

longlong * FUN_145e70b22(longlong *param_1)

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
  pcVar13 = FUN_1462d6422;
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



// FUNCTION 145e70c0a FUN_145e70c0a body=136 status=ok
// SIG undefined FUN_145e70c0a(void)

undefined1 * FUN_145e70c0a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x454;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e70c06;
}



// FUNCTION 145e70c92 FUN_145e70c92 body=138 status=ok
// SIG undefined FUN_145e70c92(void)

code * FUN_145e70c92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bHasValidChannel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000457;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d64aa;
}



// FUNCTION 145e70d1c FUN_145e70d1c body=292 status=ok
// SIG undefined FUN_145e70d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e70d1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eca20) {
    FUN_144b3d300(&DAT_14c9eca20);
    if (DAT_14c9eca20 == -1) {
      FUN_145e70f8a();
      FUN_145e70e40();
      FUN_140db5666(&DAT_14c9ec978,0,&DAT_14c9ec910,L"FMobileLocalFogVolumeTiledRenderVS",
                    L"/Engine/Private/LocalFogVolumes/LocalFogVolumeSplat.usf",
                    L"LocalFogVolumeTiledVS",0,1,FUN_1471dc68a,FUN_1471dc62a,&LAB_1471dc612,
                    &LAB_1471dc60e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0230);
      _DAT_14c9ec978 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d04d1e);
      _Init_thread_footer(&DAT_14c9eca20);
    }
  }
  return &DAT_14c9ec978;
}



// FUNCTION 145e70e40 FUN_145e70e40 body=205 status=ok
// SIG undefined FUN_145e70e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e70e40(void)

{
  if ((DAT_14c9ec977 & 2) == 0) {
    DAT_14c9ec977 = DAT_14c9ec977 | 2;
    _DAT_14c9ec918 = L"FMobileLocalFogVolumeTiledRenderVS";
    _DAT_14c9ec930 = FUN_146826540;
    _DAT_14c9ec938 = FUN_146825d77;
    _DAT_14c9ec940 = FUN_146825fd6;
    _DAT_14c9ec948 = FUN_1407e02ea;
    _DAT_14c9ec950 = FUN_146826273;
    _DAT_14c9ec928 = FUN_1471dc5e0;
    _DAT_14c9ec968 = 0xffffffff000000e0;
    _DAT_14c9ec970 = 8;
    DAT_14c9ec974 = 0;
    _DAT_14c9ec958 = &LAB_1471dc60a;
    FUN_145e70f0e();
    FUN_1407e00cc(&DAT_14c9ec910);
    return;
  }
  return;
}



// FUNCTION 145e70f0e FUN_145e70f0e body=123 status=ok
// SIG undefined FUN_145e70f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e70f0e(void)

{
  _DAT_14c9f16d8 = L"BASE";
  DAT_14c9f1702 = 4;
  _DAT_14c9f16e0 = FUN_140b35ae4();
  _DAT_14c9f16e8 = DAT_14c9ec920;
  _DAT_14c9f16f0 = &LAB_14682652b;
  DAT_14c9ec920 = &DAT_14c9f16d8;
  DAT_14c9ec975 = DAT_14c9ec975 + '\x01';
  _DAT_14c9f16f8 = 0x100000000;
  if (*(char *)(_DAT_14c9f16e0 + 100) != '\0') {
    DAT_14c9ec976 = DAT_14c9ec976 + '\x01';
  }
  return;
}



// FUNCTION 145e70f8a FUN_145e70f8a body=261 status=ok
// SIG undefined FUN_145e70f8a(void)

void FUN_145e70f8a(void)

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
              0x110) < DAT_14c9f02b0) {
    FUN_144b3d300(&DAT_14c9f02b0);
    if (DAT_14c9f02b0 == -1) {
      FUN_145e71090(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x36e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0230,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2622f);
      _Init_thread_footer(&DAT_14c9f02b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e71090 FUN_145e71090 body=226 status=ok
// SIG undefined FUN_145e71090(void)

longlong * FUN_145e71090(longlong *param_1)

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
  pcVar13 = FUN_1462d7b8e;
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



// FUNCTION 145e71178 FUN_145e71178 body=136 status=ok
// SIG undefined FUN_145e71178(void)

undefined1 * FUN_145e71178(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x36f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e71174;
}



// FUNCTION 145e71200 FUN_145e71200 body=138 status=ok
// SIG undefined FUN_145e71200(void)

code * FUN_145e71200(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileDrawIndirectBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000372;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e14a4;
}



// FUNCTION 145e7128a FUN_145e7128a body=205 status=ok
// SIG undefined FUN_145e7128a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e7128a(void)

{
  if ((DAT_14c9ef7ef & 2) == 0) {
    DAT_14c9ef7ef = DAT_14c9ef7ef | 2;
    _DAT_14c9ef790 = L"FRadianceCacheTraceFromProbesCS";
    _DAT_14c9ef7a8 = FUN_146826540;
    _DAT_14c9ef7b0 = FUN_146825d77;
    _DAT_14c9ef7b8 = FUN_146825fd6;
    _DAT_14c9ef7c0 = FUN_1407e02ea;
    _DAT_14c9ef7c8 = FUN_146826273;
    _DAT_14c9ef7a0 = FUN_1471dfe94;
    _DAT_14c9ef7e0 = 0xffffffff000000e0;
    _DAT_14c9ef7e8 = 8;
    DAT_14c9ef7ec = 0;
    _DAT_14c9ef7d0 = &LAB_1471dfebe;
    FUN_145e71358();
    FUN_1407e00cc(&DAT_14c9ef788);
    return;
  }
  return;
}



// FUNCTION 145e71358 FUN_145e71358 body=123 status=ok
// SIG undefined FUN_145e71358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e71358(void)

{
  _DAT_14c9f1e20 = L"BASE";
  DAT_14c9f1e4a = 4;
  _DAT_14c9f1e28 = FUN_140b35ae4();
  _DAT_14c9f1e30 = DAT_14c9ef798;
  _DAT_14c9f1e38 = &LAB_14682652b;
  DAT_14c9ef798 = &DAT_14c9f1e20;
  DAT_14c9ef7ed = DAT_14c9ef7ed + '\x01';
  _DAT_14c9f1e40 = 0x100000000;
  if (*(char *)(_DAT_14c9f1e28 + 100) != '\0') {
    DAT_14c9ef7ee = DAT_14c9ef7ee + '\x01';
  }
  return;
}



// FUNCTION 145e713d4 FUN_145e713d4 body=226 status=ok
// SIG undefined FUN_145e713d4(void)

longlong * FUN_145e713d4(longlong *param_1)

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
  pcVar13 = FUN_1462da214;
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



// FUNCTION 145e714bc FUN_145e714bc body=136 status=ok
// SIG undefined FUN_145e714bc(void)

code * FUN_145e714bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTraceData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000351;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462da32c;
}



// FUNCTION 145e71544 FUN_145e71544 body=144 status=ok
// SIG undefined FUN_145e71544(void)

code * FUN_145e71544(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a2f258();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TracingParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenCardTracingParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000034f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471e601e;
}



// FUNCTION 145e715d4 FUN_145e715d4 body=292 status=ok
// SIG undefined FUN_145e715d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e715d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9efc10) {
    FUN_144b3d300(&DAT_14c9efc10);
    if (DAT_14c9efc10 == -1) {
      FUN_145e71842();
      FUN_145e716f8();
      FUN_140db5666(&DAT_14c9efb68,0,&DAT_14c9efb00,L"FPrepareProbeOcclusionCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"PrepareProbeOcclusionCS",5,1,
                    FUN_1471e0178,FUN_1471e0118,&LAB_1462d73ae,&LAB_1471e0114,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f13b8);
      _DAT_14c9efb68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26115);
      _Init_thread_footer(&DAT_14c9efc10);
    }
  }
  return &DAT_14c9efb68;
}



// FUNCTION 145e716f8 FUN_145e716f8 body=205 status=ok
// SIG undefined FUN_145e716f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e716f8(void)

{
  if ((DAT_14c9efb67 & 2) == 0) {
    DAT_14c9efb67 = DAT_14c9efb67 | 2;
    _DAT_14c9efb08 = L"FPrepareProbeOcclusionCS";
    _DAT_14c9efb20 = FUN_146826540;
    _DAT_14c9efb28 = FUN_146825d77;
    _DAT_14c9efb30 = FUN_146825fd6;
    _DAT_14c9efb38 = FUN_1407e02ea;
    _DAT_14c9efb40 = FUN_146826273;
    _DAT_14c9efb18 = FUN_1471e00e6;
    _DAT_14c9efb58 = 0xffffffff000000e0;
    _DAT_14c9efb60 = 8;
    DAT_14c9efb64 = 0;
    _DAT_14c9efb48 = &LAB_1471e0110;
    FUN_145e717c6();
    FUN_1407e00cc(&DAT_14c9efb00);
    return;
  }
  return;
}


