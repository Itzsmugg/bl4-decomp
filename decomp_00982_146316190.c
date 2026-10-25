// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146316190 FUN_146316190 body=136 status=ok
// SIG undefined FUN_146316190(void)

code * FUN_146316190(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneWithoutSingleLayerWaterViewRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f0000002cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733be40;
}



// FUNCTION 146316218 FUN_146316218 body=144 status=ok
// SIG undefined FUN_146316218(void)

code * FUN_146316218(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a80e70();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"FogStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FFogUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x80000002be;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145712c6e;
}



// FUNCTION 1463162a8 FUN_1463162a8 body=138 status=ok
// SIG undefined FUN_1463162a8(void)

undefined1 * FUN_1463162a8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 700;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14733c3a4;
}



// FUNCTION 146316332 FUN_146316332 body=132 status=ok
// SIG undefined FUN_146316332(void)

void FUN_146316332(longlong param_1,int param_2)

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



// FUNCTION 1463163b6 FUN_1463163b6 body=71 status=ok
// SIG undefined FUN_1463163b6(void)

void FUN_1463163b6(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6a81d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463163e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6a810 + 0x18))(&DAT_14ca6a810,uVar1,*(code **)(DAT_14ca6a810 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6a810,0);
  return;
}



// FUNCTION 1463163fe FUN_1463163fe body=42 status=ok
// SIG undefined FUN_1463163fe(void)

void FUN_1463163fe(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18(param_1 + 0x98);
  FUN_140d00208(param_1 + 0x10,param_2);
  return;
}



// FUNCTION 146316428 FUN_146316428 body=71 status=ok
// SIG undefined FUN_146316428(void)

void FUN_146316428(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6b575 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x00014631645a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6b568 + 0x18))(&DAT_14ca6b568,uVar1,*(code **)(DAT_14ca6b568 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6b568,0);
  return;
}



// FUNCTION 146316470 FUN_146316470 body=71 status=ok
// SIG undefined FUN_146316470(void)

void FUN_146316470(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6b58d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463164a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6b580 + 0x18))(&DAT_14ca6b580,uVar1,*(code **)(DAT_14ca6b580 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6b580,0);
  return;
}



// FUNCTION 1463164b8 FUN_1463164b8 body=755 status=ok
// SIG undefined FUN_1463164b8(void)

void FUN_1463164b8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 *local_d0;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined **local_a0;
  longlong local_98;
  int local_90;
  int local_84 [3];
  undefined8 local_78;
  undefined ***local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448759c8(&local_b8,0x12);
  iVar8 = -6;
  do {
    lVar6 = (longlong)(int)(uint)uStack_b0;
    uVar3 = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < uVar3) {
      uVar5 = uStack_b0 & 0xffffffff;
      uStack_b0._0_4_ = uVar3;
      FUN_14488eebe(&local_b8,uVar5);
      uVar3 = (uint)uStack_b0;
    }
    uStack_b0._0_4_ = uVar3;
    uVar3 = (uint)uStack_b0;
    *(undefined2 *)(local_b8 + lVar6 * 2) = 0;
    lVar6 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_14488eebe(&local_b8,uVar3);
    }
    uVar3 = (uint)uStack_b0;
    *(short *)(local_b8 + lVar6 * 2) = (short)iVar8 + 7;
    lVar6 = (longlong)(int)(uint)uStack_b0;
    uStack_b0._0_4_ = (uint)uStack_b0 + 1;
    if (uStack_b0._4_4_ < (uint)uStack_b0) {
      FUN_14488eebe(&local_b8,uVar3);
    }
    lVar2 = local_b8;
    *(short *)(local_b8 + lVar6 * 2) = (short)iVar8 + 8;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0);
  iVar8 = (uint)uStack_b0;
  uVar4 = FUN_1414e3242(0x8001,0);
  local_70 = &local_a0;
  local_a0 = &PTR_FUN_14a249130;
  local_98 = lVar2;
  local_90 = iVar8 * 2;
  local_78 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FCircleRasterizeIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84[1] = 2;
  local_84[2] = 0x8001;
  local_84[0] = local_90;
  if (local_90 == 0) {
    FUN_14570b4be(param_2,&local_78,0x8001,2);
  }
  local_d8 = uVar4;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_d0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,local_84);
    *(undefined4 *)(local_c0 + 0x18) = uVar4;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_d0 = &local_78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c0,param_2,local_84);
    *(undefined4 *)(local_c0 + 0x18) = uVar4;
  }
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_c0) {
    lVar6 = *plVar7;
    *plVar7 = local_c0;
    local_c0 = 0;
    if (lVar6 == 0) goto LAB_146316688;
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_146316688:
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463167ac FUN_1463167ac body=71 status=ok
// SIG undefined FUN_1463167ac(void)

void FUN_1463167ac(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6ba85 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463167de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6ba78 + 0x18))(&DAT_14ca6ba78,uVar1,*(code **)(DAT_14ca6ba78 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6ba78,0);
  return;
}



// FUNCTION 1463167f4 FUN_1463167f4 body=42 status=ok
// SIG undefined FUN_1463167f4(void)

void FUN_1463167f4(longlong param_1,undefined8 param_2)

{
  FUN_14006bf18(param_1 + 0x98);
  FUN_140d00208(param_1 + 0x10,param_2);
  return;
}



// FUNCTION 14631681e FUN_14631681e body=34 status=ok
// SIG undefined FUN_14631681e(void)

void FUN_14631681e(longlong param_1)

{
  FUN_144725486(param_1 + 0x98);
  FUN_1412db970(param_1 + 0x10);
  return;
}



// FUNCTION 146316840 FUN_146316840 body=71 status=ok
// SIG undefined FUN_146316840(void)

void FUN_146316840(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6bb9d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000146316872. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6bb90 + 0x18))(&DAT_14ca6bb90,uVar1,*(code **)(DAT_14ca6bb90 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6bb90,0);
  return;
}



// FUNCTION 146316888 FUN_146316888 body=136 status=ok
// SIG undefined FUN_146316888(void)

code * FUN_146316888(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146316910;
}



// FUNCTION 146316910 FUN_146316910 body=144 status=ok
// SIG undefined FUN_146316910(void)

code * FUN_146316910(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1449865da();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCulling";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingGlobalUniforms";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000002b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ee1606;
}



// FUNCTION 1463169a0 FUN_1463169a0 body=144 status=ok
// SIG undefined FUN_1463169a0(void)

code * FUN_1463169a0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000002af;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ee157e;
}



