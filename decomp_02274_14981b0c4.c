// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14981b0c4 FUN_14981b0c4 body=185 status=ok
// SIG undefined FUN_14981b0c4(void)

void FUN_14981b0c4(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_14981b576(*DAT_14cc28ca8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29608) {
    FUN_144b3d300(&DAT_14cc29608);
    if (DAT_14cc29608 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cc29600 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ScreenPercentage",1);
      _Init_thread_footer(&DAT_14cc29608);
    }
  }
  FUN_140635f48(DAT_14cc29600,fVar1 * 100.0,0x6000000,0);
  return;
}



// FUNCTION 14981b18e FUN_14981b18e body=316 status=ok
// SIG undefined FUN_14981b18e(void)

void FUN_14981b18e(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar4 = *(longlong *)(param_1 + 400);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x150);
      do {
        if (*(ulonglong *)(lVar4 + (longlong)iVar5 * 0x10) == uVar2) goto LAB_14981b1db;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar4 + 8);
      } while (iVar5 != -1);
    }
  }
  if (uVar2 != 0) {
    FUN_149822234((longlong *)(param_1 + 0x150),local_24,param_2);
  }
LAB_14981b1db:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14981b2da FUN_14981b2da body=133 status=ok
// SIG undefined FUN_14981b2da(void)

void FUN_14981b2da(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == uVar2) {
          FUN_149822756();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14981b360 FUN_14981b360 body=532 status=ok
// SIG undefined FUN_14981b360(void)

longlong FUN_14981b360(undefined1 *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar6 = (**(code **)(*DAT_14ca83900 + 0x20))();
  FUN_140056680(&local_38,uVar6);
  puVar10 = local_38;
  if (local_30 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  iVar4 = FUN_144a80a00(puVar10,&DAT_14a3502a2);
  if (iVar4 == 0) {
    uVar6 = FUN_14118da1c();
    cVar2 = FUN_14054d46e(uVar6,L"fsr3rhi");
    if (cVar2 != '\0') goto LAB_14981b3bc;
    if (*DAT_14cc28f18 == 0) {
      uVar6 = FUN_14118da1c();
      cVar2 = FUN_14054d46e(uVar6,L"fsr3native");
      if (cVar2 == '\0') goto LAB_14981b3bc;
    }
    FUN_1446f470e(&local_40,L"FFXD3D12Backend",1);
    plVar8 = (longlong *)FUN_1447c1074(local_40);
    if ((plVar8 == (longlong *)0x0) || (lVar9 = (**(code **)(*plVar8 + 0x40))(plVar8), lVar9 == 0))
    goto LAB_14981b3bc;
    *param_1 = 0;
  }
  else {
LAB_14981b3bc:
    lVar9 = 0;
  }
  puVar10 = local_38;
  if (local_30 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  iVar5 = FUN_144a80a00(puVar10,&DAT_14a3502a2);
  lVar1 = DAT_14cc28ee8;
  uVar11 = (ulonglong)DAT_14ca85550;
  iVar4 = (&DAT_14ca814b8)[uVar11 * 0xf];
  if (lVar9 == 0) {
LAB_14981b4c0:
    if (3 >= iVar4 && (uVar11 != 0 || iVar5 != 0)) goto LAB_14981b4ff;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar3 ^ 1);
    }
    if (*(int *)(lVar1 + uVar7 * 4) != 0) goto LAB_14981b4c0;
    uVar6 = FUN_14118da1c();
    bVar3 = FUN_14054d46e(uVar6,L"fsr3rhi");
    if (((3 < iVar4 || uVar11 == 0 && iVar5 == 0) & bVar3) == 0) goto LAB_14981b4ff;
  }
  FUN_1446f470e(&local_48,L"FFXRHIBackend",1);
  plVar8 = (longlong *)FUN_1447c1074(local_48);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x40))(plVar8);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      *param_1 = 1;
    }
  }
LAB_14981b4ff:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 14981b576 FUN_14981b576 body=185 status=ok
// SIG undefined FUN_14981b576(void)

float FUN_14981b576(int param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  float *local_30;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    fVar2 = 1.0;
  }
  else {
    plVar1 = (longlong *)FUN_14981b360(&local_49);
    local_24 = 1.0;
    if (plVar1 != (longlong *)0x0) {
      local_38 = 4;
      if (param_1 < 4) {
        local_38 = param_1;
      }
      if (local_38 < 1) {
        local_38 = 0;
      }
      local_40 = 0;
      local_48 = 0x10002;
      local_30 = &local_24;
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
    }
    fVar2 = 1.0 / local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981b630 FUN_14981b630 body=177 status=ok
// SIG undefined FUN_14981b630(void)

void FUN_14981b630(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f61a18();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc2a580,param_4);
  local_78 = &DAT_14cc2a580;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149822816(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981b6e2 FUN_14981b6e2 body=177 status=ok
// SIG undefined FUN_14981b6e2(void)

void FUN_14981b6e2(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e4d6dc();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc2a608,param_4);
  local_78 = &DAT_14cc2a608;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149822bf6(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981b794 FUN_14981b794 body=177 status=ok
// SIG undefined FUN_14981b794(void)

void FUN_14981b794(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f10666();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc2a4f8,param_4);
  local_78 = &DAT_14cc2a4f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_149822fd6(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981b846 FUN_14981b846 body=208 status=ok
// SIG undefined FUN_14981b846(void)

undefined8 *
FUN_14981b846(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14bea6e50;
  param_1[1] = &PTR_FUN_14bea6e98;
  param_1[3] = 0;
  param_1[5] = 0;
  plVar3 = (longlong *)*param_4;
  if (plVar3 != (longlong *)0x0) {
    param_1[5] = plVar3;
    (**(code **)(*plVar3 + 0x30))();
  }
  param_1[4] = param_3;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_14981c214(param_1,&local_30);
  if (*param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x38))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981b917 FUN_14981b917 body=177 status=ok
// SIG undefined FUN_14981b917(void)

void FUN_14981b917(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145ed6c10();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc2a690,param_4);
  local_78 = &DAT_14cc2a690;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1498233d4(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981b9ca FUN_14981b9ca body=158 status=ok
// SIG undefined FUN_14981b9ca(void)

undefined8 * FUN_14981b9ca(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14464fc2e();
  FUN_1446f470e(&local_20,L"FFXFSR3TemporalUpscaling",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_1401e3324(uVar1,local_20);
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
  *puVar3 = &PTR_FUN_14bea6ea0;
  puVar3[1] = &PTR_FUN_14bea6ed0;
  puVar3[2] = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981ba6a FUN_14981ba6a body=160 status=ok
// SIG undefined FUN_14981ba6a(void)

float FUN_14981ba6a(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  float *local_30;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar2 = 0.0;
  if ((byte)(*(char *)(param_1 + 0x1a0) - 4U) < 0xfe) {
    plVar1 = *(longlong **)(param_1 + 0x1a8);
    local_24 = 1.0;
    if (plVar1 != (longlong *)0x0) {
      local_40 = 0;
      local_48 = 0x10002;
      local_38 = 4;
      local_30 = &local_24;
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
    }
    fVar2 = 1.0 / local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981bb0c FUN_14981bb0c body=160 status=ok
// SIG undefined FUN_14981bb0c(void)

float FUN_14981bb0c(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  float *local_30;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar2 = 0.0;
  if ((byte)(*(char *)(param_1 + 0x1a0) - 4U) < 0xfe) {
    plVar1 = *(longlong **)(param_1 + 0x1a8);
    local_24 = 1.0;
    if (plVar1 != (longlong *)0x0) {
      local_40 = 0;
      local_48 = 0x10002;
      local_38 = 0;
      local_30 = &local_24;
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
    }
    fVar2 = 1.0 / local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981bbae FUN_14981bbae body=495 status=ok
// SIG undefined FUN_14981bbae(void)

void FUN_14981bbae(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_88 [36];
  uint local_64;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x1f8) == 0) ||
     (plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x1f8) + 0x10), plVar9 == (longlong *)0x0)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (((byte)(*(char *)(param_1 + 0x1a0) - 4U) < 0xfe) && (*(int *)(DAT_14cc28a68 + 4) != 0)) {
    if (plVar9 == (longlong *)0x0 || *(longlong **)(param_1 + 0x1c8) == (longlong *)0x0)
    goto LAB_14981bc1c;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 8))();
    cVar3 = *(char *)(lVar6 + 0x33);
    lVar6 = (**(code **)(*plVar9 + 8))(plVar9);
    uVar5 = DAT_14c9a52a0;
    if (cVar3 == *(char *)(lVar6 + 0x33)) {
      local_48 = DAT_14c9a5298;
      local_40 = DAT_14c9a52a0;
      local_58 = DAT_14c9a5298;
      local_50 = DAT_14c9a52a0;
      FUN_144b15a3c(plVar9,&local_64);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 8))();
      uVar2 = local_64;
      if (*(uint *)(lVar6 + 0x24) < local_64) {
        uVar2 = *(uint *)(lVar6 + 0x24);
      }
      FUN_144b15a3c(plVar9,&local_64);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 8))();
      if (*(uint *)(lVar6 + 0x28) < local_60) {
        local_60 = *(uint *)(lVar6 + 0x28);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x1c8);
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar7 + 0xc;
      if ((undefined8 *)param_2[1] < puVar8) {
        FUN_140023dd8(param_2,0x68);
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar7 + 0xc;
      }
      *param_2 = (ulonglong)puVar8;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar7;
      param_2[6] = (ulonglong)(puVar7 + 1);
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_14a289d68;
      *(uint *)(puVar7 + 2) = uVar2;
      *(uint *)((longlong)puVar7 + 0x14) = local_60;
      *(undefined4 *)(puVar7 + 3) = uVar5;
      *(undefined8 *)((longlong)puVar7 + 0x1c) = local_48;
      *(undefined4 *)((longlong)puVar7 + 0x24) = local_40;
      puVar7[5] = local_58;
      *(undefined4 *)(puVar7 + 6) = local_50;
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
      *(undefined4 *)(puVar7 + 7) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
      *(undefined4 *)(puVar7 + 8) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x44) = 0x100000000;
      puVar7[10] = plVar9;
      puVar7[0xb] = uVar4;
    }
  }
  else {
LAB_14981bc1c:
    if (plVar9 == (longlong *)0x0) goto LAB_14981bc3d;
  }
  LOCK();
  puVar1 = (uint *)(plVar9 + 1);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    FUN_144a54812(plVar9);
  }
