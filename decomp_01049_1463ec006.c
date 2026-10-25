// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463ec006 FUN_1463ec006 body=72 status=ok
// SIG undefined FUN_1463ec006(void)

void FUN_1463ec006(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a9e47c0;
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



// FUNCTION 1463ec04e FUN_1463ec04e body=72 status=ok
// SIG undefined FUN_1463ec04e(void)

void FUN_1463ec04e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a9e47f0;
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



// FUNCTION 1463ec096 FUN_1463ec096 body=40 status=ok
// SIG undefined FUN_1463ec096(void)

undefined8 FUN_1463ec096(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec0be FUN_1463ec0be body=40 status=ok
// SIG undefined FUN_1463ec0be(void)

undefined8 FUN_1463ec0be(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec0e6 FUN_1463ec0e6 body=40 status=ok
// SIG undefined FUN_1463ec0e6(void)

undefined8 FUN_1463ec0e6(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec10e FUN_1463ec10e body=40 status=ok
// SIG undefined FUN_1463ec10e(void)

undefined8 FUN_1463ec10e(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec136 FUN_1463ec136 body=40 status=ok
// SIG undefined FUN_1463ec136(void)

undefined8 FUN_1463ec136(undefined8 param_1,int param_2)

{
  FUN_141462d4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec15e FUN_1463ec15e body=40 status=ok
// SIG undefined FUN_1463ec15e(void)

undefined8 FUN_1463ec15e(undefined8 param_1,int param_2)

{
  FUN_141462d4a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec186 FUN_1463ec186 body=29 status=ok
// SIG undefined FUN_1463ec186(void)

undefined8 FUN_1463ec186(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec1a4 FUN_1463ec1a4 body=107 status=ok
// SIG undefined FUN_1463ec1a4(void)

longlong * FUN_1463ec1a4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  iVar1 = (int)param_2[2] + -1;
  if ((int)param_2[2] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 1,param_2[1],iVar1);
  param_1[3] = param_2[3];
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  *(short *)(param_1 + 6) = (short)param_2[6];
  return param_1;
}



// FUNCTION 1463ec210 FUN_1463ec210 body=136 status=ok
// SIG undefined FUN_1463ec210(void)

code * FUN_1463ec210(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UseVelocityForMotionBlur";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147bcdc10;
}



// FUNCTION 1463ec298 FUN_1463ec298 body=136 status=ok
// SIG undefined FUN_1463ec298(void)

code * FUN_1463ec298(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevTransformAvailable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147bcdd24;
}



// FUNCTION 1463ec320 FUN_1463ec320 body=67 status=ok
// SIG undefined FUN_1463ec320(void)

undefined8 * FUN_1463ec320(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9e5330;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ec364 FUN_1463ec364 body=71 status=ok
// SIG undefined FUN_1463ec364(void)

void FUN_1463ec364(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf1735 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463ec396. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf1728 + 0x18))(&DAT_14caf1728,uVar1,*(code **)(DAT_14caf1728 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf1728,0);
  return;
}



// FUNCTION 1463ec3ac FUN_1463ec3ac body=106 status=ok
// SIG undefined FUN_1463ec3ac(void)

void FUN_1463ec3ac(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
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
      return;
    }
  }
  return;
}



// FUNCTION 1463ec416 FUN_1463ec416 body=103 status=ok
// SIG undefined FUN_1463ec416(void)

void FUN_1463ec416(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a9e4a40;
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



// FUNCTION 1463ec47e FUN_1463ec47e body=101 status=ok
// SIG undefined FUN_1463ec47e(void)

void FUN_1463ec47e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9e4dc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9e4d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1463ec4e4 FUN_1463ec4e4 body=55 status=ok
// SIG undefined FUN_1463ec4e4(void)

void FUN_1463ec4e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf20d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf20d8 = FUN_140002ddd(FUN_1463ec51b,uVar1,L"PacketSimulationSettings");
  }
  return;
}



// FUNCTION 1463ec51b FUN_1463ec51b body=47 status=ok
// SIG undefined FUN_1463ec51b(void)

longlong FUN_1463ec51b(void)

{
  if (DAT_14caf20d0 == 0) {
    FUN_14086a14e(&DAT_14caf20d0,&PTR_FUN_14a9e5988);
  }
  return DAT_14caf20d0;
}



// FUNCTION 1463ec54a FUN_1463ec54a body=48 status=ok
// SIG undefined FUN_1463ec54a(void)

void FUN_1463ec54a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000003c;
  *puVar1 = &PTR_FUN_14a9edfa0;
  return;
}



// FUNCTION 1463ec57a FUN_1463ec57a body=55 status=ok
// SIG undefined FUN_1463ec57a(void)

void FUN_1463ec57a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf20f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf20f0 = FUN_140002ddd(FUN_1463ec5b1,uVar1,L"NetDriverReplicationSystemConfig");
  }
  return;
}



// FUNCTION 1463ec5b1 FUN_1463ec5b1 body=49 status=ok
// SIG undefined FUN_1463ec5b1(void)

longlong FUN_1463ec5b1(void)

{
  if (DAT_14caf20e8 == 0) {
    FUN_14086a14e(&DAT_14caf20e8,&PTR_FUN_14a9e5cc0);
  }
  return DAT_14caf20e8;
}



// FUNCTION 1463ec5e2 FUN_1463ec5e2 body=48 status=ok
// SIG undefined FUN_1463ec5e2(void)

void FUN_1463ec5e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14a9ee100;
  return;
}



// FUNCTION 1463ec612 FUN_1463ec612 body=55 status=ok
// SIG undefined FUN_1463ec612(void)

void FUN_1463ec612(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2108 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2108 = FUN_140002ddd(FUN_1463ec649,uVar1,L"ChannelDefinition");
  }
  return;
}



// FUNCTION 1463ec649 FUN_1463ec649 body=49 status=ok
// SIG undefined FUN_1463ec649(void)

longlong FUN_1463ec649(void)

{
  if (DAT_14caf2100 == 0) {
    FUN_14086a14e(&DAT_14caf2100,&PTR_FUN_14a9e60c0);
  }
  return DAT_14caf2100;
}



// FUNCTION 1463ec67a FUN_1463ec67a body=48 status=ok
// SIG undefined FUN_1463ec67a(void)

void FUN_1463ec67a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14a9ee270;
  return;
}



// FUNCTION 1463ec6aa FUN_1463ec6aa body=47 status=ok
// SIG undefined FUN_1463ec6aa(void)

longlong FUN_1463ec6aa(void)

{
  if (DAT_14caf2120 == 0) {
    FUN_14073dd9a(&DAT_14caf2120,&PTR_LAB_14a9e6158);
  }
  return DAT_14caf2120;
}



// FUNCTION 1463ec6e4 FUN_1463ec6e4 body=47 status=ok
// SIG undefined FUN_1463ec6e4(void)

longlong FUN_1463ec6e4(void)

{
  if (DAT_14caf2138 == 0) {
    FUN_14073dd9a(&DAT_14caf2138,&PTR_LAB_14a9e7388);
  }
  return DAT_14caf2138;
}



// FUNCTION 1463ec714 FUN_1463ec714 body=153 status=ok
// SIG undefined FUN_1463ec714(void)

void FUN_1463ec714(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  
  param_1[6] = 0x401;
  if (param_1[7] + 0x1f < 0x420) {
    FUN_14499171c(param_1,0,0x21,4);
    param_1[7] = 0x420;
  }
  puVar3 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar3 = param_1;
  }
  memset(puVar3,0,0x84);
  uVar1 = param_1[6];
  uVar2 = uVar1 + 0x1f;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if ((int)uVar1 % 0x20 != 0) {
    puVar3 = *(uint **)(param_1 + 4);
    if (*(uint **)(param_1 + 4) == (uint *)0x0) {
      puVar3 = param_1;
    }
    bVar4 = -(char)((int)uVar1 % 0x20);
    puVar3[(int)uVar2 >> 5] = (puVar3[(int)uVar2 >> 5] << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
  puVar3 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar3 = param_1;
  }
  *puVar3 = *puVar3 | 1;
  return;
}



// FUNCTION 1463ec7ae FUN_1463ec7ae body=254 status=ok
// SIG undefined FUN_1463ec7ae(void)

