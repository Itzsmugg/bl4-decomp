// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144131a7e FUN_144131a7e body=99 status=ok
// SIG undefined FUN_144131a7e(void)

void FUN_144131a7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cf70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144131ae2 FUN_144131ae2 body=99 status=ok
// SIG undefined FUN_144131ae2(void)

void FUN_144131ae2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cf70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144131b46 FUN_144131b46 body=132 status=ok
// SIG undefined FUN_144131b46(void)

void FUN_144131b46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96cf70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144131bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144131bd4 FUN_144131bd4 body=269 status=ok
// SIG undefined FUN_144131bd4(void)

undefined8 FUN_144131bd4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144131cdb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144131cdb;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144131cdb:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144131c8f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144131ce2(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144131c8f;
    }
  }
  uVar6 = 0;
LAB_144131c8f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144131ce2 FUN_144131ce2 body=828 status=ok
// SIG undefined FUN_144131ce2(void)

void FUN_144131ce2(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_368 [32];
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      local_344 = 0xbf800000;
      uVar4 = 0;
      local_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_2c0 = 0;
      local_2b8 = 0x200000000;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_1405c5fa2();
      local_2a8 = &DAT_14cb769e8;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = &PTR_FUN_14b0394b0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      uStack_21c = 0;
      local_214 = 0;
      local_208 = FUN_140938dea();
      local_200 = 0xffffffff;
      local_198 = 0;
      local_190 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_18c = 0xffffffff00000080;
      local_184 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 1;
      local_134 = 0;
      uStack_12c = 0;
      local_120 = 0x100000000;
      local_118 = 1;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d4 = 0xffffffff00000080;
      local_cc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0x100000000;
      local_38 = 0;
      local_348[0] = (undefined1)param_1[2];
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_1408964e4(uVar4,local_348);
      FUN_140d17bd8(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144132020 FUN_144132020 body=29 status=ok
// SIG undefined FUN_144132020(void)

undefined8 FUN_144132020(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441321bc FUN_1441321bc body=99 status=ok
// SIG undefined FUN_1441321bc(void)

void FUN_1441321bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cfe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144132220 FUN_144132220 body=99 status=ok
// SIG undefined FUN_144132220(void)

void FUN_144132220(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96eba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96cfe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144132284 FUN_144132284 body=132 status=ok
// SIG undefined FUN_144132284(void)

void FUN_144132284(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96eba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96cfe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441322f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144132308 FUN_144132308 body=66 status=ok
// SIG undefined FUN_144132308(void)

void FUN_144132308(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144132464(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413234c FUN_14413234c body=279 status=ok
// SIG undefined FUN_14413234c(void)

undefined8 FUN_14413234c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14413245d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14413245d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14413245d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144132411;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144132464(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144132411;
    }
  }
  uVar6 = 0;
LAB_144132411:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144132464 FUN_144132464 body=950 status=ok
// SIG undefined FUN_144132464(void)

void FUN_144132464(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined1 auStack_388 [40];
  undefined8 local_360;
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_1441327c2;
  lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if ((lVar7 == 0) || (*(uint *)(lVar7 + 0x10) != param_1[1])) goto LAB_1441327c2;
  lVar2 = *param_2;
  if ((lVar2 == 0) || ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_1441327c2;
  local_354 = 0xbf800000;
  local_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_2d0 = 0;
  local_2c8 = 0x200000000;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  FUN_1405c5fa2();
  local_2b8 = &DAT_14cb769e8;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = &PTR_FUN_14b0394b0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  uStack_22c = 0;
  local_224 = 0;
  local_218 = FUN_140938dea();
  local_210 = 0xffffffff;
  local_1a8 = 0;
  local_1a0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_148 = 1;
  local_144 = 0;
  uStack_13c = 0;
  local_130 = 0x100000000;
  local_128 = 1;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x100000000;
  local_48 = 0;
  local_358[0] = (undefined1)param_1[2];
  puVar3 = *(undefined4 **)(lVar2 + 8);
  puVar6 = &DAT_14c9485f0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar6 = puVar3;
  }
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,&local_360,puVar6,1);
  uStack_22c = local_360;
  if (param_1[1] == 0) {
LAB_1441327f1:
    uVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_1441327f1;
      uVar4 = *puVar5;
    }
  }
  FUN_1408964e4(uVar4,local_358);
  FUN_140d17bd8(local_358);
LAB_1441327c2:
  if ((local_40 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413281c FUN_14413281c body=29 status=ok
// SIG undefined FUN_14413281c(void)

undefined8 FUN_14413281c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441329b8 FUN_1441329b8 body=99 status=ok
// SIG undefined FUN_1441329b8(void)

void FUN_1441329b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41d250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144132a1c FUN_144132a1c body=99 status=ok
// SIG undefined FUN_144132a1c(void)

void FUN_144132a1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41d250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144132a80 FUN_144132a80 body=132 status=ok
// SIG undefined FUN_144132a80(void)

void FUN_144132a80(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41d250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d050;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144132af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144132b0e FUN_144132b0e body=278 status=ok
// SIG undefined FUN_144132b0e(void)

undefined8 FUN_144132b0e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144132c1e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144132c1e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144132c1e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144132bd1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144132c26(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_144132bd1;
    }
  }
  uVar6 = 0;
LAB_144132bd1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144132c26 FUN_144132c26 body=867 status=ok
// SIG undefined FUN_144132c26(void)

void FUN_144132c26(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined4 local_350;
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_350 = *(undefined4 *)(param_2 + 1);
  local_358 = *param_2;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      local_344 = 0xbf800000;
      uVar4 = 0;
      local_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_2c0 = 0;
      local_2b8 = 0x200000000;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_1405c5fa2();
      local_2a8 = &DAT_14cb769e8;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = &PTR_FUN_14b0394b0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      uStack_21c = 0;
      local_214 = 0;
      local_208 = FUN_140938dea();
      local_200 = 0xffffffff;
      local_198 = 0;
      local_190 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_18c = 0xffffffff00000080;
      local_184 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 1;
      local_134 = 0;
      uStack_12c = 0;
      local_120 = 0x100000000;
      local_118 = 1;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d4 = 0xffffffff00000080;
      local_cc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_40 = 0x100000000;
      local_38 = 0;
      local_348[0] = (undefined1)param_1[2];
      uStack_44 = local_350;
      uStack_4c = (undefined4)local_358;
      uStack_48 = (undefined4)((ulonglong)local_358 >> 0x20);
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_1408964e4(uVar4,local_348);
      FUN_140d17bd8(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144132f8a FUN_144132f8a body=29 status=ok
// SIG undefined FUN_144132f8a(void)

undefined8 FUN_144132f8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144133126 FUN_144133126 body=99 status=ok
// SIG undefined FUN_144133126(void)

void FUN_144133126(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413318a FUN_14413318a body=99 status=ok
// SIG undefined FUN_14413318a(void)

void FUN_14413318a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d0c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441331ee FUN_1441331ee body=132 status=ok
// SIG undefined FUN_1441331ee(void)

void FUN_1441331ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d0c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144133263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14413327c FUN_14413327c body=269 status=ok
// SIG undefined FUN_14413327c(void)

undefined8 FUN_14413327c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144133383;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144133383;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144133383:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144133337;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14413338a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144133337;
    }
  }
  uVar6 = 0;
LAB_144133337:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413338a FUN_14413338a body=828 status=ok
// SIG undefined FUN_14413338a(void)

void FUN_14413338a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_368 [32];
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined4 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined1 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(uint *)(lVar2 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      local_344 = 0xbf800000;
      uVar4 = 0;
      local_340 = 0;
      local_338 = 0;
      uStack_330 = 0;
      local_328 = 0;
      local_2c0 = 0;
      local_2b8 = 0x200000000;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      FUN_1405c5fa2();
      local_2a8 = &DAT_14cb769e8;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = &PTR_FUN_14b0394b0;
      local_290 = 0;
      uStack_288 = 0;
      local_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      uStack_21c = 0;
      local_214 = 0;
      local_208 = FUN_140938dea();
      local_200 = 0xffffffff;
      local_198 = 0;
      local_190 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_18c = 0xffffffff00000080;
      local_184 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 1;
      local_134 = 0;
      uStack_12c = 0;
      local_120 = 0x100000000;
      local_118 = 1;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_d4 = 0xffffffff00000080;
      local_cc = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_a4 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0x100000000;
      local_38 = 0;
      local_348[0] = (undefined1)param_1[2];
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar4 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar3 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
          {
            uVar4 = 0;
          }
          else {
            uVar4 = *puVar3;
          }
        }
      }
      FUN_1408964e4(uVar4,local_348);
      FUN_140d17bd8(local_348);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441336c8 FUN_1441336c8 body=29 status=ok
// SIG undefined FUN_1441336c8(void)

undefined8 FUN_1441336c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144133864 FUN_144133864 body=99 status=ok
// SIG undefined FUN_144133864(void)

void FUN_144133864(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ea50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441338c8 FUN_1441338c8 body=99 status=ok
// SIG undefined FUN_1441338c8(void)

void FUN_1441338c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96ea50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413392c FUN_14413392c body=132 status=ok
// SIG undefined FUN_14413392c(void)

void FUN_14413392c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96ea50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d130;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441339a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441339b0 FUN_1441339b0 body=66 status=ok
// SIG undefined FUN_1441339b0(void)

void FUN_1441339b0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144133b0c(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441339f4 FUN_1441339f4 body=279 status=ok
// SIG undefined FUN_1441339f4(void)

undefined8 FUN_1441339f4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144133b05;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144133b05;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144133b05:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144133ab9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144133b0c(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144133ab9;
    }
  }
  uVar6 = 0;
LAB_144133ab9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144133b0c FUN_144133b0c body=856 status=ok
// SIG undefined FUN_144133b0c(void)

void FUN_144133b0c(uint *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_378 [32];
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar2 = *param_2;
  if ((((lVar2 != 0) && (param_1[1] != 0)) && (uVar1 = *param_1, -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      local_354 = 0xbf800000;
      uVar5 = 0;
      local_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      local_2d0 = 0;
      local_2c8 = 0x200000000;
      local_330 = 0;
      uStack_328 = 0;
      local_320 = 0;
      uStack_318 = 0;
      local_310 = 0;
      uStack_308 = 0;
      FUN_1405c5fa2();
      local_2b8 = &DAT_14cb769e8;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2c0 = &PTR_FUN_14b0394b0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_290 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_258 = 0;
      local_254 = 0;
      uStack_24c = 0;
      local_244 = 0;
      uStack_23c = 0;
      local_234 = 0;
      uStack_22c = 0;
      local_224 = 0;
      local_218 = FUN_140938dea();
      local_210 = 0xffffffff;
      local_1a8 = 0;
      local_1a0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_19c = 0xffffffff00000080;
      local_194 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_150 = 0xf;
      local_148 = 1;
      local_144 = 0;
      uStack_13c = 0;
      local_130 = 0x100000000;
      local_128 = 1;
      local_120 = 0;
      local_11c = 0;
      local_118 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_e4 = 0xffffffff00000080;
      local_dc = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_b4 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0x100000000;
      local_48 = 0;
      local_358[0] = (undefined1)param_1[2];
      local_2a0._0_7_ = CONCAT16(*(undefined1 *)(lVar2 + 0x8d8),(undefined6)local_2a0);
      local_2a0 = CONCAT17(*(undefined1 *)(lVar2 + 0x84b),(undefined7)local_2a0) ^ 0x100000000000000
      ;
      FUN_1403de7ba(&local_320,lVar2 + 0x820);
      if (param_1[1] != 0) {
        uVar1 = *param_1;
        uVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((puVar4 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
          {
            uVar5 = 0;
          }
          else {
            uVar5 = *puVar4;
          }
        }
      }
      FUN_1408964e4(uVar5,local_358);
      FUN_140d17bd8(local_358);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144133e66 FUN_144133e66 body=29 status=ok
// SIG undefined FUN_144133e66(void)

undefined8 FUN_144133e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144134002 FUN_144134002 body=101 status=ok
// SIG undefined FUN_144134002(void)

void FUN_144134002(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b8b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d1a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144134068 FUN_144134068 body=101 status=ok
// SIG undefined FUN_144134068(void)

void FUN_144134068(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b8b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d1a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1441340ce FUN_1441340ce body=134 status=ok
// SIG undefined FUN_1441340ce(void)

void FUN_1441340ce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96b8b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d1a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144134145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144134154 FUN_144134154 body=66 status=ok
// SIG undefined FUN_144134154(void)

void FUN_144134154(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1441342ba(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144134198 FUN_144134198 body=288 status=ok
// SIG undefined FUN_144134198(void)

undefined8 FUN_144134198(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441342b2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441342b2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441342b2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144134265;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441342ba(param_1 + 0x20,&local_38,param_3);
      uVar6 = 1;
      goto LAB_144134265;
    }
  }
  uVar6 = 0;
LAB_144134265:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441342ba FUN_1441342ba body=1096 status=ok
// SIG undefined FUN_1441342ba(void)

void FUN_1441342ba(uint *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auStack_388 [32];
  undefined1 local_368 [4];
  float local_364;
  undefined1 local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined **local_2d0;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((param_1[1] == 0) || (uVar6 = *param_1, (int)uVar6 < 0)) || (DAT_14c9647dc <= (int)uVar6))
  goto LAB_1441346bb;
  lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  if ((lVar5 == 0) || (*(uint *)(lVar5 + 0x10) != param_1[1])) goto LAB_1441346bb;
  uVar1 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 4);
  if ((*(uint *)(lVar5 + 8) & 0x10200000) != 0) goto LAB_1441346bb;
  local_364 = -1.0;
  uVar7 = 0;
  local_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  local_2e0 = 0;
  local_2d8 = 0x200000000;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  FUN_1405c5fa2();
  local_2c8 = &DAT_14cb769e8;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = &PTR_FUN_14b0394b0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  local_228 = FUN_140938dea();
  local_220 = 0xffffffff;
  local_1b8 = 0;
  local_1b0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1ac = 0xffffffff00000080;
  local_1a4 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  local_158 = 1;
  local_154 = 0;
  uStack_14c = 0;
  local_140 = 0x100000000;
  local_138 = 1;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c4 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0x100000000;
  local_58 = 0;
  local_368[0] = (undefined1)param_1[2];
  FUN_14411e83c(uVar4,local_368);
  if (uVar1 >> 0x20 != 0) {
    uVar7 = 0;
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != (int)(uVar1 >> 0x20) ||
          ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) {
        uVar7 = 0;
      }
      else {
        uVar7 = *puVar3;
      }
    }
  }
  cVar2 = FUN_140ec8af0(uVar4,local_368,uVar7,param_3);
  if (cVar2 != '\0') {
    if (param_1[1] == 0) {
LAB_1441346f0:
      uVar4 = 0;
    }
    else {
      uVar6 = *param_1;
      uVar4 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar3 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar3 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
        goto LAB_1441346f0;
        uVar4 = *puVar3;
      }
    }
    lVar5 = FUN_1447210f0(uVar4);
    if (lVar5 != 0) {
      local_364 = (float)*(double *)(lVar5 + 0x6d0);
    }
    if (param_1[1] == 0) {
LAB_1441346f7:
      uVar4 = 0;
    }
    else {
      uVar6 = *param_1;
      uVar4 = 0;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        puVar3 = (undefined8 *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if ((puVar3 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
        goto LAB_1441346f7;
        uVar4 = *puVar3;
      }
    }
    FUN_1408964e4(uVar4,local_368);
  }
  FUN_140d17bd8(local_368);
LAB_1441346bb:
  if ((local_50 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144134704 FUN_144134704 body=29 status=ok
// SIG undefined FUN_144134704(void)

undefined8 FUN_144134704(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441348a0 FUN_1441348a0 body=101 status=ok
// SIG undefined FUN_1441348a0(void)

void FUN_1441348a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144134906 FUN_144134906 body=101 status=ok
// SIG undefined FUN_144134906(void)

void FUN_144134906(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96b7d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14413496c FUN_14413496c body=134 status=ok
// SIG undefined FUN_14413496c(void)

void FUN_14413496c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96b7d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d210;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441349e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441349f2 FUN_1441349f2 body=66 status=ok
// SIG undefined FUN_1441349f2(void)

void FUN_1441349f2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144134b62(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144134a36 FUN_144134a36 body=299 status=ok
// SIG undefined FUN_144134a36(void)

undefined8 FUN_144134a36(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144134b5a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144134b5a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_144134b5a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144134b0b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144134b62(param_1 + 0x20,&local_40,param_3,param_4);
      uVar6 = 1;
      goto LAB_144134b0b;
    }
  }
  uVar6 = 0;
LAB_144134b0b:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144134b62 FUN_144134b62 body=3852 status=ok
// SIG undefined FUN_144134b62(void)

void FUN_144134b62(uint *param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_438 [32];
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined2 *local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  undefined8 *local_3e0;
  undefined1 *local_3d8;
  code *local_3d0;
  longlong local_3c0;
  ulonglong local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  longlong local_388;
  undefined8 uStack_380;
  undefined1 local_378 [4];
  float local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  code *local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if ((((param_1[1] == 0) || (uVar16 = *param_1, (int)uVar16 < 0)) || (DAT_14c9647dc <= (int)uVar16)
      ) || ((lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 == 0 ||
            (*(uint *)(lVar15 + 0x10) != param_1[1])))) goto LAB_14413556d;
  uVar1 = *param_2;
  lVar17 = *(longlong *)(param_1 + 4);
  if ((*(uint *)(lVar15 + 8) & 0x10200000) != 0) goto LAB_14413556d;
  uVar14 = uVar1 >> 0x20;
  local_374 = -1.0;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = (code *)0x0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_150 = 0x100000000;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  local_378[0] = (undefined1)param_1[2];
  FUN_14411e83c(lVar17,local_378);
  uVar16 = (uint)uVar1;
  if (uVar14 == 0) {
    lVar15 = 0;
    cVar2 = FUN_140ec8af0(lVar17,local_378,0,param_4);
    if (cVar2 != '\0') goto LAB_144134efc;
  }
  else {
    uVar8 = 0;
    iVar4 = (int)(uVar1 >> 0x20);
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8)));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != iVar4 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar6;
      }
    }
    cVar2 = FUN_140ec8af0(lVar17,local_378,uVar8,param_4);
    if (cVar2 != '\0') {
      lVar15 = 0;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar1 >> 0xd) & 0x3fff8)));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != iVar4 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
          lVar15 = 0;
        }
        else {
          lVar15 = *plVar7;
        }
      }
LAB_144134efc:
      uVar1 = local_2c0;
      local_3c0 = lVar17;
      local_3b8 = uVar14;
      if ((((*(int *)(lVar17 + 0xc1c) != 0) && (uVar5 = *(uint *)(lVar17 + 0xc18), -1 < (int)uVar5))
          && ((int)uVar5 < DAT_14c9647dc)) &&
         (((lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar9 != 0 &&
           (*(int *)(lVar9 + 0x10) == *(int *)(lVar17 + 0xc1c))) &&
          ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
        local_2c0._0_2_ = CONCAT11(*(undefined1 *)(param_3 + 0x73),(undefined1)local_2c0);
        local_2c0._3_5_ = SUB85(uVar1,3);
        local_2c0 = CONCAT53(local_2c0._3_5_,
                             CONCAT12(*(undefined1 *)(param_3 + 0x72),(undefined2)local_2c0)) ^
                    0x10000;
        if (lVar15 != 0) {
          if (DAT_14cba8288 == 0) {
            local_3e0 = &local_3a8;
            local_3a8 = FUN_141864c34;
            local_3d0 = FUN_14081d0ea;
            local_3d8 = &LAB_1464cee30;
            local_3e8 = &LAB_148bfac22;
            local_3f0 = &LAB_140f21842;
            local_3f8 = &DAT_149e063b2;
            local_400 = 0;
            local_408 = 0x10000004;
            local_410 = 0x10;
            local_418 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
            plVar7 = (longlong *)(lVar17 + 0xd18);
            uVar5 = *(uint *)(lVar15 + 0xc);
            if (local_2c0._1_1_ == '\x01') {
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar15 = 0;
              }
              if (*(int *)(lVar15 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar13 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar13);
                }
                LOCK();
                if (*(int *)(lVar15 + 0x10) == 0) {
                  *(int *)(lVar15 + 0x10) = iVar13;
                }
                UNLOCK();
              }
              FUN_148d25134(plVar7);
            }
            else {
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar17 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar17 = 0;
              }
              iVar4 = *(int *)(lVar17 + 0x10);
              if (*(int *)(lVar17 + 0x10) == 0) {
                LOCK();
                iVar4 = DAT_14c964868 + 1;
                UNLOCK();
                iVar13 = DAT_14c964868 + 1;
                bVar20 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar4;
                if (bVar20) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar13);
                }
                LOCK();
                iVar4 = *(int *)(lVar17 + 0x10);
                bVar20 = iVar4 == 0;
                if (bVar20) {
                  *(int *)(lVar17 + 0x10) = iVar13;
                  iVar4 = 0;
                }
                UNLOCK();
                if (bVar20) {
                  iVar4 = iVar13;
                }
              }
              local_3a8 = (code *)CONCAT44(iVar4,uVar5);
              iVar4 = FUN_140eca2c6(plVar7);
              if ((iVar4 != -1) && (lVar17 = FUN_1447210f0(lVar15), lVar17 != 0)) {
                uVar5 = *(uint *)(lVar15 + 0xc);
                if ((int)uVar5 < DAT_14c9647dc) {
                  lVar15 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                }
                else {
                  lVar15 = 0;
                }
                uVar11 = *(uint *)(lVar15 + 0x10);
                if (*(uint *)(lVar15 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar12 = DAT_14c964868 + 1;
                  bVar20 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar20) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar12);
                  }
                  LOCK();
                  uVar11 = *(uint *)(lVar15 + 0x10);
                  bVar20 = uVar11 == 0;
                  if (bVar20) {
                    *(uint *)(lVar15 + 0x10) = uVar12;
                    uVar11 = 0;
                  }
                  UNLOCK();
                  if (bVar20) {
                    uVar11 = uVar12;
                  }
                }
                local_3a8 = (code *)CONCAT44(uVar11,uVar5);
                iVar4 = FUN_140eca2c6(plVar7,uVar5 ^ uVar11);
                if (iVar4 == -1) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = (longlong)iVar4 * 0x80 + *plVar7;
                }
                cVar2 = FUN_1400ff15e(param_4 + 0x20);
                bVar3 = 1;
                if ((cVar2 != '\0') && (*(longlong *)(param_4 + 8) == *(longlong *)(lVar15 + 0x48)))
                {
                  bVar3 = FUN_144b082da(param_4 + 0x100);
                  bVar3 = bVar3 ^ 1;
                }
                lVar9 = FUN_1407e8892();
                if ((bVar3 == 0) &&
                   (*(double *)(lVar17 + 0x6d0) - (double)*(float *)(lVar15 + 0x70) <=
                    (double)*(float *)(lVar9 + 0x168))) {
                  local_2c0._0_2_ = CONCAT11(1,(undefined1)local_2c0);
                }
              }
            }
          }
        }
      }
      local_388 = 0;
      uStack_380 = 0;
      if (param_1[1] == 0) {
LAB_1441356c9:
        uVar8 = 0;
      }
      else {
        uVar5 = *param_1;
        uVar8 = 0;
        if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
          goto LAB_1441356c9;
          uVar8 = *puVar6;
        }
      }
      lVar15 = FUN_1407afa82(uVar8);
      if ((lVar15 != 0) && (0 < *(int *)(lVar15 + 0x98c))) {
        plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar15 + 0x8d0) + 0x10))(lVar15 + 0x8d0);
        lVar15 = plVar7[1];
        if ((longlong)(int)lVar15 != 0) {
          lVar17 = *plVar7;
          lVar9 = 0;
          do {
            if (*(longlong *)(lVar17 + lVar9) != 0) {
              lVar19 = *(longlong *)(*(longlong *)(lVar17 + lVar9) + 8);
              lVar18 = (longlong)(int)uStack_380;
              uVar5 = (int)uStack_380 + 1;
              uStack_380 = CONCAT44(uStack_380._4_4_,uVar5);
              if (uStack_380._4_4_ < uVar5) {
                FUN_1446f84a2(&local_388);
              }
              *(undefined8 *)(local_388 + lVar18 * 8) = *(undefined8 *)(lVar19 + 0x1d4);
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)(int)lVar15 * 8 != lVar9);
        }
      }
      uVar1 = local_3b8;
      lVar15 = local_3c0;
      if (param_1[1] == 0) {
        uVar8 = 0;
      }
      else {
        uVar5 = *param_1;
        uVar8 = 0;
        if ((-1 < (int)uVar5) && (uVar8 = 0, (int)uVar5 < DAT_14c9647dc)) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if ((puVar6 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
          {
            uVar8 = 0;
          }
          else {
            uVar8 = *puVar6;
          }
        }
      }
      lVar17 = FUN_1447210f0(uVar8);
      if (lVar17 != 0) {
        local_374 = (float)*(double *)(lVar17 + 0x6d0);
        if (param_1[1] == 0) {
LAB_1441356eb:
          lVar9 = 0;
        }
        else {
          uVar5 = *param_1;
          lVar9 = 0;
          if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if ((plVar7 == (longlong *)0x0) ||
               ((*(uint *)(plVar7 + 2) != param_1[1] || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))
               )) goto LAB_1441356eb;
            lVar9 = *plVar7;
          }
        }
        lVar9 = *(longlong *)(lVar9 + 0x1c8);
        if (lVar9 == 0) {
          local_398 = DAT_14c8464f0;
          local_3a8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_3a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_3a8 = *(code **)(lVar9 + 0x260);
          uStack_3a0 = *(undefined8 *)(lVar9 + 0x268);
          local_398 = *(undefined8 *)(lVar9 + 0x270);
        }
        local_3b0 = *(undefined8 *)(lVar17 + 0x18);
        lVar17 = FUN_140c3a90d(&local_3b0,&local_3a8);
        if ((lVar17 != 0) && (lVar17 = FUN_140307b1c(lVar17), lVar17 != 0)) {
          puVar10 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar17 + 8) != (undefined4 *)0x0) {
            puVar10 = *(undefined4 **)(lVar17 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar17 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar17);
            DAT_14c947fe0 = lVar17;
          }
          FUN_140045924(DAT_14c947fe0,&local_3a8,puVar10,1);
          local_244 = local_3a8;
        }
      }
      if ((((uVar1 == 0) || ((int)uVar16 < 0)) || (DAT_14c9647dc <= (int)uVar16)) ||
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0xd & 0x3fff8))),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != (int)uVar1)) ||
          (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar17 = *plVar7, lVar17 == 0)))))) {
LAB_1441354ee:
        if (param_1[1] == 0) {
LAB_1441356e4:
          uVar8 = 0;
        }
        else {
          uVar16 = *param_1;
          uVar8 = 0;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))
               )) goto LAB_1441356e4;
            uVar8 = *puVar6;
          }
        }
        FUN_1408964e4(uVar8,local_378);
      }
      else {
        if (DAT_14cba8288 == 0) {
          local_3e0 = &local_3a8;
          local_3a8 = FUN_141864c34;
          local_3d0 = FUN_14081d0ea;
          local_3d8 = &LAB_1464cee30;
          local_3e8 = &LAB_148bfac22;
          local_3f0 = &LAB_140f21842;
          local_3f8 = &DAT_149e063b2;
          local_400 = 0;
          local_408 = 0x10000004;
          local_410 = 0x10;
          local_418 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
        goto LAB_1441354ee;
        if (param_1[1] == 0) {
LAB_14413571d:
          uVar8 = 0;
        }
        else {
          uVar16 = *param_1;
          uVar8 = 0;
          if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))
               )) goto LAB_14413571d;
            uVar8 = *puVar6;
          }
        }
        iVar4 = FUN_14486116a(lVar17 + 0x898,uVar8);
        if (iVar4 == 2) {
          uVar16 = *(uint *)(lVar17 + 0xc);
          if ((int)uVar16 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar5 = *(uint *)(lVar9 + 0x10);
          if (*(uint *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar11 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar11);
            }
            LOCK();
            uVar5 = *(uint *)(lVar9 + 0x10);
            bVar20 = uVar5 == 0;
            if (bVar20) {
              *(uint *)(lVar9 + 0x10) = uVar11;
              uVar5 = 0;
            }
            UNLOCK();
            if (bVar20) {
              uVar5 = uVar11;
            }
          }
          local_3a8 = (code *)CONCAT44(uVar5,uVar16);
          iVar4 = FUN_1418e5cfc(lVar15 + 0xc70,uVar16 ^ uVar5);
          if (iVar4 != -1) {
            uVar16 = *(uint *)(lVar17 + 0xc);
            if ((int)uVar16 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar4 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar13 = DAT_14c964868 + 1;
              bVar20 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar20) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar13);
              }
              LOCK();
              iVar4 = *(int *)(lVar9 + 0x10);
              bVar20 = iVar4 == 0;
              if (bVar20) {
                *(int *)(lVar9 + 0x10) = iVar13;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar20) {
                iVar4 = iVar13;
              }
            }
            FUN_14129a540(lVar15 + 0xc70,CONCAT44(iVar4,uVar16));
          }
          lVar15 = FUN_1407e8892();
          lVar17 = (**(code **)(*(longlong *)(lVar17 + 0x3a28) + 0x10))(lVar17 + 0x3a28);
          iVar4 = 0;
          if ((lVar17 != 0) && (iVar4 = 0, 0 < *(int *)(lVar15 + 0x70))) {
            lVar9 = 0;
            lVar19 = 0x28;
            iVar4 = 0;
            do {
              uVar8 = FUN_14095dd8e(*(longlong *)(lVar15 + 0x68) + lVar19);
              bVar3 = FUN_1418ae21a(lVar17,uVar8);
              iVar4 = iVar4 + (uint)bVar3;
              lVar9 = lVar9 + 1;
              lVar19 = lVar19 + 0x58;
            } while (lVar9 < *(int *)(lVar15 + 0x70));
          }
          uStack_2b8 = CONCAT44(iVar4,(undefined4)uStack_2b8);
          goto LAB_1441354ee;
        }
      }
      if (local_388 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_140d17bd8(local_378);
LAB_14413556d:
  if ((local_60 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144135a70 FUN_144135a70 body=29 status=ok
// SIG undefined FUN_144135a70(void)

undefined8 FUN_144135a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144135c0c FUN_144135c0c body=109 status=ok
// SIG undefined FUN_144135c0c(void)

void FUN_144135c0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96d2f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 144135c7a FUN_144135c7a body=109 status=ok
// SIG undefined FUN_144135c7a(void)

void FUN_144135c7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96d2f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d280;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 144135ce8 FUN_144135ce8 body=142 status=ok
// SIG undefined FUN_144135ce8(void)

void FUN_144135ce8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96d2f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d280;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  p_Var1[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144135d67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144135d80 FUN_144135d80 body=278 status=ok
// SIG undefined FUN_144135d80(void)

undefined8 FUN_144135d80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144135e90;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144135e90;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144135e90:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144135e43;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144135e98(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_144135e43;
    }
  }
  uVar6 = 0;
LAB_144135e43:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144135e98 FUN_144135e98 body=1413 status=ok
// SIG undefined FUN_144135e98(void)

void FUN_144135e98(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined1 auStack_3a8 [40];
  longlong local_380;
  undefined1 local_378 [4];
  undefined4 local_374;
  undefined1 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  longlong local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined4 local_150;
  int local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (((((*(int *)((longlong)param_1 + 0xc) == 0) ||
        (uVar2 = *(uint *)(param_1 + 1), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
      ((lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar13 == 0 ||
       (*(int *)(lVar13 + 0x10) != *(int *)((longlong)param_1 + 0xc))))) ||
     ((lVar6 = *param_1, (*(uint *)(lVar13 + 8) & 0x10200000) != 0 ||
      (plVar3 = *(longlong **)(lVar6 + 0xd78), plVar3 == (longlong *)0x0)))) goto LAB_144135f0e;
  iVar12 = (int)plVar3[1];
  do {
    if (iVar12 == 0) goto LAB_144135f0e;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar17 = iVar12 == iVar5;
    if (bVar17) {
      *(int *)(plVar3 + 1) = iVar12 + 1;
      iVar5 = iVar12;
    }
    iVar12 = iVar5;
    UNLOCK();
  } while (!bVar17);
  lVar13 = *(longlong *)(lVar6 + 0xd70);
  if ((lVar13 != 0 && param_1[3] != 0) && (lVar6 = FUN_140279ac4(param_2), lVar6 != 0)) {
    lVar7 = FUN_140c3a90d(lVar6 + 0x130,lVar6 + 0x200);
    if ((lVar7 != 0) && (lVar7 = FUN_140307b1c(lVar7), lVar7 != 0)) {
      plVar4 = (longlong *)param_1[3];
      puVar15 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
        puVar15 = *(undefined4 **)(lVar7 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar7 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar7);
        DAT_14c947fe0 = lVar7;
      }
      FUN_140045924(DAT_14c947fe0,&local_380,puVar15,1);
      if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
        uVar2 = (uint)((ulonglong)local_380 >> 0x10);
        uVar10 = (uint)local_380 & 0xffff;
        plVar9 = plVar4 + 7;
        if ((longlong *)plVar4[8] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar4[8];
        }
        iVar12 = *(int *)((longlong)plVar9 +
                         (ulonglong)
                         ((int)plVar4[9] - 1U &
                         (int)((ulonglong)local_380 >> 0x20) + ((uint)local_380 << 0x10 | uVar10) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
        if (iVar12 != -1) {
          lVar7 = *plVar4;
          iVar5 = iVar12;
          do {
            if (*(longlong *)(lVar7 + (longlong)iVar5 * 0x20) == local_380) goto LAB_144136090;
            iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar7 + 0x18);
          } while (iVar5 != -1);
        }
      }
    }
  }
  goto LAB_1441363c9;
  while (iVar12 = *(int *)(lVar14 + 0x18), iVar12 != -1) {
LAB_144136090:
    lVar14 = lVar7 + (longlong)iVar12 * 0x20;
    if (*(longlong *)(lVar7 + (longlong)iVar12 * 0x20) == local_380) goto LAB_1441360a5;
  }
  lVar14 = 0;
LAB_1441360a5:
  uVar16 = 0;
  iVar12 = 0;
  if ((longlong)*(int *)(lVar14 + 0x10) != 0) {
    lVar7 = *(longlong *)(lVar14 + 8);
    lVar14 = (longlong)*(int *)(lVar14 + 0x10) * 0x30;
    iVar12 = 0;
    do {
      lVar8 = FUN_140279ac4(lVar7);
      if (((lVar8 != 0) && (lVar8 = FUN_140c3a90d(lVar8 + 0x130,lVar6 + 0x200), lVar8 != 0)) &&
         (lVar8 = FUN_140307b1c(lVar8), lVar8 != 0)) {
        iVar5 = FUN_1406ba864(lVar13,lVar7,0);
        iVar12 = iVar12 + (uint)(iVar5 == 2);
      }
      lVar7 = lVar7 + 0x30;
      lVar14 = lVar14 + -0x30;
    } while (lVar14 != 0);
  }
  local_378[0] = 0;
  local_374 = 0xbf800000;
  local_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  local_2f0 = 0;
  local_2e8 = 0x200000000;
  local_350 = 0;
  uStack_348 = 0;
  local_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  FUN_1405c5fa2();
  local_2d8 = &DAT_14cb769e8;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = &PTR_FUN_14b0394b0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  local_274 = 0;
  uStack_26c = 0;
  local_264 = 0;
  uStack_25c = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  local_238 = FUN_140938dea();
  local_230 = 0xffffffff;
  local_1c8 = 0;
  local_1c0 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1bc = 0xffffffff00000080;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_170 = 0xf;
  local_168 = 1;
  local_164 = 0;
  uStack_15c = 0;
  local_150 = 0;
  local_148 = 1;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_110 = 0;
  local_108 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_104 = 0xffffffff00000080;
  local_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_d4 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  local_378[0] = (undefined1)param_1[2];
  local_244 = local_380;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar16 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) {
        uVar16 = 0;
      }
      else {
        uVar16 = *puVar11;
      }
    }
  }
  local_14c = iVar12;
  FUN_1408964e4(uVar16,local_378);
  FUN_140d17bd8(local_378);
LAB_1441363c9:
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
LAB_144135f0e:
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413641e FUN_14413641e body=1292 status=ok
// SIG undefined FUN_14413641e(void)

void FUN_14413641e(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    lVar14 = param_1[1];
    lVar5 = *(longlong *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      uVar4 = FUN_14050c9fe();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x38) = lVar5;
    }
    lVar11 = *(longlong *)(lVar6 + 0x40);
    if (lVar11 == 0) {
      if ((lVar5 == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) goto LAB_14413689e;
      plVar7 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar1 == '\0')) {
        *(undefined8 *)(lVar6 + 0x40) = 0;
        goto LAB_14413689e;
      }
      uVar4 = (**(code **)(*plVar7 + 0x110))(plVar7);
      lVar11 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x30));
      *(longlong *)(lVar6 + 0x40) = lVar11;
      if (lVar11 == 0) goto LAB_14413689e;
    }
    if (*(char *)(lVar11 + 0x97) == '\x01') {
      lVar5 = (longlong)*(int *)(*param_1 + 0x160);
      if (lVar5 != 0) {
        lVar11 = 0;
        do {
          if (*(longlong *)(*(longlong *)(*param_1 + 0x158) + lVar11) ==
              *(longlong *)(lVar6 + 0x130)) {
            lVar5 = FUN_140c3a90d((longlong *)(lVar6 + 0x130),lVar6 + 0x200);
            if ((lVar5 != 0) && (lVar5 = FUN_140307b1c(lVar5), lVar5 != 0)) {
              puVar13 = *(undefined4 **)(lVar5 + 8);
              if (puVar13 == (undefined4 *)0x0) {
                puVar13 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar11 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar11);
                DAT_14c947fe0 = lVar11;
              }
              plVar7 = (longlong *)(lVar14 + 0xc20);
              FUN_140045924(DAT_14c947fe0,&local_58,puVar13,1);
              uVar3 = (uint)((ulonglong)local_58 >> 0x10);
              uVar9 = (uint)local_58 & 0xffff;
              if (*(int *)(lVar14 + 0xc28) == *(int *)(lVar14 + 0xc54)) goto LAB_14413661e;
              lVar11 = lVar14 + 0xc58;
              if (*(longlong *)(lVar14 + 0xc60) != 0) {
                lVar11 = *(longlong *)(lVar14 + 0xc60);
              }
              iVar2 = *(int *)(lVar11 + (ulonglong)
                                        (*(int *)(lVar14 + 0xc68) - 1U &
                                        ((uint)local_58 << 0x10 | uVar9) +
                                        (int)((ulonglong)local_58 >> 0x20) +
                                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
              if (iVar2 == -1) goto LAB_14413661e;
              goto LAB_144136604;
            }
            break;
          }
          lVar11 = lVar11 + 8;
        } while (lVar5 * 8 != lVar11);
      }
    }
  }
  goto LAB_14413689e;
  while (iVar2 = *(int *)(lVar14 + 0x18), iVar2 != -1) {
LAB_144136604:
    lVar14 = *plVar7 + (longlong)iVar2 * 0x20;
    if (*(longlong *)(*plVar7 + (longlong)iVar2 * 0x20) == local_58) {
      if (lVar14 != 0) goto LAB_144136654;
      break;
    }
  }
LAB_14413661e:
  local_88 = &local_58;
  FUN_145c9eb10(plVar7,&local_4c);
  lVar14 = *plVar7 + (longlong)local_4c * 0x20;
LAB_144136654:
  FUN_14073f620(&local_88,lVar6);
  iVar2 = *(int *)(lVar14 + 0x10);
  *(uint *)(lVar14 + 0x10) = iVar2 + 1U;
  if (*(uint *)(lVar14 + 0x14) < iVar2 + 1U) {
    FUN_14662668c((longlong *)(lVar14 + 8),iVar2);
  }
  lVar6 = *(longlong *)(lVar14 + 8);
  lVar14 = (longlong)iVar2 * 0x30;
  *(undefined8 *)(lVar6 + 0x10 + lVar14) = 0;
  *(undefined8 *)(lVar6 + lVar14) = 0;
  ((undefined8 *)(lVar6 + lVar14))[1] = 0;
  *(longlong **)(lVar6 + lVar14) = local_88;
  uVar4 = FUN_14477b664(local_80);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(lVar6 + 8 + lVar14) = uVar4;
  *(undefined8 *)(lVar6 + 0x10 + lVar14) = local_78;
  *(undefined8 *)(lVar6 + 0x18 + lVar14) = 0;
  *(longlong *)(lVar6 + 0x18 + lVar14) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar14) = (undefined4)local_68;
  *(undefined4 *)(lVar6 + 0x24 + lVar14) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar6 + 0x28 + lVar14) = local_60;
  iVar2 = FUN_1406ba864(*(undefined8 *)param_1[2],&local_88,0);
  if (iVar2 == 2) {
    puVar13 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar13 = *(undefined4 **)(lVar5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar13,1);
    plVar7 = (longlong *)param_1[3];
    iVar2 = (int)plVar7[1];
    iVar10 = *(int *)((longlong)plVar7 + 0x34);
    uVar9 = (uint)local_58;
    iVar12 = (int)((ulonglong)local_58 >> 0x20);
    uVar3 = (uint)((ulonglong)local_58 >> 0x10);
    if (iVar2 == iVar10) {
      uVar3 = (uVar9 << 0x10 | uVar9 & 0xffff) + iVar12 + (uVar3 << 0x13 | uVar3 & 0xffff) +
              ((uVar9 & 0xffff) >> 4);
    }
    else {
      uVar3 = iVar12 + (uVar9 << 0x10 | uVar9 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
              ((uVar9 & 0xffff) >> 4);
      plVar8 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar7[8];
      }
      iVar12 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar7[9] - 1U & uVar3) * 4);
      if (iVar12 != -1) {
        do {
          if (*(longlong *)(*plVar7 + (longlong)iVar12 * 0x14) == local_58) goto LAB_144136816;
          iVar12 = *(int *)(*plVar7 + (longlong)iVar12 * 0x14 + 0xc);
        } while (iVar12 != -1);
      }
    }
    puVar13 = (undefined4 *)FUN_140dfb35a(plVar7,uVar3,&local_58);
    *puVar13 = 0;
    plVar7 = (longlong *)param_1[3];
    iVar2 = (int)plVar7[1];
    iVar10 = *(int *)((longlong)plVar7 + 0x34);
LAB_144136816:
    if (iVar2 != iVar10) {
      uVar3 = (uint)((ulonglong)local_58 >> 0x10);
      uVar9 = (uint)local_58 & 0xffff;
      plVar8 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar7[8];
      }
      iVar2 = *(int *)((longlong)plVar8 +
                      (ulonglong)
                      ((int)plVar7[9] - 1U &
                      (int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar9) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar2 != -1) {
        do {
          plVar8 = (longlong *)(*plVar7 + (longlong)iVar2 * 0x14);
          if (*plVar8 == local_58) goto LAB_14413688c;
          iVar2 = *(int *)((longlong)plVar8 + 0xc);
        } while (iVar2 != -1);
      }
    }
    plVar8 = (longlong *)0x0;
LAB_14413688c:
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_14413689e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413692c FUN_14413692c body=29 status=ok
// SIG undefined FUN_14413692c(void)

undefined8 FUN_14413692c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144136ac8 FUN_144136ac8 body=101 status=ok
// SIG undefined FUN_144136ac8(void)

void FUN_144136ac8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144136b2e FUN_144136b2e body=101 status=ok
// SIG undefined FUN_144136b2e(void)

void FUN_144136b2e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144136b94 FUN_144136b94 body=134 status=ok
// SIG undefined FUN_144136b94(void)

void FUN_144136b94(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d360;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144136c0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144136c66 FUN_144136c66 body=343 status=ok
// SIG undefined FUN_144136c66(void)

undefined8 FUN_144136c66(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144136db7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144136db7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144136db7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144136d64;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      uVar5 = 1;
      if ((*(int *)(param_1 + 0x24) != 0) &&
         ((uVar2 = *(uint *)(param_1 + 0x20), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar6 != 0) &&
           ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x24) &&
            ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
          FUN_145798418(*(undefined8 *)(param_1 + 0x28));
        }
      }
      goto LAB_144136d64;
    }
  }
  uVar5 = 0;
LAB_144136d64:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144136dbe FUN_144136dbe body=29 status=ok
// SIG undefined FUN_144136dbe(void)

undefined8 FUN_144136dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144136f5a FUN_144136f5a body=101 status=ok
// SIG undefined FUN_144136f5a(void)

void FUN_144136f5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144136fc0 FUN_144136fc0 body=101 status=ok
// SIG undefined FUN_144136fc0(void)

void FUN_144136fc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d3d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144137026 FUN_144137026 body=134 status=ok
// SIG undefined FUN_144137026(void)

void FUN_144137026(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d3d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014413709d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441370b6 FUN_1441370b6 body=269 status=ok
// SIG undefined FUN_1441370b6(void)

undefined8 FUN_1441370b6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441371bd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441371bd;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1441371bd:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144137171;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1441371c4(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144137171;
    }
  }
  uVar6 = 0;
LAB_144137171:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441371c4 FUN_1441371c4 body=1188 status=ok
// SIG undefined FUN_1441371c4(void)

void FUN_1441371c4(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_388 [40];
  undefined8 local_360;
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined **local_2c0;
  undefined *local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
  goto LAB_1441375ed;
  lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar6 == 0) || (*(uint *)(lVar6 + 0x10) != param_1[1])) ||
     (lVar1 = *(longlong *)(param_1 + 4), (*(uint *)(lVar6 + 8) & 0x10200000) != 0))
  goto LAB_1441375ed;
  local_354 = 0xbf800000;
  lVar6 = 0;
  local_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  local_2d0 = 0;
  local_2c8 = 0x200000000;
  local_330 = 0;
  uStack_328 = 0;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  uStack_308 = 0;
  FUN_1405c5fa2();
  local_2b8 = &DAT_14cb769e8;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2c0 = &PTR_FUN_14b0394b0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_254 = 0;
  uStack_24c = 0;
  local_244 = 0;
  uStack_23c = 0;
  local_234 = 0;
  uStack_22c = 0;
  local_224 = 0;
  local_218 = FUN_140938dea();
  local_210 = 0xffffffff;
  local_1a8 = 0;
  local_1a0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_19c = 0xffffffff00000080;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0xf;
  local_148 = 1;
  local_144 = 0;
  uStack_13c = 0;
  local_130 = 0x100000000;
  local_128 = 1;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_b4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x100000000;
  local_48 = 0;
  local_358[0] = (undefined1)param_1[2];
  if (param_1[1] != 0) {
    uVar2 = *param_1;
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((*(uint *)(plVar7 + 2) != param_1[1] || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
        lVar6 = 0;
      }
      else {
        lVar6 = *plVar7;
      }
    }
  }
  uVar2 = (**(code **)(*(longlong *)(lVar6 + 0x10c0) + 0x28))(lVar6 + 0x10c0);
  local_130 = CONCAT44(uVar2,(undefined4)local_130);
  if (param_1[1] == 0) {
LAB_144137654:
    uVar4 = 0;
  }
  else {
    uVar3 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_144137654;
      uVar4 = *puVar5;
    }
  }
  FUN_140bac450(uVar4,&local_360);
  local_80 = local_360;
  if (*(uint *)(lVar1 + 0xb30) < local_130._4_4_) {
    if (param_1[1] == 0) {
LAB_14413765b:
      uVar4 = 0;
    }
    else {
      uVar3 = *param_1;
      uVar4 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_14413765b;
        uVar4 = *puVar5;
      }
    }
    FUN_1408964e4(uVar4,local_358);
  }
  if (uVar2 < 0x32) {
    if (0x1d < uVar2) goto LAB_14413762d;
    if (9 < uVar2) goto LAB_14413763e;
  }
  else {
    FUN_148d015c4(lVar1 + 0xb08,4);
LAB_14413762d:
    FUN_148d015c4(lVar1 + 0xb08,3);
LAB_14413763e:
    FUN_148d015c4(lVar1 + 0xb08,2);
  }
  uVar3 = *(uint *)(lVar1 + 0xb30);
  if (*(uint *)(lVar1 + 0xb30) < uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(lVar1 + 0xb30) = uVar3;
  FUN_140d17bd8(local_358);
LAB_1441375ed:
  if ((local_40 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413766a FUN_14413766a body=29 status=ok
// SIG undefined FUN_14413766a(void)

undefined8 FUN_14413766a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144137812 FUN_144137812 body=101 status=ok
// SIG undefined FUN_144137812(void)

void FUN_144137812(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96d4b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144137878 FUN_144137878 body=101 status=ok
// SIG undefined FUN_144137878(void)

void FUN_144137878(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96d4b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441378de FUN_1441378de body=134 status=ok
// SIG undefined FUN_1441378de(void)

void FUN_1441378de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96d4b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d440;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144137955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144137964 FUN_144137964 body=66 status=ok
// SIG undefined FUN_144137964(void)

void FUN_144137964(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144137acc(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441379a8 FUN_1441379a8 body=288 status=ok
// SIG undefined FUN_1441379a8(void)

undefined8 FUN_1441379a8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144137ac2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144137ac2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144137ac2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144137a75;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144137acc(param_1 + 0x20,&local_38,param_3);
      uVar6 = 1;
      goto LAB_144137a75;
    }
  }
  uVar6 = 0;
LAB_144137a75:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144137acc FUN_144137acc body=3936 status=ok
// SIG undefined FUN_144137acc(void)

void FUN_144137acc(uint *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  code *pcVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong *plVar31;
  longlong lVar32;
  bool bVar33;
  undefined1 auStack_458 [32];
  undefined4 local_438;
  undefined4 local_430;
  undefined4 local_428;
  ulonglong local_420;
  undefined2 *local_418;
  undefined1 *local_410;
  undefined1 *local_408;
  undefined8 *local_400;
  undefined1 *local_3f8;
  code *local_3f0;
  longlong *local_3e8;
  uint *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  int local_3c4;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined8 *local_3a8;
  undefined1 local_3a0 [8];
  undefined *local_398;
  char local_380;
  undefined8 local_378;
  undefined1 local_370;
  undefined7 uStack_36f;
  longlong local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined **local_2e0;
  undefined *local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  lVar27 = *param_2;
  local_3e8 = param_3;
  if (lVar27 != 0) {
    lVar22 = *(longlong *)(param_1 + 2);
    if (DAT_14cba8288 == 0) {
      local_400 = &local_378;
      local_378 = FUN_141864c34;
      local_3f0 = FUN_14081d0ea;
      local_3f8 = &LAB_1464cee30;
      local_408 = &LAB_148bfac22;
      local_410 = &LAB_140f21842;
      local_418 = &DAT_149e063b2;
      local_420 = 0;
      local_428 = 0x10000004;
      local_430 = 0x10;
      local_438 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar27 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
        (param_1[1] != 0)) &&
       (((uVar25 = *param_1, -1 < (int)uVar25 && ((int)uVar25 < DAT_14c9647dc)) &&
        ((lVar21 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8), lVar21 != 0 &&
         ((*(uint *)(lVar21 + 0x10) == param_1[1] && ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)))))
        ))) {
      local_3d0 = FUN_1407e8892();
      if ((longlong)*(int *)(local_3d0 + 0x70) != 0) {
        lVar21 = *local_3e8;
        lVar32 = *(longlong *)(local_3d0 + 0x68);
        local_3b8 = (longlong)*(int *)(local_3d0 + 0x70) * 0x58 + lVar32;
        local_3d8 = lVar22;
        local_3c0 = lVar32;
        do {
          if (lVar21 == 0) {
            pcVar24 = (code *)0x0;
            local_3e0 = (uint *)0x0;
            lVar26 = 0;
            iVar9 = 0;
          }
          else {
            FUN_1400bbfc4(&local_378,lVar21);
            lVar26 = local_368;
            pcVar24 = local_378;
            local_3e0 = (uint *)CONCAT71(uStack_36f,local_370);
            iVar9 = (int)uStack_360;
            cVar8 = (*(code *)PTR_FUN_14c758760)();
            uVar25 = *(uint *)(lVar21 + 0xc);
            if (cVar8 != '\0') {
              if ((int)uVar25 < DAT_14c9647dc) {
                lVar11 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(lVar11 + 8) & 0x8400000) != 0) goto LAB_144137cb7;
            }
            if ((int)uVar25 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            lVar22 = local_3d8;
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar28 = DAT_14c964868 + 1;
              UNLOCK();
              iVar15 = DAT_14c964868 + 1;
              bVar33 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar28;
              if (bVar33) {
                local_3c4 = iVar15;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar15);
                iVar15 = local_3c4;
              }
              LOCK();
              if (*(int *)(lVar11 + 0x10) == 0) {
                *(int *)(lVar11 + 0x10) = iVar15;
              }
              UNLOCK();
              lVar22 = local_3d8;
            }
          }
LAB_144137cb7:
          if ((*(code **)(lVar32 + 0x30) == pcVar24) && (*(uint **)(lVar32 + 0x38) == local_3e0)) {
            iVar28 = *(int *)(lVar32 + 0x48);
            if (iVar28 == iVar9) {
              bVar33 = true;
              if (iVar28 < 2) goto LAB_144137cbf;
              lVar11 = 0;
              while( true ) {
                uVar2 = *(ushort *)(*(longlong *)(lVar32 + 0x40) + lVar11);
                uVar25 = (uint)uVar2;
                uVar3 = *(ushort *)(lVar26 + lVar11);
                uVar23 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar25 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_144137d25;
                  }
                  iVar9 = uVar25 - uVar23;
                  goto LAB_144137d7e;
                }
                if (uVar2 == 0) break;
LAB_144137d25:
                lVar11 = lVar11 + 2;
              }
              iVar9 = 0;
            }
            else {
              iVar9 = iVar9 + iVar28 + -1;
            }
LAB_144137d7e:
            bVar33 = iVar9 == 0;
          }
          else {
            bVar33 = false;
          }
LAB_144137cbf:
          if (lVar26 != 0) {
            FUN_1400020a8(lVar26);
          }
          if (bVar33) {
            uVar25 = (int)(lVar32 - local_3c0 >> 3) * -0x45d1745d;
            if ((-1 < (int)uVar25) && ((int)uVar25 < *(int *)(local_3d0 + 0x70))) {
              lVar21 = (**(code **)(*(longlong *)(lVar27 + 0x10b0) + 0x28))(lVar27 + 0x10b0);
              if ((longlong)*(int *)(lVar21 + 0x80) != 0) {
                plVar12 = *(longlong **)(lVar21 + 0x78);
                plVar31 = plVar12 + *(int *)(lVar21 + 0x80);
                do {
                  if (*(int *)(local_3d0 + 0x140) != 0) {
                    lVar21 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(local_3d0 + 0x138) + lVar21) == *plVar12)
                      goto LAB_144137b77;
                      lVar21 = lVar21 + 8;
                    } while ((longlong)*(int *)(local_3d0 + 0x140) << 3 != lVar21);
                  }
                  if (*(int *)(local_3d0 + 0x150) != 0) {
                    lVar21 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(local_3d0 + 0x148) + lVar21) == *plVar12)
                      goto LAB_144137b77;
                      lVar21 = lVar21 + 8;
                    } while ((longlong)*(int *)(local_3d0 + 0x150) << 3 != lVar21);
                  }
                  plVar12 = plVar12 + 1;
                } while (plVar12 != plVar31);
              }
              uVar23 = (uint)local_378;
              local_378 = (code *)CONCAT44(0xbf800000,uVar23 & 0xffffff00);
              local_370 = 0;
              local_368 = 0;
              uStack_360 = 0;
              local_358 = 0;
              local_2f0 = 0;
              local_2e8 = 0x200000000;
              local_350 = 0;
              uStack_348 = 0;
              local_340 = 0;
              uStack_338 = 0;
              local_330 = 0;
              uStack_328 = 0;
              FUN_1405c5fa2();
              local_2d8 = &DAT_14cb769e8;
              local_2d0 = 0;
              uStack_2c8 = 0;
              local_2e0 = &PTR_FUN_14b0394b0;
              local_2c0 = 0;
              uStack_2b8 = 0;
              local_2b0 = 0;
              local_2a8 = 0;
              uStack_2a0 = 0;
              local_298 = 0;
              uStack_290 = 0;
              local_288 = 0;
              uStack_280 = 0;
              local_278 = 0;
              local_274 = 0;
              uStack_26c = 0;
              local_264 = 0;
              uStack_25c = 0;
              local_254 = 0;
              uStack_24c = 0;
              local_244 = 0;
              local_238 = FUN_140938dea();
              local_230 = 0xffffffff;
              local_1c8 = 0;
              local_1c0 = 0;
              local_228 = 0;
              uStack_220 = 0;
              local_218 = 0;
              uStack_210 = 0;
              local_208 = 0;
              uStack_200 = 0;
              local_1f8 = 0;
              uStack_1f0 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1bc = 0xffffffff00000080;
              local_1b4 = 0;
              local_1a8 = 0;
              local_1a0 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_188 = 0;
              uStack_180 = 0;
              local_178 = 0;
              local_170 = 0xf;
              local_168 = 1;
              local_164 = 0;
              uStack_15c = 0;
              local_150 = 0x100000000;
              local_148 = 1;
              local_140 = 0;
              local_13c = 0;
              local_138 = 0;
              local_110 = 0;
              local_108 = 0;
              local_130 = 0;
              uStack_128 = 0;
              local_104 = 0xffffffff00000080;
              local_fc = 0;
              local_f0 = 0;
              local_e8 = 0;
              local_d4 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = 0;
              local_e0 = 0;
              local_d8 = 0;
              local_b0 = 0;
              uStack_a8 = 0;
              local_a0 = 0;
              uStack_98 = 0;
              local_90 = 0;
              local_80 = 0;
              uStack_78 = 0;
              local_70 = 0x100000000;
              local_68 = 0;
              local_378 = (code *)CONCAT71(local_378._1_7_,0x15);
              uVar23 = *(uint *)(*(longlong *)(local_3d0 + 0x68) + 0x50 +
                                (ulonglong)(uVar25 & 0x7fffffff) * 0x58);
              uStack_88 = (ulonglong)uVar23;
              if ((uVar23 != 1) ||
                 (cVar8 = (**(code **)(*(longlong *)(lVar27 + 0x3c60) + 0x38))(lVar27 + 0x3c60),
                 cVar8 != '\0')) {
                FUN_1411a0f6a(local_3a0,local_3e8 + 6);
                if (local_380 == '\x01') {
                  (*(code *)local_2e0[4])(&local_2e0,0);
                  local_2d8 = local_398;
                  FUN_1406022fe(&local_2d0);
                }
                if (param_1[1] == 0) {
LAB_1441388ca:
                  uVar18 = 0;
                }
                else {
                  uVar23 = *param_1;
                  uVar18 = 0;
                  if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
                    puVar19 = (undefined8 *)
                              ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
                    if ((puVar19 == (undefined8 *)0x0) ||
                       ((*(uint *)(puVar19 + 2) != param_1[1] ||
                        ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_1441388ca;
                    uVar18 = *puVar19;
                  }
                }
                FUN_1408964e4(uVar18,&local_378);
                uVar23 = *(uint *)(lVar27 + 0xc);
                if ((int)uVar23 < DAT_14c9647dc) {
                  lVar27 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                }
                else {
                  lVar27 = 0;
                }
                uVar10 = *(uint *)(lVar27 + 0x10);
                if (*(uint *)(lVar27 + 0x10) == 0) {
                  LOCK();
                  iVar9 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar29 = DAT_14c964868 + 1;
                  bVar33 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar9;
                  if (bVar33) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar29);
                  }
                  LOCK();
                  uVar10 = *(uint *)(lVar27 + 0x10);
                  bVar33 = uVar10 == 0;
                  if (bVar33) {
                    *(uint *)(lVar27 + 0x10) = uVar29;
                    uVar10 = 0;
                  }
                  UNLOCK();
                  lVar22 = local_3d8;
                  if (bVar33) {
                    uVar10 = uVar29;
                  }
                }
                plVar31 = (longlong *)(lVar22 + 0xc70);
                puVar19 = (undefined8 *)CONCAT44(uVar10,uVar23);
                uVar23 = uVar23 ^ uVar10;
                local_3a8 = puVar19;
                iVar9 = FUN_1418e5cfc(plVar31,uVar23);
                local_3e8 = plVar31;
                if (iVar9 == -1) {
LAB_14413826e:
                  if (*(int *)(lVar22 + 0xca4) == 0) {
                    iVar9 = *(int *)(lVar22 + 0xc78);
                    *(int *)(lVar22 + 0xc78) = iVar9 + 1;
                    if (*(int *)(lVar22 + 0xc7c) == iVar9) {
                      FUN_1447711aa(plVar31,iVar9);
                    }
                    lVar22 = local_3d8;
                    lVar32 = (longlong)iVar9;
                    lVar27 = local_3d8 + 0xc80;
                    iVar28 = FUN_144a54ea4(lVar27,1);
                    lVar21 = *(longlong *)(lVar22 + 0xc90);
                    if (*(longlong *)(lVar22 + 0xc90) == 0) {
                      lVar21 = lVar27;
                    }
                    iVar15 = iVar28 + 0x1f;
                    if (-1 < iVar28) {
                      iVar15 = iVar28;
                    }
                    bVar5 = (byte)iVar28 & 0x1f;
                    puVar13 = (uint *)(lVar21 + (longlong)(iVar15 >> 5) * 4);
                    *puVar13 = *puVar13 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
                  }
                  else {
                    iVar9 = *(int *)(lVar22 + 0xca0);
                    lVar32 = (longlong)iVar9;
                    iVar28 = *(int *)(*(longlong *)(lVar22 + 0xc70) + 4 + lVar32 * 0x20);
                    *(int *)(lVar22 + 0xca0) = iVar28;
                    iVar15 = *(int *)(lVar22 + 0xca4) + -1;
                    *(int *)(lVar22 + 0xca4) = iVar15;
                    if (iVar15 != 0) {
                      *(undefined4 *)(*(longlong *)(lVar22 + 0xc70) + (longlong)iVar28 * 0x20) =
                           0xffffffff;
                    }
                  }
                  lVar22 = local_3d8;
                  lVar27 = local_3d8 + 0xc80;
                  if (*(longlong *)(local_3d8 + 0xc90) != 0) {
                    lVar27 = *(longlong *)(local_3d8 + 0xc90);
                  }
                  iVar28 = iVar9 + 0x1f;
                  if (-1 < iVar9) {
                    iVar28 = iVar9;
                  }
                  puVar13 = (uint *)(lVar27 + (longlong)(iVar28 >> 5) * 4);
                  *puVar13 = *puVar13 | 1 << ((byte)iVar9 & 0x1f);
                  iVar28 = 1;
                  lVar27 = *(longlong *)(local_3d8 + 0xc70);
                  lVar32 = lVar32 * 0x20;
                  local_3e0 = (uint *)(lVar27 + lVar32);
                  *(undefined8 **)(lVar27 + lVar32) = puVar19;
                  puVar14 = (undefined8 *)(lVar27 + 8 + lVar32);
                  *puVar14 = 0;
                  puVar14[1] = 0;
                  *(undefined4 *)(lVar27 + 0x18 + lVar32) = 0xffffffff;
                  if (*(int *)(local_3d8 + 0xc78) - *(int *)(local_3d8 + 0xca4) == 1) {
                    uVar10 = 1;
LAB_144138399:
                    plVar31 = local_3e8;
                    iVar15 = iVar9;
                    if (((int)uVar10 < 1) || (iVar28 <= *(int *)(lVar22 + 0xcb8))) {
                      uVar23 = *(int *)(lVar22 + 0xcb8) - 1U & uVar23;
                      local_3e0[7] = uVar23;
                      lVar27 = *(longlong *)(lVar22 + 0xcb0);
                      if (*(longlong *)(lVar22 + 0xcb0) == 0) {
                        lVar27 = lVar22 + 0xca8;
                      }
                      local_3e0[6] = *(uint *)(lVar27 + ((longlong)*(int *)(lVar22 + 0xcb8) - 1U &
                                                        (longlong)(int)uVar23) * 4);
                      lVar27 = *(longlong *)(lVar22 + 0xcb0);
                      if (*(longlong *)(lVar22 + 0xcb0) == 0) {
                        lVar27 = lVar22 + 0xca8;
                      }
                      *(int *)(lVar27 + ((longlong)*(int *)(lVar22 + 0xcb8) - 1U &
                                        (longlong)(int)uVar23) * 4) = iVar9;
                    }
                    else {
                      *(int *)(lVar22 + 0xcb8) = iVar28;
                      FUN_146626720(local_3e8);
                    }
                  }
                  else {
                    local_3a8 = puVar19;
                    iVar15 = FUN_1418e5cfc(local_3e8,uVar23);
                    if (iVar15 == -1) {
                      uVar10 = *(int *)(lVar22 + 0xc78) - *(int *)(lVar22 + 0xca4);
                      if (3 < uVar10) {
                        uVar20 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
                        lVar27 = 0x3f;
                        if (uVar20 != 0) {
                          for (; uVar20 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                          }
                        }
                        iVar28 = 1 << ((byte)lVar27 & 0x1f);
                      }
                      goto LAB_144138399;
                    }
                    puVar13 = (uint *)(*local_3e8 + (longlong)iVar15 * 0x20);
                    if (*(longlong *)(*local_3e8 + 8 + (longlong)iVar15 * 0x20) != 0) {
                      FUN_1400020a8();
                    }
                    plVar31 = local_3e8;
                    uVar23 = *local_3e0;
                    uVar10 = local_3e0[1];
                    uVar29 = local_3e0[2];
                    uVar6 = local_3e0[3];
                    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(local_3e0 + 4);
                    *puVar13 = uVar23;
                    puVar13[1] = uVar10;
                    puVar13[2] = uVar29;
                    puVar13[3] = uVar6;
                    FUN_14129a6a8(local_3e8,iVar9);
                    lVar22 = local_3d8;
                  }
                  plVar31 = (longlong *)(*plVar31 + (longlong)iVar15 * 0x20 + 8);
                  FUN_14171b6d4(plVar31,6,0);
                }
                else {
                  if (*plVar31 + (longlong)iVar9 * 0x20 == 0) goto LAB_14413826e;
                  plVar31 = (longlong *)(*plVar31 + (longlong)iVar9 * 0x20 + 8);
                }
                FUN_140212f8e(&local_3b0);
                local_420 = local_420 & 0xffffffff00000000;
                local_428 = 0;
                local_430 = 0;
                local_438 = 0;
                FUN_14021300e(&local_3a8,0x7b2);
                lVar27 = (local_3b0 - (longlong)local_3a8) / 10000000;
                iVar9 = (int)plVar31[1];
                if ((int)uVar25 < iVar9) {
                  *(longlong *)(*plVar31 + (ulonglong)(uVar25 & 0x7fffffff) * 8) = lVar27;
                  iVar9 = (int)plVar31[1];
                }
                if (iVar9 == 0) {
LAB_1441384ee:
                  local_378 = (code *)CONCAT71(local_378._1_7_,0x16);
                  local_90 = CONCAT44(1,(undefined4)local_90);
                  if (*(int *)(lVar22 + 0xc1c) == 0) {
LAB_1441388d1:
                    lVar21 = 0;
                  }
                  else {
                    uVar25 = *(uint *)(lVar22 + 0xc18);
                    lVar21 = 0;
                    if ((-1 < (int)uVar25) && ((int)uVar25 < DAT_14c9647dc)) {
                      plVar31 = (longlong *)
                                ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8));
                      if ((plVar31 == (longlong *)0x0) ||
                         (((int)plVar31[2] != *(int *)(lVar22 + 0xc1c) ||
                          ((*(uint *)(plVar31 + 1) & 0x10200000) != 0)))) goto LAB_1441388d1;
                      lVar21 = *plVar31;
                    }
                  }
                  FUN_148d1bb92(lVar21 + 0x4f48,&local_378);
                }
                else {
                  lVar21 = 0;
                  while ((ulonglong)(lVar27 - *(longlong *)(*plVar31 + lVar21)) <=
                         *(ulonglong *)(local_3d0 + 0x78)) {
                    lVar21 = lVar21 + 8;
                    if ((longlong)iVar9 * 8 == lVar21) goto LAB_1441384ee;
                  }
                }
                puVar19 = (undefined8 *)FUN_14001cc68(0x10,0x10);
                uVar20 = 0;
                *puVar19 = 0;
                puVar19[1] = 0;
                local_3e0 = (uint *)(lVar22 + 0xc80);
                iVar9 = *(int *)(lVar22 + 0xc98);
                uVar30 = 1;
                iVar15 = 0;
                iVar28 = 0;
                local_3a8 = puVar19;
                if (iVar9 == 0) {
LAB_144138626:
                  if (iVar28 != iVar9) {
                    uVar25 = 0xffffffff;
                    do {
                      puVar13 = (uint *)(*local_3e8 + (longlong)iVar28 * 0x20);
                      iVar28 = *(int *)(*local_3e8 + 4 + (longlong)iVar28 * 0x20);
                      if (((((iVar28 == 0) || (uVar23 = *puVar13, (int)uVar23 < 0)) ||
                           (DAT_14c9647dc <= (int)uVar23)) ||
                          ((lVar22 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8),
                           lVar22 == 0 || (*(int *)(lVar22 + 0x10) != iVar28)))) ||
                         (((*(uint *)(lVar22 + 8) & 0x10200000) != 0 ||
                          ((longlong)(int)puVar13[4] == 0)))) {
LAB_1441386f3:
                        puVar14 = (undefined8 *)FUN_14001cc68(0x10,0x10);
                        *puVar14 = 0;
                        puVar14[1] = *(undefined8 *)puVar13;
                        if (puVar14 != (undefined8 *)0x0) {
                          *local_3a8 = puVar14;
                          local_3a8 = puVar14;
                        }
                      }
                      else {
                        lVar22 = 0;
                        cVar8 = '\0';
                        do {
                          cVar8 = (cVar8 + '\x01') -
                                  (*(ulonglong *)(local_3d0 + 0x78) <
                                  (ulonglong)
                                  (lVar27 - *(longlong *)(*(longlong *)(puVar13 + 2) + lVar22)));
                          lVar22 = lVar22 + 8;
                        } while ((longlong)(int)puVar13[4] * 8 != lVar22);
                        if (cVar8 == '\0') goto LAB_1441386f3;
                      }
                      uVar25 = uVar25 & ~(uint)uVar30;
                      puVar13 = *(uint **)(local_3d8 + 0xc90);
                      if (*(uint **)(local_3d8 + 0xc90) == (uint *)0x0) {
                        puVar13 = local_3e0;
                      }
                      iVar4 = *(int *)(local_3d8 + 0xc98);
                      iVar28 = (int)uVar20;
                      lVar22 = (longlong)iVar28;
                      uVar23 = puVar13[lVar22] & uVar25;
                      if (uVar23 == 0) {
                        iVar16 = iVar4 + 0x1e;
                        if (-1 < iVar4 + -1) {
                          iVar16 = iVar4 + -1;
                        }
                        iVar16 = iVar16 >> 5;
                        iVar15 = iVar15 + 0x20;
                        iVar17 = iVar16;
                        if (iVar16 < iVar28) {
                          iVar17 = iVar28;
                        }
                        if (iVar28 < iVar16) {
                          lVar21 = 0;
                          do {
                            uVar23 = puVar13[lVar22 + lVar21 + 1];
                            if (uVar23 != 0) {
                              uVar20 = (ulonglong)(iVar28 + (int)lVar21 + 1);
                              uVar25 = 0xffffffff;
                              goto LAB_1441387b7;
                            }
                            iVar15 = iVar15 + 0x20;
                            lVar21 = lVar21 + 1;
                          } while (iVar17 - lVar22 != lVar21);
                          uVar25 = 0xffffffff;
                          iVar28 = iVar17;
                        }
                        uVar20 = (ulonglong)(iVar28 + 1);
                        iVar28 = iVar4;
                      }
                      else {
LAB_1441387b7:
                        uVar30 = (ulonglong)(-uVar23 & uVar23);
                        uVar1 = uVar30 * 2 + 1;
                        lVar22 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                          }
                        }
                        iVar28 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                        if (iVar4 <= iVar28) {
                          iVar28 = iVar4;
                        }
                      }
                    } while (iVar28 != iVar9);
                  }
                }
                else {
                  puVar13 = *(uint **)(lVar22 + 0xc90);
                  if (*(uint **)(lVar22 + 0xc90) == (uint *)0x0) {
                    puVar13 = local_3e0;
                  }
                  uVar25 = *puVar13;
                  if (uVar25 != 0) {
                    uVar20 = 0;
LAB_144138603:
                    uVar30 = (ulonglong)(-uVar25 & uVar25);
                    uVar1 = uVar30 * 2 + 1;
                    lVar22 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                      }
                    }
                    iVar28 = (iVar15 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
                    if (iVar9 <= iVar28) {
                      iVar28 = iVar9;
                    }
                    goto LAB_144138626;
                  }
                  iVar28 = iVar9 + 0x1e;
                  if (-1 < iVar9 + -1) {
                    iVar28 = iVar9 + -1;
                  }
                  uVar20 = 0;
                  uVar30 = (ulonglong)(uint)(iVar28 >> 5);
                  if (iVar28 >> 5 < 1) {
                    uVar30 = uVar20;
                  }
                  iVar15 = 0;
                  while (uVar30 != uVar20) {
                    iVar15 = iVar15 + 0x20;
                    uVar25 = puVar13[uVar20 + 1];
                    uVar20 = uVar20 + 1;
                    if (uVar25 != 0) goto LAB_144138603;
                  }
                }
                plVar31 = local_3e8;
                puVar7 = (undefined8 *)*puVar19;
                puVar14 = puVar19;
                if ((undefined8 *)*puVar19 != (undefined8 *)0x0) {
                  do {
                    puVar14 = puVar7;
                    uVar18 = puVar14[1];
                    puVar14[1] = 0;
                    if (puVar19 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                    FUN_14129a540(plVar31,uVar18);
                    puVar7 = (undefined8 *)*puVar14;
                    puVar19 = puVar14;
                    if ((undefined8 *)*puVar14 == (undefined8 *)0x0) goto LAB_144138671;
                  } while( true );
                }
                while (puVar14 != (undefined8 *)0x0) {
LAB_144138671:
                  puVar19 = (undefined8 *)*puVar14;
                  FUN_1400020a8(puVar14);
                  puVar14 = puVar19;
                }
                FUN_145829d56(local_3a0);
              }
              FUN_140d17bd8(&local_378);
            }
            break;
          }
          lVar32 = lVar32 + 0x58;
        } while (lVar32 != local_3b8);
      }
    }
  }
LAB_144137b77:
  if ((local_60 ^ (ulonglong)auStack_458) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144138a2e FUN_144138a2e body=29 status=ok
// SIG undefined FUN_144138a2e(void)

undefined8 FUN_144138a2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144138bca FUN_144138bca body=93 status=ok
// SIG undefined FUN_144138bca(void)

void FUN_144138bca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144138c28 FUN_144138c28 body=93 status=ok
// SIG undefined FUN_144138c28(void)

void FUN_144138c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144138c86 FUN_144138c86 body=126 status=ok
// SIG undefined FUN_144138c86(void)

void FUN_144138c86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144138cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144138d0e FUN_144138d0e body=269 status=ok
// SIG undefined FUN_144138d0e(void)

undefined8 FUN_144138d0e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144138e15;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144138e15;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144138e15:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144138dc9;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144138e1c(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144138dc9;
    }
  }
  uVar6 = 0;
LAB_144138dc9:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144138e1c FUN_144138e1c body=667 status=ok
// SIG undefined FUN_144138e1c(void)

void FUN_144138e1c(uint *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  if ((((param_1[1] == 0) || (uVar7 = *param_1, (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7))
     || (((plVar6 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])) ||
         ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) {
    return;
  }
  if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
    lVar11 = *plVar6;
  }
  else {
    lVar11 = 0;
  }
  lVar1 = lVar11 + 0x5c60;
  iVar2 = *(int *)(lVar11 + 0x5ca8);
  if (1 < iVar2) {
    FUN_1418c85f6(lVar1,0);
    *(undefined4 *)(lVar11 + 0x5ca8) = 1;
    FUN_1457c2e2a(lVar1);
    return;
  }
  lVar4 = lVar11 + 0x5c98;
  if (*(longlong *)(lVar11 + 0x5ca0) != 0) {
    lVar4 = *(longlong *)(lVar11 + 0x5ca0);
  }
  iVar12 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar12 = iVar2;
  }
  if (*(int *)(lVar11 + 0x5c68) - *(int *)(lVar11 + 0x5c94) < iVar12 >> 2) {
    iVar2 = *(int *)(lVar11 + 0x5c88);
    if (iVar2 != 0) {
      puVar14 = *(uint **)(lVar11 + 0x5c80);
      if (*(uint **)(lVar11 + 0x5c80) == (uint *)0x0) {
        puVar14 = (uint *)(lVar11 + 0x5c70);
      }
      uVar7 = *puVar14;
      if (uVar7 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar17 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar17 = uVar13;
        }
        iVar12 = 0;
        do {
          if (uVar17 == uVar13) goto LAB_144138eeb;
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar14[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar13 = 0;
        iVar12 = 0;
      }
      uVar15 = (ulonglong)(-uVar7 & uVar7);
      uVar17 = uVar15 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar16 = (iVar12 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar16 < iVar2) {
        uVar7 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar4 + (longlong)
                    *(int *)(*(longlong *)(lVar11 + 0x5c60) + 0x7c + (longlong)iVar16 * 0x80) * 4) =
               0xffffffff;
          uVar7 = ~(uint)uVar15 & uVar7;
          puVar14 = *(uint **)(lVar11 + 0x5c80);
          if (*(uint **)(lVar11 + 0x5c80) == (uint *)0x0) {
            puVar14 = (uint *)(lVar11 + 0x5c70);
          }
          iVar3 = *(int *)(lVar11 + 0x5c88);
          iVar16 = (int)uVar13;
          lVar5 = (longlong)iVar16;
          uVar8 = puVar14[lVar5] & uVar7;
          if (uVar8 == 0) {
            iVar9 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar9 = iVar3 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar16) {
              iVar10 = iVar16;
            }
            if (iVar16 < iVar9) {
              lVar18 = 0;
              do {
                uVar8 = puVar14[lVar5 + lVar18 + 1];
                if (uVar8 != 0) {
                  uVar13 = (ulonglong)(iVar16 + (int)lVar18 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_144139063;
                }
                iVar12 = iVar12 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar10 - lVar5 != lVar18);
              uVar7 = 0xffffffff;
              lVar5 = (longlong)iVar10;
            }
            uVar13 = lVar5 + 1U & 0xffffffff;
            iVar16 = iVar3;
          }
          else {
LAB_144139063:
            uVar15 = (ulonglong)(-uVar8 & uVar8);
            uVar17 = uVar15 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar16 = (iVar12 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar16) {
              iVar16 = iVar3;
            }
          }
        } while (iVar16 != iVar2);
      }
    }
  }
  else if (iVar2 == 1) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar5 * 4) = 0xffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar11 + 0x5ca8));
  }
LAB_144138eeb:
  FUN_1418c85f6(lVar1,0);
  return;
}



// FUNCTION 1441390b8 FUN_1441390b8 body=64 status=ok
// SIG undefined FUN_1441390b8(void)

undefined8 * FUN_1441390b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b96d590;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144139276 FUN_144139276 body=126 status=ok
// SIG undefined FUN_144139276(void)

void FUN_144139276(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1441392f4 FUN_1441392f4 body=126 status=ok
// SIG undefined FUN_1441392f4(void)

void FUN_1441392f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96d590;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 144139372 FUN_144139372 body=164 status=ok
// SIG undefined FUN_144139372(void)

void FUN_144139372(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96d590;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144139406. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144139416 FUN_144139416 body=20 status=ok
// SIG undefined FUN_144139416(void)

undefined8 FUN_144139416(longlong param_1)

{
  FUN_144139538(param_1 + 0x20);
  return 0;
}



// FUNCTION 14413942a FUN_14413942a body=269 status=ok
// SIG undefined FUN_14413942a(void)

undefined8 FUN_14413942a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144139531;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144139531;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144139531:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441394e5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144139538(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_1441394e5;
    }
  }
  uVar6 = 0;
LAB_1441394e5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144139538 FUN_144139538 body=171 status=ok
// SIG undefined FUN_144139538(void)

void FUN_144139538(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((((((*param_1 != 0) && (plVar4 = (longlong *)param_1[1], plVar4 != (longlong *)0x0)) &&
        (0 < (int)plVar4[1])) &&
       ((*(int *)((longlong)param_1 + 0x14) != 0 &&
        (uVar3 = *(uint *)(param_1 + 2), -1 < (int)uVar3)))) &&
      (((int)uVar3 < DAT_14c9647dc &&
       ((lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar7 != 0 &&
        (*(int *)(lVar7 + 0x10) == *(int *)((longlong)param_1 + 0x14))))))) &&
     ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        FUN_146625e4e(0);
        return;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    FUN_146625e4e(*param_1);
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
                    /* WARNING: Could not recover jumptable at 0x0001441395d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441395ee FUN_1441395ee body=91 status=ok
// SIG undefined FUN_1441395ee(void)

bool FUN_1441395ee(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14413961e;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14413961e:
  return lVar6 == param_2;
}



// FUNCTION 14413964a FUN_14413964a body=24 status=ok
// SIG undefined FUN_14413964a(void)

void FUN_14413964a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b8f1450;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}



// FUNCTION 144139662 FUN_144139662 body=29 status=ok
// SIG undefined FUN_144139662(void)

undefined8 FUN_144139662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144139694 FUN_144139694 body=85 status=ok
// SIG undefined FUN_144139694(void)

void FUN_144139694(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96db10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96daa0;
  return;
}



// FUNCTION 1441396ea FUN_1441396ea body=85 status=ok
// SIG undefined FUN_1441396ea(void)

void FUN_1441396ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b96db10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96daa0;
  return;
}



// FUNCTION 144139740 FUN_144139740 body=118 status=ok
// SIG undefined FUN_144139740(void)

void FUN_144139740(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b96db10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96daa0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441397a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441397b6 FUN_1441397b6 body=75 status=ok
// SIG undefined FUN_1441397b6(void)

void FUN_1441397b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_FUN_14b8f1450;
  *(undefined1 *)((longlong)puVar1 + 0x14) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



// FUNCTION 144139806 FUN_144139806 body=91 status=ok
// SIG undefined FUN_144139806(void)

bool FUN_144139806(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_144139836;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_144139836:
  return lVar6 == param_2;
}



// FUNCTION 144139862 FUN_144139862 body=45 status=ok
// SIG undefined FUN_144139862(void)

void FUN_144139862(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_1418e4a76();
  if (cVar1 != '\0') {
    return;
  }
  FUN_148af486a(param_3,param_1);
  return;
}



// FUNCTION 144139896 FUN_144139896 body=12 status=ok
// SIG undefined FUN_144139896(void)

void FUN_144139896(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014413989f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441398a2 FUN_1441398a2 body=57 status=ok
// SIG undefined FUN_1441398a2(void)

undefined8 * FUN_1441398a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b96e190;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441398dc FUN_1441398dc body=394 status=ok
// SIG undefined FUN_1441398dc(void)

void FUN_1441398dc(longlong *param_1,byte *param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  wchar_t *pwVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (longlong *)0x0) {
LAB_144139918:
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_50 = local_38;
      local_38[0] = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147f6f09d;
      local_60 = &LAB_146201c25;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000006;
      local_80 = 8;
      local_88 = 0x480;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    plVar1 = DAT_14cb253f8;
    lVar7 = DAT_14cb253f8[0x22];
    if (lVar7 == 0) {
      (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
      lVar7 = plVar1[0x22];
      if (lVar7 == 0) goto LAB_1441399a9;
    }
    if ((longlong)*(int *)(lVar7 + 0x108) != 0) {
      lVar6 = *(longlong *)(lVar7 + 0x100);
      lVar7 = (longlong)*(int *)(lVar7 + 0x108) * 0x30;
      uVar5 = 0;
      do {
        bVar2 = FUN_1418e4a76(lVar6);
        uVar5 = uVar5 + bVar2;
        lVar6 = lVar6 + 0x30;
        lVar7 = lVar7 + -0x30;
      } while (lVar7 != 0);
      if (1 < uVar5) goto LAB_1441399a9;
    }
    pwVar4 = L"NoOptions";
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x328))();
    if (iVar3 == 0) goto LAB_144139918;
    pwVar4 = L"NotPrimaryPlayer";
  }
  FUN_140056680(local_38,pwVar4);
  *param_2 = *param_2 & 0xfe;
  if (local_38[0] != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1441399a9:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144139a68 FUN_144139a68 body=741 status=ok
// SIG undefined FUN_144139a68(void)

void FUN_144139a68(longlong *param_1,byte *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  wchar_t **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c872bf0 == '\0') {
    cVar1 = FUN_140b3f358();
    if ((cVar1 != '\0') || ((DAT_14c872bf2 & 1) != 0)) goto LAB_144139af5;
    if (param_1 == (longlong *)0x0) {
      pcVar6 = "InvalidLocalPlayer";
      goto LAB_144139b05;
    }
    if ((param_1[0xf] == 0) ||
       (plVar3 = *(longlong **)(param_1[0xf] + 0x80), plVar3 == (longlong *)0x0)) {
LAB_144139aec:
      pcVar6 = "InvalidGameInstance";
    }
    else {
      if (DAT_14cb5e538 == 0) {
        local_70 = &local_38;
        local_38 = 
        L"襉䣐쪉腈Á\x01\xe900\xf2d4ﻸ坁噁坖䡓\xec83䰰캉襈䣗쮉譈അ\xf41c䠊\xe031襈⑄䠨䲍․襌䠁ᖍ剞ऒ끁\xe801⣦＜삄浵赈༕ቔ䠉䲍․끁\xe801⣎＜삄屵赈㴕ቒ䠉䲍․끁\xe801⢶＜삄䭵赈㤕ቒ䠉䲍․끁\xe801⢞＜삄㩵譈⑌䠨\xe131㭈錍\xf41b甊ㄎ䣀쒃嬰幟幁彁\xe8c3藞͜료ʠ"
        ;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1417ad04a;
        local_78 = &LAB_1486a7af7;
        local_80 = &LAB_1464e1631;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x1000000c;
        local_a0 = 8;
        local_a8 = 0x420;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      }
      if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) !=
          DAT_14cb5e538 + 0x30)) goto LAB_144139aec;
      cVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
      if (cVar1 == '\x05') {
        lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
          lVar2 = FUN_145c548d8();
          if (lVar2 != 0) {
            plVar3 = (longlong *)FUN_140773fe2();
            if (plVar3 != (longlong *)0x0) {
              uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
              lVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3,(int)param_1[0x1c],uVar4);
              if (lVar5 != 0) {
                cVar1 = FUN_143f035d8(lVar2,lVar5);
                if (cVar1 == '\0') {
                  local_38 = L"InvalidShiftAccount";
                  local_30 = 0x13;
                  FUN_1446e940c(local_4c,&local_38);
                  local_38 = L"OakCrossSave";
                  local_30 = 0xc;
                  FUN_1446e940c(local_50,&local_38);
                  local_38 = 
                  L"A valid SHiFT account with multiple linked platforms is required to use cross-platform saves."
                  ;
                  local_30 = 0x5d;
                  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
                  FUN_1418c22aa(param_2,local_48);
                  if (local_48[0] != (longlong *)0x0) {
                    (**(code **)(*local_48[0] + 0x10))();
                  }
                }
                goto LAB_144139b25;
              }
            }
            pcVar6 = "InvalidShiftSession";
            goto LAB_144139b05;
          }
        }
        pcVar6 = "InvalidCrossSaveManager";
      }
      else {
        pcVar6 = "NotInMainMenuPhase";
      }
    }
  }
  else {
LAB_144139af5:
    pcVar6 = "CrossSaveDisabled";
  }
LAB_144139b05:
  FUN_1400b22c2(&local_38,pcVar6);
  *param_2 = *param_2 & 0xfe;
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144139b25:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144139d4e FUN_144139d4e body=29 status=ok
// SIG undefined FUN_144139d4e(void)

undefined8 FUN_144139d4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144139d80 FUN_144139d80 body=99 status=ok
// SIG undefined FUN_144139d80(void)

void FUN_144139d80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 144139de4 FUN_144139de4 body=99 status=ok
// SIG undefined FUN_144139de4(void)

void FUN_144139de4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e350;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 144139e48 FUN_144139e48 body=132 status=ok
// SIG undefined FUN_144139e48(void)

void FUN_144139e48(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e3fb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e350;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144139ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144139ed6 FUN_144139ed6 body=20 status=ok
// SIG undefined FUN_144139ed6(void)

undefined1 FUN_144139ed6(longlong param_1)

{
  FUN_144139eea(param_1 + 0x18);
  return 1;
}



// FUNCTION 144139eea FUN_144139eea body=125 status=ok
// SIG undefined FUN_144139eea(void)

void FUN_144139eea(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       (((*(uint *)(puVar3 + 1) & 0x10200000) == 0 && (param_1[2] != 0xffffffff)))) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      lVar2 = FUN_145da44aa(uVar4);
      if (lVar2 != 0) {
        FUN_146142a30(lVar2,param_1[2]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144139f68 FUN_144139f68 body=29 status=ok
// SIG undefined FUN_144139f68(void)

undefined8 FUN_144139f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144139f9a FUN_144139f9a body=99 status=ok
// SIG undefined FUN_144139f9a(void)

void FUN_144139f9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 144139ffe FUN_144139ffe body=99 status=ok
// SIG undefined FUN_144139ffe(void)

void FUN_144139ffe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e3fb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e3c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 14413a062 FUN_14413a062 body=132 status=ok
// SIG undefined FUN_14413a062(void)

void FUN_14413a062(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e3fb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e3c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014413a0d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14413a0f0 FUN_14413a0f0 body=20 status=ok
// SIG undefined FUN_14413a0f0(void)

undefined1 FUN_14413a0f0(longlong param_1)

{
  FUN_14413a104(param_1 + 0x18);
  return 1;
}



// FUNCTION 14413a104 FUN_14413a104 body=125 status=ok
// SIG undefined FUN_14413a104(void)

void FUN_14413a104(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       (((*(uint *)(puVar3 + 1) & 0x10200000) == 0 && (param_1[2] != 0xffffffff)))) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      lVar2 = FUN_145da44aa(uVar4);
      if (lVar2 != 0) {
        FUN_146142a30(lVar2,param_1[2]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14413a182 FUN_14413a182 body=31 status=ok
// SIG undefined FUN_14413a182(void)

undefined8 FUN_14413a182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14413a290 FUN_14413a290 body=29 status=ok
// SIG undefined FUN_14413a290(void)

undefined8 FUN_14413a290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14413a436 FUN_14413a436 body=101 status=ok
// SIG undefined FUN_14413a436(void)

void FUN_14413a436(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413a49c FUN_14413a49c body=101 status=ok
// SIG undefined FUN_14413a49c(void)

void FUN_14413a49c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413a502 FUN_14413a502 body=134 status=ok
// SIG undefined FUN_14413a502(void)

void FUN_14413a502(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e640;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014413a579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14413a5ea FUN_14413a5ea body=295 status=ok
// SIG undefined FUN_14413a5ea(void)

undefined8 FUN_14413a5ea(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14413a70a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14413a70a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14413a70a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14413a6bb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_14413a6bb;
    }
  }
  uVar6 = 0;
LAB_14413a6bb:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413a712 FUN_14413a712 body=29 status=ok
// SIG undefined FUN_14413a712(void)

undefined8 FUN_14413a712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14413a8ae FUN_14413a8ae body=101 status=ok
// SIG undefined FUN_14413a8ae(void)

void FUN_14413a8ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413a914 FUN_14413a914 body=101 status=ok
// SIG undefined FUN_14413a914(void)

void FUN_14413a914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b96e720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14413a97a FUN_14413a97a body=134 status=ok
// SIG undefined FUN_14413a97a(void)

void FUN_14413a97a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b96e720;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014413a9f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14413aa62 FUN_14413aa62 body=348 status=ok
// SIG undefined FUN_14413aa62(void)

undefined8 FUN_14413aa62(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14413abb8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14413abb8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14413abb8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_14413ab18:
    uVar5 = 0;
    goto LAB_14413ab68;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar2 < 0) goto LAB_14413ab68;
  if (DAT_14c9647dc <= (int)uVar2) goto LAB_14413ab68;
  lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_14413ab18;
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_14413ab9f:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_14413ab9f;
      uVar5 = *puVar6;
    }
  }
  FUN_1441245a6(*(undefined8 *)(param_1 + 0x20),uVar5);
  uVar5 = 1;
LAB_14413ab68:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413abbf FUN_14413abbf body=5316 status=ok
// SIG undefined FUN_14413abbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14413abbf(void)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  char *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8e80 = (ulonglong)uVar2;
  _DAT_14cbc8e90 = &LAB_144118960;
  _DAT_14cbc8e98 = 0x4625a000;
  DAT_14cbc8e9c = 1;
  DAT_14cbc8e88 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc8e88;
  atexit((_func_5014 *)&LAB_144118965);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbc8ea8);
  if (cVar1 == '\0') {
    _DAT_14cbc8ea8 = 0;
    uRam000000014cbc8eb0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbc8eb8 = 0x47efffffe0000000;
  _DAT_14cbc8ec0 = 0x47efffffe0000000;
  _DAT_14cbc8ec8 = 0x47efffffe0000000;
  _DAT_14cbc8ed0 = 0x47efffffe0000000;
  _DAT_14cbc8ed8 = 0x47efffffe0000000;
  _DAT_14cbc8ee0 = 0x47efffffe0000000;
  _DAT_14cbc8ee8 = 0x47efffffe0000000;
  _DAT_14cbc8ef0 = 0x47efffffe0000000;
  local_a8 = "Cash";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8ef8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbc8f00,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144118999);
  local_a8 = "bone";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f14 = 0;
  FUN_14052b5e0(&DAT_14cbc8f10,"PlayerAwareness",0);
  _DAT_14cbc8f20 = "PlayerAwareness";
  local_a8 = "basic";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f28 = (ulonglong)uVar2;
  local_a8 = "challenge";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f30 = (ulonglong)uVar2;
  local_a8 = "online";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f38 = (ulonglong)uVar2;
  local_a8 = "social";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f40 = (ulonglong)uVar2;
  local_a8 = "alert";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f48 = (ulonglong)uVar2;
  local_a8 = "photo_mode";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f50 = (ulonglong)uVar2;
  local_a8 = "generic_task";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f58 = (ulonglong)uVar2;
  local_a8 = "mission";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f60 = (ulonglong)uVar2;
  local_a8 = "mail";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f68 = (ulonglong)uVar2;
  local_a8 = "respawn";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f70 = (ulonglong)uVar2;
  local_a8 = "tutorial";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f78 = (ulonglong)uVar2;
  local_a8 = "special_notification";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f80 = (ulonglong)uVar2;
  local_a8 = "generic_notification";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f88 = (ulonglong)uVar2;
  local_a8 = "vault_card";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f90 = (ulonglong)uVar2;
  local_a8 = "ONLINE_MESSAGE";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8f98 = (ulonglong)uVar2;
  local_a8 = "INGAME_MESSAGE";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8fa0 = (ulonglong)uVar2;
  local_a8 = "NOTIFICATION_MESSAGE";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8fa8 = (ulonglong)uVar2;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  uStack_a0 = 0x15;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8fb0 = (ulonglong)uVar2;
  local_a8 = "collectible";
  uStack_a0 = 0xb;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc8fb8 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc8fc0,L"UNSET",1);
  local_a8 = "init";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "update";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "config_update";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "deinit";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbc8fc8,L"Party",1);
  FUN_1446f470e(&DAT_14cbc8fd0,&DAT_149e063b2);
  ram0x00014cbc8fdc = 0;
  FUN_14052b5e0(&DAT_14cbc8fd8,"echoprefs");
  _DAT_14cbc8fe8 = "echoprefs";
  _DAT_14cbc8ff0 = 0;
  uRam000000014cbc8ff8 = 0;
  _DAT_14cbc9000 = 0;
  DAT_14cbc9008 = 0;
  uRam000000014cbc9010 = 0;
  FUN_1446ddda2(&DAT_14cbc8ff0,"oak.echoprefs",0);
  atexit((_func_5014 *)&LAB_1441189aa);
  DAT_14cbc9078 = 0;
  _DAT_14cbc9080 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1441286b6;
  local_a8 = &DAT_14011fc1e;
  FUN_146102e9a(&local_a8);
  atexit((_func_5014 *)&LAB_1441189e4);
  local_a8 = "Use";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9110 = (ulonglong)uVar2;
  local_a8 = "Sight";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9118 = (ulonglong)uVar2;
  local_a8 = "TargetLock";
  uStack_a0 = 10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9120 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbc9128,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441189e9);
  FUN_140056680(&DAT_14cbc9138,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441189fa);
  FUN_140056680(&DAT_14cbc9148,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144118a0b);
  FUN_140056680(&DAT_14cbc9158,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144118a1c);
  FUN_1446f470e(&DAT_14cbc9168,L"LIMB_GORED",1);
  _DAT_14cbc9170 = 0x4072c00000000000;
  _DAT_14cbc9178 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbc9180,L"body",1);
  FUN_1446f470e(&DAT_14cbc9188,L"title_card",1);
  local_a8 = "Standard";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9190 = (ulonglong)uVar2;
  local_a8 = "PrologueSkip";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9198 = (ulonglong)uVar2;
  local_a8 = "UltimateVaultHunterSkip";
  uStack_a0 = 0x17;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc91a0 = (ulonglong)uVar2;
  local_a8 = "SkipToDLC_Cowbell";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc91a8 = (ulonglong)uVar2;
  local_a8 = "SkipToDLC_Harmonica";
  uStack_a0 = 0x13;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc91b0 = (ulonglong)uVar2;
  local_a8 = (char *)CONCAT44(local_a8._4_4_,1);
  local_b8 = 0;
  FUN_14078dbce(&DAT_14cbc91b8,L"gbx.Puppet.Scheme",&local_a8);
  atexit(FUN_144119ed9);
  _DAT_14cbc91d0 = 0;
  uRam000000014cbc91d8 = 0;
  _DAT_14cbc91e0 = 0;
  DAT_14cbc91e8 = 0;
  uRam000000014cbc91f0 = 0;
  FUN_1446ddda2(&DAT_14cbc91d0,"binding_profiles",0);
  atexit((_func_5014 *)&LAB_14411aded);
  _DAT_14cbc91f8 = 0;
  uRam000000014cbc9200 = 0;
  _DAT_14cbc9208 = 0;
  DAT_14cbc9210 = 0;
  uRam000000014cbc9218 = 0;
  FUN_1446ddda2(&DAT_14cbc91f8,"class_path",0);
  atexit((_func_5014 *)&LAB_14411adfe);
  _DAT_14cbc9220 = 0;
  uRam000000014cbc9228 = 0;
  _DAT_14cbc9230 = 0;
  DAT_14cbc9238 = 0;
  uRam000000014cbc9240 = 0;
  FUN_1446ddda2(&DAT_14cbc9220,"object_path",0);
  atexit((_func_5014 *)&LAB_14411ae0f);
  _DAT_14cbc9248 = 0;
  uRam000000014cbc9250 = 0;
  _DAT_14cbc9258 = 0;
  DAT_14cbc9260 = 0;
  uRam000000014cbc9268 = 0;
  FUN_1446ddda2(&DAT_14cbc9248,"profile_identifier",0);
  atexit((_func_5014 *)&LAB_14411ae20);
  _DAT_14cbc9270 = 0;
  uRam000000014cbc9278 = 0;
  _DAT_14cbc9280 = 0;
  DAT_14cbc9288 = 0;
  uRam000000014cbc9290 = 0;
  FUN_1446ddda2(&DAT_14cbc9270,"dirty_mappings",0);
  atexit((_func_5014 *)&LAB_14411ae31);
  _DAT_14cbc9298 = 0;
  uRam000000014cbc92a0 = 0;
  _DAT_14cbc92a8 = 0;
  DAT_14cbc92b0 = 0;
  uRam000000014cbc92b8 = 0;
  FUN_1446ddda2(&DAT_14cbc9298,"mapping_name",0);
  atexit((_func_5014 *)&LAB_14411ae42);
  _DAT_14cbc92c0 = 0;
  uRam000000014cbc92c8 = 0;
  _DAT_14cbc92d0 = 0;
  DAT_14cbc92d8 = 0;
  uRam000000014cbc92e0 = 0;
  FUN_1446ddda2(&DAT_14cbc92c0,"current_key_name",0);
  atexit((_func_5014 *)&LAB_14411ae53);
  _DAT_14cbc92e8 = 0;
  uRam000000014cbc92f0 = 0;
  _DAT_14cbc92f8 = 0;
  DAT_14cbc9300 = 0;
  uRam000000014cbc9308 = 0;
  FUN_1446ddda2(&DAT_14cbc92e8,"hardware_device_input_class_name",0);
  atexit((_func_5014 *)&LAB_14411ae64);
  _DAT_14cbc9310 = 0;
  uRam000000014cbc9318 = 0;
  _DAT_14cbc9320 = 0;
  DAT_14cbc9328 = 0;
  uRam000000014cbc9330 = 0;
  FUN_1446ddda2(&DAT_14cbc9310,"hardware_device_hardware_device_identifier",0);
  atexit((_func_5014 *)&LAB_14411ae75);
  _DAT_14cbc9338 = 0;
  uRam000000014cbc9340 = 0;
  _DAT_14cbc9348 = 0;
  DAT_14cbc9350 = 0;
  uRam000000014cbc9358 = 0;
  FUN_1446ddda2(&DAT_14cbc9338,"hardware_device_primary_device_type",0);
  atexit((_func_5014 *)&LAB_14411ae86);
  _DAT_14cbc9360 = 0;
  uRam000000014cbc9368 = 0;
  _DAT_14cbc9370 = 0;
  DAT_14cbc9378 = 0;
  uRam000000014cbc9380 = 0;
  FUN_1446ddda2(&DAT_14cbc9360,"hardware_device_supported_features_mask",0);
  atexit((_func_5014 *)&LAB_14411ae97);
  _DAT_14cbc9388 = 0;
  uRam000000014cbc9390 = 0;
  _DAT_14cbc9398 = 0;
  DAT_14cbc93a0 = 0;
  uRam000000014cbc93a8 = 0;
  FUN_1446ddda2(&DAT_14cbc9388,&DAT_14b411478,0);
  atexit((_func_5014 *)&LAB_14411aea8);
  _DAT_14cbc93b0 = 0;
  uRam000000014cbc93b8 = 0;
  _DAT_14cbc93c0 = 0;
  DAT_14cbc93c8 = 0;
  uRam000000014cbc93d0 = 0;
  FUN_1446ddda2(&DAT_14cbc93b0,"localized",0);
  atexit((_func_5014 *)&LAB_14411aeb9);
  FUN_1458e052c(&DAT_14cbc99d0);
  _DAT_14cbc99d0 = &PTR_FUN_14b96b6e0;
  memset(&DAT_14cbc99d8,0,0x458);
  _DAT_14cbc93dc = 0;
  _DAT_14cbc93e0 = 0;
  FUN_14052b5e0(&DAT_14cbc93d8,"pending_consumes");
  _DAT_14cbc93e8 = "pending_consumes";
  _DAT_14cbc93f4 = 0;
  _DAT_14cbc93f8 = 0;
  FUN_14052b5e0(&DAT_14cbc93f0,"entitlements",0);
  _DAT_14cbc9400 = "entitlements";
  local_a8 = "entitlements";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc9408 = (ulonglong)uVar2;
  _DAT_14cbc9410 = 0;
  uRam000000014cbc9418 = 0;
  _DAT_14cbc9420 = 0;
  DAT_14cbc9428 = 0;
  uRam000000014cbc9430 = 0;
  FUN_1446ddda2(&DAT_14cbc9410,"entitlements",0);
  atexit((_func_5014 *)&LAB_14411e035);
  _DAT_14cbc9438 = 0;
  uRam000000014cbc9440 = 0;
  _DAT_14cbc9448 = 0;
  DAT_14cbc9450 = 0;
  uRam000000014cbc9458 = 0;
  FUN_1446ddda2(&DAT_14cbc9438,"oak.entitlements",0);
  atexit((_func_5014 *)&LAB_14411e046);
  local_a8 = "Use";
  uStack_a0 = 3;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9460 = (ulonglong)uVar2;
  local_a8 = "StopUse";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9468 = (ulonglong)uVar2;
  local_a8 = "SecondaryUse";
  uStack_a0 = 0xc;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9470 = (ulonglong)uVar2;
  local_a8 = "StopSecondaryUse";
  uStack_a0 = 0x10;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9478 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbc9480,L"BossFightState");
  local_a8 = "Complete";
  uStack_a0 = 8;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9488 = (ulonglong)uVar2;
  _DAT_14cbc9490 = 0;
  uRam000000014cbc9498 = 0;
  _DAT_14cbc94a0 = 0;
  DAT_14cbc94a8 = 0;
  uRam000000014cbc94b0 = 0;
  FUN_1446ddda2(&DAT_14cbc9490);
  atexit((_func_5014 *)&LAB_14411e057);
  DAT_14cbc9990 = 0;
  _DAT_14cbc9998 = 0;
  _DAT_14cbc99a0 = 2;
  _DAT_14cbc99a4 = 0;
  atexit(FUN_14411eb2b);
  _DAT_14cbc94d8 = &LAB_14411eb5c;
  _DAT_14cbc94e0 = 0x461d3000;
  DAT_14cbc94e4 = 1;
  DAT_14cbc94d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbc94d0;
  atexit((_func_5014 *)&LAB_14411eb61);
  DAT_14cbc9550 = (longlong *)0x0;
  _DAT_14cbc9558 = 0;
  plVar3 = (longlong *)FUN_140595974(0x2e8,0);
  *plVar3 = (longlong)(plVar3 + 0x1f);
  plVar3[0x1f] = (longlong)(plVar3 + 0x3e);
  plVar3[0x3e] = (longlong)DAT_14cbc9550;
  DAT_14cbc9558 = DAT_14cbc9558 + 3;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1441395e4;
  local_a8 = &DAT_14011fc1e;
  DAT_14cbc9550 = plVar3;
  FUN_146103630(&local_a8);
  atexit((_func_5014 *)&LAB_14411ebbe);
  DAT_14cbc95e0._4_4_ = 0;
  DAT_14cbc95e8 = 0;
  FUN_14052b5e0(&DAT_14cbc95e0,"Faction",0);
  _DAT_14cbc95f0 = "Faction";
  FUN_1446f470e(&DAT_14cbc95f8,L"LightColor");
  local_a8 = "Weapon";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc9600 = (ulonglong)uVar2;
  local_a8 = "Shield";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc9608 = (ulonglong)uVar2;
  local_a8 = "GrenadeGadget";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc9610 = (ulonglong)uVar2;
  local_a8 = "RepairKit";
  uStack_a0 = 9;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbc9618 = (ulonglong)uVar2;
  DAT_14cbc9620._4_4_ = 0;
  DAT_14cbc9628 = 0;
  FUN_14052b5e0(&DAT_14cbc9620,"ozonegame",0);
  _DAT_14cbc9630 = "ozonegame";
  DAT_14cbc9638._4_4_ = 0;
  DAT_14cbc9640 = 0;
  FUN_14052b5e0(&DAT_14cbc9638,"gamemode",0);
  _DAT_14cbc9648 = "gamemode";
  DAT_14cbc9650._4_4_ = 0;
  DAT_14cbc9658 = 0;
  FUN_14052b5e0(&DAT_14cbc9650,"gamemode_opts",0);
  _DAT_14cbc9660 = "gamemode_opts";
  _DAT_14cbc9668 = 0xffffffff;
  _DAT_14cbc966c = 0;
  local_a8 = "Success";
  uStack_a0 = 7;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9670 = (ulonglong)uVar2;
  local_a8 = "Failed";
  uStack_a0 = 6;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc9678 = (ulonglong)uVar2;
  FUN_1466265cc();
  atexit((_func_5014 *)&LAB_144121bdb);
  local_a8 = "Boss_Fight_Name";
  uStack_a0 = 0xf;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight",1);
  _DAT_14cbc9840 = 0;
  local_a8 = "Boss_Fight_Previous_Status";
  uStack_a0 = 0x1a;
  uStack_9c = uStack_9c & 0xffffff00;
  _DAT_14cbc9838 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight",1);
  _DAT_14cbc9850 = 0;
  local_a8 = "Boss_Fight_Current_Status";
  uStack_a0 = 0x19;
  uStack_9c = uStack_9c & 0xffffff00;
  _DAT_14cbc9848 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight",1);
  _DAT_14cbc9860 = 0;
  local_a8 = "Boss_Fight_Duration_S";
  uStack_a0 = 0x15;
  uStack_9c = uStack_9c & 0xffffff00;
  _DAT_14cbc9858 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight",1);
  _DAT_14cbc9870 = 0;
  local_a8 = "Boss_Fight_Duration";
  uStack_a0 = 0x13;
  uStack_9c = uStack_9c & 0xffffff00;
  _DAT_14cbc9868 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight",1);
  _DAT_14cbc9880 = 0;
  local_a8 = "Boss_Fight_Result";
  uStack_a0 = 0x11;
  uStack_9c = uStack_9c & 0xffffff00;
  _DAT_14cbc9878 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight",1);
  _DAT_14cbc9890 = 0;
  local_a8 = "Boss_Fight_Is_Replay";
  uStack_a0 = 0x14;
  uStack_9c = uStack_9c & 0xffffff00;
  _DAT_14cbc9888 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Boss_Fight");
  _DAT_14cbc98a0 = 0;
  local_a8 = "nexus";
  uStack_a0 = 5;
  uStack_9c = uStack_9c & 0xffffff00;
  DAT_14cbc9898 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc98d0 = (ulonglong)uVar2;
  DAT_14cbc98d8 = 0;
  DAT_14cbc98e0 = 0;
  atexit(FUN_144121e9e);
  local_a8 = "HealthBarShown";
  uStack_a0 = 0xe;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc98e8 = (ulonglong)uVar2;
  local_a8 = "RootComponent";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbc98f0 = (ulonglong)uVar2;
  _DAT_14cbc99bc = 0;
  _DAT_14cbc99c0 = 0;
  FUN_14052b5e0(&DAT_14cbc99b8,"Finished",0);
  _DAT_14cbc99c8 = "Finished";
  _DAT_14cbc99b0 = 0;
  LOCK();
  DAT_14cbc99a8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_144121ed9);
  local_a8 = (char *)0xb27e4f0824a91d49;
  uStack_a0 = 0x8cfed3fa;
  uStack_9c = 0x1ba04833;
  _DAT_14cbc98f8 = 0x24a91d49;
  uRam000000014cbc98fc = 0xb27e4f08;
  uRam000000014cbc9900 = 0x8cfed3fa;
  uRam000000014cbc9904 = 0x1ba04833;
  FUN_141005458(&local_a8,0,L"OakBossFight",0);
  atexit((_func_5014 *)&LAB_144121ede);
  DAT_14cbc94b8 = 0;
  _DAT_14cbc94c0 = 0;
  _DAT_14cbc94c8 = 2;
  _DAT_14cbc94cc = 0;
  atexit(FUN_144125534);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c0da FUN_14413c0da body=52 status=ok
// SIG undefined FUN_14413c0da(void)

void FUN_14413c0da(longlong param_1,longlong param_2)

{
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) && (param_2 != 0)) &&
     ((*(char *)(param_1 + 0x178) == '\x03' && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)))) {
    FUN_1441235f0(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 14413c10e FUN_14413c10e body=280 status=ok
// SIG undefined FUN_14413c10e(void)

void FUN_14413c10e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_50 = lVar4;
    FUN_145bfbb3e(local_88);
    lVar2 = local_60;
    lVar4 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    puVar5 = local_80;
LAB_14413c1b1:
    if (puVar5 != local_68) {
      uVar1 = puVar5[2];
      cVar3 = FUN_148d21d08(uVar1,param_1);
      if (cVar3 != '\0') {
        FUN_148d22d5e(uVar1,param_2);
      }
      for (puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5)) {
        lVar6 = FUN_1447210f0(puVar5[2]);
        if (lVar6 == *local_70) goto LAB_14413c1b1;
      }
      puVar5 = (undefined8 *)0x0;
      goto LAB_14413c1b1;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c228 FUN_14413c228 body=280 status=ok
// SIG undefined FUN_14413c228(void)

void FUN_14413c228(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_50 = lVar4;
    FUN_145bfbb3e(local_88);
    lVar2 = local_60;
    lVar4 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    puVar5 = local_80;
LAB_14413c2cb:
    if (puVar5 != local_68) {
      uVar1 = puVar5[2];
      cVar3 = FUN_148d21d08(uVar1,param_1);
      if (cVar3 != '\0') {
        FUN_148d22e94(uVar1,param_2);
      }
      for (puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5)) {
        lVar6 = FUN_1447210f0(puVar5[2]);
        if (lVar6 == *local_70) goto LAB_14413c2cb;
      }
      puVar5 = (undefined8 *)0x0;
      goto LAB_14413c2cb;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c342 FUN_14413c342 body=264 status=ok
// SIG undefined FUN_14413c342(void)

void FUN_14413c342(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar2 = FUN_1447210f0(param_1), lVar2 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_48 = lVar2;
    FUN_145bfbb3e(local_80);
    lVar1 = local_58;
    lVar2 = local_70;
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
    puVar3 = local_78;
LAB_14413c3e3:
    if (puVar3 != local_60) {
      FUN_148d22af6(puVar3[2],param_1,param_2);
      for (puVar3 = (undefined8 *)FUN_145bfbc06(*puVar3); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)FUN_145bfbc06(*puVar3)) {
        lVar4 = FUN_1447210f0(puVar3[2]);
        if (lVar4 == *local_68) goto LAB_14413c3e3;
      }
      puVar3 = (undefined8 *)0x0;
      goto LAB_14413c3e3;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c44c FUN_14413c44c body=264 status=ok
// SIG undefined FUN_14413c44c(void)

void FUN_14413c44c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar2 = FUN_1447210f0(param_1), lVar2 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_48 = lVar2;
    FUN_145bfbb3e(local_80);
    lVar1 = local_58;
    lVar2 = local_70;
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
    puVar3 = local_78;
LAB_14413c4ed:
    if (puVar3 != local_60) {
      FUN_148d22c2a(puVar3[2],param_1,param_2);
      for (puVar3 = (undefined8 *)FUN_145bfbc06(*puVar3); puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)FUN_145bfbc06(*puVar3)) {
        lVar4 = FUN_1447210f0(puVar3[2]);
        if (lVar4 == *local_68) goto LAB_14413c4ed;
      }
      puVar3 = (undefined8 *)0x0;
      goto LAB_14413c4ed;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c556 FUN_14413c556 body=517 status=ok
// SIG undefined FUN_14413c556(void)

void FUN_14413c556(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  undefined8 *local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar3 = FUN_1447210f0(param_1), lVar3 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_a8 = lVar3;
    FUN_145bfbb3e(local_98);
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
    puVar5 = local_90;
    lVar3 = local_88;
    lVar10 = local_70;
joined_r0x00014413c60f:
    if (puVar5 != local_78) {
      lVar6 = puVar5[2];
      cVar2 = FUN_148d21d08(lVar6,param_1);
      if (cVar2 != '\0') {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_148d21d7c(lVar6 + 0x760,&local_a8);
        lVar6 = local_a8;
        lVar11 = (longlong)(int)uStack_a0;
        if (lVar11 != 0) {
          lVar9 = 0;
          local_b8 = lVar10;
          local_b0 = lVar3;
          do {
            uVar1 = *(ulonglong *)(lVar6 + lVar9);
            if (((((uVar1 >> 0x20 != 0) && (uVar7 = (uint)uVar1, -1 < (int)uVar7)) &&
                 (((int)uVar7 < DAT_14c9647dc &&
                  ((plVar8 = (longlong *)
                             ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
                   plVar8 != (longlong *)0x0 && ((int)plVar8[2] == (int)(uVar1 >> 0x20))))))) &&
                ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
               (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)) {
              uVar4 = FUN_14477b072(plVar8,DAT_14cbadd70);
              (**(code **)(*plVar8 + 0x248))(plVar8,uVar4,0);
            }
            lVar9 = lVar9 + 8;
            lVar10 = local_b8;
            lVar3 = local_b0;
          } while (lVar11 * 8 != lVar9);
        }
        if (local_a8 != 0) {
          FUN_1400020a8(local_a8);
        }
      }
      for (puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5)) {
        lVar6 = FUN_1447210f0(puVar5[2]);
        if (lVar6 == *local_80) goto joined_r0x00014413c60f;
      }
      puVar5 = (undefined8 *)0x0;
      goto joined_r0x00014413c60f;
    }
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + -1;
    UNLOCK();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413c75c FUN_14413c75c body=277 status=ok
// SIG undefined FUN_14413c75c(void)

void FUN_14413c75c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_48 = lVar4;
    FUN_145bfbb3e(local_80);
    lVar2 = local_58;
    lVar4 = local_70;
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
    puVar5 = local_78;
LAB_14413c7fc:
    if (puVar5 != local_60) {
      uVar1 = puVar5[2];
      cVar3 = FUN_148d21d08(uVar1,param_1);
      if (cVar3 != '\0') {
        FUN_141362b60(uVar1,2);
      }
      for (puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5)) {
        lVar6 = FUN_1447210f0(puVar5[2]);
        if (lVar6 == *local_68) goto LAB_14413c7fc;
      }
      puVar5 = (undefined8 *)0x0;
      goto LAB_14413c7fc;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c872 FUN_14413c872 body=277 status=ok
// SIG undefined FUN_14413c872(void)

void FUN_14413c872(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) && (*(char *)(param_1 + 0x178) == '\x03')) {
    local_48 = lVar4;
    FUN_145bfbb3e(local_80);
    lVar2 = local_58;
    lVar4 = local_70;
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
    puVar5 = local_78;
LAB_14413c912:
    if (puVar5 != local_60) {
      uVar1 = puVar5[2];
      cVar3 = FUN_148d21d08(uVar1,param_1);
      if (cVar3 != '\0') {
        FUN_141362b60(uVar1,0);
      }
      for (puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)FUN_145bfbc06(*puVar5)) {
        lVar6 = FUN_1447210f0(puVar5[2]);
        if (lVar6 == *local_68) goto LAB_14413c912;
      }
      puVar5 = (undefined8 *)0x0;
      goto LAB_14413c912;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    UNLOCK();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413c988 FUN_14413c988 body=24 status=ok
// SIG undefined FUN_14413c988(void)

undefined4 FUN_14413c988(longlong param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    return CONCAT31((int3)(*(uint *)(param_1 + 8) >> 8),*(undefined1 *)(param_1 + 0x849));
  }
  return 0;
}



// FUNCTION 14413c9a0 FUN_14413c9a0 body=49 status=ok
// SIG undefined FUN_14413c9a0(void)

void FUN_14413c9a0(void)

{
  FUN_144760e21(DAT_14cbca610,DAT_14cbca618);
  if (DAT_14cbca610 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14413c9d1 FUN_14413c9d1 body=49 status=ok
// SIG undefined FUN_14413c9d1(void)

void FUN_14413c9d1(void)

{
  FUN_144760e21(DAT_14cbca7d0,DAT_14cbca7d8);
  if (DAT_14cbca7d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14413ca14 FUN_14413ca14 body=2140 status=ok
// SIG undefined FUN_14413ca14(void)

/* WARNING: Removing unreachable block (ram,0x00014413d18a) */
/* WARNING: Removing unreachable block (ram,0x00014413d195) */
/* WARNING: Removing unreachable block (ram,0x00014413d1a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14413ca14(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *_Src;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong *local_248;
  undefined4 local_240;
  undefined8 *local_238;
  longlong *plStack_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined7 local_218;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined2 uStack_20f;
  undefined1 local_200;
  undefined1 uStack_1ff;
  undefined6 uStack_1fe;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar14 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 == 0) goto LAB_14413ccaf;
    plVar14 = (longlong *)(DAT_14cabd108 + 0x10);
  }
  if ((plVar14 == (longlong *)0x0) || (*(char *)(param_1 + 5) != '\0')) goto LAB_14413ccaf;
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14);
  if (cVar5 != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (((param_1[0xd] == 0) || (param_1[0xe] == 0)) || (*(int *)(param_1[0xe] + 8) < 1)) {
      uVar9 = FUN_1401cb356();
      local_238 = (undefined8 *)0x0;
      plStack_230 = (longlong *)((ulonglong)plStack_230 & 0xffffffff00000000);
      FUN_1446efa72(&local_238,0,3,0x10);
      plStack_230 = (longlong *)CONCAT44(plStack_230._4_4_,3);
      plVar14 = (longlong *)param_1[1];
      if (plVar14 == (longlong *)0x0) {
LAB_14413cbb7:
        *local_238 = &PTR_LAB_149e02020;
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar15 == 0) {
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_238[2] = lVar15;
        *local_238 = &PTR_FUN_14b970f50;
        local_238[3] = 0;
        local_238[4] = 0;
        local_238[5] = FUN_14413d4a8;
      }
      else {
        iVar7 = (int)plVar14[1];
        do {
          if (iVar7 == 0) goto LAB_14413cbb7;
          LOCK();
          iVar4 = (int)plVar14[1];
          bVar16 = iVar7 == iVar4;
          if (bVar16) {
            *(int *)(plVar14 + 1) = iVar7 + 1;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          UNLOCK();
        } while (!bVar16);
        uVar3 = *param_1;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        *local_238 = &PTR_LAB_149e02020;
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar15 == 0) {
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_238[2] = lVar15;
        *local_238 = &PTR_FUN_14b970f50;
        local_238[3] = uVar3;
        local_238[4] = plVar14;
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        local_238[5] = FUN_14413d4a8;
        LOCK();
        plVar12 = plVar14 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        LOCK();
        plVar12 = plVar14 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        LOCK();
        plVar12 = plVar14 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      local_258 = (longlong **)((ulonglong)local_258._4_4_ << 0x20);
      FUN_1405f67fc(uVar9,&local_1e8,&local_238,
                    L"FOakCustomCutsceneMovieState::TickMoviePlayerAvailability");
      param_1[0xd] = local_1e8;
      local_1e8 = 0;
      plVar14 = (longlong *)param_1[0xe];
      param_1[0xe] = local_1e0;
      local_1e0 = (longlong *)0x0;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_1e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1e0 + 0x10))();
          }
        }
      }
      if ((int)plStack_230 != 0) {
        if (local_238 == (undefined8 *)0x0) goto LAB_14413ccaf;
        (**(code **)*local_238)(local_238,0);
        FUN_1446efa72(&local_238,0,0,0x10);
        plStack_230 = (longlong *)((ulonglong)plStack_230 & 0xffffffff00000000);
      }
      if (local_238 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_14413ccaf;
  }
  FUN_14413d3f8(param_1);
  *(undefined4 *)(param_1 + 6) = 0;
  if (((((*(int *)((longlong)param_1 + 0x14) != 0) &&
        (uVar8 = *(uint *)(param_1 + 2), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)((longlong)param_1 + 0x14))))) &&
     (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
      ((*plVar12 != 0 && (lVar10 = FUN_1447210f0(), lVar10 != 0)))))) {
    FUN_148d2f1b2(&local_1e8);
    uVar11 = FUN_145866520(lVar10);
    uVar8 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    local_40 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    local_40 = local_40 >> 0x10 ^ local_40;
    local_258 = &local_248;
    FUN_148d352ca(&local_238,"SOakCutsceneWidget",
                  ".\\../../OakGame/Source/OakGame/Game/OakCustomCutsceneMovieState.cpp",0x85);
    FUN_148d2f1d2(&local_238,&local_200,&local_1e8);
    plVar12 = local_1f8;
    uVar9 = CONCAT62(uStack_1fe,CONCAT11(uStack_1ff,local_200));
    if (local_1f8 == (longlong *)0x0) {
      param_1[10] = uVar9;
      plVar13 = (longlong *)param_1[0xb];
      if (plVar13 != (longlong *)0x0) {
        param_1[0xb] = 0;
LAB_14413ce4c:
        LOCK();
        plVar12 = plVar13 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
joined_r0x00014413ce3f:
          if (iVar7 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
      param_1[10] = uVar9;
      plVar13 = (longlong *)param_1[0xb];
      if (local_1f8 == plVar13) {
        LOCK();
        plVar13 = local_1f8 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_1f8)(local_1f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar13 = plVar12;
          goto joined_r0x00014413ce3f;
        }
      }
      else {
        param_1[0xb] = local_1f8;
        if (plVar13 != (longlong *)0x0) goto LAB_14413ce4c;
      }
    }
    plVar12 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_1f8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_230 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_230)(plStack_230);
        LOCK();
        piVar1 = (int *)((longlong)plStack_230 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_230 + 0x10))(plStack_230);
        }
      }
    }
    FUN_140a4ff8c(&local_1e8);
  }
  local_228 = 0;
  uStack_220 = 0;
  plStack_230 = (longlong *)0x0;
  local_218 = 0xbf800000;
  uStack_211 = 0;
  uStack_20f = 0;
  uStack_210 = 1;
  local_238 = (undefined8 *)param_1[10];
  plVar12 = (longlong *)param_1[0xb];
  plVar13 = plStack_230;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar13 = plVar12;
    if (plVar12 == (longlong *)0x0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      plVar13 = plStack_230;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        plVar13 = plStack_230;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          plVar13 = plStack_230;
        }
      }
    }
  }
  plStack_230 = plVar13;
  uVar11 = uStack_220;
  lVar10 = (longlong)(int)uStack_220;
  uVar8 = (int)uStack_220 + 1;
  uStack_220 = CONCAT44(uStack_220._4_4_,uVar8);
  if (uStack_220._4_4_ < uVar8) {
    FUN_1447a1bd6(&local_228,uVar11 & 0xffffffff);
  }
  lVar10 = lVar10 * 0x10;
  puVar2 = (undefined8 *)(local_228 + lVar10);
  *(undefined8 *)(local_228 + lVar10) = 0;
  iVar7 = *(int *)(param_1 + 4);
  _Src = (void *)param_1[3];
  *(int *)(local_228 + 8 + lVar10) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,iVar7,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar7 * 2);
  }
  (**(code **)(*plVar14 + 0x20))(plVar14,&local_238);
  uVar9 = (**(code **)(*plVar14 + 0xa0))(plVar14);
  FUN_148d2f24c(uVar9,&local_1e8,param_1);
  uVar9 = (**(code **)(*plVar14 + 0xa8))(plVar14);
  FUN_148d2f45e(uVar9,&local_1e8,param_1);
  uVar9 = (**(code **)(*plVar14 + 200))(plVar14);
  FUN_148d2f54a(uVar9,&local_1e8,param_1,FUN_148d2f630);
  uVar9 = (**(code **)(*plVar14 + 0xd0))(plVar14);
  FUN_148d2f54a(uVar9,&local_1e8,param_1,FUN_148d2f75a);
  uVar9 = (**(code **)(*plVar14 + 0xd8))(plVar14);
  FUN_148d2f7a2(uVar9,&local_1e8,param_1);
  uVar6 = (**(code **)(*plVar14 + 0x48))(plVar14);
  *(undefined1 *)(param_1 + 5) = uVar6;
  if (param_1[10] != 0) {
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
    local_248 = DAT_14c844840;
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
    local_240 = 0;
    FUN_140ac6c96(&DAT_14cbca010,&local_248);
    FUN_148e810e8(param_1[10]);
    memset(&local_1e8,0,0x118);
    lVar10 = FUN_1402735c8();
    FUN_148c212b2(&local_1e8,lVar10 + 0x200);
    FUN_148e8115c(param_1[10],&local_1e8);
    if (*(longlong **)(param_1[10] + 0x288) != (longlong *)0x0) {
      local_200 = DAT_14c96b238;
      uStack_1ff = 1;
      local_1f8 = (longlong *)0x0;
      uStack_1f0 = 0;
      (**(code **)(**(longlong **)(param_1[10] + 0x288) + 0x1c0))();
    }
    FUN_145ab9500(&local_1e8);
    if (local_248 != (longlong *)0x0) {
      (**(code **)(*local_248 + 0x10))();
    }
  }
  FUN_14619aa88(&local_238);
LAB_14413ccaf:
  if ((local_38 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413d272 FUN_14413d272 body=389 status=ok
// SIG undefined FUN_14413d272(void)

void FUN_14413d272(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 == 0) goto LAB_14413d331;
    plVar3 = (longlong *)(DAT_14cabd108 + 0x10);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0xa0))(plVar3);
    FUN_140457ffc(uVar2,param_1);
    uVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    FUN_140457ffc(uVar2,param_1);
    uVar2 = (**(code **)(*plVar3 + 200))(plVar3);
    FUN_140457ffc(uVar2,param_1);
    uVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
    FUN_140457ffc(uVar2,param_1);
    uVar2 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    FUN_140457ffc(uVar2,param_1);
  }
LAB_14413d331:
  FUN_14413d3f8(param_1);
  if (((((*(int *)(param_1 + 0x14) != 0) && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        ((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x14))))))) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (*plVar3 != 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_148d2f8f4(*plVar3,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_148e80cde();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  if ((local_28[2] ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413d3f8 FUN_14413d3f8 body=159 status=ok
// SIG undefined FUN_14413d3f8(void)

void FUN_14413d3f8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x68);
    local_20 = *(longlong *)(param_1 + 0x70);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413d4a8 FUN_14413d4a8 body=22 status=ok
// SIG undefined FUN_14413d4a8(void)

undefined1 FUN_14413d4a8(longlong param_1)

{
  FUN_14413ca14();
  return *(undefined1 *)(param_1 + 0x60);
}



// FUNCTION 14413d54d FUN_14413d54d body=69 status=ok
// SIG undefined FUN_14413d54d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14413d54d(void)

{
  _DAT_14cbca350 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014413d58f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbca358,1);
  return;
}



// FUNCTION 14413d592 FUN_14413d592 body=69 status=ok
// SIG undefined FUN_14413d592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14413d592(void)

{
  _DAT_14cbca368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014413d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbca370,1);
  return;
}



// FUNCTION 14413d5e8 FUN_14413d5e8 body=262 status=ok
// SIG undefined FUN_14413d5e8(void)

longlong FUN_14413d5e8(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58 [2];
  int local_48;
  int local_44;
  undefined8 local_40 [2];
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144928b90(param_1,2);
  FUN_140b1283a(local_58,L"seen_movie_",param_2);
  FUN_14000bbd8(&local_48,local_58,0);
  if ((((local_48 == 0) || (local_44 == 0)) || (local_48 == DAT_14c948000)) || (local_44 < 1)) {
    local_60 = DAT_14c948620;
    local_68 = DAT_14c948618;
  }
  else {
    puVar1 = local_40;
    if (0 < local_24) {
      puVar1 = local_30;
    }
    if (local_44 != 1) {
      puVar1 = local_30;
    }
    local_68 = *puVar1;
    local_60 = *(undefined4 *)(puVar1 + 1);
  }
  FUN_144928d62(param_1 + 0x10,1,&local_68);
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413d6f0 FUN_14413d6f0 body=1099 status=ok
// SIG undefined FUN_14413d6f0(void)

void FUN_14413d6f0(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = FUN_145dfaa1c();
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x108) = 1;
  }
  local_50 = FUN_146261f06;
  local_48 = 0;
  FUN_146626b00(&local_38,param_1,&local_50);
  local_50 = FUN_1461c5cae;
  local_48 = 0;
  FUN_146626bfa(param_1 + 0x60,&local_38,param_1,&local_50);
  local_50 = FUN_1408a6b22;
  local_48 = 0;
  FUN_146626cfa(&local_38,param_1,&local_50);
  lVar8 = FUN_145d47f82();
  if (*(int *)(lVar8 + 0x70) != 3) {
    FUN_1446efa72((longlong *)(lVar8 + 0x68),0,3,0x10);
    *(undefined4 *)(lVar8 + 0x70) = 3;
  }
  puVar2 = *(undefined8 **)(lVar8 + 0x68);
  *puVar2 = &PTR_LAB_14b4ec440;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar2[2] = lVar11;
  *puVar2 = &PTR_FUN_14b9712d0;
  puVar2[3] = 0;
  if (param_1 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar8 + 0x10) = iVar12;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar4 = iVar12;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = FUN_148d2f9a6;
  *(undefined4 *)(puVar2 + 5) = 0;
  if (*(char *)(param_1 + 0x1f8) == '\x01') {
    FUN_1415aa586(param_1 + 0x200,&DAT_14cbca398);
  }
  plVar9 = (longlong *)FUN_140a68038(1);
  if ((plVar9 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar9 + 0x218))(plVar9), cVar3 == '\0')
     ) goto LAB_14413d97a;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_14413da74;
    }
    local_50 = (code *)0x14ae43c40;
    local_48 = 8;
    local_44 = 0;
    uVar5 = FUN_14001a6c0(&local_50,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar9 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar5);
  }
  else {
LAB_14413da74:
    local_50 = (code *)0x14ae43c40;
    local_48 = 8;
    local_44 = 0;
    uVar5 = FUN_14001a6c0(&local_50,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar9 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar5,&local_50,1);
  }
  uVar10 = (**(code **)(*plVar9 + 0x50))(plVar9);
  local_38 = DAT_14cb9ace0;
  local_48 = 1;
  local_50 = (code *)&local_38;
  FUN_143aea052(uVar10,&local_50);
  local_50 = (code *)&local_40;
  local_40 = DAT_14cb9ad80;
  local_48 = 1;
  FUN_143aea0e2(uVar10,&local_50);
LAB_14413d97a:
  local_50 = (code *)&LAB_145de9d74;
  local_48 = 0;
  FUN_146122f16(&DAT_14c8673d8,&local_38,param_1);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413db42 FUN_14413db42 body=65 status=ok
// SIG undefined FUN_14413db42(void)

undefined8 FUN_14413db42(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x518) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x518) + 0x38), plVar1 != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x308))(plVar1,0);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014413db75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14413dba6 FUN_14413dba6 body=71 status=ok
// SIG undefined FUN_14413dba6(void)

void FUN_14413dba6(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(longlong *)(param_1 + 0x518) == 0) ||
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x518) + 0xa8), plVar1 == (longlong *)0x0)) {
    return;
  }
  if (((char)plVar1[0x3e] != '\0') &&
     (plVar1 = (longlong *)FUN_14008f8aa(plVar1,0), plVar1 == (longlong *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014413dbd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2e0))();
  return;
}



// FUNCTION 14413dbee FUN_14413dbee body=312 status=ok
// SIG undefined FUN_14413dbee(void)

undefined8 FUN_14413dbee(longlong *param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  
  if ((((param_2 != 0) && ((int)param_1[0x95] < 1)) &&
      (*(char *)((longlong)param_1 + 0x4b1) == '\0')) &&
     ((*(char *)((longlong)param_1 + 0x474) == '\x01' &&
      (param_1[0x8f] != 0 && param_1[0x8f] != param_2)))) {
    bVar2 = (**(code **)(*param_1 + 0x498))(param_1);
    if (8 < bVar2) {
      return 0;
    }
    if ((0x1a0U >> (bVar2 & 0x1f) & 1) == 0) {
      return 0;
    }
    if (((param_1[0xaa] == 0) || (cVar3 = FUN_14128c696(), cVar3 != '\0')) &&
       (*(int *)((longlong)param_1 + 0x5a4) < (int)param_1[0xaf])) {
      fVar1 = *(float *)(param_1 + 0x90);
      if ((fVar1 == 0.0) && (!NAN(fVar1))) {
        FUN_148d302c6(param_1);
        FUN_148d30466(param_1,param_2);
        return 1;
      }
      if (fVar1 <= 0.0) {
        return 1;
      }
      if (*(float *)((longlong)param_1 + 0x484) - fVar1 <= 0.25) {
        return 1;
      }
      FUN_145d81956(param_1);
      FUN_148d305e0(param_1);
      if (*(char *)((longlong)param_1 + 0x4b1) == '\x01') {
        cVar3 = FUN_148d2fde4(param_1,param_2);
      }
      else {
        if (*(char *)((longlong)param_1 + 0x474) != '\x01') {
          return 1;
        }
        cVar3 = FUN_14572f032(param_1,param_2);
      }
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14413dd26 FUN_14413dd26 body=226 status=ok
// SIG undefined FUN_14413dd26(void)

void FUN_14413dd26(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x40);
  if (param_2 == -1) {
    if (iVar1 != 0) {
      param_2 = 0;
      do {
        lVar3 = 0;
        while ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3), lVar2 == 0 ||
               (*(int *)(lVar2 + 0xe0) != param_2))) {
          lVar3 = lVar3 + 8;
          if ((longlong)iVar1 * 8 == lVar3) goto LAB_14413dda5;
        }
        param_2 = param_2 + 1;
      } while( true );
    }
    param_2 = 0;
  }
  else if (iVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == param_2)) goto LAB_14413ddec;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
LAB_14413dda5:
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar3 != 0)) &&
      (*(longlong *)(lVar3 + 0x1f0) != 0)) && (lVar3 = FUN_14116599c(), lVar3 != 0)) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_143f287d4(lVar3,param_2,1);
  }
LAB_14413ddec:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413de0a FUN_14413de0a body=197 status=ok
// SIG undefined FUN_14413de0a(void)

int FUN_14413de0a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = FUN_143d4f4e0();
  lVar3 = FUN_140d27a2a(param_1);
  if ((byte)(*(char *)(lVar3 + 0xb0) - 5U) < 2) {
    if (-1 < iVar2) {
      FUN_148d2fc94(param_1);
      goto LAB_14413dea1;
    }
  }
  else if (((*(char *)((longlong)param_1 + 0x474) == '\x01') &&
           (cVar1 = (**(code **)(*param_1 + 0x498))(param_1), -1 < iVar2)) && (cVar1 == '\x05')) {
    if (*(char *)((longlong)param_1 + 0x474) == '\x01') {
      if ((int)param_1[8] < 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)param_1[7];
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
      }
      FUN_14572f032(param_1,lVar3);
    }
    goto LAB_14413dea1;
  }
  if (iVar2 == -1) {
    return -1;
  }
LAB_14413dea1:
  plVar4 = (longlong *)FUN_145a1006a(param_1);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2);
  }
  return iVar2;
}



// FUNCTION 14413ded0 FUN_14413ded0 body=431 status=ok
// SIG undefined FUN_14413ded0(void)

undefined4 FUN_14413ded0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x4b1) == '\x01') {
    if (*(longlong *)(param_1 + 0x4b8) == param_2 && *(longlong *)(param_1 + 0x4b8) != 0) {
      if (*(int *)(param_1 + 0x40) < 1) {
        lVar3 = 0;
      }
      else {
        lVar3 = **(longlong **)(param_1 + 0x38);
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
      }
      if (lVar3 == param_2) {
        FUN_148d2ffde();
      }
      else {
        FUN_148d3076c(param_1,param_2);
        FUN_148d2fde4(param_1,lVar3);
      }
    }
  }
  else if ((*(char *)(param_1 + 0x474) == '\x01') &&
          (*(longlong *)(param_1 + 0x478) == param_2 && *(longlong *)(param_1 + 0x478) != 0)) {
    if (*(int *)(param_1 + 0x40) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 0x38);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
    }
    if (lVar3 == param_2) {
      FUN_14572dc5a();
    }
    else {
      FUN_148d3076c(param_1,param_2);
      FUN_14572f032(param_1,lVar3);
    }
  }
  plVar2 = (longlong *)FUN_145a1006a(param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2c8))(plVar2,param_2);
  }
  uVar1 = FUN_143d4f578(param_1,param_2);
  if (*(char *)(param_1 + 0x4b1) == '\x01') {
    if (*(int *)(param_1 + 0x40) < 2) {
      local_21 = 0;
      local_22 = 0;
      FUN_14572dde0(param_1 + 0x650,&local_22,0);
    }
  }
  else if ((*(char *)(param_1 + 0x474) == '\x01') && (*(int *)(param_1 + 0x40) < 2)) {
    FUN_14572dc5a(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413e080 FUN_14413e080 body=462 status=ok
// SIG undefined FUN_14413e080(void)

undefined8
FUN_14413e080(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             char param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_2 != 0) {
    local_70 = 1;
    local_78 = 0xbf800000;
    local_88 = 0;
    local_80 = param_4;
    FUN_144230d0e(param_1,param_2,0,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 < 2) {
    uVar1 = 0;
    goto LAB_14413e0ec;
  }
  if (param_5 == '\0') {
    local_60 = (void *)0x0;
    local_58 = *(int *)(param_4 + 1);
    lVar5 = (longlong)local_58;
    pvVar4 = (void *)*param_4;
    if (lVar5 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,pvVar4,lVar5 * 2);
      iVar2 = *(int *)(param_3 + 1);
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(local_68,iVar3,*param_3,1);
    uVar1 = FUN_148e0b166(param_1,local_68,&local_60);
    goto LAB_14413e0ec;
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_4 + 1);
  lVar5 = (longlong)local_38;
  pvVar4 = (void *)*param_4;
  if (lVar5 == 0) {
    local_34 = 0;
    pvVar4 = (void *)*param_3;
LAB_14413e1c0:
    local_50 = (void *)0x0;
    local_48 = iVar2;
    FUN_1446dd670(&local_50,iVar2,0);
    memcpy(local_50,pvVar4,(longlong)iVar2 * 2);
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar4,lVar5 * 2);
    iVar2 = *(int *)(param_3 + 1);
    local_50 = (void *)0x0;
    pvVar4 = (void *)*param_3;
    if (iVar2 != 0) goto LAB_14413e1c0;
    local_44 = 0;
    local_48 = iVar2;
  }
  uVar1 = FUN_148e0afc4(param_1,&local_50,&local_40);
LAB_14413e0ec:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14413e254 FUN_14413e254 body=1203 status=ok
// SIG undefined FUN_14413e254(void)

void FUN_14413e254(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((char)param_1[0x9b] != '\0') goto LAB_14413e30e;
  if (param_1[6] == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1[6] + 0x360);
  }
  FUN_1410d53f0(&local_b0,uVar11);
  if (local_a8 == (longlong *)0x0) goto LAB_14413e30e;
  iVar7 = (int)local_a8[1];
  do {
    if (iVar7 == 0) {
      plVar12 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar13 = (int)local_a8[1];
    bVar14 = iVar7 == iVar13;
    if (bVar14) {
      *(int *)(local_a8 + 1) = iVar7 + 1;
      iVar13 = iVar7;
    }
    iVar7 = iVar13;
    UNLOCK();
    plVar12 = local_a8;
  } while (!bVar14);
  LOCK();
  piVar1 = (int *)((longlong)local_a8 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  plVar2 = local_b0;
  if (plVar12 == (longlong *)0x0) goto LAB_14413e30e;
  if (local_b0 != (longlong *)0x0) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    plVar3 = (longlong *)param_1[9];
    if (plVar3 == (longlong *)0x0) {
LAB_14413e444:
      bVar6 = (**(code **)(*param_1 + 0x498))(param_1);
      if (bVar6 < 6) {
        *(undefined1 *)(param_1 + 0x9b) = 1;
        FUN_14624da98(param_1,0);
      }
      else {
LAB_14413e467:
        uVar8 = FUN_14595f7e8(plVar2,param_2);
        FUN_14624da98(param_1,uVar8 ^ 1);
        local_c8 = *param_2;
        local_c0 = *(undefined4 *)(param_2 + 1);
        local_b8 = 0;
        local_d8 = param_4;
        FUN_14413e080(plVar2,&local_c8,param_3,&local_58);
      }
    }
    else {
      lVar9 = FUN_140b6d0be();
      if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
          lVar9 + 0x30)) goto LAB_14413e444;
      FUN_14020fad6(&local_58,L"?listen");
      (**(code **)(*plVar3 + 0x308))(plVar3,&local_b0);
      if ((int)local_b0 == 1) {
        FUN_1400020e8(&local_58,L"?bIsLanMatch",0xc);
      }
      bVar6 = (**(code **)(*param_1 + 0x498))(param_1);
      if (5 < bVar6) goto LAB_14413e467;
      *(undefined1 *)(param_1 + 0x9b) = 1;
      FUN_1461db53c(param_1);
      local_a8 = (longlong *)*param_2;
      local_a0 = *(undefined4 *)(param_2 + 1);
      local_98 = 0;
      pvStack_90 = (void *)0x0;
      uVar8 = *(uint *)(param_3 + 1);
      pvVar4 = (void *)*param_3;
      local_88 = CONCAT44(local_88._4_4_,uVar8);
      local_b0 = param_1;
      if ((longlong)(int)uVar8 == 0) {
        local_88 = (ulonglong)uVar8;
      }
      else {
        FUN_1446dd670(&pvStack_90,uVar8,0);
        memcpy(pvStack_90,pvVar4,(longlong)(int)uVar8 * 2);
      }
      pvVar4 = local_58;
      local_80 = (void *)0x0;
      lVar9 = (longlong)(int)uStack_50;
      local_78 = CONCAT44(local_78._4_4_,(int)uStack_50);
      if (lVar9 == 0) {
        local_78 = uStack_50 & 0xffffffff;
      }
      else {
        FUN_1446dd670(&local_80,uStack_50 & 0xffffffff,0);
        memcpy(local_80,pvVar4,lVar9 * 2);
      }
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      local_70 = param_4;
      FUN_1446efa72(&local_68,0,7,0x10);
      puVar5 = local_68;
      local_60 = 7;
      *local_68 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_68[2] = lVar10;
      *local_68 = &PTR_FUN_14b971500;
      local_68[3] = 0;
      iVar7 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar8 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_68 + 3) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar14 = iVar7 == 0;
          if (bVar14) {
            *(int *)(lVar9 + 0x10) = iVar13;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar7 = iVar13;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar7;
      puVar5[4] = local_b0;
      puVar5[5] = local_a8;
      *(undefined4 *)(puVar5 + 6) = local_a0;
      puVar5[7] = 0;
      puVar5[8] = pvStack_90;
      pvStack_90 = (void *)0x0;
      *(undefined4 *)(puVar5 + 9) = (undefined4)local_88;
      *(undefined4 *)((longlong)puVar5 + 0x4c) = local_88._4_4_;
      local_88 = 0;
      puVar5[10] = local_80;
      local_80 = (void *)0x0;
      *(undefined4 *)(puVar5 + 0xb) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar5 + 0x5c) = local_78._4_4_;
      local_78 = 0;
      *(undefined1 *)(puVar5 + 0xc) = local_70;
      (**(code **)(*plVar3 + 0x318))(plVar3,&local_68);
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (pvStack_90 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  plVar2 = plVar12 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_14413e30e:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413e708 FUN_14413e708 body=211 status=ok
// SIG undefined FUN_14413e708(void)

void FUN_14413e708(undefined8 param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = L"StartGameplayOnline";
  local_30 = 0x13;
  FUN_1446e940c(local_4c,&local_38);
  local_38 = L"OakGameInstance";
  local_30 = 0xf;
  FUN_1446e940c(local_50,&local_38);
  local_38 = L"Unable to create online game. Please try again.";
  local_30 = 0x2f;
  FUN_140208c1e(local_48,local_50,local_4c,&local_38);
  FUN_14413e7dc(param_1,1,local_48,&DAT_14c9485f0);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413e7dc FUN_14413e7dc body=1110 status=ok
// SIG undefined FUN_14413e7dc(void)

void FUN_14413e7dc(longlong *param_1,undefined1 param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbca3f8) {
    FUN_144b3d300(&DAT_14cbca3f8);
    if (DAT_14cbca3f8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbca3f0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Water.GbxSuspendWaterRendering",1);
      _Init_thread_footer(&DAT_14cbca3f8);
    }
  }
  if (DAT_14cbca3f0 != (longlong *)0x0) {
    (**(code **)(*DAT_14cbca3f0 + 0x98))(DAT_14cbca3f0,&DAT_149e25dfc,0xd000000,0);
  }
  FUN_14572ea7c(param_1,1);
  uVar6 = FUN_140d27a2a(param_1);
  FUN_140628abc(uVar6,0);
  DAT_14cbca3c8 = 0;
  DAT_14cbca3d8 = 0;
  if (DAT_14cbca3dc < 0) {
    FUN_1446f8c06(&DAT_14cbca3d0,0);
  }
  if (DAT_14cbca3d0 != (undefined2 *)0x0) {
    *DAT_14cbca3d0 = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4d9) != '\0') goto LAB_14413e8ac;
  bVar3 = true;
  if ((param_1[6] == 0) || (lVar8 = *(longlong *)(param_1[6] + 0x360), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    iVar5 = FUN_14490d72a(lVar8);
    if (iVar5 == 3) {
      if (0 < (int)param_1[8]) {
        lVar7 = *(longlong *)param_1[7];
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar7);
        }
        else if (lVar7 == 0) goto LAB_14413e984;
        lVar7 = FUN_1401ca7f2(lVar7);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x3c) != 0)) {
          uVar1 = *(uint *)(lVar7 + 0x38);
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if (((lVar11 != 0) && (*(int *)(lVar11 + 0x10) == *(int *)(lVar7 + 0x3c))) &&
               ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
              FUN_144000cde(lVar7,CONCAT71((uint7)(byte)(uVar1 >> 0x18),1));
            }
          }
        }
      }
LAB_14413e984:
      lVar7 = FUN_1400f6f32(lVar8);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x68) != 0)) {
        FUN_1488c245c(*(longlong *)(lVar7 + 0x68),1);
      }
    }
    bVar3 = false;
  }
  *(undefined1 *)((longlong)param_1 + 0x4d9) = 2;
  plVar9 = (longlong *)param_1[0x9c];
  if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
  }
  FUN_1447a1fc0(plVar9);
  plVar9 = (longlong *)param_1[0x9c];
  pcVar2 = *(code **)(*plVar9 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar10 = plVar9 + 3;
    if (plVar9[5] != 0) {
      plVar10 = (longlong *)(plVar9[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar10 = plVar9 + 2;
  }
  else {
    plVar10 = (longlong *)(*pcVar2)(plVar9);
  }
  if ((int)plVar10[1] < 2) {
    plVar9 = (longlong *)*param_3;
    plVar10 = (longlong *)param_1[0x9c];
    if (plVar10 != plVar9) {
      param_1[0x9c] = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    *(int *)(param_1 + 0x9d) = (int)param_3[1];
  }
  if ((((int)param_1[0x9e] == 0) || (*(int *)((longlong)param_1 + 0x4f4) == 0)) ||
     ((int)param_1[0x9e] == DAT_14c948000)) {
    FUN_1447715ec(param_1 + 0x9e,param_4);
  }
  cVar4 = (**(code **)(*param_1 + 0x498))(param_1);
  if (cVar4 == '\b') {
LAB_14413ea8a:
    local_41 = 9;
    FUN_140627eda(param_1 + 0x40);
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x498))(param_1);
    if (cVar4 == '\a') goto LAB_14413ea8a;
  }
  *(undefined1 *)((longlong)param_1 + 0x4da) = param_2;
  if (bVar3) {
    FUN_148d316be(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if (*(longlong *)(lVar8 + 0x1f0) == 0) {
LAB_14413eb97:
    FUN_148d316be(param_1);
  }
  else {
    lVar7 = FUN_14116599c();
    if ((lVar7 == 0) || (*(char *)(lVar7 + 0x221) == '\0')) goto LAB_14413eb97;
  }
  FUN_140627eda(param_1 + 0x40,(longlong)param_1 + 0x4d9);
  if (*(longlong *)(lVar8 + 0x1f0) != 0) {
    lVar7 = FUN_1403ca142();
    if ((((*(longlong *)(lVar8 + 0x1f0) != 0) && (lVar7 != 0)) &&
        (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x1f0) + 0x10), lVar8 != 0)) &&
       ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30)))) {
      lVar8 = FUN_1400d6ce6();
      if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_14413e8ac:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413ec62 FUN_14413ec62 body=101 status=ok
// SIG undefined FUN_14413ec62(void)

void FUN_14413ec62(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x10))(param_1 + 0x1c0);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x50) = 0;
    }
  }
  if (*(char *)(param_1 + 0x549) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
    }
    FUN_1441204ad(*(undefined1 *)(param_1 + 0x548),uVar2);
    if (*(char *)(param_1 + 0x549) == '\x01') {
      *(undefined1 *)(param_1 + 0x549) = 0;
    }
  }
  return;
}



// FUNCTION 14413ecd6 FUN_14413ecd6 body=355 status=ok
// SIG undefined FUN_14413ecd6(void)

void FUN_14413ecd6(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = DAT_14c844840;
  if (DAT_14c844840 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
    LOCK();
    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  local_28 = 0;
  FUN_1457cd276(param_1,1,1);
  FUN_14413e7dc(param_1,0,&local_30,&DAT_14c9485f0);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413ee4c FUN_14413ee4c body=540 status=ok
// SIG undefined FUN_14413ee4c(void)

void FUN_14413ee4c(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x4e0);
  plVar4 = *(longlong **)(param_1 + 0x4e0);
  if (*(code **)(*plVar4 + 0x50) != FUN_144828418) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))();
  }
  FUN_1447a1fc0(plVar4);
  plVar4 = (longlong *)*plVar1;
  pcVar2 = *(code **)(*plVar4 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar5 = plVar4 + 3;
    if (plVar4[5] != 0) {
      plVar5 = (longlong *)(plVar4[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar5 = plVar4 + 2;
  }
  else {
    plVar5 = (longlong *)(*pcVar2)(plVar4);
  }
  if (1 < (int)plVar5[1]) {
    if (((*(longlong *)(param_1 + 0x30) != 0) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar3 != 0)) &&
       (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_14583d3ae();
      if (lVar3 != 0) {
        FUN_1441c12ac(lVar3,0xffffffff,plVar1,param_1 + 0x4f0);
      }
    }
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
    local_30 = DAT_14c844840;
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
    local_28 = 0;
    FUN_140008f88(plVar1,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
    FUN_1447715ec(param_1 + 0x4f0,&DAT_14c9485f0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413f06a FUN_14413f06a body=164 status=ok
// SIG undefined FUN_14413f06a(void)

void FUN_14413f06a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14021f720();
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x58,param_1);
  }
  if (DAT_14cbca3c8 == '\x01') {
    DAT_14cbca3c8 = '\0';
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) {
      local_20 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1400021e4(&local_20,local_30);
      FUN_14413f110(param_1,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413f110 FUN_14413f110 body=699 status=ok
// SIG undefined FUN_14413f110(void)

void FUN_14413f110(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined1 local_98 [40];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14413d5e8(local_98);
  local_a8 = CONCAT31(local_a8._1_3_,1);
  local_9c = 1;
  uStack_a4 = (undefined4)DAT_14cb7c588;
  uStack_a0 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  lVar3 = FUN_14040226a(param_1,0);
  if (lVar3 != 0) {
    FUN_140bc53f1(local_98,&local_a8,lVar3,0);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar3 = 0;
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar4 + lVar3);
    uVar7 = (ulonglong)uVar6;
    uVar8 = *(ushort *)((longlong)L"Cowbell_P" + lVar3);
    if (uVar6 != uVar8) break;
    if (uVar6 == 0) goto LAB_14413f1f7;
LAB_14413f1c7:
    lVar3 = lVar3 + 2;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_14413f1c7;
  }
  if (uVar6 != uVar8) goto LAB_14413f382;
LAB_14413f1f7:
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar5);
      if ((lVar2 != 0) && (lVar10 = *(longlong *)(lVar2 + 0x30), lVar10 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_a8 = 0x41030f22;
          uStack_a4 = 1;
          local_b0 = FUN_14081d0ea;
          local_b8 = &LAB_1459f2e4c;
          local_c8 = &LAB_148c39de3;
          local_d0 = &LAB_1457a9eb2;
          local_d8 = &DAT_149e063b2;
          local_e0 = 0;
          local_e8 = 0x10000004;
          local_f0 = 0x10;
          local_f8 = 0x3de0;
          local_c0 = &local_a8;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar10 = *(longlong *)(lVar2 + 0x30);
          if (lVar10 == 0) goto LAB_14413f2cc;
        }
        if ((((DAT_14cbadd90 != 0) && (lVar2 = *(longlong *)(lVar10 + 0x10), lVar2 != 0)) &&
            (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          FUN_1446f470e(&local_a8,L"Cowbell_P.LTS_CowbellToZadraHouse",1);
          if ((*(longlong *)(lVar10 + 0x2370) != CONCAT44(uStack_a4,local_a8)) ||
             (*(int *)(lVar10 + 0x2378) != 0x6000)) {
            *(longlong *)(lVar10 + 0x2370) = CONCAT44(uStack_a4,local_a8);
            *(undefined4 *)(lVar10 + 0x2378) = 0x6000;
            *(undefined8 *)(lVar10 + 0x2380) = 0;
          }
          FUN_144201a5c(lVar10,0x40a00000);
        }
      }
LAB_14413f2cc:
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
LAB_14413f382:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14413f3cc FUN_14413f3cc body=406 status=ok
// SIG undefined FUN_14413f3cc(void)

ulonglong FUN_14413f3cc(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  char local_70 [4];
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  longlong local_38;
  ulonglong local_28;
  undefined7 uVar8;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1 < *(int *)(param_2 + 8)) {
    FUN_140b1283a(&local_60,L"seen_movie_");
    if (DAT_14cbca3d8 == local_58) {
      bVar11 = true;
      if (1 < DAT_14cbca3d8) {
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)(DAT_14cbca3d0 + lVar9);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(local_60 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14413f44c;
            }
            iVar3 = uVar4 - uVar10;
            goto LAB_14413f487;
          }
          if (uVar1 == 0) break;
LAB_14413f44c:
          lVar9 = lVar9 + 2;
        }
        iVar3 = 0;
LAB_14413f487:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = local_58 + DAT_14cbca3d8 == 1;
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    uVar8 = (undefined7)((ulonglong)&local_60 >> 8);
    uVar7 = CONCAT71(uVar8,1);
    if (bVar11) goto LAB_14413f52a;
    if ((*(longlong *)(param_1 + 0x30) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x230) == 0)) {
      FUN_14413d5e8(&local_60,param_2);
      local_70[0] = '\0';
      local_6c = 0;
      local_64 = 0;
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
      }
      lVar9 = FUN_140149a73(uVar6,0);
      if (lVar9 == 0) {
        pcVar5 = local_70;
      }
      else {
        pcVar5 = (char *)FUN_14039fc7b(&local_60,local_70,lVar9,0);
      }
      if (*pcVar5 == '\x01') {
        uVar7 = CONCAT71(uVar8,*(int *)(pcVar5 + 0xc) != 0);
      }
      else {
        uVar4 = FUN_140321d1a(pcVar5);
        uVar7 = (ulonglong)uVar4;
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14413f52a;
    }
  }
  uVar7 = 0;
LAB_14413f52a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413f564 FUN_14413f564 body=133 status=ok
// SIG undefined FUN_14413f564(void)

void FUN_14413f564(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(int *)(param_2 + 0x44) == 0) {
      return;
    }
  }
  else {
    cVar1 = FUN_140321d1a(param_2 + 0x38);
    if (cVar1 == '\0') {
      return;
    }
  }
  lVar3 = DAT_14cbca3e0;
  if (DAT_14cbca3e0 != 0) {
    lVar2 = FUN_14040226a(param_1,0);
    if (lVar2 != 0) {
      FUN_140825b72(param_2,lVar3,lVar2,0);
    }
    DAT_14cbca3e0 = 0;
  }
  lVar3 = FUN_14021f720(param_1);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0xec) != 0)) {
    *(undefined1 *)(lVar3 + 0xa5) = 1;
  }
  return;
}



// FUNCTION 14413f5e9 FUN_14413f5e9 body=69 status=ok
// SIG undefined FUN_14413f5e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14413f5e9(void)

{
  _DAT_14cbca400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014413f62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbca408,1);
  return;
}



// FUNCTION 14413f62e FUN_14413f62e body=69 status=ok
// SIG undefined FUN_14413f62e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14413f62e(void)

{
  _DAT_14cbca418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014413f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbca420,1);
  return;
}



// FUNCTION 14413f674 FUN_14413f674 body=470 status=ok
// SIG undefined FUN_14413f674(void)

longlong * FUN_14413f674(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b9717c0;
  puVar2[3] = 0;
  iVar5 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = 0;
  iVar5 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(puVar2 + 5) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar5,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar5 * 2);
  }
  puVar2[6] = 0;
  iVar5 = *(int *)(param_3 + 3);
  pvVar3 = (void *)param_3[2];
  *(int *)(puVar2 + 7) = iVar5;
  if ((longlong)iVar5 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar5,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar5 * 2);
  }
  puVar2[8] = param_3[4];
  return param_1;
}



// FUNCTION 14413f86a FUN_14413f86a body=248 status=ok
// SIG undefined FUN_14413f86a(void)

void FUN_14413f86a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar2 = FUN_14116599c();
    if (lVar2 != 0) {
      cVar1 = FUN_14144bed0(lVar2);
      if (cVar1 == '\0') {
        FUN_14144f736(param_1 + 0x200,&DAT_14cbca7c0,1);
        local_38 = 0;
        uStack_30 = 0;
        FUN_143f287d4(lVar2,param_2,0);
        cVar1 = FUN_146060a14(lVar2,param_2);
        if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) &&
           ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar2 != 0 &&
            (*(longlong *)(lVar2 + 0x1f0) != 0)))) {
          lVar2 = FUN_14583d3ae();
          if (lVar2 != 0) {
            FUN_145fe1f62(lVar2);
          }
        }
      }
    }
  }
  FUN_1414b0848(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14413f964 FUN_14413f964 body=1066 status=ok
// SIG undefined FUN_14413f964(void)

ulonglong FUN_14413f964(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar10 == 0)) {
    uVar9 = 0;
    goto LAB_14413fd50;
  }
  uVar6 = FUN_140d27a2a();
  FUN_14154ccb4(uVar6);
  lVar7 = FUN_140d27a2a(param_1);
  if (*(longlong *)(lVar7 + 0xb8) == 0) {
    lVar8 = FUN_1405c673d();
    *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(lVar8 + 0x38);
  }
  uVar9 = FUN_1410d53f0(&local_70,lVar10);
  if (local_68 == (longlong *)0x0) {
LAB_14413fa48:
    local_8c = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
    plVar14 = (longlong *)0x0;
  }
  else {
    uVar9 = (ulonglong)*(uint *)(local_68 + 1);
    do {
      uVar5 = (uint)uVar9;
      if (uVar5 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      uVar2 = *(uint *)(local_68 + 1);
      if (uVar5 == uVar2) {
        *(uint *)(local_68 + 1) = uVar5 + 1;
      }
      else {
        uVar9 = (ulonglong)uVar2;
      }
      UNLOCK();
      plVar14 = local_68;
    } while (uVar5 != uVar2);
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      uVar9 = (**(code **)(*local_68 + 0x10))();
    }
    if (plVar14 == (longlong *)0x0) goto LAB_14413fa48;
    if (local_70 != (code *)0x0) {
      FUN_148e0ac6c();
    }
    local_8c = 0;
  }
  if (0 < *(int *)(lVar10 + 0x238)) {
    lVar8 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(lVar10 + 0x230) + 4 + lVar8 * 8);
      if ((((iVar3 != 0) &&
           (uVar5 = *(uint *)(*(longlong *)(lVar10 + 0x230) + lVar8 * 8), -1 < (int)uVar5)) &&
          ((int)uVar5 < DAT_14c9647dc)) &&
         (((plVar12 = (longlong *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar12 != (longlong *)0x0 && ((int)plVar12[2] == iVar3)) &&
          (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar13 = *plVar12, lVar13 != 0)))))) {
        if (DAT_14cbadd90 == 0) {
          local_70 = FUN_141030f22;
          local_a0 = FUN_14081d0ea;
          local_a8 = &LAB_1459f2e4c;
          local_b0 = &local_70;
          local_b8 = &LAB_148c39de3;
          local_c0 = &LAB_1457a9eb2;
          local_c8 = &DAT_149e063b2;
          local_d0 = 0;
          local_d8 = 0x10000004;
          local_e0 = 0x10;
          local_e8 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          FUN_148dc1e7e(lVar13);
        }
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)(lVar10 + 0x238));
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x360);
  }
  lVar10 = FUN_1406f612e(uVar6);
  iVar3 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar3 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x38);
    lVar13 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar8 + lVar13) + 0x30);
      if (lVar4 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_70 = FUN_141030f22;
          local_a0 = FUN_14081d0ea;
          local_a8 = &LAB_1459f2e4c;
          local_b0 = &local_70;
          local_b8 = &LAB_148c39de3;
          local_c0 = &LAB_1457a9eb2;
          local_c8 = &DAT_149e063b2;
          local_d0 = 0;
          local_d8 = 0x10000004;
          local_e0 = 0x10;
          local_e8 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
           (lVar11 = FUN_1402a1246(lVar4), lVar11 != 0)) {
          if (*(longlong *)(lVar7 + 0xb8) != 0) {
            *(undefined1 *)(lVar11 + 0x710) = 1;
            FUN_145be8d80(lVar11);
            local_88 = 0;
            uStack_80 = 0;
            FUN_1441f1e80(lVar4,DAT_14cb71810,*(undefined8 *)(lVar7 + 0xb8),&local_88);
          }
          if (lVar10 != 0) {
            FUN_145bf4c9e(lVar10,*(undefined4 *)(lVar11 + 0x394));
          }
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar3 * 8 != lVar13);
  }
  uVar9 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  if ((char)local_8c == '\0') {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_14413fd50:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 14413fd90 FUN_14413fd90 body=1867 status=ok
// SIG undefined FUN_14413fd90(void)

ulonglong FUN_14413fd90(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 unaff_RBX;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  code *pcVar16;
  bool bVar17;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined2 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  int local_e4;
  code *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pcVar2 = (char *)param_1[6];
  if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\x01')) {
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((pcVar2[0x88] != '\0') ||
       ((*(longlong *)(pcVar2 + 0x360) == 0 || (cVar4 = FUN_145a9f650(), cVar4 != '\0'))))
    goto LAB_144140382;
    cVar4 = FUN_14572e3ee(param_1);
    if ((cVar4 == '\0') || (bVar5 = (**(code **)(*param_1 + 0x498))(param_1), 5 < bVar5))
    goto LAB_144140380;
    if ((longlong)(int)param_1[8] != 0) {
      lVar12 = 0;
      do {
        if ((*(longlong *)(param_1[7] + lVar12) != 0) &&
           (lVar15 = *(longlong *)(*(longlong *)(param_1[7] + lVar12) + 0x30), lVar15 != 0)) {
          if (DAT_14cbadd90 == 0) {
            local_100 = &local_78;
            local_78 = FUN_141030f22;
            local_f0 = FUN_14081d0ea;
            local_f8 = &LAB_1459f2e4c;
            local_108 = &LAB_148c39de3;
            local_110 = &LAB_1457a9eb2;
            local_118 = &DAT_149e063b2;
            local_120 = 0;
            local_128 = 0x10000004;
            local_130 = 0x10;
            local_138 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30))
          goto LAB_14413fe7b;
          break;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)(int)param_1[8] * 8 != lVar12);
    }
    lVar15 = 0;
LAB_14413fe7b:
    if ((((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x360) != 0)) &&
        (lVar12 = FUN_1400f6f32(), lVar12 != 0)) &&
       (lVar12 = *(longlong *)(lVar12 + 0x68), lVar12 != 0)) {
      FUN_140d27df6(lVar12,&local_78,lVar15);
      if (((-1 < (short)local_78) && (uVar7 = FUN_1402d8968(lVar12,&local_78), uVar7 < 3)) ||
         (0 < *(int *)(lVar12 + 0x50))) goto LAB_144140382;
    }
    lVar12 = FUN_140d27a2a(param_1);
    cVar4 = *(char *)(lVar12 + 0xb0);
    if (cVar4 == '\x01') {
      uVar9 = FUN_140d27a2a(param_1);
      lVar12 = FUN_1441aac4c(uVar9);
      if (lVar12 == 0) {
        pcVar16 = (code *)0x0;
      }
      else {
        puVar14 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar12 + 8) != (undefined4 *)0x0) {
          puVar14 = *(undefined4 **)(lVar12 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar12 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar12);
          DAT_14c947fe0 = lVar12;
        }
        FUN_140045924(DAT_14c947fe0,&local_78,puVar14,1);
        pcVar16 = local_78;
      }
      local_e4 = 0x6000;
      iVar1 = local_e4;
    }
    else if (lVar15 == 0) {
      local_e4 = 0x6000;
      pcVar16 = (code *)0x0;
      iVar1 = local_e4;
    }
    else {
      pcVar16 = *(code **)(lVar15 + 0x23d8);
      iVar1 = *(int *)(lVar15 + 0x23e0);
      if (((param_1[6] != 0) && (lVar12 = *(longlong *)(param_1[6] + 0x360), lVar12 != 0)) &&
         ((*(longlong *)(lVar12 + 0x1f0) != 0 &&
          (((lVar12 = FUN_141060562(), lVar12 != 0 &&
            (lVar12 = *(longlong *)(lVar12 + 0x30), lVar12 != 0)) &&
           (*(char *)(lVar12 + 0x1b0) == '\x01')))))) {
        local_90 = *(undefined4 *)(lVar12 + 0x1a8);
        local_98 = *(undefined8 *)(lVar12 + 0x1a0);
        FUN_1448075d0(&local_78);
        plVar8 = (longlong *)FUN_14060eaf6(&local_78);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (plVar8 != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x48))(plVar8);
          pcVar3 = (code *)*plVar8;
          local_e4 = (int)plVar8[1];
          local_78 = pcVar3;
          lVar12 = FUN_14050aea0();
          if (lVar12 != 0) {
            pcVar11 = pcVar3;
            if (iVar1 == local_e4) {
              pcVar11 = pcVar16;
            }
            bVar17 = pcVar16 != pcVar3;
            pcVar16 = pcVar11;
            iVar1 = local_e4;
            if (bVar17) {
              pcVar16 = pcVar3;
            }
          }
        }
      }
    }
    local_e4 = iVar1;
    local_88 = pcVar16;
    lVar12 = FUN_14050aea0();
    if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0x1b0) != 0)) {
      FUN_140902b70(*(longlong *)(lVar12 + 0x1b0),&local_88);
      FUN_1400021e4(&local_88,&local_78);
      local_88 = local_78;
      uStack_80 = uStack_70;
      if ((int)uStack_70 < 2) goto LAB_14414007c;
      goto LAB_14414025f;
    }
    local_88 = (code *)0x0;
    uStack_80 = 0;
LAB_14414007c:
    pcVar3 = local_88;
    uVar9 = FUN_140d27a2a(param_1);
    cVar6 = FUN_14577a842(uVar9);
    if (cVar6 == '\0') {
      FUN_148d31e60(&local_78);
      iVar1 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar1 = 0;
      }
      FUN_1446f82e2(&local_a8,iVar1,local_78,1);
      pcVar11 = local_a8;
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
      if ((lVar12 == 0) || (pcVar16 != pcVar11)) {
        local_78 = pcVar11;
        lVar12 = FUN_14050aea0();
        if (lVar12 != 0) goto LAB_1441401bf;
      }
      else {
LAB_1441401bf:
        if (*(longlong *)(lVar12 + 0x1b0) != 0) {
          FUN_140902b70(*(longlong *)(lVar12 + 0x1b0),&local_a8);
          FUN_1400021e4(&local_a8,&local_78);
          pcVar16 = pcVar11;
          goto joined_r0x000144140245;
        }
      }
      local_78 = (code *)0x0;
      uStack_70 = 0;
      pcVar16 = pcVar11;
joined_r0x000144140245:
      if (pcVar3 != (code *)0x0) {
        FUN_1400020a8(pcVar3);
      }
      local_88 = local_78;
      uStack_80 = uStack_70;
    }
    else if ((lVar15 != 0) && (lVar10 = FUN_1402a1246(lVar15), lVar10 != 0)) {
      lVar10 = FUN_1403b0700(lVar10);
      if ((*(longlong *)(lVar10 + 0x38) != 0) && (*(longlong *)(lVar10 + 0x38) != DAT_14cb71810)) {
        FUN_148d31f12(&local_78);
        iVar1 = (int)uStack_70 + -1;
        if ((int)uStack_70 == 0) {
          iVar1 = 0;
        }
        FUN_1446f82e2(&local_a8,iVar1,local_78,1);
        pcVar3 = local_a8;
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
        if ((lVar12 == 0) || (pcVar16 != pcVar3)) {
          local_78 = pcVar3;
          lVar12 = FUN_14050aea0();
          if (lVar12 != 0) goto LAB_144140137;
LAB_144140147:
          local_78 = (code *)0x0;
          uStack_70 = 0;
          pcVar16 = pcVar3;
          pcVar3 = local_88;
        }
        else {
LAB_144140137:
          if (*(longlong *)(lVar12 + 0x1b0) == 0) goto LAB_144140147;
          FUN_140902b70(*(longlong *)(lVar12 + 0x1b0),&local_a8);
          FUN_1400021e4(&local_a8,&local_78);
          pcVar16 = pcVar3;
          pcVar3 = local_88;
        }
        goto joined_r0x000144140245;
      }
    }
LAB_14414025f:
    if ((cVar4 != '\x01') && ((int)uStack_80 < 2)) {
      FUN_14413f964(param_1);
      FUN_145ad105e(&local_78);
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_78;
      uStack_80 = uStack_70;
    }
    FUN_141638cfa(&local_a8,&local_88);
    if (local_a0 < 2) {
LAB_1441402c6:
      FUN_148d31fc4(lVar15);
    }
    else {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_78 = local_a8;
      uStack_70 = CONCAT44(uStack_70._4_4_,local_a0 + -1);
      FUN_14475bf92(&local_c8);
      cVar4 = FUN_1461c09bd(&local_c8);
      if (cVar4 == '\0') goto LAB_1441402c6;
      uVar9 = FUN_140d27a2a(param_1);
      FUN_1441aa7de(uVar9);
      lVar12 = FUN_140d27a2a();
      local_e0 = pcVar16;
      if (*(char *)(lVar12 + 0xb0) == '\x01') {
        local_e0 = (code *)0x0;
      }
      local_d8 = local_e4;
      local_d0 = 0;
      FUN_14413e254(param_1,&local_e0,&local_88,0);
    }
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144140380:
  uVar13 = 0;
LAB_144140382:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1441404dc FUN_1441404dc body=3459 status=ok
// SIG undefined FUN_1441404dc(void)

void FUN_1441404dc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void **ppvVar3;
  ushort uVar4;
  ushort uVar5;
  void *pvVar6;
  void *_Src;
  int iVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  size_t sVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  wchar_t *_Str;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  char local_c9;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined2 *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  code *local_80 [2];
  wchar_t *local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined1 *)(param_1 + 0xa6) = 1;
  uVar13 = FUN_140d27a2a();
  FUN_140628abc(uVar13,0);
  *(undefined1 *)((longlong)param_1 + 0x534) = 0;
  if (((param_1[6] == 0) || (lVar18 = *(longlong *)(param_1[6] + 0x360), lVar18 == 0)) ||
     (*(char *)(lVar18 + 0x152) == '\x03')) goto LAB_1441406ed;
  FUN_1410d53f0(&local_60,lVar18);
  plVar21 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar21 != (longlong *)0x0) {
    iVar11 = (int)plVar21[1];
    do {
      if (iVar11 == 0) {
        plVar21 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar7 = (int)plVar21[1];
      bVar25 = iVar11 == iVar7;
      if (bVar25) {
        *(int *)(plVar21 + 1) = iVar11 + 1;
        iVar7 = iVar11;
      }
      iVar11 = iVar7;
      UNLOCK();
    } while (!bVar25);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
    }
    pvVar6 = local_60;
    if (plVar21 != (longlong *)0x0) {
      if (local_60 != (void *)0x0) {
        FUN_140d2bdd2(&local_60,param_2);
        iVar11 = local_58;
        _Src = local_60;
        ppvVar3 = (void **)((longlong)pvVar6 + 0x90);
        if (ppvVar3 != &local_60) {
          lVar23 = (longlong)local_58;
          *(int *)((longlong)pvVar6 + 0x98) = local_58;
          if (local_58 == 0 && *(int *)((longlong)pvVar6 + 0x9c) == 0) {
            *(undefined4 *)((longlong)pvVar6 + 0x9c) = 0;
          }
          else {
            FUN_1446dd670(ppvVar3,local_58);
            if (iVar11 != 0) {
              memcpy(*ppvVar3,_Src,lVar23 * 2);
            }
          }
        }
        if (local_60 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar21 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
  }
  FUN_140810f5e(&local_60,0);
  iVar11 = (int)param_2[1];
  if (iVar11 == local_58) {
    bVar25 = true;
    if (1 < iVar11) {
      lVar23 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar23);
        uVar10 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)local_60 + lVar23);
        uVar20 = (uint)uVar5;
        if (uVar4 != uVar5) {
          if ((uVar5 | uVar4) < 0x80) {
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_14414069a;
          }
          iVar11 = uVar10 - uVar20;
          goto LAB_1441406d8;
        }
        if (uVar4 == 0) break;
LAB_14414069a:
        lVar23 = lVar23 + 2;
      }
      iVar11 = 0;
LAB_1441406d8:
      bVar25 = iVar11 == 0;
    }
  }
  else {
    bVar25 = local_58 + iVar11 == 1;
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (bVar25) goto LAB_1441406ed;
  FUN_145ad105e(&local_60);
  iVar11 = (int)param_2[1];
  if (iVar11 == local_58) {
    bVar25 = true;
    if (1 < iVar11) {
      lVar23 = 0;
      while( true ) {
        uVar4 = *(ushort *)(*param_2 + lVar23);
        uVar10 = (uint)uVar4;
        uVar5 = *(ushort *)((longlong)local_60 + lVar23);
        uVar20 = (uint)uVar5;
        if (uVar4 != uVar5) {
          if ((uVar5 | uVar4) < 0x80) {
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_144140767;
          }
          iVar11 = uVar10 - uVar20;
          goto LAB_1441407a5;
        }
        if (uVar4 == 0) break;
LAB_144140767:
        lVar23 = lVar23 + 2;
      }
      iVar11 = 0;
LAB_1441407a5:
      bVar25 = iVar11 == 0;
    }
  }
  else {
    bVar25 = local_58 + iVar11 == 1;
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (bVar25) goto LAB_1441406ed;
  FUN_1414b0848(param_1);
  if (param_1[6] == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_1[6] + 0x360);
  }
  cVar8 = FUN_14615e7b6(param_2,uVar13);
  if ((param_1[6] == 0) || (lVar23 = *(longlong *)(param_1[6] + 0x230), lVar23 == 0)) {
    FUN_140056680(&local_90,&DAT_149dfb77a);
  }
  else {
    local_90 = (void *)0x0;
    local_88 = *(int *)(lVar23 + 0x80);
    lVar22 = (longlong)local_88;
    pvVar6 = *(void **)(lVar23 + 0x78);
    if (lVar22 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_88,0);
      memcpy(local_90,pvVar6,lVar22 * 2);
    }
  }
  FUN_140056680(&local_60,L"travelstation");
  pvVar6 = local_90;
  local_b0 = (void *)0x0;
  lVar23 = (longlong)local_88;
  local_a8 = local_88;
  if (lVar23 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,local_88,0);
    memcpy(local_b0,pvVar6,lVar23 * 2);
  }
  FUN_14126d510(&local_a0,&local_b0,&local_60);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (1 < local_98) {
    if (param_1[6] == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(param_1[6] + 0x360);
    }
    FUN_1410d53f0(&local_60,uVar13);
    plVar21 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar21 != (longlong *)0x0) {
      iVar11 = (int)plVar21[1];
      do {
        if (iVar11 == 0) {
          plVar21 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)plVar21[1];
        bVar25 = iVar11 == iVar7;
        if (bVar25) {
          *(int *)(plVar21 + 1) = iVar11 + 1;
          iVar7 = iVar11;
        }
        iVar11 = iVar7;
        UNLOCK();
      } while (!bVar25);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
      }
      pvVar6 = local_60;
      if (plVar21 != (longlong *)0x0) {
        if (local_60 != (void *)0x0) {
          puVar19 = local_a0;
          if (local_98 == 0) {
            puVar19 = &DAT_149dfb77a;
          }
          FUN_1446f470e(&local_b8,puVar19,1);
          if ((*(longlong *)((longlong)pvVar6 + 0xb0) != local_b8) ||
             (*(int *)((longlong)pvVar6 + 0xb8) != 0x6000)) {
            *(longlong *)((longlong)pvVar6 + 0xb0) = local_b8;
            *(undefined4 *)((longlong)pvVar6 + 0xb8) = 0x6000;
            *(undefined8 *)((longlong)pvVar6 + 0xc0) = 0;
          }
        }
        LOCK();
        plVar2 = plVar21 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
    }
  }
  DAT_14cbca3d8 = 0;
  if (DAT_14cbca3dc < 0) {
    FUN_1446f8c06(&DAT_14cbca3d0,0);
  }
  if (DAT_14cbca3d0 != (undefined2 *)0x0) {
    *DAT_14cbca3d0 = 0;
  }
  if (cVar8 == '\0') {
    local_60 = (void *)0x0;
    local_58 = (int)param_2[1];
    lVar23 = (longlong)local_58;
    pvVar6 = (void *)*param_2;
    if (lVar23 == 0) {
      uStack_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,pvVar6,lVar23 * 2);
    }
    FUN_1415024b8(&local_60);
    FUN_140b1283a(&local_70,L"seen_movie_",&local_60);
    _Str = local_70;
    if (local_68 == 0) {
      _Str = L"";
    }
    if (_Str != (wchar_t *)0x0) {
      sVar14 = wcslen(_Str);
      local_120 = 0xffffffff;
      local_128 = 0;
      iVar11 = FUN_1447ee042(&local_90,_Str,sVar14 & 0xffffffff,1);
      if (iVar11 != -1) {
        iVar11 = local_68 + -1;
        if (local_68 == 0) {
          iVar11 = 0;
        }
        FUN_1402980a2(&DAT_14cbca3d0,local_70,iVar11);
      }
    }
    local_120 = 0xffffffff;
    local_128 = 0;
    iVar11 = FUN_1447ee042(&local_90,L"NewGame",7,1);
    if (iVar11 == -1) {
      local_120 = 0xffffffff;
      local_128 = 0;
      iVar11 = FUN_1447ee042(&local_90,L"SkipPrologue",0xc,1);
      if (iVar11 != -1) goto LAB_144140bae;
LAB_144140bc2:
      local_c4 = 0;
    }
    else {
LAB_144140bae:
      lVar23 = FUN_140d27a2a(param_1);
      if ((byte)(*(char *)(lVar23 + 0xb0) - 1U) < 8) goto LAB_144140bc2;
      local_120 = 0xffffffff;
      local_128 = 0;
      uVar13 = FUN_1447ee042(&local_90,L"NewGame",7,1);
      local_c4 = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),(int)uVar13 != -1);
      uVar13 = FUN_140d27a2a(param_1);
      FUN_14154ccb4(uVar13);
    }
    local_120 = 0xffffffff;
    local_128 = 0;
    iVar11 = FUN_1447ee042(&local_90,L"SkipIntro",9,1);
    if (iVar11 != -1) {
      lVar23 = FUN_140d27a2a(param_1);
      *(undefined1 *)(lVar23 + 0xc0) = 1;
    }
    local_120 = 0xffffffff;
    local_128 = 0;
    iVar11 = FUN_1447ee042(&local_90,L"SkipPrologue",0xc,1);
    if (iVar11 != -1) {
      lVar23 = FUN_140d27a2a(param_1);
      *(undefined1 *)(lVar23 + 0xc1) = 1;
      uVar13 = FUN_140d27a2a(param_1);
      FUN_140628abc(uVar13,2);
    }
    if (param_1[6] == 0) {
      local_c0 = 0;
    }
    else {
      local_c0 = *(longlong *)(param_1[6] + 0x360);
    }
    lVar23 = param_1[8];
    local_c9 = cVar8;
    if ((longlong)(int)lVar23 != 0) {
      lVar22 = param_1[7];
      lVar24 = 0;
      do {
        lVar16 = *(longlong *)(lVar22 + lVar24);
        local_120 = 0xffffffff;
        local_128 = 0;
        iVar11 = FUN_1447ee042(&local_90,L"SkipPrologue",0xc,1);
        if (iVar11 != -1) {
          lVar17 = FUN_140d27a2a(param_1);
          FUN_146228670(lVar17 + 0xb8,DAT_14cbca1d0,param_1,lVar16);
        }
        lVar17 = *(longlong *)(lVar16 + 0x30);
        if (lVar17 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_80[0] = FUN_141030f22;
            local_e0 = FUN_14081d0ea;
            local_e8 = &LAB_1459f2e4c;
            local_f0 = local_80;
            local_f8 = &LAB_148c39de3;
            local_100 = &LAB_1457a9eb2;
            local_108 = L"Game";
            local_110 = 0;
            local_118 = 0x10000004;
            local_120 = 0x10;
            local_128 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          lVar17 = *(longlong *)(lVar17 + 0x10);
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar17 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) {
            lVar17 = param_1[9];
            if (lVar17 == 0) {
LAB_144140dae:
              local_c8 = 0;
            }
            else {
              lVar15 = FUN_140b6d0be();
              if (*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar15 + 0x38))
              goto LAB_144140dae;
              local_c8 = 0;
              if ((local_c0 != 0) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30)) {
                iVar11 = FUN_14490d72a(local_c0);
                if (iVar11 != 3) goto LAB_144140dae;
                local_c8 = FUN_148a95c84(lVar17);
              }
            }
            FUN_141237a6a(local_80,lVar16,0);
            lVar16 = FUN_1459afa08(local_80);
            if (lVar16 != 0) {
              if (DAT_14cbae3d8 == 0) {
                local_50 = FUN_141030f22;
                local_e0 = FUN_14081d0ea;
                local_e8 = &LAB_1464f5fc4;
                local_f0 = &local_50;
                local_f8 = &LAB_148c3dd26;
                local_100 = &LAB_1459673ba;
                local_108 = L"Engine";
                local_110 = 0;
                local_118 = 0x10000004;
                local_120 = 0x10;
                local_128 = 0x1360;
                FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
              }
              iVar11 = *(int *)(DAT_14cbae3d8 + 0x38);
              if ((iVar11 <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar11 * 8) ==
                  DAT_14cbae3d8 + 0x30)) {
                if ((byte)((byte)local_c8 | (byte)local_c4) == 1) {
                  if (local_c0 != 0) {
                    lVar17 = FUN_1400f6f32(local_c0);
                    if (lVar17 == 0) {
                      lVar17 = 0;
                    }
                    else {
                      lVar17 = *(longlong *)(lVar17 + 0x30);
                    }
                    lVar15 = FUN_1400f6f32(local_c0);
                    if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x68) != 0 && lVar17 != 0)) {
                      FUN_14042af24(*(longlong *)(lVar15 + 0x68),&local_50,lVar16);
                      if (-1 < (short)local_50) {
                        FUN_146563402(lVar17,&local_50);
                      }
                    }
                  }
                  local_50 = (code *)0x0;
                  uVar13 = FUN_1403b0700(lVar16);
                  FUN_145d0a0b4(uVar13,&local_50,1);
                  FUN_145cb0266(lVar16,1);
                }
                else {
                  cVar8 = FUN_146022f14(lVar16,CONCAT71((int7)(int3)((uint)iVar11 >> 8),1));
                  if (cVar8 == '\0') {
                    FUN_148dc08da(lVar16,param_2);
                  }
                }
              }
            }
          }
        }
        lVar24 = lVar24 + 8;
      } while ((longlong)(int)lVar23 * 8 != lVar24);
    }
    lVar23 = FUN_140d27a2a(param_1);
    if (((byte)(*(char *)(lVar23 + 0xb0) - 1U) < 8) &&
       (lVar23 = FUN_140d27a2a(param_1), *(char *)(lVar23 + 0xc0) == '\x01')) {
      uVar13 = FUN_140d27a2a(param_1);
      FUN_1441aa772(uVar13);
    }
    cVar8 = local_c9;
    if (local_70 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar21 = param_1 + 0x40;
  FUN_14144f736(plVar21,&DAT_14cbca3b0,0);
  uVar12 = (**(code **)(*param_1 + 0x458))(param_1,0xffffffff);
  FUN_14144f736(plVar21,&DAT_14cbca3b8,uVar12);
  bVar9 = (**(code **)(*param_1 + 0x498))(param_1);
  if ((bVar9 < 9) && ((0x1a0U >> (bVar9 & 0x1f) & 1) != 0)) {
    if ((cVar8 == '\0') || (iVar11 = FUN_14490d72a(lVar18), iVar11 == 3)) {
      local_120 = 0xffffffff;
      local_128 = 0;
      iVar11 = FUN_1447ee042(&local_90,L"SkipPrologue",0xc,1);
      if (iVar11 == -1) {
LAB_14414119e:
        FUN_1416b967c(param_1);
      }
      else {
        lVar18 = FUN_140d27a2a(param_1);
        *(undefined1 *)(lVar18 + 0xc1) = 1;
        uVar13 = FUN_140d27a2a(param_1);
        cVar8 = FUN_14601018c(uVar13,param_2);
        if (cVar8 == '\0') goto LAB_14414119e;
      }
      local_60 = (void *)CONCAT71(local_60._1_7_,6);
    }
    else if (*(char *)((longlong)param_1 + 0x4d9) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x4d9) = 4;
    }
    FUN_140627eda(plVar21);
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1441406ed:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144141260 FUN_144141260 body=556 status=ok
// SIG undefined FUN_144141260(void)

void FUN_144141260(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  char *local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60 [3];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    FUN_140056680(local_80,&DAT_149e2b65a);
    FUN_146626e92(param_1,0);
LAB_14414130d:
    FUN_1415aa586(param_1 + 0x40,&DAT_14cbca7b8);
    if ((param_2 != 0) && (DAT_14c872bf2 != '\0')) goto LAB_144141336;
    if (param_2 != 0) goto LAB_1441413dd;
  }
  else {
    local_60[0] = *(longlong *)(param_2 + 0x18);
    FUN_1400021e4(local_60,local_80);
    FUN_146626e92(param_1,param_2);
    local_98 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    FUN_1400021e4(&local_98,local_60);
    cVar2 = FUN_145ac4158(local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar2 == '\0') goto LAB_14414130d;
    if (DAT_14c872bf2 != '\x01') goto LAB_1441413dd;
LAB_144141336:
    bVar1 = (**(code **)(*param_1 + 0x498))(param_1);
    if ((bVar1 < 3) &&
       ((lVar4 = FUN_140149a73(param_2,0), lVar4 != 0 &&
        (plVar5 = (longlong *)FUN_145781ab4(lVar4), plVar5 != (longlong *)0x0)))) {
      uStack_94 = 0;
      uStack_90 = 0;
      FUN_14052b5e0(&local_98,"DemoMode",0);
      local_88 = "DemoMode";
      local_68 = uStack_90;
      local_70 = CONCAT44(uStack_94,local_98);
      FUN_1448075d0(local_60);
      local_a8 = 0;
      (**(code **)(*plVar5 + 0x38))(plVar5,local_60,2,0);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
LAB_1441413dd:
    if (*(longlong *)(param_2 + 0x748) != 0) {
      iVar3 = FUN_14490d72a(param_2);
      if ((iVar3 == 3) && ((char)param_1[0xa6] != '\0')) goto LAB_144141445;
      if ((longlong)*(int *)(param_2 + 0x90) != 0) {
        plVar5 = *(longlong **)(param_2 + 0x88);
        lVar4 = (longlong)*(int *)(param_2 + 0x90) << 3;
        do {
          if ((*plVar5 != 0) && (cVar2 = FUN_140898d24(), cVar2 != '\0')) {
            if (plVar5 != (longlong *)0x0) goto LAB_144141445;
            break;
          }
          plVar5 = plVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
  }
  FUN_14144f736(param_1 + 0x40,&DAT_14cbca3b0,1);
LAB_144141445:
  *(undefined1 *)(param_1 + 0xa6) = 0;
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14414148e FUN_14414148e body=173 status=ok
// SIG undefined FUN_14414148e(void)

void FUN_14414148e(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    return;
  }
  if (0 < (int)param_1[8]) {
    lVar2 = *(longlong *)param_1[7];
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_144141510;
    lVar2 = FUN_1401ca7f2(lVar2);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x3c) != 0)) &&
        (uVar1 = *(uint *)(lVar2 + 0x38), -1 < (int)uVar1)) &&
       ((((int)uVar1 < DAT_14c9647dc &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)) &&
        ((*(int *)(lVar3 + 0x10) == *(int *)(lVar2 + 0x3c) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))))) {
      return;
    }
  }
LAB_144141510:
  (**(code **)(*param_1 + 0x4e8))(param_1,0);
  FUN_1457cd276(param_1,0,1);
  return;
}



// FUNCTION 14414153c FUN_14414153c body=3351 status=ok
// SIG undefined FUN_14414153c(void)

void FUN_14414153c(longlong param_1,char *param_2)

{
  void *pvVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined2 *puVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  longlong local_e8 [2];
  undefined2 *local_d8;
  int local_d0;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  int local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined4 local_ac;
  code *local_a8;
  int local_a0;
  undefined4 local_9c;
  code *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined **local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((((*(int *)(param_1 + 0x54) == 0) || (uVar2 = *(uint *)(param_1 + 0x50), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0 ||
       (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x54))))) ||
     ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) goto LAB_1441415a4;
  FUN_1459ae0ed();
  if (*param_2 != '\b') {
    if (*param_2 != '\x05') goto LAB_1441415a4;
    FUN_140056680(&local_a8);
    iVar6 = local_a0 + -1;
    if (local_a0 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar6 != iVar12);
    }
    puVar4 = (undefined8 *)FUN_148d385b6(param_1);
    local_98 = (code *)0x0;
    local_90 = *(int *)(puVar4 + 1);
    lVar7 = (longlong)local_90;
    pvVar1 = (void *)*puVar4;
    if (lVar7 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,pvVar1,lVar7 * 2);
    }
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((1 < local_90) || (FUN_14020fad6(&local_98,&DAT_14b9707d2), 1 < local_90)) {
      FUN_140002266(&local_b8,L"t.MaxFPS %ls",local_98);
      puVar10 = local_b8;
      if (local_b0 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140056680(&local_a8,puVar10);
      if (local_b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = DAT_14cb0d2b0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      pcVar9 = local_a8;
      if (local_a0 == 0) {
        pcVar9 = (code *)&DAT_149dfb77a;
      }
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_144142061:
        lVar13 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x50);
        lVar13 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 == (longlong *)0x0) ||
             (((int)plVar5[2] != *(int *)(param_1 + 0x54) ||
              ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_144142061;
          lVar13 = *plVar5;
        }
      }
      if (*(longlong *)(lVar13 + 0x30) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar13 + 0x30) + 0x360);
      }
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 8))
                ((longlong *)(lVar7 + 0x28),uVar11,pcVar9,&DAT_14c872ee0);
      if (local_a8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140056680(&local_b8);
    iVar6 = local_b0 + -1;
    if (local_b0 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar6 != iVar12);
    }
    puVar4 = (undefined8 *)FUN_148d385b6(param_1);
    local_a8 = (code *)0x0;
    local_a0 = *(int *)(puVar4 + 1);
    lVar7 = (longlong)local_a0;
    pvVar1 = (void *)*puVar4;
    if (lVar7 == 0) {
      local_9c = 0;
    }
    else {
      FUN_1446dd670(&local_a8,local_a0,0);
      memcpy(local_a8,pvVar1,lVar7 * 2);
    }
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_c8);
    iVar6 = local_c0 + -1;
    if (local_c0 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      iVar12 = 0;
      do {
        iVar12 = iVar12 + 1;
      } while (iVar6 != iVar12);
    }
    puVar4 = (undefined8 *)FUN_148d385b6(param_1);
    local_b8 = (undefined2 *)0x0;
    local_b0 = *(int *)(puVar4 + 1);
    lVar7 = (longlong)local_b0;
    pvVar1 = (void *)*puVar4;
    if (lVar7 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_b0,0);
      memcpy(local_b8,pvVar1,lVar7 * 2);
    }
    if (CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8)) != 0) {
      FUN_1400020a8();
    }
    lVar7 = DAT_14cb0d2b0;
    pcVar9 = local_a8;
    if (local_a0 == 0) {
      pcVar9 = (code *)&DAT_149dfb77a;
    }
    lVar13 = 0;
    while( true ) {
      uVar15 = *(ushort *)(pcVar9 + lVar13);
      uVar8 = (ulonglong)uVar15;
      uVar16 = *(ushort *)((longlong)L"local" + lVar13);
      if (uVar15 != uVar16) break;
      if (uVar15 == 0) goto LAB_144141d63;
LAB_144141c15:
      lVar13 = lVar13 + 2;
    }
    if ((uVar16 | uVar15) < 0x80) {
      uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar14 = (ulonglong)uVar16;
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar14]) goto LAB_144141c15;
    }
    if (uVar15 != uVar16) {
      if (*(int *)(param_1 + 0x54) == 0) {
LAB_144142182:
        lVar7 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x50);
        lVar7 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar5 == (longlong *)0x0) ||
             (((int)plVar5[2] != *(int *)(param_1 + 0x54) ||
              ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_144142182;
          lVar7 = *plVar5;
        }
      }
      if (*(int *)(lVar7 + 0x40) < 1) goto LAB_144141e13;
      lVar7 = **(longlong **)(lVar7 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
        FUN_1456cec3c(lVar7);
      }
      else if (lVar7 == 0) goto LAB_144141e13;
      pcVar9 = local_a8;
      if (local_a0 == 0) {
        pcVar9 = (code *)&DAT_149dfb77a;
      }
      lVar13 = 0;
      goto LAB_144141cde;
    }
LAB_144141d63:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    if (*(int *)(param_1 + 0x54) == 0) {
LAB_14414205a:
      lVar13 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x50);
      lVar13 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar5 == (longlong *)0x0) ||
           (((int)plVar5[2] != *(int *)(param_1 + 0x54) ||
            ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_14414205a;
        lVar13 = *plVar5;
      }
    }
    if (*(longlong *)(lVar13 + 0x30) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar13 + 0x30) + 0x360);
    }
    (**(code **)(*(longlong *)(lVar7 + 0x28) + 8))
              ((longlong *)(lVar7 + 0x28),uVar11,L"open 127.0.0.1?bUseIPSockets",&DAT_14c872ee0);
    goto LAB_144141e13;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1441418fa:
    lVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)
          ))) goto LAB_1441418fa;
      lVar7 = *plVar5;
    }
  }
  if (((*(longlong *)(lVar7 + 0x30) == 0) ||
      (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0x360), lVar7 == 0)) ||
     (iVar6 = FUN_14490d72a(), iVar6 != 3)) goto LAB_1441415a4;
  iVar6 = *(int *)(param_1 + 0x54);
  if (iVar6 == 0) {
LAB_144141e4c:
    lVar13 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar13 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != iVar6 || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_144141e4c;
      lVar13 = *plVar5;
    }
  }
  if (*(int *)(lVar13 + 0x40) < 1) goto LAB_1441415a4;
  lVar13 = **(longlong **)(lVar13 + 0x38);
  if ((DAT_14c950c29 == '\x01') && (lVar13 != 0)) {
    FUN_1456cec3c();
    iVar6 = *(int *)(param_1 + 0x54);
  }
  else if (lVar13 == 0) goto LAB_1441415a4;
  if (iVar6 == 0) {
LAB_144141f06:
    lVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x50);
    lVar3 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != iVar6 || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_144141f06;
      lVar3 = *plVar5;
    }
  }
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  lVar3 = FUN_140334a94(lVar13,uVar11);
  if (lVar3 == 0) goto LAB_1441415a4;
  FUN_140056680(&local_98);
  uVar8 = 0;
  iVar6 = local_90 + -1;
  if (local_90 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    pcVar9 = local_98;
    if (local_90 == 0) {
      pcVar9 = (code *)&DAT_149dfb77a;
    }
    lVar3 = 0;
    uVar8 = 0;
    do {
      uVar2 = ((uint)*(ushort *)(pcVar9 + lVar3 * 2) +
              (uint)(0x19 < *(ushort *)(pcVar9 + lVar3 * 2) - 0x61) * 0x20) - 0x20;
      uVar17 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar2) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar17 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar2 >> 8 & 0xff) * 4));
      lVar3 = lVar3 + 1;
    } while (iVar6 != (int)lVar3);
  }
  puVar4 = (undefined8 *)FUN_148d385b6(param_1,uVar8,&local_98);
  local_a8 = (code *)0x0;
  local_a0 = *(int *)(puVar4 + 1);
  lVar3 = (longlong)local_a0;
  pvVar1 = (void *)*puVar4;
  if (lVar3 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar1,lVar3 * 2);
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 - 2U < 0x7fffffff) {
    FUN_140002266(&local_c8,L"setname %ls",local_a8);
    if (local_c0 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
    }
    FUN_140056680(&local_98,puVar10);
    FUN_14121a794(lVar13,&local_b8,&local_98,1);
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8)) != 0) {
      FUN_1400020a8();
    }
  }
  local_d8 = (undefined2 *)0x0;
  if (*(longlong *)(lVar7 + 0x1f0) == 0) {
    puVar4 = (undefined8 *)(lVar7 + 0x458);
  }
  else {
    puVar4 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
  }
  local_98 = FUN_1441541a4;
  local_88 = 0;
  local_78 = &PTR_LAB_14b9725b0;
  local_58 = 3;
  local_f8 = &local_c8;
  local_c8 = 0;
  uStack_c4 = 0x40c00000;
  local_70 = lVar7;
  local_68 = lVar13;
  local_60 = param_1;
  FUN_1406f4044(*puVar4,&local_d8,&local_98,0x40c00000);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  pcVar9 = local_a8;
  goto LAB_144141e39;
LAB_144141cde:
  uVar15 = *(ushort *)(pcVar9 + lVar13);
  uVar8 = (ulonglong)uVar15;
  uVar16 = *(ushort *)((longlong)&DAT_14b97085c + lVar13);
  if (uVar15 == uVar16) {
    if (uVar15 == 0) goto LAB_144141d23;
LAB_144141cf3:
    lVar13 = lVar13 + 2;
    goto LAB_144141cde;
  }
  if ((uVar16 | uVar15) < 0x80) {
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar14 = (ulonglong)uVar16;
    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar14]) goto LAB_144141cf3;
  }
  if (uVar15 != uVar16) goto LAB_144142068;
LAB_144141d23:
  if (local_b0 - 2U < 0x7fffffff) {
    FUN_140002266(&local_d8,L"gbx.Server.JoinCloud %ls",local_b8);
    puVar10 = local_d8;
    if (local_d0 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
LAB_144142102:
    FUN_140056680(&local_c8,puVar10);
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c0 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8));
    }
    FUN_140056680(local_e8,puVar10);
    FUN_14121a794(lVar7,&local_d8,local_e8,1);
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_c4,CONCAT22(uStack_c6,local_c8)) != 0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_144142068:
    lVar13 = 0;
    while( true ) {
      uVar15 = *(ushort *)(pcVar9 + lVar13);
      uVar8 = (ulonglong)uVar15;
      uVar16 = *(ushort *)((longlong)&DAT_14b97089a + lVar13);
      if (uVar15 != uVar16) break;
      if (uVar15 == 0) goto LAB_1441420b6;
LAB_144142086:
      lVar13 = lVar13 + 2;
    }
    if ((uVar16 | uVar15) < 0x80) {
      uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar14 = (ulonglong)uVar16;
      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar14]) goto LAB_144142086;
    }
    if (uVar15 != uVar16) goto LAB_144141e13;
LAB_1441420b6:
    if (local_b0 - 2U < 0x7fffffff) {
      FUN_140002266(&local_d8,L"gbx.Server.JoinDev %ls",local_b8);
      puVar10 = &DAT_149dfb77a;
      if (local_d0 != 0) {
        puVar10 = local_d8;
      }
      goto LAB_144142102;
    }
  }
LAB_144141e13:
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  pcVar9 = local_98;
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
    pcVar9 = local_98;
  }
LAB_144141e39:
  if (pcVar9 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1441415a4:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144142254 FUN_144142254 body=8227 status=ok
// SIG undefined FUN_144142254(void)

void FUN_144142254(longlong *param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  size_t sVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined2 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 **ppuVar25;
  ulonglong uVar26;
  undefined1 auStack_5c8 [32];
  uint local_5a8;
  undefined1 local_5a0;
  undefined8 local_598;
  undefined4 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  longlong *local_558;
  longlong *local_550;
  longlong local_548;
  int local_540;
  longlong local_538;
  undefined8 local_530;
  longlong local_528;
  int local_520;
  int local_51c;
  longlong local_518;
  undefined8 uStack_510;
  undefined2 *local_508;
  int local_500;
  undefined2 *local_4f8;
  int local_4f0;
  byte local_4e8;
  undefined7 uStack_4e7;
  int local_4e0;
  void *local_4d8;
  undefined8 uStack_4d0;
  undefined8 *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  undefined2 *local_4b8;
  undefined8 uStack_4b0;
  longlong *local_4a8;
  undefined8 uStack_4a0;
  longlong local_498 [2];
  undefined8 *local_488;
  undefined8 uStack_480;
  undefined2 *local_478;
  char local_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined8 local_45c;
  undefined4 local_454;
  longlong local_448;
  undefined4 local_440;
  undefined2 local_68 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  local_550 = param_4;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(local_498,&DAT_14c846b20);
  local_4a8 = (longlong *)0x0;
  uStack_4a0 = 0;
  FUN_1403de9f2(local_498,&local_4a8,&DAT_149e001d8,1);
  uVar14 = (ulonglong)(int)(uint)uStack_4a0;
  uVar26 = 0xffffffff;
  if (uVar14 != 0) {
    plVar7 = local_4a8;
LAB_14414230d:
    puVar19 = &DAT_149dfb77a;
    if ((int)plVar7[1] != 0) {
      puVar19 = (undefined2 *)*plVar7;
    }
    lVar16 = 0xc;
    lVar23 = 0;
    do {
      uVar1 = *(ushort *)((longlong)puVar19 + lVar23);
      uVar2 = *(ushort *)((longlong)L"-initialuser" + lVar23);
      if (uVar1 == uVar2) {
        if (uVar1 == 0) goto LAB_1441423b3;
      }
      else {
        local_558 = param_1;
        if (0x7f < (uVar2 | uVar1)) {
          iVar12 = (uint)uVar1 - (uint)uVar2;
          goto LAB_14414238c;
        }
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto LAB_144142389;
      }
      if (lVar16 == 1) goto LAB_1441423b3;
      lVar16 = lVar16 + -1;
      lVar23 = lVar23 + 2;
    } while( true );
  }
LAB_1441423bd:
  uVar15 = (uint)uVar26;
  if (((param_1[6] == 0) || (lVar16 = *(longlong *)(param_1[6] + 0x360), lVar16 == 0)) ||
     (*(longlong *)(lVar16 + 0x1f0) == 0)) {
LAB_1441423f3:
    local_4b8 = (undefined2 *)0x0;
    uStack_4b0 = 0;
LAB_1441423fe:
    plVar7 = local_4a8;
    if ((-1 < (int)uVar15) && ((int)uVar15 < (int)uVar14)) {
      iVar12 = (int)uVar14;
      if (local_4a8[uVar26 * 2] != 0) {
        FUN_1400020a8();
        iVar12 = (uint)uStack_4a0;
      }
      if (~uVar15 + iVar12 != 0) {
        memmove(plVar7 + uVar26 * 2,plVar7 + uVar26 * 2 + 2,(longlong)(int)(~uVar15 + iVar12) << 4);
        iVar12 = (uint)uStack_4a0;
      }
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,iVar12 + -1);
      FUN_140b12644();
      goto LAB_144142467;
    }
  }
  else {
    lVar16 = FUN_14116599c();
    if (lVar16 == 0) {
      uVar14 = uStack_4a0 & 0xffffffff;
      goto LAB_1441423f3;
    }
    FUN_148d923ac(lVar16,&local_4b8,param_3);
    uVar10 = (uint)uStack_4a0;
    uVar14 = uStack_4a0 & 0xffffffff;
    if ((int)uStack_4b0 < 2) goto LAB_1441423fe;
    puVar19 = local_4b8;
    if ((int)(uint)uStack_4a0 <= (int)uVar15 || (int)uVar15 < 0) {
      uVar26 = (ulonglong)(int)(uint)uStack_4a0;
      uVar15 = (uint)uStack_4a0 + 1;
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,uVar15);
      if (uStack_4a0._4_4_ < uVar15) {
        FUN_1447a1bd6(&local_4a8,uVar14);
      }
      local_4a8[uVar26 * 2] = 0;
      (local_4a8 + uVar26 * 2)[1] = 0;
      puVar19 = local_4b8;
      uVar15 = uVar10;
      if ((int)uStack_4b0 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
    }
    FUN_140002266(&local_488,L"-initialuser=%s",puVar19);
    ppuVar25 = (undefined8 **)(local_4a8 + uVar26 * 2);
    if (ppuVar25 != &local_488) {
      if (*ppuVar25 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *ppuVar25 = local_488;
      local_488 = (undefined8 *)0x0;
      *(undefined4 *)(ppuVar25 + 1) = (undefined4)uStack_480;
      *(undefined4 *)((longlong)ppuVar25 + 0xc) = uStack_480._4_4_;
      uStack_480 = (undefined8 *)0x0;
    }
    if (local_488 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
LAB_144142467:
    uVar14 = uStack_4a0 & 0xffffffff;
  }
  plVar7 = local_4a8;
  iVar12 = (int)uVar14;
  uVar24 = (ulonglong)iVar12;
  uVar26 = 0xffffffff;
  if (iVar12 != 0) {
    plVar21 = local_4a8 + uVar24 * 2;
    plVar6 = local_4a8;
LAB_1441424a6:
    puVar19 = &DAT_149dfb77a;
    if ((int)plVar6[1] != 0) {
      puVar19 = (undefined2 *)*plVar6;
    }
    lVar16 = 0xb;
    lVar23 = 0;
    do {
      uVar1 = *(ushort *)((longlong)puVar19 + lVar23);
      uVar2 = *(ushort *)((longlong)L"-inviteinfo" + lVar23);
      if (uVar1 == uVar2) {
        if (uVar1 == 0) goto LAB_14414253b;
      }
      else {
        local_558 = plVar21;
        if (0x7f < (uVar2 | uVar1)) {
          iVar11 = (uint)uVar1 - (uint)uVar2;
          goto LAB_144142513;
        }
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto LAB_144142510;
      }
      if (lVar16 == 1) goto LAB_14414253b;
      lVar16 = lVar16 + -1;
      lVar23 = lVar23 + 2;
    } while( true );
  }
LAB_144142544:
  uVar10 = (uint)uVar26;
  if (*(int *)(param_2 + 1) < 2) {
    if (iVar12 > (int)uVar10 && (int)uVar10 >= 0) {
      lVar16 = uVar26 * 0x10;
      if (local_4a8[uVar26 * 2] != 0) {
        FUN_1400020a8();
        iVar12 = (uint)uStack_4a0;
      }
LAB_144142693:
      if (~uVar10 + iVar12 != 0) {
        memmove((void *)((longlong)plVar7 + lVar16),(void *)((longlong)plVar7 + lVar16 + 0x10),
                (longlong)(int)(~uVar10 + iVar12) << 4);
        iVar12 = (uint)uStack_4a0;
      }
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,iVar12 + -1);
      FUN_140b12644();
    }
  }
  else {
    if (iVar12 <= (int)uVar10 || (int)uVar10 < 0) {
      uStack_4a0 = CONCAT44(uStack_4a0._4_4_,iVar12 + 1U);
      if (uStack_4a0._4_4_ < iVar12 + 1U) {
        FUN_1447a1bd6(&local_4a8,uVar14 & 0xffffffff);
      }
      local_4a8[uVar24 * 2] = 0;
      (local_4a8 + uVar24 * 2)[1] = 0;
      uVar26 = uVar24;
      if (*(int *)(param_2 + 1) != 0) goto LAB_1441425c7;
      puVar19 = &DAT_149dfb77a;
    }
    else {
LAB_1441425c7:
      puVar19 = (undefined2 *)*param_2;
      uVar24 = uVar26;
    }
    FUN_140002266(&local_488,L"-inviteinfo=%s",puVar19);
    ppuVar25 = (undefined8 **)(local_4a8 + uVar24 * 2);
    if (ppuVar25 != &local_488) {
      if (*ppuVar25 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      *ppuVar25 = local_488;
      local_488 = (undefined8 *)0x0;
      *(undefined4 *)(ppuVar25 + 1) = (undefined4)uStack_480;
      *(undefined4 *)((longlong)ppuVar25 + 0xc) = uStack_480._4_4_;
      uStack_480 = (undefined8 *)0x0;
    }
    if (local_488 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    plVar7 = local_4a8;
    if ((int)uVar15 < (int)(uint)uStack_4a0 && -1 < (int)uVar15) {
      lVar16 = (ulonglong)uVar15 * 0x10;
      iVar12 = (uint)uStack_4a0;
      uVar10 = uVar15;
      if (local_4a8[(ulonglong)uVar15 * 2] != 0) {
        FUN_1400020a8();
        iVar12 = (uint)uStack_4a0;
      }
      goto LAB_144142693;
    }
  }
  local_4c8 = (undefined8 *)0x0;
  iVar12 = *(int *)(param_5 + 1);
  uVar9 = *param_5;
  local_4c0 = iVar12;
  if (iVar12 == 0) {
    local_4bc = 0;
  }
  else {
    FUN_140b856de(&local_4c8,iVar12,0);
    FUN_140b8566a(local_4c8,uVar9,iVar12);
  }
  plVar7 = local_550;
  FUN_140056680(&local_488,L"-nolauncher");
  FUN_1405e9454(&local_4c8,&local_488);
  if (local_488 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_488,L"-nozone");
  FUN_1405e9454(&local_4c8,&local_488);
  if (local_488 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_488,L"-ozone");
  FUN_1405e9454(&local_4c8,&local_488);
  if (local_488 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)local_4c0 != 0) {
    lVar16 = (longlong)local_4c0 << 4;
    puVar17 = local_4c8;
    do {
      local_488 = puVar17;
      FUN_140c8411c(&local_4a8,&local_488);
      puVar17 = puVar17 + 2;
      lVar16 = lVar16 + -0x10;
    } while (lVar16 != 0);
  }
  FUN_140b7fa3a(&local_4a8,plVar7);
  FUN_140056680(&local_488,L"-relaunch");
  FUN_1405e9454(&local_4a8,&local_488);
  if (local_488 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_468 = 0;
  local_460 = 0;
  local_488 = (undefined8 *)0x0;
  uStack_480 = (undefined8 *)0x0;
  local_45c = 0xffffffff00000080;
  local_454 = 0;
  local_448 = 0;
  local_440 = 0;
  if (0 < (int)(uint)uStack_4a0) {
    plVar7 = (longlong *)0x0;
LAB_1441428b7:
    uVar15 = (uint)plVar7;
    lVar16 = (longlong)(int)uVar15;
    plVar21 = local_4a8 + lVar16 * 2;
    local_4e8 = 0;
    FUN_14482b35e(&local_488,&local_4d8,plVar21);
    if (local_4e8 == 0) {
      iVar12 = (int)plVar21[1];
      if ((longlong)iVar12 != 0) {
        lVar23 = (longlong)iVar12 * 2;
        lVar20 = 0;
        do {
          if (*(short *)(*plVar21 + lVar20 * 2) == 0x3d) {
            if ((int)lVar20 != -1) {
              uVar10 = iVar12 - 1;
              if (iVar12 == 0) {
                uVar10 = 0;
              }
              uVar18 = uVar10 - (int)lVar20;
              if ((int)uVar10 <= (int)uVar18) {
                uVar18 = uVar10;
              }
              uVar14 = (ulonglong)uVar18;
              if ((int)uVar18 < 1) {
                uVar14 = 0;
              }
              FUN_14006620a(&local_4d8,*plVar21,uVar14);
              if ((int)uVar15 < 1) goto LAB_144142a3a;
              iVar12 = (int)plVar21[1];
              uVar14 = (ulonglong)(iVar12 - 1);
              if (iVar12 == 0) {
                uVar14 = 0;
              }
              puVar19 = &DAT_149dfb77a;
              if (iVar12 != 0) {
                puVar19 = (undefined2 *)*plVar21;
              }
              local_550 = local_4a8;
              plVar21 = (longlong *)0x0;
              goto LAB_144142985;
            }
            break;
          }
          lVar20 = lVar20 + 1;
          lVar23 = lVar23 + -2;
        } while (lVar23 != 0);
      }
    }
    goto LAB_144142a53;
  }
LAB_144142ad8:
  FUN_1408910a4(&local_488);
  plVar7 = local_4a8;
  local_4d8 = (void *)0x0;
  uStack_4d0 = 0;
  lVar16 = (longlong)(int)(uint)uStack_4a0;
  if (lVar16 != 0) {
    iVar12 = 1;
    lVar23 = 0;
    do {
      if ((char)iVar12 == '\0') {
        FUN_1400020e8(&local_4d8,&DAT_149e001d8,1);
      }
      iVar11 = *(int *)((longlong)plVar7 + lVar23 + 8);
      iVar12 = 0;
      iVar5 = iVar11 + -1;
      if (iVar11 == 0) {
        iVar5 = iVar12;
      }
      FUN_1400020e8(&local_4d8,*(undefined8 *)((longlong)plVar7 + lVar23),iVar5);
      lVar23 = lVar23 + 0x10;
    } while (lVar16 * 0x10 != lVar23);
  }
  iVar12 = *DAT_14cbca360;
  plVar7 = (longlong *)FUN_140a68038(1);
  if ((iVar12 == 2) || (cVar3 = (**(code **)(*plVar7 + 0x210))(plVar7,&local_4d8), cVar3 == '\0')) {
    DVar4 = GetCurrentProcessId();
    FUN_1468302fe(&local_4e8,DVar4);
    local_470 = '\0';
    local_478 = local_68;
    local_488 = &local_468;
    uStack_480 = &local_468;
    sVar8 = wcslen(&DAT_14c764000);
    iVar11 = (int)sVar8;
    puVar17 = &local_468;
    if (0x1ffffffffff < (longlong)(sVar8 << 0x20)) {
      FUN_140213274(&local_488,(longlong)iVar11);
      puVar17 = uStack_480;
    }
    if (iVar11 != 0) {
      memcpy(puVar17,&DAT_14c764000,(longlong)(sVar8 << 0x20) >> 0x1f);
      puVar17 = (undefined8 *)((longlong)puVar17 + (longlong)iVar11 * 2);
      uStack_480 = puVar17;
    }
    if (local_478 <= (undefined2 *)((longlong)puVar17 + 2)) {
      FUN_140213274(&local_488,1);
      puVar17 = uStack_480;
    }
    _Src = local_4d8;
    *(undefined2 *)puVar17 = 0x20;
    uStack_480 = (undefined8 *)((longlong)puVar17 + 2);
    uVar15 = (uint)uStack_4d0;
    iVar11 = (uint)uStack_4d0 - 1;
    if ((uint)uStack_4d0 == 0) {
      iVar11 = 0;
    }
    lVar16 = (longlong)iVar11;
    if (local_478 <= (undefined2 *)((longlong)puVar17 + lVar16 * 2 + 2)) {
      FUN_140213274(&local_488,lVar16);
    }
    puVar19 = (undefined2 *)uStack_480;
    if (1 < uVar15) {
      memcpy(uStack_480,_Src,lVar16 * 2);
      uStack_480 = (undefined8 *)(puVar19 + lVar16);
    }
    if (iVar12 == 0) {
      *(undefined2 *)uStack_480 = 0;
      if (local_4e0 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = (undefined2 *)CONCAT71(uStack_4e7,local_4e8);
      }
      local_568 = 0;
      local_578 = 0;
      uStack_570 = 0;
      local_588 = 0;
      uStack_580 = 0;
      local_598 = 0;
      local_5a0 = 0;
      local_5a8 = local_5a8 & 0xffffff00;
      local_590 = 0;
      FUN_14279b518(&local_4f8,puVar19,local_488,1);
    }
    else if (0 < iVar12) {
      FUN_145ddbfd7(&local_4f8);
      FUN_145ddba8c();
      FUN_144a06ecc(&local_508,&local_4e8);
      local_518 = 0;
      uStack_510 = 0;
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) {
LAB_14414426a:
        local_530 = 0;
        local_538 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (iVar13 < 0) {
LAB_144144271:
        local_530 = 0;
        local_538 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar13);
      }
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      puVar19 = local_508;
      if (local_500 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_538,L"echo Attempting to relaunch process: %s... ",puVar19);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538,L"set \"TARGET_PID=%u\"",DVar4);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      if (local_4e0 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = (undefined2 *)CONCAT71(uStack_4e7,local_4e8);
      }
      FUN_140002266(&local_538,L"echo Starting process: %s... ",puVar19);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      *(undefined2 *)uStack_480 = 0;
      if (local_4e0 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = (undefined2 *)CONCAT71(uStack_4e7,local_4e8);
      }
      FUN_140002266(&local_538,L"start \"\" \"%s\" %s",puVar19);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      FUN_140002266(&local_538);
      iVar12 = (int)local_530;
      iVar5 = ((int)local_530 == 0) + 2;
      local_528 = local_538;
      local_538 = 0;
      local_520 = (int)local_530;
      iVar11 = local_530._4_4_;
      local_51c = local_530._4_4_;
      local_530 = 0;
      iVar13 = iVar5 + iVar12;
      if (iVar13 < iVar12) goto LAB_14414426a;
      if (iVar13 < 0) goto LAB_144144271;
      if (iVar11 < iVar13) {
        FUN_1446f8c06(&local_528);
      }
      FUN_1400020e8(&local_528,&DAT_149e02010,2);
      iVar12 = local_520 + -1;
      if (local_520 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_518,local_528,iVar12);
      if (local_528 != 0) {
        FUN_1400020a8();
      }
      if (local_538 != 0) {
        FUN_1400020a8();
      }
      uVar9 = FUN_14054d1d4();
      puVar19 = local_4f8;
      if (local_4f0 == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      local_548 = local_518;
      local_540 = (int)uStack_510 + -1;
      if ((int)uStack_510 == 0) {
        local_540 = 0;
      }
      local_5a8 = 0;
      FUN_1415d54ec(&local_548,puVar19,4,uVar9);
      if (local_518 != 0) {
        FUN_1400020a8();
      }
      if (local_508 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbca448) && (FUN_144b3d300(&DAT_14cbca448), DAT_14cbca448 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbca440 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"gbx.AppRelaunchPath",1)
        ;
        _Init_thread_footer(&DAT_14cbca448);
      }
      if (DAT_14cbca440 != (longlong *)0x0) {
        puVar19 = local_4f8;
        if (local_4f0 == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        (**(code **)(*DAT_14cbca440 + 0x98))(DAT_14cbca440,puVar19,0xd000000,0);
      }
      if (local_4f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_470 == '\x01') {
      FUN_1400020a8(local_488);
    }
    if (CONCAT71(uStack_4e7,local_4e8) != 0) {
      FUN_1400020a8();
    }
  }
  FUN_142797bc0(0,0);
  if (local_4d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_4c8,local_4c0);
  if (local_4c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_4b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_4a8,uStack_4a0 & 0xffffffff);
  if (local_4a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_498[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144142389:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_14414238c:
  if (iVar12 == 0) {
LAB_1441423b3:
    uVar26 = (ulonglong)((longlong)plVar7 - (longlong)local_4a8) >> 4 & 0xffffffff;
    goto LAB_1441423bd;
  }
  plVar7 = plVar7 + 2;
  if (plVar7 == local_4a8 + uVar14 * 2) goto LAB_1441423bd;
  goto LAB_14414230d;
LAB_144142510:
  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_144142513:
  if (iVar11 == 0) {
LAB_14414253b:
    uVar26 = (ulonglong)((longlong)plVar6 - (longlong)local_4a8) >> 4 & 0xffffffff;
    goto LAB_144142544;
  }
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar21) goto LAB_144142544;
  goto LAB_1441424a6;
LAB_144142a0a:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_144142a0d:
  if (iVar12 == 0) {
LAB_144142a2f:
    local_4e8 = 1;
  }
  else {
    while (plVar21 = (longlong *)((longlong)plVar21 + 1), plVar21 != plVar7) {
LAB_144142985:
      local_558 = plVar7;
      if (0 < (int)uVar14) {
        puVar22 = &DAT_149dfb77a;
        if ((int)(local_4a8 + (longlong)plVar21 * 2)[1] != 0) {
          puVar22 = (undefined2 *)local_4a8[(longlong)plVar21 * 2];
        }
        lVar23 = 0;
        uVar26 = uVar14;
        do {
          uVar1 = *(ushort *)((longlong)puVar22 + lVar23);
          uVar2 = *(ushort *)((longlong)puVar19 + lVar23);
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_144142a2f;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) {
              iVar12 = (uint)uVar1 - (uint)uVar2;
              goto LAB_144142a0d;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto LAB_144142a0a;
          }
          if (uVar26 == 1) goto LAB_144142a2f;
          uVar26 = uVar26 - 1;
          lVar23 = lVar23 + 2;
        } while( true );
      }
    }
  }
LAB_144142a3a:
  if (local_4d8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144142a53:
  plVar7 = local_4a8;
  if ((local_4e8 & 1) != 0) {
    if (local_4a8[lVar16 * 2] != 0) {
      FUN_1400020a8();
    }
    if (~uVar15 + (uint)uStack_4a0 != 0) {
      memmove(plVar7 + lVar16 * 2,plVar7 + lVar16 * 2 + 2,
              (longlong)(int)(~uVar15 + (uint)uStack_4a0) << 4);
    }
    uStack_4a0 = CONCAT44(uStack_4a0._4_4_,(uint)uStack_4a0 + -1);
    FUN_140b12644(&local_4a8);
    uVar15 = uVar15 - 1;
  }
  plVar7 = (longlong *)(ulonglong)(uVar15 + 1);
  if ((int)(uint)uStack_4a0 <= (int)(uVar15 + 1)) goto code_r0x000144142abb;
  goto LAB_1441428b7;
code_r0x000144142abb:
  local_440 = 0;
  if (local_448 != 0) {
    FUN_1400020a8();
  }
  goto LAB_144142ad8;
}



// FUNCTION 14414427a FUN_14414427a body=1374 status=ok
// SIG undefined FUN_14414427a(void)

void FUN_14414427a(longlong param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  wchar_t **local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong *local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong *local_70 [2];
  longlong *local_60 [2];
  wchar_t *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x698) == -1) && (DAT_14c872bf2 == '\0')) {
    lVar5 = FUN_14050fd64();
    iVar7 = *(int *)(lVar5 + 0x638);
    if (-1 < iVar7) {
      iVar8 = 0;
      do {
        cVar3 = FUN_14163428b(iVar8);
        if (cVar3 == '\0') {
          if (*(int *)(param_1 + 0x40) < 1) break;
          lVar5 = **(longlong **)(param_1 + 0x38);
          if ((lVar5 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar5);
          }
          else if (lVar5 == 0) break;
          lVar5 = FUN_145da44aa(lVar5);
          if (lVar5 != 0) {
            local_90 = L"ContentNotAvailable";
            local_88 = 0x13;
            FUN_1446e940c(&local_50,&local_90);
            local_90 = L"OakGameInstance";
            local_88 = 0xf;
            FUN_1446e940c(local_70,&local_90);
            local_90 = L"Content Not Available";
            local_88 = 0x15;
            FUN_140208c1e(local_60,local_70,&local_50,&local_90);
            local_90 = L"GameContentNotInstalled";
            local_88 = 0x17;
            FUN_1446e940c(&local_50,&local_90);
            local_90 = L"OakGameInstance";
            local_88 = 0xf;
            FUN_1446e940c(&local_a0,&local_90);
            local_90 = L"Unable to proceed; required content has not been installed.";
            local_88 = 0x3b;
            FUN_140208c1e(local_70,&local_a0,&local_50,&local_90);
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
            local_90 = DAT_14c844840;
            if (DAT_14c844840 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)DAT_14c844840 + 8))();
            }
            local_88 = DAT_14c844848;
            local_80 = 0;
            local_78 = 1;
            local_50 = L"Dialog_Ok";
            local_48 = 9;
            FUN_1446e940c(local_a4,&local_50);
            local_50 = L"OakGameInstance";
            local_48 = 0xf;
            FUN_1446e940c(local_a8,&local_50);
            local_50 = L"Ok";
            local_48 = 2;
            FUN_140208c1e(&local_a0,local_a8,local_a4,&local_50);
            FUN_140008f88(&local_90,&local_a0);
            if (local_a0 != (longlong *)0x0) {
              (**(code **)(*local_a0 + 0x10))();
            }
            local_78 = 0;
            local_50 = (wchar_t *)0x0;
            local_48 = 0;
            FUN_1446efa72(&local_50,0,3,0x10);
            pwVar2 = local_50;
            local_48 = 3;
            *(undefined ***)local_50 = &PTR_LAB_14b972ed0;
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar6 == 0) {
              LOCK();
              UNLOCK();
              lVar6 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            *(longlong *)(local_50 + 8) = lVar6;
            *(undefined ***)local_50 = &PTR_FUN_14b971a30;
            local_50[0xc] = L'\0';
            local_50[0xd] = L'\0';
            local_50[0xe] = L'\0';
            local_50[0xf] = L'\0';
            iVar7 = 0;
            if (param_1 != 0) {
              uVar1 = *(uint *)(param_1 + 0xc);
              *(uint *)(local_50 + 0xc) = uVar1;
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              iVar7 = *(int *)(lVar9 + 0x10);
              if (*(int *)(lVar9 + 0x10) == 0) {
                LOCK();
                iVar7 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar10 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar7;
                if (bVar10) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar7 = *(int *)(lVar9 + 0x10);
                bVar10 = iVar7 == 0;
                if (bVar10) {
                  *(int *)(lVar9 + 0x10) = iVar8;
                  iVar7 = 0;
                }
                UNLOCK();
                if (bVar10) {
                  iVar7 = iVar8;
                }
              }
            }
            *(int *)(pwVar2 + 0xe) = iVar7;
            *(longlong *)(pwVar2 + 0x10) = param_1;
            local_a0 = (longlong *)0x0;
            local_98 = 1;
            FUN_1459de124(&local_a0,1,0);
            FUN_14143c535(local_a0,&local_90,1);
            local_c0 = 0;
            local_b0 = 1;
            local_b8 = 0;
            local_c8 = &local_50;
            uVar4 = FUN_1461db750(lVar5,local_60,local_70,&local_a0);
            *(undefined4 *)(param_1 + 0x698) = uVar4;
            FUN_140e0067b(local_a0,local_98);
            if (local_a0 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_48 == 0) {
LAB_144144694:
              if (local_50 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_50 != (wchar_t *)0x0) {
              (*(code *)**(undefined8 **)local_50)(local_50,0);
              FUN_1446efa72(&local_50,0,0,0x10);
              local_48 = 0;
              goto LAB_144144694;
            }
            if (local_90 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_90 + 0x10))();
            }
            if (local_70[0] != (longlong *)0x0) {
              (**(code **)(*local_70[0] + 0x10))();
            }
            if (local_60[0] != (longlong *)0x0) {
              (**(code **)(*local_60[0] + 0x10))();
            }
          }
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar7 + 1 != iVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441447ea FUN_1441447ea body=69 status=ok
// SIG undefined FUN_1441447ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441447ea(void)

{
  _DAT_14cbca480 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014414482c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbca488,1);
  return;
}



// FUNCTION 144144830 FUN_144144830 body=819 status=ok
// SIG undefined FUN_144144830(void)

void FUN_144144830(longlong *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *_Src;
  byte bVar7;
  int iVar8;
  byte bVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_1a8 [35];
  byte local_185;
  int local_184;
  int *local_180;
  undefined8 local_178 [2];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  void *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar10 = DAT_14cbcb048;
  if (DAT_14cbcb048 == (undefined *)0x0) {
    puVar10 = &DAT_14cbcb028;
  }
  iVar2 = *param_2;
  puVar11 = (undefined8 *)(puVar10 + (longlong)iVar2 * 8);
  if (DAT_14cbcb050 <= iVar2) {
    puVar11 = &DAT_14cbcb058;
  }
  lVar5 = *param_1;
  if (iVar2 < 0) {
    puVar11 = &DAT_14cbcb058;
  }
  local_110 = *puVar11;
  iVar3 = *param_3;
  *param_3 = iVar3 + 1;
  *param_2 = iVar3;
  puVar10 = DAT_14cbcb048;
  if (DAT_14cbcb048 == (undefined *)0x0) {
    puVar10 = &DAT_14cbcb028;
  }
  puVar11 = (undefined8 *)(puVar10 + (longlong)iVar3 * 8);
  if (DAT_14cbcb050 <= iVar3) {
    puVar11 = &DAT_14cbcb058;
  }
  if (iVar3 < 0) {
    puVar11 = &DAT_14cbcb058;
  }
  uVar6 = *puVar11;
  local_118 = uVar6;
  if (iVar3 != iVar2) {
    local_178[0] = 0;
    local_178[1] = 0;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_134 = 0x3ff00000;
    uStack_130 = 0;
    uStack_12c = 0x3ff00000;
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0;
    FUN_145a145da(param_1[1],local_178,iVar3);
    if ((longlong)*(int *)(lVar5 + 200) != 0) {
      plVar1 = (longlong *)(lVar5 + 0xc0);
      lVar13 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar5 + 0xc0) + lVar13) == iVar3) {
          lVar13 = FUN_1488ae41c(param_1[2],&local_110);
          if (lVar13 != 0) {
            local_f0 = 0;
            local_88 = (void *)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            uStack_68 = 0;
            uStack_64 = 0;
            uStack_60 = 0;
            uStack_5c = 0;
            local_108 = uVar6;
            local_100 = *(undefined8 *)(lVar13 + 0x3f8);
            local_f8 = *(undefined8 *)(lVar13 + 0x3f0);
            puVar11 = local_178;
            puVar15 = local_e8;
            for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar15 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar15 = puVar15 + 1;
            }
            if (&local_88 != (void **)(lVar13 + 0x400)) {
              iVar4 = *(int *)(lVar13 + 0x408);
              _Src = *(void **)(lVar13 + 0x400);
              uStack_80 = CONCAT44(uStack_80._4_4_,iVar4);
              if ((longlong)iVar4 != 0) {
                FUN_1446dd670(&local_88,iVar4,0);
                memcpy(local_88,_Src,(longlong)iVar4 * 2);
              }
            }
            FUN_145a14736(param_1[2],&local_108);
            iVar4 = *(int *)(lVar5 + 200);
            lVar13 = (longlong)iVar4;
            iVar14 = 0;
            if (lVar13 != 0) {
              local_180 = (int *)*plVar1;
              local_185 = *local_180 == iVar3;
              iVar14 = 0;
              iVar16 = 0;
              do {
                bVar9 = local_185 ^ 1;
                iVar8 = iVar16 + 1;
                if (iVar16 + 1 < iVar4) {
                  iVar8 = iVar4;
                }
                iVar17 = iVar16;
                lVar12 = (longlong)iVar16;
                do {
                  lVar12 = lVar12 + 1;
                  iVar18 = iVar8;
                  if (lVar13 <= lVar12) break;
                  iVar17 = iVar17 + 1;
                  iVar18 = iVar17;
                } while ((bool)(local_185 & 1) == (local_180[lVar12] == iVar3));
                bVar7 = local_185 & 1;
                local_185 = bVar9;
                if (bVar7 == 0) {
                  local_184 = iVar18 - iVar16;
                  if (iVar14 != iVar16) {
                    memmove(local_180 + iVar14,local_180 + iVar16,(longlong)local_184 << 2);
                  }
                  iVar14 = iVar14 + local_184;
                }
                iVar16 = iVar18;
              } while (lVar12 < lVar13);
            }
            *(uint *)(lVar5 + 200) = iVar14 + 1U;
            if (*(uint *)(lVar5 + 0xcc) < iVar14 + 1U) {
              FUN_1446f48e2(plVar1,iVar14);
            }
            *(int *)(*plVar1 + (longlong)iVar14 * 4) = iVar2;
            FUN_145a1457c(&local_108);
          }
          goto LAB_1441448da;
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)*(int *)(lVar5 + 200) * 4 != lVar13);
    }
    FUN_1488ae8a2(param_1[2],&local_110,local_178);
    FUN_143d841d4(param_1[2],&local_110,&local_118);
  }
LAB_1441448da:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144144b98 FUN_144144b98 body=1688 status=ok
// SIG undefined FUN_144144b98(void)

void FUN_144144b98(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143d4fb4c();
  if ((((*(byte *)(param_1 + 0x82) & 1) != 0) &&
      (lVar6 = FUN_1403ca102(param_1), param_1 != (longlong *)0x0)) && (lVar6 != 0)) {
    *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) | 1;
  }
  cVar5 = (**(code **)(*param_1 + 0x9c8))(param_1);
  if (cVar5 != '\0') {
    FUN_145ac3a62(&local_48,param_1);
  }
  uVar7 = FUN_1447210f0(param_1);
  lVar6 = FUN_140149a73(uVar7,0);
  if (lVar6 != 0) {
    lVar8 = param_1[0xbd];
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_50,lVar8 + 0x3c0,1);
    FUN_146625f8c(lVar6,local_50);
    if (((((*(int *)(lVar6 + 100) != 0) && (uVar2 = *(uint *)(lVar6 + 0x60), -1 < (int)uVar2)) &&
         (((int)uVar2 < DAT_14c9647dc &&
          ((plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(lVar6 + 100))))))) &&
        ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
       (((longlong *)*plVar10 != (longlong *)0x0 &&
        (lVar6 = (**(code **)(*(longlong *)*plVar10 + 0x2b8))(), lVar6 != 0)))) {
      FUN_145c579d2(lVar6 + 0x50,&local_48,param_1,FUN_145c57810);
      if ((*(longlong *)(lVar6 + 0x130) != 0) &&
         ((*(longlong *)(lVar6 + 0x138) != 0 && (0 < *(int *)(*(longlong *)(lVar6 + 0x138) + 8)))))
      {
        FUN_145c57810(param_1);
      }
      local_48 = (longlong *)0x0;
      local_40._0_4_ = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      plVar10 = local_48;
      local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
      *local_48 = (longlong)&PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_48[2] = lVar9;
      *local_48 = (longlong)&PTR_FUN_14b971fe0;
      local_48[3] = 0;
      iVar11 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar11 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar11 = *(int *)(lVar8 + 0x10);
          bVar14 = iVar11 == 0;
          if (bVar14) {
            *(int *)(lVar8 + 0x10) = iVar13;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar11 = iVar13;
          }
        }
      }
      *(int *)((longlong)plVar10 + 0x1c) = iVar11;
      plVar10[4] = (longlong)&LAB_144145232;
      if (((int)local_40 == 0) || (local_48 == (longlong *)0x0)) {
LAB_1441451ad:
        if ((int)local_40 == 0) goto LAB_1441450b1;
        if (local_48 != (longlong *)0x0) {
          (**(code **)*local_48)(local_48,0);
          FUN_1446efa72(&local_48,0,0,0x10);
          goto LAB_1441450a4;
        }
      }
      else {
        cVar5 = (**(code **)(*local_48 + 0x30))();
        if (cVar5 == '\0') {
          goto LAB_1441451ad;
        }
        plVar10 = (longlong *)(lVar6 + 8);
        if (*(int *)(lVar6 + 0x1c) < 1) {
          iVar11 = *(int *)(lVar6 + 0x10);
          iVar13 = *(int *)(lVar6 + 0x18) + -1;
          *(int *)(lVar6 + 0x18) = iVar13;
          if (iVar13 <= iVar11) {
            iVar13 = iVar11;
            if (0 < iVar11) {
              iVar12 = 0;
              do {
                if (((*(int *)(*plVar10 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                    (plVar3 = *(longlong **)(*plVar10 + (longlong)iVar12 * 0x10),
                    plVar3 == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                  FUN_14005b288(plVar10,iVar12);
                  FUN_14005b248(plVar10);
                }
                else {
                  iVar12 = iVar12 + 1;
                }
                iVar13 = *(int *)(lVar6 + 0x10);
              } while (iVar12 < iVar13);
            }
            iVar12 = 2;
            if (2 < iVar13 * 2) {
              iVar12 = iVar13 * 2;
            }
            *(int *)(lVar6 + 0x18) = iVar12;
            if ((iVar12 < iVar11) && (*(int *)(lVar6 + 0x14) != iVar13)) {
              FUN_14045812c();
            }
          }
        }
        if (((int)local_40 != 0) && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x38))(local_48,&local_60);
        }
        iVar11 = *(int *)(lVar6 + 0x10);
        *(uint *)(lVar6 + 0x10) = iVar11 + 1U;
        if (*(uint *)(lVar6 + 0x14) < iVar11 + 1U) {
          FUN_1447a71f6(plVar10,iVar11);
        }
        lVar6 = *plVar10;
        lVar8 = (longlong)iVar11 * 0x10;
        *(undefined8 *)(lVar6 + lVar8) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar8) = 0;
        *(longlong **)(lVar6 + lVar8) = local_48;
        local_48 = (longlong *)0x0;
        *(int *)(lVar6 + 8 + lVar8) = (int)local_40;
LAB_1441450a4:
        local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
LAB_1441450b1:
        if (local_48 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_144145238(param_1);
    }
  }
  FUN_1441452f6(param_1);
  lVar6 = FUN_140f7e331();
  if (*(char *)(lVar6 + 0x32) == '\0') {
    if (((param_1[0xe7] == 0) || (param_1[0xe8] == 0)) || (*(int *)(param_1[0xe8] + 8) < 1)) {
      uVar7 = FUN_1401cb356();
      local_60 = (undefined8 *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      puVar4 = local_60;
      local_58 = 3;
      *local_60 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_60[2] = lVar8;
      *local_60 = &PTR_FUN_14b972050;
      local_60[3] = 0;
      iVar11 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_60 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar11 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar11 = *(int *)(lVar6 + 0x10);
          bVar14 = iVar11 == 0;
          if (bVar14) {
            *(int *)(lVar6 + 0x10) = iVar13;
            iVar11 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar11 = iVar13;
          }
        }
      }
      *(int *)((longlong)puVar4 + 0x1c) = iVar11;
      puVar4[4] = FUN_1441457ac;
      local_68 = 0;
      FUN_1405f67fc(uVar7,&local_48,&local_60,L"AOakGameMode::CheckForDLCInit");
      param_1[0xe7] = (longlong)local_48;
      local_48 = (longlong *)0x0;
      plVar10 = (longlong *)param_1[0xe8];
      param_1[0xe8] = (longlong)local_40;
      local_40 = (longlong *)0x0;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))();
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
      }
      if (local_58 != 0) {
        if (local_60 == (undefined8 *)0x0) goto LAB_144144e61;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        local_58 = 0;
      }
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_1441457ac(param_1);
  }
LAB_144144e61:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144145238 FUN_144145238 body=189 status=ok
// SIG undefined FUN_144145238(void)

void FUN_144145238(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_1411db1ae(uVar1);
  if (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 200);
    if (lVar2 == 0) {
      local_50 = DAT_14c948620;
      local_58 = DAT_14c948618;
    }
    else {
      local_50 = *(undefined4 *)(lVar2 + 0x10);
      local_58 = *(undefined8 *)(lVar2 + 8);
    }
    FUN_1448075d0(local_48,&local_58);
    lVar2 = FUN_1441a615e(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_1447210f0(param_1);
    FUN_1441203e2(CONCAT71((int7)((ulonglong)local_48 >> 8),lVar2 != 0) & 0xffffffff,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441452f6 FUN_1441452f6 body=1205 status=ok
// SIG undefined FUN_1441452f6(void)

void FUN_1441452f6(longlong param_1)

{
  undefined4 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = FUN_140d1d7e4();
  local_108 = (void *)0x0;
  local_100 = *(int *)(lVar4 + 0xf8);
  lVar7 = (longlong)local_100;
  _Src = *(void **)(lVar4 + 0xf0);
  if (lVar7 == 0) {
    local_fc = 0;
  }
  else {
    FUN_148c134f8(&local_108,local_100,0);
    memcpy(local_108,_Src,lVar7 * 0x30);
  }
  FUN_14435d068(&local_f8,&local_108);
  lVar4 = local_f8;
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  if ((longlong)local_f0 != 0) {
    lVar7 = 0;
    do {
      puVar8 = (undefined8 *)(lVar4 + lVar7);
      local_e8 = *puVar8;
      uStack_e0 = *(undefined4 *)(puVar8 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar8 + 0xc);
      puVar8 = (undefined8 *)(lVar4 + 0x10 + lVar7);
      local_d8 = *puVar8;
      uStack_d0 = puVar8[1];
      puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar7);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      lStack_c0 = *(longlong *)(puVar1 + 2);
      FUN_1409c4e4e(&local_e8,&local_a8);
      uVar6 = uStack_110;
      lVar11 = (longlong)(int)uStack_110;
      uVar3 = (int)uStack_110 + 1;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar3);
      if (uStack_110._4_4_ < uVar3) {
        FUN_140f12bd2(&local_118,uVar6 & 0xffffffff);
      }
      FUN_14014e938(local_118 + lVar11 * 7,&local_a8);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)local_f0 * 0x30 != lVar7);
  }
  local_140 = param_1 + 0x7c0;
  if ((longlong)*(int *)(param_1 + 0x7c8) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x7c0);
    puVar10 = puVar8 + (longlong)*(int *)(param_1 + 0x7c8) * 7;
    do {
      if ((longlong)(int)uStack_110 != 0) {
        lVar4 = (longlong)(int)uStack_110 * 0x38;
        puVar9 = local_118;
        do {
          cVar2 = FUN_14493b798(puVar9,puVar8);
          if (cVar2 != '\0') goto LAB_144145570;
          puVar9 = puVar9 + 7;
          lVar4 = lVar4 + -0x38;
        } while (lVar4 != 0);
      }
      cVar2 = FUN_1401144ce(puVar8);
      if (cVar2 != '\0') {
        local_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0;
        local_64 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70[0] = 0;
        local_a0 = *(undefined4 *)(puVar8 + 1);
        local_a8 = *puVar8;
        FUN_1447715ec(&local_98,puVar8 + 2);
        lVar4 = FUN_140d1d7e4();
        local_128 = *(undefined8 *)(lVar4 + 0x100);
        local_120 = *(undefined4 *)(lVar4 + 0x108);
        FUN_144928d62(&local_98,5,&local_128);
        local_70[0] = 1;
        local_6c = DAT_14cb7c580;
        local_64 = 0;
        uVar5 = FUN_1447210f0(param_1);
        lVar4 = FUN_140149a73(uVar5,0);
        if (lVar4 != 0) {
          FUN_140bc53f1(&local_a8,local_70,lVar4,0);
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
LAB_144145570:
      puVar8 = puVar8 + 7;
    } while (puVar8 != puVar10);
  }
  FUN_1410d4484(local_140,&local_118);
  if ((longlong)(int)uStack_110 == 0) {
    uVar6 = 0;
  }
  else {
    puVar10 = local_118 + (longlong)(int)uStack_110 * 7;
    puVar8 = local_118;
    do {
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
      uStack_b8 = 0;
      uStack_e0 = *(undefined4 *)(puVar8 + 1);
      local_e8 = *puVar8;
      FUN_1447715ec(&local_d8,puVar8 + 2);
      cVar2 = FUN_1401144ce(&local_e8);
      if (cVar2 != '\0') {
        local_88 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0;
        local_64 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70[0] = 0;
        local_a0 = uStack_e0;
        local_a8 = local_e8;
        FUN_1447715ec(&local_98,&local_d8);
        lVar4 = FUN_140d1d7e4();
        local_138 = *(undefined8 *)(lVar4 + 0x100);
        local_130 = *(undefined4 *)(lVar4 + 0x108);
        FUN_144928d62(&local_98,5,&local_138);
        local_70[0] = 1;
        local_6c = DAT_14cb7c588;
        local_64 = 1;
        uVar5 = FUN_1447210f0(param_1);
        lVar4 = FUN_140149a73(uVar5,0);
        if (lVar4 != 0) {
          FUN_140bc53f1(&local_a8,local_70,lVar4,0);
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
      }
      if (lStack_c0 != 0) {
        FUN_1400020a8();
      }
      puVar8 = puVar8 + 7;
    } while (puVar8 != puVar10);
    uVar6 = uStack_110 & 0xffffffff;
  }
  FUN_1405d7ab2(local_118,uVar6);
  if (local_118 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441457ac FUN_1441457ac body=60 status=ok
// SIG undefined FUN_1441457ac(void)

ulonglong FUN_1441457ac(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  
  lVar2 = FUN_140f7e331();
  cVar1 = *(char *)(lVar2 + 0x32);
  if (cVar1 == '\x01') {
    uVar3 = FUN_1447210f0(param_1);
    FUN_145adb1ae(uVar3);
    FUN_1441457e8(param_1);
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1) & 0xffffffff;
}



// FUNCTION 1441457e8 FUN_1441457e8 body=177 status=ok
// SIG undefined FUN_1441457e8(void)

void FUN_1441457e8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x738) != 0) && (*(longlong *)(param_1 + 0x740) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x740) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x738);
    local_20 = *(longlong *)(param_1 + 0x740);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x740);
    *(undefined8 *)(param_1 + 0x738) = 0;
    *(undefined8 *)(param_1 + 0x740) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441458aa FUN_1441458aa body=40 status=ok
// SIG undefined FUN_1441458aa(void)

void FUN_1441458aa(undefined8 param_1,undefined4 param_2)

{
  FUN_1441457e8();
  FUN_144145238(param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 1441458d2 FUN_1441458d2 body=462 status=ok
// SIG undefined FUN_1441458d2(void)

void FUN_1441458d2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(param_1 + 0x3f0);
    if (((((lVar2 != 0) && (lVar3 != 0)) && (lVar5 = *(longlong *)(lVar2 + 0x10), lVar5 != 0)) &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))) && (iVar1 = *(int *)(lVar2 + 0x3b0), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 0x3a8);
      lVar3 = 0;
      do {
        lVar5 = *(longlong *)(lVar2 + lVar3);
        if (lVar5 != 0) {
          if (DAT_14cbae3d8 == 0) {
            local_50 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1464f5fc4;
            local_70 = &local_50;
            local_78 = &LAB_148c3dd26;
            local_80 = &LAB_1459673ba;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 0x10;
            local_a8 = 0x1360;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            lVar5 = *(longlong *)(lVar2 + lVar3);
            if (lVar5 == 0) goto LAB_1441459e7;
          }
          if (((DAT_14cbae3d8 != 0) && (lVar4 = *(longlong *)(lVar5 + 0x10), lVar4 != 0)) &&
             ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar4 + 0x38) &&
              ((*(longlong *)
                 (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
                DAT_14cbae3d8 + 0x30 && (lVar4 = FUN_1409f28d0(lVar5), lVar4 != 0)))))) {
            FUN_145be8d80(lVar5);
          }
        }
LAB_1441459e7:
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14150518c(param_1);
  return;
}



// FUNCTION 144145aa2 FUN_144145aa2 body=463 status=ok
// SIG undefined FUN_144145aa2(void)

void FUN_144145aa2(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x398), lVar3 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464f5fc4;
      local_58 = &LAB_148c3dd26;
      local_60 = &LAB_1459673ba;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar3 = *(longlong *)(param_2 + 0x398);
      if (lVar3 == 0) goto LAB_144145b94;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar5 = *(longlong *)(lVar3 + 0x10), lVar5 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30 && (iVar1 = *(int *)(lVar3 + 0xef0), iVar1 != -1)))) {
      lVar3 = *(longlong *)(param_1 + 0x720);
      iVar2 = *(int *)(param_1 + 0x728);
      lVar5 = (longlong)iVar2;
      if (lVar5 != 0) {
        lVar4 = 0;
        do {
          if (*(int *)(lVar3 + lVar4) == iVar1) goto LAB_144145b94;
          lVar4 = lVar4 + 4;
        } while (lVar5 * 4 - lVar4 != 0);
      }
      *(uint *)(param_1 + 0x728) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x72c) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(param_1 + 0x720),iVar2);
        lVar3 = *(longlong *)(param_1 + 0x720);
      }
      *(int *)(lVar3 + lVar5 * 4) = iVar1;
      FUN_144958a06(*(undefined8 *)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x728));
    }
  }
LAB_144145b94:
  FUN_145c11ea4(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144145c72 FUN_144145c72 body=210 status=ok
// SIG undefined FUN_144145c72(void)

void FUN_144145c72(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1456cf62e();
  plVar1 = *(longlong **)(param_1 + 0x5e8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar4 = FUN_145a123dc();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      *(undefined1 *)(param_1 + 0x732) = *(undefined1 *)((longlong)plVar1 + 0x412);
      *(char *)(param_1 + 0x733) = (char)plVar1[0x82];
      *(undefined1 *)(param_1 + 0x734) = *(undefined1 *)((longlong)plVar1 + 0x411);
      if (*(longlong *)(param_1 + 0x3f0) != 0) {
        lVar4 = FUN_14030d660();
        lVar3 = *(longlong *)(param_1 + 0x3f0);
        if (((lVar3 != 0) && (lVar4 != 0)) &&
           ((lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0 &&
            ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)))))) {
          *(undefined1 *)(lVar3 + 0x5e5) = *(undefined1 *)(param_1 + 0x734);
        }
      }
    }
  }
  return;
}



// FUNCTION 144145d44 FUN_144145d44 body=383 status=ok
// SIG undefined FUN_144145d44(void)

void FUN_144145d44(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  code *local_38 [3];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145c6001e();
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = local_38;
      local_38[0] = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      local_58 = *param_3;
      uStack_50 = param_3[1];
      local_48 = *(undefined4 *)(param_3 + 2);
      uStack_44 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_40 = *(undefined4 *)(param_3 + 3);
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0x1c);
      FUN_1448052ee(&local_58,local_38);
      local_20 = 1;
      uVar2 = FUN_14477b072(param_2,DAT_14cad39e8);
      (**(code **)(*param_2 + 0x248))(param_2,uVar2,local_38);
      plVar1 = (longlong *)param_2[0x89];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x6a0))(plVar1,0);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144145ec4 FUN_144145ec4 body=2014 status=ok
// SIG undefined FUN_144145ec4(void)

longlong * FUN_144145ec4(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 *puVar12;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  code *local_a0;
  code *local_98;
  int local_90;
  undefined8 local_88;
  undefined1 local_80 [24];
  code *local_68 [3];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x6000;
  param_2[2] = 0;
  plVar3 = (longlong *)FUN_1403ca102();
  if (plVar3 == (longlong *)0x0) {
LAB_14414612c:
    lVar4 = *(longlong *)(param_3 + 0x398);
    if (lVar4 != 0) {
      if (DAT_14cbae3d8 == 0) {
        local_c0 = local_68;
        local_68[0] = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_1464f5fc4;
        local_c8 = &LAB_148c3dd26;
        local_d0 = &LAB_1459673ba;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x1360);
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar4 = *(longlong *)(param_3 + 0x398);
        if (lVar4 == 0) goto LAB_1441461e2;
      }
      pcVar11 = (code *)0x0;
      if ((DAT_14cbae3d8 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 == 0))
      goto LAB_1441462c7;
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          == DAT_14cbae3d8 + 0x30)) {
        lVar4 = FUN_1403b0700();
        if ((((*(longlong *)(lVar4 + 0x38) == 0) || (*(longlong *)(lVar4 + 0x38) == DAT_14cb71810))
            && (*(code **)(param_4 + 0xd0) != (code *)0x0)) &&
           (*(int *)(param_4 + 0xd8) - 1U < 0xfffffffe)) {
          lVar4 = *(longlong *)(param_4 + 0xe0);
          if (lVar4 == 0) {
            local_68[0] = *(code **)(param_4 + 0xd0);
            lVar4 = FUN_14050aea0();
            *(longlong *)(param_4 + 0xe0) = lVar4;
            if (lVar4 == 0) goto LAB_1441461e2;
          }
          lVar4 = FUN_141450d48(lVar4);
          if (lVar4 != 0) {
            lVar7 = *(longlong *)(lVar4 + 0x10);
            if (lVar7 == 0) {
              uVar5 = FUN_14050b070();
              lVar7 = FUN_14477b664(uVar5);
              *(longlong *)(lVar4 + 0x10) = lVar7;
            }
            lVar6 = *(longlong *)(lVar4 + 0x18);
            if (lVar6 != 0) {
LAB_14414627b:
              puVar12 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
                puVar12 = *(undefined4 **)(lVar6 + 8);
              }
              if (DAT_14c947fe0 == 0) {
                lVar4 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar4);
                DAT_14c947fe0 = lVar4;
              }
              FUN_140045924(DAT_14c947fe0,&local_a0,puVar12,1);
              pcVar11 = local_a0;
              if (local_a0 != (code *)0x0) goto LAB_1441462bc;
              goto LAB_1441462c4;
            }
            pcVar11 = (code *)0x0;
            if ((lVar7 == 0) || (*(longlong *)(lVar4 + 8) == 0)) goto LAB_1441462c7;
            plVar3 = *(longlong **)(lVar7 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar2 == '\0')) {
              *(undefined8 *)(lVar4 + 0x18) = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 8));
              *(longlong *)(lVar4 + 0x18) = lVar6;
              if (lVar6 != 0) goto LAB_14414627b;
            }
          }
        }
      }
    }
LAB_1441461e2:
    pcVar11 = (code *)0x0;
LAB_1441462c7:
    iVar10 = 0x6000;
    iVar9 = iVar10;
    if (*(longlong *)(param_1 + 0x3f0) == 0) {
LAB_1441463f2:
      if ((pcVar11 == (code *)0x0) || (0xfffffffd < iVar9 - 1U)) goto LAB_144146415;
      cVar2 = FUN_14595f7e8(param_4,param_2);
      pcVar11 = (code *)*param_2;
      if (cVar2 == '\0') goto LAB_144146415;
      iVar9 = (int)param_2[1];
    }
    else {
      lVar7 = FUN_14030d660();
      lVar4 = *(longlong *)(param_1 + 0x3f0);
      if (((lVar4 == 0) || (lVar7 == 0)) ||
         ((lVar6 = *(longlong *)(lVar4 + 0x10), lVar6 == 0 ||
          (((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
             lVar7 + 0x30)) || (pcVar11 != (code *)0x0)))))) goto LAB_1441463f2;
      pcVar11 = (code *)0x0;
      if ((*(longlong *)(param_3 + 0xf48) != 0) && (*(char *)(lVar4 + 0x5f5) != '\0')) {
        if (*(char *)(*(longlong *)(param_3 + 0xf48) + 0x5d30) == '\x02') {
          lVar4 = FUN_1447210f0(param_1);
          if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x30) == 0)) ||
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar4 == 0)) {
LAB_1441463b8:
            plVar3 = (longlong *)FUN_145d1445c(param_4);
            pcVar11 = (code *)*plVar3;
            iVar9 = (int)plVar3[1];
            if (pcVar11 == (code *)0x0 && iVar9 == 0x6000) {
              pcVar11 = (code *)0x0;
              iVar9 = iVar10;
              goto LAB_1441463f2;
            }
          }
          else {
            lVar7 = FUN_140a99ecc();
            if ((((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) ||
                (pcVar11 = *(code **)(lVar4 + 0x700), pcVar11 == (code *)0x0)) ||
               (iVar9 = *(int *)(lVar4 + 0x708), iVar9 + 1U < 2)) goto LAB_1441463b8;
          }
          *param_2 = (longlong)pcVar11;
          *(int *)(param_2 + 1) = iVar9;
          param_2[2] = 0;
          goto LAB_1441463f2;
        }
        pcVar11 = (code *)0x0;
      }
LAB_144146415:
      pcVar8 = *(code **)(param_3 + 0x23c0);
      if (pcVar11 == pcVar8) {
        iVar9 = (int)param_2[1];
        iVar10 = *(int *)(param_3 + 0x23c8);
        if (iVar9 == *(int *)(param_3 + 0x23c8)) goto LAB_144146449;
      }
      else {
        iVar10 = *(int *)(param_3 + 0x23c8);
      }
      iVar9 = iVar10;
      *param_2 = (longlong)pcVar8;
      *(int *)(param_2 + 1) = iVar9;
      param_2[2] = 0;
      pcVar11 = pcVar8;
    }
LAB_144146449:
    if ((pcVar11 == (code *)0x0) || (0xfffffffd < iVar9 - 1U)) {
LAB_14414646c:
      pcVar8 = *(code **)(param_3 + 0x23d8);
      if (pcVar11 == pcVar8) {
        iVar10 = (int)param_2[1];
        iVar9 = *(int *)(param_3 + 0x23e0);
        if (iVar10 == *(int *)(param_3 + 0x23e0)) goto LAB_1441464a0;
      }
      else {
        iVar9 = *(int *)(param_3 + 0x23e0);
      }
      iVar10 = iVar9;
      *param_2 = (longlong)pcVar8;
      *(int *)(param_2 + 1) = iVar10;
      param_2[2] = 0;
      pcVar11 = pcVar8;
    }
    else {
      cVar2 = FUN_14595f7e8(param_4,param_2);
      pcVar11 = (code *)*param_2;
      if (cVar2 == '\0') goto LAB_14414646c;
      iVar10 = (int)param_2[1];
    }
LAB_1441464a0:
    if ((pcVar11 == (code *)0x0) || (0xfffffffd < iVar10 - 1U)) {
LAB_1441464c3:
      pcVar8 = *(code **)(param_4 + 0xd0);
      if (pcVar11 == pcVar8) {
        iVar10 = (int)param_2[1];
        iVar9 = *(int *)(param_4 + 0xd8);
        if (iVar10 == *(int *)(param_4 + 0xd8)) goto LAB_1441464f7;
      }
      else {
        iVar9 = *(int *)(param_4 + 0xd8);
      }
      iVar10 = iVar9;
      *param_2 = (longlong)pcVar8;
      *(int *)(param_2 + 1) = iVar10;
      param_2[2] = 0;
      pcVar11 = pcVar8;
    }
    else {
      cVar2 = FUN_14595f7e8(param_4,param_2);
      pcVar11 = (code *)*param_2;
      if (cVar2 == '\0') goto LAB_1441464c3;
      iVar10 = (int)param_2[1];
    }
LAB_1441464f7:
    if ((pcVar11 == (code *)0x0) || (0xfffffffd < iVar10 - 1U)) {
LAB_14414651a:
      pcVar8 = *(code **)(param_4 + 0xb0);
      if (pcVar11 == pcVar8) {
        iVar10 = (int)param_2[1];
        iVar9 = *(int *)(param_4 + 0xb8);
        if (iVar10 == *(int *)(param_4 + 0xb8)) goto LAB_14414654e;
      }
      else {
        iVar9 = *(int *)(param_4 + 0xb8);
      }
      iVar10 = iVar9;
      *param_2 = (longlong)pcVar8;
      *(int *)(param_2 + 1) = iVar10;
      param_2[2] = 0;
      pcVar11 = pcVar8;
    }
    else {
      cVar2 = FUN_14595f7e8(param_4,param_2);
      pcVar11 = (code *)*param_2;
      if (cVar2 == '\0') goto LAB_14414651a;
      iVar10 = (int)param_2[1];
    }
LAB_14414654e:
    if ((pcVar11 != (code *)0x0) && (iVar10 - 1U < 0xfffffffe)) {
      cVar2 = FUN_14595f7e8(param_4,param_2);
      if (cVar2 != '\0') goto LAB_144146097;
      pcVar11 = (code *)*param_2;
    }
    plVar3 = (longlong *)FUN_145d1445c(param_4);
    pcVar8 = (code *)*plVar3;
    if (pcVar11 == pcVar8) {
      iVar9 = (int)plVar3[1];
      if ((int)param_2[1] == iVar9) goto LAB_144146097;
    }
    else {
      iVar9 = (int)plVar3[1];
    }
  }
  else {
    lVar4 = FUN_140d27a2a(plVar3);
    if ((byte)(*(char *)(lVar4 + 0xb0) - 1U) < 8) {
      uVar5 = FUN_140d27a2a(plVar3);
      lVar4 = FUN_1441aac4c(uVar5);
      if (lVar4 == 0) {
LAB_144146125:
        *param_2 = 0;
        goto LAB_14414612c;
      }
      puVar12 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
        puVar12 = *(undefined4 **)(lVar4 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,local_68,puVar12,1);
      pcVar11 = local_68[0];
      if (local_68[0] == (code *)0x0) goto LAB_144146125;
LAB_1441462bc:
      param_2[2] = 0;
LAB_1441462c4:
      *param_2 = (longlong)pcVar11;
      goto LAB_1441462c7;
    }
    bVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
    if ((5 < bVar1) && (cVar2 = (**(code **)(*plVar3 + 0x498))(plVar3), cVar2 != '\t'))
    goto LAB_14414612c;
    lVar4 = FUN_1414b0848(plVar3);
    local_50 = *(longlong *)(lVar4 + 0x108);
    if (local_50 == 0) {
      pcVar11 = (code *)0x0;
      iVar10 = 0x6000;
    }
    else {
      local_98 = (code *)0x0;
      local_90 = 0x6000;
      local_88 = 0;
      local_f8 = local_80;
      cVar2 = FUN_14145082c(param_4,&local_50,&local_98,local_68);
      pcVar8 = (code *)0x0;
      iVar9 = 0x6000;
      if (cVar2 != '\0') {
        pcVar8 = local_98;
        iVar9 = local_90;
      }
      pcVar11 = (code *)0x0;
      iVar10 = 0x6000;
      if (pcVar8 != (code *)0x0 || iVar9 != 0x6000) {
        *param_2 = (longlong)pcVar8;
        *(int *)(param_2 + 1) = iVar9;
        param_2[2] = 0;
        pcVar11 = pcVar8;
        iVar10 = iVar9;
        if (iVar9 - 1U < 0xfffffffe && pcVar8 != (code *)0x0) {
          cVar2 = FUN_14595f7e8(param_4,param_2);
          if (cVar2 != '\0') goto LAB_144146097;
          pcVar11 = (code *)*param_2;
          iVar10 = (int)param_2[1];
        }
      }
    }
    local_50 = 0;
    local_98 = (code *)0x0;
    local_90 = 0x6000;
    local_88 = 0;
    local_f8 = local_80;
    cVar2 = FUN_14145082c(param_4,&local_50,&local_98,local_68);
    pcVar8 = (code *)0x0;
    iVar9 = 0x6000;
    if (cVar2 != '\0') {
      pcVar8 = local_98;
      iVar9 = local_90;
    }
    if ((pcVar11 == pcVar8) && (iVar10 == iVar9)) goto LAB_144146097;
  }
  *param_2 = (longlong)pcVar8;
  *(int *)(param_2 + 1) = iVar9;
  param_2[2] = 0;
LAB_144146097:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441466a4 FUN_1441466a4 body=3577 status=ok
// SIG undefined FUN_1441466a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1441466a4(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  double *pdVar12;
  code *pcVar13;
  longlong lVar14;
  code **ppcVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  double _X;
  undefined8 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_238 [32];
  uint local_218;
  uint local_210;
  uint local_208;
  ulonglong local_200;
  wchar_t *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  code **local_1e0;
  undefined1 *local_1d8;
  code *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  code *local_198;
  longlong *plStack_190;
  undefined1 local_188 [12];
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  int local_130;
  undefined8 local_128;
  longlong local_120;
  int local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar8 = (longlong *)FUN_1447210f0();
  if (param_2 == 0) {
LAB_1441467a9:
    lVar17 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_1e0 = &local_198;
      local_198 = FUN_141030f22;
      local_1d0 = FUN_14081d0ea;
      local_1d8 = &LAB_1459f2e4c;
      local_1e8 = &LAB_148c39de3;
      local_1f0 = &LAB_1457a9eb2;
      local_1f8 = L"Game";
      local_200 = 0;
      local_208 = 0x10000004;
      local_210 = 0x10;
      local_218 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (lVar17 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1441467a9;
  }
  ppcVar15 = &local_198;
  FUN_1410d53f0(ppcVar15,plVar8);
  if (plStack_190 != (longlong *)0x0) {
    iVar7 = (int)plStack_190[1];
    do {
      if (iVar7 == 0) {
        plVar16 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_190[1];
      bVar19 = iVar7 == iVar4;
      if (bVar19) {
        *(int *)(plStack_190 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
      plVar16 = plStack_190;
    } while (!bVar19);
    LOCK();
    piVar1 = (int *)((longlong)plStack_190 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_190 + 0x10))();
    }
    pcVar13 = local_198;
    if (plVar16 != (longlong *)0x0) {
      if (local_198 == (code *)0x0 || (lVar17 == 0 || plVar8 == (longlong *)0x0)) {
LAB_14414681b:
        ppcVar15 = (code **)0x0;
      }
      else if (((*(longlong *)(lVar17 + 0xf48) == 0) ||
               ((*(uint *)(*(longlong *)(lVar17 + 0xf48) + 8) >> 0x1e & 1) != 0)) &&
              (local_1c8 = FUN_140636ec6(plVar8), local_1c8 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_198 = FUN_141030f22;
          local_1d0 = FUN_14081d0ea;
          local_1d8 = &LAB_1459f2e4c;
          local_1e8 = &LAB_148c39de3;
          local_1f0 = &LAB_1457a9eb2;
          local_1f8 = L"Game";
          local_200 = 0;
          local_208 = 0x10000004;
          local_210 = 0x10;
          local_218 = 0x3de0;
          local_1e0 = ppcVar15;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(*(longlong *)(local_1c8 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
            (lVar17 == local_1c8)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_1c8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
        goto LAB_144146913;
        lVar11 = *(longlong *)(local_1c8 + 0x23d0);
        if (lVar11 == 0) {
          local_198 = *(code **)(local_1c8 + 0x23c0);
          lVar11 = FUN_14050aea0();
          *(longlong *)(local_1c8 + 0x23d0) = lVar11;
          if (lVar11 != 0) goto LAB_144146b5f;
        }
        else {
LAB_144146b5f:
          local_1c0 = (longlong *)FUN_140f7e331();
          FUN_140e4b9fe(lVar11 + 0x38,&local_198);
          if ((((char)local_1c0[6] == '\x01') && (local_198 != (code *)0x0)) &&
             (cVar5 = FUN_148e08dd2(local_198,lVar17), cVar5 == '\0')) {
            if (*(char *)(lVar17 + 0x32b8) == '\x01') {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
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
              plVar8 = DAT_14c844840;
              local_108 = DAT_14c844840;
              if (DAT_14c844840 != (longlong *)0x0) {
                (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
              }
              uStack_100 = DAT_14c844848;
              lVar11 = FUN_141563480(local_198 + 0x30);
              if (lVar11 != 0) {
                lVar11 = FUN_141563480(local_198 + 0x30);
                plVar3 = *(longlong **)(lVar11 + 0x28);
                if (plVar8 != plVar3) {
                  local_108 = plVar3;
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 8))();
                  }
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
                uStack_100 = *(undefined4 *)(lVar11 + 0x30);
              }
              FUN_14405010e(lVar17,&local_108,&DAT_14c9485f0);
              if (local_108 != (longlong *)0x0) {
                (**(code **)(*local_108 + 0x10))();
              }
              plVar8 = plStack_190;
              if (plStack_190 != (longlong *)0x0) {
                LOCK();
                plVar3 = plStack_190 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plStack_190)(plStack_190);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              goto LAB_14414681b;
            }
            *(undefined1 *)(lVar17 + 0x3250) = 1;
          }
          plVar3 = plStack_190;
          if (plStack_190 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_190 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_190)(plStack_190);
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
        lVar11 = *(longlong *)(lVar17 + 0x398);
        if (lVar11 == 0) goto LAB_144146913;
        if (DAT_14cbae3d8 == 0) {
          local_198 = FUN_141030f22;
          local_1d0 = FUN_14081d0ea;
          local_1d8 = &LAB_1464f5fc4;
          local_1e8 = &LAB_148c3dd26;
          local_1f0 = &LAB_1459673ba;
          local_1f8 = L"Engine";
          local_200 = 0;
          local_208 = 0x10000004;
          local_210 = 0x10;
          local_218 = 0x1360;
          local_1e0 = ppcVar15;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
          lVar11 = *(longlong *)(lVar17 + 0x398);
          if (lVar11 == 0) goto LAB_144146913;
        }
        if ((((DAT_14cbae3d8 == 0) || (lVar14 = *(longlong *)(lVar11 + 0x10), lVar14 == 0)) ||
            (*(int *)(lVar14 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38))) ||
           (*(longlong *)
             (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) !=
            DAT_14cbae3d8 + 0x30)) goto LAB_144146913;
        local_1a0 = lVar11;
        local_108 = plVar8;
        FUN_145bfbb3e(&local_198);
        local_1b0 = local_188._0_8_;
        LOCK();
        *(int *)(local_188._0_8_ + 8) = *(int *)(local_188._0_8_ + 8) + 1;
        UNLOCK();
        local_1a8 = stack0xfffffffffffffe80;
        local_1c0 = (longlong *)CONCAT44(uStack_174,local_178);
        local_1b8 = CONCAT44(uStack_16c,uStack_170);
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
        UNLOCK();
        plVar8 = plStack_190;
        if (plStack_190 != local_1c0) {
          do {
            lVar11 = plVar8[2];
            if ((*(char *)(lVar11 + 0x848) == '\x02') && ((longlong)*(int *)(lVar11 + 0x7c8) != 0))
            {
              ppcVar15 = *(code ***)(lVar11 + 0x7c0);
              lVar11 = (longlong)*(int *)(lVar11 + 0x7c8) << 3;
              do {
                cVar5 = FUN_14088ccfe(ppcVar15,local_1c8);
                if (cVar5 != '\0') {
                  LOCK();
                  *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + -1;
                  UNLOCK();
                  LOCK();
                  *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + -1;
                  UNLOCK();
                  LOCK();
                  piVar1 = (int *)(CONCAT44(uStack_16c,uStack_170) + 8);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  LOCK();
                  *(int *)(local_188._0_8_ + 8) = *(int *)(local_188._0_8_ + 8) + -1;
                  UNLOCK();
                  goto LAB_144146913;
                }
                ppcVar15 = ppcVar15 + 1;
                lVar11 = lVar11 + -8;
              } while (lVar11 != 0);
            }
            plVar8 = (longlong *)FUN_145bfbc06(*plVar8);
            plVar3 = local_1a8;
            for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)FUN_145bfbc06(*plVar8)) {
              lVar11 = FUN_1447210f0(plVar8[2]);
              if (lVar11 == *plVar3) goto LAB_144146d07;
            }
            plVar8 = (longlong *)0x0;
LAB_144146d07:
          } while (plVar8 != local_1c0);
        }
        LOCK();
        *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + -1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(CONCAT44(uStack_16c,uStack_170) + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        LOCK();
        *(int *)(local_188._0_8_ + 8) = *(int *)(local_188._0_8_ + 8) + -1;
        UNLOCK();
        lVar11 = FUN_1403b0700(local_1a0);
        if ((*(longlong *)(lVar11 + 0x38) == 0) || (*(longlong *)(lVar11 + 0x38) == DAT_14cb71810))
        goto LAB_144146913;
        local_210 = local_210 & 0xffffff00;
        local_218 = CONCAT31(local_218._1_3_,1);
        ppcVar15 = (code **)CONCAT71((int7)((ulonglong)ppcVar15 >> 8),1);
        cVar5 = FUN_1416d511e(pcVar13,lVar17,local_1c8,1);
        if (cVar5 == '\0') {
          if ((longlong)*(int *)(pcVar13 + 0x238) != 0) {
            lVar11 = *(longlong *)(pcVar13 + 0x230);
            lVar14 = (longlong)*(int *)(pcVar13 + 0x238) * 0x98;
            do {
              if ((*(int *)(lVar11 + 0x14) == 0) ||
                 (uVar6 = *(uint *)(lVar11 + 0x10), (int)uVar6 < 0)) {
LAB_144146e26:
                lVar18 = 0;
              }
              else {
                lVar18 = 0;
                if ((int)uVar6 < DAT_14c9647dc) {
                  plVar8 = (longlong *)
                           ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                  if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != *(int *)(lVar11 + 0x14)))
                     || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_144146e26;
                  lVar18 = *plVar8;
                }
              }
              if (lVar18 == local_1c8) {
                if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x18) != 0)) &&
                   (*(int *)(lVar11 + 0x20) - 1U < 0xfffffffe)) {
                  plVar8 = (longlong *)(lVar11 + 0x18);
                  goto LAB_1441469e5;
                }
                break;
              }
              lVar11 = lVar11 + 0x98;
              lVar14 = lVar14 + -0x98;
            } while (lVar14 != 0);
          }
          goto LAB_144146913;
        }
      }
      else {
LAB_144146913:
        FUN_144145ec4(param_1,&local_120,lVar17,pcVar13);
        local_138 = 0;
        local_130 = 0x6000;
        local_128 = 0;
        cVar5 = FUN_146022bc2(pcVar13,&local_120,&local_138,1);
        lVar11 = local_120;
        iVar7 = local_118;
        if ((cVar5 != '\0') &&
           ((lVar11 = local_138, iVar7 = local_130, local_120 != local_138 ||
            (local_118 != local_130)))) {
          local_120 = local_138;
          local_118 = local_130;
          local_110 = 0;
        }
        if (((lVar11 == 0) || (0xfffffffd < iVar7 - 1U)) ||
           (cVar5 = FUN_14595f7e8(pcVar13,&local_120), cVar5 == '\0')) {
          FUN_140056680(&local_198,&DAT_149dfb77a);
          dVar9 = (double)FUN_14611d89c(param_1,param_2,&local_198);
          dVar10 = dVar9;
          pcVar13 = local_198;
          if (local_198 != (code *)0x0) {
            dVar10 = (double)FUN_1400020a8();
          }
          uVar26 = SUB84(pcVar13,0);
          if (dVar9 == 0.0) goto LAB_14414681b;
          lVar11 = *(longlong *)((longlong)dVar9 + 0x1c8);
          if (lVar11 == 0) {
            uVar31 = SUB84(DAT_14c8464f8,0);
            uVar32 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
            uVar26 = SUB84(DAT_14c846500,0);
            uVar27 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
            uVar34 = (undefined4)DAT_14c8464e0;
            uVar35 = DAT_14c8464e0._4_4_;
            uVar36 = (undefined4)DAT_14c8464e8;
            uVar37 = DAT_14c8464e8._4_4_;
            uVar33 = DAT_14c8464f0;
            dVar10 = DAT_14c846508;
          }
          else {
            uVar33 = *(undefined8 *)(lVar11 + 0x270);
            uVar34 = *(undefined4 *)(lVar11 + 0x260);
            uVar35 = *(undefined4 *)(lVar11 + 0x264);
            uVar36 = *(undefined4 *)(lVar11 + 0x268);
            uVar37 = *(undefined4 *)(lVar11 + 0x26c);
            pcVar13 = *(code **)(lVar11 + 0x240);
            plVar8 = *(longlong **)(lVar11 + 0x248);
            dVar9 = *(double *)*(undefined1 (*) [16])(lVar11 + 0x250);
            dVar23 = *(double *)(lVar11 + 600);
            _local_188 = *(undefined1 (*) [16])(lVar11 + 0x250);
            pdVar12 = *(double **)(lVar11 + 0x228);
            local_198 = pcVar13;
            plStack_190 = plVar8;
            if (pdVar12 == (double *)0x0) {
              uVar26 = 0x40;
              pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
              dVar10 = DAT_14c8463d8;
              *pdVar12 = DAT_14c8463d0;
              pdVar12[1] = dVar10;
              dVar10 = DAT_14c8463e8;
              pdVar12[2] = DAT_14c8463e0;
              pdVar12[3] = dVar10;
              dVar10 = DAT_14c846500;
              pdVar12[4] = DAT_14c8464f8;
              pdVar12[5] = dVar10;
              dVar10 = DAT_14c846508;
              pdVar12[6] = DAT_14c846508;
              *(double **)(lVar11 + 0x228) = pdVar12;
            }
            auVar30._8_8_ = -(ulonglong)(dVar23 != pdVar12[3]);
            auVar30._0_8_ = -(ulonglong)(dVar9 != pdVar12[2]);
            auVar29._8_4_ = (int)-(ulonglong)((double)plVar8 != pdVar12[1]);
            auVar29._0_8_ = -(ulonglong)((double)pcVar13 != *pdVar12);
            auVar29._12_4_ = (int)(-(ulonglong)((double)plVar8 != pdVar12[1]) >> 0x20);
            iVar7 = movmskpd(SUB84(dVar10,0),auVar29);
            uVar6 = movmskpd(uVar26,auVar30);
            if ((uVar6 & 0x3fffffff) != 0 || iVar7 != 0) {
              *(undefined4 *)(pdVar12 + 2) = local_188._0_4_;
              *(undefined4 *)((longlong)pdVar12 + 0x14) = local_188._4_4_;
              *(undefined4 *)(pdVar12 + 3) = local_188._8_4_;
              *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_17c;
              *pdVar12 = (double)local_198;
              pdVar12[1] = (double)plStack_190;
              FUN_1448052ee(&local_198,&local_108);
              pdVar12[6] = local_f8;
              pdVar12[4] = (double)local_108;
              pdVar12[5] = (double)CONCAT44(uStack_fc,uStack_100);
            }
            uVar31 = SUB84(pdVar12[4],0);
            uVar32 = (undefined4)((ulonglong)pdVar12[4] >> 0x20);
            uVar26 = SUB84(pdVar12[5],0);
            uVar27 = (undefined4)((ulonglong)pdVar12[5] >> 0x20);
            dVar10 = pdVar12[6];
          }
          auVar28._4_4_ = uVar32;
          auVar28._0_4_ = uVar31;
          auVar28._12_4_ = uVar27;
          auVar28._8_4_ = uVar26;
          auVar29 = divpd(auVar28,_DAT_1499387d0);
          auVar25._0_8_ = dVar10 / 360.0;
          auVar25._8_8_ = 0;
          auVar30 = roundpd(auVar29,auVar29,3);
          auVar29 = roundpd(auVar25,auVar25,3);
          dVar9 = ((double)CONCAT44(uVar32,uVar31) - auVar30._0_8_ * (double)DAT_1499387d0) *
                  0.008726646259971648;
          dVar23 = ((double)CONCAT44(uVar27,uVar26) - auVar30._8_8_ * DAT_1499387d0._8_8_) *
                   0.008726646259971648;
          dVar10 = (dVar10 - auVar29._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          _X = (0.0 - auVar29._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar20 = sin(dVar9);
          dVar21 = sin(dVar23);
          dVar22 = sin(dVar10);
          sin(_X);
          dVar9 = cos(dVar9);
          dVar23 = cos(dVar23);
          dVar24 = cos(dVar10);
          cos(_X);
          dVar10 = dVar21 * dVar20 * dVar22 + dVar23 * dVar9 * dVar24;
          local_198 = (code *)(dVar20 * dVar21 * dVar24 - dVar9 * dVar23 * dVar22);
          plStack_190 = (longlong *)(-(dVar20 * dVar23 * dVar24) - dVar9 * dVar21 * dVar22);
          local_188._8_4_ = SUB84(dVar10,0);
          local_188._0_8_ = -(dVar23 * dVar20 * dVar22) + dVar21 * dVar9 * dVar24;
          uStack_17c = (int)((ulonglong)dVar10 >> 0x20);
          uStack_160 = 0;
          local_158 = 0x3ff0000000000000;
          uStack_150 = 0x3ff0000000000000;
          local_148 = 0x3ff0000000000000;
          uStack_140 = 0;
          local_178 = uVar34;
          uStack_174 = uVar35;
          uStack_170 = uVar36;
          uStack_16c = uVar37;
          local_168 = uVar33;
          (**(code **)(*param_1 + 0x7b0))(param_1,param_2);
          lVar11 = *(longlong *)(lVar17 + 0xf48);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x73eb) != '\0')) {
            FUN_1416a2400(lVar11 + 0x71a8,0);
          }
          local_108 = (longlong *)0x0;
          uStack_100 = 0x6000;
          local_f8 = 0.0;
          local_1f8 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          local_200 = local_200 & 0xffffffffffffff00;
          local_208 = local_208 & 0xffffff00;
          local_218 = local_218 & 0xffffff00;
          local_210 = CONCAT31(local_210._1_3_,1);
          FUN_14148df3c(lVar17,0,&local_108,&DAT_14c8464e0);
          ppcVar15 = (code **)CONCAT71((int7)((ulonglong)ppcVar15 >> 8),1);
        }
        else {
          plVar8 = &local_120;
LAB_1441469e5:
          local_1f8 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          local_200 = CONCAT71(local_200._1_7_,1);
          local_208 = CONCAT31(local_208._1_3_,1);
          local_210 = local_210 & 0xffffff00;
          local_218 = CONCAT31(local_218._1_3_,1);
          uVar6 = FUN_1416a3978(pcVar13,lVar17,plVar8,1);
          ppcVar15 = (code **)(ulonglong)uVar6;
        }
      }
      LOCK();
      plVar8 = plVar16 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      goto LAB_14414683e;
    }
  }
  ppcVar15 = (code **)0x0;
LAB_14414683e:
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppcVar15 & 0xffffffff;
}



// FUNCTION 14414749e FUN_14414749e body=1213 status=ok
// SIG undefined FUN_14414749e(void)

void FUN_14414749e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  void *local_70;
  uint local_68;
  longlong local_60;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = FUN_1447210f0();
  if (lVar9 == 0) {
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
  }
  else {
    if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      lVar12 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar12);
        if (*(longlong *)(lVar4 + 0x360) == lVar9) {
          if (lVar4 != 0) {
            if (*(char *)(lVar4 + 0x88) == '\x01') {
              uVar3 = *(uint *)(lVar4 + 0x38);
              if (1 < (int)uVar3) {
                local_98 = (void *)0x0;
                pvVar5 = *(void **)(lVar4 + 0x30);
                uStack_90 = uVar3;
                FUN_1446dd670(&local_98,(ulonglong)uVar3,0);
                memcpy(local_98,pvVar5,(ulonglong)uVar3 * 2);
                FUN_1415024b8(&local_98);
                goto LAB_14414759d;
              }
            }
            if (1 < *(int *)(lVar4 + 0x150)) {
              FUN_140245d8a(&local_98,0,*(undefined8 *)(lVar4 + 0x148),0);
              pvVar5 = local_70;
              local_a8 = (void *)0x0;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,local_68);
              if ((longlong)(int)local_68 == 0) {
                uStack_a0 = (ulonglong)local_68;
              }
              else {
                FUN_1446dd670(&local_a8,local_68,0);
                memcpy(local_a8,pvVar5,(longlong)(int)local_68 * 2);
              }
              FUN_1415024b8(&local_a8);
              local_b8 = local_a8;
              uStack_b0 = uStack_a0;
              local_a8 = (void *)0x0;
              uStack_a0 = 0;
              if (local_40 != 0) {
                FUN_1400020a8();
              }
              FUN_1447a1747(local_50,local_48);
              if (local_50 != 0) {
                FUN_1400020a8();
              }
              if (local_60 != 0) {
                FUN_1400020a8();
              }
              if (local_70 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_88 != 0) {
                FUN_1400020a8();
              }
              if (local_98 != (void *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1441475a2;
            }
          }
          break;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar12);
    }
    local_98 = (void *)0x0;
    uStack_90 = *(uint *)(lVar9 + 0x5e8);
    lVar12 = (longlong)(int)uStack_90;
    pvVar5 = *(void **)(lVar9 + 0x5e0);
    if (lVar12 == 0) {
      uStack_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,uStack_90,0);
      memcpy(local_98,pvVar5,lVar12 * 2);
    }
    FUN_1415024b8(&local_98);
LAB_14414759d:
    local_b8 = (void *)CONCAT44(local_98._4_4_,(undefined4)local_98);
    uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  }
LAB_1441475a2:
  lVar9 = FUN_1403ca102(param_1);
  if ((lVar9 != 0) && (cVar7 = FUN_14413f3cc(lVar9,&local_b8), cVar7 != '\0')) {
    FUN_140b1283a(&local_98,L"seen_movie_",&local_b8);
    iVar8 = uStack_90 - 1;
    if (uStack_90 == 0) {
      iVar8 = 0;
    }
    FUN_1400020e8(param_3,local_98,iVar8);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar10 = FUN_1447210f0(param_1);
  lVar9 = FUN_145bd989c(uVar10);
  if (lVar9 != 0) {
    if ((byte)(*(char *)(lVar9 + 0xb0) - 1U) < 8) {
      FUN_1400020e8(param_3,&DAT_149e1423e,1);
      FUN_1400020e8(param_3,L"NewGame",7);
      if ((*(char *)(lVar9 + 0xc0) != '\0') || (1 < (byte)(*(char *)(lVar9 + 0xb0) - 1U))) {
        FUN_1400020e8(param_3,&DAT_149e1423e,1);
        FUN_1400020e8(param_3,L"SkipIntro",9);
      }
    }
    FUN_146010760(lVar9 + 0xb8,&local_98,param_1,0);
    if (local_98 == DAT_14cbca1d0) {
      FUN_1400020e8(param_3,&DAT_149e1423e,1);
      FUN_1400020e8(param_3,L"SkipPrologue",0xc);
    }
  }
  uVar10 = FUN_1447210f0(param_1);
  FUN_1410d53f0(&local_98,uVar10);
  plVar11 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  if (plVar11 != (longlong *)0x0) {
    iVar8 = (int)plVar11[1];
    do {
      if (iVar8 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar11 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_8c,uStack_90) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_8c,uStack_90) + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      if ((local_98 != (void *)0x0) &&
         (((*(longlong *)((longlong)local_98 + 0xd0) != 0 &&
           (*(int *)((longlong)local_98 + 0xd8) - 1U < 0xfffffffe)) ||
          ((*(longlong *)((longlong)local_98 + 0xb0) != 0 &&
           (*(int *)((longlong)local_98 + 0xb8) - 1U < 0xfffffffe)))))) {
        FUN_14623d2e6(&local_98);
        iVar8 = uStack_90 - 1;
        if (uStack_90 == 0) {
          iVar8 = 0;
        }
        FUN_1400020e8(param_3,local_98,iVar8);
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441479b2 FUN_1441479b2 body=4183 status=ok
// SIG undefined FUN_1441479b2(void)

void FUN_1441479b2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  uint local_110;
  undefined4 uStack_10c;
  int local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1405f1eac();
  FUN_140044c34(param_1 + 0x6a8,param_1 + 0x530);
  uVar7 = FUN_1447210f0(param_1);
  FUN_1408b794c(&local_110,uVar7);
  plVar12 = (longlong *)CONCAT44(uStack_104,local_108);
  if (plVar12 != (longlong *)0x0) {
    iVar4 = (int)plVar12[1];
    do {
      if (iVar4 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar14 = (int)plVar12[1];
      bVar15 = iVar4 == iVar14;
      if (bVar15) {
        *(int *)(plVar12 + 1) = iVar4 + 1;
        iVar14 = iVar4;
      }
      iVar4 = iVar14;
      UNLOCK();
    } while (!bVar15);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_104,local_108) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_104,local_108) + 0x10))();
    }
    if (plVar12 != (longlong *)0x0) {
      lVar8 = CONCAT44(uStack_10c,local_110);
      if (lVar8 != 0) {
        local_110 = 0x457ff628;
        uStack_10c = 1;
        local_108 = 0;
        FUN_145c32a84(lVar8 + 0x20,local_78,param_1);
      }
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  lVar8 = FUN_1447210f0(param_1);
  if (lVar8 == 0) goto LAB_144147a74;
  plVar12 = (longlong *)(param_1 + 0x648);
  if (((*(int *)(param_1 + 0x650) == 0) || ((longlong *)*plVar12 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)*plVar12 + 0x30))(), cVar3 == '\0')) {
    local_110 = 0;
    uStack_10c = 0;
    local_108 = 0;
    FUN_1446efa72(&local_110,0,3,0x10);
    local_108 = 3;
    puVar11 = (undefined8 *)CONCAT44(uStack_10c,local_110);
    *puVar11 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    puVar11[2] = lVar10;
    *puVar11 = &PTR_FUN_14b9722f0;
    puVar11[3] = 0;
    iVar4 = 0;
    if (param_1 != 0) {
      uVar5 = *(uint *)(param_1 + 0xc);
      *(uint *)(puVar11 + 3) = uVar5;
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar4 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar14 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar14);
        }
        LOCK();
        iVar4 = *(int *)(lVar13 + 0x10);
        bVar15 = iVar4 == 0;
        if (bVar15) {
          *(int *)(lVar13 + 0x10) = iVar14;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar4 = iVar14;
        }
      }
    }
    iVar14 = local_108;
    *(int *)((longlong)puVar11 + 0x1c) = iVar4;
    puVar11[4] = FUN_141659002;
    *(undefined4 *)(puVar11 + 5) = 0;
    uVar7 = CONCAT44(uStack_10c,local_110);
    local_110 = 0;
    uStack_10c = 0;
    local_108 = 0;
    if (*(int *)(param_1 + 0x650) == 0) {
LAB_144147bb1:
      if (*plVar12 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar11 = (undefined8 *)*plVar12;
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,0);
        FUN_1446efa72(plVar12,0,0,0x10);
        *(undefined4 *)(param_1 + 0x650) = 0;
        goto LAB_144147bb1;
      }
    }
    *(undefined8 *)(param_1 + 0x648) = uVar7;
    *(int *)(param_1 + 0x650) = iVar14;
    puVar11 = (undefined8 *)CONCAT44(uStack_10c,local_110);
    if (local_108 != 0) {
      if (puVar11 == (undefined8 *)0x0) goto LAB_144147c0e;
      (**(code **)*puVar11)(puVar11,0);
      FUN_1446efa72(&local_110,0,0,0x10);
      local_108 = 0;
      puVar11 = (undefined8 *)CONCAT44(uStack_10c,local_110);
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144147c0e:
  FUN_144928b90(local_78,2);
  local_110 = (uint)DAT_14cbca638;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca638 >> 0x20);
  local_108 = DAT_14cbca640;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  lVar13 = uStack_fc;
  uVar5 = local_100;
  cVar3 = (char)local_100;
  uVar6 = (uint)uStack_f4;
  FUN_1409838b8();
  if ((uVar5 & 0xff) == 3) {
    uVar6 = (uint)(lVar13 != 0);
  }
  else if ((uVar5 & 0xff) != 2) {
    if (cVar3 == '\x01') {
      uVar6 = (uint)(uVar6 != 0);
    }
    else {
      uVar6 = 0;
    }
  }
  *(uint *)(param_1 + 0x5fc) = uVar6;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144928b90(local_78,2);
  local_110 = (uint)DAT_14cbca650;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca650 >> 0x20);
  local_108 = DAT_14cbca658;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  lVar13 = uStack_fc;
  uVar5 = local_100;
  cVar3 = (char)local_100;
  iVar4 = (uint)uStack_f4;
  uVar9 = uStack_f4 & 0xffffffff;
  FUN_1409838b8();
  if ((uVar5 & 0xff) == 3) {
    uVar9 = (ulonglong)(lVar13 != 0);
  }
  else if ((uVar5 & 0xff) != 2) {
    if (cVar3 == '\x01') {
      uVar9 = (ulonglong)(iVar4 != 0);
    }
    else {
      uVar9 = 0;
    }
  }
  FUN_148d3390c(param_1,uVar9);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x5fc) != 0) {
    FUN_14662740c(param_1);
  }
  FUN_144928b90(local_78,3);
  local_110 = (uint)DAT_14cbca6b0;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca6b0 >> 0x20);
  local_108 = DAT_14cbca6b8;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 == '\x01') {
    uVar9 = CONCAT71((int7)(uVar9 >> 8),iStack_11c != 0);
  }
  else {
    uVar5 = FUN_140321d1a(&local_128);
    uVar9 = (ulonglong)uVar5;
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144928b90(local_78,3);
  local_110 = (uint)DAT_14cbca6c8;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca6c8 >> 0x20);
  local_108 = DAT_14cbca6d0;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 != '\x01') {
    FUN_140321d1a(&local_128);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144148a0a(param_1,uVar9);
  FUN_144928b90(local_78,2);
  local_110 = (uint)DAT_14cbca6e0;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca6e0 >> 0x20);
  local_108 = DAT_14cbca6e8;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  lVar13 = uStack_fc;
  uVar5 = local_100;
  cVar3 = (char)local_100;
  uVar6 = (uint)uStack_f4;
  FUN_1409838b8();
  if ((uVar5 & 0xff) == 3) {
    uVar6 = (uint)(lVar13 != 0);
  }
  else if ((uVar5 & 0xff) != 2) {
    if (cVar3 == '\x01') {
      uVar6 = (uint)(uVar6 != 0);
    }
    else {
      uVar6 = 0;
    }
  }
  *(uint *)(param_1 + 0x600) = uVar6;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144928b90(local_78,2);
  local_110 = (uint)DAT_14cbca6f8;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca6f8 >> 0x20);
  local_108 = DAT_14cbca700;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  lVar13 = uStack_fc;
  uVar5 = local_100;
  cVar3 = (char)local_100;
  iVar4 = (uint)uStack_f4;
  uVar9 = uStack_f4 & 0xffffffff;
  FUN_1409838b8();
  if ((uVar5 & 0xff) == 3) {
    uVar9 = (ulonglong)(lVar13 != 0);
  }
  else if ((uVar5 & 0xff) != 2) {
    if (cVar3 == '\x01') {
      uVar9 = (ulonglong)(iVar4 != 0);
    }
    else {
      uVar9 = 0;
    }
  }
  FUN_144148a4e(param_1,uVar9);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_14662626c(local_78);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  lVar13 = uStack_fc;
  uVar5 = local_100;
  cVar3 = (char)local_100;
  uVar6 = (uint)uStack_f4;
  FUN_1409838b8();
  if ((uVar5 & 0xff) == 3) {
    uVar6 = (uint)(lVar13 != 0);
  }
  else if ((uVar5 & 0xff) != 2) {
    if (cVar3 == '\x01') {
      uVar6 = (uint)(uVar6 != 0);
    }
    else {
      uVar6 = 0;
    }
  }
  if (*(char *)(param_1 + 0x5f4) != (char)uVar6) {
    *(char *)(param_1 + 0x5f4) = (char)uVar6;
    FUN_1447f69b6(param_1 + 0x570);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_145bf9a33(local_78);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 == '\x01') {
    cVar3 = iStack_11c != 0;
  }
  else {
    cVar3 = FUN_140321d1a(&local_128);
  }
  if (*(char *)(param_1 + 0x5ec) != cVar3) {
    *(char *)(param_1 + 0x5ec) = cVar3;
    FUN_1447f69b6(param_1 + 0x588);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_144928b90(local_78,2);
  local_110 = (uint)DAT_14cbca698;
  uStack_10c = (undefined4)((ulonglong)DAT_14cbca698 >> 0x20);
  local_108 = DAT_14cbca6a0;
  FUN_144928d62(local_68,1,&local_110);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 == '\x01') {
    cVar3 = iStack_11c != 0;
  }
  else {
    cVar3 = FUN_140321d1a(&local_128);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x5ec) == '\0')) {
    *(undefined1 *)(param_1 + 0x5ec) = 1;
    FUN_1447f69b6(param_1 + 0x588);
  }
  FUN_1466262d4(local_78);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 != '\x01') {
    FUN_140321d1a(&local_128);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1466263a4(local_78);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 != '\x01') {
    FUN_140321d1a(&local_128);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_14662640c(local_78);
  local_110 = local_110 & 0xffffff00;
  uStack_10c = 0;
  local_108 = 0;
  uStack_104 = 0;
  local_100 = local_100 & 0xffffff00;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  local_e0 = 0xc69c4000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_7f = 1;
  local_7d = 0;
  local_7c = 0;
  FUN_1401aa3da((longlong)&uStack_f4 + 4,plVar12);
  lVar13 = FUN_140149a73(lVar8,0);
  if (lVar13 == 0) {
    local_7c = 2;
  }
  else {
    FUN_140983ba6(local_78,lVar13,&local_110);
  }
  local_128 = local_100;
  uStack_124 = (undefined4)uStack_fc;
  uStack_120 = uStack_fc._4_4_;
  iStack_11c = (uint)uStack_f4;
  FUN_1409838b8(&local_110);
  if ((char)local_128 != '\x01') {
    FUN_140321d1a(&local_128);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  lVar8 = FUN_1400f6f32(lVar8);
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x30) != 0)) {
    local_110 = 0x45bdca90;
    uStack_10c = 1;
    local_108 = 0;
    FUN_14662730c(*(longlong *)(lVar8 + 0x30) + 0x28,local_78,param_1);
  }
LAB_144147a74:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144148a0a FUN_144148a0a body=68 status=ok
// SIG undefined FUN_144148a0a(void)

void FUN_144148a0a(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x5f5) == (char)param_2) {
    return;
  }
  *(char *)(param_1 + 0x5f5) = (char)param_2;
  FUN_1447f69b6(param_1 + 0x5a0);
  uVar1 = FUN_1447210f0(param_1);
  FUN_1441204ad(param_2,uVar1);
  return;
}



// FUNCTION 144148a4e FUN_144148a4e body=102 status=ok
// SIG undefined FUN_144148a4e(void)

void FUN_144148a4e(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x5f8) != param_2) {
    iVar1 = *(int *)(param_1 + 0x600);
    if (param_2 < *(int *)(param_1 + 0x600)) {
      iVar1 = param_2;
    }
    iVar3 = 0x14;
    if (iVar1 < 0x14) {
      iVar3 = iVar1;
    }
    *(int *)(param_1 + 0x5f8) = iVar3;
    FUN_1447f69b6(param_1 + 0x558);
    if (*(int *)(param_1 + 0x5f8) != param_2) {
      uVar2 = FUN_1447210f0(param_1);
      FUN_1441206f8(*(undefined4 *)(param_1 + 0x5f8),uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 144148ab4 FUN_144148ab4 body=77 status=ok
// SIG undefined FUN_144148ab4(void)

void FUN_144148ab4(longlong param_1,char param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x5ec) != param_2) {
    *(char *)(param_1 + 0x5ec) = param_2;
    FUN_1447f69b6(param_1 + 0x588);
    if (param_3 == 0) {
      uVar1 = FUN_1447210f0(param_1);
      FUN_148d1c51c(*(undefined1 *)(param_1 + 0x5ec),uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 144148b02 FUN_144148b02 body=1722 status=ok
// SIG undefined FUN_144148b02(void)

void FUN_144148b02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1403d8a98();
  FUN_14619d4ac(param_1 + 0x6a8);
  *(undefined8 *)(param_1 + 0x638) = 0;
  plVar9 = *(longlong **)(param_1 + 0x640);
  if (plVar9 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x640) = 0;
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  lVar7 = FUN_1447210f0(param_1);
  if (lVar7 != 0) {
    if ((*(int *)(param_1 + 0x650) != 0) && (*(longlong **)(param_1 + 0x648) != (longlong *)0x0)) {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x648) + 0x30))();
      if (cVar5 != '\0') {
        local_78 = 0;
        uStack_70 = 0;
        FUN_144928b90(local_58,2);
        local_68 = DAT_14cbca638;
        local_60 = DAT_14cbca640;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_144928b90(local_58,2);
        local_68 = DAT_14cbca650;
        local_60 = DAT_14cbca658;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_14662626c(local_58);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_145bf9a33(local_58);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_144928b90(local_58,2);
        local_68 = DAT_14cbca698;
        local_60 = DAT_14cbca6a0;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_1466262d4(local_58);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_1466263a4(local_58);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_14662640c(local_58);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_144928b90(local_58,3);
        local_68 = DAT_14cbca6b0;
        local_60 = DAT_14cbca6b8;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_144928b90(local_58,3);
        local_68 = DAT_14cbca6c8;
        local_60 = DAT_14cbca6d0;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_144928b90(local_58,2);
        local_68 = DAT_14cbca6e0;
        local_60 = DAT_14cbca6e8;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        FUN_144928b90(local_58,2);
        local_68 = DAT_14cbca6f8;
        local_60 = DAT_14cbca700;
        FUN_144928d62(local_48,1);
        uVar4 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_140f12bd2(&local_78,uVar4 & 0xffffffff);
        }
        FUN_14014e938(lVar8 * 0x38 + local_78,local_58);
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if ((*(int *)(param_1 + 0x650) == 0) ||
           (plVar9 = *(longlong **)(param_1 + 0x648), plVar9 == (longlong *)0x0)) {
          local_80 = 0;
        }
        else {
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_80);
        }
        uVar3 = local_80;
        lVar8 = FUN_140149a73(lVar7,0);
        if (lVar8 != 0) {
          FUN_145a1a87a(&local_78,uVar3,lVar8,0);
        }
        FUN_1405d7ab2(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
    }
    lVar8 = FUN_1400f6f32(lVar7);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x30) != 0)) {
      FUN_140457ffc(*(longlong *)(lVar8 + 0x30) + 0x28,param_1);
    }
  }
  plVar9 = (longlong *)FUN_1411e4b4a(lVar7,0);
  if (plVar9 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9);
    if (lVar7 != 0) {
      FUN_140457ffc(lVar7 + 8,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441491be FUN_1441491be body=340 status=ok
// SIG undefined FUN_1441491be(void)

ulonglong FUN_1441491be(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  uVar6 = param_2 & 0xffffffff;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1405c673d();
  lVar2 = FUN_1447210f0(param_1);
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) ||
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0), lVar2 == 0)) {
LAB_14414922a:
    lVar2 = 0;
  }
  else {
    lVar3 = FUN_140a99ecc();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14414922a;
  }
  local_31 = 3;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x5f5) == '\0') {
    lVar3 = FUN_1447210f0(param_1);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 != 0)) {
      lVar4 = FUN_140a99ecc();
      if ((((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
          (*(char *)(lVar3 + 0x6f8) == '\x01')) &&
         ((lVar2 != 0 && 0 < *(int *)(param_1 + 0x5f8) && (*(char *)(lVar2 + 0x6f8) == '\x01')))) {
        local_31 = 2;
        uVar7 = *(int *)(param_1 + 0x5f8) - 1;
        goto LAB_1441492c5;
      }
    }
    local_31 = *(int *)(param_1 + 0x5f0) != 0;
    uVar7 = *(int *)(param_1 + 0x5f0) - 1;
    if (!(bool)local_31) {
      uVar7 = (uint)param_2 & 0xff;
    }
  }
LAB_1441492c5:
  plVar5 = (longlong *)FUN_1440d8aba(lVar1 + 1000,local_31);
  if ((int)(uVar7 & 0xff) < (int)plVar5[1]) {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),*(undefined1 *)(*plVar5 + (ulonglong)(uVar7 & 0xff)));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144149314 FUN_144149314 body=512 status=ok
// SIG undefined FUN_144149314(void)

int FUN_144149314(longlong param_1,longlong param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  char local_b0;
  longlong local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = FUN_1405c673d();
  iVar8 = *(int *)(param_1 + 0x5e0);
  if (*(char *)(lVar6 + 0x188) == '\x01') {
    lVar7 = *(longlong *)(param_2 + 0x1c8);
    if (lVar7 == 0) {
      local_58 = DAT_14c8464f0;
      local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_68 = *(undefined8 *)(lVar7 + 0x260);
      uStack_60 = *(undefined8 *)(lVar7 + 0x268);
      local_58 = *(undefined8 *)(lVar7 + 0x270);
    }
    FUN_1408b783e(&local_80,param_2,&local_68);
    local_98 = local_80;
    local_90 = local_78;
    local_88 = 0;
    lVar7 = FUN_140425b2f(param_2);
    if (lVar7 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = FUN_140425c80(lVar7,&local_98);
    }
    lVar7 = FUN_140425b2f();
    if (lVar7 == 0) {
      bVar2 = 0;
    }
    else {
      bVar2 = *(byte *)(lVar7 + 0x748);
    }
    local_b0 = bVar2 - bVar1;
    if (bVar2 < bVar1) {
      local_b0 = '\0';
    }
    local_4c = (char)param_4[1];
    if (local_4c == '\x01') {
      local_50 = *param_4;
    }
    local_b8 = *(undefined1 *)(param_1 + 0x5f4);
    local_a0 = &local_50;
    local_a8 = param_2;
    iVar4 = FUN_140944436(lVar6,iVar8,&local_80,param_3);
  }
  else {
    if (*(char *)(lVar6 + 0xdc) == '\x01') {
      uVar3 = FUN_148ceed2d(param_2);
    }
    else {
      lVar7 = FUN_140425b2f(param_2);
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined1 *)(lVar7 + 0x748);
      }
    }
    if ((char)param_4[1] == '\x01') {
      iVar5 = *param_4;
    }
    else {
      iVar5 = FUN_148ceef72(lVar6,param_3,uVar3,param_2);
    }
    iVar4 = 1;
    if (1 < iVar5 + iVar8) {
      iVar4 = iVar5 + iVar8;
    }
  }
  iVar8 = iVar8 + *(short *)(lVar6 + 0xda);
  if (iVar4 < iVar8) {
    iVar8 = iVar4;
  }
  if (*(short *)(lVar6 + 0xda) < 1) {
    iVar8 = iVar4;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144149518 FUN_144149518 body=45 status=ok
// SIG undefined FUN_144149518(void)

void FUN_144149518(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x621) == '\x01') {
    lVar1 = FUN_1403ca102();
    if (lVar1 != 0) {
      FUN_146010374(lVar1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 144149546 FUN_144149546 body=699 status=ok
// SIG undefined FUN_144149546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144149546(longlong param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  
  plVar9 = *(longlong **)(param_1 + 0x638);
  if (plVar9 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_14b972420;
    FUN_148d2f0a0(plVar4 + 2);
    plVar9 = plVar4 + 2;
    if ((plVar9 == (longlong *)0x0) ||
       (((*plVar9 != 0 && (plVar4[3] != 0)) && (0 < *(int *)(plVar4[3] + 8))))) {
      if (plVar4 == (longlong *)0x0) goto LAB_14414971e;
LAB_144149762:
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x638) = plVar9;
      plVar8 = *(longlong **)(param_1 + 0x640);
      if (plVar4 == plVar8) {
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x640) = plVar4;
        if (plVar8 != (longlong *)0x0) {
          bVar3 = false;
          goto LAB_144149787;
        }
      }
LAB_1441497ca:
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
LAB_1441497e7:
      plVar9 = *(longlong **)(param_1 + 0x638);
    }
    else {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        plVar4[2] = (longlong)plVar9;
        if ((longlong *)plVar4[3] != plVar4) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          if ((longlong *)plVar4[3] != (longlong *)0x0) {
            plVar8 = plVar4 + 3;
            plVar5 = (longlong *)plVar4[3];
            goto LAB_14414970a;
          }
          plVar4[3] = (longlong)plVar4;
        }
LAB_144149745:
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        goto LAB_144149762;
      }
      _DAT_00000010 = 0x10;
      plVar8 = (longlong *)&DAT_00000018;
      plVar5 = _DAT_00000018;
      if (_DAT_00000018 != (longlong *)0x0) {
LAB_14414970a:
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        *plVar8 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_144149745;
      }
LAB_14414971e:
      *(longlong **)(param_1 + 0x638) = plVar9;
      plVar8 = *(longlong **)(param_1 + 0x640);
      if (plVar8 != (longlong *)0x0) {
        *(longlong **)(param_1 + 0x640) = plVar4;
        bVar3 = true;
LAB_144149787:
        LOCK();
        plVar9 = plVar8 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (!bVar3) goto LAB_1441497ca;
        goto LAB_1441497e7;
      }
    }
    if (plVar9 == (longlong *)0x0) {
      return;
    }
  }
  plVar4 = plVar9 + 3;
  iVar2 = (int)plVar9[4];
  iVar7 = *(int *)(param_1 + 0x630);
  plVar8 = (longlong *)(param_1 + 0x628);
  if (iVar2 == iVar7) {
    if (iVar2 < 2) {
      return;
    }
    lVar6 = 0;
    while( true ) {
      uVar10 = *(ushort *)(*plVar4 + lVar6);
      uVar11 = (ulonglong)uVar10;
      uVar12 = *(ushort *)(*plVar8 + lVar6);
      if (uVar10 != uVar12) break;
      if (uVar10 == 0) {
        return;
      }
LAB_1441495ab:
      lVar6 = lVar6 + 2;
    }
    if ((uVar12 | uVar10) < 0x80) {
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      uVar13 = (ulonglong)uVar12;
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1441495ab;
    }
    if (uVar10 == uVar12) {
      return;
    }
  }
  else if (iVar2 + iVar7 == 1) {
    return;
  }
  if (plVar4 != plVar8) {
    _Src = (void *)*plVar8;
    *(int *)(plVar9 + 4) = iVar7;
    if (*(int *)((longlong)plVar9 + 0x24) == 0 && iVar7 == 0) {
      *(undefined4 *)((longlong)plVar9 + 0x24) = 0;
      goto LAB_144149628;
    }
    FUN_1446dd670(plVar4,iVar7);
    if (iVar7 != 0) {
      memcpy((void *)*plVar4,_Src,(longlong)iVar7 * 2);
    }
  }
  iVar7 = (int)plVar9[4];
LAB_144149628:
  if (iVar7 < 2) {
    FUN_148d2f138(plVar9);
    return;
  }
  FUN_14413ca14(plVar9);
  if (((char)plVar9[5] == '\0') && ((char)plVar9[0xc] == '\0')) {
    FUN_14413d272(plVar9);
    return;
  }
  return;
}



// FUNCTION 144149801 FUN_144149801 body=169 status=ok
// SIG undefined FUN_144149801(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144149801(void)

{
  DAT_14cbca558 = 0;
  if (DAT_14cbca550 != 0) {
    FUN_1400020a8();
  }
  DAT_14cbca518 = 0;
  if (DAT_14cbca51c != 0) {
    FUN_14472eb64(&DAT_14cbca510,0);
  }
  _DAT_14cbca540 = 0xffffffff;
  _DAT_14cbca538 = 0;
  if (0x80 < DAT_14cbca53c) {
    DAT_14cbca53c = 0x80;
    FUN_1446efbd8(&DAT_14cbca520,0);
  }
  if (DAT_14cbca530 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbca510 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1441498aa FUN_1441498aa body=1027 status=ok
// SIG undefined FUN_1441498aa(void)

void FUN_1441498aa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48;
  int local_40;
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  thunk_FUN_1662e03be();
  FUN_146627156(&local_38);
  iVar8 = (int)param_2[1];
  if (iVar8 == local_30) {
    bVar15 = true;
    if (1 < iVar8) {
      lVar13 = 0;
      while( true ) {
        uVar2 = *(ushort *)(*param_2 + lVar13);
        uVar7 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)local_38 + lVar13);
        uVar14 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_144149911;
          }
          iVar8 = uVar7 - uVar14;
          goto LAB_14414994b;
        }
        if (uVar2 == 0) break;
LAB_144149911:
        lVar13 = lVar13 + 2;
      }
      iVar8 = 0;
LAB_14414994b:
      bVar15 = iVar8 == 0;
    }
  }
  else {
    bVar15 = local_30 + iVar8 == 1;
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (((!bVar15) || (lVar13 = FUN_1447210f0(param_1), lVar13 == 0)) ||
     (plVar9 = (longlong *)FUN_1403ca102(param_1), plVar9 == (longlong *)0x0)) goto LAB_144149c55;
  cVar4 = (**(code **)(*plVar9 + 0x498))(plVar9);
  if (cVar4 == '\b') {
    local_38 = L"OakGameMode_GeneralError";
    local_30 = 0x18;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"OakMenuGameMode";
    local_30 = 0xf;
    FUN_1446e940c(local_50,&local_38);
    local_38 = L"An error occurred during gameplay.";
    local_30 = 0x22;
    FUN_140208c1e(&local_48,local_50,local_4c,&local_38);
    FUN_14413e7dc(plVar9,1,&local_48,&DAT_14c9485f0);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
    goto LAB_144149c55;
  }
  *(bool *)(param_1 + 0x492) = *(char *)((longlong)plVar9 + 0x4d9) != '\0';
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(&local_38,&DAT_14c846b20);
  bVar5 = 1;
  if (DAT_14c872bf2 == '\0') {
    pwVar11 = local_38;
    if (local_30 == 0) {
      pwVar11 = L"";
    }
    bVar5 = FUN_14054d46e(pwVar11,L"forcelauncher");
  }
  pwVar11 = local_38;
  if (local_30 == 0) {
    pwVar11 = L"";
  }
  bVar6 = FUN_14054d46e(pwVar11,L"relaunch");
  pwVar11 = local_38;
  *(byte *)(param_1 + 0x491) = bVar6 | bVar5 ^ 1 | *(byte *)(param_1 + 0x492);
  if ((bVar5 ^ 1) == 0) {
    lVar13 = (longlong)local_30;
    local_48 = (longlong *)0x0;
    local_40 = local_30;
    FUN_1446dd670(&local_48,local_30 + (uint)(lVar13 == 0) + 0xc,0);
    if (lVar13 != 0) {
      memcpy(local_48,pwVar11,lVar13 * 2);
    }
    FUN_1400020e8(&local_48,L" -nolauncher",0xc);
    plVar9 = local_48;
    if (local_40 == 0) {
      plVar9 = (longlong *)&DAT_149dfb77a;
    }
    FUN_142772b26(plVar9);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar10 = FUN_1401cb356();
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = (longlong)&PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_48[2] = lVar12;
  *local_48 = (longlong)&PTR_FUN_14b972620;
  local_48[3] = param_1;
  local_68 = 0;
  FUN_1405f67fc(uVar10,local_60,&local_48,L"AOakMenuGameMode.InitGame");
  if (local_58 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_40 == 0) {
LAB_144149c3c:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_144149c3c;
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144149c55:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144149cae FUN_144149cae body=2893 status=ok
// SIG undefined FUN_144149cae(void)

void FUN_144149cae(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined1 local_180;
  undefined1 local_178;
  longlong *local_170;
  ulonglong local_160;
  undefined8 *local_158;
  ulonglong local_150;
  undefined8 *local_148;
  longlong local_140;
  char *local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  char *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 **local_c8;
  undefined1 *local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined8 *local_98;
  int local_90;
  undefined8 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_2 + 0x40) < 1) goto LAB_144149d27;
  lVar11 = **(longlong **)(param_2 + 0x38);
  if ((lVar11 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar11);
  }
  else if (lVar11 == 0) goto LAB_144149d27;
  lVar9 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
      != lVar9 + 0x30)) goto LAB_144149d27;
  if (DAT_14c872bf2 == '\0') {
    FUN_1403ca8ec(lVar11 + 0x338,&DAT_14cbd9338);
    lVar11 = FUN_1404960a8(lVar11);
    if (lVar11 != 0) {
      local_88 = (undefined8 *)0x0;
      iStack_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar17 = local_88;
      iStack_80 = 3;
      *local_88 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_88[2] = lVar16;
      *local_88 = &PTR_FUN_14b972690;
      local_88[3] = 0;
      iVar14 = 0;
      if (param_1 != 0) {
        uVar15 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_88 + 3) = uVar15;
        if ((int)uVar15 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar14 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar14 = DAT_14c964868 + 1;
          UNLOCK();
          iVar19 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar14;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar19);
          }
          LOCK();
          iVar14 = *(int *)(lVar9 + 0x10);
          bVar20 = iVar14 == 0;
          if (bVar20) {
            *(int *)(lVar9 + 0x10) = iVar19;
            iVar14 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar14 = iVar19;
          }
        }
      }
      *(int *)((longlong)puVar17 + 0x1c) = iVar14;
      puVar17[4] = FUN_148d33f7e;
      local_110 = "TitlePicker_TitleChosen";
      local_108 = CONCAT35(local_108._5_3_,0x17);
      uVar7 = FUN_14001a6c0(&local_110,1);
      FUN_140391af6(lVar11,&local_110,uVar7,&local_88);
      *(char **)(param_1 + 0x488) = local_110;
      if (iStack_80 != 0) {
        if (local_88 == (undefined8 *)0x0) goto LAB_14414a0f5;
        (**(code **)*local_88)(local_88,0);
        FUN_1446efa72(&local_88,0,0,0x10);
        iStack_80 = 0;
      }
      if (local_88 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_1403ca8ec(lVar11 + 0x338,&DAT_14cbd9340);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x360);
    }
    lVar9 = FUN_140334a94(lVar11,uVar13);
    if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x188) == 0)) goto LAB_144149d27;
    lVar10 = FUN_1410decb6();
    lVar16 = *(longlong *)(lVar9 + 0x188);
    if (((lVar16 == 0) ||
        (((lVar10 == 0 || (lVar4 = *(longlong *)(lVar16 + 0x10), lVar4 == 0)) ||
         (*(int *)(lVar4 + 0x38) < *(int *)(lVar10 + 0x38))))) ||
       ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
         lVar10 + 0x30 || (*(longlong *)(lVar9 + 0x508) == 0)))) goto LAB_144149d27;
    lVar10 = FUN_140dd10c4();
    if ((*(longlong *)(lVar9 + 0x508) == 0) ||
       (((lVar10 == 0 || (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x508) + 0x10), lVar9 == 0))
        || ((*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
             lVar10 + 0x30)))))) goto LAB_144149d27;
    local_140 = lVar16;
    lVar11 = FUN_1400b6e86(lVar11);
    if (lVar11 != 0) {
      uVar15 = *(uint *)(lVar11 + 0xc);
      local_150 = (ulonglong)uVar15;
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      local_160 = (ulonglong)*(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        uVar15 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar15);
        }
        LOCK();
        uVar8 = *(uint *)(lVar11 + 0x10);
        bVar20 = uVar8 == 0;
        if (bVar20) {
          *(uint *)(lVar11 + 0x10) = uVar15;
          uVar8 = 0;
        }
        UNLOCK();
        if (bVar20) {
          uVar8 = uVar15;
        }
        local_160 = (ulonglong)uVar8;
        if (uVar8 == 0) goto LAB_144149f36;
      }
      uVar18 = local_150;
      if ((-1 < (int)local_150) && ((int)local_150 < DAT_14c9647dc)) {
        local_118 = local_150 >> 0x10 & 0xffff;
        local_120 = (local_150 & 0xffff) * 3;
        lVar11 = (ulonglong)(uint)((int)local_120 * 8) +
                 *(longlong *)(DAT_14c9647c8 + local_118 * 8);
        if ((lVar11 != 0) &&
           ((*(int *)(lVar11 + 0x10) == (int)local_160 &&
            ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
          plVar12 = (longlong *)FUN_1409f0ca6();
          local_158 = (undefined8 *)(**(code **)(*plVar12 + 0x40))(plVar12,&DAT_14cbc9e20);
          if ((local_158 != (undefined8 *)0x0) && ((longlong)*(int *)(local_158 + 1) != 0)) {
            puVar17 = (undefined8 *)*local_158;
            local_130 = (undefined8 *)(param_1 + 0x498);
            local_138 = (char *)(local_160 << 0x20 | uVar18);
            lVar11 = (longlong)*(int *)(local_158 + 1) * 0x28;
            do {
              lVar9 = FUN_1409f0d56(puVar17);
              if ((lVar9 == 0) && (puVar17[1] != 0)) {
                puVar3 = puVar17 + 1;
                FUN_14050fd64();
                lVar9 = FUN_14050fd64();
                local_110 = local_138;
                local_108 = *puVar17;
                local_100 = *(undefined4 *)puVar3;
                uStack_fc = *(undefined4 *)((longlong)puVar17 + 0xc);
                uStack_f8 = *(undefined4 *)(puVar17 + 2);
                uStack_f4 = *(undefined4 *)((longlong)puVar17 + 0x14);
                local_f0 = (void *)0x0;
                local_e8 = *(int *)(puVar17 + 4);
                lVar16 = (longlong)local_e8;
                pvVar5 = (void *)puVar17[3];
                local_148 = puVar3;
                if (lVar16 == 0) {
                  local_e4 = 0;
                }
                else {
                  FUN_1446dd670(&local_f0,local_e8,0);
                  memcpy(local_f0,pvVar5,lVar16 * 2);
                }
                local_e0 = local_158;
                local_98 = (undefined8 *)0x0;
                local_90 = 0;
                local_88 = (undefined8 *)0x0;
                iStack_80 = 0;
                FUN_1446efa72(&local_88,0,5,0x10);
                puVar3 = local_88;
                pvVar5 = local_f0;
                iStack_80 = 5;
                *local_88 = &PTR_LAB_149e020b0;
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 1;
                lVar16 = DAT_14c758608 + 1;
                if (lVar10 == 0) {
                  LOCK();
                  UNLOCK();
                  lVar10 = DAT_14c758608 + 2;
                  lVar16 = DAT_14c758608 + 2;
                }
                DAT_14c758608 = lVar16;
                local_88[2] = lVar10;
                *local_88 = &PTR_FUN_14b972700;
                local_88[3] = local_110;
                local_88[4] = local_108;
                *(undefined4 *)(local_88 + 5) = local_100;
                *(undefined4 *)((longlong)local_88 + 0x2c) = uStack_fc;
                *(undefined4 *)(local_88 + 6) = uStack_f8;
                *(undefined4 *)((longlong)local_88 + 0x34) = uStack_f4;
                local_88[7] = 0;
                lVar16 = (longlong)local_e8;
                *(int *)(local_88 + 8) = local_e8;
                if (lVar16 == 0) {
                  *(undefined4 *)((longlong)local_88 + 0x44) = 0;
                }
                else {
                  puVar1 = local_88 + 7;
                  local_128 = lVar9;
                  FUN_1446dd670(puVar1,local_e8,0);
                  lVar9 = local_128;
                  memcpy((void *)*puVar1,pvVar5,lVar16 * 2);
                }
                iVar14 = iStack_80;
                puVar1 = local_88;
                puVar3[9] = local_e0;
                local_88 = (undefined8 *)0x0;
                iStack_80 = 0;
                if (local_90 == 0) {
LAB_14414a3c8:
                  if (local_98 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_98 != (undefined8 *)0x0) {
                  (**(code **)*local_98)(local_98,0);
                  FUN_1446efa72(&local_98,0,0,0x10);
                  local_90 = 0;
                  goto LAB_14414a3c8;
                }
                puVar3 = local_148;
                local_98 = puVar1;
                local_90 = iVar14;
                if (iStack_80 == 0) {
LAB_14414a43d:
                  if (local_88 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_88 != (undefined8 *)0x0) {
                  (**(code **)*local_88)(local_88,0);
                  FUN_1446efa72(&local_88,0,0,0x10);
                  iStack_80 = 0;
                  goto LAB_14414a43d;
                }
                local_a8[0] = 0;
                local_a8[1] = 0;
                local_88 = (undefined8 *)*puVar3;
                iStack_80 = *(int *)(puVar3 + 1);
                uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
                local_78 = (void *)0x0;
                local_70 = *(int *)(puVar17 + 4);
                lVar16 = (longlong)local_70;
                pvVar5 = (void *)puVar17[3];
                if (lVar16 == 0) {
                  local_6c = 0;
                }
                else {
                  FUN_1446dd670(&local_78,local_70,0);
                  memcpy(local_78,pvVar5,lVar16 * 2);
                }
                local_c8 = &local_88;
                local_c0 = local_68;
                FUN_140a1e2b2(local_b8,&local_c8);
                local_170 = local_a8;
                local_178 = 0;
                local_180 = 0;
                local_188 = 0;
                FUN_140421d62(lVar9 + 0x1e8,&local_d8,local_b8,&local_98);
                FUN_140861e20(local_b8[0]);
                if (local_b8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_78 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_a8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_90 == 0) {
LAB_14414a5b5:
                  if (local_98 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_98 != (undefined8 *)0x0) {
                  (**(code **)*local_98)();
                  FUN_1446efa72(&local_98,0,0,0x10);
                  local_90 = 0;
                  goto LAB_14414a5b5;
                }
                plVar12 = local_d0;
                if (local_130 == &local_d8) {
LAB_14414a643:
                  plVar12 = local_d0;
                  if (local_d0 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = local_d0 + 1;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)*plVar6 == 0) {
                      (**(code **)*local_d0)(local_d0);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar12 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar12 + 0x10))(plVar12);
                      }
                    }
                  }
                }
                else {
                  *(undefined8 *)(param_1 + 0x498) = local_d8;
                  local_d8 = 0;
                  plVar6 = *(longlong **)(param_1 + 0x4a0);
                  if (local_d0 == plVar6) goto LAB_14414a643;
                  local_d0 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0x4a0) = plVar12;
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    plVar12 = plVar6 + 1;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)*plVar12 == 0) {
                      (**(code **)*plVar6)(plVar6);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar6 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                    goto LAB_14414a643;
                  }
                }
                uVar18 = local_150;
                if (local_f0 != (void *)0x0) {
                  FUN_1400020a8();
                  uVar18 = local_150;
                }
              }
              else {
                if (((int)uVar18 < DAT_14c9647dc) &&
                   (((plVar12 = (longlong *)
                                ((ulonglong)(uint)((int)local_120 * 8) +
                                *(longlong *)(DAT_14c9647c8 + local_118 * 8)),
                     plVar12 != (longlong *)0x0 && ((int)plVar12[2] == (int)local_160)) &&
                    ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
                  lVar9 = *plVar12;
                }
                else {
                  lVar9 = 0;
                }
                local_110 = (char *)CONCAT71(local_110._1_7_,1);
                uVar7 = *(undefined4 *)(local_158 + 2);
                uVar13 = FUN_1409f0d56(puVar17);
                (**(code **)(*(longlong *)(lVar9 + 0x30) + 0x98))
                          (lVar9 + 0x30,uVar13,uVar7,&local_110);
              }
              puVar17 = puVar17 + 5;
              lVar11 = lVar11 + -0x28;
            } while (lVar11 != 0);
          }
        }
      }
    }
LAB_144149f36:
    local_110 = DAT_14cbc9db8;
    lVar11 = FUN_14063edce(&DAT_14cb91658);
    if (lVar11 != 0) {
      FUN_148d38a0c(local_140,lVar11,param_1);
    }
  }
LAB_14414a0f5:
  FUN_145a12516(param_2);
LAB_144149d27:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14414a7fc FUN_14414a7fc body=577 status=ok
// SIG undefined FUN_14414a7fc(void)

undefined8 * FUN_14414a7fc(undefined8 *param_1,void **param_2)

{
  uint uVar1;
  short *_Src;
  void *pvVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  uVar1 = *(uint *)(param_2 + 1);
  _Src = *param_2;
  puVar6 = &DAT_149dfb77a;
  psVar5 = _Src;
  if ((longlong)(int)uVar1 == 0) {
    psVar5 = &DAT_149dfb77a;
  }
  if (*psVar5 == 0x2f) {
    if ((&local_58 != param_2) && (uStack_50 = (ulonglong)uVar1, uVar1 != 0)) {
      FUN_1446dd670(&local_58,uVar1,0);
      memcpy(local_58,_Src,(longlong)(int)uVar1 * 2);
      iVar4 = (int)uStack_50;
      goto LAB_14414a888;
    }
  }
  else {
    local_90 = 0xffffffff;
    local_98 = 0;
    iVar4 = FUN_1447ee042(param_2,&DAT_149e0635c,1,1);
    if (iVar4 < 0) {
      local_48 = (void *)0x0;
      local_40 = *(int *)(param_2 + 1);
      lVar7 = (longlong)local_40;
      pvVar2 = *param_2;
      if (lVar7 == 0) {
        local_3c = 0;
      }
      else {
        FUN_1446dd670(&local_48,local_40,0);
        memcpy(local_48,pvVar2,lVar7 * 2);
      }
    }
    else {
      iVar8 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar8 = 0;
      }
      else {
        puVar6 = *param_2;
      }
      if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      FUN_14006620a(&local_48,puVar6,iVar8);
    }
    iVar4 = 0;
    if (1 < local_40) {
      FUN_141638cfa(&local_68,&local_48);
      local_58 = local_68;
      uStack_50 = CONCAT44(local_5c,local_60);
      iVar4 = local_60;
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
LAB_14414a888:
    if (1 < iVar4) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_48 = local_58;
      local_40 = iVar4 + -1;
      FUN_14475bf92(&local_88);
      cVar3 = FUN_1461c09bd(&local_88);
      if (cVar3 != '\0') {
        *param_1 = 0;
        iVar4 = *(int *)(param_2 + 1);
        pvVar2 = *param_2;
        *(int *)(param_1 + 1) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_1,iVar4,0);
          memcpy((void *)*param_1,pvVar2,(longlong)iVar4 * 2);
        }
        goto LAB_14414a893;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_14414a893:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14414aa4a FUN_14414aa4a body=1447 status=ok
// SIG undefined FUN_14414aa4a(void)

void FUN_14414aa4a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  uint local_98;
  uint uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1406743d6();
  cVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar2 == '\0') goto LAB_14414ab7d;
  uStack_94 = 0;
  if (param_3 == 0) {
    local_98 = 0;
    uVar3 = 0;
  }
  else {
    local_98 = *(uint *)(param_3 + 0xc);
    if ((int)local_98 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((local_98 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_98 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar3 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar13 = uVar3 == 0;
      if (bVar13) {
        *(uint *)(lVar11 + 0x10) = uVar9;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar3 = uVar9;
      }
    }
  }
  plVar7 = param_1 + 0x23;
  plVar12 = (longlong *)param_1[0x33];
  if ((longlong *)param_1[0x33] == (longlong *)0x0) {
    plVar12 = plVar7;
  }
  uStack_94 = uVar3;
  uStack_90 = param_4;
  if ((longlong)(int)param_1[0x34] == 0) {
    iVar10 = 0;
  }
  else {
    lVar11 = (longlong)(int)param_1[0x34] << 4;
    do {
      if ((plVar12[1] == uStack_90) && (cVar2 = FUN_14038330a(plVar12,&local_98), cVar2 != '\0'))
      goto LAB_14414ab7d;
      plVar12 = plVar12 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    iVar10 = (int)param_1[0x34];
  }
  *(uint *)(param_1 + 0x34) = iVar10 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1a4) < iVar10 + 1U) {
    FUN_148d390f0(plVar7,iVar10);
  }
  if ((longlong *)param_1[0x33] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[0x33];
  }
  puVar1 = (uint *)(plVar7 + (longlong)iVar10 * 2);
  *puVar1 = local_98;
  puVar1[1] = uStack_94;
  puVar1[2] = (uint)uStack_90;
  puVar1[3] = uStack_90._4_4_;
  lVar11 = FUN_1447210f0(param_2);
  if (lVar11 == 0) goto LAB_14414ab7d;
  if ((*(byte *)(param_2 + 99) & 8) == 0) {
    FUN_140c7ce82(param_2,1);
  }
  lVar11 = param_1[9];
  FUN_148d3435e(&local_a0,param_3,param_4);
  lVar4 = FUN_148d344fa(param_2,local_a0);
  if (lVar4 == 0) {
    param_1[0x35] = 0;
    goto LAB_14414ab7d;
  }
  uVar3 = *(uint *)(lVar4 + 0xc);
  *(uint *)(param_1 + 0x35) = uVar3;
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  iVar10 = *(int *)(lVar4 + 0x10);
  if (iVar10 == 0) {
    LOCK();
    iVar10 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar13 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar10;
    if (bVar13) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar10 = *(int *)(lVar4 + 0x10);
    bVar13 = iVar10 == 0;
    if (bVar13) {
      *(int *)(lVar4 + 0x10) = iVar8;
      iVar10 = 0;
    }
    UNLOCK();
    if (bVar13) {
      iVar10 = iVar8;
    }
    *(int *)((longlong)param_1 + 0x1ac) = iVar10;
    if (iVar10 == 0) goto LAB_14414ab7d;
  }
  else {
    *(int *)((longlong)param_1 + 0x1ac) = iVar10;
  }
  uVar3 = *(uint *)(param_1 + 0x35);
  if (((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
      (puVar6 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
      puVar6 == (undefined8 *)0x0)) ||
     ((*(int *)(puVar6 + 2) != iVar10 || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
  goto LAB_14414ab7d;
  if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
    uVar5 = *puVar6;
  }
  else {
    uVar5 = 0;
  }
  lVar4 = 0;
  FUN_140486fc4(uVar5,param_3,0);
  if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
    uVar3 = *(uint *)(param_1 + 0x35);
    lVar4 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)((longlong)param_1 + 0x1ac) ||
          ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar7;
      }
    }
  }
  *(byte *)(lVar4 + 0x9c) = *(byte *)(lVar4 + 0x9c) | 0x20;
  if (*(int *)((longlong)param_1 + 0x1ac) == 0) {
LAB_14414af74:
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x35);
    plVar7 = (longlong *)0x0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0x1ac) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_14414af74;
      plVar7 = (longlong *)*puVar6;
    }
  }
  local_68 = *(undefined8 *)(lVar11 + 0x90);
  uStack_60 = *(undefined8 *)(lVar11 + 0x98);
  local_58 = *(undefined8 *)(lVar11 + 0xa0);
  uStack_50 = *(undefined8 *)(lVar11 + 0xa8);
  local_88 = *(undefined8 *)(lVar11 + 0xb0);
  uStack_80 = *(undefined8 *)(lVar11 + 0xb8);
  local_78 = *(undefined8 *)(lVar11 + 0xc0);
  local_b0 = 0;
  local_b8 = 0;
  FUN_144927ad4(plVar7,&local_88,&local_68,0);
  local_68 = *(undefined8 *)(lVar11 + 0xd0);
  uStack_60 = *(undefined8 *)(lVar11 + 0xd8);
  local_58 = *(undefined8 *)(lVar11 + 0xe0);
  if (*(code **)(*plVar7 + 0x478) == FUN_14028a216) {
    FUN_14028a216(plVar7);
  }
  else {
    (**(code **)(*plVar7 + 0x478))(plVar7,&local_68);
  }
  if (*(int *)((longlong)param_1 + 0x1ac) == 0) {
LAB_14414af7b:
    uVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x35);
    uVar5 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0x1ac) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_14414af7b;
      uVar5 = *puVar6;
    }
  }
  FUN_148cc5a6e(uVar5,lVar11 + 0x78);
  if (*(int *)((longlong)param_1 + 0x1ac) == 0) {
LAB_14414af82:
    uVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x35);
    uVar5 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)((longlong)param_1 + 0x1ac) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_14414af82;
      uVar5 = *puVar6;
    }
  }
  FUN_140b506a4(uVar5);
LAB_14414ab7d:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414aff2 FUN_14414aff2 body=4402 status=ok
// SIG undefined FUN_14414aff2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14414aff2(uint *param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint *puVar11;
  double *pdVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  code **ppcVar24;
  int iVar25;
  uint uVar26;
  code **ppcVar27;
  int iVar28;
  bool bVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double _X;
  double dVar47;
  double _X_00;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double _X_01;
  float fVar50;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  uint local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  code **local_240;
  undefined1 *local_238;
  code *local_230;
  ulonglong local_228;
  longlong local_220;
  uint *local_218;
  ulonglong local_210;
  longlong local_208;
  uint *local_200;
  code **local_1f8;
  undefined8 *puStack_1f0;
  undefined8 local_1e8;
  longlong *local_1d8;
  int local_1d0;
  code **local_1c8;
  undefined8 *puStack_1c0;
  undefined8 local_1b8;
  code *local_1a8;
  longlong *plStack_1a0;
  double local_198;
  double dStack_190;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (param_2 == 0) {
LAB_14414b0ac:
    lVar8 = FUN_1466275ae(param_2);
    if (lVar8 == 0) goto LAB_14414bbf0;
    lVar15 = FUN_1410c6bfc(param_2);
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_240 = &local_1a8;
      local_1a8 = FUN_141864c34;
      local_230 = FUN_14081d0ea;
      local_238 = &LAB_1464cee30;
      local_248 = &LAB_148bfac22;
      local_250 = &LAB_140f21842;
      local_258 = &DAT_149e063b2;
      local_260 = 0;
      local_268 = 0x10000004;
      local_270 = 0x10;
      local_278 = CONCAT44(local_278._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_14414b0ac;
    if ((param_1 == (uint *)0x0) || (*(longlong *)(param_1 + 0x10) == 0)) {
      plVar22 = (longlong *)0x0;
      puVar11 = (uint *)0x0;
    }
    else {
      plVar22 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x118);
      puVar11 = param_1;
      if (plVar22 == (longlong *)0x0) {
        plVar22 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar22 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        LOCK();
        *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    *(uint **)(param_2 + 0x75d8) = puVar11;
    plVar10 = *(longlong **)(param_2 + 0x75e0);
    *(longlong **)(param_2 + 0x75e0) = plVar22;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    lVar8 = FUN_1466275ae(param_2);
    if (lVar8 == 0) goto LAB_14414bbf0;
    lVar15 = *(longlong *)(param_2 + 0x438);
  }
  if ((lVar15 == 0) ||
     (plVar22 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40), plVar22 == (longlong *)0x0))
  goto LAB_14414bbf0;
  lVar6 = *(longlong *)(param_1 + 0x12);
  lVar4 = (**(code **)(*plVar22 + 8))(plVar22);
  lVar5 = FUN_140458448();
  if ((lVar5 == 0) ||
     ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30)))) goto LAB_14414bbf0;
  local_1c8 = *(code ***)(lVar6 + 0x70);
  FUN_1446dcdd4(&local_1a8);
  if (DAT_14cbc3b70 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144815d88(DAT_14cbc3b70,&local_1a8);
  }
  *(longlong *)(param_1 + 0x82) = lVar6;
  local_220 = lVar8;
  if (dStack_190 != 0.0) {
    FUN_1400020a8();
    lVar6 = *(longlong *)(param_1 + 0x82);
  }
  if (lVar6 != 0) {
    uVar7 = FUN_14050fd64();
    local_278 = 0;
    FUN_14088df30(uVar7,&local_1a8,*(undefined8 *)(param_1 + 0x82));
    plVar10 = plStack_1a0;
    if ((code **)(param_1 + 0x84) != &local_1a8) {
      *(code **)(param_1 + 0x84) = local_1a8;
      local_1a8 = (code *)0x0;
      plVar19 = *(longlong **)(param_1 + 0x86);
      if (plStack_1a0 != plVar19) {
        plStack_1a0 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x86) = plVar10;
        if (plVar19 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar19 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
      }
    }
    plVar10 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar19 = plStack_1a0 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plStack_1a0)(plStack_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    lVar8 = *(longlong *)(param_1 + 0x82);
    param_1[0xf2] = *(uint *)(lVar8 + 0x1c0);
    param_1[0xf3] = *(uint *)(lVar8 + 0x1c4);
    local_218 = (uint *)(lVar8 + 0x100);
    uVar3 = *(uint *)(lVar8 + 0x118);
    if (uVar3 == 0) {
      uVar21 = 1;
      local_228 = 0;
      iVar28 = 0;
      uVar20 = 0;
    }
    else {
      puVar11 = *(uint **)(lVar8 + 0x110);
      if (*(uint **)(lVar8 + 0x110) == (uint *)0x0) {
        puVar11 = local_218;
      }
      uVar20 = *puVar11;
      if (uVar20 == 0) {
        iVar28 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar28 = uVar3 - 1;
        }
        uVar9 = 0;
        uVar14 = (ulonglong)(uint)(iVar28 >> 5);
        if (iVar28 >> 5 < 1) {
          uVar14 = uVar9;
        }
        iVar28 = 0;
        do {
          if (uVar14 == uVar9) goto LAB_14414b3b9;
          iVar28 = iVar28 + 0x20;
          uVar20 = puVar11[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar20 == 0);
      }
      else {
        uVar9 = 0;
        iVar28 = 0;
      }
      uVar21 = (ulonglong)(-uVar20 & uVar20);
      uVar14 = uVar21 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uVar20 = (iVar28 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      local_228 = uVar9;
      if ((int)uVar3 <= (int)uVar20) {
        uVar20 = uVar3;
      }
    }
    if (uVar20 != uVar3) {
      local_200 = param_1 + 0x138;
      uVar13 = 0xffffffff;
      local_210 = (ulonglong)uVar3;
      local_208 = lVar8;
      do {
        memcpy(&local_1a8,(void *)((longlong)(int)uVar20 * 0xd8 + *(longlong *)(local_208 + 0xf0)),
               0xd0);
        puStack_1c0 = &DAT_14c846480;
        local_1c8 = &local_1a8;
        FUN_146112514(local_200,&local_1d8,&local_1c8,0);
        uVar13 = ~(uint)uVar21 & uVar13;
        puVar11 = *(uint **)(local_208 + 0x110);
        if (*(uint **)(local_208 + 0x110) == (uint *)0x0) {
          puVar11 = local_218;
        }
        uVar3 = *(uint *)(local_208 + 0x118);
        iVar25 = (int)local_228;
        lVar8 = (longlong)iVar25;
        uVar26 = puVar11[lVar8] & uVar13;
        uVar20 = uVar3;
        if (uVar26 == 0) {
          iVar17 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar17 = uVar3 - 1;
          }
          iVar17 = iVar17 >> 5;
          iVar28 = iVar28 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar25) {
            iVar18 = iVar25;
          }
          if (iVar25 < iVar17) {
            local_228 = (longlong)iVar18 + 1;
            lVar6 = 0;
            do {
              uVar26 = puVar11[lVar8 + lVar6 + 1];
              if (uVar26 != 0) {
                local_228 = (ulonglong)(iVar25 + (int)lVar6 + 1);
                uVar13 = 0xffffffff;
                goto LAB_14414b6d6;
              }
              iVar28 = iVar28 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar18 - lVar8 != lVar6);
            uVar13 = 0xffffffff;
          }
          else {
            local_228 = lVar8 + 1;
          }
        }
        else {
LAB_14414b6d6:
          uVar21 = (ulonglong)(-uVar26 & uVar26);
          uVar9 = uVar21 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar20 = (iVar28 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar20) {
            uVar20 = uVar3;
          }
        }
      } while (uVar20 != (uint)local_210);
    }
  }
LAB_14414b3b9:
  *(undefined8 *)(param_1 + 0xe8) = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xe4) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xe6) = uVar7;
  dVar47 = DAT_14c846500;
  *(double *)(param_1 + 0x15a) = DAT_14c8464f8;
  *(double *)(param_1 + 0x15c) = dVar47;
  *(double *)(param_1 + 0x15e) = DAT_14c846508;
  dVar47 = DAT_14c846500;
  *(double *)(param_1 + 0x160) = DAT_14c8464f8;
  *(double *)(param_1 + 0x162) = dVar47;
  *(double *)(param_1 + 0x164) = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x166) = 1;
  uVar9 = FUN_146627772(param_2,&DAT_14cbca630);
  if (uVar9 != 0) {
    local_228 = uVar9;
    local_218 = param_1;
    uVar7 = FUN_140f7e331();
    FUN_14111d472(uVar7,&local_1d8);
    if ((longlong)local_1d0 != 0) {
      plVar19 = local_1d8 + local_1d0;
      lVar8 = local_228 + 0x1288;
      plVar10 = local_1d8;
      do {
        lVar6 = (longlong)*(int *)(*plVar10 + 0x1b8);
        if (lVar6 != 0) {
          lVar4 = *(longlong *)(*plVar10 + 0x1b0);
          lVar6 = lVar6 * 0x28;
          do {
            uVar7 = FUN_1457125b0(lVar4);
            FUN_1470d7856(lVar8,uVar7);
            lVar4 = lVar4 + 0x28;
            lVar6 = lVar6 + -0x28;
          } while (lVar6 != 0);
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar19);
    }
    uVar3 = *(uint *)(local_228 + 0xc);
    local_218[0x7e] = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      uVar20 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar20);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar29 = uVar3 == 0;
      if (bVar29) {
        *(uint *)(lVar8 + 0x10) = uVar20;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar29) {
        uVar3 = uVar20;
      }
    }
    param_1 = local_218;
    lVar8 = local_220;
    uVar9 = local_228;
    local_218[0x7f] = uVar3;
    if ((char)local_218[0xf8] != '\0') {
      FUN_1449e3cec(local_228,1,1);
    }
    if ((char)param_1[0x102] == '\x01') {
      FUN_140d52e40(uVar9,&DAT_14cbca5a0,1,1);
    }
    plVar10 = (longlong *)FUN_140418574(uVar9);
    if (plVar10 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar10 + 0x310))(plVar10);
      dVar47 = *(double *)(lVar8 + 0x198);
      dVar43 = *(double *)(lVar8 + 0x1a0);
      dVar31 = *(double *)(lVar8 + 0x1a8);
      fVar50 = *(float *)(lVar15 + 0x640);
      lVar8 = *(longlong *)(param_1 + 0x82);
      if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x20) == 0)) {
        puVar23 = &DAT_14c846480;
        puVar11 = param_1 + 0x88;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
          *(undefined8 *)puVar11 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar11 = puVar11 + 2;
        }
      }
      else {
        FUN_140ef97cd(&local_1a8,uVar7,lVar8 + 0x20);
        ppcVar24 = &local_1a8;
        puVar11 = param_1 + 0x88;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *(code **)puVar11 = *ppcVar24;
          ppcVar24 = ppcVar24 + 1;
          puVar11 = puVar11 + 2;
        }
        lVar8 = *(longlong *)(param_1 + 0x82);
      }
      dVar44 = DAT_14c8463e8;
      dVar33 = DAT_14c8463e0;
      dVar32 = DAT_14c8463d8;
      *(double *)(param_1 + 0x88) = DAT_14c8463d0;
      *(double *)(param_1 + 0x8a) = dVar32;
      *(double *)(param_1 + 0x8c) = dVar33;
      *(double *)(param_1 + 0x8e) = dVar44;
      fVar30 = 0.0;
      if (lVar8 != 0) {
        fVar30 = *(float *)(lVar8 + 0x28);
      }
      fVar50 = fVar50 - *(float *)(plVar22 + 0x4c);
      param_1[0xf5] = (uint)fVar50;
      fVar50 = fVar30 - fVar50;
      fVar2 = *(float *)(plVar22 + 0x4b);
      dVar43 = dVar43 + 0.0;
      dVar47 = dVar47 + 0.0;
      *(double *)(param_1 + 0xa0) = dVar47;
      *(double *)(param_1 + 0xa2) = dVar43;
      *(double *)(param_1 + 0xa4) = (double)(fVar2 - fVar30) + dVar31;
      fVar2 = *(float *)((longlong)plVar22 + 0x25c);
      *(double *)(param_1 + 0xa6) = dVar47;
      *(double *)(param_1 + 0xa8) = dVar43;
      *(double *)(param_1 + 0xaa) = (double)(fVar2 - fVar50) + dVar31;
      pfVar16 = (float *)(plVar22 + 0x51);
      if ((char)plVar22[0x50] == '\0') {
        pfVar16 = (float *)((longlong)plVar22 + 0x25c);
      }
      fVar2 = *pfVar16;
      *(double *)(param_1 + 0xac) = dVar47;
      *(double *)(param_1 + 0xae) = dVar43;
      *(double *)(param_1 + 0xb0) = (double)(fVar2 - fVar50) + dVar31;
      pfVar16 = (float *)((longlong)plVar22 + 0x294);
      if (*(char *)((longlong)plVar22 + 0x28c) == '\0') {
        pfVar16 = (float *)(plVar22 + 0x4b);
      }
      fVar50 = *pfVar16;
      *(double *)(param_1 + 0xb2) = dVar47;
      *(double *)(param_1 + 0xb4) = dVar43;
      *(double *)(param_1 + 0xb6) = (double)(fVar50 - fVar30) + dVar31;
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xba) = *(undefined8 *)(param_1 + 0xa2);
      *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0xbe) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xa2);
      *(undefined8 *)(param_1 + 0xc2) = *(undefined8 *)(param_1 + 0xa4);
      *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0xa0);
      *(undefined8 *)(param_1 + 0xc6) = *(undefined8 *)(param_1 + 0xa2);
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xa4);
      local_1e8 = *(undefined8 *)(param_1 + 0xa4);
      local_1f8 = *(code ***)(param_1 + 0xa0);
      puStack_1f0 = *(undefined8 **)(param_1 + 0xa2);
      auVar34 = *(undefined1 (*) [16])(uVar9 + 0x1b0);
      dVar43 = auVar34._0_8_;
      dVar31 = auVar34._8_8_;
      dVar47 = *(double *)(uVar9 + 0x1c0);
      pdVar12 = *(double **)(uVar9 + 0x230);
      if (pdVar12 == (double *)0x0) {
        pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
        dVar32 = DAT_14c8463d8;
        *pdVar12 = DAT_14c8463d0;
        pdVar12[1] = dVar32;
        dVar32 = DAT_14c8463e8;
        pdVar12[2] = DAT_14c8463e0;
        pdVar12[3] = dVar32;
        dVar32 = DAT_14c846500;
        pdVar12[4] = DAT_14c8464f8;
        pdVar12[5] = dVar32;
        pdVar12[6] = DAT_14c846508;
        *(double **)(uVar9 + 0x230) = pdVar12;
      }
      auVar38 = _DAT_1499387d0;
      if ((((pdVar12[4] != dVar43) || (NAN(pdVar12[4]) || NAN(dVar43))) || (pdVar12[5] != dVar31))
         || (NAN(pdVar12[5]) || NAN(dVar31))) {
LAB_14414b97a:
        auVar40._8_8_ = 0;
        auVar40._0_8_ = dVar47;
        dVar32 = (double)DAT_1499387d0;
        dVar33 = DAT_1499387d0._8_8_;
        auVar34 = divpd(auVar34,_DAT_1499387d0);
        auVar37 = divpd(auVar40,_DAT_1499387d0);
        auVar34 = roundpd(auVar34,auVar34,3);
        auVar37 = roundpd(auVar37,auVar37,3);
        auVar48._0_8_ = dVar43 - auVar34._0_8_ * dVar32;
        auVar48._8_8_ = dVar31 - auVar34._8_8_ * dVar33;
        auVar41._0_8_ = dVar47 - auVar37._0_8_ * dVar32;
        auVar41._8_8_ = 0.0 - auVar37._8_8_ * dVar33;
        auVar45._0_8_ = auVar48._0_8_ + dVar32;
        auVar45._8_8_ = auVar48._8_8_ + dVar33;
        auVar39._0_8_ = auVar41._0_8_ + dVar32;
        auVar39._8_8_ = auVar41._8_8_ + dVar33;
        auVar37._8_8_ = -(ulonglong)(0.0 <= auVar48._8_8_);
        auVar37._0_8_ = -(ulonglong)(0.0 <= auVar48._0_8_);
        auVar34 = blendvpd(auVar45,auVar48,auVar37);
        auVar46._8_8_ = -(ulonglong)(0.0 <= auVar41._8_8_);
        auVar46._0_8_ = -(ulonglong)(0.0 <= auVar41._0_8_);
        auVar37 = blendvpd(auVar39,auVar41,auVar46);
        auVar42._0_8_ = auVar34._0_8_ + -360.0;
        auVar42._8_8_ = auVar34._8_8_ + -360.0;
        auVar35._8_8_ = -(ulonglong)(180.0 < auVar34._8_8_);
        auVar35._0_8_ = -(ulonglong)(180.0 < auVar34._0_8_);
        auVar46 = blendvpd(auVar34,auVar42,auVar35);
        auVar36._8_8_ = -(ulonglong)(180.0 < auVar37._8_8_);
        auVar36._0_8_ = -(ulonglong)(180.0 < auVar37._0_8_);
        auVar34._8_8_ = auVar37._8_8_ + 0.0;
        auVar34._0_8_ = auVar37._0_8_ + -360.0;
        auVar34 = blendvpd(auVar37,auVar34,auVar36);
        *(undefined1 (*) [16])(pdVar12 + 4) = auVar46;
        dVar47 = auVar34._0_8_;
        pdVar12[6] = dVar47;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = dVar47;
        auVar34 = divpd(auVar46,auVar38);
        auVar38 = divpd(auVar49,auVar38);
        auVar34 = roundpd(auVar34,auVar34,3);
        auVar38 = roundpd(auVar38,auVar38,3);
        dVar44 = (auVar46._0_8_ - auVar34._0_8_ * dVar32) * 0.008726646259971648;
        _X = (auVar46._8_8_ - auVar34._8_8_ * dVar33) * 0.008726646259971648;
        _X_00 = (dVar47 - auVar38._0_8_ * dVar32) * 0.008726646259971648;
        _X_01 = (0.0 - auVar38._8_8_ * dVar33) * 0.008726646259971648;
        dVar47 = sin(dVar44);
        dVar43 = sin(_X);
        dVar31 = sin(_X_00);
        sin(_X_01);
        dVar32 = cos(dVar44);
        dVar33 = cos(_X);
        dVar44 = cos(_X_00);
        cos(_X_01);
        *pdVar12 = dVar47 * dVar43 * dVar44 - dVar32 * dVar33 * dVar31;
        pdVar12[1] = -(dVar47 * dVar33 * dVar44) - dVar32 * dVar43 * dVar31;
        pdVar12[2] = -(dVar33 * dVar47 * dVar31) + dVar43 * dVar32 * dVar44;
        pdVar12[3] = dVar43 * dVar47 * dVar31 + dVar33 * dVar32 * dVar44;
      }
      else if ((pdVar12[6] != dVar47) || (NAN(pdVar12[6]) || NAN(dVar47))) goto LAB_14414b97a;
      local_1a8 = (code *)*pdVar12;
      plStack_1a0 = (longlong *)pdVar12[1];
      local_198 = pdVar12[2];
      dStack_190 = pdVar12[3];
      local_1c8 = local_1f8;
      puStack_1c0 = puStack_1f0;
      local_1b8 = local_1e8;
      local_270 = local_270 & 0xffffff00;
      local_278 = 0;
      FUN_144927ad4(uVar9,&local_1c8,&local_1a8,0);
    }
    (**(code **)(*(longlong *)(uVar9 + 0x650) + 0x28))(uVar9 + 0x650,0);
    (**(code **)(*(longlong *)(uVar9 + 0x650) + 0x30))(uVar9 + 0x650,0);
    if (local_1d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar8 = FUN_146627772(param_2,&DAT_14cbca628);
  if (lVar8 != 0) {
    uVar7 = FUN_140f7e331();
    FUN_14111d472(uVar7,&local_1c8);
    if ((longlong)(int)puStack_1c0 != 0) {
      ppcVar24 = local_1c8 + (int)puStack_1c0;
      ppcVar27 = local_1c8;
      do {
        lVar15 = (longlong)*(int *)(*ppcVar27 + 0x1c8);
        if (lVar15 != 0) {
          lVar6 = *(longlong *)(*ppcVar27 + 0x1c0);
          lVar15 = lVar15 * 0x28;
          do {
            uVar7 = FUN_1457125b0(lVar6);
            FUN_1470d7856(lVar8 + 0x1288,uVar7);
            lVar6 = lVar6 + 0x28;
            lVar15 = lVar15 + -0x28;
          } while (lVar15 != 0);
        }
        ppcVar27 = ppcVar27 + 1;
      } while (ppcVar27 != ppcVar24);
    }
    uVar3 = *(uint *)(lVar8 + 0xc);
    param_1[0x80] = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar3 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      uVar20 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar20);
      }
      LOCK();
      uVar3 = *(uint *)(lVar15 + 0x10);
      bVar29 = uVar3 == 0;
      if (bVar29) {
        *(uint *)(lVar15 + 0x10) = uVar20;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar29) {
        uVar3 = uVar20;
      }
    }
    lVar15 = local_220;
    param_1[0x81] = uVar3;
    if ((char)param_1[0x10c] != '\0') {
      FUN_1449e3cec(lVar8,1,1);
    }
    puVar11 = (uint *)FUN_1401714f6(param_1 + 0x1a);
    uVar3 = *(uint *)(lVar8 + 0xc);
    *puVar11 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      uVar20 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar20);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar29 = uVar3 == 0;
      if (bVar29) {
        *(uint *)(lVar6 + 0x10) = uVar20;
        uVar3 = 0;
      }
      UNLOCK();
      lVar15 = local_220;
      if (bVar29) {
        uVar3 = uVar20;
      }
    }
    puVar11[1] = uVar3;
    if (*(longlong *)(lVar8 + 0x120) == 0) {
      puVar11[2] = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(*(longlong *)(lVar8 + 0x120) + 0xc);
      puVar11[2] = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar28 = DAT_14c964868 + 1;
        UNLOCK();
        uVar20 = DAT_14c964868 + 1;
        bVar29 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar28;
        if (bVar29) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar20);
        }
        LOCK();
        uVar3 = *(uint *)(lVar6 + 0x10);
        bVar29 = uVar3 == 0;
        if (bVar29) {
          *(uint *)(lVar6 + 0x10) = uVar20;
          uVar3 = 0;
        }
        UNLOCK();
        lVar15 = local_220;
        if (bVar29) {
          uVar3 = uVar20;
        }
      }
    }
    puVar11[3] = uVar3;
    *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(lVar8 + 0x128);
    FUN_146627ec6(&local_1a8,param_1);
    FUN_145c52c74(lVar15 + 0x1978,&local_1d8,&local_1a8);
    if ((int)plStack_1a0 == 0) {
LAB_14414be3e:
      if (local_1a8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_1a8 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_1a8)(local_1a8,0);
      FUN_1446efa72(&local_1a8,0,0,0x10);
      plStack_1a0 = (longlong *)((ulonglong)plStack_1a0 & 0xffffffff00000000);
      goto LAB_14414be3e;
    }
    *(longlong **)(param_1 + 0x174) = local_1d8;
    if (local_1c8 != (code **)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1411b6fca(param_1);
LAB_14414bbf0:
  if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14414c126 FUN_14414c126 body=421 status=ok
// SIG undefined FUN_14414c126(void)

void FUN_14414c126(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      plVar2 = *(longlong **)(param_2 + 0x75e0);
      *(undefined8 *)(param_2 + 0x75d8) = 0;
      *(undefined8 *)(param_2 + 0x75e0) = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      if (*(longlong *)(param_1 + 0x3a8) != 0) {
        FUN_14480f766(param_2 + 0x300);
        *(undefined8 *)(param_1 + 0x3a8) = 0;
      }
    }
  }
  lVar3 = FUN_1466275ae(param_2);
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x5d0) != 0)) {
    FUN_14480f766(lVar3 + 0x1978);
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_14654f904(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414c2cc FUN_14414c2cc body=2421 status=ok
// SIG undefined FUN_14414c2cc(void)

void FUN_14414c2cc(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  int local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((((*(int *)(param_1 + 0x1fc) == 0) || (uVar2 = *(uint *)(param_1 + 0x1f8), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x1fc))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar3 = *plVar7, lVar3 == 0))))
  goto LAB_14414c6f9;
  FUN_140c0573e(lVar3,param_2 ^ 1);
  if ((char)(param_2 ^ 1) != '\0') {
    if (*(longlong *)(param_1 + 0x3a8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) != 0)) &&
          ((uVar2 = *(uint *)(lVar3 + 0x48), -1 < (int)uVar2 &&
           ((((int)uVar2 < DAT_14c9647dc &&
             (plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == *(int *)(lVar3 + 0x4c))))))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))) {
        if (DAT_14cba8288 == 0) {
          local_90 = &local_58;
          local_58 = FUN_141864c34;
          local_80 = FUN_14081d0ea;
          local_88 = (code *)&LAB_1464cee30;
          local_98 = &LAB_148bfac22;
          local_a0 = &LAB_140f21842;
          local_a8 = L"Game";
          local_b0 = 0;
          local_b8 = 0x10000004;
          local_c0 = 0x10;
          local_c8 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
           (*(longlong *)(param_1 + 0x3a8) != 0)) {
          FUN_14480f766(lVar3 + 0x300);
        }
      }
      *(undefined8 *)(param_1 + 0x3a8) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x3c0);
    if ((longlong)iVar8 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x3b8);
      lVar12 = 0;
      do {
        iVar6 = *(int *)(lVar3 + 4 + lVar12);
        if (((((iVar6 != 0) && (uVar2 = *(uint *)(lVar3 + lVar12), -1 < (int)uVar2)) &&
             ((int)uVar2 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar6)))) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
          FUN_140c0573e(*plVar7,CONCAT71((int7)((ulonglong)plVar7 >> 8),1));
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar8 * 8 != lVar12);
    }
    *(undefined4 *)(param_1 + 0x3c0) = 0;
    if (*(int *)(param_1 + 0x3c4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
    }
    goto LAB_14414c6f9;
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_1407329d4(lVar3,1,&local_78);
  lVar3 = local_78;
  lVar12 = (longlong)(int)uStack_70;
  if (lVar12 != 0) {
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(lVar3 + lVar10);
      if (lVar11 != 0) {
        if (DAT_14cac6e60 == 0) {
          local_58 = FUN_144a7958c;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_142b47bc4;
          local_90 = &local_58;
          local_98 = &LAB_1478989f1;
          local_a0 = &LAB_146391124;
          local_a8 = L"Engine";
          local_b0 = 0x10000000000;
          local_b8 = 0x10000005;
          local_c0 = 0x10;
          local_c8 = 0x620;
          FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        }
        if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
           ((*(byte *)(lVar11 + 0x2e4) & 1) != 0)) {
          FUN_140c0573e(lVar11,0);
          uVar2 = *(uint *)(lVar11 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar8 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar6 = *(int *)(lVar11 + 0x10);
            bVar14 = iVar6 == 0;
            if (bVar14) {
              *(int *)(lVar11 + 0x10) = iVar8;
              iVar6 = 0;
            }
            UNLOCK();
            if (!bVar14) {
              iVar8 = iVar6;
            }
          }
          iVar6 = *(int *)(param_1 + 0x3c0);
          *(uint *)(param_1 + 0x3c0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x3c4) < iVar6 + 1U) {
            FUN_1410872ba((longlong *)(param_1 + 0x3b8),iVar6);
          }
          *(ulonglong *)(*(longlong *)(param_1 + 0x3b8) + (longlong)iVar6 * 8) =
               CONCAT44(iVar8,uVar2);
        }
      }
      lVar10 = lVar10 + 8;
    } while (lVar12 * 8 != lVar10);
  }
  if ((((((*(longlong *)(param_1 + 0x3a8) == 0) &&
         (lVar3 = *(longlong *)(param_1 + 0x40), lVar3 != 0)) && (*(int *)(lVar3 + 0x4c) != 0)) &&
       ((uVar2 = *(uint *)(lVar3 + 0x48), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) &&
      (plVar7 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
      plVar7 != (longlong *)0x0)) &&
     ((((int)plVar7[2] == *(int *)(lVar3 + 0x4c) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
      (lVar3 = *plVar7, lVar3 != 0)))) {
    if (DAT_14cba8288 == 0) {
      local_90 = &local_58;
      local_58 = FUN_141864c34;
      local_80 = FUN_14081d0ea;
      local_88 = (code *)&LAB_1464cee30;
      local_98 = &LAB_148bfac22;
      local_a0 = &LAB_140f21842;
      local_a8 = L"Game";
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 0x10;
      local_c8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_68 = (longlong *)0x0;
      local_60 = 0;
      FUN_1446efa72(&local_68,0,3,0x10);
      plVar7 = local_68;
      local_60 = 3;
      FUN_14045cb56(param_1,&local_58);
      plVar4 = local_50;
      if (local_50 == (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_LAB_14a915ec0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        plVar7[2] = lVar10;
        *plVar7 = (longlong)&PTR_FUN_14b972930;
        plVar7[3] = (longlong)local_58;
        plVar7[4] = 0;
        plVar7[5] = (longlong)FUN_14414cc60;
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        *plVar7 = (longlong)&PTR_LAB_14a915ec0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar12 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar12 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar12;
        plVar7[2] = lVar10;
        *plVar7 = (longlong)&PTR_FUN_14b972930;
        plVar7[3] = (longlong)local_58;
        plVar7[4] = (longlong)local_50;
        LOCK();
        *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
        UNLOCK();
        plVar7[5] = (longlong)FUN_14414cc60;
        LOCK();
        plVar7 = local_50 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      if (((local_60 == 0) || (local_68 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*local_68 + 0x30))(), cVar5 == '\0')) {
        if (local_60 == 0) {
          pcVar13 = (code *)0x0;
          goto LAB_14414ca6d;
        }
        if (local_68 != (longlong *)0x0) {
          pcVar13 = (code *)0x0;
          (**(code **)*local_68)(local_68,0);
          FUN_1446efa72(&local_68,0,0,0x10);
          goto LAB_14414ca5a;
        }
        pcVar13 = (code *)0x0;
      }
      else {
        plVar7 = (longlong *)(lVar3 + 0x300);
        if (*(int *)(lVar3 + 0x314) < 1) {
          iVar8 = *(int *)(lVar3 + 0x308);
          iVar6 = *(int *)(lVar3 + 0x310) + -1;
          *(int *)(lVar3 + 0x310) = iVar6;
          if (iVar6 <= iVar8) {
            iVar6 = iVar8;
            if (0 < iVar8) {
              iVar9 = 0;
              do {
                if (((*(int *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                    (plVar4 = *(longlong **)(*plVar7 + (longlong)iVar9 * 0x10),
                    plVar4 == (longlong *)0x0)) ||
                   (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
                  FUN_14005b288(plVar7,iVar9);
                  FUN_14005b248(plVar7);
                }
                else {
                  iVar9 = iVar9 + 1;
                }
                iVar6 = *(int *)(lVar3 + 0x308);
              } while (iVar9 < iVar6);
            }
            iVar9 = 2;
            if (2 < iVar6 * 2) {
              iVar9 = iVar6 * 2;
            }
            *(int *)(lVar3 + 0x310) = iVar9;
            if ((iVar9 < iVar8) && (*(int *)(lVar3 + 0x30c) != iVar6)) {
              FUN_14045812c();
            }
          }
        }
        pcVar13 = (code *)0x0;
        if ((local_60 != 0) && (local_68 != (longlong *)0x0)) {
          (**(code **)(*local_68 + 0x38))(local_68,&local_58);
          pcVar13 = local_58;
        }
        iVar8 = *(int *)(lVar3 + 0x308);
        *(uint *)(lVar3 + 0x308) = iVar8 + 1U;
        if (*(uint *)(lVar3 + 0x30c) < iVar8 + 1U) {
          FUN_1447a71f6(plVar7,iVar8);
        }
        lVar3 = *plVar7;
        lVar12 = (longlong)iVar8 * 0x10;
        *(undefined8 *)(lVar3 + lVar12) = 0;
        *(undefined4 *)(lVar3 + 8 + lVar12) = 0;
        *(longlong **)(lVar3 + lVar12) = local_68;
        local_68 = (longlong *)0x0;
        *(int *)(lVar3 + 8 + lVar12) = local_60;
LAB_14414ca5a:
        local_60 = 0;
LAB_14414ca6d:
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      *(code **)(param_1 + 0x3a8) = pcVar13;
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_14414c6f9:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14414cc60 FUN_14414cc60 body=1119 status=ok
// SIG undefined FUN_14414cc60(void)

void FUN_14414cc60(longlong param_1,longlong param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  undefined8 uStack_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_80 = &local_68;
      local_68 = FUN_144a7958c;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_142b47bc4;
      local_88 = &LAB_1478989f1;
      local_90 = &LAB_146391124;
      local_98 = L"Engine";
      local_a0 = 0x10000000000;
      local_a8 = 0x10000005;
      local_b0 = 0x10;
      local_b8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((((((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) &&
          (*(int *)(param_1 + 0x1fc) != 0)) &&
         ((uVar1 = *(uint *)(param_1 + 0x1f8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) &&
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 &&
         (((int)plVar5[2] == *(int *)(param_1 + 0x1fc) &&
          ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) && (lVar8 = param_2, *plVar5 != 0)) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x120);
        if (lVar8 == 0) goto LAB_14414ccbb;
      } while (lVar8 != *plVar5);
      uVar1 = *(uint *)(param_2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar3 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar3);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar7 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar3;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar7 = iVar3;
        }
      }
      plVar5 = (longlong *)(param_1 + 0x3b8);
      iVar3 = *(int *)(param_1 + 0x3c0);
      *(uint *)(param_1 + 0x3c0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x3c4) < iVar3 + 1U) {
        FUN_1410872ba(plVar5,iVar3);
      }
      *(ulonglong *)(*plVar5 + (longlong)iVar3 * 8) = CONCAT44(iVar7,uVar1);
      local_68 = (code *)0x0;
      uStack_60 = 0;
      FUN_1407329d4(param_2,1,&local_68);
      pcVar2 = local_68;
      lVar8 = (longlong)(int)uStack_60;
      if (lVar8 != 0) {
        lVar4 = 0;
        do {
          lVar6 = *(longlong *)(pcVar2 + lVar4);
          if (lVar6 != 0) {
            if (DAT_14cac6e60 == 0) {
              local_50 = FUN_144a7958c;
              local_70 = FUN_14081d0ea;
              local_78 = FUN_142b47bc4;
              local_80 = &local_50;
              local_88 = &LAB_1478989f1;
              local_90 = &LAB_146391124;
              local_98 = L"Engine";
              local_a0 = 0x10000000000;
              local_a8 = 0x10000005;
              local_b0 = 0x10;
              local_b8 = 0x620;
              FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
            }
            if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
              uVar1 = *(uint *)(lVar6 + 0xc);
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              iVar7 = *(int *)(lVar6 + 0x10);
              if (*(int *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                iVar7 = DAT_14c964868 + 1;
                bVar9 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar9) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar7);
                }
                LOCK();
                iVar3 = *(int *)(lVar6 + 0x10);
                bVar9 = iVar3 == 0;
                if (bVar9) {
                  *(int *)(lVar6 + 0x10) = iVar7;
                  iVar3 = 0;
                }
                UNLOCK();
                if (!bVar9) {
                  iVar7 = iVar3;
                }
              }
              iVar3 = *(int *)(param_1 + 0x3c0);
              *(uint *)(param_1 + 0x3c0) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x3c4) < iVar3 + 1U) {
                FUN_1410872ba(plVar5,iVar3);
              }
              *(ulonglong *)(*plVar5 + (longlong)iVar3 * 8) = CONCAT44(iVar7,uVar1);
            }
          }
          lVar4 = lVar4 + 8;
        } while (lVar8 * 8 != lVar4);
      }
      if (local_68 != (code *)0x0) {
        FUN_1400020a8(local_68);
      }
    }
  }
LAB_14414ccbb:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14414d0c0 FUN_14414d0c0 body=1157 status=ok
// SIG undefined FUN_14414d0c0(void)

void FUN_14414d0c0(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  double *pdVar13;
  longlong *plVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  char local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
  if (((lVar10 != 0) && (lVar8 = FUN_140343d7a(param_1), lVar8 != 0)) &&
     (lVar5 = *(longlong *)(param_1 + 0xd8), lVar5 != 0)) {
    lVar8 = *(longlong *)(lVar8 + 0x1c8);
    if (lVar8 == 0) {
      pdVar9 = (double *)&DAT_14c8464e0;
      dVar15 = DAT_14c8464f0;
    }
    else {
      dVar15 = *(double *)(lVar8 + 0x270);
      pdVar9 = (double *)(lVar8 + 0x260);
    }
    dVar15 = dVar15 - *(double *)(lVar5 + 0x2a0);
    dVar16 = pdVar9[1] - *(double *)(lVar5 + 0x298);
    dVar17 = *pdVar9 - *(double *)(lVar5 + 0x290);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
    if ((lVar8 == 0) || (*(char *)(lVar8 + 0x110) == '\x01')) {
      fVar18 = *(float *)(lVar5 + 0x2d8);
      if (*(float *)(lVar5 + 0x2d8) <= *(float *)(lVar5 + 0x2dc)) {
        fVar18 = *(float *)(lVar5 + 0x2dc);
      }
    }
    else {
      fVar18 = *(float *)(lVar5 + 0x2d8);
    }
    fVar18 = (float)(SQRT(dVar15 * dVar15 + dVar17 * dVar17 + dVar16 * dVar16) - (double)fVar18);
    lVar8 = FUN_1470e53c2(param_2,&DAT_14cbca5f4);
    pfVar1 = (float *)(lVar8 + 0x40);
    if (*(byte *)(lVar8 + 0x60) == 3) {
      *pfVar1 = fVar18;
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
      if (pcVar6 != (code *)0x0) {
        pfVar12 = pfVar1;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          pfVar12 = *(float **)(lVar8 + 0x40);
        }
        (*pcVar6)(pfVar12);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar8 + 0x58) = 4;
      *(float *)(lVar8 + 0x40) = fVar18;
      *(undefined1 *)(lVar8 + 0x60) = 3;
    }
    FUN_1418e647a(param_1,&local_58);
    uVar19 = local_58;
    if (local_54 == '\0') {
      uVar19 = 0x43340000;
    }
    lVar8 = FUN_1470e53c2(param_2,&DAT_14cbca5ec);
    puVar2 = (undefined8 *)(lVar8 + 0x40);
    if (*(byte *)(lVar8 + 0x60) == 3) {
      *(undefined4 *)puVar2 = uVar19;
    }
    else {
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0x60) * 0x120));
      if (pcVar6 != (code *)0x0) {
        puVar11 = puVar2;
        if (0x18 < *(ushort *)(lVar8 + 0x58)) {
          puVar11 = *(undefined8 **)(lVar8 + 0x40);
        }
        (*pcVar6)(puVar11);
      }
      if (0x18 < *(ushort *)(lVar8 + 0x58)) {
        FUN_1400020a8(*puVar2);
      }
      *(undefined2 *)(lVar8 + 0x58) = 4;
      *(undefined4 *)(lVar8 + 0x40) = uVar19;
      *(undefined1 *)(lVar8 + 0x60) = 3;
    }
    if (*(char *)(param_1 + 0x180) == '\x01') {
      lVar10 = FUN_1470e53c2(param_2,&DAT_14cbca5fc);
      puVar2 = (undefined8 *)(lVar10 + 0x40);
      if (*(byte *)(lVar10 + 0x60) == 0x12) {
        *puVar2 = DAT_14cbca608;
      }
      else {
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
        if (pcVar6 != (code *)0x0) {
          puVar11 = puVar2;
          if (0x18 < *(ushort *)(lVar10 + 0x58)) {
            puVar11 = *(undefined8 **)(lVar10 + 0x40);
          }
          (*pcVar6)(puVar11);
        }
        if (0x18 < *(ushort *)(lVar10 + 0x58)) {
          FUN_1400020a8(*puVar2);
        }
        uVar7 = DAT_14cbca608;
        *(undefined2 *)(lVar10 + 0x58) = 8;
        *(undefined8 *)(lVar10 + 0x40) = uVar7;
        *(undefined1 *)(lVar10 + 0x60) = 0x12;
      }
    }
    else {
      cVar3 = *(char *)(lVar10 + 0xf8);
      if (cVar3 == '\x03') {
        if (((*(int *)(param_1 + 0x364) != 0) &&
            (uVar4 = *(uint *)(param_1 + 0x360), -1 < (int)uVar4)) &&
           (((int)uVar4 < DAT_14c9647dc &&
            ((((plVar14 = (longlong *)
                          ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
               plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(param_1 + 0x364))) &&
              ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) &&
             ((lVar10 = *plVar14, lVar10 != 0 &&
              (dVar15 = SQRT(*(double *)(lVar10 + 0x138) * *(double *)(lVar10 + 0x138) +
                             *(double *)(lVar10 + 0x128) * *(double *)(lVar10 + 0x128) +
                             *(double *)(lVar10 + 0x130) * *(double *)(lVar10 + 0x130)),
              0.0 < dVar15)))))))) {
          dVar15 = (double)fVar18 / dVar15;
          lVar10 = FUN_1470e53c2(param_2,&DAT_14cbca5fc);
          pdVar9 = (double *)(lVar10 + 0x40);
          if (*(byte *)(lVar10 + 0x60) == 0x15) {
            *pdVar9 = dVar15;
          }
          else {
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
            if (pcVar6 != (code *)0x0) {
              pdVar13 = pdVar9;
              if (0x18 < *(ushort *)(lVar10 + 0x58)) {
                pdVar13 = *(double **)(lVar10 + 0x40);
              }
              (*pcVar6)(pdVar13);
            }
            if (0x18 < *(ushort *)(lVar10 + 0x58)) {
              FUN_1400020a8(*pdVar9);
            }
            *(undefined2 *)(lVar10 + 0x58) = 8;
            *(double *)(lVar10 + 0x40) = dVar15;
            *(undefined1 *)(lVar10 + 0x60) = 0x15;
          }
        }
      }
      else if (cVar3 == '\x02') {
        lVar10 = FUN_1470e53c2(param_2,&DAT_14cbca5fc);
        pfVar1 = (float *)(lVar10 + 0x40);
        if (*(byte *)(lVar10 + 0x60) == 3) {
          *pfVar1 = fVar18;
        }
        else {
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)*(byte *)(lVar10 + 0x60) * 0x120));
          if (pcVar6 != (code *)0x0) {
            pfVar12 = pfVar1;
            if (0x18 < *(ushort *)(lVar10 + 0x58)) {
              pfVar12 = *(float **)(lVar10 + 0x40);
            }
            (*pcVar6)(pfVar12);
          }
          if (0x18 < *(ushort *)(lVar10 + 0x58)) {
            FUN_1400020a8(*(undefined8 *)pfVar1);
          }
          *(undefined2 *)(lVar10 + 0x58) = 4;
          *(float *)(lVar10 + 0x40) = fVar18;
          *(undefined1 *)(lVar10 + 0x60) = 3;
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 14414d546 FUN_14414d546 body=284 status=ok
// SIG undefined FUN_14414d546(void)

char FUN_14414d546(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x358) != 0) && (*(int *)(param_1 + 0x354) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x350);
    cVar3 = '\0';
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14414d5bd;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x354))) &&
        (lVar2 = *(longlong *)(param_1 + 0x48), (*(uint *)(lVar4 + 8) & 0x10200000) == 0)) &&
       ((lVar4 = *(longlong *)(lVar2 + 0x220), lVar4 != 0 && (*(longlong *)(lVar4 + 0xf0) != 0)))) {
      cVar3 = FUN_140c2babe(param_1);
      if (cVar3 != '\x02') goto LAB_14414d5bd;
      if (*(char *)(lVar2 + 0x228) == '\x01') {
        local_38 = DAT_14c8464f0;
        local_48 = (undefined4)DAT_14c8464e0;
        uStack_44 = DAT_14c8464e0._4_4_;
        uStack_40 = (undefined4)DAT_14c8464e8;
        uStack_3c = DAT_14c8464e8._4_4_;
        FUN_1400b22c2(local_58,&DAT_149e02088);
        cVar3 = FUN_1418e6788(param_1,&local_48,local_58);
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        if (cVar3 == '\0') goto LAB_14414d5bb;
      }
      cVar3 = '\x02';
      goto LAB_14414d5bd;
    }
  }
LAB_14414d5bb:
  cVar3 = '\0';
LAB_14414d5bd:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414d664 FUN_14414d664 body=1131 status=ok
// SIG undefined FUN_14414d664(void)

void FUN_14414d664(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined1 local_160;
  longlong local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  longlong *local_b8;
  longlong *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_14064d852();
  lVar15 = param_1[9];
  lVar10 = FUN_140343d7a(param_1);
  if (((((*(int *)((longlong)param_1 + 0x364) == 0) ||
        (uVar4 = *(uint *)(param_1 + 0x6c), (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) ||
      (((plVar13 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_1 + 0x364))) ||
       ((lVar5 = *(longlong *)(lVar15 + 0x220), (*(uint *)(plVar13 + 1) & 0x10200000) != 0 ||
        ((lVar10 == 0 || (lVar5 == 0)))))))) ||
     ((lVar6 = *plVar13, lVar6 == 0 || (*(longlong *)(lVar5 + 0xf0) == 0)))) goto LAB_14414d709;
  cVar3 = *(char *)(lVar15 + 0x229);
  *(char *)((longlong)param_1 + 0x36d) = cVar3;
  lVar15 = *(longlong *)(lVar10 + 0x1c8);
  if (lVar15 == 0) {
    puVar11 = &DAT_14c8464e0;
    uVar16 = (undefined4)DAT_14c8464f0;
    uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar16 = (undefined4)*(undefined8 *)(lVar15 + 0x270);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar15 + 0x270) >> 0x20);
    puVar11 = (undefined8 *)(lVar15 + 0x260);
  }
  uVar7 = *(undefined4 *)((longlong)puVar11 + 4);
  uVar8 = *(undefined4 *)(puVar11 + 1);
  uVar9 = *(undefined4 *)((longlong)puVar11 + 0xc);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)puVar11;
  *(undefined4 *)((longlong)param_1 + 300) = uVar7;
  *(undefined4 *)(param_1 + 0x26) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar9;
  param_1[0x27] = CONCAT44(uVar17,uVar16);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  if (*(char *)((longlong)param_1 + 0x144) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  }
  if ((char)param_1[0x2c] == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  if ((char)param_1[0x30] == '\x01') {
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if ((char)param_1[0x71] == '\x01') {
    *(undefined1 *)(param_1 + 0x71) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x394) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x36f) = 0;
  if (cVar3 != '\0') {
    FUN_1400bc96c(lVar6 + 0x1218,&DAT_14cbca5e4);
  }
  FUN_1466277e4(lVar6 + 0x41e8,&local_148,param_1);
  FUN_14125c7ea(&local_148);
  FUN_14585a8e0(param_1 + 0x31,&local_148);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_68 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_b8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  plVar13 = (longlong *)CONCAT44(uStack_fc,local_100);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (param_1[0x1b] != 0) {
    FUN_1437fe5b8(param_1 + 0x31,param_1[0x1b] + 0x238);
  }
  if (*(char *)(lVar5 + 0x48) == '\0') {
    FUN_140f6e9c4(param_1);
  }
  if ((((((longlong *)param_1[0x6b] == (longlong *)0x0) ||
        (*(int *)((longlong)param_1 + 0x354) == 0)) ||
       (uVar4 = *(uint *)(param_1 + 0x6a), (int)uVar4 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar4 ||
       (lVar15 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar15 == 0)))) ||
     ((*(int *)(lVar15 + 0x10) != *(int *)((longlong)param_1 + 0x354) ||
      ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) goto LAB_14414d709;
  uVar12 = (**(code **)(*(longlong *)param_1[0x6b] + 0x50))();
  local_128 = 0;
  local_120 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  (**(code **)(*param_1 + 0x138))(param_1,&local_148);
  local_160 = 1;
  local_168 = &local_148;
  FUN_14096dfee(uVar12,&local_158,*(undefined8 *)(lVar5 + 0xf0),0);
  plVar13 = local_150;
  if (local_150 == (longlong *)0x0) {
    param_1[100] = local_158;
    plVar14 = (longlong *)param_1[0x65];
    if (plVar14 != (longlong *)0x0) {
      param_1[0x65] = 0;
LAB_14414d9c3:
      LOCK();
      plVar13 = plVar14 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014414d9ee:
        if (iVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_150 + 1) = (int)local_150[1] + 1;
    UNLOCK();
    param_1[100] = local_158;
    plVar14 = (longlong *)param_1[0x65];
    if (local_150 == plVar14) {
      LOCK();
      plVar14 = local_150 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar14 = plVar13;
        goto joined_r0x00014414d9ee;
      }
    }
    else {
      param_1[0x65] = (longlong)local_150;
      if (plVar14 != (longlong *)0x0) goto LAB_14414d9c3;
    }
  }
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_150 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_150 + 0x10))(local_150);
      }
    }
  }
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_148);
LAB_14414d709:
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414dad0 FUN_14414dad0 body=105 status=ok
// SIG undefined FUN_14414dad0(void)

undefined8 FUN_14414dad0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1407188f8();
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x125) == '\0') {
      if ((byte)(param_3 - 1U) < 2) {
        *(undefined1 *)(param_1 + 0x125) = 2;
        *(undefined1 *)(param_1 + 0x36e) = 0;
        if (*(longlong *)(param_1 + 800) != 0) {
          FUN_140f6f7b0(*(longlong *)(param_1 + 800),2);
        }
      }
    }
    else {
      cVar1 = FUN_145be1a54(param_1);
      if (cVar1 == '\0') {
        uVar2 = FUN_1466278ca(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14414db3a FUN_14414db3a body=802 status=ok
// SIG undefined FUN_14414db3a(void)

void FUN_14414db3a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  double *pdVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (((((*(int *)(param_1 + 0x364) != 0) && (uVar1 = *(uint *)(param_1 + 0x360), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x364))))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar2 = *plVar7, lVar2 != 0)))) {
    if (*(char *)(param_1 + 0x180) == '\x01') {
      FUN_1437fd114(lVar2,param_1 + 0x168);
      return;
    }
    lVar5 = FUN_140343d7a(param_1);
    if (((lVar5 != 0) && (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220), lVar3 != 0))
       && (*(longlong *)(param_1 + 0xd8) != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x1c8);
      if (lVar5 == 0) {
        pdVar6 = &DAT_14c8464e0;
        uVar16 = SUB84(DAT_14c8464f0,0);
        uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar16 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
        uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
        pdVar6 = (double *)(lVar5 + 0x260);
      }
      dVar10 = *pdVar6;
      dVar12 = pdVar6[1];
      cVar4 = FUN_1402f52f6(param_1 + 0x188);
      if (cVar4 == '\0') {
        pdVar6 = (double *)(*(longlong *)(param_1 + 0xd8) + 0x290);
      }
      else {
        pdVar6 = (double *)(param_1 + 0x1e0);
      }
      dVar8 = pdVar6[2] - (double)CONCAT44(uVar17,uVar16);
      dVar10 = *pdVar6 - dVar10;
      dVar12 = pdVar6[1] - dVar12;
      dVar13 = SQRT(dVar8 * dVar8 + dVar10 * dVar10 + dVar12 * dVar12);
      dVar9 = DAT_14c8464f0;
      dVar11 = DAT_14c8464e0;
      dVar15 = DAT_14c8464e8;
      if (9.99999993922529e-09 < dVar13) {
        dVar15 = 1.0 / dVar13;
        dVar9 = dVar8 * dVar15;
        dVar11 = dVar10 * dVar15;
        dVar15 = dVar12 * dVar15;
      }
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220);
      if ((lVar5 == 0) || (*(char *)(lVar5 + 0x110) == '\x01')) {
        fVar14 = *(float *)(pdVar6 + 9);
        if (*(float *)(pdVar6 + 9) <= *(float *)((longlong)pdVar6 + 0x4c)) {
          fVar14 = *(float *)((longlong)pdVar6 + 0x4c);
        }
      }
      else {
        fVar14 = *(float *)(pdVar6 + 9);
      }
      if (*(char *)(param_1 + 0x36d) == '\x01') {
        if (*(char *)(lVar2 + 0x1558) == '\x01') {
          *(double *)(lVar2 + 0x1540) = *(double *)(lVar2 + 0x1540) + dVar11;
          *(double *)(lVar2 + 0x1548) = *(double *)(lVar2 + 0x1548) + dVar15;
          *(double *)(lVar2 + 0x1550) = *(double *)(lVar2 + 0x1550) + dVar9;
        }
        else {
          *(double *)(lVar2 + 0x1540) = dVar11;
          *(double *)(lVar2 + 0x1548) = dVar15;
          *(double *)(lVar2 + 0x1550) = dVar9;
        }
        *(undefined1 *)(lVar2 + 0x1558) = 1;
      }
      cVar4 = *(char *)(lVar3 + 0xf8);
      if ((cVar4 != '\x01') && (*(char *)(param_1 + 0x388) == '\0')) {
        dVar10 = 0.0;
        if (0.0 <= dVar13 - (double)fVar14) {
          dVar10 = dVar13 - (double)fVar14;
        }
        if (cVar4 == '\x03') {
          dVar12 = SQRT(*(double *)(lVar2 + 0x138) * *(double *)(lVar2 + 0x138) +
                        *(double *)(lVar2 + 0x128) * *(double *)(lVar2 + 0x128) +
                        *(double *)(lVar2 + 0x130) * *(double *)(lVar2 + 0x130));
          if (dVar12 <= 0.0) {
            return;
          }
          dVar10 = (double)(~-(ulonglong)(dVar10 <= 0.0) & (ulonglong)(dVar10 / dVar12));
          fVar14 = *(float *)(lVar3 + 0x100);
        }
        else {
          if (cVar4 != '\x02') {
            return;
          }
          fVar14 = *(float *)(lVar3 + 0xfc);
        }
        if ((double)fVar14 < dVar10) {
          return;
        }
      }
      *(double *)(param_1 + 0x168) = dVar11;
      *(double *)(param_1 + 0x170) = dVar15;
      *(double *)(param_1 + 0x178) = dVar9;
      *(undefined1 *)(param_1 + 0x180) = 1;
    }
  }
  return;
}



// FUNCTION 14414de5c FUN_14414de5c body=171 status=ok
// SIG undefined FUN_14414de5c(void)

void FUN_14414de5c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  lVar4 = FUN_140343d7a();
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x220), lVar2 != 0)) {
    cVar1 = *(char *)(lVar2 + 0x130);
    if (cVar1 == '\x01') {
      if (*(char *)(param_1 + 0x394) == '\0') {
        uVar6 = FUN_141236616(param_1);
        *(undefined4 *)(param_1 + 0x390) = uVar6;
        *(undefined1 *)(param_1 + 0x394) = 1;
      }
    }
    else if ((cVar1 == '\0') && (*(char *)(param_1 + 0x388) == '\0')) {
      lVar4 = *(longlong *)(lVar4 + 0x1c8);
      if (lVar4 == 0) {
        puVar5 = &DAT_14c8464e0;
        uVar7 = DAT_14c8464f0;
      }
      else {
        puVar5 = (undefined8 *)(lVar4 + 0x260);
        uVar7 = *(undefined8 *)(lVar4 + 0x270);
      }
      uVar3 = puVar5[1];
      *(undefined8 *)(param_1 + 0x370) = *puVar5;
      *(undefined8 *)(param_1 + 0x378) = uVar3;
      *(undefined8 *)(param_1 + 0x380) = uVar7;
      *(undefined1 *)(param_1 + 0x388) = 1;
    }
  }
  return;
}



// FUNCTION 14414df08 FUN_14414df08 body=64 status=ok
// SIG undefined FUN_14414df08(void)

undefined8 * FUN_14414df08(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b970f50;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14414df4c FUN_14414df4c body=81 status=ok
// SIG undefined FUN_14414df4c(void)

undefined8 FUN_14414df4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14414dfa4 FUN_14414dfa4 body=89 status=ok
// SIG undefined FUN_14414dfa4(void)

bool FUN_14414dfa4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14414dfef;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14414dfef:
  return lVar6 == param_2;
}



// FUNCTION 14414e01a FUN_14414e01a body=118 status=ok
// SIG undefined FUN_14414e01a(void)

void FUN_14414e01a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b970f50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14414e090 FUN_14414e090 body=118 status=ok
// SIG undefined FUN_14414e090(void)

void FUN_14414e090(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b970f50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14414e106 FUN_14414e106 body=156 status=ok
// SIG undefined FUN_14414e106(void)

void FUN_14414e106(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b970f50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014414e192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14414e1a2 FUN_14414e1a2 body=97 status=ok
// SIG undefined FUN_14414e1a2(void)

ulonglong FUN_14414e1a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014414e200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))(0);
  return uVar7;
}



// FUNCTION 14414e204 FUN_14414e204 body=93 status=ok
// SIG undefined FUN_14414e204(void)

ulonglong FUN_14414e204(longlong param_1)

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
LAB_14414e256:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14414e256;
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



// FUNCTION 14414e302 FUN_14414e302 body=29 status=ok
// SIG undefined FUN_14414e302(void)

undefined8 FUN_14414e302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14414e49e FUN_14414e49e body=93 status=ok
// SIG undefined FUN_14414e49e(void)

void FUN_14414e49e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14414e4fc FUN_14414e4fc body=93 status=ok
// SIG undefined FUN_14414e4fc(void)

void FUN_14414e4fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971340;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14414e55a FUN_14414e55a body=126 status=ok
// SIG undefined FUN_14414e55a(void)

void FUN_14414e55a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971340;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014414e5c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14414e5e2 FUN_14414e5e2 body=269 status=ok
// SIG undefined FUN_14414e5e2(void)

undefined8 FUN_14414e5e2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14414e6e9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14414e6e9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14414e6e9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14414e69d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14414e6f0(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14414e69d;
    }
  }
  uVar6 = 0;
LAB_14414e69d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414e6f0 FUN_14414e6f0 body=466 status=ok
// SIG undefined FUN_14414e6f0(void)

ulonglong FUN_14414e6f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong unaff_RDI;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(lVar2 + 0x38);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar6 + lVar8);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar2 + 0x30) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
        }
        plVar4 = (longlong *)FUN_140334a94(lVar3,uVar7);
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
        if (plVar4 == (longlong *)0x0) goto LAB_14414e893;
        if (DAT_14cbadd90 == 0) {
          local_50 = FUN_141030f22;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1459f2e4c;
          local_70 = &local_50;
          local_78 = &LAB_148c39de3;
          local_80 = &LAB_1457a9eb2;
          local_88 = &DAT_149e063b2;
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30)) &&
           (lVar5 = FUN_140d27aa0(plVar4), *(char *)(lVar5 + 0xb4) != '\x03')) {
          lVar6 = (**(code **)(*plVar4 + 0x6b8))(plVar4);
          if (lVar6 == 0) goto LAB_14414e893;
          lVar8 = FUN_1459ba0f6();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_14414e893;
          FUN_148d2fde4(lVar2,lVar3);
          break;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  unaff_RDI = 0;
LAB_14414e893:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 14414e912 FUN_14414e912 body=71 status=ok
// SIG undefined FUN_14414e912(void)

undefined8 * FUN_14414e912(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b971500;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14414ead8 FUN_14414ead8 body=269 status=ok
// SIG undefined FUN_14414ead8(void)

void FUN_14414ead8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b971500;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[7] = 0;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  pvVar3 = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[10] = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  pvVar3 = *(void **)(param_1 + 0x50);
  *(int *)(puVar2 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 10,iVar1,0);
    memcpy((void *)puVar2[10],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(param_1 + 0x60);
  return;
}



// FUNCTION 14414ebe6 FUN_14414ebe6 body=269 status=ok
// SIG undefined FUN_14414ebe6(void)

void FUN_14414ebe6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e06450;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b971500;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar2[7] = 0;
  puVar2[8] = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  pvVar3 = *(void **)(param_1 + 0x40);
  *(int *)(puVar2 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 8,iVar1,0);
    memcpy((void *)puVar2[8],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[10] = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  pvVar3 = *(void **)(param_1 + 0x50);
  *(int *)(puVar2 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 10,iVar1,0);
    memcpy((void *)puVar2[10],pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(param_1 + 0x60);
  return;
}



// FUNCTION 14414ecf4 FUN_14414ecf4 body=332 status=ok
// SIG undefined FUN_14414ecf4(void)

void FUN_14414ecf4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined8 uVar5;
  void *pvVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var4 = param_2[1].DebugInfo;
  *(undefined ***)p_Var4 = &PTR_LAB_149e06450;
  (p_Var4->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var4 = &PTR_FUN_14b971500;
  (p_Var4->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  p_Var4->EntryCount = (int)uVar5;
  p_Var4->ContentionCount = (int)((ulonglong)uVar5 >> 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  p_Var4->Flags = (int)uVar5;
  p_Var4->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar5 >> 0x20);
  p_Var4->SpareWORD = (short)((ulonglong)uVar5 >> 0x30);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  p_Var4[1].Type = (short)uVar1;
  p_Var4[1].CreatorBackTraceIndex = (short)((uint)uVar1 >> 0x10);
  p_Var4[1].CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
  p_Var4[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  iVar2 = *(int *)(param_1 + 0x48);
  pvVar6 = *(void **)(param_1 + 0x40);
  *(int *)&p_Var4[1].ProcessLocksList.Blink = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)&p_Var4[1].ProcessLocksList.Blink + 4) = 0;
  }
  else {
    FUN_1446dd670(&p_Var4[1].ProcessLocksList,iVar2,0);
    memcpy(p_Var4[1].ProcessLocksList.Flink,pvVar6,(longlong)iVar2 * 2);
  }
  p_Var4[1].EntryCount = 0;
  p_Var4[1].ContentionCount = 0;
  DVar3 = *(DWORD *)(param_1 + 0x58);
  pvVar6 = *(void **)(param_1 + 0x50);
  p_Var4[1].Flags = DVar3;
  if ((longlong)(int)DVar3 == 0) {
    p_Var4[1].CreatorBackTraceIndexHigh = 0;
    p_Var4[1].SpareWORD = 0;
  }
  else {
    FUN_1446dd670(&p_Var4[1].EntryCount,DVar3,0);
    memcpy(*(void **)&p_Var4[1].EntryCount,pvVar6,(longlong)(int)DVar3 * 2);
  }
  *(undefined1 *)&p_Var4[2].Type = *(undefined1 *)(param_1 + 0x60);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014414ee2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14414ee40 FUN_14414ee40 body=65 status=ok
// SIG undefined FUN_14414ee40(void)

void FUN_14414ee40(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_14414ef9a(param_1 + 0x20,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414ee82 FUN_14414ee82 body=278 status=ok
// SIG undefined FUN_14414ee82(void)

undefined8 FUN_14414ee82(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14414ef92;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14414ef92;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14414ef92:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14414ef46;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14414ef9a(param_1 + 0x20,&local_29);
      uVar6 = 1;
      goto LAB_14414ef46;
    }
  }
  uVar6 = 0;
LAB_14414ef46:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414ef9a FUN_14414ef9a body=376 status=ok
// SIG undefined FUN_14414ef9a(void)

void FUN_14414ef9a(longlong *param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = *param_2;
  lVar3 = *param_1;
  *(undefined1 *)(lVar3 + 0x4d8) = 0;
  FUN_1461429a2(lVar3);
  if ((((*(longlong *)(lVar3 + 0x30) == 0) ||
       (lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x360), lVar9 == 0)) ||
      (*(longlong *)(lVar9 + 0x1f0) == 0)) ||
     (((lVar9 = FUN_14116599c(), lVar9 == 0 || (cVar5 = FUN_14144bed0(lVar9), cVar5 == '\0')) ||
      (cVar6 == '\0')))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  FUN_1410d53f0(&local_40,uVar10);
  plVar11 = (longlong *)CONCAT44(uStack_34,local_38);
  if (plVar11 != (longlong *)0x0) {
    iVar7 = (int)plVar11[1];
    do {
      if (iVar7 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plVar11[1];
      bVar12 = iVar7 == iVar4;
      if (bVar12) {
        *(int *)(plVar11 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
    }
    lVar9 = local_40;
    if (plVar11 != (longlong *)0x0) {
      if (local_40 != 0) {
        uVar8 = FUN_14595f7e8(local_40,param_1 + 1);
        FUN_14624da98(lVar3,uVar8 ^ 1);
        local_48 = (undefined1)param_1[8];
        local_40 = param_1[1];
        local_38 = (undefined4)param_1[2];
        local_30 = 0;
        cVar6 = FUN_14413e080(lVar9,&local_40,param_1 + 4,param_1 + 6);
        if (cVar6 == '\0') {
          FUN_14413e708(lVar3);
        }
      }
      LOCK();
      plVar2 = plVar11 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14414f124 FUN_14414f124 body=298 status=ok
// SIG undefined FUN_14414f124(void)

void FUN_14414f124(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cb9e9b0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_143564180;
      local_38 = &LAB_14115fc28;
      local_48 = &LAB_148b767a1;
      local_50 = FUN_1465a0fdc;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x118;
      FUN_14081cfa3(L"/Script/PhotoMode",L"KPhotoModeSubsystem",&DAT_14cb9e9b0,FUN_1465a0fba);
      if (DAT_14cb9e9b0 == 0) goto LAB_14414f224;
    }
    if ((*(int *)(DAT_14cb9e9b0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb9e9b0 + 0x38) * 8) ==
        DAT_14cb9e9b0 + 0x30)) {
      lVar1 = *param_2;
      goto LAB_14414f226;
    }
  }
LAB_14414f224:
  lVar1 = 0;
LAB_14414f226:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1448a6f9c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98,lVar1);
}



// FUNCTION 14414f250 FUN_14414f250 body=29 status=ok
// SIG undefined FUN_14414f250(void)

undefined8 FUN_14414f250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14414f3ec FUN_14414f3ec body=93 status=ok
// SIG undefined FUN_14414f3ec(void)

void FUN_14414f3ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14414f44a FUN_14414f44a body=93 status=ok
// SIG undefined FUN_14414f44a(void)

void FUN_14414f44a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14414f4a8 FUN_14414f4a8 body=126 status=ok
// SIG undefined FUN_14414f4a8(void)

void FUN_14414f4a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971650;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014414f517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14414f530 FUN_14414f530 body=269 status=ok
// SIG undefined FUN_14414f530(void)

undefined8 FUN_14414f530(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14414f637;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14414f637;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14414f637:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14414f5eb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14414f63e(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14414f5eb;
    }
  }
  uVar6 = 0;
LAB_14414f5eb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414f63e FUN_14414f63e body=219 status=ok
// SIG undefined FUN_14414f63e(void)

ulonglong FUN_14414f63e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x460) != 0) &&
      (plVar4 = *(longlong **)(lVar2 + 0x468), plVar4 != (longlong *)0x0)) && (0 < (int)plVar4[1]))
  {
    plVar5 = DAT_14cabd158;
    if (((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) &&
       (((DAT_14ca9a35c & 1) != 0 && (DAT_14ca84e78 != '\x01')))) {
      if (DAT_14cabd108 != 0) {
        plVar5 = (longlong *)(DAT_14cabd108 + 0x10);
        goto LAB_14414f6a4;
      }
LAB_14414f6f0:
      *(undefined8 *)(lVar2 + 0x460) = 0;
      *(undefined8 *)(lVar2 + 0x468) = 0;
LAB_14414f6f7:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    else {
LAB_14414f6a4:
      if (plVar5 == (longlong *)0x0) goto LAB_14414f6f0;
      cVar3 = (**(code **)(*plVar5 + 0x68))(plVar5);
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((cVar3 != '\0') || (cVar3 = (**(code **)(*plVar5 + 0x100))(plVar5), cVar3 != '\0'))
      goto LAB_14414f70d;
      plVar4 = *(longlong **)(lVar2 + 0x468);
      *(undefined8 *)(lVar2 + 0x460) = 0;
      *(undefined8 *)(lVar2 + 0x468) = 0;
      if (plVar4 != (longlong *)0x0) goto LAB_14414f6f7;
    }
    FUN_1416b967c(lVar2);
  }
  uVar6 = 0;
LAB_14414f70d:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14414f71a FUN_14414f71a body=29 status=ok
// SIG undefined FUN_14414f71a(void)

undefined8 FUN_14414f71a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14414f8b6 FUN_14414f8b6 body=93 status=ok
// SIG undefined FUN_14414f8b6(void)

void FUN_14414f8b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9716c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14414f914 FUN_14414f914 body=93 status=ok
// SIG undefined FUN_14414f914(void)

void FUN_14414f914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9716c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14414f972 FUN_14414f972 body=126 status=ok
// SIG undefined FUN_14414f972(void)

void FUN_14414f972(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9716c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014414f9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14414f9f0 FUN_14414f9f0 body=20 status=ok
// SIG undefined FUN_14414f9f0(void)

undefined8 FUN_14414f9f0(longlong param_1)

{
  FUN_14414fb12(param_1 + 0x20);
  return 0;
}



// FUNCTION 14414fa04 FUN_14414fa04 body=269 status=ok
// SIG undefined FUN_14414fa04(void)

undefined8 FUN_14414fa04(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14414fb0b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14414fb0b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14414fb0b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14414fabf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14414fb12(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14414fabf;
    }
  }
  uVar6 = 0;
LAB_14414fabf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414fb12 FUN_14414fb12 body=64 status=ok
// SIG undefined FUN_14414fb12(void)

void FUN_14414fb12(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14021f720(*param_1);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((*(int *)((longlong)plVar2 + 0xec) == 0) && (cVar1 = FUN_145be5070(), cVar1 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014414fb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x2d0))(plVar2);
  return;
}



// FUNCTION 14414fb52 FUN_14414fb52 body=29 status=ok
// SIG undefined FUN_14414fb52(void)

undefined8 FUN_14414fb52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14414fcf8 FUN_14414fcf8 body=101 status=ok
// SIG undefined FUN_14414fcf8(void)

void FUN_14414fcf8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14414fd5e FUN_14414fd5e body=101 status=ok
// SIG undefined FUN_14414fd5e(void)

void FUN_14414fd5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b971730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14414fdc4 FUN_14414fdc4 body=134 status=ok
// SIG undefined FUN_14414fdc4(void)

void FUN_14414fdc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b971730;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014414fe3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14414feac FUN_14414feac body=310 status=ok
// SIG undefined FUN_14414feac(void)

undefined8 FUN_14414feac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14414ffdc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14414ffdc;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_14414ffdc:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14414ff88;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_14414ff88;
    }
  }
  uVar6 = 0;
LAB_14414ff88:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14414ffe4 FUN_14414ffe4 body=71 status=ok
// SIG undefined FUN_14414ffe4(void)

undefined8 * FUN_14414ffe4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9717c0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441501aa FUN_1441501aa body=249 status=ok
// SIG undefined FUN_1441501aa(void)

void FUN_1441501aa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e02020;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9717c0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 1441502a4 FUN_1441502a4 body=249 status=ok
// SIG undefined FUN_1441502a4(void)

void FUN_1441502a4(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e02020;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14b9717c0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x20);
  *(int *)(puVar2 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 4,iVar1,0);
    memcpy((void *)puVar2[4],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[6] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  pvVar3 = *(void **)(param_1 + 0x30);
  *(int *)(puVar2 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 6,iVar1,0);
    memcpy((void *)puVar2[6],pvVar3,(longlong)iVar1 * 2);
  }
  puVar2[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}