LAB_14981bc3d:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981bd9e FUN_14981bd9e body=708 status=ok
// SIG undefined FUN_14981bd9e(void)

double * FUN_14981bd9e(longlong param_1,double *param_2,undefined8 param_3,longlong param_4,
                      longlong param_5,undefined8 *param_6,double *param_7,undefined8 param_8)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 *local_f0;
  double *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar7 = *param_7;
  *param_2 = dVar7;
  if (*(int *)(DAT_14cc28c78 + 4) == 0) {
    cVar2 = FUN_14981af56(param_4);
    if (cVar2 == '\0') goto LAB_14981be46;
    if ((*(char *)(param_4 + 0x23ec) == '\0') && (*(char *)(param_4 + 0x23eb) == '\0')) {
      lVar1 = *(longlong *)(param_4 + 8);
      if ((longlong)*(int *)(lVar1 + 0x10) != 0) {
        lVar4 = (longlong)*(int *)(lVar1 + 0x10) << 3;
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 8) + lVar5 * 8) == param_4) {
            if (1 < (int)lVar5) goto LAB_14981bea8;
            break;
          }
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      lVar1 = *(longlong *)(lVar1 + 0x40);
      if (*(int *)(lVar1 + 0x3720) < 1) goto LAB_14981bea8;
      local_d8 = param_4 + 8000;
      lVar4 = 0;
      do {
        pdVar6 = *(double **)(*(longlong *)(lVar1 + 0x3718) + lVar4 * 8);
        local_a8 = (pdVar6[5] - pdVar6[2]) * 0.5;
        local_b0 = (pdVar6[4] - pdVar6[1]) * 0.5;
        local_b8 = (pdVar6[3] - *pdVar6) * 0.5;
        local_c0 = (pdVar6[5] + pdVar6[2]) * 0.5;
        local_c8 = (pdVar6[4] + pdVar6[1]) * 0.5;
        local_d0 = (pdVar6[3] + *pdVar6) * 0.5;
        cVar2 = FUN_144b22be2(local_d8,&local_d0,&local_b8);
        if (cVar2 != '\0') {
          uVar3 = 1;
          goto LAB_14981c054;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar1 + 0x3720));
      uVar3 = 0;
LAB_14981c054:
      if (*(int *)(lVar1 + 0x3720) < 1) {
        uVar3 = 0;
      }
    }
    else {
LAB_14981bea8:
      uVar3 = 0;
    }
    local_b0 = *(double *)(param_4 + 0x30f8);
    local_a8 = *(double *)(param_4 + 0x3100);
    local_90 = 1;
    local_70 = 0;
    local_88 = *param_6;
    local_80 = param_6[0xb];
    local_78 = *param_7;
    local_b8 = (double)(ulonglong)CONCAT15(uVar3,0x200000003);
    local_f0 = (undefined8 *)(*(longlong *)(param_4 + 0x3108) + 0x1418);
    local_f8 = param_4 + 0x132e8;
    pdVar6 = &local_d0;
    local_a0 = local_b0;
    local_98 = local_a8;
    FUN_1401f4547(pdVar6,param_3,param_4);
  }
  else {
    local_e0 = param_8;
    local_e8 = param_7;
    local_f0 = param_6;
    local_f8 = param_5;
    pdVar6 = (double *)&local_b8;
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x28))
              (*(longlong **)(param_1 + 0x1b0),pdVar6,param_3,param_4);
  }
  dVar7 = *pdVar6;
  *param_2 = dVar7;
LAB_14981be46:
  *(double *)(param_1 + 0x1b8) = dVar7;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14981c088 FUN_14981c088 body=54 status=ok
// SIG undefined FUN_14981c088(void)

undefined8 FUN_14981c088(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x20))();
  return param_2;
}



// FUNCTION 14981c0be FUN_14981c0be body=53 status=ok
// SIG undefined FUN_14981c0be(void)

undefined8 FUN_14981c0be(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x30))();
  return param_2;
}



// FUNCTION 14981c0f4 FUN_14981c0f4 body=53 status=ok
// SIG undefined FUN_14981c0f4(void)

undefined8 FUN_14981c0f4(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x38))();
  return param_2;
}



// FUNCTION 14981c12a FUN_14981c12a body=53 status=ok
// SIG undefined FUN_14981c12a(void)

undefined8 FUN_14981c12a(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x40))();
  return param_2;
}



// FUNCTION 14981c160 FUN_14981c160 body=53 status=ok
// SIG undefined FUN_14981c160(void)

undefined8 FUN_14981c160(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x48))();
  return param_2;
}



// FUNCTION 14981c196 FUN_14981c196 body=53 status=ok
// SIG undefined FUN_14981c196(void)

undefined8 FUN_14981c196(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x50))();
  return param_2;
}



// FUNCTION 14981c1de FUN_14981c1de body=53 status=ok
// SIG undefined FUN_14981c1de(void)

undefined8 FUN_14981c1de(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x60))();
  return param_2;
}



// FUNCTION 14981c214 FUN_14981c214 body=186 status=ok
// SIG undefined FUN_14981c214(void)

void FUN_14981c214(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14981b18e(uVar3,&local_28);
  lVar5 = *param_2;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != lVar5) {
    *(longlong *)(param_1 + 0x18) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar5 = *param_2;
  }
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981c2de FUN_14981c2de body=154 status=ok
// SIG undefined FUN_14981c2de(void)

void FUN_14981c2de(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14cc2963d == '\x01') {
    local_18 = *(longlong *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_14981b18e(uVar3,&local_18);
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981c3b2 FUN_14981c3b2 body=51 status=ok
// SIG undefined FUN_14981c3b2(void)

longlong * FUN_14981c3b2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *param_2 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
    *param_2 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
  }
  return param_2;
}



// FUNCTION 14981c3f6 FUN_14981c3f6 body=36 status=ok
// SIG undefined FUN_14981c3f6(void)

undefined8 FUN_14981c3f6(longlong param_1,undefined8 param_2)

{
  FUN_14464fcf2(*(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 14981c41a FUN_14981c41a body=58 status=ok
// SIG undefined FUN_14981c41a(void)

void FUN_14981c41a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bea6ea0;
  puVar2[1] = &PTR_FUN_14bea6ed0;
  puVar2[2] = uVar1;
  return;
}



// FUNCTION 14981c468 FUN_14981c468 body=53 status=ok
// SIG undefined FUN_14981c468(void)

undefined8 FUN_14981c468(longlong param_1,undefined8 param_2)

{
  FUN_14981bd9e(*(longlong *)(param_1 + 8) + 8);
  return param_2;
}



// FUNCTION 14981c4ca FUN_14981c4ca body=58 status=ok
// SIG undefined FUN_14981c4ca(void)

undefined8 FUN_14981c4ca(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x20))();
  return param_2;
}



// FUNCTION 14981c504 FUN_14981c504 body=57 status=ok
// SIG undefined FUN_14981c504(void)

undefined8 FUN_14981c504(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x30))();
  return param_2;
}



// FUNCTION 14981c53e FUN_14981c53e body=57 status=ok
// SIG undefined FUN_14981c53e(void)

undefined8 FUN_14981c53e(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x38))();
  return param_2;
}



// FUNCTION 14981c578 FUN_14981c578 body=57 status=ok
// SIG undefined FUN_14981c578(void)

undefined8 FUN_14981c578(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x40))();
  return param_2;
}



// FUNCTION 14981c5b2 FUN_14981c5b2 body=57 status=ok
// SIG undefined FUN_14981c5b2(void)

undefined8 FUN_14981c5b2(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x48))();
  return param_2;
}