undefined8
FUN_1463ec7ae(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14a1ca6c0;
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
  *local_48 = &PTR_FUN_14a9eea40;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1411df00c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ec8ae FUN_1463ec8ae body=161 status=ok
// SIG undefined FUN_1463ec8ae(void)

void FUN_1463ec8ae(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  FUN_1459a0c5c(puVar2,param_1);
  uVar1 = DAT_14c9995fc;
  uVar3 = FUN_14001cc68(0x88,0x10);
  FUN_1459a0c5c(uVar3,param_1);
  local_30 = uVar3;
  FUN_145bdc0c8(param_1,&local_30,uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ec950 FUN_1463ec950 body=187 status=ok
// SIG undefined FUN_1463ec950(void)

undefined8 FUN_1463ec950(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463eca0c FUN_1463eca0c body=143 status=ok
// SIG undefined FUN_1463eca0c(void)

void FUN_1463eca0c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_145974490(param_2);
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_14480f766(uVar1);
    }
    uVar1 = FUN_145974498(param_2);
    if (*(longlong *)(param_1 + 0x6c8) != 0) {
      FUN_14480f766(uVar1);
    }
    uVar1 = FUN_1459744a0(param_2);
    if (*(longlong *)(param_1 + 0x6d0) != 0) {
      FUN_14480f766(uVar1);
    }
    uVar1 = FUN_1459744a8(param_2);
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      FUN_14480f766(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1463eca9c FUN_1463eca9c body=312 status=ok
// SIG undefined FUN_1463eca9c(void)

void FUN_1463eca9c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0xa0);
  local_48 = param_1 + 0xb0;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_68 = local_40;
  iStack_64 = iStack_3c;
  local_60 = local_38;
  local_5c = local_34;
  local_78 = local_50;
  local_70 = local_48;
  local_80 = plVar1;
  local_58 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      FUN_140ae3264(param_1 + 0x50,&local_50,(longlong)iStack_64 * 0x18 + *local_80);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
  }
  FUN_145a0c516(plVar1,0);
  FUN_145a0c582(param_1 + 400,0);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ecbd6 FUN_1463ecbd6 body=113 status=ok
// SIG undefined FUN_1463ecbd6(void)

void FUN_1463ecbd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf2478) {
    FUN_144b3d300(&DAT_14caf2478);
    if (DAT_14caf2478 == -1) {
      DAT_14caf2468 = 0;
      DAT_14caf2470 = 0;
      atexit(FUN_14359f978);
      _Init_thread_footer(&DAT_14caf2478);
      return;
    }
  }
  return;
}



// FUNCTION 1463ecc48 FUN_1463ecc48 body=114 status=ok
// SIG undefined FUN_1463ecc48(void)

void FUN_1463ecc48(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) && ((longlong)*(int *)(param_1 + 0x210) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x208);
    lVar2 = (longlong)*(int *)(param_1 + 0x210) * 0x70;
    do {
      if (((*(byte *)(lVar3 + 0x1c) & 0x10) != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
        cVar1 = FUN_1413649be(param_1,lVar3);
        if (cVar1 != '\0') {
          FUN_141364a4a(*(undefined8 *)(param_1 + 0xf0),lVar3,2,*(undefined4 *)(lVar3 + 0x18));
        }
      }
      lVar3 = lVar3 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1463eccba FUN_1463eccba body=55 status=ok
// SIG undefined FUN_1463eccba(void)

void FUN_1463eccba(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf24e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf24e0 = FUN_140002ddd(FUN_1463eccf1,uVar1,L"NetworkEmulationProfileDescription");
  }
  return;
}



// FUNCTION 1463eccf1 FUN_1463eccf1 body=47 status=ok
// SIG undefined FUN_1463eccf1(void)

longlong FUN_1463eccf1(void)

{
  if (DAT_14caf24d8 == 0) {
    FUN_14086a14e(&DAT_14caf24d8,&PTR_FUN_14a9ea3f8);
  }
  return DAT_14caf24d8;
}



// FUNCTION 1463ecd20 FUN_1463ecd20 body=48 status=ok
// SIG undefined FUN_1463ecd20(void)

void FUN_1463ecd20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a9ee3e0;
  return;
}



// FUNCTION 1463ecd50 FUN_1463ecd50 body=114 status=ok
// SIG undefined FUN_1463ecd50(void)

void FUN_1463ecd50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9ea620;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_1446f470e(&local_20,L"Network",1);
  puVar1[6] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ecdc3 FUN_1463ecdc3 body=47 status=ok
// SIG undefined FUN_1463ecdc3(void)

longlong FUN_1463ecdc3(void)

{
  if (DAT_14caf24f8 == 0) {
    FUN_14073dd9a(&DAT_14caf24f8,&PTR_LAB_14a9ea5d8);
  }
  return DAT_14caf24f8;
}



// FUNCTION 1463ecdf8 FUN_1463ecdf8 body=55 status=ok
// SIG undefined FUN_1463ecdf8(void)

void FUN_1463ecdf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2518 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2518 = FUN_140002ddd(FUN_1463ece2f,uVar1,L"BandwidthTestItem");
  }
  return;
}



// FUNCTION 1463ece2f FUN_1463ece2f body=47 status=ok
// SIG undefined FUN_1463ece2f(void)

longlong FUN_1463ece2f(void)

{
  if (DAT_14caf2510 == 0) {
    FUN_14086a14e(&DAT_14caf2510,&PTR_FUN_14a9eaa38);
  }
  return DAT_14caf2510;
}



// FUNCTION 1463ece5e FUN_1463ece5e body=48 status=ok
// SIG undefined FUN_1463ece5e(void)

void FUN_1463ece5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a9ee540;
  return;
}



// FUNCTION 1463ece8e FUN_1463ece8e body=55 status=ok
// SIG undefined FUN_1463ece8e(void)

void FUN_1463ece8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2530 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2530 = FUN_140002ddd(FUN_1463ecec5,uVar1,L"BandwidthTestGenerator");
  }
  return;
}



// FUNCTION 1463ecec5 FUN_1463ecec5 body=47 status=ok
// SIG undefined FUN_1463ecec5(void)

longlong FUN_1463ecec5(void)

{
  if (DAT_14caf2528 == 0) {
    FUN_14086a14e(&DAT_14caf2528,&PTR_FUN_14a9eab58);
  }
  return DAT_14caf2528;
}



// FUNCTION 1463ecef4 FUN_1463ecef4 body=48 status=ok
// SIG undefined FUN_1463ecef4(void)

void FUN_1463ecef4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a9ee6b0;
  return;
}



// FUNCTION 1463ecf24 FUN_1463ecf24 body=74 status=ok
// SIG undefined FUN_1463ecf24(void)

void FUN_1463ecf24(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ee02c(puVar1);
  *puVar1 = &PTR_FUN_14a9eaca0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  *(byte *)((longlong)puVar1 + 99) = *(byte *)((longlong)puVar1 + 99) | 8;
  *(byte *)(puVar1 + 0xc) = *(byte *)(puVar1 + 0xc) | 8;
  FUN_1405ba932(puVar1,0);
  *(undefined1 *)((longlong)puVar1 + 0x179) = 0;
  return;
}



// FUNCTION 1463ecf6e FUN_1463ecf6e body=47 status=ok
// SIG undefined FUN_1463ecf6e(void)

longlong FUN_1463ecf6e(void)

{
  if (DAT_14caf2548 == 0) {
    FUN_14073dd9a(&DAT_14caf2548,&PTR_LAB_14a9eac38);
  }
  return DAT_14caf2548;
}



// FUNCTION 1463ecf9d FUN_1463ecf9d body=47 status=ok
// SIG undefined FUN_1463ecf9d(void)

longlong FUN_1463ecf9d(void)

{
  if (DAT_14caf25a0 == 0) {
    FUN_14073dd9a(&DAT_14caf25a0,&PTR_LAB_14a9eb648);
  }
  return DAT_14caf25a0;
}



// FUNCTION 1463ecfcc FUN_1463ecfcc body=47 status=ok
// SIG undefined FUN_1463ecfcc(void)

longlong FUN_1463ecfcc(void)

{
  if (DAT_14caf25e0 == 0) {
    FUN_14073dd9a(&DAT_14caf25e0,&PTR_LAB_14a9ebd38);
  }
  return DAT_14caf25e0;
}



// FUNCTION 1463ecffb FUN_1463ecffb body=47 status=ok
// SIG undefined FUN_1463ecffb(void)

longlong FUN_1463ecffb(void)

{
  if (DAT_14caf2658 == 0) {
    FUN_14073dd9a(&DAT_14caf2658,&PTR_LAB_14a9ecfe8);
  }
  return DAT_14caf2658;
}



// FUNCTION 1463ed02a FUN_1463ed02a body=47 status=ok
// SIG undefined FUN_1463ed02a(void)

longlong FUN_1463ed02a(void)

{
  if (DAT_14caf2730 == 0) {
    FUN_14073dd9a(&DAT_14caf2730,&PTR_LAB_14a9edc90);
  }
  return DAT_14caf2730;
}



// FUNCTION 1463ed059 FUN_1463ed059 body=47 status=ok
// SIG undefined FUN_1463ed059(void)

longlong FUN_1463ed059(void)