// FUNCTION 146316a30 FUN_146316a30 body=549 status=ok
// SIG undefined FUN_146316a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146316a30(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *local_f8 [2];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  _DAT_14ca6dbe0 = &PTR__purecall_14a222c38;
  FUN_140056680(&DAT_14ca6dbf0,L"MeshPaint");
  DAT_14ca6dc00 = 0xffffffff;
  DAT_14ca6dc10 = (code *)0x0;
  DAT_14ca6dc20 = (longlong *)0x0;
  FUN_145c81986(&DAT_14ca6dbe0);
  _DAT_14ca6dbe0 = &PTR_FUN_14a337220;
  local_108 = *param_1;
  local_f8[0] = (longlong *)0x0;
  if (local_108 != 0) {
    plVar9 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[2];
    }
    (**(code **)*plVar9)(plVar9,local_f8);
  }
  local_c8 = (code *)0x0;
  puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar8 = &PTR_FUN_14a337230;
  puVar8[2] = local_108;
  puVar8[4] = local_f8[0];
  local_f8[0] = (longlong *)0x0;
  puVar8[8] = local_d8;
  puVar8[9] = uStack_d0;
  puVar8[6] = local_e8;
  puVar8[7] = uStack_e0;
  lVar7 = (longlong)DAT_14ca6dc10;
  if (local_108 != 0) {
    local_108 = 0;
  }
  if (puVar8 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_c8 = FUN_140067742;
  }
  uVar1 = CONCAT44(uStack_bc,uStack_c0);
  uVar2 = CONCAT44(uStack_ac,uStack_b0);
  uVar3 = CONCAT44(uStack_a4,local_a8);
  uVar4 = CONCAT44(uStack_9c,uStack_a0);
  uVar5 = CONCAT44(uStack_94,local_98);
  uVar6 = CONCAT44(uStack_8c,uStack_90);
  DAT_14ca6dc10 = local_c8;
  local_c8 = (code *)lVar7;
  uStack_c0 = (undefined4)uRam000000014ca6dc18;
  uStack_bc = uRam000000014ca6dc18._4_4_;
  local_b8 = DAT_14ca6dc20;
  uStack_b0 = (undefined4)uRam000000014ca6dc28;
  uStack_ac = uRam000000014ca6dc28._4_4_;
  local_a8 = (undefined4)DAT_14ca6dc30;
  uStack_a4 = DAT_14ca6dc30._4_4_;
  uStack_a0 = (undefined4)uRam000000014ca6dc38;
  uStack_9c = uRam000000014ca6dc38._4_4_;
  local_98 = _DAT_14ca6dc40;
  uStack_94 = DAT_14ca6dc40_4;
  uStack_90 = (undefined4)uRam000000014ca6dc48;
  uStack_8c = uRam000000014ca6dc48._4_4_;
  uRam000000014ca6dc18 = uVar1;
  uRam000000014ca6dc28 = uVar2;
  DAT_14ca6dc30 = uVar3;
  uRam000000014ca6dc38 = uVar4;
  _DAT_14ca6dc40 = uVar5;
  uRam000000014ca6dc48 = uVar6;
  if (lVar7 != 0) {
    plVar9 = local_b8;
    if (DAT_14ca6dc20 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_a8;
    }
    DAT_14ca6dc20 = puVar8;
    (**(code **)(*plVar9 + 0x10))();
    puVar8 = DAT_14ca6dc20;
    if (local_108 != 0) {
      plVar9 = local_f8[0];
      if (local_f8[0] == (longlong *)0x0) {
        plVar9 = &local_e8;
      }
      (**(code **)(*plVar9 + 0x10))();
      puVar8 = DAT_14ca6dc20;
    }
  }
  DAT_14ca6dc20 = puVar8;
  if (*param_1 != 0) {
    plVar9 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146316c56 FUN_146316c56 body=45 status=ok
// SIG undefined FUN_146316c56(void)

undefined8 FUN_146316c56(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(0,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316c84 FUN_146316c84 body=45 status=ok
// SIG undefined FUN_146316c84(void)

undefined8 FUN_146316c84(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(3,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316cb2 FUN_146316cb2 body=45 status=ok
// SIG undefined FUN_146316cb2(void)

undefined8 FUN_146316cb2(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(2,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316ce0 FUN_146316ce0 body=45 status=ok
// SIG undefined FUN_146316ce0(void)

undefined8 FUN_146316ce0(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(4,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316d0e FUN_146316d0e body=45 status=ok
// SIG undefined FUN_146316d0e(void)

undefined8 FUN_146316d0e(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(5,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316d3c FUN_146316d3c body=45 status=ok
// SIG undefined FUN_146316d3c(void)

undefined8 FUN_146316d3c(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(1,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316d6a FUN_146316d6a body=45 status=ok
// SIG undefined FUN_146316d6a(void)

undefined8 FUN_146316d6a(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1449d9015(*param_1,0);
  if (cVar1 != '\0') {
    uVar2 = FUN_14107ca03(7,*param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 146316d98 FUN_146316d98 body=178 status=ok
// SIG undefined FUN_146316d98(void)

void FUN_146316d98(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined8 *)(param_1 + 0x24) = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0x30) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined8 *)(param_1 + 4) = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0x10) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 146316e4a FUN_146316e4a body=72 status=ok
// SIG undefined FUN_146316e4a(void)

void FUN_146316e4a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337360;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146316e92 FUN_146316e92 body=72 status=ok
// SIG undefined FUN_146316e92(void)

void FUN_146316e92(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337390;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146316eda FUN_146316eda body=72 status=ok
// SIG undefined FUN_146316eda(void)

void FUN_146316eda(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3373c0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146316f22 FUN_146316f22 body=72 status=ok
// SIG undefined FUN_146316f22(void)

void FUN_146316f22(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3373f0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146316f6a FUN_146316f6a body=72 status=ok
// SIG undefined FUN_146316f6a(void)

void FUN_146316f6a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337420;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146316fb2 FUN_146316fb2 body=72 status=ok
// SIG undefined FUN_146316fb2(void)

void FUN_146316fb2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337450;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146316ffa FUN_146316ffa body=72 status=ok
// SIG undefined FUN_146316ffa(void)

void FUN_146316ffa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337480;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317042 FUN_146317042 body=72 status=ok
// SIG undefined FUN_146317042(void)

void FUN_146317042(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3374b0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631708a FUN_14631708a body=72 status=ok
// SIG undefined FUN_14631708a(void)

void FUN_14631708a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3374e0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463170d2 FUN_1463170d2 body=72 status=ok
// SIG undefined FUN_1463170d2(void)

void FUN_1463170d2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337510;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631711a FUN_14631711a body=72 status=ok
// SIG undefined FUN_14631711a(void)

void FUN_14631711a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337540;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317162 FUN_146317162 body=72 status=ok
// SIG undefined FUN_146317162(void)

void FUN_146317162(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337570;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463171aa FUN_1463171aa body=72 status=ok
// SIG undefined FUN_1463171aa(void)

void FUN_1463171aa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3375a0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463171f2 FUN_1463171f2 body=72 status=ok
// SIG undefined FUN_1463171f2(void)

void FUN_1463171f2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3375d0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631723a FUN_14631723a body=72 status=ok
// SIG undefined FUN_14631723a(void)

void FUN_14631723a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337600;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317282 FUN_146317282 body=72 status=ok
// SIG undefined FUN_146317282(void)

void FUN_146317282(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337630;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463172ca FUN_1463172ca body=72 status=ok
// SIG undefined FUN_1463172ca(void)

void FUN_1463172ca(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337660;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317312 FUN_146317312 body=72 status=ok
// SIG undefined FUN_146317312(void)

void FUN_146317312(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337690;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631735a FUN_14631735a body=72 status=ok
// SIG undefined FUN_14631735a(void)

void FUN_14631735a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3376c0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463173a2 FUN_1463173a2 body=72 status=ok
// SIG undefined FUN_1463173a2(void)

void FUN_1463173a2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3376f0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463173ea FUN_1463173ea body=72 status=ok
// SIG undefined FUN_1463173ea(void)

void FUN_1463173ea(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337720;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317432 FUN_146317432 body=72 status=ok
// SIG undefined FUN_146317432(void)

void FUN_146317432(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337750;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631747a FUN_14631747a body=72 status=ok
// SIG undefined FUN_14631747a(void)

void FUN_14631747a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337780;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463174c2 FUN_1463174c2 body=72 status=ok
// SIG undefined FUN_1463174c2(void)

void FUN_1463174c2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3377b0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631750a FUN_14631750a body=72 status=ok
// SIG undefined FUN_14631750a(void)

void FUN_14631750a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3377e0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317552 FUN_146317552 body=72 status=ok
// SIG undefined FUN_146317552(void)

void FUN_146317552(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337810;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631759a FUN_14631759a body=72 status=ok
// SIG undefined FUN_14631759a(void)

void FUN_14631759a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337840;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463175e2 FUN_1463175e2 body=72 status=ok
// SIG undefined FUN_1463175e2(void)

void FUN_1463175e2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337870;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631762a FUN_14631762a body=72 status=ok
// SIG undefined FUN_14631762a(void)

void FUN_14631762a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3378a0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317672 FUN_146317672 body=72 status=ok
// SIG undefined FUN_146317672(void)

void FUN_146317672(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3378d0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463176ba FUN_1463176ba body=72 status=ok
// SIG undefined FUN_1463176ba(void)

void FUN_1463176ba(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337900;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317702 FUN_146317702 body=72 status=ok
// SIG undefined FUN_146317702(void)

void FUN_146317702(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337930;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631774a FUN_14631774a body=72 status=ok
// SIG undefined FUN_14631774a(void)

void FUN_14631774a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337960;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317792 FUN_146317792 body=72 status=ok
// SIG undefined FUN_146317792(void)

void FUN_146317792(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337990;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463177da FUN_1463177da body=72 status=ok
// SIG undefined FUN_1463177da(void)

void FUN_1463177da(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3379c0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317822 FUN_146317822 body=72 status=ok
// SIG undefined FUN_146317822(void)

void FUN_146317822(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3379f0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631786a FUN_14631786a body=72 status=ok
// SIG undefined FUN_14631786a(void)

void FUN_14631786a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337a20;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463178b2 FUN_1463178b2 body=72 status=ok
// SIG undefined FUN_1463178b2(void)

void FUN_1463178b2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337a50;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463178fa FUN_1463178fa body=72 status=ok
// SIG undefined FUN_1463178fa(void)

void FUN_1463178fa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337a80;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317942 FUN_146317942 body=72 status=ok
// SIG undefined FUN_146317942(void)

void FUN_146317942(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337ab0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631798a FUN_14631798a body=72 status=ok
// SIG undefined FUN_14631798a(void)

void FUN_14631798a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337ae0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1463179d2 FUN_1463179d2 body=72 status=ok
// SIG undefined FUN_1463179d2(void)

void FUN_1463179d2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337b10;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317a1a FUN_146317a1a body=72 status=ok
// SIG undefined FUN_146317a1a(void)

void FUN_146317a1a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a338030;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317a62 FUN_146317a62 body=72 status=ok
// SIG undefined FUN_146317a62(void)

void FUN_146317a62(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a338060;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317aaa FUN_146317aaa body=72 status=ok
// SIG undefined FUN_146317aaa(void)

void FUN_146317aaa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a338090;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317af2 FUN_146317af2 body=72 status=ok
// SIG undefined FUN_146317af2(void)

void FUN_146317af2(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3380c0;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146317b3a FUN_146317b3a body=71 status=ok
// SIG undefined FUN_146317b3a(void)

undefined8 * FUN_146317b3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a334470;
  param_1[2] = &PTR_FUN_14a334460;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146317b82 FUN_146317b82 body=136 status=ok
// SIG undefined FUN_146317b82(void)

code * FUN_146317b82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RGB_DISTANCE_TABLES";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fd6650;
}



// FUNCTION 146317c0a FUN_146317c0a body=147 status=ok
// SIG undefined FUN_146317c0a(void)

void FUN_146317c0a(longlong param_1,int param_2)

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



// FUNCTION 146317c9e FUN_146317c9e body=29 status=ok
// SIG undefined FUN_146317c9e(void)

undefined8 FUN_146317c9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146317cbc FUN_146317cbc body=136 status=ok
// SIG undefined FUN_146317cbc(void)

code * FUN_146317cbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedUniform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456ec9be;
}



// FUNCTION 146317d44 FUN_146317d44 body=571 status=ok
// SIG undefined FUN_146317d44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146317d44(void)

{
  longlong lVar1;
  undefined1 auStack_1a8 [32];
  undefined8 local_188 [46];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  _DAT_14ca6dd50 = 0xffffffff;
  _DAT_14ca6dd54 = 0x105;
  DAT_14ca6dd56 = 0;
  _DAT_14ca6dd58 = 2;
  DAT_14ca6dd60 = 0;
  DAT_14ca6dd68 = (void *)0x0;
  DAT_14ca6dd48 = &PTR_FUN_14a337300;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)local_188 + lVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)local_188 + lVar1 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_188 + lVar1) = 0;
    *(undefined8 *)((longlong)local_188 + lVar1 + 8) = 0x3f80000000000000;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  lVar1 = 0x100;
  do {
    *(undefined8 *)((longlong)local_188 + lVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)local_188 + lVar1 + 0x18) = 0x3f80000000000000;
    *(undefined8 *)((longlong)local_188 + lVar1) = 0;
    *(undefined8 *)((longlong)local_188 + lVar1 + 8) = 0x3f80000000000000;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x180);
  local_188[0] = 0x40a0000040000000;
  local_188[1] = 0x4160000041000000;
  local_188[2] = 0x40c0000040000000;
  local_188[3] = 0x4140000041100000;
  local_188[4] = 0x408000003f800000;
  local_188[5] = 0x4140000040e00000;
  local_188[6] = 0x404000003f800000;
  local_188[7] = 0x4140000040a00000;
  local_188[8] = 0x40a0000040000000;
  local_188[9] = 0x4130000040e00000;
  local_188[10] = 0x40c0000040000000;
  local_188[0xb] = 0x4120000041000000;
  local_188[0xc] = 0x40c0000040400000;
  local_188[0xd] = 0x4120000040e00000;
  local_188[0xe] = 0x4080000040000000;
  local_188[0xf] = 0x4120000040e00000;
  local_188[0x10] = 0x40a000003f800000;
  local_188[0x11] = 0x4110000040e00000;
  local_188[0x12] = 0x408000003f800000;
  local_188[0x13] = 0x4110000040e00000;
  local_188[0x14] = 0x404000003f800000;
  local_188[0x15] = 0x4110000040e00000;
  local_188[0x16] = 0x408000003f800000;
  local_188[0x17] = 0x4110000040c00000;
  local_188[0x18] = 0x4040000040000000;
  local_188[0x19] = 0x4110000040c00000;
  local_188[0x1a] = 0x3f80000000000000;
  local_188[0x1b] = 0x4110000040000000;
  local_188[0x1c] = 0x40a0000040400000;
  local_188[0x1d] = 0x4100000040e00000;
  local_188[0x1e] = 0x4080000040000000;
  local_188[0x1f] = 0x4100000040c00000;
  local_188[0x20] = 0xc0000000c1000000;
  local_188[0x21] = 0x4100000040000000;
  local_188[0x22] = 0xc0a00000c1880000;
  local_188[0x23] = 0x4188000040a00000;
  local_188[0x24] = 0xc1100000c1e80000;
  local_188[0x25] = 0x41e8000041100000;
  local_188[0x26] = 0xc1500000c2280000;
  local_188[0x27] = 0x4228000041500000;
  local_188[0x28] = 0xc1900000c2700000;
  local_188[0x29] = 0x4270000041900000;
  local_188[0x2a] = 0xc1c00000c2a00000;
  local_188[0x2b] = 0x42a0000041c00000;
  local_188[0x2c] = 0xc2040000c2d40000;
  local_188[0x2d] = 0x42d4000042040000;
  local_18 = 0xc3370000;
  uStack_14 = 0xc23c0000;
  uStack_10 = 0x423c0000;
  uStack_c = 0x43370000;
  DAT_14ca6dd68 = (void *)FUN_14001cc68(0x180,0x10);
  memcpy(DAT_14ca6dd68,local_188,0x180);
  if ((local_8 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146317f80 FUN_146317f80 body=71 status=ok
// SIG undefined FUN_146317f80(void)

void FUN_146317f80(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6dd55 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000146317fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6dd48 + 0x18))(&DAT_14ca6dd48,uVar1,*(code **)(DAT_14ca6dd48 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6dd48,0);
  return;
}



// FUNCTION 146317ff6 FUN_146317ff6 body=81 status=ok
// SIG undefined FUN_146317ff6(void)

void FUN_146317ff6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a337330;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146318778 FUN_146318778 body=136 status=ok
// SIG undefined FUN_146318778(void)

code * FUN_146318778(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompressTexture2_128bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000004b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147343c08;
}



// FUNCTION 146318800 FUN_146318800 body=136 status=ok
// SIG undefined FUN_146318800(void)

code * FUN_146318800(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompressTexture1_64bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000004b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f982dc;
}



// FUNCTION 146318888 FUN_146318888 body=130 status=ok
// SIG undefined FUN_146318888(void)

undefined1 * FUN_146318888(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Input";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x59e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145fdded2;
}



// FUNCTION 14631890a FUN_14631890a body=136 status=ok
// SIG undefined FUN_14631890a(void)

code * FUN_14631890a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145dcaaa4;
}



// FUNCTION 146318992 FUN_146318992 body=144 status=ok
// SIG undefined FUN_146318992(void)

code * FUN_146318992(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dcaa1a;
}



// FUNCTION 146318a22 FUN_146318a22 body=71 status=ok
// SIG undefined FUN_146318a22(void)

void FUN_146318a22(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14ca6fc0d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x000146318a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14ca6fc00 + 0x18))(&DAT_14ca6fc00,uVar1,*(code **)(DAT_14ca6fc00 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14ca6fc00,0);
  return;
}



// FUNCTION 146318a6a FUN_146318a6a body=93 status=ok
// SIG undefined FUN_146318a6a(void)

void FUN_146318a6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a338120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146318ac8 FUN_146318ac8 body=132 status=ok
// SIG undefined FUN_146318ac8(void)

void FUN_146318ac8(longlong param_1,int param_2)

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



// FUNCTION 146318b4e FUN_146318b4e body=136 status=ok
// SIG undefined FUN_146318b4e(void)

code * FUN_146318b4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147349aa8;
}



// FUNCTION 146318bd6 FUN_146318bd6 body=136 status=ok
// SIG undefined FUN_146318bd6(void)

code * FUN_146318bd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GroundZMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147349c46;
}



// FUNCTION 146318c5e FUN_146318c5e body=144 status=ok
// SIG undefined FUN_146318c5e(void)

code * FUN_146318c5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146318cee;
}



// FUNCTION 146318cee FUN_146318cee body=138 status=ok
// SIG undefined FUN_146318cee(void)

undefined1 * FUN_146318cee(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x36;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e987d2;
}



// FUNCTION 146318d78 FUN_146318d78 body=136 status=ok
// SIG undefined FUN_146318d78(void)

code * FUN_146318d78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e98dd0;
}



// FUNCTION 146318e00 FUN_146318e00 body=136 status=ok
// SIG undefined FUN_146318e00(void)

code * FUN_146318e00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c00000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14734a120;
}



// FUNCTION 146318e88 FUN_146318e88 body=144 status=ok
// SIG undefined FUN_146318e88(void)

code * FUN_146318e88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14130543e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146318f18;
}



// FUNCTION 146318f18 FUN_146318f18 body=138 status=ok
// SIG undefined FUN_146318f18(void)

undefined1 * FUN_146318f18(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e98d42;
}



// FUNCTION 146318fa2 FUN_146318fa2 body=47 status=ok
// SIG undefined FUN_146318fa2(void)

longlong FUN_146318fa2(void)

{
  if (DAT_14ca75b10 == 0) {
    FUN_1409ce572(&DAT_14ca75b10,&PTR_FUN_14a339990);
  }
  return DAT_14ca75b10;
}



// FUNCTION 146318fd1 FUN_146318fd1 body=47 status=ok
// SIG undefined FUN_146318fd1(void)

longlong FUN_146318fd1(void)

{
  if (DAT_14ca75b28 == 0) {
    FUN_1409ce572(&DAT_14ca75b28,&PTR_FUN_14a339a40);
  }
  return DAT_14ca75b28;
}



// FUNCTION 146319000 FUN_146319000 body=47 status=ok
// SIG undefined FUN_146319000(void)

longlong FUN_146319000(void)

{
  if (DAT_14ca75b40 == 0) {
    FUN_1409ce572(&DAT_14ca75b40,&PTR_FUN_14a339ad0);
  }
  return DAT_14ca75b40;
}



// FUNCTION 14631902f FUN_14631902f body=47 status=ok
// SIG undefined FUN_14631902f(void)

longlong FUN_14631902f(void)

{
  if (DAT_14ca75b58 == 0) {
    FUN_1409ce572(&DAT_14ca75b58,&PTR_FUN_14a339b90);
  }
  return DAT_14ca75b58;
}



// FUNCTION 14631905e FUN_14631905e body=47 status=ok
// SIG undefined FUN_14631905e(void)

longlong FUN_14631905e(void)

{
  if (DAT_14ca75b70 == 0) {
    FUN_1409ce572(&DAT_14ca75b70,&PTR_FUN_14a339c40);
  }
  return DAT_14ca75b70;
}



// FUNCTION 14631908d FUN_14631908d body=47 status=ok
// SIG undefined FUN_14631908d(void)

longlong FUN_14631908d(void)

{
  if (DAT_14ca75b88 == 0) {
    FUN_1409ce572(&DAT_14ca75b88,&PTR_FUN_14a339d10);
  }
  return DAT_14ca75b88;
}



// FUNCTION 1463190bc FUN_1463190bc body=47 status=ok
// SIG undefined FUN_1463190bc(void)

longlong FUN_1463190bc(void)

{
  if (DAT_14ca75ba0 == 0) {
    FUN_1409ce572(&DAT_14ca75ba0,&PTR_FUN_14a339dd0);
  }
  return DAT_14ca75ba0;
}



// FUNCTION 1463190eb FUN_1463190eb body=47 status=ok
// SIG undefined FUN_1463190eb(void)

longlong FUN_1463190eb(void)

{
  if (DAT_14ca75bb8 == 0) {
    FUN_1409ce572(&DAT_14ca75bb8,&PTR_FUN_14a339fb0);
  }
  return DAT_14ca75bb8;
}



// FUNCTION 14631911a FUN_14631911a body=47 status=ok
// SIG undefined FUN_14631911a(void)

longlong FUN_14631911a(void)

{
  if (DAT_14ca75be0 == 0) {
    FUN_14073dd9a(&DAT_14ca75be0,&PTR_LAB_14a33a190);
  }
  return DAT_14ca75be0;
}



// FUNCTION 146319149 FUN_146319149 body=47 status=ok
// SIG undefined FUN_146319149(void)

longlong FUN_146319149(void)

{
  if (DAT_14ca75bd0 == 0) {
    FUN_14000fc22(&DAT_14ca75bd0,&PTR_FUN_14a33a0d8);
  }
  return DAT_14ca75bd0;
}



// FUNCTION 146319178 FUN_146319178 body=34 status=ok
// SIG undefined FUN_146319178(void)

void FUN_146319178(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a64b74();
  FUN_14069c8d6(uVar1,&PTR_s_Conv_HandKeypointToInt32_14a33a120,1);
  return;
}



// FUNCTION 14631919a FUN_14631919a body=35 status=ok
// SIG undefined FUN_14631919a(void)

void FUN_14631919a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a33a1d0;
  return;
}



// FUNCTION 1463191bd FUN_1463191bd body=47 status=ok
// SIG undefined FUN_1463191bd(void)

longlong FUN_1463191bd(void)

{
  if (DAT_14ca75bf0 == 0) {
    FUN_1409ce572(&DAT_14ca75bf0,&PTR_FUN_14a33a4a0);
  }
  return DAT_14ca75bf0;
}



// FUNCTION 1463191ec FUN_1463191ec body=47 status=ok
// SIG undefined FUN_1463191ec(void)

longlong FUN_1463191ec(void)

{
  if (DAT_14ca75c08 == 0) {
    FUN_1409ce572(&DAT_14ca75c08,&PTR_FUN_14a33a500);
  }
  return DAT_14ca75c08;
}



// FUNCTION 14631921b FUN_14631921b body=47 status=ok
// SIG undefined FUN_14631921b(void)

longlong FUN_14631921b(void)

{
  if (DAT_14ca75c20 == 0) {
    FUN_1409ce572(&DAT_14ca75c20,&PTR_FUN_14a33a580);
  }
  return DAT_14ca75c20;
}



// FUNCTION 14631924a FUN_14631924a body=47 status=ok
// SIG undefined FUN_14631924a(void)

longlong FUN_14631924a(void)

{
  if (DAT_14ca75c38 == 0) {
    FUN_14086a14e(&DAT_14ca75c38,&PTR_FUN_14a33a808);
  }
  return DAT_14ca75c38;
}



// FUNCTION 146319279 FUN_146319279 body=49 status=ok
// SIG undefined FUN_146319279(void)

longlong FUN_146319279(void)

{
  if (DAT_14ca75c98 == 0) {
    FUN_1409ce572(&DAT_14ca75c98,&PTR_FUN_14a33bc00);
  }
  return DAT_14ca75c98;
}



// FUNCTION 1463192aa FUN_1463192aa body=48 status=ok
// SIG undefined FUN_1463192aa(void)

void FUN_1463192aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14a33e870;
  return;
}



// FUNCTION 1463192da FUN_1463192da body=55 status=ok
// SIG undefined FUN_1463192da(void)

void FUN_1463192da(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca75c58 == 0) {
    uVar1 = FUN_1412da495();
    DAT_14ca75c58 = FUN_140002ddd(FUN_146319311,uVar1,L"XRMotionControllerData");
  }
  return;
}



// FUNCTION 146319311 FUN_146319311 body=47 status=ok
// SIG undefined FUN_146319311(void)

longlong FUN_146319311(void)

{
  if (DAT_14ca75c50 == 0) {
    FUN_14086a14e(&DAT_14ca75c50,&PTR_FUN_14a33af68);
  }
  return DAT_14ca75c50;
}



// FUNCTION 146319340 FUN_146319340 body=48 status=ok
// SIG undefined FUN_146319340(void)

void FUN_146319340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14a33e9d0;
  return;
}



// FUNCTION 146319370 FUN_146319370 body=55 status=ok
// SIG undefined FUN_146319370(void)

void FUN_146319370(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca75c70 == 0) {
    uVar1 = FUN_1412da495();
    DAT_14ca75c70 = FUN_140002ddd(FUN_1463193a7,uVar1,L"XRMotionControllerState");
  }
  return;
}



// FUNCTION 1463193a7 FUN_1463193a7 body=47 status=ok
// SIG undefined FUN_1463193a7(void)

longlong FUN_1463193a7(void)

{
  if (DAT_14ca75c68 == 0) {
    FUN_14086a14e(&DAT_14ca75c68,&PTR_FUN_14a33b4b0);
  }
  return DAT_14ca75c68;
}



// FUNCTION 1463193d6 FUN_1463193d6 body=48 status=ok
// SIG undefined FUN_1463193d6(void)

void FUN_1463193d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14a33eb30;
  return;
}



// FUNCTION 146319406 FUN_146319406 body=55 status=ok
// SIG undefined FUN_146319406(void)

void FUN_146319406(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca75c88 == 0) {
    uVar1 = FUN_1412da495();
    DAT_14ca75c88 = FUN_140002ddd(FUN_14631943d,uVar1,L"XRHandTrackingState");
  }
  return;
}



// FUNCTION 14631943d FUN_14631943d body=47 status=ok
// SIG undefined FUN_14631943d(void)

longlong FUN_14631943d(void)

{
  if (DAT_14ca75c80 == 0) {
    FUN_14086a14e(&DAT_14ca75c80,&PTR_FUN_14a33b950);
  }
  return DAT_14ca75c80;
}



// FUNCTION 14631946c FUN_14631946c body=48 status=ok
// SIG undefined FUN_14631946c(void)

void FUN_14631946c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a33ec90;
  return;
}



// FUNCTION 14631949c FUN_14631949c body=192 status=ok
// SIG undefined FUN_14631949c(void)

void FUN_14631949c(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a33eff0;
  puVar1[3] = &DAT_14ca75cc0;
  puVar1[4] = FUN_1459cec32;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631955e FUN_14631955e body=55 status=ok
// SIG undefined FUN_14631955e(void)

void FUN_14631955e(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca75cd0 == 0) {
    uVar1 = FUN_1412da495();
    DAT_14ca75cd0 = FUN_140002ddd(FUN_146319595,uVar1,L"XRDeviceId");
  }
  return;
}



// FUNCTION 146319595 FUN_146319595 body=47 status=ok
// SIG undefined FUN_146319595(void)

longlong FUN_146319595(void)

{
  if (DAT_14ca75cc8 == 0) {
    FUN_14086a14e(&DAT_14ca75cc8,&PTR_FUN_14a33bd00);
  }
  return DAT_14ca75cc8;
}



// FUNCTION 1463195c4 FUN_1463195c4 body=48 status=ok
// SIG undefined FUN_1463195c4(void)

void FUN_1463195c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a33ee80;
  return;
}



// FUNCTION 1463195f4 FUN_1463195f4 body=49 status=ok
// SIG undefined FUN_1463195f4(void)

longlong FUN_1463195f4(void)

{
  if (DAT_14ca75dd8 == 0) {
    FUN_14073dd9a(&DAT_14ca75dd8,&PTR_LAB_14a33d090);
  }
  return DAT_14ca75dd8;
}



// FUNCTION 146319625 FUN_146319625 body=47 status=ok
// SIG undefined FUN_146319625(void)

longlong FUN_146319625(void)

{
  if (DAT_14ca75d70 == 0) {
    FUN_14000fc22(&DAT_14ca75d70,&PTR_FUN_14a33c418);
  }
  return DAT_14ca75d70;
}



// FUNCTION 146319654 FUN_146319654 body=47 status=ok
// SIG undefined FUN_146319654(void)

longlong FUN_146319654(void)

{
  if (DAT_14ca75d78 == 0) {
    FUN_14000fc22(&DAT_14ca75d78,&PTR_FUN_14a33c560);
  }
  return DAT_14ca75d78;
}



// FUNCTION 146319683 FUN_146319683 body=47 status=ok
// SIG undefined FUN_146319683(void)

longlong FUN_146319683(void)

{
  if (DAT_14ca75d80 == 0) {
    FUN_14000fc22(&DAT_14ca75d80,&PTR_FUN_14a33c668);
  }
  return DAT_14ca75d80;
}



// FUNCTION 1463196b2 FUN_1463196b2 body=47 status=ok
// SIG undefined FUN_1463196b2(void)

longlong FUN_1463196b2(void)

{
  if (DAT_14ca75d88 == 0) {
    FUN_14000fc22(&DAT_14ca75d88,&PTR_FUN_14a33c768);
  }
  return DAT_14ca75d88;
}



// FUNCTION 1463196e1 FUN_1463196e1 body=47 status=ok
// SIG undefined FUN_1463196e1(void)

longlong FUN_1463196e1(void)

{
  if (DAT_14ca75d90 == 0) {
    FUN_14000fc22(&DAT_14ca75d90,&PTR_FUN_14a33c890);
  }
  return DAT_14ca75d90;
}



// FUNCTION 146319710 FUN_146319710 body=47 status=ok
// SIG undefined FUN_146319710(void)

longlong FUN_146319710(void)

{
  if (DAT_14ca75d98 == 0) {
    FUN_14000fc22(&DAT_14ca75d98,&PTR_FUN_14a33c978);
  }
  return DAT_14ca75d98;
}



// FUNCTION 14631973f FUN_14631973f body=47 status=ok
// SIG undefined FUN_14631973f(void)

longlong FUN_14631973f(void)

{
  if (DAT_14ca75da0 == 0) {
    FUN_14000fc22(&DAT_14ca75da0,&PTR_FUN_14a33ca10);
  }
  return DAT_14ca75da0;
}



// FUNCTION 14631976e FUN_14631976e body=47 status=ok
// SIG undefined FUN_14631976e(void)

longlong FUN_14631976e(void)

{
  if (DAT_14ca75db0 == 0) {
    FUN_14000fc22(&DAT_14ca75db0,&PTR_FUN_14a33caa0);
  }
  return DAT_14ca75db0;
}



// FUNCTION 14631979d FUN_14631979d body=47 status=ok
// SIG undefined FUN_14631979d(void)

longlong FUN_14631979d(void)

{
  if (DAT_14ca75db8 == 0) {
    FUN_14000fc22(&DAT_14ca75db8,&PTR_FUN_14a33cb50);
  }
  return DAT_14ca75db8;
}



// FUNCTION 1463197cc FUN_1463197cc body=47 status=ok
// SIG undefined FUN_1463197cc(void)

longlong FUN_1463197cc(void)

{
  if (DAT_14ca75dc0 == 0) {
    FUN_14000fc22(&DAT_14ca75dc0,&PTR_FUN_14a33cbf8);
  }
  return DAT_14ca75dc0;
}



// FUNCTION 1463197fb FUN_1463197fb body=47 status=ok
// SIG undefined FUN_1463197fb(void)

longlong FUN_1463197fb(void)

{
  if (DAT_14ca75dc8 == 0) {
    FUN_14000fc22(&DAT_14ca75dc8,&PTR_FUN_14a33cce8);
  }
  return DAT_14ca75dc8;
}



// FUNCTION 14631982a FUN_14631982a body=34 status=ok
// SIG undefined FUN_14631982a(void)

void FUN_14631982a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a64c60();
  FUN_14069c8d6(uVar1,&PTR_s_GetAngularVelocity_14a33cd30,10);
  return;
}



// FUNCTION 14631984c FUN_14631984c body=138 status=ok
// SIG undefined FUN_14631984c(void)

void FUN_14631984c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1400f7f2e();
  if (*(longlong *)(param_1 + 0x748) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca75e00);
    *(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x28) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca75e00);
    *(undefined8 *)(param_1 + 0x748) = 0;
    plVar3 = *(longlong **)(param_1 + 0x750);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x750) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001463198d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1463198d6 FUN_1463198d6 body=40 status=ok
// SIG undefined FUN_1463198d6(void)

undefined8 FUN_1463198d6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463198fe FUN_1463198fe body=29 status=ok
// SIG undefined FUN_1463198fe(void)

undefined8 FUN_1463198fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631991c FUN_14631991c body=29 status=ok
// SIG undefined FUN_14631991c(void)

undefined8 FUN_14631991c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631993a FUN_14631993a body=29 status=ok
// SIG undefined FUN_14631993a(void)

undefined8 FUN_14631993a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146319958 FUN_146319958 body=29 status=ok
// SIG undefined FUN_146319958(void)

undefined8 FUN_146319958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146319976 FUN_146319976 body=29 status=ok
// SIG undefined FUN_146319976(void)

undefined8 FUN_146319976(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146319994 FUN_146319994 body=93 status=ok
// SIG undefined FUN_146319994(void)

void FUN_146319994(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a33eff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1463199f2 FUN_1463199f2 body=29 status=ok
// SIG undefined FUN_1463199f2(void)

undefined8 FUN_1463199f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146319a10 FUN_146319a10 body=87 status=ok
// SIG undefined FUN_146319a10(void)

void FUN_146319a10(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  while (puVar4 = DAT_14ca75f78, DAT_14ca75f78 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*DAT_14ca75f78;
    plVar1 = DAT_14ca75f78 + 2;
    DAT_14ca75f78 = puVar3;
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
    }
    puVar3 = (undefined8 *)puVar4[1];
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_1400020a8(puVar4);
  }
  return;
}



// FUNCTION 146319a68 FUN_146319a68 body=231 status=ok
// SIG undefined FUN_146319a68(void)

void FUN_146319a68(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a343a50;
  local_28[3] = &DAT_14ca75f88;
  local_28[4] = FUN_1473686f6;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146319b50 FUN_146319b50 body=93 status=ok
// SIG undefined FUN_146319b50(void)

void FUN_146319b50(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a343a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146319bae FUN_146319bae body=147 status=ok
// SIG undefined FUN_146319bae(void)

void FUN_146319bae(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146319c42 FUN_146319c42 body=147 status=ok
// SIG undefined FUN_146319c42(void)

void FUN_146319c42(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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



// FUNCTION 146319cd6 FUN_146319cd6 body=118 status=ok
// SIG undefined FUN_146319cd6(void)

undefined8 * FUN_146319cd6(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca76700) {
    FUN_144b3d300(&DAT_14ca76700);
    if (DAT_14ca76700 == -1) {
      FUN_1446f470e(&DAT_14ca766f8,L"DXGISwapchainProvider",1);
      _Init_thread_footer(&DAT_14ca76700);
    }
  }
  *param_1 = DAT_14ca766f8;
  return param_1;
}



// FUNCTION 146319d4c FUN_146319d4c body=86 status=ok
// SIG undefined FUN_146319d4c(void)

void FUN_146319d4c(longlong param_1)

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
      FUN_1412897c8(*(undefined8 *)(param_1 + 2000 + (ulonglong)uVar3 * 8));
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



// FUNCTION 146319da2 FUN_146319da2 body=42 status=ok
// SIG undefined FUN_146319da2(void)

int FUN_146319da2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  LOCK();
  puVar1 = (uint *)(param_1 + -0x28);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  iVar3 = (uVar2 & 0x3fffffff) - 1;
  if (iVar3 == 0) {
    FUN_144a54812(param_1 + -0x30);
  }
  return iVar3;
}



// FUNCTION 146319dcc FUN_146319dcc body=132 status=ok
// SIG undefined FUN_146319dcc(void)

void FUN_146319dcc(longlong param_1,int param_2)

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



// FUNCTION 146319e52 FUN_146319e52 body=48 status=ok
// SIG undefined FUN_146319e52(void)

void FUN_146319e52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146319e82 FUN_146319e82 body=728 status=ok
// SIG undefined FUN_146319e82(void)

void FUN_146319e82(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = 0;
  uStack_48 = 0;
  local_68 = 0x400000057;
  uStack_60 = 0x1688;
  uStack_58 = 0x100000000;
  lVar2 = param_1 + 0x6d8;
  lVar6 = *(longlong *)(param_1 + 0x898);
  if (*(longlong *)(param_1 + 0x898) == 0) {
    lVar6 = lVar2;
  }
  FUN_144a30b90(lVar6,&local_78);
  *(undefined4 *)(param_1 + 0x950) = local_78;
  *(undefined4 *)(param_1 + 0x954) = uStack_74;
  *(undefined4 *)(param_1 + 0x958) = uStack_70;
  *(undefined4 *)(param_1 + 0x95c) = uStack_6c;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  lVar6 = 0;
  (**(code **)(*plVar4 + 0x90))(plVar4,0,&local_68,*(undefined8 *)(param_1 + 0x950));
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 0x400000057;
  lVar5 = *(longlong *)(param_1 + 0x898);
  if (*(longlong *)(param_1 + 0x898) == 0) {
    lVar5 = lVar2;
  }
  FUN_144a30b90(lVar5 + 0xe0,&local_78);
  *(undefined4 *)(param_1 + 0x960) = local_78;
  *(undefined4 *)(param_1 + 0x964) = uStack_74;
  *(undefined4 *)(param_1 + 0x968) = uStack_70;
  *(undefined4 *)(param_1 + 0x96c) = uStack_6c;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  (**(code **)(*plVar4 + 0xa0))(plVar4,0,&local_68,*(undefined8 *)(param_1 + 0x960));
  local_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 0x40000001c;
  lVar5 = *(longlong *)(param_1 + 0x898);
  if (*(longlong *)(param_1 + 0x898) == 0) {
    lVar5 = lVar2;
  }
  FUN_144a30b90(lVar5,&local_78);
  *(undefined4 *)(param_1 + 0x970) = local_78;
  *(undefined4 *)(param_1 + 0x974) = uStack_74;
  *(undefined4 *)(param_1 + 0x978) = uStack_70;
  *(undefined4 *)(param_1 + 0x97c) = uStack_6c;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  local_88 = *(undefined8 *)(param_1 + 0x970);
  (**(code **)(*plVar4 + 0x98))(plVar4,0,0,&local_68);
  uStack_60 = 0;
  uStack_58 = 0;
  local_68 = 0x300000028;
  lVar5 = *(longlong *)(param_1 + 0x898);
  if (*(longlong *)(param_1 + 0x898) == 0) {
    lVar5 = lVar2;
  }
  FUN_144a30b90(lVar5 + 0x150,&local_78);
  *(undefined4 *)(param_1 + 0x990) = local_78;
  *(undefined4 *)(param_1 + 0x994) = uStack_74;
  *(undefined4 *)(param_1 + 0x998) = uStack_70;
  *(undefined4 *)(param_1 + 0x99c) = uStack_6c;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  (**(code **)(*plVar4 + 0xa8))(plVar4,0,&local_68,*(undefined8 *)(param_1 + 0x990));
  local_68 = 0;
  uStack_60 = 0;
  lVar5 = *(longlong *)(param_1 + 0x898);
  if (*(longlong *)(param_1 + 0x898) == 0) {
    lVar5 = lVar2;
  }
  FUN_144a30b90(lVar5,&local_78);
  *(undefined4 *)(param_1 + 0x980) = local_78;
  *(undefined4 *)(param_1 + 0x984) = uStack_74;
  *(undefined4 *)(param_1 + 0x988) = uStack_70;
  *(undefined4 *)(param_1 + 0x98c) = uStack_6c;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_68,*(undefined8 *)(param_1 + 0x980));
  local_68 = 0x1010102;
  uStack_60 = 0x7f7fffff00000000;
  uStack_58 = 0;
  local_50 = local_50 & 0xffffffffffffff00;
  if (*(int *)(param_1 + 8) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 2000) + 0x9a0);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  lVar5 = FUN_140216f90(param_1,&local_68,lVar6);
  lVar2 = *(longlong *)(param_1 + 0x9a0);
  if (lVar2 != lVar5) {
    *(longlong *)(param_1 + 0x9a0) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar2 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  if (lVar6 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar6 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631a15c FUN_14631a15c body=143 status=ok
// SIG undefined FUN_14631a15c(void)

void FUN_14631a15c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14631a1ec FUN_14631a1ec body=150 status=ok
// SIG undefined FUN_14631a1ec(void)

void FUN_14631a1ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x310,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x310)) {
      uVar5 = uVar4 / 0x310 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x310,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14631a284 FUN_14631a284 body=181 status=ok
// SIG undefined FUN_14631a284(void)

void FUN_14631a284(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_30;
  int local_24 [4];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24[3] = 1;
  local_14 = local_24[3];
  if (DAT_14ca81480 == 0) {
    local_24[3] = param_3;
    local_14 = param_4;
  }
  local_24[1] = 0;
  local_24[2] = 0;
  uVar1 = 0x400;
  if (param_2 - 1U < 4) {
    uVar1 = *(undefined4 *)(&DAT_14a3504b4 + (ulonglong)(param_2 - 1U) * 4);
  }
  local_30 = param_8;
  local_40 = param_6;
  local_48 = param_5;
  local_50 = 0x7fffffff;
  local_58 = 0;
  local_24[0] = param_2;
  FUN_140a6e772(param_1,local_24,param_3,uVar1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631a33a FUN_14631a33a body=39 status=ok
// SIG undefined FUN_14631a33a(void)

undefined8 * FUN_14631a33a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631a362 FUN_14631a362 body=95 status=ok
// SIG undefined FUN_14631a362(void)

void FUN_14631a362(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14631a3c2 FUN_14631a3c2 body=48 status=ok
// SIG undefined FUN_14631a3c2(void)

void FUN_14631a3c2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14631a3f2 FUN_14631a3f2 body=231 status=ok
// SIG undefined FUN_14631a3f2(void)

void FUN_14631a3f2(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a3554c0;
  local_28[3] = &DAT_14ca775a0;
  local_28[4] = FUN_145a24b34;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631a4da FUN_14631a4da body=71 status=ok
// SIG undefined FUN_14631a4da(void)

undefined8 FUN_14631a4da(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_2 < 0x200) {
    if (param_2 != 0) {
      uVar1 = FUN_14001cc68(param_2 * 8,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_2 * 8);
  return uVar1;
}



// FUNCTION 14631a522 FUN_14631a522 body=93 status=ok
// SIG undefined FUN_14631a522(void)

void FUN_14631a522(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3554c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14631a580 FUN_14631a580 body=132 status=ok
// SIG undefined FUN_14631a580(void)

void FUN_14631a580(longlong param_1,int param_2)

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



// FUNCTION 14631a604 FUN_14631a604 body=29 status=ok
// SIG undefined FUN_14631a604(void)

undefined8 FUN_14631a604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631a622 FUN_14631a622 body=132 status=ok
// SIG undefined FUN_14631a622(void)

void FUN_14631a622(longlong param_1,int param_2)

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



// FUNCTION 14631a6a6 FUN_14631a6a6 body=29 status=ok
// SIG undefined FUN_14631a6a6(void)

undefined8 FUN_14631a6a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631a6c4 FUN_14631a6c4 body=29 status=ok
// SIG undefined FUN_14631a6c4(void)

undefined8 FUN_14631a6c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631a6e2 FUN_14631a6e2 body=29 status=ok
// SIG undefined FUN_14631a6e2(void)

undefined8 FUN_14631a6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631a700 FUN_14631a700 body=29 status=ok
// SIG undefined FUN_14631a700(void)

undefined8 FUN_14631a700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631a71e FUN_14631a71e body=231 status=ok
// SIG undefined FUN_14631a71e(void)

void FUN_14631a71e(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a369850;
  local_28[3] = &DAT_14ca787d8;
  local_28[4] = FUN_1473d048c;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631a806 FUN_14631a806 body=93 status=ok
// SIG undefined FUN_14631a806(void)

void FUN_14631a806(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a369850;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14631a864 FUN_14631a864 body=130 status=ok
// SIG undefined FUN_14631a864(void)

undefined1 * FUN_14631a864(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145f9b842;
}



// FUNCTION 14631a8e6 FUN_14631a8e6 body=231 status=ok
// SIG undefined FUN_14631a8e6(void)

void FUN_14631a8e6(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14a3712a0;
  local_28[3] = &DAT_14ca79688;
  local_28[4] = FUN_1473f5e98;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631a9ce FUN_14631a9ce body=70 status=ok
// SIG undefined FUN_14631a9ce(void)

void FUN_14631a9ce(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  while (puVar4 = DAT_14ca79808, DAT_14ca79808 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*DAT_14ca79808;
    puVar3 = (undefined8 *)DAT_14ca79808[1];
    DAT_14ca79808 = puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_1400020a8(puVar4);
  }
  return;
}



// FUNCTION 14631aa14 FUN_14631aa14 body=93 status=ok
// SIG undefined FUN_14631aa14(void)

void FUN_14631aa14(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3712a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14631aa72 FUN_14631aa72 body=24 status=ok
// SIG undefined FUN_14631aa72(void)

void FUN_14631aa72(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14a377ce0;
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14631aa8a FUN_14631aa8a body=78 status=ok
// SIG undefined FUN_14631aa8a(void)

int FUN_14631aa8a(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  cVar1 = FUN_1403966e6();
  if (cVar1 == '\0') {
    iVar3 = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
    lVar2 = FUN_140f058b4(param_1);
    if (lVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar2 + 0x38) - *(int *)(lVar2 + 100);
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
  }
  return iVar3;
}



// FUNCTION 14631aad8 FUN_14631aad8 body=108 status=ok
// SIG undefined FUN_14631aad8(void)

undefined8 FUN_14631aad8(undefined8 param_1,code *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1403966e6();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    uVar2 = DAT_14ca80690;
    PTR_FUN_14c760d68 = FUN_147404bcb;
    if (param_2 != (code *)0x0) {
      PTR_FUN_14c760d68 = param_2;
    }
    DAT_14ca80698 = 1;
    DAT_14ca80690 = param_1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  }
  return uVar2;
}



// FUNCTION 14631ab44 FUN_14631ab44 body=456 status=ok
// SIG undefined FUN_14631ab44(void)

longlong * FUN_14631ab44(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  puVar2 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = (uint *)(param_2 + 1);
  puVar3 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 0xc),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0xc) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar5 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_1402ac1b3(param_1,(longlong)param_2 + 0x14);
  puVar2 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[5] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  if (0x15 < *puVar1) {
    FUN_1408383eb(param_1,param_2 + 6);
  }
  return param_1;
}



// FUNCTION 14631ad0c FUN_14631ad0c body=505 status=ok
// SIG undefined FUN_14631ad0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631ad0c(void)

{
  longlong lVar1;
  
  DAT_14ca808d8 = 0;
  uRam000000014ca808e0 = 0;
  DAT_14ca808c8 = 0;
  uRam000000014ca808d0 = 0;
  _DAT_14ca808e8 = TlsAlloc();
  _DAT_14ca80910 = 0;
  _DAT_14ca80918 = 0;
  _DAT_14ca808f0 = 0;
  uRam000000014ca808f8 = 0;
  _DAT_14ca8091c = 0xffffffff00000080;
  _DAT_14ca80924 = 0;
  DAT_14ca80930 = 0;
  _DAT_14ca80938 = 0;
  _DAT_14ca80960 = 0;
  _DAT_14ca80968 = 0;
  _DAT_14ca80940 = 0;
  uRam000000014ca80948 = 0;
  _DAT_14ca8096c = 0xffffffff00000080;
  _DAT_14ca80974 = 0;
  DAT_14ca80980 = 0;
  _DAT_14ca80988 = 0;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)&DAT_14ca809b0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14ca809b8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14ca80990 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14ca80998) = 0;
    *(undefined8 *)((longlong)&DAT_14ca809bc + lVar1) = 0xffffffff00000080;
    *(undefined4 *)((longlong)&DAT_14ca809c4 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14ca809d0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14ca809d8 + lVar1) = 0;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0x140);
  _DAT_14ca80ad0 = &DAT_14ca80990;
  _DAT_14ca80ad8 = &DAT_14ca809e0;
  DAT_14ca80ae0 = &DAT_14ca80a30;
  DAT_14ca80ae8 = &DAT_14ca80a80;
  DAT_14ca80af0 = 0;
  uRam000000014ca80af8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80b00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca80b00,4000);
  DAT_14ca80b28 = 0;
  uRam000000014ca80b30 = 0;
  DAT_14ca80b38 = 0;
  uRam000000014ca80b40 = 0;
  DAT_14ca80b48 = 0;
  uRam000000014ca80b50 = 0;
  DAT_14ca80b58 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14ca80b60);
  DAT_14ca80b80 = (undefined8 *)0x0;
  DAT_14ca80b68 = 0;
  _DAT_14ca80b70 = 0;
  _DAT_14ca80b78 = 0;
  DAT_14ca80b80 = (undefined8 *)FUN_14001cc68(0x10,8);
  *DAT_14ca80b80 = 0;
  DAT_14ca80ba0 = (undefined8 *)0x0;
  _DAT_14ca80b88 = DAT_14ca80b80;
  DAT_14ca80b90 = DAT_14ca80b80;
  _DAT_14ca80b98 = DAT_14ca80b80;
  DAT_14ca80ba0 = (undefined8 *)FUN_14001cc68(0x10,8);
  *DAT_14ca80ba0 = 0;
  _DAT_14ca80bb8 = DAT_14ca80ba0;
  DAT_14ca80bb0 = DAT_14ca80ba0;
  _DAT_14ca80ba8 = DAT_14ca80ba0;
  _DAT_14ca80bc0 = 0;
  return;
}



// FUNCTION 14631af06 FUN_14631af06 body=505 status=ok
// SIG undefined FUN_14631af06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631af06(void)

{
  longlong lVar1;
  
  DAT_14ca80bd8 = 0;
  _DAT_14ca80be0 = 0;
  DAT_14ca80bc8 = 0;
  _DAT_14ca80bd0 = 0;
  _DAT_14ca80be8 = TlsAlloc();
  _DAT_14ca80c10 = 0;
  _DAT_14ca80c18 = 0;
  _DAT_14ca80bf0 = 0;
  uRam000000014ca80bf8 = 0;
  _DAT_14ca80c1c = 0xffffffff00000080;
  _DAT_14ca80c24 = 0;
  DAT_14ca80c30 = 0;
  _DAT_14ca80c38 = 0;
  _DAT_14ca80c60 = 0;
  _DAT_14ca80c68 = 0;
  _DAT_14ca80c40 = 0;
  uRam000000014ca80c48 = 0;
  _DAT_14ca80c6c = 0xffffffff00000080;
  _DAT_14ca80c74 = 0;
  DAT_14ca80c80 = 0;
  _DAT_14ca80c88 = 0;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)&DAT_14ca80cb0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14ca80cb8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14ca80c90 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14ca80c98) = 0;
    *(undefined8 *)((longlong)&DAT_14ca80cbc + lVar1) = 0xffffffff00000080;
    *(undefined4 *)((longlong)&DAT_14ca80cc4 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14ca80cd0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14ca80cd8 + lVar1) = 0;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0x140);
  _DAT_14ca80dd0 = &DAT_14ca80c90;
  _DAT_14ca80dd8 = &DAT_14ca80ce0;
  DAT_14ca80de0 = &DAT_14ca80d30;
  DAT_14ca80de8 = &DAT_14ca80d80;
  DAT_14ca80df0 = 0;
  uRam000000014ca80df8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80e00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca80e00,4000);
  DAT_14ca80e28 = 0;
  uRam000000014ca80e30 = 0;
  DAT_14ca80e38 = 0;
  uRam000000014ca80e40 = 0;
  DAT_14ca80e48 = 0;
  uRam000000014ca80e50 = 0;
  DAT_14ca80e58 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14ca80e60);
  DAT_14ca80e80 = (undefined8 *)0x0;
  DAT_14ca80e68 = 0;
  _DAT_14ca80e70 = 0;
  _DAT_14ca80e78 = 0;
  DAT_14ca80e80 = (undefined8 *)FUN_14001cc68(0x60,8);
  *DAT_14ca80e80 = 0;
  DAT_14ca80ea0 = (undefined8 *)0x0;
  _DAT_14ca80e88 = DAT_14ca80e80;
  DAT_14ca80e90 = DAT_14ca80e80;
  _DAT_14ca80e98 = DAT_14ca80e80;
  DAT_14ca80ea0 = (undefined8 *)FUN_14001cc68(0x10,8);
  *DAT_14ca80ea0 = 0;
  _DAT_14ca80eb8 = DAT_14ca80ea0;
  DAT_14ca80eb0 = DAT_14ca80ea0;
  _DAT_14ca80ea8 = DAT_14ca80ea0;
  _DAT_14ca80ec0 = 0;
  return;
}



// FUNCTION 14631b100 FUN_14631b100 body=505 status=ok
// SIG undefined FUN_14631b100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631b100(void)

{
  longlong lVar1;
  
  DAT_14ca80ed8 = 0;
  uRam000000014ca80ee0 = 0;
  DAT_14ca80ec8 = 0;
  uRam000000014ca80ed0 = 0;
  _DAT_14ca80ee8 = TlsAlloc();
  _DAT_14ca80f10 = 0;
  _DAT_14ca80f18 = 0;
  _DAT_14ca80ef0 = 0;
  uRam000000014ca80ef8 = 0;
  _DAT_14ca80f1c = 0xffffffff00000080;
  _DAT_14ca80f24 = 0;
  DAT_14ca80f30 = 0;
  _DAT_14ca80f38 = 0;
  _DAT_14ca80f60 = 0;
  _DAT_14ca80f68 = 0;
  _DAT_14ca80f40 = 0;
  uRam000000014ca80f48 = 0;
  _DAT_14ca80f6c = 0xffffffff00000080;
  _DAT_14ca80f74 = 0;
  DAT_14ca80f80 = 0;
  _DAT_14ca80f88 = 0;
  lVar1 = 0;
  do {
    *(undefined8 *)((longlong)&DAT_14ca80fb0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14ca80fb8 + lVar1) = 0;
    *(undefined8 *)(&DAT_14ca80f90 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14ca80f98) = 0;
    *(undefined8 *)((longlong)&DAT_14ca80fbc + lVar1) = 0xffffffff00000080;
    *(undefined4 *)((longlong)&DAT_14ca80fc4 + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14ca80fd0 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14ca80fd8 + lVar1) = 0;
    lVar1 = lVar1 + 0x50;
  } while (lVar1 != 0x140);
  _DAT_14ca810d0 = &DAT_14ca80f90;
  _DAT_14ca810d8 = &DAT_14ca80fe0;
  DAT_14ca810e0 = &DAT_14ca81030;
  DAT_14ca810e8 = &DAT_14ca81080;
  DAT_14ca810f0 = 0;
  uRam000000014ca810f8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81100);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca81100,4000);
  DAT_14ca81128 = 0;
  uRam000000014ca81130 = 0;
  DAT_14ca81138 = 0;
  uRam000000014ca81140 = 0;
  DAT_14ca81148 = 0;
  uRam000000014ca81150 = 0;
  DAT_14ca81158 = 0;
  InitializeSRWLock((PSRWLOCK)&DAT_14ca81160);
  DAT_14ca81180 = (undefined8 *)0x0;
  DAT_14ca81168 = 0;
  _DAT_14ca81170 = 0;
  _DAT_14ca81178 = 0;
  DAT_14ca81180 = (undefined8 *)FUN_14001cc68(0xe0,8);
  *DAT_14ca81180 = 0;
  DAT_14ca811a0 = (undefined8 *)0x0;
  _DAT_14ca81188 = DAT_14ca81180;
  DAT_14ca81190 = DAT_14ca81180;
  _DAT_14ca81198 = DAT_14ca81180;
  DAT_14ca811a0 = (undefined8 *)FUN_14001cc68(0x10,8);
  *DAT_14ca811a0 = 0;
  _DAT_14ca811b8 = DAT_14ca811a0;
  DAT_14ca811b0 = DAT_14ca811a0;
  _DAT_14ca811a8 = DAT_14ca811a0;
  _DAT_14ca811c0 = 0;
  return;
}



// FUNCTION 14631b2fa FUN_14631b2fa body=473 status=ok
// SIG undefined FUN_14631b2fa(void)

undefined4 * FUN_14631b2fa(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  pvVar2 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14631b4d4 FUN_14631b4d4 body=53 status=ok
// SIG undefined FUN_14631b4d4(void)

void FUN_14631b4d4(longlong *param_1)

{
  FUN_145aa1914();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14631b50a FUN_14631b50a body=29 status=ok
// SIG undefined FUN_14631b50a(void)

undefined8 FUN_14631b50a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631b528 FUN_14631b528 body=55 status=ok
// SIG undefined FUN_14631b528(void)

void FUN_14631b528(longlong *param_1)

{
  FUN_1414251e6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14631b560 FUN_14631b560 body=54 status=ok
// SIG undefined FUN_14631b560(void)

void FUN_14631b560(void)

{
  FUN_145c3880c();
  if (DAT_14ca805c8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca805a8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14631b596 FUN_14631b596 body=52 status=ok
// SIG undefined FUN_14631b596(void)

void FUN_14631b596(void)

{
  if (1 < DAT_14ca805a0) {
    FUN_145bcfe74();
    DAT_14ca805a0 = 1;
    FUN_14151e62c();
    return;
  }
  FUN_14740e38a();
  FUN_145bcfe74();
  return;
}



// FUNCTION 14631b5ca FUN_14631b5ca body=19 status=ok
// SIG undefined FUN_14631b5ca(void)

void FUN_14631b5ca(undefined8 param_1)

{
  FUN_141434525(param_1,L"BindlessSamplers",&DAT_14ca83b58);
  return;
}



// FUNCTION 14631b5dd FUN_14631b5dd body=241 status=ok
// SIG undefined FUN_14631b5dd(void)

undefined8 FUN_14631b5dd(undefined4 *param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca83b7c) && (FUN_144b3d300(&DAT_14ca83b7c), DAT_14ca83b7c == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"FeatureLevelES31");
    if (cVar1 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14ca83b78 = FUN_14054d46e(&DAT_14c846b20,L"FeatureLevelES3_1");
    }
    else {
      DAT_14ca83b78 = '\x01';
    }
    _Init_thread_footer(&DAT_14ca83b7c);
  }
  if (DAT_14ca83b78 == '\0') {
    uVar2 = (ulonglong)DAT_14c760da8;
    if (DAT_14c760da8 == 5) {
      return 0;
    }
  }
  else {
    uVar2 = 1;
  }
  *param_1 = (int)uVar2;
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 14631b6ce FUN_14631b6ce body=82 status=ok
// SIG undefined FUN_14631b6ce(void)

void FUN_14631b6ce(void)

{
  if (DAT_14ca84dd0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca84dc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca84db0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca84da0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14631b720 FUN_14631b720 body=52 status=ok
// SIG undefined FUN_14631b720(void)

undefined8 FUN_14631b720(undefined8 param_1,uint param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 < 5) {
    pwVar1 = (wchar_t *)(&PTR_u_ES2_REMOVED_14a3811b8)[param_2];
  }
  else {
    pwVar1 = L"UnknownFeatureLevel";
  }
  FUN_140056680(param_1,pwVar1);
  return param_1;
}



// FUNCTION 14631b754 FUN_14631b754 body=44 status=ok
// SIG undefined FUN_14631b754(void)

void FUN_14631b754(uint param_1,undefined8 param_2)

{
  if (param_1 < 5) {
    FUN_14020fad6(param_2,(&PTR_DAT_14a37fcd0)[param_1]);
    return;
  }
  FUN_14020fad6(param_2,L"InvalidFeatureLevel");
  return;
}



// FUNCTION 14631b780 FUN_14631b780 body=387 status=ok
// SIG undefined FUN_14631b780(void)

uint FUN_14631b780(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"preferAMD");
  if (cVar1 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"preferIntel");
    if (cVar1 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      cVar1 = FUN_14054d46e(&DAT_14c846b20,L"preferNvidia");
      if (cVar1 == '\0') {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar1 = FUN_14054d46e(&DAT_14c846b20,L"preferMS");
        if (cVar1 == '\0') {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar2 = FUN_14054d46e(&DAT_14c846b20,L"preferMicrosoft");
          uVar3 = bVar2 - 1 | 0x1414;
        }
        else {
          uVar3 = 0x1414;
        }
      }
      else {
        uVar3 = 0x10de;
      }
    }
    else {
      uVar3 = 0x8086;
    }
  }
  else {
    uVar3 = 0x1002;
  }
  return uVar3;
}



// FUNCTION 14631b904 FUN_14631b904 body=38 status=ok
// SIG undefined FUN_14631b904(void)

undefined8 FUN_14631b904(undefined8 param_1,int param_2)

{
  FUN_14003821a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14631b92a FUN_14631b92a body=114 status=ok
// SIG undefined FUN_14631b92a(void)

undefined8 FUN_14631b92a(void)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1408be3a6(&local_14,&local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_14);
    DAT_14ca85570 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631b9a0 FUN_14631b9a0 body=84 status=ok
// SIG undefined FUN_14631b9a0(void)

void FUN_14631b9a0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 * 2,2);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 1)) {
    uVar2 = uVar1 >> 1 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,2,2);
  }
  return;
}



// FUNCTION 14631b9f4 FUN_14631b9f4 body=86 status=ok
// SIG undefined FUN_14631b9f4(void)

void FUN_14631b9f4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 14631ba4a FUN_14631ba4a body=49 status=ok
// SIG undefined FUN_14631ba4a(void)

longlong FUN_14631ba4a(void)

{
  if (DAT_14ca855a0 == 0) {
    FUN_140f50038(&DAT_14ca855a0,&PTR_s__Script_RenderCore_14a38245e_2_14a382440);
  }
  return DAT_14ca855a0;
}



// FUNCTION 14631ba7b FUN_14631ba7b body=49 status=ok
// SIG undefined FUN_14631ba7b(void)

longlong FUN_14631ba7b(void)

{
  if (DAT_14ca855b0 == 0) {
    FUN_1409ce572(&DAT_14ca855b0,&PTR_FUN_14a382540);
  }
  return DAT_14ca855b0;
}



// FUNCTION 14631baac FUN_14631baac body=47 status=ok
// SIG undefined FUN_14631baac(void)

longlong FUN_14631baac(void)

{
  if (DAT_14ca855c8 == 0) {
    FUN_1409ce572(&DAT_14ca855c8,&PTR_FUN_14a3825c0);
  }
  return DAT_14ca855c8;
}



// FUNCTION 14631badc FUN_14631badc body=68 status=ok
// SIG undefined FUN_14631badc(void)

longlong FUN_14631badc(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14ca855e0);
  if (iVar1 < 1) {
    lVar3 = 0;
  }
  else {
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14ca855e0,0);
    lVar3 = lVar3 + -8;
  }
  return lVar3;
}



// FUNCTION 14631bb38 FUN_14631bb38 body=71 status=ok
// SIG undefined FUN_14631bb38(void)

undefined8 FUN_14631bb38(undefined2 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1448944a0(&local_11,*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_11) & 0xffffffffffffff04;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631bb80 FUN_14631bb80 body=70 status=ok
// SIG undefined FUN_14631bb80(void)

undefined8 FUN_14631bb80(undefined2 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1448944a0(&local_11,*param_1);
  uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_11) & 0xffffffffffffff02;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631bbc8 FUN_14631bbc8 body=177 status=ok
// SIG undefined FUN_14631bbc8(void)

undefined8 * FUN_14631bbc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a384700;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[5] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[6] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[7] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[4] = puVar1;
  return param_1;
}



// FUNCTION 14631bc80 FUN_14631bc80 body=114 status=ok
// SIG undefined FUN_14631bc80(void)

void FUN_14631bc80(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144761492(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_145804ca2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14631bd2e FUN_14631bd2e body=67 status=ok
// SIG undefined FUN_14631bd2e(void)

void FUN_14631bd2e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a384b40;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 14631bd72 FUN_14631bd72 body=65 status=ok
// SIG undefined FUN_14631bd72(void)

void FUN_14631bd72(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 14631bdb4 FUN_14631bdb4 body=67 status=ok
// SIG undefined FUN_14631bdb4(void)

void FUN_14631bdb4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a384ba0;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a80d50(param_1);
  return;
}



// FUNCTION 14631bdf8 FUN_14631bdf8 body=65 status=ok
// SIG undefined FUN_14631bdf8(void)

void FUN_14631bdf8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14010eabe(param_1);
  return;
}



// FUNCTION 14631be3a FUN_14631be3a body=730 status=ok
// SIG undefined FUN_14631be3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14631be3a(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FScreenSpaceVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x20;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 != &local_90) {
    lVar4 = *plVar10;
    *plVar10 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_14631bf2c;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14631bf2c:
  lVar4 = *plVar10;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x20;
  puVar9 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8c0e0) {
    FUN_144b3d300(&DAT_14ca8c0e0);
    if (DAT_14ca8c0e0 == -1) {
      _DAT_14ca8c0c0 = 0xbf800000bf800000;
      uRam000000014ca8c0c8 = 0x3f800000bf800000;
      _DAT_14ca8c0d0 = 0x3f800000;
      uRam000000014ca8c0d4 = 0xbf800000;
      uRam000000014ca8c0d8 = 0x3f800000;
      uRam000000014ca8c0dc = 0x3f800000;
      _Init_thread_footer(&DAT_14ca8c0e0);
    }
  }
  uVar5 = CONCAT44(uRam000000014ca8c0dc,uRam000000014ca8c0d8);
  *(ulonglong *)(puVar9 + 4) = CONCAT44(uRam000000014ca8c0d4,_DAT_14ca8c0d0);
  *(undefined8 *)(puVar9 + 6) = uVar5;
  uVar6 = DAT_14ca8c0c0_4;
  uVar7 = (undefined4)uRam000000014ca8c0c8;
  uVar8 = uRam000000014ca8c0c8._4_4_;
  *puVar9 = _DAT_14ca8c0c0;
  puVar9[1] = uVar6;
  puVar9[2] = uVar7;
  puVar9[3] = uVar8;
  lVar4 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631c116 FUN_14631c116 body=67 status=ok
// SIG undefined FUN_14631c116(void)

void FUN_14631c116(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a384c30;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631c15a FUN_14631c15a body=278 status=ok
// SIG undefined FUN_14631c15a(void)

ulonglong FUN_14631c15a(longlong *param_1)

{
  longlong *plVar1;
  ulonglong unaff_RBX;
  int iVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c == iVar2) && (uStack_48 == plVar1)) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
    do {
      bVar3 = *(int *)(*(longlong *)
                        (*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 0x28) + 0x40)
              == 0;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar3);
      if (!bVar3) break;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14631c272 FUN_14631c272 body=67 status=ok
// SIG undefined FUN_14631c272(void)

void FUN_14631c272(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a385160;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631c2b6 FUN_14631c2b6 body=167 status=ok
// SIG undefined FUN_14631c2b6(void)

void FUN_14631c2b6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x2000040000;
  local_18 = 0x1100000002;
  local_98 = 0x2001021000;
  lVar4 = FUN_14486d71a();
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != lVar4) {
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
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
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14631c35e FUN_14631c35e body=72 status=ok
// SIG undefined FUN_14631c35e(void)

void FUN_14631c35e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a387260;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631c3a6 FUN_14631c3a6 body=72 status=ok
// SIG undefined FUN_14631c3a6(void)

void FUN_14631c3a6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a387290;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 14631c3ee FUN_14631c3ee body=136 status=ok
// SIG undefined FUN_14631c3ee(void)

code * FUN_14631c3ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d2cac0;
}



// FUNCTION 14631c476 FUN_14631c476 body=136 status=ok
// SIG undefined FUN_14631c476(void)

undefined1 * FUN_14631c476(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1415384ac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BinkParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBinkParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x58;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145f99574;
}



// FUNCTION 14631c4fe FUN_14631c4fe body=136 status=ok
// SIG undefined FUN_14631c4fe(void)

undefined1 * FUN_14631c4fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1415384ac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BinkParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBinkParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x71;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145f9ada0;
}



// FUNCTION 14631c586 FUN_14631c586 body=136 status=ok
// SIG undefined FUN_14631c586(void)

code * FUN_14631c586(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145a5e9a8;
}



// FUNCTION 14631c60e FUN_14631c60e body=136 status=ok
// SIG undefined FUN_14631c60e(void)

code * FUN_14631c60e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422cc8;
}



// FUNCTION 14631c696 FUN_14631c696 body=130 status=ok
// SIG undefined FUN_14631c696(void)

undefined1 * FUN_14631c696(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HalfTexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145eb8a0c;
}



// FUNCTION 14631c718 FUN_14631c718 body=136 status=ok
// SIG undefined FUN_14631c718(void)

code * FUN_14631c718(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectDispatchArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147422d52;
}



// FUNCTION 14631c7a0 FUN_14631c7a0 body=136 status=ok
// SIG undefined FUN_14631c7a0(void)

code * FUN_14631c7a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchArgsBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f98db8;
}



// FUNCTION 14631c828 FUN_14631c828 body=130 status=ok
// SIG undefined FUN_14631c828(void)

undefined1 * FUN_14631c828(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageFaultUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145f999e0;
}



// FUNCTION 14631c8aa FUN_14631c8aa body=130 status=ok
// SIG undefined FUN_14631c8aa(void)

undefined1 * FUN_14631c8aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUMessageDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145f971ca;
}



// FUNCTION 14631c92c FUN_14631c92c body=136 status=ok
// SIG undefined FUN_14631c92c(void)

code * FUN_14631c92c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3fe16;
}