// FUNCTION 14981c5ec FUN_14981c5ec body=57 status=ok
// SIG undefined FUN_14981c5ec(void)

undefined8 FUN_14981c5ec(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x50))();
  return param_2;
}



// FUNCTION 14981c63c FUN_14981c63c body=57 status=ok
// SIG undefined FUN_14981c63c(void)

undefined8 FUN_14981c63c(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x1b8) + 0x60))();
  return param_2;
}



// FUNCTION 14981c698 FUN_14981c698 body=42 status=ok
// SIG undefined FUN_14981c698(void)

void FUN_14981c698(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981c6c6 FUN_14981c6c6 body=39 status=ok
// SIG undefined FUN_14981c6c6(void)

void FUN_14981c6c6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_149820dfe(uVar1,param_1);
  return;
}



// FUNCTION 14981c6ee FUN_14981c6ee body=52 status=ok
// SIG undefined FUN_14981c6ee(void)

void FUN_14981c6ee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981c722 FUN_14981c722 body=167 status=ok
// SIG undefined FUN_14981c722(void)

undefined8 *
FUN_14981c722(int param_1,byte param_2,uint *param_3,undefined8 param_4,undefined1 param_5,
             undefined1 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9010;
  puVar2[1] = L"FidelityFX-FSR3/Accumulate (CS)";
  FUN_1498240d8();
  uVar1 = *param_3;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(bool *)((longlong)puVar2 + 0x14) = param_1 == 7;
  *(byte *)((longlong)puVar2 + 0x15) = param_2 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_5;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_6;
  return puVar2;
}



// FUNCTION 14981c7ca FUN_14981c7ca body=42 status=ok
// SIG undefined FUN_14981c7ca(void)

void FUN_14981c7ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981c7f8 FUN_14981c7f8 body=39 status=ok
// SIG undefined FUN_14981c7f8(void)

void FUN_14981c7f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_149820fba(uVar1,param_1);
  return;
}



// FUNCTION 14981c820 FUN_14981c820 body=52 status=ok
// SIG undefined FUN_14981c820(void)