{
  if (DAT_14caf2718 == 0) {
    FUN_14000fc22(&DAT_14caf2718,&PTR_FUN_14a9eda78);
  }
  return DAT_14caf2718;
}



// FUNCTION 1463ed088 FUN_1463ed088 body=47 status=ok
// SIG undefined FUN_1463ed088(void)

longlong FUN_1463ed088(void)

{
  if (DAT_14caf2720 == 0) {
    FUN_14000fc22(&DAT_14caf2720,&PTR_FUN_14a9edbb8);
  }
  return DAT_14caf2720;
}



// FUNCTION 1463ed0b8 FUN_1463ed0b8 body=34 status=ok
// SIG undefined FUN_1463ed0b8(void)

void FUN_1463ed0b8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7267a();
  FUN_14069c8d6(uVar1,&PTR_s_MarkPropertyDirty_14a9edc00,2);
  return;
}



// FUNCTION 1463ed0da FUN_1463ed0da body=35 status=ok
// SIG undefined FUN_1463ed0da(void)

void FUN_1463ed0da(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9edcd0;
  return;
}



// FUNCTION 1463ed0fe FUN_1463ed0fe body=40 status=ok
// SIG undefined FUN_1463ed0fe(void)

undefined8 FUN_1463ed0fe(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed126 FUN_1463ed126 body=40 status=ok
// SIG undefined FUN_1463ed126(void)

undefined8 FUN_1463ed126(undefined8 param_1,int param_2)

{
  FUN_145918e54();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed14e FUN_1463ed14e body=76 status=ok
// SIG undefined FUN_1463ed14e(void)

longlong FUN_1463ed14e(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed19a FUN_1463ed19a body=40 status=ok
// SIG undefined FUN_1463ed19a(void)

undefined8 FUN_1463ed19a(undefined8 param_1,int param_2)

{
  FUN_145a4169a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed1c2 FUN_1463ed1c2 body=40 status=ok
// SIG undefined FUN_1463ed1c2(void)

undefined8 FUN_1463ed1c2(undefined8 param_1,int param_2)

{
  FUN_14594e610();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed1ea FUN_1463ed1ea body=40 status=ok
// SIG undefined FUN_1463ed1ea(void)

undefined8 FUN_1463ed1ea(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed212 FUN_1463ed212 body=29 status=ok
// SIG undefined FUN_1463ed212(void)

undefined8 FUN_1463ed212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed230 FUN_1463ed230 body=29 status=ok
// SIG undefined FUN_1463ed230(void)

undefined8 FUN_1463ed230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed24e FUN_1463ed24e body=29 status=ok
// SIG undefined FUN_1463ed24e(void)

undefined8 FUN_1463ed24e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed26c FUN_1463ed26c body=29 status=ok
// SIG undefined FUN_1463ed26c(void)

undefined8 FUN_1463ed26c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed28a FUN_1463ed28a body=29 status=ok
// SIG undefined FUN_1463ed28a(void)

undefined8 FUN_1463ed28a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed2a8 FUN_1463ed2a8 body=29 status=ok
// SIG undefined FUN_1463ed2a8(void)

undefined8 FUN_1463ed2a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed2c6 FUN_1463ed2c6 body=29 status=ok
// SIG undefined FUN_1463ed2c6(void)

undefined8 FUN_1463ed2c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed2e4 FUN_1463ed2e4 body=29 status=ok
// SIG undefined FUN_1463ed2e4(void)

undefined8 FUN_1463ed2e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed302 FUN_1463ed302 body=29 status=ok
// SIG undefined FUN_1463ed302(void)

undefined8 FUN_1463ed302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ed320 FUN_1463ed320 body=24 status=ok
// SIG undefined FUN_1463ed320(void)

bool FUN_1463ed320(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463ed338 FUN_1463ed338 body=24 status=ok
// SIG undefined FUN_1463ed338(void)

bool FUN_1463ed338(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463ed350 FUN_1463ed350 body=24 status=ok
// SIG undefined FUN_1463ed350(void)

bool FUN_1463ed350(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463ed368 FUN_1463ed368 body=63 status=ok
// SIG undefined FUN_1463ed368(void)

void FUN_1463ed368(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141355ed6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14001fba0(param_1);
    return;
  }
  FUN_147bdf85a(param_1);
  FUN_141355ed6(param_1);
  return;
}



// FUNCTION 1463ed3a8 FUN_1463ed3a8 body=48 status=ok
// SIG undefined FUN_1463ed3a8(void)

void FUN_1463ed3a8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1463ed3d8 FUN_1463ed3d8 body=132 status=ok
// SIG undefined FUN_1463ed3d8(void)

void FUN_1463ed3d8(longlong param_1,int param_2)

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



// FUNCTION 1463ed45c FUN_1463ed45c body=147 status=ok
// SIG undefined FUN_1463ed45c(void)

void FUN_1463ed45c(longlong param_1,int param_2)

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



// FUNCTION 1463ed4f0 FUN_1463ed4f0 body=327 status=ok
// SIG undefined FUN_1463ed4f0(void)

undefined4 * FUN_1463ed4f0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1461626aa(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  plVar5 = (longlong *)*puVar1;
  *local_40 = plVar5;
  lVar8 = puVar1[1];
  local_40[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)*local_40;
  }
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = (**(code **)(*plVar5 + 0x90))();
  local_58 = 0;
  cVar2 = FUN_1461625f8(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14616281a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ed638 FUN_1463ed638 body=47 status=ok
// SIG undefined FUN_1463ed638(void)

longlong FUN_1463ed638(void)

{
  if (DAT_14caf27d0 == 0) {
    FUN_1409ce572(&DAT_14caf27d0,&PTR_FUN_14a9ef5a0);
  }
  return DAT_14caf27d0;
}



// FUNCTION 1463ed668 FUN_1463ed668 body=55 status=ok
// SIG undefined FUN_1463ed668(void)

void FUN_1463ed668(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf27f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf27f0 = FUN_140002ddd(FUN_1463ed69f,uVar1,L"NetworkMetricConfig");
  }
  return;
}



// FUNCTION 1463ed69f FUN_1463ed69f body=47 status=ok
// SIG undefined FUN_1463ed69f(void)

longlong FUN_1463ed69f(void)

{
  if (DAT_14caf27e8 == 0) {
    FUN_14086a14e(&DAT_14caf27e8,&PTR_FUN_14a9ef748);
  }
  return DAT_14caf27e8;
}



// FUNCTION 1463ed6d4 FUN_1463ed6d4 body=48 status=ok
// SIG undefined FUN_1463ed6d4(void)

void FUN_1463ed6d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14a9fc170;
  return;
}



// FUNCTION 1463ed704 FUN_1463ed704 body=42 status=ok
// SIG undefined FUN_1463ed704(void)

void FUN_1463ed704(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9ef8a0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1463ed72e FUN_1463ed72e body=47 status=ok
// SIG undefined FUN_1463ed72e(void)

longlong FUN_1463ed72e(void)

{
  if (DAT_14caf2808 == 0) {
    FUN_14073dd9a(&DAT_14caf2808,&PTR_LAB_14a9ef858);
  }
  return DAT_14caf2808;
}



// FUNCTION 1463ed762 FUN_1463ed762 body=47 status=ok
// SIG undefined FUN_1463ed762(void)

longlong FUN_1463ed762(void)

{
  if (DAT_14caf2820 == 0) {
    FUN_14073dd9a(&DAT_14caf2820,&PTR_LAB_14a9efc08);
  }
  return DAT_14caf2820;
}



// FUNCTION 1463ed791 FUN_1463ed791 body=40 status=ok
// SIG undefined FUN_1463ed791(void)

void FUN_1463ed791(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14a9effe0;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1463ed7b9 FUN_1463ed7b9 body=49 status=ok
// SIG undefined FUN_1463ed7b9(void)

longlong FUN_1463ed7b9(void)

{
  if (DAT_14caf2838 == 0) {
    FUN_14073dd9a(&DAT_14caf2838,&PTR_LAB_14a9eff98);
  }
  return DAT_14caf2838;
}



// FUNCTION 1463ed7f2 FUN_1463ed7f2 body=47 status=ok
// SIG undefined FUN_1463ed7f2(void)

longlong FUN_1463ed7f2(void)

{
  if (DAT_14caf2850 == 0) {
    FUN_14073dd9a(&DAT_14caf2850,&PTR_LAB_14a9f02c8);
  }
  return DAT_14caf2850;
}



// FUNCTION 1463ed821 FUN_1463ed821 body=40 status=ok
// SIG undefined FUN_1463ed821(void)

void FUN_1463ed821(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  puVar1[5] = 0;
  *puVar1 = &PTR_FUN_14a9f0650;
  return;
}



// FUNCTION 1463ed849 FUN_1463ed849 body=47 status=ok
// SIG undefined FUN_1463ed849(void)

longlong FUN_1463ed849(void)

{
  if (DAT_14caf2868 == 0) {
    FUN_14073dd9a(&DAT_14caf2868,&PTR_LAB_14a9f0608);
  }
  return DAT_14caf2868;
}



// FUNCTION 1463ed878 FUN_1463ed878 body=47 status=ok
// SIG undefined FUN_1463ed878(void)

longlong FUN_1463ed878(void)

{
  if (DAT_14caf2880 == 0) {
    FUN_14073dd9a(&DAT_14caf2880,&PTR_LAB_14a9f0948);
  }
  return DAT_14caf2880;
}



// FUNCTION 1463ed8a7 FUN_1463ed8a7 body=47 status=ok
// SIG undefined FUN_1463ed8a7(void)

longlong FUN_1463ed8a7(void)

{
  if (DAT_14caf2890 == 0) {
    FUN_1409ce572(&DAT_14caf2890,&PTR_FUN_14a9f1260);
  }
  return DAT_14caf2890;
}



// FUNCTION 1463ed8d6 FUN_1463ed8d6 body=55 status=ok
// SIG undefined FUN_1463ed8d6(void)

void FUN_1463ed8d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf28b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf28b0 = FUN_140002ddd(FUN_1463ed90d,uVar1,L"RPCDoSState");
  }
  return;
}



// FUNCTION 1463ed90d FUN_1463ed90d body=47 status=ok
// SIG undefined FUN_1463ed90d(void)

longlong FUN_1463ed90d(void)

{
  if (DAT_14caf28a8 == 0) {
    FUN_14086a14e(&DAT_14caf28a8,&PTR_FUN_14a9f1ad0);
  }
  return DAT_14caf28a8;
}



// FUNCTION 1463ed93c FUN_1463ed93c body=48 status=ok
// SIG undefined FUN_1463ed93c(void)

void FUN_1463ed93c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14a9fc440;
  return;
}



// FUNCTION 1463ed96c FUN_1463ed96c body=55 status=ok
// SIG undefined FUN_1463ed96c(void)

void FUN_1463ed96c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf28c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf28c8 = FUN_140002ddd(FUN_1463ed9a3,uVar1,L"RPCDoSStateConfig");
  }
  return;
}



// FUNCTION 1463ed9a3 FUN_1463ed9a3 body=47 status=ok
// SIG undefined FUN_1463ed9a3(void)

longlong FUN_1463ed9a3(void)

{
  if (DAT_14caf28c0 == 0) {
    FUN_14086a14e(&DAT_14caf28c0,&PTR_FUN_14a9f1b40);
  }
  return DAT_14caf28c0;
}



// FUNCTION 1463ed9d2 FUN_1463ed9d2 body=48 status=ok
// SIG undefined FUN_1463ed9d2(void)

void FUN_1463ed9d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a9fc5b0;
  return;
}



// FUNCTION 1463eda02 FUN_1463eda02 body=55 status=ok
// SIG undefined FUN_1463eda02(void)

void FUN_1463eda02(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2950 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2950 = FUN_140002ddd(FUN_1463eda39,uVar1,L"RPCAnalyticsThreshold");
  }
  return;
}



// FUNCTION 1463eda39 FUN_1463eda39 body=47 status=ok
// SIG undefined FUN_1463eda39(void)

longlong FUN_1463eda39(void)

{
  if (DAT_14caf2948 == 0) {
    FUN_14086a14e(&DAT_14caf2948,&PTR_FUN_14a9f24d0);
  }
  return DAT_14caf2948;
}



// FUNCTION 1463eda68 FUN_1463eda68 body=48 status=ok
// SIG undefined FUN_1463eda68(void)

void FUN_1463eda68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a9fc760;
  return;
}



// FUNCTION 1463eda98 FUN_1463eda98 body=54 status=ok
// SIG undefined FUN_1463eda98(void)

void FUN_1463eda98(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9f2a30;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



// FUNCTION 1463edace FUN_1463edace body=47 status=ok
// SIG undefined FUN_1463edace(void)

longlong FUN_1463edace(void)

{
  if (DAT_14caf2968 == 0) {
    FUN_14073dd9a(&DAT_14caf2968,&PTR_LAB_14a9f29e8);
  }
  return DAT_14caf2968;
}



// FUNCTION 1463edafe FUN_1463edafe body=233 status=ok
// SIG undefined FUN_1463edafe(void)

void FUN_1463edafe(longlong param_1,longlong *param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(longlong *)(param_1 + 0x18);
  FUN_1400021e4(&local_38,local_58);
  FUN_144a882a8(local_48,local_58,&DAT_149e001d8);
  FUN_144a882a8(&local_38,local_48,L"RPCDoSDetection");
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463edbe8 FUN_1463edbe8 body=72 status=ok
// SIG undefined FUN_1463edbe8(void)

void FUN_1463edbe8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14a9f2dd0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 1463edc30 FUN_1463edc30 body=47 status=ok
// SIG undefined FUN_1463edc30(void)

longlong FUN_1463edc30(void)

{
  if (DAT_14caf2980 == 0) {
    FUN_14073dd9a(&DAT_14caf2980,&PTR_LAB_14a9f2d88);
  }
  return DAT_14caf2980;
}



// FUNCTION 1463edc5f FUN_1463edc5f body=47 status=ok
// SIG undefined FUN_1463edc5f(void)

longlong FUN_1463edc5f(void)

{
  if (DAT_14caf2998 == 0) {
    FUN_14073dd9a(&DAT_14caf2998,&PTR_LAB_14a9f3108);
  }
  return DAT_14caf2998;
}



// FUNCTION 1463edc8e FUN_1463edc8e body=47 status=ok
// SIG undefined FUN_1463edc8e(void)

longlong FUN_1463edc8e(void)

{
  if (DAT_14caf2a20 == 0) {
    FUN_14073dd9a(&DAT_14caf2a20,&PTR_LAB_14a9f3a78);
  }
  return DAT_14caf2a20;
}



// FUNCTION 1463edcbd FUN_1463edcbd body=42 status=ok
// SIG undefined FUN_1463edcbd(void)

void FUN_1463edcbd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9f3f10;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1463edcec FUN_1463edcec body=47 status=ok
// SIG undefined FUN_1463edcec(void)

longlong FUN_1463edcec(void)

{
  if (DAT_14caf2a38 == 0) {
    FUN_14073dd9a(&DAT_14caf2a38,&PTR_LAB_14a9f3ec8);
  }
  return DAT_14caf2a38;
}



// FUNCTION 1463edd1b FUN_1463edd1b body=47 status=ok
// SIG undefined FUN_1463edd1b(void)

void FUN_1463edd1b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14a9f4270;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1463edd4a FUN_1463edd4a body=47 status=ok
// SIG undefined FUN_1463edd4a(void)

longlong FUN_1463edd4a(void)

{
  if (DAT_14caf2a50 == 0) {
    FUN_14073dd9a(&DAT_14caf2a50,&PTR_LAB_14a9f4228);
  }
  return DAT_14caf2a50;
}



// FUNCTION 1463edd79 FUN_1463edd79 body=47 status=ok
// SIG undefined FUN_1463edd79(void)

void FUN_1463edd79(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9f49d0;
  FUN_144757f48(puVar1,0x1000000);
  return;
}



// FUNCTION 1463edda8 FUN_1463edda8 body=49 status=ok
// SIG undefined FUN_1463edda8(void)

longlong FUN_1463edda8(void)

{
  if (DAT_14caf2a98 == 0) {
    FUN_14073dd9a(&DAT_14caf2a98,&PTR_LAB_14a9f4988);
  }
  return DAT_14caf2a98;
}



// FUNCTION 1463eddd9 FUN_1463eddd9 body=35 status=ok
// SIG undefined FUN_1463eddd9(void)

void FUN_1463eddd9(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9f4d50;
  return;
}



// FUNCTION 1463ede01 FUN_1463ede01 body=47 status=ok
// SIG undefined FUN_1463ede01(void)

longlong FUN_1463ede01(void)

{
  if (DAT_14caf2ab0 == 0) {
    FUN_14073dd9a(&DAT_14caf2ab0,&PTR_LAB_14a9f4d08);
  }
  return DAT_14caf2ab0;
}



// FUNCTION 1463ede30 FUN_1463ede30 body=238 status=ok
// SIG undefined FUN_1463ede30(void)

undefined8
FUN_1463ede30(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463edf20 FUN_1463edf20 body=55 status=ok
// SIG undefined FUN_1463edf20(void)

void FUN_1463edf20(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf2ad0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf2ad0 = FUN_140002ddd(FUN_1417e4a57,uVar1,L"UniqueNetIdRepl");
  }
  return;
}



// FUNCTION 1463edf58 FUN_1463edf58 body=48 status=ok
// SIG undefined FUN_1463edf58(void)

void FUN_1463edf58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a9fc8d0;
  return;
}



// FUNCTION 1463edf88 FUN_1463edf88 body=310 status=ok
// SIG undefined FUN_1463edf88(void)

/* WARNING: Removing unreachable block (ram,0x0001463ee079) */
/* WARNING: Removing unreachable block (ram,0x0001463ee07f) */
/* WARNING: Removing unreachable block (ram,0x0001463ee091) */

void FUN_1463edf88(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_140489acc();
  (**(code **)(*plVar3 + 0x2e8))(plVar3,&local_48,param_3,param_2);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if ((&DAT_149fc1b6e)[local_30] == '\x01') {
    local_58 = local_40;
    if (local_38 == (longlong *)0x0) {
      plStack_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
      plStack_50 = local_38;
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_48 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_30])();
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1463ee0bf FUN_1463ee0bf body=35 status=ok
// SIG undefined FUN_1463ee0bf(void)

void FUN_1463ee0bf(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a9f54d0;
  return;
}



// FUNCTION 1463ee0e7 FUN_1463ee0e7 body=47 status=ok
// SIG undefined FUN_1463ee0e7(void)

longlong FUN_1463ee0e7(void)

{
  if (DAT_14caf2af8 == 0) {
    FUN_14073dd9a(&DAT_14caf2af8,&PTR_LAB_14a9f5488);
  }
  return DAT_14caf2af8;
}



// FUNCTION 1463ee11b FUN_1463ee11b body=47 status=ok
// SIG undefined FUN_1463ee11b(void)

longlong FUN_1463ee11b(void)

{
  if (DAT_14caf2b10 == 0) {
    FUN_14073dd9a(&DAT_14caf2b10,&PTR_LAB_14a9f5808);
  }
  return DAT_14caf2b10;
}



// FUNCTION 1463ee14a FUN_1463ee14a body=597 status=ok
// SIG undefined FUN_1463ee14a(void)

undefined8 * FUN_1463ee14a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x29] = param_2;
  *(undefined2 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  iVar1 = DAT_14c761644;
  if (DAT_14c761644 < 1) {
    iVar1 = 0;
  }
  FUN_145a3d33e(param_1 + 0x62,iVar1);
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x14] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 1463ee39f FUN_1463ee39f body=46 status=ok
// SIG undefined FUN_1463ee39f(void)

void FUN_1463ee39f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406eddc8(puVar1);
  *puVar1 = &PTR_FUN_14a9f7990;
  puVar1[0x72] = &PTR_FUN_14a9f7fd0;
  return;
}



// FUNCTION 1463ee3cd FUN_1463ee3cd body=47 status=ok
// SIG undefined FUN_1463ee3cd(void)

longlong FUN_1463ee3cd(void)

{
  if (DAT_14caf2cb8 == 0) {
    FUN_14073dd9a(&DAT_14caf2cb8,&PTR_LAB_14a9f7948);
  }
  return DAT_14caf2cb8;
}



// FUNCTION 1463ee3fc FUN_1463ee3fc body=47 status=ok
// SIG undefined FUN_1463ee3fc(void)

longlong FUN_1463ee3fc(void)

{
  if (DAT_14caf2cd0 == 0) {
    FUN_14073dd9a(&DAT_14caf2cd0,&PTR_LAB_14a9f80f8);
  }
  return DAT_14caf2cd0;
}



// FUNCTION 1463ee42c FUN_1463ee42c body=228 status=ok
// SIG undefined FUN_1463ee42c(void)

void FUN_1463ee42c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14153d286(param_1,param_3,(char)param_2[1]);
    plVar5 = *(longlong **)(param_1 + 0x28);
    lVar2 = plVar5[0x2e];
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 2) = *(byte *)(lVar2 + 2) | 1;
      plVar5 = *(longlong **)(param_1 + 0x28);
    }
    cVar4 = (**(code **)(*plVar5 + 1000))();
    if (cVar4 != '\0') {
      local_38[0] = 1;
      local_34 = 0;
      local_2c = 0;
      plVar5 = *(longlong **)(param_1 + 0x28);
      uVar1 = *(undefined4 *)(param_3 + 0xa0);
      uVar3 = *(undefined8 *)(param_3 + 0x90);
      local_48 = *(undefined8 *)*param_2;
      local_40 = ((undefined8 *)*param_2)[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_38;
      (**(code **)(*plVar5 + 0x350))(plVar5,&local_48,uVar3,uVar1);
    }
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 2) = *(byte *)(lVar2 + 2) & 0xfe;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ee511 FUN_1463ee511 body=47 status=ok
// SIG undefined FUN_1463ee511(void)