// FUNCTION 14631c9b4 FUN_14631c9b4 body=136 status=ok
// SIG undefined FUN_14631c9b4(void)

code * FUN_14631c9b4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e38492;
}



// FUNCTION 14631ca3c FUN_14631ca3c body=136 status=ok
// SIG undefined FUN_14631ca3c(void)

code * FUN_14631ca3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474234d4;
}



// FUNCTION 14631cac4 FUN_14631cac4 body=136 status=ok
// SIG undefined FUN_14631cac4(void)

code * FUN_14631cac4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474235e8;
}



// FUNCTION 14631cb4c FUN_14631cb4c body=136 status=ok
// SIG undefined FUN_14631cb4c(void)

code * FUN_14631cb4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000110;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742380e;
}



// FUNCTION 14631cbd4 FUN_14631cbd4 body=136 status=ok
// SIG undefined FUN_14631cbd4(void)

code * FUN_14631cbd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SwapChroma";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c0000010c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474239ac;
}



// FUNCTION 14631cc5c FUN_14631cc5c body=136 status=ok
// SIG undefined FUN_14631cc5c(void)

code * FUN_14631cc5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000135;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423abe;
}



// FUNCTION 14631cce4 FUN_14631cce4 body=136 status=ok
// SIG undefined FUN_14631cce4(void)