void FUN_14981c820(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981c854 FUN_14981c854 body=156 status=ok
// SIG undefined FUN_14981c854(void)

undefined8 *
FUN_14981c854(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9100;
  puVar2[1] = L"FidelityFX-FSR3/AutogenReactiveMask (CS)";
  puVar2[2] = 0;
  FUN_1498246c4();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981c8f0 FUN_14981c8f0 body=42 status=ok
// SIG undefined FUN_14981c8f0(void)

void FUN_14981c8f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981c91e FUN_14981c91e body=39 status=ok
// SIG undefined FUN_14981c91e(void)

void FUN_14981c91e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982104a(uVar1,param_1);
  return;
}



// FUNCTION 14981c946 FUN_14981c946 body=52 status=ok
// SIG undefined FUN_14981c946(void)

void FUN_14981c946(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981c97a FUN_14981c97a body=42 status=ok
// SIG undefined FUN_14981c97a(void)

void FUN_14981c97a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981c9a8 FUN_14981c9a8 body=39 status=ok
// SIG undefined FUN_14981c9a8(void)

void FUN_14981c9a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498210da(uVar1,param_1);
  return;
}



// FUNCTION 14981c9d0 FUN_14981c9d0 body=52 status=ok
// SIG undefined FUN_14981c9d0(void)

void FUN_14981c9d0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981ca04 FUN_14981ca04 body=156 status=ok
// SIG undefined FUN_14981ca04(void)

undefined8 *
FUN_14981ca04(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9150;
  puVar2[1] = L"FidelityFX-FSR3/LumaInstability (CS)";
  puVar2[2] = 0;
  FUN_149824c86();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981caa0 FUN_14981caa0 body=42 status=ok
// SIG undefined FUN_14981caa0(void)

void FUN_14981caa0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981cace FUN_14981cace body=39 status=ok
// SIG undefined FUN_14981cace(void)

void FUN_14981cace(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982116a(uVar1,param_1);
  return;
}



// FUNCTION 14981caf6 FUN_14981caf6 body=52 status=ok
// SIG undefined FUN_14981caf6(void)

void FUN_14981caf6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981cb2a FUN_14981cb2a body=156 status=ok
// SIG undefined FUN_14981cb2a(void)

undefined8 *
FUN_14981cb2a(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9200;
  puVar2[1] = L"FidelityFX-FSR3/LumaPyramid (CS)";
  puVar2[2] = 0;
  FUN_149825254();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981cbc6 FUN_14981cbc6 body=42 status=ok
// SIG undefined FUN_14981cbc6(void)

void FUN_14981cbc6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981cbf4 FUN_14981cbf4 body=39 status=ok
// SIG undefined FUN_14981cbf4(void)

void FUN_14981cbf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498211fa(uVar1,param_1);
  return;
}



// FUNCTION 14981cc1c FUN_14981cc1c body=52 status=ok
// SIG undefined FUN_14981cc1c(void)

void FUN_14981cc1c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981cc50 FUN_14981cc50 body=156 status=ok
// SIG undefined FUN_14981cc50(void)

undefined8 *
FUN_14981cc50(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea92d0;
  puVar2[1] = L"FidelityFX-FSR3/PrepareInputs (CS)";
  puVar2[2] = 0;
  FUN_14982582e();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981ccec FUN_14981ccec body=42 status=ok
// SIG undefined FUN_14981ccec(void)

void FUN_14981ccec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981cd1a FUN_14981cd1a body=39 status=ok
// SIG undefined FUN_14981cd1a(void)

void FUN_14981cd1a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982128a(uVar1,param_1);
  return;
}



// FUNCTION 14981cd42 FUN_14981cd42 body=52 status=ok
// SIG undefined FUN_14981cd42(void)

void FUN_14981cd42(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981cd76 FUN_14981cd76 body=156 status=ok
// SIG undefined FUN_14981cd76(void)

undefined8 *
FUN_14981cd76(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9390;
  puVar2[1] = L"FidelityFX-FSR3/PrepareReactivity (CS)";
  puVar2[2] = 0;
  FUN_149825dfc();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981ce12 FUN_14981ce12 body=42 status=ok
// SIG undefined FUN_14981ce12(void)

void FUN_14981ce12(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981ce40 FUN_14981ce40 body=39 status=ok
// SIG undefined FUN_14981ce40(void)

void FUN_14981ce40(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1498213a4(uVar1,param_1);
  return;
}



// FUNCTION 14981ce68 FUN_14981ce68 body=52 status=ok
// SIG undefined FUN_14981ce68(void)

void FUN_14981ce68(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981ce9c FUN_14981ce9c body=143 status=ok
// SIG undefined FUN_14981ce9c(void)

undefined8 *
FUN_14981ce9c(byte param_1,uint *param_2,undefined8 param_3,undefined8 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9480;
  puVar2[1] = L"FidelityFX-FSR3/RCAS (CS)";
  puVar2[2] = 0;
  FUN_1498263ca();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981cf2b FUN_14981cf2b body=256 status=ok
// SIG undefined FUN_14981cf2b(void)

undefined8
FUN_14981cf2b(uint param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0xb) {
    uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),param_5);
    switch(param_1) {
    case 0:
      uVar2 = FUN_14981cc50(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    case 1:
      uVar2 = FUN_14981cb2a(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    case 2:
      uVar2 = FUN_14981d02b(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    case 3:
      uVar2 = FUN_14981d0c7(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    case 4:
      uVar2 = FUN_14981cd76(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    case 5:
      uVar2 = FUN_14981ca04(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    default:
      uVar2 = FUN_14981c722();
      return uVar2;
    case 8:
      uVar2 = FUN_14981ce9c(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
      break;
    case 9:
    case 10:
      uVar2 = FUN_14981c854(param_2,param_3,param_4,uVar1 & 0xffffffff,param_6);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14981d02b FUN_14981d02b body=156 status=ok
// SIG undefined FUN_14981d02b(void)

undefined8 *
FUN_14981d02b(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9540;
  puVar2[1] = L"FidelityFX-FSR3/ShadingChangePyramid (CS)";
  puVar2[2] = 0;
  FUN_1498271fc();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981d0c7 FUN_14981d0c7 body=156 status=ok
// SIG undefined FUN_14981d0c7(void)

undefined8 *
FUN_14981d0c7(byte param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = &PTR_FUN_14bea9500;
  puVar2[1] = L"FidelityFX-FSR3/ShadingChange (CS)";
  puVar2[2] = 0;
  FUN_149826c4a();
  uVar1 = *param_2;
  bVar3 = (byte)uVar1;
  *(byte *)(puVar2 + 2) = bVar3 & 1;
  *(bool *)((longlong)puVar2 + 0x11) = (uVar1 & 2) == 0;
  *(byte *)((longlong)puVar2 + 0x12) = bVar3 >> 2 & 1;
  *(byte *)((longlong)puVar2 + 0x13) = bVar3 >> 3 & 1;
  *(byte *)((longlong)puVar2 + 0x15) = param_1 & 1;
  *(undefined1 *)((longlong)puVar2 + 0x16) = param_4;
  *(undefined1 *)((longlong)puVar2 + 0x17) = param_5;
  return puVar2;
}



// FUNCTION 14981d164 FUN_14981d164 body=4070 status=ok
// SIG undefined FUN_14981d164(void)

void FUN_14981d164(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  uint uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_118 = param_2;
  if (*(int *)(param_3 + 200) != 0) {
    plVar11 = (longlong *)(param_3 + 0x9a10);
    puVar9 = (undefined4 *)(param_3 + 0x8cd4);
    uVar10 = 0;
    do {
      switch(*puVar9) {
      case 0:
        local_c8 = 0;
        uStack_c0 = 0x3f80000000000000;
        memcpy(&local_f8,(void *)*plVar11,0x90);
        FUN_144655d1c(&local_100,&local_f8);
        FUN_145de5a5a();
        cVar7 = DAT_14cc2a089;
        if (DAT_14cc2a089 == '\x03') {
          cVar7 = '\x02';
        }
        lVar13 = CONCAT71(uStack_ff,local_100);
        *param_4 = lVar13;
        *(char *)(param_4 + 1) = cVar7;
        break;
      case 1:
        puVar4 = (undefined4 *)*plVar11;
        uVar5 = *puVar4;
        uVar6 = puVar4[1];
        uStack_f0 = puVar4[2];
        uStack_ec = puVar4[3];
        local_e8 = *(longlong *)(puVar4 + 4);
        uStack_e0 = puVar4[6];
        uStack_dc = puVar4[7];
        local_f8 = (undefined1)uVar5;
        uStack_f7 = (undefined1)((uint)uVar5 >> 8);
        uStack_f6 = (undefined2)((uint)uVar5 >> 0x10);
        uStack_f4 = (undefined2)uVar6;
        uStack_f2 = (undefined1)((uint)uVar6 >> 0x10);
        uStack_f1 = (undefined1)((uint)uVar6 >> 0x18);
        FUN_144655f0c(&local_100,&local_f8);
        FUN_145eedda0();
        cVar7 = DAT_14cc2a121;
        if (DAT_14cc2a121 == '\x03') {
          cVar7 = '\x02';
        }
        lVar13 = CONCAT71(uStack_ff,local_100);
        param_4[4] = lVar13;
        *(char *)(param_4 + 5) = cVar7;
        break;
      case 2:
        puVar4 = (undefined4 *)*plVar11;
        uVar5 = *puVar4;
        uVar6 = puVar4[1];
        uStack_f0 = puVar4[2];
        uStack_ec = puVar4[3];
        local_f8 = (undefined1)uVar5;
        uStack_f7 = (undefined1)((uint)uVar5 >> 8);
        uStack_f6 = (undefined2)((uint)uVar5 >> 0x10);
        uStack_f4 = (undefined2)uVar6;
        uStack_f2 = (undefined1)((uint)uVar6 >> 0x10);
        uStack_f1 = (undefined1)((uint)uVar6 >> 0x18);
        FUN_144655e14(&local_100,&local_f8);
        FUN_145da973c();
        cVar7 = DAT_14cc2a1b9;
        if (DAT_14cc2a1b9 == '\x03') {
          cVar7 = '\x02';
        }
        lVar13 = CONCAT71(uStack_ff,local_100);
        param_4[2] = lVar13;
        *(char *)(param_4 + 3) = cVar7;
        break;
      case 3:
        puVar4 = (undefined4 *)*plVar11;
        uVar5 = *puVar4;
        uVar6 = puVar4[1];
        uStack_f0 = puVar4[2];
        uStack_ec = puVar4[3];
        local_f8 = (undefined1)uVar5;
        uStack_f7 = (undefined1)((uint)uVar5 >> 8);
        uStack_f6 = (undefined2)((uint)uVar5 >> 0x10);
        uStack_f4 = (undefined2)uVar6;
        uStack_f2 = (undefined1)((uint)uVar6 >> 0x10);
        uStack_f1 = (undefined1)((uint)uVar6 >> 0x18);
        FUN_144656004(&local_100,&local_f8);
        FUN_145e0ef42();
        cVar7 = DAT_14cc2a251;
        if (DAT_14cc2a251 == '\x03') {
          cVar7 = '\x02';
        }
        lVar13 = CONCAT71(uStack_ff,local_100);
        param_4[6] = lVar13;
        *(char *)(param_4 + 7) = cVar7;
        break;
      default:
        goto switchD_14981d1ff_default;
      }
      if (lVar13 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar13 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
switchD_14981d1ff_default:
      uVar10 = uVar10 + 1;
      plVar11 = plVar11 + 2;
      puVar9 = puVar9 + 0x23;
    } while (uVar10 < *(uint *)(param_3 + 200));
  }
  if (*(int *)(param_3 + 0xac) != 0) {
    lVar13 = 0;
    uVar10 = 0;
    do {
      switch(*(undefined4 *)(param_3 + 0x23d4 + lVar13 * 4)) {
      case 1:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[9] = lVar12;
        break;
      case 2:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[8] = lVar12;
        break;
      case 3:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[10] = lVar12;
        break;
      case 4:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0xb] = lVar12;
        break;
      case 5:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0xc] = lVar12;
        break;
      case 6:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0xe] = lVar12;
        break;
      case 7:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0xf] = lVar12;
        break;
      case 8:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x10] = lVar12;
        break;
      case 9:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x11] = lVar12;
        break;
      case 10:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x12] = lVar12;
        break;
      case 0xb:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x13] = lVar12;
        break;
      case 0xc:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x14] = lVar12;
        break;
      case 0xd:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x1a] = lVar12;
        break;
      case 0xe:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x15] = lVar12;
        break;
      case 0x10:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x17] = lVar12;
        break;
      case 0x13:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x16] = lVar12;
        break;
      case 0x1a:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x19] = lVar12;
        break;
      case 0x1b:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x18] = lVar12;
        break;
      case 0x22:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0xd] = lVar12;
        break;
      case 0x2a:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x1d] = lVar12;
        break;
      case 0x2b:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x1b] = lVar12;
        break;
      case 0x2c:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x1c] = lVar12;
        break;
      case 0x2d:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x1e] = lVar12;
        break;
      case 0x2e:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x1f] = lVar12;
        break;
      case 0x30:
        lVar12 = FUN_149817d64(local_118,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar10 * 4));
        param_4[0x20] = lVar12;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0x23;
    } while (uVar10 < *(uint *)(param_3 + 0xac));
  }
  if (*(int *)(param_3 + 0xa8) != 0) {
    local_108 = param_1 + 0x198;
    local_110 = param_1 + 0x70;
    lVar13 = param_3 + 0x9408;
    lVar12 = 0xd4;
    uVar10 = 0;
    do {
      switch(*(undefined4 *)(param_3 + lVar12)) {
      case 8:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x21] = lVar8;
        break;
      case 9:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x22] = lVar8;
        break;
      case 10:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x23] = lVar8;
        break;
      case 0xb:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x24] = lVar8;
        break;
      case 0xc:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x25] = lVar8;
        break;
      case 0xd:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x2b] = lVar8;
        break;
      case 0xe:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x26] = lVar8;
        break;
      case 0x11:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x2a] = lVar8;
        break;
      case 0x12:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x27] = lVar8;
        break;
      case 0x1a:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x28] = lVar8;
        break;
      case 0x1b:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x32] = lVar8;
        break;
      case 0x1c:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x33] = lVar8;
        break;
      case 0x1d:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x34] = lVar8;
        break;
      case 0x1e:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x35] = lVar8;
        break;
      case 0x1f:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x36] = lVar8;
        break;
      case 0x20:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x37] = lVar8;
        break;
      case 0x22:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x29] = lVar8;
        break;
      case 0x23:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x2c] = lVar8;
        break;
      case 0x2a:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x2d] = lVar8;
        break;
      case 0x2b:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x2e] = lVar8;
        break;
      case 0x2c:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x2f] = lVar8;
        break;
      case 0x2d:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x30] = lVar8;
        break;
      case 0x30:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar10 * 8);
        local_e8 = FUN_149817d64(local_118,param_1,*(undefined4 *)(lVar13 + uVar10 * 8));
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_128 = &local_100;
        uStack_f7 = uVar3;
        lVar8 = FUN_144a96e92(local_108,local_110,local_e8 + 8,&local_f8);
        param_4[0x31] = lVar8;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x8c;
    } while (uVar10 < *(uint *)(param_3 + 0xa8));
  }
  param_4[0x38] = DAT_14c9c0de0;
  param_4[0x39] = DAT_14c9c0d80;
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14981e14c FUN_14981e14c body=42 status=ok
// SIG undefined FUN_14981e14c(void)

void FUN_14981e14c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981e17a FUN_14981e17a body=39 status=ok
// SIG undefined FUN_14981e17a(void)

void FUN_14981e17a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_149821c46(uVar1,param_1);
  return;
}



// FUNCTION 14981e1a2 FUN_14981e1a2 body=52 status=ok
// SIG undefined FUN_14981e1a2(void)