longlong FUN_1463ee511(void)

{
  if (DAT_14caf2da0 == 0) {
    FUN_14073dd9a(&DAT_14caf2da0,&PTR_LAB_14a9f90f8);
  }
  return DAT_14caf2da0;
}



// FUNCTION 1463ee540 FUN_1463ee540 body=49 status=ok
// SIG undefined FUN_1463ee540(void)

longlong FUN_1463ee540(void)

{
  if (DAT_14caf2db0 == 0) {
    FUN_14000fc22(&DAT_14caf2db0,&PTR_FUN_14a9f9960);
  }
  return DAT_14caf2db0;
}



// FUNCTION 1463ee571 FUN_1463ee571 body=49 status=ok
// SIG undefined FUN_1463ee571(void)

longlong FUN_1463ee571(void)

{
  if (DAT_14caf2db8 == 0) {
    FUN_14000fc22(&DAT_14caf2db8,&PTR_FUN_14a9f9aa8);
  }
  return DAT_14caf2db8;
}



// FUNCTION 1463ee5a2 FUN_1463ee5a2 body=49 status=ok
// SIG undefined FUN_1463ee5a2(void)

longlong FUN_1463ee5a2(void)

{
  if (DAT_14caf2dc0 == 0) {
    FUN_14000fc22(&DAT_14caf2dc0,&PTR_FUN_14a9f9cc0);
  }
  return DAT_14caf2dc0;
}