code * FUN_14631cce4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa80000015a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4012a;
}



// FUNCTION 14631cd6c FUN_14631cd6c body=136 status=ok
// SIG undefined FUN_14631cd6c(void)

code * FUN_14631cd6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000156;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423d74;
}



// FUNCTION 14631cdf4 FUN_14631cdf4 body=136 status=ok
// SIG undefined FUN_14631cdf4(void)

code * FUN_14631cdf4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000180;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423f0c;
}



// FUNCTION 14631ce7c FUN_14631ce7c body=136 status=ok
// SIG undefined FUN_14631ce7c(void)

code * FUN_14631ce7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidthUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xbc000001a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474241bc;
}



// FUNCTION 14631cf04 FUN_14631cf04 body=136 status=ok
// SIG undefined FUN_14631cf04(void)

code * FUN_14631cf04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x64000001d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9c956;
}



// FUNCTION 14631cf8c FUN_14631cf8c body=136 status=ok
// SIG undefined FUN_14631cf8c(void)

code * FUN_14631cf8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x64000001f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424722;
}



// FUNCTION 14631d014 FUN_14631d014 body=136 status=ok
// SIG undefined FUN_14631d014(void)

code * FUN_14631d014(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e570;
}



// FUNCTION 14631d09c FUN_14631d09c body=136 status=ok
// SIG undefined FUN_14631d09c(void)

code * FUN_14631d09c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CbCrSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000215;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9ea12;
}



// FUNCTION 14631d124 FUN_14631d124 body=136 status=ok
// SIG undefined FUN_14631d124(void)

code * FUN_14631d124(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000211;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9e904;
}



// FUNCTION 14631d1ac FUN_14631d1ac body=136 status=ok
// SIG undefined FUN_14631d1ac(void)

code * FUN_14631d1ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000023a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f9cce8;
}