void FUN_14981e1a2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981e1d6 FUN_14981e1d6 body=42 status=ok
// SIG undefined FUN_14981e1d6(void)

void FUN_14981e1d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14981e204 FUN_14981e204 body=39 status=ok
// SIG undefined FUN_14981e204(void)

void FUN_14981e204(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_149821cd6(uVar1,param_1);
  return;
}



// FUNCTION 14981e22c FUN_14981e22c body=52 status=ok
// SIG undefined FUN_14981e22c(void)

void FUN_14981e22c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14981e260 FUN_14981e260 body=38 status=ok
// SIG undefined FUN_14981e260(void)

undefined8 FUN_14981e260(undefined8 param_1,int param_2)

{
  FUN_145d5c330();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981e286 FUN_14981e286 body=45 status=ok
// SIG undefined FUN_14981e286(void)

longlong FUN_14981e286(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145d5c330(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981e2b4 FUN_14981e2b4 body=38 status=ok
// SIG undefined FUN_14981e2b4(void)

undefined8 FUN_14981e2b4(undefined8 param_1,int param_2)

{
  FUN_14981c2de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981e2e8 FUN_14981e2e8 body=42 status=ok
// SIG undefined FUN_14981e2e8(void)

int FUN_14981e2e8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,1);
  }
  return iVar2 + -1;
}



// FUNCTION 14981e316 FUN_14981e316 body=45 status=ok
// SIG undefined FUN_14981e316(void)

longlong FUN_14981e316(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14981c2de(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981e344 FUN_14981e344 body=29 status=ok
// SIG undefined FUN_14981e344(void)

undefined8 FUN_14981e344(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981e362 FUN_14981e362 body=33 status=ok
// SIG undefined FUN_14981e362(void)

longlong FUN_14981e362(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 14981e384 FUN_14981e384 body=38 status=ok
// SIG undefined FUN_14981e384(void)

undefined8 FUN_14981e384(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981e3ae FUN_14981e3ae body=138 status=ok
// SIG undefined FUN_14981e3ae(void)

code * FUN_14981e3ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfc000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e438;
}



// FUNCTION 14981e438 FUN_14981e438 body=138 status=ok
// SIG undefined FUN_14981e438(void)

code * FUN_14981e438(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumenSpecularCurrentFrame";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e4c2;
}



// FUNCTION 14981e4c2 FUN_14981e4c2 body=138 status=ok
// SIG undefined FUN_14981e4c2(void)

code * FUN_14981e4c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveShadingModelID";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf40000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14676239a;
}



// FUNCTION 14981e54c FUN_14981e54c body=138 status=ok
// SIG undefined FUN_14981e54c(void)

code * FUN_14981e54c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskTAAResponsiveValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec0000009d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e5d6;
}



// FUNCTION 14981e5d6 FUN_14981e5d6 body=138 status=ok
// SIG undefined FUN_14981e5d6(void)

code * FUN_14981e5d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeferredDecalReactiveHistoryScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe80000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e660;
}



// FUNCTION 14981e660 FUN_14981e660 body=138 status=ok
// SIG undefined FUN_14981e660(void)

code * FUN_14981e660(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeferredDecalReactiveMaskScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe40000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e6ea;
}



// FUNCTION 14981e6ea FUN_14981e6ea body=138 status=ok
// SIG undefined FUN_14981e6ea(void)

code * FUN_14981e6ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilReactiveHistoryScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e774;
}



// FUNCTION 14981e774 FUN_14981e774 body=138 status=ok
// SIG undefined FUN_14981e774(void)

code * FUN_14981e774(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencilReactiveMaskScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xdc00000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e7fe;
}



// FUNCTION 14981e7fe FUN_14981e7fe body=138 status=ok
// SIG undefined FUN_14981e7fe(void)

code * FUN_14981e7fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ForceLitReactiveValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd800000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f61c32;
}



// FUNCTION 14981e888 FUN_14981e888 body=138 status=ok
// SIG undefined FUN_14981e888(void)

code * FUN_14981e888(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskPreDOFTranslucencyMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f61ba8;
}



// FUNCTION 14981e912 FUN_14981e912 body=138 status=ok
// SIG undefined FUN_14981e912(void)

code * FUN_14981e912(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskTranslucencyLumaBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e99c;
}



// FUNCTION 14981e99c FUN_14981e99c body=138 status=ok
// SIG undefined FUN_14981e99c(void)

code * FUN_14981e99c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskTranslucencyBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc400000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ea26;
}



// FUNCTION 14981ea26 FUN_14981ea26 body=138 status=ok
// SIG undefined FUN_14981ea26(void)

code * FUN_14981ea26(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveHistoryTranslucencyLumaBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981eab0;
}



// FUNCTION 14981eab0 FUN_14981eab0 body=138 status=ok
// SIG undefined FUN_14981eab0(void)

code * FUN_14981eab0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveHistoryTranslucencyBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbc00000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f61b1e;
}



// FUNCTION 14981eb3a FUN_14981eb3a body=138 status=ok
// SIG undefined FUN_14981eb3a(void)

code * FUN_14981eb3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskRoughnessBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb40000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ebc4;
}



// FUNCTION 14981ebc4 FUN_14981ebc4 body=138 status=ok
// SIG undefined FUN_14981ebc4(void)

code * FUN_14981ebc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskRoughnessScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ec4e;
}



// FUNCTION 14981ec4e FUN_14981ec4e body=138 status=ok
// SIG undefined FUN_14981ec4e(void)

code * FUN_14981ec4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskReflectionScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac0000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ecd8;
}



// FUNCTION 14981ecd8 FUN_14981ecd8 body=138 status=ok
// SIG undefined FUN_14981ecd8(void)

code * FUN_14981ecd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FurthestReflectionCaptureDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa80000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ed62;
}



// FUNCTION 14981ed62 FUN_14981ed62 body=138 status=ok
// SIG undefined FUN_14981ed62(void)

code * FUN_14981ed62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146762422;
}



// FUNCTION 14981edec FUN_14981edec body=138 status=ok
// SIG undefined FUN_14981edec(void)

code * FUN_14981edec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1467624aa;
}



// FUNCTION 14981ee76 FUN_14981ee76 body=138 status=ok
// SIG undefined FUN_14981ee76(void)

code * FUN_14981ee76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DBufferA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ef00;
}



// FUNCTION 14981ef00 FUN_14981ef00 body=138 status=ok
// SIG undefined FUN_14981ef00(void)

code * FUN_14981ef00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000086;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ef8a;
}



// FUNCTION 14981ef8a FUN_14981ef8a body=138 status=ok
// SIG undefined FUN_14981ef8a(void)

code * FUN_14981ef8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomStencil";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f014;
}



// FUNCTION 14981f014 FUN_14981f014 body=138 status=ok
// SIG undefined FUN_14981f014(void)

code * FUN_14981f014(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f09e;
}



// FUNCTION 14981f09e FUN_14981f09e body=138 status=ok
// SIG undefined FUN_14981f09e(void)

code * FUN_14981f09e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumenSpecular";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f128;
}



// FUNCTION 14981f128 FUN_14981f128 body=138 status=ok
// SIG undefined FUN_14981f128(void)

code * FUN_14981f128(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorPreAlpha";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f1b2;
}



// FUNCTION 14981f1b2 FUN_14981f1b2 body=138 status=ok
// SIG undefined FUN_14981f1b2(void)

code * FUN_14981f1b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f23c;
}



// FUNCTION 14981f23c FUN_14981f23c body=138 status=ok
// SIG undefined FUN_14981f23c(void)

code * FUN_14981f23c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f2c6;
}



// FUNCTION 14981f2c6 FUN_14981f2c6 body=138 status=ok
// SIG undefined FUN_14981f2c6(void)

code * FUN_14981f2c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000007f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f350;
}



// FUNCTION 14981f350 FUN_14981f350 body=138 status=ok
// SIG undefined FUN_14981f350(void)

code * FUN_14981f350(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferD";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f3da;
}



// FUNCTION 14981f3da FUN_14981f3da body=138 status=ok
// SIG undefined FUN_14981f3da(void)

code * FUN_14981f3da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f464;
}



// FUNCTION 14981f464 FUN_14981f464 body=138 status=ok
// SIG undefined FUN_14981f464(void)

code * FUN_14981f464(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSeparateTranslucency";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f4ee;
}



// FUNCTION 14981f4ee FUN_14981f4ee body=132 status=ok
// SIG undefined FUN_14981f4ee(void)

undefined1 * FUN_14981f4ee(undefined8 param_1,longlong *param_2)

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
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14981f572;
}



// FUNCTION 14981f576 FUN_14981f576 body=138 status=ok
// SIG undefined FUN_14981f576(void)

code * FUN_14981f576(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlendSceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1467625c2;
}



// FUNCTION 14981f600 FUN_14981f600 body=65 status=ok
// SIG undefined FUN_14981f600(void)

undefined8 * FUN_14981f600(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bea8120;
  (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],param_1 + 9);
  FUN_144a94e2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14981f642 FUN_14981f642 body=138 status=ok