// FUNCTION 1463ee5d3 FUN_1463ee5d3 body=49 status=ok
// SIG undefined FUN_1463ee5d3(void)

longlong FUN_1463ee5d3(void)

{
  if (DAT_14caf2dc8 == 0) {
    FUN_14000fc22(&DAT_14caf2dc8,&PTR_FUN_14a9f9f98);
  }
  return DAT_14caf2dc8;
}



// FUNCTION 1463ee604 FUN_1463ee604 body=49 status=ok
// SIG undefined FUN_1463ee604(void)

longlong FUN_1463ee604(void)

{
  if (DAT_14caf2e38 == 0) {
    FUN_14073dd9a(&DAT_14caf2e38,&PTR_LAB_14a9fab10);
  }
  return DAT_14caf2e38;
}



// FUNCTION 1463ee635 FUN_1463ee635 body=47 status=ok
// SIG undefined FUN_1463ee635(void)

longlong FUN_1463ee635(void)

{
  if (DAT_14caf2dd0 == 0) {
    FUN_14000fc22(&DAT_14caf2dd0,&PTR_FUN_14a9f9fd8);
  }
  return DAT_14caf2dd0;
}



// FUNCTION 1463ee664 FUN_1463ee664 body=47 status=ok
// SIG undefined FUN_1463ee664(void)

longlong FUN_1463ee664(void)

{
  if (DAT_14caf2dd8 == 0) {
    FUN_14000fc22(&DAT_14caf2dd8,&PTR_FUN_14a9fa018);
  }
  return DAT_14caf2dd8;
}



// FUNCTION 1463ee693 FUN_1463ee693 body=47 status=ok
// SIG undefined FUN_1463ee693(void)

longlong FUN_1463ee693(void)

{
  if (DAT_14caf2de0 == 0) {
    FUN_14000fc22(&DAT_14caf2de0,&PTR_FUN_14a9fa0a0);
  }
  return DAT_14caf2de0;
}



// FUNCTION 1463ee6c2 FUN_1463ee6c2 body=47 status=ok
// SIG undefined FUN_1463ee6c2(void)

longlong FUN_1463ee6c2(void)

{
  if (DAT_14caf2de8 == 0) {
    FUN_14000fc22(&DAT_14caf2de8,&PTR_FUN_14a9fa160);
  }
  return DAT_14caf2de8;
}



// FUNCTION 1463ee6f1 FUN_1463ee6f1 body=47 status=ok
// SIG undefined FUN_1463ee6f1(void)

longlong FUN_1463ee6f1(void)

{
  if (DAT_14caf2df0 == 0) {
    FUN_14000fc22(&DAT_14caf2df0,&PTR_FUN_14a9fa1b8);
  }
  return DAT_14caf2df0;
}



// FUNCTION 1463ee720 FUN_1463ee720 body=47 status=ok
// SIG undefined FUN_1463ee720(void)

longlong FUN_1463ee720(void)

{
  if (DAT_14caf2df8 == 0) {
    FUN_14000fc22(&DAT_14caf2df8,&PTR_FUN_14a9fa280);
  }
  return DAT_14caf2df8;
}



// FUNCTION 1463ee74f FUN_1463ee74f body=47 status=ok
// SIG undefined FUN_1463ee74f(void)

longlong FUN_1463ee74f(void)

{
  if (DAT_14caf2e00 == 0) {
    FUN_14000fc22(&DAT_14caf2e00,&PTR_FUN_14a9fa350);
  }
  return DAT_14caf2e00;
}



// FUNCTION 1463ee77e FUN_1463ee77e body=47 status=ok
// SIG undefined FUN_1463ee77e(void)

longlong FUN_1463ee77e(void)

{
  if (DAT_14caf2e08 == 0) {
    FUN_14000fc22(&DAT_14caf2e08,&PTR_FUN_14a9fa410);
  }
  return DAT_14caf2e08;
}



// FUNCTION 1463ee7ad FUN_1463ee7ad body=47 status=ok
// SIG undefined FUN_1463ee7ad(void)

longlong FUN_1463ee7ad(void)

{
  if (DAT_14caf2e10 == 0) {
    FUN_14000fc22(&DAT_14caf2e10,&PTR_FUN_14a9fa4e0);
  }
  return DAT_14caf2e10;
}



// FUNCTION 1463ee7dc FUN_1463ee7dc body=47 status=ok
// SIG undefined FUN_1463ee7dc(void)

longlong FUN_1463ee7dc(void)

{
  if (DAT_14caf2e18 == 0) {
    FUN_14000fc22(&DAT_14caf2e18,&PTR_FUN_14a9fa568);
  }
  return DAT_14caf2e18;
}



// FUNCTION 1463ee80b FUN_1463ee80b body=47 status=ok
// SIG undefined FUN_1463ee80b(void)

longlong FUN_1463ee80b(void)

{
  if (DAT_14caf2e20 == 0) {
    FUN_14000fc22(&DAT_14caf2e20,&PTR_FUN_14a9fa630);
  }
  return DAT_14caf2e20;
}



// FUNCTION 1463ee83a FUN_1463ee83a body=47 status=ok
// SIG undefined FUN_1463ee83a(void)

longlong FUN_1463ee83a(void)

{
  if (DAT_14caf2e28 == 0) {
    FUN_14000fc22(&DAT_14caf2e28,&PTR_FUN_14a9fa670);
  }
  return DAT_14caf2e28;
}



// FUNCTION 1463ee86a FUN_1463ee86a body=34 status=ok
// SIG undefined FUN_1463ee86a(void)

void FUN_1463ee86a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14143eef4();
  FUN_14069c8d6(uVar1,&PTR_s_Activate_14a9fa6b0,0xc);
  return;
}



// FUNCTION 1463ee88c FUN_1463ee88c body=40 status=ok
// SIG undefined FUN_1463ee88c(void)

undefined8 FUN_1463ee88c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee8b4 FUN_1463ee8b4 body=40 status=ok
// SIG undefined FUN_1463ee8b4(void)

undefined8 FUN_1463ee8b4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee8dc FUN_1463ee8dc body=40 status=ok
// SIG undefined FUN_1463ee8dc(void)

undefined8 FUN_1463ee8dc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee904 FUN_1463ee904 body=40 status=ok
// SIG undefined FUN_1463ee904(void)