// SIG undefined FUN_14981f642(void)

code * FUN_14981f642(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"s_LinearClamp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000000a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c4e03e;
}



// FUNCTION 14981f6cc FUN_14981f6cc body=138 status=ok
// SIG undefined FUN_14981f6cc(void)

code * FUN_14981f6cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_mip4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b0000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146762762;
}



// FUNCTION 14981f756 FUN_14981f756 body=138 status=ok
// SIG undefined FUN_14981f756(void)

code * FUN_14981f756(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_mip2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a0000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f7e0;
}



// FUNCTION 14981f7e0 FUN_14981f7e0 body=138 status=ok
// SIG undefined FUN_14981f7e0(void)

code * FUN_14981f7e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_mip1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x198000000a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c4df2a;
}



// FUNCTION 14981f86a FUN_14981f86a body=138 status=ok
// SIG undefined FUN_14981f86a(void)

code * FUN_14981f86a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_luma_instability";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f8f4;
}



// FUNCTION 14981f8f4 FUN_14981f8f4 body=138 status=ok
// SIG undefined FUN_14981f8f4(void)

code * FUN_14981f8f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_current_luma";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981f97e;
}



// FUNCTION 14981f97e FUN_14981f97e body=138 status=ok
// SIG undefined FUN_14981f97e(void)

code * FUN_14981f97e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_farthest_depth_mip1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x178000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fa08;
}



// FUNCTION 14981fa08 FUN_14981fa08 body=138 status=ok
// SIG undefined FUN_14981fa08(void)

code * FUN_14981fa08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_farthest_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1700000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fa92;
}



// FUNCTION 14981fa92 FUN_14981fa92 body=138 status=ok
// SIG undefined FUN_14981fa92(void)

code * FUN_14981fa92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_shading_change";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1680000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fb1c;
}



// FUNCTION 14981fb1c FUN_14981fb1c body=138 status=ok
// SIG undefined FUN_14981fb1c(void)

code * FUN_14981fb1c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_output_autoreactive";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1600000009d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fba6;
}



// FUNCTION 14981fba6 FUN_14981fba6 body=138 status=ok
// SIG undefined FUN_14981fba6(void)

code * FUN_14981fba6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_new_locks";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1580000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fc30;
}



// FUNCTION 14981fc30 FUN_14981fc30 body=138 status=ok
// SIG undefined FUN_14981fc30(void)

code * FUN_14981fc30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_spd_global_atomic";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1500000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fcba;
}



// FUNCTION 14981fcba FUN_14981fcba body=138 status=ok
// SIG undefined FUN_14981fcba(void)

code * FUN_14981fcba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_frame_info";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1480000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fd44;
}



// FUNCTION 14981fd44 FUN_14981fd44 body=138 status=ok
// SIG undefined FUN_14981fd44(void)

code * FUN_14981fd44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_dilated_reactive_masks";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fdce;
}



// FUNCTION 14981fdce FUN_14981fdce body=138 status=ok
// SIG undefined FUN_14981fdce(void)

code * FUN_14981fdce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_upscaled_output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fe58;
}



// FUNCTION 14981fe58 FUN_14981fe58 body=138 status=ok
// SIG undefined FUN_14981fe58(void)

code * FUN_14981fe58(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_luma_history";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981fee2;
}



// FUNCTION 14981fee2 FUN_14981fee2 body=138 status=ok
// SIG undefined FUN_14981fee2(void)

code * FUN_14981fee2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_accumulation";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12800000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981ff6c;
}



// FUNCTION 14981ff6c FUN_14981ff6c body=138 status=ok
// SIG undefined FUN_14981ff6c(void)

code * FUN_14981ff6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_internal_upscaled_color";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c4dfb4;
}



// FUNCTION 14981fff6 FUN_14981fff6 body=138 status=ok
// SIG undefined FUN_14981fff6(void)

code * FUN_14981fff6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_dilated_motion_vectors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1467627ea;
}



// FUNCTION 149820080 FUN_149820080 body=138 status=ok
// SIG undefined FUN_149820080(void)

code * FUN_149820080(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_luma_instability";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982010a;
}



// FUNCTION 14982010a FUN_14982010a body=138 status=ok
// SIG undefined FUN_14982010a(void)

code * FUN_14982010a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_previous_luma";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820194;
}



// FUNCTION 149820194 FUN_149820194 body=138 status=ok
// SIG undefined FUN_149820194(void)

code * FUN_149820194(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_current_luma";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982021e;
}



// FUNCTION 14982021e FUN_14982021e body=138 status=ok
// SIG undefined FUN_14982021e(void)

code * FUN_14982021e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_shading_change";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe80000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498202a8;
}



// FUNCTION 1498202a8 FUN_1498202a8 body=138 status=ok
// SIG undefined FUN_1498202a8(void)

code * FUN_1498202a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_farthest_depth_mip1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820332;
}



// FUNCTION 149820332 FUN_149820332 body=138 status=ok
// SIG undefined FUN_149820332(void)

code * FUN_149820332(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_farthest_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498203bc;
}



// FUNCTION 1498203bc FUN_1498203bc body=138 status=ok
// SIG undefined FUN_1498203bc(void)

code * FUN_1498203bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_new_locks";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820446;
}



// FUNCTION 149820446 FUN_149820446 body=138 status=ok
// SIG undefined FUN_149820446(void)

code * FUN_149820446(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_dilated_reactive_masks";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc80000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498204d0;
}



// FUNCTION 1498204d0 FUN_1498204d0 body=138 status=ok
// SIG undefined FUN_1498204d0(void)

code * FUN_1498204d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_spd_mips";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982055a;
}



// FUNCTION 14982055a FUN_14982055a body=138 status=ok
// SIG undefined FUN_14982055a(void)

code * FUN_14982055a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_lanczos_lut";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498205e4;
}



// FUNCTION 1498205e4 FUN_1498205e4 body=138 status=ok
// SIG undefined FUN_1498205e4(void)

code * FUN_1498205e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_rcas_input";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982066e;
}



// FUNCTION 14982066e FUN_14982066e body=138 status=ok
// SIG undefined FUN_14982066e(void)

code * FUN_14982066e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_luma_history";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000086;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498206f8;
}



// FUNCTION 1498206f8 FUN_1498206f8 body=138 status=ok
// SIG undefined FUN_1498206f8(void)

code * FUN_1498206f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_accumulation";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820782;
}



// FUNCTION 149820782 FUN_149820782 body=138 status=ok
// SIG undefined FUN_149820782(void)

code * FUN_149820782(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_internal_upscaled_color";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982080c;
}



// FUNCTION 14982080c FUN_14982080c body=138 status=ok
// SIG undefined FUN_14982080c(void)

code * FUN_14982080c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_dilated_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820896;
}



// FUNCTION 149820896 FUN_149820896 body=138 status=ok
// SIG undefined FUN_149820896(void)

code * FUN_149820896(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_dilated_motion_vectors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820920;
}



// FUNCTION 149820920 FUN_149820920 body=138 status=ok
// SIG undefined FUN_149820920(void)

code * FUN_149820920(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_reconstructed_previous_nearest_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498209aa;
}



// FUNCTION 1498209aa FUN_1498209aa body=138 status=ok
// SIG undefined FUN_1498209aa(void)

code * FUN_1498209aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_transparency_and_composition_mask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820a34;
}



// FUNCTION 149820a34 FUN_149820a34 body=138 status=ok
// SIG undefined FUN_149820a34(void)

code * FUN_149820a34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_reactive_mask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000007f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820abe;
}



// FUNCTION 149820abe FUN_149820abe body=138 status=ok
// SIG undefined FUN_149820abe(void)

code * FUN_149820abe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_frame_info";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820b48;
}



// FUNCTION 149820b48 FUN_149820b48 body=138 status=ok
// SIG undefined FUN_149820b48(void)

code * FUN_149820b48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_exposure";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820bd2;
}



// FUNCTION 149820bd2 FUN_149820bd2 body=138 status=ok
// SIG undefined FUN_149820bd2(void)

code * FUN_149820bd2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820c5c;
}



// FUNCTION 149820c5c FUN_149820c5c body=138 status=ok
// SIG undefined FUN_149820c5c(void)

code * FUN_149820c5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_motion_vectors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820ce6;
}



// FUNCTION 149820ce6 FUN_149820ce6 body=138 status=ok
// SIG undefined FUN_149820ce6(void)

code * FUN_149820ce6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_opaque_only";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149820d70;
}



// FUNCTION 149820d70 FUN_149820d70 body=138 status=ok
// SIG undefined FUN_149820d70(void)

code * FUN_149820d70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_color_jittered";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0eeb0;
}



// FUNCTION 149820dfe FUN_149820dfe body=143 status=ok
// SIG undefined FUN_149820dfe(void)