undefined8 FUN_1463ee904(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee92c FUN_1463ee92c body=69 status=ok
// SIG undefined FUN_1463ee92c(void)

undefined8 * FUN_1463ee92c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9f3f10;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee972 FUN_1463ee972 body=40 status=ok
// SIG undefined FUN_1463ee972(void)

undefined8 FUN_1463ee972(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee99a FUN_1463ee99a body=40 status=ok
// SIG undefined FUN_1463ee99a(void)

undefined8 FUN_1463ee99a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee9c2 FUN_1463ee9c2 body=40 status=ok
// SIG undefined FUN_1463ee9c2(void)

undefined8 FUN_1463ee9c2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463ee9ea FUN_1463ee9ea body=40 status=ok
// SIG undefined FUN_1463ee9ea(void)

undefined8 FUN_1463ee9ea(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eea12 FUN_1463eea12 body=40 status=ok
// SIG undefined FUN_1463eea12(void)

undefined8 FUN_1463eea12(undefined8 param_1,int param_2)

{
  FUN_14034d9a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eea3a FUN_1463eea3a body=40 status=ok
// SIG undefined FUN_1463eea3a(void)

undefined8 FUN_1463eea3a(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eea62 FUN_1463eea62 body=40 status=ok
// SIG undefined FUN_1463eea62(void)

undefined8 FUN_1463eea62(undefined8 param_1,int param_2)

{
  FUN_145c3267c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eea8a FUN_1463eea8a body=29 status=ok
// SIG undefined FUN_1463eea8a(void)

undefined8 FUN_1463eea8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eeaa8 FUN_1463eeaa8 body=29 status=ok
// SIG undefined FUN_1463eeaa8(void)

undefined8 FUN_1463eeaa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eeac6 FUN_1463eeac6 body=29 status=ok
// SIG undefined FUN_1463eeac6(void)

undefined8 FUN_1463eeac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eeae4 FUN_1463eeae4 body=29 status=ok
// SIG undefined FUN_1463eeae4(void)

undefined8 FUN_1463eeae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eeb02 FUN_1463eeb02 body=29 status=ok
// SIG undefined FUN_1463eeb02(void)

undefined8 FUN_1463eeb02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eeb20 FUN_1463eeb20 body=132 status=ok
// SIG undefined FUN_1463eeb20(void)

void FUN_1463eeb20(longlong param_1,int param_2)

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



// FUNCTION 1463eeba4 FUN_1463eeba4 body=29 status=ok
// SIG undefined FUN_1463eeba4(void)

undefined8 FUN_1463eeba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463eebc2 FUN_1463eebc2 body=42 status=ok
// SIG undefined FUN_1463eebc2(void)

void FUN_1463eebc2(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147bf84c8(param_1);
  return;
}



// FUNCTION 1463eebec FUN_1463eebec body=376 status=ok
// SIG undefined FUN_1463eebec(void)

void FUN_1463eebec(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1446f470e(&local_38,L"DistributionPosition",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_38,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x90) = lVar1;
    FUN_1446f470e(&local_40,L"DistributionTangent",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_40,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xf8) = lVar1;
    FUN_1446f470e(&local_48,L"DistributionStrength",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bf866f(param_1,local_48,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x130) = lVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463eed66 FUN_1463eed66 body=570 status=ok
// SIG undefined FUN_1463eed66(void)

void FUN_1463eed66(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1446f470e(&local_28,L"DistributionNoiseSpeed",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_28,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0x4049000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x4049000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x4049000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x130) = lVar1;
    FUN_1446f470e(&local_30,L"DistributionNoiseRange",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_30,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0x4049000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x4049000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x4049000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x98) = lVar1;
    FUN_1446f470e(&local_38,L"DistributionNoiseRangeScale",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bf866f(param_1,local_38,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 200) = lVar1;
    FUN_1446f470e(&local_40,L"DistributionNoiseTangentStrength",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bf866f(param_1,local_40,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x437a0000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x178) = lVar1;
    FUN_1446f470e(&local_48,L"DistributionNoiseScale",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfb4c1(param_1,local_48,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x1b8) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463eefa2 FUN_1463eefa2 body=42 status=ok
// SIG undefined FUN_1463eefa2(void)

void FUN_1463eefa2(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147bfbd44(param_1);
  return;
}



// FUNCTION 1463eefcc FUN_1463eefcc body=42 status=ok
// SIG undefined FUN_1463eefcc(void)

void FUN_1463eefcc(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147bfcc8c(param_1);
  return;
}



// FUNCTION 1463ef024 FUN_1463ef024 body=136 status=ok
// SIG undefined FUN_1463ef024(void)

code * FUN_1463ef024(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e413a2;
}



// FUNCTION 1463ef0ac FUN_1463ef0ac body=130 status=ok
// SIG undefined FUN_1463ef0ac(void)

undefined1 * FUN_1463ef0ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CameraRight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e41314;
}



// FUNCTION 1463ef12e FUN_1463ef12e body=136 status=ok
// SIG undefined FUN_1463ef12e(void)

code * FUN_1463ef12e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef3434;
}



// FUNCTION 1463ef1b6 FUN_1463ef1b6 body=62 status=ok
// SIG undefined FUN_1463ef1b6(void)

void FUN_1463ef1b6(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)((longlong)param_1 + 0xd) = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463ef1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1,uVar1,*(code **)(*param_1 + 0x18));
    return;
  }
  FUN_140308182(param_1,0);
  return;
}



// FUNCTION 1463ef1f4 FUN_1463ef1f4 body=67 status=ok
// SIG undefined FUN_1463ef1f4(void)

void FUN_1463ef1f4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa00380;
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



// FUNCTION 1463ef238 FUN_1463ef238 body=71 status=ok
// SIG undefined FUN_1463ef238(void)

void FUN_1463ef238(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf3c45 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463ef26a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf3c38 + 0x18))(&DAT_14caf3c38,uVar1,*(code **)(DAT_14caf3c38 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf3c38,0);
  return;
}



// FUNCTION 1463ef280 FUN_1463ef280 body=71 status=ok
// SIG undefined FUN_1463ef280(void)

void FUN_1463ef280(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf3a75 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463ef2b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf3a68 + 0x18))(&DAT_14caf3a68,uVar1,*(code **)(DAT_14caf3a68 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf3a68,0);
  return;
}



// FUNCTION 1463ef2c8 FUN_1463ef2c8 body=171 status=ok
// SIG undefined FUN_1463ef2c8(void)

void FUN_1463ef2c8(longlong param_1)

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
  local_a0 = 0x1000400080000;
  local_18 = 0x1100000002;
  local_98 = 0x801020001;
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



// FUNCTION 1463ef374 FUN_1463ef374 body=67 status=ok
// SIG undefined FUN_1463ef374(void)

void FUN_1463ef374(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa004e0;
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



// FUNCTION 1463ef3b7 FUN_1463ef3b7 body=49 status=ok
// SIG undefined FUN_1463ef3b7(void)

void FUN_1463ef3b7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa00b10;
  FUN_1403121a6(puVar1,0);
  *(byte *)((longlong)puVar1 + 0x61) = *(byte *)((longlong)puVar1 + 0x61) | 0x80;
  return;
}



// FUNCTION 1463ef3f3 FUN_1463ef3f3 body=47 status=ok
// SIG undefined FUN_1463ef3f3(void)

longlong FUN_1463ef3f3(void)

{
  if (DAT_14caf3d28 == 0) {
    FUN_14073dd9a(&DAT_14caf3d28,&PTR_LAB_14aa00ac8);
  }
  return DAT_14caf3d28;
}



// FUNCTION 1463ef422 FUN_1463ef422 body=62 status=ok
// SIG undefined FUN_1463ef422(void)

void FUN_1463ef422(longlong param_1,int param_2)

{
  longlong lVar1;
  
  FUN_1403d8a98();
  if (param_2 == 0) {
    lVar1 = FUN_1447210f0(param_1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x110) == param_1)) {
      *(undefined8 *)(lVar1 + 0x110) = 0;
    }
  }
  return;
}



// FUNCTION 1463ef460 FUN_1463ef460 body=42 status=ok
// SIG undefined FUN_1463ef460(void)

void FUN_1463ef460(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c11a84(param_1);
  return;
}



// FUNCTION 1463ef48a FUN_1463ef48a body=94 status=ok
// SIG undefined FUN_1463ef48a(void)

void FUN_1463ef48a(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = FUN_14001cc68(0x28,0x10);
    FUN_147c44e06(uVar1,param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x168) = uVar1;
  }
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c11d02(param_1);
  return;
}



// FUNCTION 1463ef4e8 FUN_1463ef4e8 body=60 status=ok
// SIG undefined FUN_1463ef4e8(void)

void FUN_1463ef4e8(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  if (*(longlong *)(param_1 + 0x168) == 0) {
    return;
  }
  FUN_140414380(*(longlong *)(param_1 + 0x168),0);
  FUN_1400fb146(param_1 + 0x160,0);
  return;
}



// FUNCTION 1463ef530 FUN_1463ef530 body=45 status=ok
// SIG undefined FUN_1463ef530(void)

void FUN_1463ef530(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x168);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 1463ef55e FUN_1463ef55e body=42 status=ok
// SIG undefined FUN_1463ef55e(void)

void FUN_1463ef55e(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c11ff2(param_1);
  return;
}



// FUNCTION 1463ef588 FUN_1463ef588 body=42 status=ok
// SIG undefined FUN_1463ef588(void)

void FUN_1463ef588(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c12478(param_1);
  return;
}



// FUNCTION 1463ef5b2 FUN_1463ef5b2 body=42 status=ok
// SIG undefined FUN_1463ef5b2(void)

void FUN_1463ef5b2(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1276e(param_1);
  return;
}



// FUNCTION 1463ef5dc FUN_1463ef5dc body=42 status=ok
// SIG undefined FUN_1463ef5dc(void)

void FUN_1463ef5dc(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c12a86(param_1);
  return;
}



// FUNCTION 1463ef606 FUN_1463ef606 body=42 status=ok
// SIG undefined FUN_1463ef606(void)

void FUN_1463ef606(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c12fde(param_1);
  return;
}



// FUNCTION 1463ef630 FUN_1463ef630 body=42 status=ok
// SIG undefined FUN_1463ef630(void)

void FUN_1463ef630(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c13212(param_1);
  return;
}



// FUNCTION 1463ef65a FUN_1463ef65a body=158 status=ok
// SIG undefined FUN_1463ef65a(void)

void FUN_1463ef65a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1446f470e(&local_20,L"DistributionRotOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfb4c1(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ef6fa FUN_1463ef6fa body=42 status=ok
// SIG undefined FUN_1463ef6fa(void)

void FUN_1463ef6fa(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c13f0a(param_1);
  return;
}



// FUNCTION 1463ef724 FUN_1463ef724 body=42 status=ok
// SIG undefined FUN_1463ef724(void)

void FUN_1463ef724(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c148f8(param_1);
  return;
}



// FUNCTION 1463ef74e FUN_1463ef74e body=42 status=ok
// SIG undefined FUN_1463ef74e(void)

void FUN_1463ef74e(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c14ae8(param_1);
  return;
}



// FUNCTION 1463ef778 FUN_1463ef778 body=42 status=ok
// SIG undefined FUN_1463ef778(void)

void FUN_1463ef778(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c14bac(param_1);
  return;
}



// FUNCTION 1463ef7a2 FUN_1463ef7a2 body=42 status=ok
// SIG undefined FUN_1463ef7a2(void)

void FUN_1463ef7a2(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c14c9e(param_1);
  return;
}



// FUNCTION 1463ef7cc FUN_1463ef7cc body=42 status=ok
// SIG undefined FUN_1463ef7cc(void)

void FUN_1463ef7cc(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1560a(param_1);
  return;
}



// FUNCTION 1463ef7f6 FUN_1463ef7f6 body=42 status=ok
// SIG undefined FUN_1463ef7f6(void)

void FUN_1463ef7f6(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c15af0(param_1);
  return;
}



// FUNCTION 1463ef820 FUN_1463ef820 body=42 status=ok
// SIG undefined FUN_1463ef820(void)

void FUN_1463ef820(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c17212(param_1);
  return;
}



// FUNCTION 1463ef84a FUN_1463ef84a body=42 status=ok
// SIG undefined FUN_1463ef84a(void)

void FUN_1463ef84a(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c178a6(param_1);
  return;
}



// FUNCTION 1463ef874 FUN_1463ef874 body=42 status=ok
// SIG undefined FUN_1463ef874(void)

void FUN_1463ef874(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c17ae8(param_1);
  return;
}



// FUNCTION 1463ef89e FUN_1463ef89e body=42 status=ok
// SIG undefined FUN_1463ef89e(void)

void FUN_1463ef89e(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c17e70(param_1);
  return;
}



// FUNCTION 1463ef8c8 FUN_1463ef8c8 body=42 status=ok
// SIG undefined FUN_1463ef8c8(void)

void FUN_1463ef8c8(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c183ec(param_1);
  return;
}



// FUNCTION 1463ef8f2 FUN_1463ef8f2 body=42 status=ok
// SIG undefined FUN_1463ef8f2(void)

void FUN_1463ef8f2(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c18c62(param_1);
  return;
}



// FUNCTION 1463ef91c FUN_1463ef91c body=64 status=ok
// SIG undefined FUN_1463ef91c(void)

void FUN_1463ef91c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x370);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x370) = 0;
    FUN_1435da71e(lVar1);
    FUN_1435da7c2(lVar1);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1463ef95c FUN_1463ef95c body=38 status=ok
// SIG undefined FUN_1463ef95c(void)

void FUN_1463ef95c(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1463ef982 FUN_1463ef982 body=42 status=ok
// SIG undefined FUN_1463ef982(void)

void FUN_1463ef982(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1960e(param_1);
  return;
}



// FUNCTION 1463ef9ac FUN_1463ef9ac body=42 status=ok
// SIG undefined FUN_1463ef9ac(void)

void FUN_1463ef9ac(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c198b2(param_1);
  return;
}



// FUNCTION 1463ef9d6 FUN_1463ef9d6 body=42 status=ok
// SIG undefined FUN_1463ef9d6(void)

void FUN_1463ef9d6(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c19cee(param_1);
  return;
}



// FUNCTION 1463efa00 FUN_1463efa00 body=42 status=ok
// SIG undefined FUN_1463efa00(void)

void FUN_1463efa00(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c19f60(param_1);
  return;
}



// FUNCTION 1463efa2a FUN_1463efa2a body=260 status=ok
// SIG undefined FUN_1463efa2a(void)

void FUN_1463efa2a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1446f470e(&local_20,L"DistributionColorOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c12b2f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
    FUN_1446f470e(&local_28,L"DistributionAlphaOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xb8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463efb30 FUN_1463efb30 body=42 status=ok
// SIG undefined FUN_1463efb30(void)

void FUN_1463efb30(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1aad4(param_1);
  return;
}



// FUNCTION 1463efb5a FUN_1463efb5a body=42 status=ok
// SIG undefined FUN_1463efb5a(void)

void FUN_1463efb5a(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1bab8(param_1);
  return;
}



// FUNCTION 1463efb84 FUN_1463efb84 body=42 status=ok
// SIG undefined FUN_1463efb84(void)

void FUN_1463efb84(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1be26(param_1);
  return;
}



// FUNCTION 1463efbae FUN_1463efbae body=42 status=ok
// SIG undefined FUN_1463efbae(void)

void FUN_1463efbae(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1c5b4(param_1);
  return;
}



// FUNCTION 1463efbd8 FUN_1463efbd8 body=42 status=ok
// SIG undefined FUN_1463efbd8(void)

void FUN_1463efbd8(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1d644(param_1);
  return;
}



// FUNCTION 1463efc02 FUN_1463efc02 body=42 status=ok
// SIG undefined FUN_1463efc02(void)

void FUN_1463efc02(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1d894(param_1);
  return;
}



// FUNCTION 1463efc2c FUN_1463efc2c body=62 status=ok
// SIG undefined FUN_1463efc2c(void)

void FUN_1463efc2c(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_147c1d644(param_1);
  }
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1dea6(param_1);
  return;
}



// FUNCTION 1463efc6a FUN_1463efc6a body=62 status=ok
// SIG undefined FUN_1463efc6a(void)

void FUN_1463efc6a(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_147c1d644(param_1);
  }
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c1e97c(param_1);
  return;
}



// FUNCTION 1463efca8 FUN_1463efca8 body=42 status=ok
// SIG undefined FUN_1463efca8(void)

void FUN_1463efca8(longlong param_1)

{
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x410) != 0) {
    return;
  }
  FUN_147c217da(param_1);
  return;
}