undefined8 FUN_149820dfe(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149820e8e FUN_149820e8e body=116 status=ok
// SIG undefined FUN_149820e8e(void)

undefined8 * FUN_149820e8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_147439f12(param_1 + 0xf,iVar1,0);
    FUN_147439f85(param_1[0xf],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149820f02 FUN_149820f02 body=126 status=ok
// SIG undefined FUN_149820f02(void)

undefined8 FUN_149820f02(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_149820e8e(local_a8);
  FUN_149820f82(param_1,local_a8);
  FUN_14743eafb(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149820f82 FUN_149820f82 body=56 status=ok
// SIG undefined FUN_149820f82(void)

undefined8 FUN_149820f82(undefined8 param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  FUN_14743eafb(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 149820fba FUN_149820fba body=143 status=ok
// SIG undefined FUN_149820fba(void)

undefined8 FUN_149820fba(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982104a FUN_14982104a body=143 status=ok
// SIG undefined FUN_14982104a(void)

undefined8 FUN_14982104a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498210da FUN_1498210da body=143 status=ok
// SIG undefined FUN_1498210da(void)

undefined8 FUN_1498210da(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982116a FUN_14982116a body=143 status=ok
// SIG undefined FUN_14982116a(void)

undefined8 FUN_14982116a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498211fa FUN_1498211fa body=143 status=ok
// SIG undefined FUN_1498211fa(void)

undefined8 FUN_1498211fa(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982128a FUN_14982128a body=143 status=ok
// SIG undefined FUN_14982128a(void)

undefined8 FUN_14982128a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982131a FUN_14982131a body=138 status=ok
// SIG undefined FUN_14982131a(void)

code * FUN_14982131a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_rcas_input";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9eada;
}



// FUNCTION 1498213a4 FUN_1498213a4 body=143 status=ok
// SIG undefined FUN_1498213a4(void)

undefined8 FUN_1498213a4(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145e9e862();
  local_b8 = &DAT_14cc2a7c0;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149821434 FUN_149821434 body=138 status=ok
// SIG undefined FUN_149821434(void)

code * FUN_149821434(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fFrameIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c0000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de5bfc;
}



// FUNCTION 1498214be FUN_1498214be body=138 status=ok
// SIG undefined FUN_1498214be(void)

code * FUN_1498214be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fDeltaPreExposure";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7400000048;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146762a14;
}



// FUNCTION 149821548 FUN_149821548 body=138 status=ok
// SIG undefined FUN_149821548(void)

code * FUN_149821548(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fJitterPhaseCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498215d2;
}



// FUNCTION 1498215d2 FUN_1498215d2 body=138 status=ok
// SIG undefined FUN_1498215d2(void)

code * FUN_1498215d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fTanHalfFOV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de5c86;
}



// FUNCTION 14982165c FUN_14982165c body=138 status=ok
// SIG undefined FUN_14982165c(void)

code * FUN_14982165c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fDownscaleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145de5b72;
}



// FUNCTION 1498216e6 FUN_1498216e6 body=138 status=ok
// SIG undefined FUN_1498216e6(void)

code * FUN_1498216e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fPrevJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821770;
}



// FUNCTION 149821770 FUN_149821770 body=138 status=ok
// SIG undefined FUN_149821770(void)

code * FUN_149821770(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498217fa;
}



// FUNCTION 1498217fa FUN_1498217fa body=138 status=ok
// SIG undefined FUN_1498217fa(void)

code * FUN_1498217fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fDeviceToViewDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821884;
}



// FUNCTION 149821884 FUN_149821884 body=138 status=ok
// SIG undefined FUN_149821884(void)

code * FUN_149821884(undefined8 param_1,longlong *param_2)

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
  *(undefined **)(lVar2 + lVar3) = &DAT_14bea8a24;
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982190e;
}



// FUNCTION 14982190e FUN_14982190e body=138 status=ok
// SIG undefined FUN_14982190e(void)

code * FUN_14982190e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"iMaxUpscaleSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821998;
}



// FUNCTION 149821998 FUN_149821998 body=138 status=ok
// SIG undefined FUN_149821998(void)

code * FUN_149821998(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"iUpscaleSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821a22;
}



// FUNCTION 149821a22 FUN_149821a22 body=138 status=ok
// SIG undefined FUN_149821a22(void)

code * FUN_149821a22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"iMaxRenderSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821aac;
}



// FUNCTION 149821aac FUN_149821aac body=138 status=ok
// SIG undefined FUN_149821aac(void)

code * FUN_149821aac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"iPrevRenderSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149821b36;
}



// FUNCTION 149821b36 FUN_149821b36 body=132 status=ok
// SIG undefined FUN_149821b36(void)

undefined1 * FUN_149821b36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"iRenderSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149821bba;
}



// FUNCTION 149821bc2 FUN_149821bc2 body=132 status=ok
// SIG undefined FUN_149821bc2(void)

undefined1 * FUN_149821bc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"scale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e0f13e;
}



// FUNCTION 149821c46 FUN_149821c46 body=143 status=ok
// SIG undefined FUN_149821c46(void)