// FUNCTION 1463efcd2 FUN_1463efcd2 body=40 status=ok
// SIG undefined FUN_1463efcd2(void)

undefined8 FUN_1463efcd2(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463efcfa FUN_1463efcfa body=136 status=ok
// SIG undefined FUN_1463efcfa(void)

code * FUN_1463efcfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UseVelocityForMotionBlur";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000002f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22018;
}



// FUNCTION 1463efd82 FUN_1463efd82 body=136 status=ok
// SIG undefined FUN_1463efd82(void)

code * FUN_1463efd82(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RotationRateScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000002ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c220a2;
}



// FUNCTION 1463efe0a FUN_1463efe0a body=136 status=ok
// SIG undefined FUN_1463efe0a(void)

code * FUN_1463efe0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MacroUVParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000302;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22604;
}



// FUNCTION 1463efe92 FUN_1463efe92 body=136 status=ok
// SIG undefined FUN_1463efe92(void)

code * FUN_1463efe92(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EmitterInstRandom";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22718;
}



// FUNCTION 1463eff1a FUN_1463eff1a body=136 status=ok
// SIG undefined FUN_1463eff1a(void)

code * FUN_1463eff1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OneMinusFriction";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000408;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c227a2;
}



// FUNCTION 1463effa2 FUN_1463effa2 body=136 status=ok
// SIG undefined FUN_1463effa2(void)

code * FUN_1463effa2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CollisionRadiusBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000404;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c228b6;
}



// FUNCTION 1463f002a FUN_1463f002a body=136 status=ok
// SIG undefined FUN_1463f002a(void)

code * FUN_1463f002a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TilingAxes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d00000046b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef0e64;
}



// FUNCTION 1463f00b2 FUN_1463f00b2 body=136 status=ok
// SIG undefined FUN_1463f00b2(void)

code * FUN_1463f00b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileOffsets";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000489;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4739e;
}



// FUNCTION 1463f013a FUN_1463f013a body=136 status=ok
// SIG undefined FUN_1463f013a(void)

code * FUN_1463f013a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TilePageScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000006c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef36b8;
}



// FUNCTION 1463f01c2 FUN_1463f01c2 body=130 status=ok
// SIG undefined FUN_1463f01c2(void)

undefined1 * FUN_1463f01c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145f62464;
}



// FUNCTION 1463f0244 FUN_1463f0244 body=136 status=ok
// SIG undefined FUN_1463f0244(void)

code * FUN_1463f0244(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000007d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9a876;
}



// FUNCTION 1463f02cc FUN_1463f02cc body=130 status=ok
// SIG undefined FUN_1463f02cc(void)

undefined1 * FUN_1463f02cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizationMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e9a872;
}



// FUNCTION 1463f034e FUN_1463f034e body=136 status=ok
// SIG undefined FUN_1463f034e(void)

code * FUN_1463f034e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000089f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e08826;
}



// FUNCTION 1463f03d6 FUN_1463f03d6 body=136 status=ok
// SIG undefined FUN_1463f03d6(void)

code * FUN_1463f03d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TilePageScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000008b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5c89a;
}



// FUNCTION 1463f045e FUN_1463f045e body=71 status=ok
// SIG undefined FUN_1463f045e(void)

void FUN_1463f045e(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf400d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf4000 + 0x18))(&DAT_14caf4000,uVar1,*(code **)(DAT_14caf4000 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf4000,0);
  return;
}



// FUNCTION 1463f04a6 FUN_1463f04a6 body=157 status=ok
// SIG undefined FUN_1463f04a6(void)

void FUN_1463f04a6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000001;
  local_a0 = 0x800020000;
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



// FUNCTION 1463f0544 FUN_1463f0544 body=67 status=ok
// SIG undefined FUN_1463f0544(void)

void FUN_1463f0544(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa04320;
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



// FUNCTION 1463f0588 FUN_1463f0588 body=144 status=ok
// SIG undefined FUN_1463f0588(void)

code * FUN_1463f0588(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000004b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1463f0618;
}



// FUNCTION 1463f0618 FUN_1463f0618 body=144 status=ok
// SIG undefined FUN_1463f0618(void)

code * FUN_1463f0618(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b374();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"GlobalDistanceFieldParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FGlobalDistanceFieldParameters2";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe0000004b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145ed998a;
}



// FUNCTION 1463f06a8 FUN_1463f06a8 body=136 status=ok
// SIG undefined FUN_1463f06a8(void)

code * FUN_1463f06a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000044a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ed9d10;
}



// FUNCTION 1463f0730 FUN_1463f0730 body=71 status=ok
// SIG undefined FUN_1463f0730(void)

void FUN_1463f0730(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf478d = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f0762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf4780 + 0x18))(&DAT_14caf4780,uVar1,*(code **)(DAT_14caf4780 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf4780,0);
  return;
}



// FUNCTION 1463f0778 FUN_1463f0778 body=157 status=ok
// SIG undefined FUN_1463f0778(void)

void FUN_1463f0778(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000001;
  local_a0 = 0x800020000;
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



// FUNCTION 1463f0816 FUN_1463f0816 body=67 status=ok
// SIG undefined FUN_1463f0816(void)

void FUN_1463f0816(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa04610;
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



// FUNCTION 1463f085a FUN_1463f085a body=71 status=ok
// SIG undefined FUN_1463f085a(void)

void FUN_1463f085a(void)

{
  undefined8 uVar1;
  char cVar2;
  
  DAT_14caf47a5 = 1;
  cVar2 = FUN_144a5d717();
  if (cVar2 != '\0') {
    uVar1 = FUN_140755bfc();
                    /* WARNING: Could not recover jumptable at 0x0001463f088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_14caf4798 + 0x18))(&DAT_14caf4798,uVar1,*(code **)(DAT_14caf4798 + 0x18));
    return;
  }
  FUN_140308182(&DAT_14caf4798,0);
  return;
}