undefined8 FUN_149821c46(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149821cd6 FUN_149821cd6 body=143 status=ok
// SIG undefined FUN_149821cd6(void)

undefined8 FUN_149821cd6(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_149820f02(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c4dcdc();
  local_b8 = &DAT_14cc2a738;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149821d8c FUN_149821d8c body=29 status=ok
// SIG undefined FUN_149821d8c(void)

undefined8 FUN_149821d8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149821daa FUN_149821daa body=364 status=ok
// SIG undefined FUN_149821daa(void)

void FUN_149821daa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar6 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar5 = (undefined4)CONCAT62(uVar6,10);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar5 = (undefined4)CONCAT62(uVar6,0xc);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar7 + 0x40;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x208);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar7 + 0x40;
  }
  *puVar1 = (ulonglong)puVar3;
  local_50 = DAT_14cc2a950;
  if (DAT_14cc2a950 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a950 + 8) = *(int *)(DAT_14cc2a950 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a908;
  local_68 = 0;
  local_58 = param_3;
  FUN_140068f1a(puVar7,param_2,&local_58,uVar5);
  *puVar7 = &PTR_FUN_14bea8d00;
  puVar3 = puVar7 + 0x37;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149821f18 FUN_149821f18 body=258 status=ok
// SIG undefined FUN_149821f18(void)

void FUN_149821f18(void)

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
              0x110) < DAT_14cc2a988) {
    FUN_144b3d300(&DAT_14cc2a988);
    if (DAT_14cc2a988 == -1) {
      FUN_149822042(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1e0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a908,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144657358);
      _Init_thread_footer(&DAT_14cc2a988);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982201c FUN_14982201c body=38 status=ok
// SIG undefined FUN_14982201c(void)

undefined8 FUN_14982201c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149822042 FUN_149822042 body=226 status=ok
// SIG undefined FUN_149822042(void)

longlong * FUN_149822042(longlong *param_1)

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
  pcVar13 = FUN_149822126;
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



// FUNCTION 149822126 FUN_149822126 body=136 status=ok
// SIG undefined FUN_149822126(void)

code * FUN_149822126(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputColorTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1498221ae;
}



// FUNCTION 1498221ae FUN_1498221ae body=130 status=ok
// SIG undefined FUN_1498221ae(void)

undefined1 * FUN_1498221ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputColorTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149822230;
}



// FUNCTION 149822234 FUN_149822234 body=323 status=ok
// SIG undefined FUN_149822234(void)

undefined4 * FUN_149822234(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149822378(param_1,local_40);
  uVar5 = *param_3;
  *local_38 = uVar5;
  uVar3 = 0;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
    uVar3 = (uint)(*local_38 >> 4);
  }
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar3 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14982245e(param_1,uVar3,local_38,&local_44);
  uVar1 = local_44;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_38 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_149822578(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149822378 FUN_149822378 body=229 status=ok
// SIG undefined FUN_149822378(void)

int * FUN_149822378(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14982245e FUN_14982245e body=168 status=ok
// SIG undefined FUN_14982245e(void)

undefined8 FUN_14982245e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar5 * 0x10);
        lVar3 = *(longlong *)(*param_1 + (longlong)iVar5 * 0x10);
        if (lVar3 == *param_3) {
          if (*param_3 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar3 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          *plVar4 = *param_3;
          FUN_149822506(param_1,*param_4);
          *param_4 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar4[1];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 149822506 FUN_149822506 body=114 status=ok
// SIG undefined FUN_149822506(void)

void FUN_149822506(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 149822578 FUN_149822578 body=477 status=ok
// SIG undefined FUN_149822578(void)

void FUN_149822578(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 149822756 FUN_149822756 body=90 status=ok
// SIG undefined FUN_149822756(void)

void FUN_149822756(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1498227b0();
  return;
}



// FUNCTION 1498227b0 FUN_1498227b0 body=71 status=ok
// SIG undefined FUN_1498227b0(void)

void FUN_1498227b0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*param_1 + (longlong)param_2 * 0x10);
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_149822506(param_1,param_2);
  return;
}



// FUNCTION 1498227f8 FUN_1498227f8 body=29 status=ok
// SIG undefined FUN_1498227f8(void)

undefined8 FUN_1498227f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149822816 FUN_149822816 body=384 status=ok
// SIG undefined FUN_149822816(void)

void FUN_149822816(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cc2a5c8;
  if (DAT_14cc2a5c8 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a5c8 + 8) = *(int *)(DAT_14cc2a5c8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a580;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14bea8d70;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149822998 FUN_149822998 body=38 status=ok
// SIG undefined FUN_149822998(void)

undefined8 FUN_149822998(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498229be FUN_1498229be body=163 status=ok
// SIG undefined FUN_1498229be(void)

void FUN_1498229be(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144657546();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14465762e(param_1,param_2);
  return;
}



// FUNCTION 149822a61 FUN_149822a61 body=374 status=ok
// SIG undefined FUN_149822a61(void)

void FUN_149822a61(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149822bd8 FUN_149822bd8 body=29 status=ok
// SIG undefined FUN_149822bd8(void)

undefined8 FUN_149822bd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149822bf6 FUN_149822bf6 body=384 status=ok
// SIG undefined FUN_149822bf6(void)

void FUN_149822bf6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cc2a650;
  if (DAT_14cc2a650 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a650 + 8) = *(int *)(DAT_14cc2a650 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a608;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14bea8d90;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149822d78 FUN_149822d78 body=38 status=ok
// SIG undefined FUN_149822d78(void)

undefined8 FUN_149822d78(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149822d9e FUN_149822d9e body=163 status=ok
// SIG undefined FUN_149822d9e(void)

void FUN_149822d9e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144657862();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14465794a(param_1,param_2);
  return;
}



// FUNCTION 149822e41 FUN_149822e41 body=374 status=ok
// SIG undefined FUN_149822e41(void)

void FUN_149822e41(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149822fb8 FUN_149822fb8 body=29 status=ok
// SIG undefined FUN_149822fb8(void)

undefined8 FUN_149822fb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149822fd6 FUN_149822fd6 body=384 status=ok
// SIG undefined FUN_149822fd6(void)

void FUN_149822fd6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cc2a540;
  if (DAT_14cc2a540 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a540 + 8) = *(int *)(DAT_14cc2a540 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a4f8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14bea8db0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149823158 FUN_149823158 body=38 status=ok
// SIG undefined FUN_149823158(void)

undefined8 FUN_149823158(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982317e FUN_14982317e body=163 status=ok
// SIG undefined FUN_14982317e(void)

void FUN_14982317e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144657b7e();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_144657c66(param_1,param_2);
  return;
}



// FUNCTION 149823221 FUN_149823221 body=374 status=ok
// SIG undefined FUN_149823221(void)

void FUN_149823221(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149823398 FUN_149823398 body=29 status=ok
// SIG undefined FUN_149823398(void)

undefined8 FUN_149823398(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498233b6 FUN_1498233b6 body=29 status=ok
// SIG undefined FUN_1498233b6(void)

undefined8 FUN_1498233b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498233d4 FUN_1498233d4 body=384 status=ok
// SIG undefined FUN_1498233d4(void)

void FUN_1498233d4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14cc2a6d8;
  if (DAT_14cc2a6d8 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a6d8 + 8) = *(int *)(DAT_14cc2a6d8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a690;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14bea8de0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149823556 FUN_149823556 body=38 status=ok
// SIG undefined FUN_149823556(void)

undefined8 FUN_149823556(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982357c FUN_14982357c body=163 status=ok
// SIG undefined FUN_14982357c(void)

void FUN_14982357c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144657e9a();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_144657f82(param_1,param_2);
  return;
}



// FUNCTION 14982361f FUN_14982361f body=374 status=ok
// SIG undefined FUN_14982361f(void)

void FUN_14982361f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149823796 FUN_149823796 body=89 status=ok
// SIG undefined FUN_149823796(void)

void FUN_149823796(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1498237f0 FUN_1498237f0 body=258 status=ok
// SIG undefined FUN_1498237f0(void)

void FUN_1498237f0(void)

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
              0x110) < DAT_14cc2aa10) {
    FUN_144b3d300(&DAT_14cc2aa10);
    if (DAT_14cc2aa10 == -1) {
      FUN_1498238f4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x2f7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a990,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465891c);
      _Init_thread_footer(&DAT_14cc2aa10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498238f4 FUN_1498238f4 body=226 status=ok
// SIG undefined FUN_1498238f4(void)

longlong * FUN_1498238f4(longlong *param_1)

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
  pcVar13 = FUN_1498239d8;
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



// FUNCTION 1498239d8 FUN_1498239d8 body=136 status=ok
// SIG undefined FUN_1498239d8(void)

code * FUN_1498239d8(undefined8 param_1,longlong *param_2)

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
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149823a60;
}



// FUNCTION 149823a60 FUN_149823a60 body=136 status=ok
// SIG undefined FUN_149823a60(void)

code * FUN_149823a60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompositeMaskTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000002fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149823ae8;
}



// FUNCTION 149823ae8 FUN_149823ae8 body=136 status=ok
// SIG undefined FUN_149823ae8(void)

code * FUN_149823ae8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149823b70;
}



// FUNCTION 149823b70 FUN_149823b70 body=136 status=ok
// SIG undefined FUN_149823b70(void)

code * FUN_149823b70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExposureTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149823bf8;
}



// FUNCTION 149823bf8 FUN_149823bf8 body=136 status=ok
// SIG undefined FUN_149823bf8(void)

code * FUN_149823bf8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149823c80;
}



// FUNCTION 149823c80 FUN_149823c80 body=136 status=ok
// SIG undefined FUN_149823c80(void)

code * FUN_149823c80(undefined8 param_1,longlong *param_2)

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
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149823d08;
}



// FUNCTION 149823d08 FUN_149823d08 body=130 status=ok
// SIG undefined FUN_149823d08(void)

undefined1 * FUN_149823d08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149823d8a;
}



// FUNCTION 149823d8e FUN_149823d8e body=128 status=ok
// SIG undefined FUN_149823d8e(void)

void FUN_149823d8e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc29598;
  if (DAT_14cc295cc != 0) {
    *(int *)(DAT_14cc29598 + (longlong)DAT_14cc295c8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc295cc) {
    iVar4 = DAT_14cc295c8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cc295cc = DAT_14cc295cc + 1;
  puVar3 = &DAT_14cc295a8;
  if (DAT_14cc295b8 != (undefined *)0x0) {
    puVar3 = DAT_14cc295b8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc295c8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 149823e0e FUN_149823e0e body=31 status=ok
// SIG undefined FUN_149823e0e(void)

undefined8 FUN_149823e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149823e4a FUN_149823e4a body=93 status=ok
// SIG undefined FUN_149823e4a(void)

void FUN_149823e4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bea8e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149823ea8 FUN_149823ea8 body=126 status=ok
// SIG undefined FUN_149823ea8(void)

void FUN_149823ea8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bea8e80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149823f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149823f26 FUN_149823f26 body=21 status=ok
// SIG undefined FUN_149823f26(void)

undefined8 FUN_149823f26(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149823f3c FUN_149823f3c body=31 status=ok
// SIG undefined FUN_149823f3c(void)

undefined8 FUN_149823f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149823f74 FUN_149823f74 body=93 status=ok
// SIG undefined FUN_149823f74(void)

void FUN_149823f74(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea8f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149823fd2 FUN_149823fd2 body=93 status=ok
// SIG undefined FUN_149823fd2(void)

void FUN_149823fd2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bea8f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149824030 FUN_149824030 body=126 status=ok
// SIG undefined FUN_149824030(void)

void FUN_149824030(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bea8f60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014982409f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1498240ba FUN_1498240ba body=29 status=ok
// SIG undefined FUN_1498240ba(void)

undefined8 FUN_1498240ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498240d8 FUN_1498240d8 body=326 status=ok
// SIG undefined FUN_1498240d8(void)

void FUN_1498240d8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x900000003;
  *(undefined4 *)(param_3 + 0x40) = 1;
  puVar5 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_input_exposure_14bea9060;
  puVar4 = &DAT_14bea9030;
  uVar2 = 0;
  do {
    *puVar5 = (int)uVar2;
    puVar5[2] = *puVar4;
    wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar5 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    ppuVar3 = &PTR_u_rw_internal_upscaled_color_14bea90c0;
    puVar5 = &DAT_14bea90a8;
    uVar2 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar1 + -0x40) = *puVar5;
      wcsncpy(puVar1 + -0x3e,(wchar_t *)*ppuVar3,0x3e);
      *puVar1 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x8c44);
    uVar2 = 0;
    do {
      *puVar5 = (int)uVar2;
      puVar5[2] = 0;
      wcsncpy((wchar_t *)(puVar5 + 3),L"cbFSR3Upscaler",0x3e);
      *(undefined2 *)(puVar5 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 14982421e FUN_14982421e body=181 status=ok
// SIG undefined FUN_14982421e(void)

undefined4 * FUN_14982421e(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  bVar5 = param_3[4];
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_145c4dbb8();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29770,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_145c4dbb8();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498242d4 FUN_1498242d4 body=29 status=ok
// SIG undefined FUN_1498242d4(void)

undefined8 FUN_1498242d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


