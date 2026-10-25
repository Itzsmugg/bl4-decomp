// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147da4e00 FUN_147da4e00 body=163 status=ok
// SIG undefined FUN_147da4e00(void)

void FUN_147da4e00(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f430) {
    FUN_144b3d300(&DAT_14cb0f430);
    if (DAT_14cb0f430 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0f428 =
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"voice.SilenceDetectionThreshold",1);
      _Init_thread_footer(&DAT_14cb0f430);
    }
  }
  FUN_140635f48(DAT_14cb0f428,param_1,0x2000000,0);
  return;
}



// FUNCTION 147da4ea6 FUN_147da4ea6 body=9 status=ok
// SIG undefined FUN_147da4ea6(void)

undefined8 FUN_147da4ea6(void)

{
  return 0x3f800000;
}



// FUNCTION 147da4eb0 FUN_147da4eb0 body=206 status=ok
// SIG undefined FUN_147da4eb0(void)

int FUN_147da4eb0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0f420) {
    FUN_144b3d300(&DAT_14cb0f420);
    fVar1 = DAT_14c761e44;
    if (DAT_14cb0f420 == -1) {
      iVar2 = FUN_145cdd8ee();
      iVar3 = FUN_145cdd8ee();
      iVar5 = 0xe00;
      if (1 < DAT_14c761e54) {
        iVar5 = 0x1c00;
      }
      iVar4 = (uint)(1 < DAT_14c761e54) * 0x800 + 0x800;
      if (iVar3 == 24000) {
        iVar4 = iVar5;
      }
      DAT_14cb0f41c = (int)(((float)iVar2 * fVar1) / (float)iVar4 + 20.0);
      _Init_thread_footer(&DAT_14cb0f420);
    }
  }
  return DAT_14cb0f41c;
}



// FUNCTION 147da4f7e FUN_147da4f7e body=89 status=ok
// SIG undefined FUN_147da4f7e(void)

void FUN_147da4f7e(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_140ba40f9();
  FUN_147daed1e(uVar1,param_1);
  uVar1 = FUN_140ba40f9(param_1);
  iVar2 = FUN_147daed96(&DAT_14cb0f2f0,uVar1,param_1);
  lVar3 = 0;
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x30 + DAT_14cb0f2f0;
  }
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  return;
}



// FUNCTION 147da4fd8 FUN_147da4fd8 body=147 status=ok
// SIG undefined FUN_147da4fd8(void)

undefined8 FUN_147da4fd8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != (undefined8 *)0x0 && param_3 != 0) {
    if (*(longlong *)(param_3 + 0x178) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1434f73f8(*(longlong *)(param_3 + 0x178),param_1);
    }
    *param_4 = uVar3;
  }
  uVar1 = FUN_140ba40f9(param_1);
  iVar2 = FUN_147daed96(&DAT_14cb0f2f0,uVar1,param_1);
  lVar4 = (longlong)iVar2 * 0x30 + DAT_14cb0f2f0;
  if (lVar4 == 0 || iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    FUN_147da506c(param_2,*(longlong *)(lVar4 + 0x20) + 0x110);
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
  }
  return uVar3;
}



// FUNCTION 147da506c FUN_147da506c body=127 status=ok
// SIG undefined FUN_147da506c(void)

longlong * FUN_147da506c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 147da50ec FUN_147da50ec body=286 status=ok
// SIG undefined FUN_147da50ec(void)

ulonglong FUN_147da50ec(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
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
  local_50 = 0x100000000;
  puVar2 = &DAT_14cb0f300;
  uStack_48 = &DAT_14cb0f300;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  if (DAT_14cb0f318 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar1 = DAT_14cb0f318;
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = &DAT_14cb0f2f0;
  if ((iStack_3c == iVar1) && (uStack_48 == &DAT_14cb0f300)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    do {
      bVar3 = *(longlong *)(*local_78 + 0x20 + (longlong)iStack_5c * 0x30) == param_1;
      puVar2 = (undefined *)CONCAT71((int7)((ulonglong)puVar2 >> 8),bVar3);
      if (bVar3) break;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != &DAT_14cb0f2f0 ||
             ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb0f300 || iStack_5c != iVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar2 & 0xffffffff;
}



// FUNCTION 147da520b FUN_147da520b body=175 status=ok
// SIG undefined FUN_147da520b(void)

undefined8 FUN_147da520b(undefined8 param_1)

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
  local_b8 = FUN_145992dbe();
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



// FUNCTION 147da52c6 FUN_147da52c6 body=44 status=ok
// SIG undefined FUN_147da52c6(void)

void FUN_147da52c6(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x14c) & 1) != 0) {
    FUN_147daf370(param_1 + 0x128);
    *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xfe;
  }
  return;
}



// FUNCTION 147da5306 FUN_147da5306 body=105 status=ok
// SIG undefined FUN_147da5306(void)

longlong FUN_147da5306(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"UVScaleBias",0);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"MinZ",0);
  return param_1;
}



// FUNCTION 147da5370 FUN_147da5370 body=42 status=ok
// SIG undefined FUN_147da5370(void)

void FUN_147da5370(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147da53ba FUN_147da53ba body=39 status=ok
// SIG undefined FUN_147da53ba(void)

void FUN_147da53ba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147da5306(uVar1,param_1);
  return;
}



// FUNCTION 147da53e2 FUN_147da53e2 body=61 status=ok
// SIG undefined FUN_147da53e2(void)

longlong FUN_147da53e2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined4 *)(lVar1 + 0xe8) = 0;
  return lVar1;
}



// FUNCTION 147da5420 FUN_147da5420 body=42 status=ok
// SIG undefined FUN_147da5420(void)

void FUN_147da5420(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147da5496 FUN_147da5496 body=93 status=ok
// SIG undefined FUN_147da5496(void)

longlong FUN_147da5496(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  FUN_1474409b8(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"MinZ",0);
  return lVar1;
}



// FUNCTION 147da54f4 FUN_147da54f4 body=59 status=ok
// SIG undefined FUN_147da54f4(void)

longlong FUN_147da54f4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  *(undefined2 *)(lVar1 + 0xe4) = 0;
  return lVar1;
}



// FUNCTION 147da5530 FUN_147da5530 body=659 status=ok
// SIG undefined FUN_147da5530(void)

void FUN_147da5530(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
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
  local_48 = L"FVolumeRasterizeVertexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x40;
  local_7c = 0x4001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_147da5622;
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
LAB_147da5622:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x40;
  puVar5 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar5 = 0xbf8000003f800000;
  puVar5[1] = &DAT_3f8000003f800000;
  puVar5[2] = &DAT_3f8000003f800000;
  puVar5[3] = 0x3f800000;
  puVar5[4] = 0xbf800000bf800000;
  puVar5[5] = 0x3f80000000000000;
  puVar5[6] = 0x3f800000bf800000;
  puVar5[7] = 0;
  lVar4 = *plVar6;
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



// FUNCTION 147da57da FUN_147da57da body=441 status=ok
// SIG undefined FUN_147da57da(void)

void FUN_147da57da(longlong param_1,undefined8 param_2)

{
  void *_Src;
  uint uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  FUN_140002266(&local_40,L"%dx%dx%d",0,0);
  FUN_1446ddc76(&local_68,"Dimensions",1);
  _Src = local_40;
  local_60 = local_68;
  local_58 = (void *)0x0;
  local_50 = local_38;
  if ((longlong)local_38 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_38,0);
    memcpy(local_58,_Src,(longlong)local_38 * 2);
  }
  local_48 = 3;
  FUN_1407c67d8(param_2);
  if (*(longlong *)(param_1 + 0x138) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(*(longlong *)(param_1 + 0x138) + 0xc);
  }
  FUN_140056680(&local_98,*(undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)(uVar1 * 0x30)));
  FUN_1446ddc76(&local_a0,"Format",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_a8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_a8);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da5994 FUN_147da5994 body=109 status=ok
// SIG undefined FUN_147da5994(void)

undefined8 FUN_147da5994(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x138);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &DAT_14c873410;
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(puVar1 + 3) * 0x30));
    uVar3 = puVar1[2] & 0x1fffffff;
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
  }
  FUN_140002266(param_2,L"Volume: %dx%dx%d [%s]",uVar4,uVar5,uVar3,*puVar2);
  return param_2;
}



// FUNCTION 147da5a02 FUN_147da5a02 body=74 status=ok
// SIG undefined FUN_147da5a02(void)

void FUN_147da5a02(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1[0x27];
  iVar3 = 0;
  iVar2 = 0;
  if ((param_2 & 0xfffffffd) == 0) {
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x20);
    }
    iVar2 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar2 = iVar3 - iVar2;
  }
  else if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x20);
  }
  FUN_14596f010(param_1,iVar2);
  return;
}



// FUNCTION 147da5a4c FUN_147da5a4c body=47 status=ok
// SIG undefined FUN_147da5a4c(void)

void FUN_147da5a4c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  switchD_143c3d4dc::caseD_38();
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,0);
  FUN_140347a44(param_2,uVar1);
  return;
}



// FUNCTION 147da5a80 FUN_147da5a80 body=212 status=ok
// SIG undefined FUN_147da5a80(void)

ulonglong FUN_147da5a80(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (uint)((float)*param_1 / 255.0) >> 0x17;
  uVar2 = (uint)((float)param_1[1] / 255.0) >> 0x17;
  uVar3 = (uint)((float)param_1[2] / 255.0) >> 0x17;
  return CONCAT44((uint)((float)param_1[2] / 255.0) >> 0xd & 0x3ff |
                  (0x70 - uVar3 >> 0x1b & (uVar3 ^ 0x10)) << 10,
                  (0x70 - uVar2 >> 0x1b & (uVar2 ^ 0x10)) * 0x4000000 +
                  ((uint)((float)param_1[1] / 255.0) & 0x7fe000) * 8) |
         (ulonglong)
         ((uint)((float)*param_1 / 255.0) >> 0xd & 0x3ff |
         (0x70 - uVar1 >> 0x1b & (uVar1 ^ 0x10)) << 10) | 0x3c00000000000000;
}



// FUNCTION 147da5b54 FUN_147da5b54 body=166 status=ok
// SIG undefined FUN_147da5b54(void)

longlong * FUN_147da5b54(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_147da5a80(param_2);
  uVar1 = (uint)(uVar2 >> 0x1a) & 0x1fffc0;
  uVar5 = uVar1 / 0x1f;
  uVar4 = ((uint)(uVar2 >> 10) & 0x3fffc0) / 0x7c0 & 0x3ff;
  uVar3 = (((uint)uVar2 & 0xffff) << 6) / 0x7c0 & 0x3ff;
  *param_1 = (ulonglong)(uVar3 << 5) +
             ((ulonglong)((uVar5 & 0xffc0) << 4) |
              (ulonglong)((uVar4 + (uVar5 & 0xff80) * 8) * 0x400 | uVar3) << 0x14 | (ulonglong)uVar4
             ) * 0x8000 + 3;
  param_1[1] = (ulonglong)(uVar1 / 0x3e00 & 1);
  return param_1;
}



// FUNCTION 147da5bfa FUN_147da5bfa body=1422 status=ok
// SIG undefined FUN_147da5bfa(void)

void FUN_147da5bfa(undefined8 *param_1,int param_2,int param_3,int param_4,byte param_5,uint param_6
                  )

{
  longlong lVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined2 uVar11;
  undefined1 auStack_d8 [32];
  int local_b8;
  undefined4 local_b0;
  byte local_a0;
  byte local_9f;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_97;
  undefined2 local_96;
  undefined4 local_94;
  ulonglong local_90;
  ulonglong local_88;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined8 local_70 [2];
  undefined8 local_60 [2];
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  uVar3 = (ulonglong)param_6;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = uVar3 * 3;
  puVar7 = (uint *)(&DAT_14c761e60 + lVar1);
  if (param_5 < 0x25) {
    switch(param_5) {
    case 1:
      local_80 = (float)(byte)*puVar7 / 255.0;
      local_7c = (float)(byte)(&DAT_14c761e61)[lVar1] / 255.0;
      local_78 = (float)(byte)(&DAT_14c761e62)[lVar1] / 255.0;
      local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_74 = 0x3f800000;
      local_b8 = param_4;
      FUN_147da661f(*param_1,&local_80,param_2,param_3);
      break;
    case 2:
      uVar6 = (uint)(byte)(&DAT_14c761e62)[lVar1] |
              (uint)(byte)(&DAT_14c761e61)[lVar1] << 8 |
              (uint)(byte)*puVar7 << 0x10 | (uint)(byte)(&DAT_14c761e63)[lVar1] << 0x18;
      goto LAB_147da5cee;
    case 3:
      local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_b8 = param_4;
      FUN_147da6526(*param_1,CONCAT71((int7)((ulonglong)puVar7 >> 8),(&DAT_14aafd1d8)[uVar3]),
                    param_2,param_3);
      goto LAB_147da5d08;
    case 4:
    case 6:
      break;
    case 5:
      local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
      local_b8 = param_4 + 6;
      if (-1 < param_4 + 3) {
        local_b8 = param_4 + 3;
      }
      local_b8 = local_b8 >> 2;
      iVar9 = param_3 + 6;
      if (-1 < param_3 + 3) {
        iVar9 = param_3 + 3;
      }
      iVar10 = param_2 + 6;
      if (-1 < param_2 + 3) {
        iVar10 = param_2 + 3;
      }
      FUN_147da694d(*param_1,(uint)((byte)(&DAT_14c761e62)[lVar1] >> 3) |
                             ((byte)*puVar7 & 0xf8) * 0x100 +
                             ((byte)(&DAT_14c761e61)[lVar1] & 0xfffffffc) * 8 | 0xffff0000,
                    iVar10 >> 2,iVar9 >> 2);
      goto LAB_147da5d08;
    case 7:
      local_88 = (ulonglong)
                 ((uint)((byte)(&DAT_14c761e62)[lVar1] >> 3) |
                 ((byte)*puVar7 & 0xf8) * 0x100 + ((byte)(&DAT_14c761e61)[lVar1] & 0xfffffffc) * 8)
                 | 0xffff0000;
      local_90 = (ulonglong)CONCAT11((&DAT_14c761e63)[lVar1],(&DAT_14c761e63)[lVar1]);
      local_b8 = param_4 + 6;
      if (-1 < param_4 + 3) {
        local_b8 = param_4 + 3;
      }
      local_b8 = local_b8 >> 2;
      iVar9 = param_3 + 6;
      if (-1 < param_3 + 3) {
        iVar9 = param_3 + 3;
      }
      local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
      iVar10 = param_2 + 6;
      if (-1 < param_2 + 3) {
        iVar10 = param_2 + 3;
      }
      FUN_147da6b9a(*param_1,&local_90,iVar10 >> 2,iVar9 >> 2);
      break;
    default:
      if (param_5 == 0x13) {
        uVar4 = FUN_147da5a80(puVar7);
        local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_b8 = param_4;
        FUN_147da6700(*param_1,uVar4,param_2,param_3);
        goto LAB_147da5d08;
      }
      if (param_5 == 0x17) {
        local_a0 = (byte)*puVar7;
        local_98 = (&DAT_14c761e61)[lVar1];
        local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_b8 = param_4 + 6;
        if (-1 < param_4 + 3) {
          local_b8 = param_4 + 3;
        }
        local_b8 = local_b8 >> 2;
        iVar9 = param_3 + 6;
        if (-1 < param_3 + 3) {
          iVar9 = param_3 + 3;
        }
        iVar10 = param_2 + 6;
        if (-1 < param_2 + 3) {
          iVar10 = param_2 + 3;
        }
        local_9e = 0;
        local_9c = 0;
        local_96 = 0;
        local_94 = 0;
        local_9f = local_a0;
        local_97 = local_98;
        FUN_147da6ec8(*param_1,&local_a0,iVar10 >> 2,iVar9 >> 2);
      }
    }
    goto switchD_147da5c67_caseD_4;
  }
  switch(param_5) {
  case 0x32:
    uVar2 = CONCAT11((byte)*puVar7,(byte)*puVar7);
    uVar5 = CONCAT11((&DAT_14c761e61)[lVar1],(&DAT_14c761e61)[lVar1]);
    uVar11 = CONCAT11((&DAT_14c761e62)[lVar1],(&DAT_14c761e62)[lVar1]);
    local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_b8 = param_4 + 6;
    if (-1 < param_4 + 3) {
      local_b8 = param_4 + 3;
    }
    local_b8 = local_b8 >> 2;
    iVar9 = param_3 + 6;
    if (-1 < param_3 + 3) {
      iVar9 = param_3 + 3;
    }
    iVar9 = iVar9 >> 2;
    iVar10 = param_2 + 6;
    if (-1 < param_2 + 3) {
      iVar10 = param_2 + 3;
    }
    iVar10 = iVar10 >> 2;
    puVar8 = local_60;
    goto LAB_147da5fd3;
  case 0x33:
  case 0x35:
  case 0x36:
  case 0x39:
  case 0x3a:
  case 0x3b:
    break;
  case 0x34:
    uVar2 = CONCAT11((byte)*puVar7,(byte)*puVar7);
    uVar5 = CONCAT11((&DAT_14c761e61)[lVar1],(&DAT_14c761e61)[lVar1]);
    uVar11 = CONCAT11((&DAT_14c761e62)[lVar1],(&DAT_14c761e62)[lVar1]);
    local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_b8 = param_4 + 0xe;
    if (-1 < param_4 + 7) {
      local_b8 = param_4 + 7;
    }
    local_b8 = local_b8 >> 3;
    iVar9 = param_3 + 0xe;
    if (-1 < param_3 + 7) {
      iVar9 = param_3 + 7;
    }
    iVar9 = iVar9 >> 3;
    iVar10 = param_2 + 0xe;
    if (-1 < param_2 + 7) {
      iVar10 = param_2 + 7;
    }
    iVar10 = iVar10 >> 3;
    puVar8 = local_70;
LAB_147da5fd3:
    *puVar8 = 0xfffffffffffffdfc;
    *(undefined2 *)(puVar8 + 1) = uVar2;
    *(undefined2 *)((longlong)puVar8 + 10) = uVar5;
    *(undefined2 *)((longlong)puVar8 + 0xc) = uVar11;
    *(undefined2 *)((longlong)puVar8 + 0xe) = 0xffff;
    FUN_147da716b(*param_1,puVar8,iVar10,iVar9);
    break;
  case 0x37:
    FUN_147da5b54(local_40);
    local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_b8 = param_4 + 6;
    if (-1 < param_4 + 3) {
      local_b8 = param_4 + 3;
    }
    local_b8 = local_b8 >> 2;
    iVar9 = param_3 + 6;
    if (-1 < param_3 + 3) {
      iVar9 = param_3 + 3;
    }
    iVar10 = param_2 + 6;
    if (-1 < param_2 + 3) {
      iVar10 = param_2 + 3;
    }
    FUN_147da6fa9(*param_1,local_40,iVar10 >> 2,iVar9 >> 2);
    break;
  case 0x38:
    uVar6 = (uint)((byte)(&DAT_14c761e61)[lVar1] >> 1);
    local_50 = (uint)(byte)((byte)*puVar7 >> 1) * 0x4080 + (uVar6 << 0x1c | uVar6 << 0x15) + 0x40;
    local_4c = (uint)((byte)(&DAT_14c761e61)[lVar1] >> 5) +
               (uint)((byte)(&DAT_14c761e62)[lVar1] >> 1) * 0x408 + -0x20000;
    local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_b8 = param_4 + 6;
    if (-1 < param_4 + 3) {
      local_b8 = param_4 + 3;
    }
    local_b8 = local_b8 >> 2;
    iVar9 = param_3 + 6;
    if (-1 < param_3 + 3) {
      iVar9 = param_3 + 3;
    }
    iVar10 = param_2 + 6;
    if (-1 < param_2 + 3) {
      iVar10 = param_2 + 3;
    }
    local_48 = 0;
    FUN_147da708a(*param_1,&local_50,iVar10 >> 2,iVar9 >> 2);
    break;
  case 0x3c:
  case 0x3d:
    goto switchD_147da5cea_caseD_3c;
  default:
    if (param_5 != 0x25) {
      if (param_5 == 0x27) {
        local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_b8 = param_4 + 6;
        if (-1 < param_4 + 3) {
          local_b8 = param_4 + 3;
        }
        local_b8 = local_b8 >> 2;
        iVar9 = param_3 + 6;
        if (-1 < param_3 + 3) {
          iVar9 = param_3 + 3;
        }
        iVar10 = param_2 + 6;
        if (-1 < param_2 + 3) {
          iVar10 = param_2 + 3;
        }
        FUN_147da6c7b(*param_1,CONCAT11((&DAT_14aafd1d8)[uVar3],(&DAT_14aafd1d8)[uVar3]),iVar10 >> 2
                      ,iVar9 >> 2);
        goto LAB_147da5d08;
      }
      break;
    }
    goto switchD_147da5cea_caseD_3c;
  }
switchD_147da5c67_caseD_4:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
switchD_147da5cea_caseD_3c:
  uVar6 = *puVar7;
LAB_147da5cee:
  local_b0 = *(undefined4 *)((longlong)param_1 + 0xc);
  local_b8 = param_4;
  FUN_147da618e(*param_1,uVar6,param_2,param_3);
LAB_147da5d08:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
}



// FUNCTION 147da618e FUN_147da618e body=920 status=ok
// SIG undefined FUN_147da618e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147da618e(longlong param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar13;
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  undefined1 in_XMM5 [16];
  longlong lVar17;
  undefined1 auVar16 [16];
  longlong lVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  auVar1 = _DAT_149931e80;
  lVar6 = (longlong)param_6;
  if (0 < (int)param_5) {
    lVar2 = (ulonglong)param_3 - 1;
    auVar11._8_4_ = (int)lVar2;
    auVar11._0_8_ = lVar2;
    auVar11._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar4 = (ulonglong)(param_3 + 3 >> 2) << 4;
    iVar3 = param_6 * (param_4 + -1);
    uVar9 = 0;
    in_XMM1 = pmovsxbq(in_XMM1,0x302);
    in_XMM2 = pmovsxbq(in_XMM2,0x100);
    auVar11 = auVar11 ^ _DAT_149931e80;
    in_XMM5 = pmovsxbq(in_XMM5,0x404);
    lVar2 = param_1 + 0xc;
    do {
      if (0 < (int)param_3) {
        lVar7 = (longlong)iVar3 + param_1 + 0xc;
        lVar8 = 0;
        auVar14 = in_XMM2;
        auVar16 = in_XMM1;
        do {
          lVar10 = auVar11._0_8_;
          lVar13 = auVar11._8_8_;
          if ((bool)(~(lVar10 < SUB168(auVar14 ^ auVar1,0)) & 1)) {
            *(undefined4 *)(lVar2 + -0xc + lVar8) = param_2;
          }
          if (SUB168(auVar14 ^ auVar1,8) <= lVar13) {
            *(undefined4 *)(lVar2 + -8 + lVar8) = param_2;
          }
          if (SUB168(auVar16 ^ auVar1,0) <= lVar10) {
            *(undefined4 *)(lVar2 + -4 + lVar8) = param_2;
          }
          if (SUB168(auVar16 ^ auVar1,8) <= lVar13) {
            *(undefined4 *)(lVar2 + lVar8) = param_2;
          }
          lVar15 = in_XMM5._0_8_;
          lVar21 = auVar14._8_8_;
          auVar14._0_8_ = auVar14._0_8_ + lVar15;
          lVar17 = in_XMM5._8_8_;
          auVar14._8_8_ = lVar21 + lVar17;
          lVar21 = auVar16._8_8_;
          auVar16._0_8_ = auVar16._0_8_ + lVar15;
          auVar16._8_8_ = lVar21 + lVar17;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
        lVar8 = 0;
        auVar18 = in_XMM2;
        auVar22 = in_XMM1;
        do {
          if (lVar10 < SUB168(auVar18 ^ auVar1,0) != true) {
            *(undefined4 *)(lVar7 + -0xc + lVar8) = param_2;
          }
          if (SUB168(auVar18 ^ auVar1,8) <= lVar13) {
            *(undefined4 *)(lVar7 + -8 + lVar8) = param_2;
          }
          if (SUB168(auVar22 ^ auVar1,0) <= lVar10) {
            *(undefined4 *)(lVar7 + -4 + lVar8) = param_2;
          }
          if (SUB168(auVar22 ^ auVar1,8) <= lVar13) {
            *(undefined4 *)(lVar7 + lVar8) = param_2;
          }
          lVar21 = auVar18._8_8_;
          auVar18._0_8_ = auVar18._0_8_ + lVar15;
          auVar18._8_8_ = lVar21 + lVar17;
          lVar21 = auVar22._8_8_;
          auVar22._0_8_ = auVar22._0_8_ + lVar15;
          auVar22._8_8_ = lVar21 + lVar17;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
      }
      uVar9 = uVar9 + 1;
      lVar2 = lVar2 + lVar6;
      iVar3 = iVar3 - param_6;
    } while (uVar9 != param_5);
  }
  auVar1 = _DAT_149931e80;
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar4 = (longlong)(int)param_5;
    uVar9 = (ulonglong)(param_5 + 3 & 0xfffffffc);
    lVar2 = (ulonglong)param_5 - 1;
    auVar12._8_4_ = (int)lVar2;
    auVar12._0_8_ = lVar2;
    auVar12._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar7 = lVar6 * lVar4 + param_1 + 0xc;
    lVar2 = param_1 + (lVar6 + -4) * lVar4 + (longlong)(int)param_3 * 4 + 0xc;
    auVar11 = pmovsxbq(in_XMM1,0x302);
    auVar14 = pmovsxbq(in_XMM2,0x100);
    auVar12 = auVar12 ^ _DAT_149931e80;
    auVar16 = pmovsxbq(in_XMM5,0x404);
    do {
      if (0 < (int)param_5) {
        uVar5 = 0;
        auVar19 = auVar14;
        auVar23 = auVar11;
        do {
          lVar8 = auVar12._0_8_;
          lVar10 = auVar12._8_8_;
          if ((bool)(~(lVar8 < SUB168(auVar19 ^ auVar1,0)) & 1)) {
            *(undefined4 *)(lVar7 + -0xc + uVar5 * 4) = param_2;
          }
          if (SUB168(auVar19 ^ auVar1,8) <= lVar10) {
            *(undefined4 *)(lVar7 + -8 + uVar5 * 4) = param_2;
          }
          if (SUB168(auVar23 ^ auVar1,0) <= lVar8) {
            *(undefined4 *)(lVar7 + -4 + uVar5 * 4) = param_2;
          }
          if (SUB168(auVar23 ^ auVar1,8) <= lVar10) {
            *(undefined4 *)(lVar7 + uVar5 * 4) = param_2;
          }
          uVar5 = uVar5 + 4;
          lVar13 = auVar16._0_8_;
          lVar17 = auVar19._8_8_;
          auVar19._0_8_ = auVar19._0_8_ + lVar13;
          lVar15 = auVar16._8_8_;
          auVar19._8_8_ = lVar17 + lVar15;
          lVar17 = auVar23._8_8_;
          auVar23._0_8_ = auVar23._0_8_ + lVar13;
          auVar23._8_8_ = lVar17 + lVar15;
        } while (uVar9 != uVar5);
        uVar5 = 0;
        auVar20 = auVar14;
        auVar24 = auVar11;
        do {
          if (lVar8 < SUB168(auVar20 ^ auVar1,0) != true) {
            *(undefined4 *)(lVar2 + -0xc + uVar5 * 4) = param_2;
          }
          if (SUB168(auVar20 ^ auVar1,8) <= lVar10) {
            *(undefined4 *)(lVar2 + -8 + uVar5 * 4) = param_2;
          }
          if (SUB168(auVar24 ^ auVar1,0) <= lVar8) {
            *(undefined4 *)(lVar2 + -4 + uVar5 * 4) = param_2;
          }
          if (SUB168(auVar24 ^ auVar1,8) <= lVar10) {
            *(undefined4 *)(lVar2 + uVar5 * 4) = param_2;
          }
          uVar5 = uVar5 + 4;
          lVar17 = auVar20._8_8_;
          auVar20._0_8_ = auVar20._0_8_ + lVar13;
          auVar20._8_8_ = lVar17 + lVar15;
          lVar17 = auVar24._8_8_;
          auVar24._0_8_ = auVar24._0_8_ + lVar13;
          auVar24._8_8_ = lVar17 + lVar15;
        } while (uVar9 != uVar5);
      }
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + lVar6;
      lVar2 = lVar2 + lVar6;
    } while (lVar4 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da6526 FUN_147da6526 body=249 status=ok
// SIG undefined FUN_147da6526(void)

void FUN_147da6526(longlong param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  ulonglong _Size;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  _Size = (ulonglong)param_5;
  if (0 < (int)param_5) {
    iVar3 = (param_4 + -1) * param_6;
    iVar2 = 0;
    uVar1 = _Size;
    do {
      if (0 < (int)param_3) {
        memset((void *)(iVar2 + param_1),param_2,(ulonglong)param_3);
        memset((void *)(iVar3 + param_1),param_2,(ulonglong)param_3);
      }
      iVar2 = iVar2 + param_6;
      iVar3 = iVar3 - param_6;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    param_4 = param_4 + param_5 * -2;
    iVar2 = param_6 * param_5;
    do {
      if (0 < (int)param_5) {
        memset((void *)(iVar2 + param_1),param_2,_Size);
        memset((void *)((int)(param_3 - param_5) + param_1 + (longlong)iVar2),param_2,_Size);
      }
      iVar2 = iVar2 + param_6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 147da661f FUN_147da661f body=225 status=ok
// SIG undefined FUN_147da661f(void)

void FUN_147da661f(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_6;
  if (0 < (int)param_5) {
    iVar5 = param_6 * (param_4 + -1);
    uVar4 = 0;
    lVar10 = param_1;
    do {
      if (0 < (int)param_3) {
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar10 + lVar9) = *param_2;
          ((undefined8 *)(lVar10 + lVar9))[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          puVar1 = (undefined8 *)(iVar5 + param_1 + lVar9);
          *puVar1 = *param_2;
          puVar1[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + lVar7;
      iVar5 = iVar5 - param_6;
    } while (uVar4 != param_5);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar10 = (longlong)(int)param_5;
    lVar8 = (ulonglong)param_5 << 4;
    lVar9 = lVar7 * lVar10 + param_1;
    lVar6 = (longlong)(int)param_3 * 0x10 + param_1 + (lVar7 + -0x10) * lVar10;
    do {
      if (0 < (int)param_5) {
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar9 + lVar3) = *param_2;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar6 + lVar3) = *param_2;
          ((undefined8 *)(lVar6 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + lVar7;
      lVar6 = lVar6 + lVar7;
    } while (lVar10 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da6700 FUN_147da6700 body=589 status=ok
// SIG undefined FUN_147da6700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147da6700(longlong param_1,undefined8 param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar13;
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM4 [16];
  longlong lVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar1 = _DAT_149931e80;
  lVar6 = (longlong)param_6;
  if (0 < (int)param_5) {
    lVar2 = (ulonglong)param_3 - 1;
    auVar11._8_4_ = (int)lVar2;
    auVar11._0_8_ = lVar2;
    auVar11._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar4 = (ulonglong)(param_3 + 1 >> 1) << 4;
    iVar3 = param_6 * (param_4 + -1);
    uVar9 = 0;
    in_XMM1 = pmovsxbq(in_XMM1,0x100);
    auVar11 = auVar11 ^ _DAT_149931e80;
    in_XMM4 = pmovsxbq(in_XMM4,0x202);
    lVar2 = param_1 + 8;
    do {
      if (0 < (int)param_3) {
        lVar7 = (longlong)iVar3 + param_1 + 8;
        lVar8 = 0;
        auVar18 = in_XMM1;
        do {
          auVar17 = auVar18 ^ auVar1;
          lVar10 = auVar11._0_8_;
          lVar13 = auVar11._8_8_;
          if ((bool)(~(lVar10 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar2 + -8 + lVar8) = param_2;
          }
          if (auVar17._8_8_ <= lVar13) {
            *(undefined8 *)(lVar2 + lVar8) = param_2;
          }
          lVar16 = auVar18._8_8_;
          auVar18._0_8_ = auVar18._0_8_ + in_XMM4._0_8_;
          auVar18._8_8_ = lVar16 + in_XMM4._8_8_;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
        lVar8 = 0;
        auVar17 = in_XMM1;
        do {
          auVar18 = auVar17 ^ auVar1;
          if ((bool)(~(lVar10 < auVar18._0_8_) & 1)) {
            *(undefined8 *)(lVar7 + -8 + lVar8) = param_2;
          }
          if (auVar18._8_8_ <= lVar13) {
            *(undefined8 *)(lVar7 + lVar8) = param_2;
          }
          lVar16 = auVar17._8_8_;
          auVar17._0_8_ = auVar17._0_8_ + in_XMM4._0_8_;
          auVar17._8_8_ = lVar16 + in_XMM4._8_8_;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
      }
      uVar9 = uVar9 + 1;
      lVar2 = lVar2 + lVar6;
      iVar3 = iVar3 - param_6;
    } while (uVar9 != param_5);
  }
  auVar1 = _DAT_149931e80;
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar4 = (longlong)(int)param_5;
    uVar9 = (ulonglong)(param_5 + 1 & 0xfffffffe);
    lVar2 = (ulonglong)param_5 - 1;
    auVar12._8_4_ = (int)lVar2;
    auVar12._0_8_ = lVar2;
    auVar12._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar7 = lVar6 * lVar4 + param_1 + 8;
    lVar2 = param_1 + (lVar6 + -8) * lVar4 + (longlong)(int)param_3 * 8 + 8;
    auVar11 = pmovsxbq(in_XMM1,0x100);
    auVar12 = auVar12 ^ _DAT_149931e80;
    auVar18 = pmovsxbq(in_XMM4,0x202);
    do {
      if (0 < (int)param_5) {
        uVar5 = 0;
        auVar14 = auVar11;
        do {
          auVar17 = auVar14 ^ auVar1;
          lVar8 = auVar12._0_8_;
          lVar10 = auVar12._8_8_;
          if ((bool)(~(lVar8 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar7 + -8 + uVar5 * 8) = param_2;
          }
          if (auVar17._8_8_ <= lVar10) {
            *(undefined8 *)(lVar7 + uVar5 * 8) = param_2;
          }
          uVar5 = uVar5 + 2;
          lVar13 = auVar14._8_8_;
          auVar14._0_8_ = auVar14._0_8_ + auVar18._0_8_;
          auVar14._8_8_ = lVar13 + auVar18._8_8_;
        } while (uVar9 != uVar5);
        uVar5 = 0;
        auVar15 = auVar11;
        do {
          auVar17 = auVar15 ^ auVar1;
          if ((bool)(~(lVar8 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar2 + -8 + uVar5 * 8) = param_2;
          }
          if (auVar17._8_8_ <= lVar10) {
            *(undefined8 *)(lVar2 + uVar5 * 8) = param_2;
          }
          uVar5 = uVar5 + 2;
          lVar13 = auVar15._8_8_;
          auVar15._0_8_ = auVar15._0_8_ + auVar18._0_8_;
          auVar15._8_8_ = lVar13 + auVar18._8_8_;
        } while (uVar9 != uVar5);
      }
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + lVar6;
      lVar2 = lVar2 + lVar6;
    } while (lVar4 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da694d FUN_147da694d body=589 status=ok
// SIG undefined FUN_147da694d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147da694d(longlong param_1,undefined8 param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar13;
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM4 [16];
  longlong lVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar1 = _DAT_149931e80;
  lVar6 = (longlong)param_6;
  if (0 < (int)param_5) {
    lVar2 = (ulonglong)param_3 - 1;
    auVar11._8_4_ = (int)lVar2;
    auVar11._0_8_ = lVar2;
    auVar11._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar4 = (ulonglong)(param_3 + 1 >> 1) << 4;
    iVar3 = param_6 * (param_4 + -1);
    uVar9 = 0;
    in_XMM1 = pmovsxbq(in_XMM1,0x100);
    auVar11 = auVar11 ^ _DAT_149931e80;
    in_XMM4 = pmovsxbq(in_XMM4,0x202);
    lVar2 = param_1 + 8;
    do {
      if (0 < (int)param_3) {
        lVar7 = (longlong)iVar3 + param_1 + 8;
        lVar8 = 0;
        auVar18 = in_XMM1;
        do {
          auVar17 = auVar18 ^ auVar1;
          lVar10 = auVar11._0_8_;
          lVar13 = auVar11._8_8_;
          if ((bool)(~(lVar10 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar2 + -8 + lVar8) = param_2;
          }
          if (auVar17._8_8_ <= lVar13) {
            *(undefined8 *)(lVar2 + lVar8) = param_2;
          }
          lVar16 = auVar18._8_8_;
          auVar18._0_8_ = auVar18._0_8_ + in_XMM4._0_8_;
          auVar18._8_8_ = lVar16 + in_XMM4._8_8_;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
        lVar8 = 0;
        auVar17 = in_XMM1;
        do {
          auVar18 = auVar17 ^ auVar1;
          if ((bool)(~(lVar10 < auVar18._0_8_) & 1)) {
            *(undefined8 *)(lVar7 + -8 + lVar8) = param_2;
          }
          if (auVar18._8_8_ <= lVar13) {
            *(undefined8 *)(lVar7 + lVar8) = param_2;
          }
          lVar16 = auVar17._8_8_;
          auVar17._0_8_ = auVar17._0_8_ + in_XMM4._0_8_;
          auVar17._8_8_ = lVar16 + in_XMM4._8_8_;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
      }
      uVar9 = uVar9 + 1;
      lVar2 = lVar2 + lVar6;
      iVar3 = iVar3 - param_6;
    } while (uVar9 != param_5);
  }
  auVar1 = _DAT_149931e80;
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar4 = (longlong)(int)param_5;
    uVar9 = (ulonglong)(param_5 + 1 & 0xfffffffe);
    lVar2 = (ulonglong)param_5 - 1;
    auVar12._8_4_ = (int)lVar2;
    auVar12._0_8_ = lVar2;
    auVar12._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar7 = lVar6 * lVar4 + param_1 + 8;
    lVar2 = param_1 + (lVar6 + -8) * lVar4 + (longlong)(int)param_3 * 8 + 8;
    auVar11 = pmovsxbq(in_XMM1,0x100);
    auVar12 = auVar12 ^ _DAT_149931e80;
    auVar18 = pmovsxbq(in_XMM4,0x202);
    do {
      if (0 < (int)param_5) {
        uVar5 = 0;
        auVar14 = auVar11;
        do {
          auVar17 = auVar14 ^ auVar1;
          lVar8 = auVar12._0_8_;
          lVar10 = auVar12._8_8_;
          if ((bool)(~(lVar8 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar7 + -8 + uVar5 * 8) = param_2;
          }
          if (auVar17._8_8_ <= lVar10) {
            *(undefined8 *)(lVar7 + uVar5 * 8) = param_2;
          }
          uVar5 = uVar5 + 2;
          lVar13 = auVar14._8_8_;
          auVar14._0_8_ = auVar14._0_8_ + auVar18._0_8_;
          auVar14._8_8_ = lVar13 + auVar18._8_8_;
        } while (uVar9 != uVar5);
        uVar5 = 0;
        auVar15 = auVar11;
        do {
          auVar17 = auVar15 ^ auVar1;
          if ((bool)(~(lVar8 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar2 + -8 + uVar5 * 8) = param_2;
          }
          if (auVar17._8_8_ <= lVar10) {
            *(undefined8 *)(lVar2 + uVar5 * 8) = param_2;
          }
          uVar5 = uVar5 + 2;
          lVar13 = auVar15._8_8_;
          auVar15._0_8_ = auVar15._0_8_ + auVar18._0_8_;
          auVar15._8_8_ = lVar13 + auVar18._8_8_;
        } while (uVar9 != uVar5);
      }
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + lVar6;
      lVar2 = lVar2 + lVar6;
    } while (lVar4 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da6b9a FUN_147da6b9a body=225 status=ok
// SIG undefined FUN_147da6b9a(void)

void FUN_147da6b9a(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_6;
  if (0 < (int)param_5) {
    iVar5 = param_6 * (param_4 + -1);
    uVar4 = 0;
    lVar10 = param_1;
    do {
      if (0 < (int)param_3) {
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar10 + lVar9) = *param_2;
          ((undefined8 *)(lVar10 + lVar9))[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          puVar1 = (undefined8 *)(iVar5 + param_1 + lVar9);
          *puVar1 = *param_2;
          puVar1[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + lVar7;
      iVar5 = iVar5 - param_6;
    } while (uVar4 != param_5);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar10 = (longlong)(int)param_5;
    lVar8 = (ulonglong)param_5 << 4;
    lVar9 = lVar7 * lVar10 + param_1;
    lVar6 = (longlong)(int)param_3 * 0x10 + param_1 + (lVar7 + -0x10) * lVar10;
    do {
      if (0 < (int)param_5) {
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar9 + lVar3) = *param_2;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar6 + lVar3) = *param_2;
          ((undefined8 *)(lVar6 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + lVar7;
      lVar6 = lVar6 + lVar7;
    } while (lVar10 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da6c7b FUN_147da6c7b body=589 status=ok
// SIG undefined FUN_147da6c7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147da6c7b(longlong param_1,undefined8 param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar13;
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM4 [16];
  longlong lVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar1 = _DAT_149931e80;
  lVar6 = (longlong)param_6;
  if (0 < (int)param_5) {
    lVar2 = (ulonglong)param_3 - 1;
    auVar11._8_4_ = (int)lVar2;
    auVar11._0_8_ = lVar2;
    auVar11._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar4 = (ulonglong)(param_3 + 1 >> 1) << 4;
    iVar3 = param_6 * (param_4 + -1);
    uVar9 = 0;
    in_XMM1 = pmovsxbq(in_XMM1,0x100);
    auVar11 = auVar11 ^ _DAT_149931e80;
    in_XMM4 = pmovsxbq(in_XMM4,0x202);
    lVar2 = param_1 + 8;
    do {
      if (0 < (int)param_3) {
        lVar7 = (longlong)iVar3 + param_1 + 8;
        lVar8 = 0;
        auVar18 = in_XMM1;
        do {
          auVar17 = auVar18 ^ auVar1;
          lVar10 = auVar11._0_8_;
          lVar13 = auVar11._8_8_;
          if ((bool)(~(lVar10 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar2 + -8 + lVar8) = param_2;
          }
          if (auVar17._8_8_ <= lVar13) {
            *(undefined8 *)(lVar2 + lVar8) = param_2;
          }
          lVar16 = auVar18._8_8_;
          auVar18._0_8_ = auVar18._0_8_ + in_XMM4._0_8_;
          auVar18._8_8_ = lVar16 + in_XMM4._8_8_;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
        lVar8 = 0;
        auVar17 = in_XMM1;
        do {
          auVar18 = auVar17 ^ auVar1;
          if ((bool)(~(lVar10 < auVar18._0_8_) & 1)) {
            *(undefined8 *)(lVar7 + -8 + lVar8) = param_2;
          }
          if (auVar18._8_8_ <= lVar13) {
            *(undefined8 *)(lVar7 + lVar8) = param_2;
          }
          lVar16 = auVar17._8_8_;
          auVar17._0_8_ = auVar17._0_8_ + in_XMM4._0_8_;
          auVar17._8_8_ = lVar16 + in_XMM4._8_8_;
          lVar8 = lVar8 + 0x10;
        } while (lVar4 != lVar8);
      }
      uVar9 = uVar9 + 1;
      lVar2 = lVar2 + lVar6;
      iVar3 = iVar3 - param_6;
    } while (uVar9 != param_5);
  }
  auVar1 = _DAT_149931e80;
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar4 = (longlong)(int)param_5;
    uVar9 = (ulonglong)(param_5 + 1 & 0xfffffffe);
    lVar2 = (ulonglong)param_5 - 1;
    auVar12._8_4_ = (int)lVar2;
    auVar12._0_8_ = lVar2;
    auVar12._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    lVar7 = lVar6 * lVar4 + param_1 + 8;
    lVar2 = param_1 + (lVar6 + -8) * lVar4 + (longlong)(int)param_3 * 8 + 8;
    auVar11 = pmovsxbq(in_XMM1,0x100);
    auVar12 = auVar12 ^ _DAT_149931e80;
    auVar18 = pmovsxbq(in_XMM4,0x202);
    do {
      if (0 < (int)param_5) {
        uVar5 = 0;
        auVar14 = auVar11;
        do {
          auVar17 = auVar14 ^ auVar1;
          lVar8 = auVar12._0_8_;
          lVar10 = auVar12._8_8_;
          if ((bool)(~(lVar8 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar7 + -8 + uVar5 * 8) = param_2;
          }
          if (auVar17._8_8_ <= lVar10) {
            *(undefined8 *)(lVar7 + uVar5 * 8) = param_2;
          }
          uVar5 = uVar5 + 2;
          lVar13 = auVar14._8_8_;
          auVar14._0_8_ = auVar14._0_8_ + auVar18._0_8_;
          auVar14._8_8_ = lVar13 + auVar18._8_8_;
        } while (uVar9 != uVar5);
        uVar5 = 0;
        auVar15 = auVar11;
        do {
          auVar17 = auVar15 ^ auVar1;
          if ((bool)(~(lVar8 < auVar17._0_8_) & 1)) {
            *(undefined8 *)(lVar2 + -8 + uVar5 * 8) = param_2;
          }
          if (auVar17._8_8_ <= lVar10) {
            *(undefined8 *)(lVar2 + uVar5 * 8) = param_2;
          }
          uVar5 = uVar5 + 2;
          lVar13 = auVar15._8_8_;
          auVar15._0_8_ = auVar15._0_8_ + auVar18._0_8_;
          auVar15._8_8_ = lVar13 + auVar18._8_8_;
        } while (uVar9 != uVar5);
      }
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + lVar6;
      lVar2 = lVar2 + lVar6;
    } while (lVar4 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da6ec8 FUN_147da6ec8 body=225 status=ok
// SIG undefined FUN_147da6ec8(void)

void FUN_147da6ec8(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_6;
  if (0 < (int)param_5) {
    iVar5 = param_6 * (param_4 + -1);
    uVar4 = 0;
    lVar10 = param_1;
    do {
      if (0 < (int)param_3) {
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar10 + lVar9) = *param_2;
          ((undefined8 *)(lVar10 + lVar9))[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          puVar1 = (undefined8 *)(iVar5 + param_1 + lVar9);
          *puVar1 = *param_2;
          puVar1[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + lVar7;
      iVar5 = iVar5 - param_6;
    } while (uVar4 != param_5);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar10 = (longlong)(int)param_5;
    lVar8 = (ulonglong)param_5 << 4;
    lVar9 = lVar7 * lVar10 + param_1;
    lVar6 = (longlong)(int)param_3 * 0x10 + param_1 + (lVar7 + -0x10) * lVar10;
    do {
      if (0 < (int)param_5) {
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar9 + lVar3) = *param_2;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar6 + lVar3) = *param_2;
          ((undefined8 *)(lVar6 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + lVar7;
      lVar6 = lVar6 + lVar7;
    } while (lVar10 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da6fa9 FUN_147da6fa9 body=225 status=ok
// SIG undefined FUN_147da6fa9(void)

void FUN_147da6fa9(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_6;
  if (0 < (int)param_5) {
    iVar5 = param_6 * (param_4 + -1);
    uVar4 = 0;
    lVar10 = param_1;
    do {
      if (0 < (int)param_3) {
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar10 + lVar9) = *param_2;
          ((undefined8 *)(lVar10 + lVar9))[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          puVar1 = (undefined8 *)(iVar5 + param_1 + lVar9);
          *puVar1 = *param_2;
          puVar1[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + lVar7;
      iVar5 = iVar5 - param_6;
    } while (uVar4 != param_5);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar10 = (longlong)(int)param_5;
    lVar8 = (ulonglong)param_5 << 4;
    lVar9 = lVar7 * lVar10 + param_1;
    lVar6 = (longlong)(int)param_3 * 0x10 + param_1 + (lVar7 + -0x10) * lVar10;
    do {
      if (0 < (int)param_5) {
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar9 + lVar3) = *param_2;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar6 + lVar3) = *param_2;
          ((undefined8 *)(lVar6 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + lVar7;
      lVar6 = lVar6 + lVar7;
    } while (lVar10 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da708a FUN_147da708a body=225 status=ok
// SIG undefined FUN_147da708a(void)

void FUN_147da708a(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_6;
  if (0 < (int)param_5) {
    iVar5 = param_6 * (param_4 + -1);
    uVar4 = 0;
    lVar10 = param_1;
    do {
      if (0 < (int)param_3) {
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar10 + lVar9) = *param_2;
          ((undefined8 *)(lVar10 + lVar9))[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          puVar1 = (undefined8 *)(iVar5 + param_1 + lVar9);
          *puVar1 = *param_2;
          puVar1[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + lVar7;
      iVar5 = iVar5 - param_6;
    } while (uVar4 != param_5);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar10 = (longlong)(int)param_5;
    lVar8 = (ulonglong)param_5 << 4;
    lVar9 = lVar7 * lVar10 + param_1;
    lVar6 = (longlong)(int)param_3 * 0x10 + param_1 + (lVar7 + -0x10) * lVar10;
    do {
      if (0 < (int)param_5) {
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar9 + lVar3) = *param_2;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar6 + lVar3) = *param_2;
          ((undefined8 *)(lVar6 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + lVar7;
      lVar6 = lVar6 + lVar7;
    } while (lVar10 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da716b FUN_147da716b body=225 status=ok
// SIG undefined FUN_147da716b(void)

void FUN_147da716b(longlong param_1,undefined8 *param_2,uint param_3,int param_4,uint param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_6;
  if (0 < (int)param_5) {
    iVar5 = param_6 * (param_4 + -1);
    uVar4 = 0;
    lVar10 = param_1;
    do {
      if (0 < (int)param_3) {
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar10 + lVar9) = *param_2;
          ((undefined8 *)(lVar10 + lVar9))[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
        lVar9 = 0;
        do {
          uVar2 = param_2[1];
          puVar1 = (undefined8 *)(iVar5 + param_1 + lVar9);
          *puVar1 = *param_2;
          puVar1[1] = uVar2;
          lVar9 = lVar9 + 0x10;
        } while ((ulonglong)param_3 << 4 != lVar9);
      }
      uVar4 = uVar4 + 1;
      lVar10 = lVar10 + lVar7;
      iVar5 = iVar5 - param_6;
    } while (uVar4 != param_5);
  }
  if ((int)param_5 < (int)(param_4 - param_5)) {
    lVar10 = (longlong)(int)param_5;
    lVar8 = (ulonglong)param_5 << 4;
    lVar9 = lVar7 * lVar10 + param_1;
    lVar6 = (longlong)(int)param_3 * 0x10 + param_1 + (lVar7 + -0x10) * lVar10;
    do {
      if (0 < (int)param_5) {
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar9 + lVar3) = *param_2;
          ((undefined8 *)(lVar9 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
        lVar3 = 0;
        do {
          uVar2 = param_2[1];
          *(undefined8 *)(lVar6 + lVar3) = *param_2;
          ((undefined8 *)(lVar6 + lVar3))[1] = uVar2;
          lVar3 = lVar3 + 0x10;
        } while (lVar8 != lVar3);
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + lVar7;
      lVar6 = lVar6 + lVar7;
    } while (lVar10 != (int)(param_4 - param_5));
  }
  return;
}



// FUNCTION 147da724c FUN_147da724c body=2489 status=ok
// SIG undefined FUN_147da724c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147da724c(longlong *param_1,uint param_2,uint param_3,byte param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  longlong lVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  auVar7 = _DAT_149931e80;
  uVar15 = (ulonglong)param_3;
  uVar14 = (ulonglong)param_2;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 < 0x25) {
    switch(param_4) {
    case 1:
      if (0 < (int)param_3) {
        bVar1 = *param_5;
        bVar2 = param_5[1];
        bVar3 = param_5[2];
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = *param_1 + 0xc;
        uVar13 = 0;
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            do {
              *(float *)(lVar10 + -0xc + lVar11) = (float)bVar1 / 255.0;
              *(float *)(lVar10 + -8 + lVar11) = (float)bVar2 / 255.0;
              *(float *)(lVar10 + -4 + lVar11) = (float)bVar3 / 255.0;
              *(undefined4 *)(lVar10 + lVar11) = 0x3f800000;
              lVar11 = lVar11 + 0x10;
            } while (uVar14 << 4 != lVar11);
          }
          uVar13 = uVar13 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar13 != uVar15);
      }
      break;
    case 2:
      if (0 < (int)param_3) {
        uVar8 = (uint)param_5[2] |
                (uint)param_5[1] << 8 | (uint)*param_5 << 0x10 | (uint)param_5[3] << 0x18;
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = uVar14 - 1;
        auVar22._8_4_ = (int)lVar10;
        auVar22._0_8_ = lVar10;
        auVar22._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        lVar10 = *param_1 + 0xc;
        uVar14 = 0;
        auVar19 = pmovsxbq(in_XMM1,0x302);
        auVar21 = pmovsxbq(in_XMM2,0x100);
        auVar22 = auVar22 ^ _DAT_149931e80;
        auVar24 = pmovsxbq(in_XMM5,0x404);
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            auVar27 = auVar21;
            auVar29 = auVar19;
            do {
              lVar16 = auVar22._0_8_;
              lVar20 = auVar22._8_8_;
              if ((bool)(~(lVar16 < SUB168(auVar27 ^ auVar7,0)) & 1)) {
                *(uint *)(lVar10 + -0xc + lVar11) = uVar8;
              }
              if (SUB168(auVar27 ^ auVar7,8) <= lVar20) {
                *(uint *)(lVar10 + -8 + lVar11) = uVar8;
              }
              if (SUB168(auVar29 ^ auVar7,0) <= lVar16) {
                *(uint *)(lVar10 + -4 + lVar11) = uVar8;
              }
              if (SUB168(auVar29 ^ auVar7,8) <= lVar20) {
                *(uint *)(lVar10 + lVar11) = uVar8;
              }
              lVar16 = auVar27._8_8_;
              auVar27._0_8_ = auVar27._0_8_ + auVar24._0_8_;
              auVar27._8_8_ = lVar16 + auVar24._8_8_;
              lVar16 = auVar29._8_8_;
              auVar29._0_8_ = auVar29._0_8_ + auVar24._0_8_;
              auVar29._8_8_ = lVar16 + auVar24._8_8_;
              lVar11 = lVar11 + 0x10;
            } while ((ulonglong)(param_2 + 3 >> 2) << 4 != lVar11);
          }
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar14 != uVar15);
      }
      break;
    case 3:
    case 4:
    case 6:
      break;
    case 5:
      if (0 < (int)param_3) {
        uVar14 = (ulonglong)
                 ((uint)(param_5[2] >> 3) |
                 (*param_5 & 0xf8) * 0x100 + (param_5[1] & 0xfffffffc) * 8) | 0xffff0000;
        iVar12 = param_2 + 6;
        if (-1 < (int)(param_2 + 3)) {
          iVar12 = param_2 + 3;
        }
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        uVar15 = 1;
        if (1 < iVar12 >> 2) {
          uVar15 = (ulonglong)(uint)(iVar12 >> 2);
        }
        lVar10 = uVar15 - 1;
        auVar21._8_4_ = (int)lVar10;
        auVar21._0_8_ = lVar10;
        auVar21._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        lVar10 = *param_1 + 8;
        uVar13 = 0;
        auVar19 = pmovsxbq(in_XMM1,0x100);
        auVar21 = auVar21 ^ _DAT_149931e80;
        auVar22 = pmovsxbq(in_XMM4,0x202);
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            auVar25 = auVar19;
            do {
              if ((bool)(~(auVar21._0_8_ < SUB168(auVar25 ^ auVar7,0)) & 1)) {
                *(ulonglong *)(lVar10 + -8 + lVar11) = uVar14;
              }
              if (SUB168(auVar25 ^ auVar7,8) <= auVar21._8_8_) {
                *(ulonglong *)(lVar10 + lVar11) = uVar14;
              }
              lVar16 = auVar25._8_8_;
              auVar25._0_8_ = auVar25._0_8_ + auVar22._0_8_;
              auVar25._8_8_ = lVar16 + auVar22._8_8_;
              lVar11 = lVar11 + 0x10;
            } while ((ulonglong)((int)uVar15 + 1U & 0xfffffffe) << 3 != lVar11);
          }
          uVar13 = uVar13 + 1;
          lVar10 = lVar10 + iVar6;
        } while (uVar13 != param_3 + 3 >> 2);
      }
      break;
    case 7:
      if (0 < (int)param_3) {
        bVar1 = *param_5;
        bVar2 = param_5[1];
        bVar3 = param_5[2];
        bVar4 = param_5[3];
        iVar12 = param_2 + 6;
        if (-1 < (int)(param_2 + 3)) {
          iVar12 = param_2 + 3;
        }
        uVar14 = 1;
        if (1 < iVar12 >> 2) {
          uVar14 = (ulonglong)(uint)(iVar12 >> 2);
        }
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = *param_1 + 8;
        uVar15 = 0;
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            do {
              *(ulonglong *)(lVar10 + -8 + lVar11) = (ulonglong)CONCAT11(bVar4,bVar4);
              *(ulonglong *)(lVar10 + lVar11) =
                   (ulonglong)
                   ((uint)(bVar3 >> 3) | (bVar1 & 0xf8) * 0x100 + (bVar2 & 0xfffffffc) * 8) |
                   0xffff0000;
              lVar11 = lVar11 + 0x10;
            } while (uVar14 * 0x10 != lVar11);
          }
          uVar15 = uVar15 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar15 != param_3 + 3 >> 2);
      }
      break;
    default:
      if (param_4 == 0x17) {
        if (0 < (int)param_3) {
          bVar1 = *param_5;
          bVar2 = param_5[1];
          iVar12 = param_2 + 6;
          if (-1 < (int)(param_2 + 3)) {
            iVar12 = param_2 + 3;
          }
          iVar6 = *(int *)((longlong)param_1 + 0xc);
          uVar14 = 1;
          if (1 < iVar12 >> 2) {
            uVar14 = (ulonglong)(uint)(iVar12 >> 2);
          }
          lVar10 = *param_1 + 0xc;
          uVar15 = 0;
          do {
            if (0 < (int)param_2) {
              lVar11 = 0;
              do {
                *(byte *)(lVar10 + -0xc + lVar11) = bVar1;
                *(byte *)(lVar10 + -0xb + lVar11) = bVar1;
                *(undefined2 *)(lVar10 + -10 + lVar11) = 0;
                *(undefined4 *)(lVar10 + -8 + lVar11) = 0;
                *(byte *)(lVar10 + -4 + lVar11) = bVar2;
                *(byte *)(lVar10 + -3 + lVar11) = bVar2;
                *(undefined2 *)(lVar10 + -2 + lVar11) = 0;
                *(undefined4 *)(lVar10 + lVar11) = 0;
                lVar11 = lVar11 + 0x10;
              } while (uVar14 * 0x10 != lVar11);
            }
            uVar15 = uVar15 + 1;
            lVar10 = lVar10 + iVar6;
          } while (uVar15 != param_3 + 3 >> 2);
        }
      }
      else if ((param_4 == 0x13) &&
              (uVar9 = FUN_147da5a80(param_5), auVar7 = _DAT_149931e80, 0 < (int)param_3)) {
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = uVar14 - 1;
        auVar19._8_4_ = (int)lVar10;
        auVar19._0_8_ = lVar10;
        auVar19._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        lVar10 = *param_1 + 8;
        uVar14 = 0;
        auVar21 = pmovsxbq(in_XMM1,0x100);
        auVar19 = auVar19 ^ _DAT_149931e80;
        auVar22 = pmovsxbq(in_XMM4,0x202);
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            auVar24 = auVar21;
            do {
              if ((bool)(~(auVar19._0_8_ < SUB168(auVar24 ^ auVar7,0)) & 1)) {
                *(undefined8 *)(lVar10 + -8 + lVar11) = uVar9;
              }
              if (SUB168(auVar24 ^ auVar7,8) <= auVar19._8_8_) {
                *(undefined8 *)(lVar10 + lVar11) = uVar9;
              }
              lVar16 = auVar24._8_8_;
              auVar24._0_8_ = auVar24._0_8_ + auVar22._0_8_;
              auVar24._8_8_ = lVar16 + auVar22._8_8_;
              lVar11 = lVar11 + 0x10;
            } while ((ulonglong)(param_2 + 1 >> 1) << 4 != lVar11);
          }
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar14 != uVar15);
      }
    }
  }
  else {
    switch(param_4) {
    case 0x32:
      if (0 < (int)param_3) {
        bVar1 = *param_5;
        bVar2 = param_5[1];
        bVar3 = param_5[2];
        iVar12 = param_2 + 6;
        if (-1 < (int)(param_2 + 3)) {
          iVar12 = param_2 + 3;
        }
        uVar14 = 1;
        if (1 < iVar12 >> 2) {
          uVar14 = (ulonglong)(uint)(iVar12 >> 2);
        }
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = *param_1 + 0xe;
        uVar15 = 0;
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            do {
              *(undefined8 *)(lVar10 + -0xe + lVar11) = 0xfffffffffffffdfc;
              *(ushort *)(lVar10 + -6 + lVar11) = CONCAT11(bVar1,bVar1);
              *(ushort *)(lVar10 + -4 + lVar11) = CONCAT11(bVar2,bVar2);
              *(ushort *)(lVar10 + -2 + lVar11) = CONCAT11(bVar3,bVar3);
              *(undefined2 *)(lVar10 + lVar11) = 0xffff;
              lVar11 = lVar11 + 0x10;
            } while (uVar14 * 0x10 != lVar11);
          }
          uVar15 = uVar15 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar15 != param_3 + 3 >> 2);
      }
      break;
    case 0x33:
    case 0x35:
    case 0x36:
    case 0x39:
    case 0x3a:
    case 0x3b:
      break;
    case 0x34:
      if (0 < (int)param_3) {
        bVar1 = *param_5;
        bVar2 = param_5[1];
        bVar3 = param_5[2];
        iVar12 = param_2 + 0xe;
        if (-1 < (int)(param_2 + 7)) {
          iVar12 = param_2 + 7;
        }
        uVar14 = 1;
        if (1 < iVar12 >> 3) {
          uVar14 = (ulonglong)(uint)(iVar12 >> 3);
        }
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = *param_1 + 0xe;
        uVar15 = 0;
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            do {
              *(undefined8 *)(lVar10 + -0xe + lVar11) = 0xfffffffffffffdfc;
              *(ushort *)(lVar10 + -6 + lVar11) = CONCAT11(bVar1,bVar1);
              *(ushort *)(lVar10 + -4 + lVar11) = CONCAT11(bVar2,bVar2);
              *(ushort *)(lVar10 + -2 + lVar11) = CONCAT11(bVar3,bVar3);
              *(undefined2 *)(lVar10 + lVar11) = 0xffff;
              lVar11 = lVar11 + 0x10;
            } while (uVar14 * 0x10 != lVar11);
          }
          uVar15 = uVar15 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar15 != param_3 + 7 >> 3);
      }
      break;
    case 0x37:
      FUN_147da5b54(&local_60);
      if (0 < (int)param_3) {
        lVar10 = *param_1;
        iVar12 = param_2 + 6;
        if (-1 < (int)(param_2 + 3)) {
          iVar12 = param_2 + 3;
        }
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        uVar14 = 1;
        if (1 < iVar12 >> 2) {
          uVar14 = (ulonglong)(uint)(iVar12 >> 2);
        }
        uVar15 = 0;
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            do {
              *(undefined8 *)(lVar10 + lVar11) = local_60;
              ((undefined8 *)(lVar10 + lVar11))[1] = uStack_58;
              lVar11 = lVar11 + 0x10;
            } while (uVar14 * 0x10 != lVar11);
          }
          uVar15 = uVar15 + 1;
          lVar10 = lVar10 + iVar6;
        } while (uVar15 != param_3 + 3 >> 2);
      }
      break;
    case 0x38:
      if (0 < (int)param_3) {
        bVar1 = *param_5;
        bVar2 = param_5[1];
        uVar8 = (uint)(bVar2 >> 1);
        bVar3 = param_5[2];
        iVar12 = param_2 + 6;
        if (-1 < (int)(param_2 + 3)) {
          iVar12 = param_2 + 3;
        }
        uVar14 = 1;
        if (1 < iVar12 >> 2) {
          uVar14 = (ulonglong)(uint)(iVar12 >> 2);
        }
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = *param_1 + 0xc;
        uVar15 = 0;
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            do {
              *(uint *)(lVar10 + -0xc + lVar11) =
                   (uint)(bVar1 >> 1) * 0x4080 + (uVar8 << 0x1c | uVar8 << 0x15) + 0x40;
              *(uint *)(lVar10 + -8 + lVar11) =
                   (uint)(bVar2 >> 5) + (uint)(bVar3 >> 1) * 0x408 + -0x20000;
              *(undefined8 *)(lVar10 + -4 + lVar11) = 0;
              lVar11 = lVar11 + 0x10;
            } while (uVar14 * 0x10 != lVar11);
          }
          uVar15 = uVar15 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar15 != param_3 + 3 >> 2);
      }
      break;
    default:
      if (param_4 != 0x25) {
        if ((param_4 == 0x27) && (0 < (int)param_3)) {
          uVar14 = (ulonglong)CONCAT11(*param_5,*param_5);
          iVar12 = param_2 + 6;
          if (-1 < (int)(param_2 + 3)) {
            iVar12 = param_2 + 3;
          }
          iVar6 = *(int *)((longlong)param_1 + 0xc);
          uVar15 = 1;
          if (1 < iVar12 >> 2) {
            uVar15 = (ulonglong)(uint)(iVar12 >> 2);
          }
          lVar10 = uVar15 - 1;
          auVar18._8_4_ = (int)lVar10;
          auVar18._0_8_ = lVar10;
          auVar18._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
          lVar10 = *param_1 + 8;
          uVar13 = 0;
          auVar19 = pmovsxbq(in_XMM1,0x100);
          auVar18 = auVar18 ^ _DAT_149931e80;
          auVar21 = pmovsxbq(in_XMM4,0x202);
          do {
            if (0 < (int)param_2) {
              lVar11 = 0;
              auVar23 = auVar19;
              do {
                if ((bool)(~(auVar18._0_8_ < SUB168(auVar23 ^ auVar7,0)) & 1)) {
                  *(ulonglong *)(lVar10 + -8 + lVar11) = uVar14;
                }
                if (SUB168(auVar23 ^ auVar7,8) <= auVar18._8_8_) {
                  *(ulonglong *)(lVar10 + lVar11) = uVar14;
                }
                lVar16 = auVar23._8_8_;
                auVar23._0_8_ = auVar23._0_8_ + auVar21._0_8_;
                auVar23._8_8_ = lVar16 + auVar21._8_8_;
                lVar11 = lVar11 + 0x10;
              } while ((ulonglong)((int)uVar15 + 1U & 0xfffffffe) << 3 != lVar11);
            }
            uVar13 = uVar13 + 1;
            lVar10 = lVar10 + iVar6;
          } while (uVar13 != param_3 + 3 >> 2);
        }
        break;
      }
    case 0x3c:
    case 0x3d:
      if (0 < (int)param_3) {
        uVar5 = *(undefined4 *)param_5;
        iVar12 = *(int *)((longlong)param_1 + 0xc);
        lVar10 = uVar14 - 1;
        auVar17._8_4_ = (int)lVar10;
        auVar17._0_8_ = lVar10;
        auVar17._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        lVar10 = *param_1 + 0xc;
        uVar14 = 0;
        auVar19 = pmovsxbq(in_XMM1,0x302);
        auVar21 = pmovsxbq(in_XMM2,0x100);
        auVar17 = auVar17 ^ _DAT_149931e80;
        auVar22 = pmovsxbq(in_XMM5,0x404);
        do {
          if (0 < (int)param_2) {
            lVar11 = 0;
            auVar26 = auVar21;
            auVar28 = auVar19;
            do {
              lVar16 = auVar17._0_8_;
              lVar20 = auVar17._8_8_;
              if ((bool)(~(lVar16 < SUB168(auVar26 ^ auVar7,0)) & 1)) {
                *(undefined4 *)(lVar10 + -0xc + lVar11) = uVar5;
              }
              if (SUB168(auVar26 ^ auVar7,8) <= lVar20) {
                *(undefined4 *)(lVar10 + -8 + lVar11) = uVar5;
              }
              if (SUB168(auVar28 ^ auVar7,0) <= lVar16) {
                *(undefined4 *)(lVar10 + -4 + lVar11) = uVar5;
              }
              if (SUB168(auVar28 ^ auVar7,8) <= lVar20) {
                *(undefined4 *)(lVar10 + lVar11) = uVar5;
              }
              lVar16 = auVar26._8_8_;
              auVar26._0_8_ = auVar26._0_8_ + auVar22._0_8_;
              auVar26._8_8_ = lVar16 + auVar22._8_8_;
              lVar16 = auVar28._8_8_;
              auVar28._0_8_ = auVar28._0_8_ + auVar22._0_8_;
              auVar28._8_8_ = lVar16 + auVar22._8_8_;
              lVar11 = lVar11 + 0x10;
            } while ((ulonglong)(param_2 + 3 >> 2) << 4 != lVar11);
          }
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + iVar12;
        } while (uVar14 != uVar15);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da7c0a FUN_147da7c0a body=28 status=ok
// SIG undefined FUN_147da7c0a(void)

int FUN_147da7c0a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_2 < *(int *)(param_1 + 0x160)) {
    iVar1 = (int)*(char *)(*(longlong *)(param_1 + 0x158) + (longlong)param_2);
  }
  return iVar1;
}



// FUNCTION 147da7c26 FUN_147da7c26 body=97 status=ok
// SIG undefined FUN_147da7c26(void)

void FUN_147da7c26(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar4 = FUN_14377fadd();
  *param_2 = uVar4;
  lVar2 = DAT_14cb0f7a0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  uVar1 = *(uint *)(lVar2 + uVar5 * 4);
  uVar6 = 8;
  if (uVar1 < 8) {
    uVar6 = uVar1;
  }
  param_2[1] = uVar6 + 1 & 0x1e;
  return;
}



// FUNCTION 147da7e02 FUN_147da7e02 body=658 status=ok
// SIG undefined FUN_147da7e02(void)

void FUN_147da7e02(longlong param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1427dc336(local_58);
  switchD_143c3d4dc::caseD_3d(param_1,local_58);
  iVar1 = (uint)*(byte *)(param_1 + 0x3c) * 8 + 0xc;
  if (*(int *)(param_1 + 0x28) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  bVar4 = 0;
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  iVar3 = 4;
  if (*(int *)(param_1 + 0x2c) < 4) {
    iVar3 = *(int *)(param_1 + 0x2c);
  }
  bVar2 = (byte)iVar3;
  if (iVar3 < 1) {
    bVar2 = 0;
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a83b10(&local_88,(0x40 << (bVar2 & 0x1f)) << ((byte)iVar1 & 0x1f));
  FUN_1446ddc76(&local_90,&DAT_149eda610,1);
  local_78 = local_90;
  local_70 = (undefined4)local_88;
  uStack_6c = local_88._4_4_;
  uStack_68 = (undefined4)uStack_80;
  uStack_64 = uStack_80._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_60 = 2;
  FUN_1407c67d8(param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (uint)*(byte *)(param_1 + 0x3c) * 8 + 0xc;
  if (*(int *)(param_1 + 0x28) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (0 < iVar1) {
    bVar4 = (byte)iVar1;
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a83b10(&local_88,1 << (bVar4 & 0x1f));
  FUN_1446ddc76(&local_b8,"TileCount",1);
  local_b0 = local_b8;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 2;
  FUN_1407c67d8(param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (3 < iVar1) {
    iVar1 = 4;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a83b10(&local_88,0x40 << ((byte)iVar1 & 0x1f));
  FUN_1446ddc76(&local_e0,"TileSize",1);
  local_d8 = local_e0;
  local_d0 = (undefined4)local_88;
  uStack_cc = local_88._4_4_;
  uStack_c8 = (undefined4)uStack_80;
  uStack_c4 = uStack_80._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_c0 = 2;
  FUN_1407c67d8(param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  iVar1 = 4;
  if (*(int *)(param_1 + 0x30) < 4) {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  local_88 = 0;
  uStack_80 = 0;
  FUN_144a83b10(&local_88,iVar3 * 2);
  FUN_1446ddc76(&local_108,"TileBorderSize",1);
  local_100 = local_108;
  local_f8 = (undefined4)local_88;
  uStack_f4 = local_88._4_4_;
  uStack_f0 = (undefined4)uStack_80;
  uStack_ec = uStack_80._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  local_e8 = 2;
  FUN_1407c67d8(param_2);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da80a6 FUN_147da80a6 body=321 status=ok
// SIG undefined FUN_147da80a6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147da80a6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_4088 [40];
  longlong local_4060;
  undefined1 local_4058 [16384];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4088;
  puVar2 = *(uint **)(*(longlong *)(param_1 + 0x18) + 0x10);
  lVar3 = *(longlong *)(puVar2 + 0x2a);
  uVar10 = (ulonglong)*puVar2;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000000;
  if (uVar10 != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x60) * 0x90;
    piVar7 = (int *)(lVar3 + lVar5 + 0x68);
    uVar9 = 0;
    do {
      iVar1 = piVar7[-1];
      uVar9 = uVar9 + 1;
      piVar4 = (int *)(lVar3 + lVar5 + 0x60);
      if (uVar9 < uVar10) {
        piVar4 = piVar7;
      }
      uVar8 = *piVar4 - iVar1;
      if (uVar8 != 0) {
        local_4060 = 0;
        uVar11 = (ulonglong)uVar8;
        (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,&local_4060,iVar1,uVar11);
        if (local_4060 < (longlong)uVar11) {
          FUN_147da81e8(local_4058,uVar8,1);
          puVar6 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar6 = local_4058;
          }
          (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,puVar6,iVar1,uVar11);
        }
      }
      piVar7 = piVar7 + 1;
    } while (uVar10 != uVar9);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4088) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da81e8 FUN_147da81e8 body=90 status=ok
// SIG undefined FUN_147da81e8(void)

void FUN_147da81e8(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4008);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x4008) = param_2;
    if ((uint)(*(int *)(param_1 + 0x400c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147daf4fe();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x4008) = param_2, param_3 == '\x01')) {
      FUN_147daf5fc();
      return;
    }
  }
  return;
}



// FUNCTION 147da8254 FUN_147da8254 body=2344 status=ok
// SIG undefined FUN_147da8254(void)

void FUN_147da8254(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  uint local_1ec;
  undefined **local_1e8;
  undefined5 uStack_1e0;
  undefined4 uStack_1db;
  undefined1 uStack_1d7;
  undefined6 uStack_1d6;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a8;
  undefined8 local_e8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab009d4);
  iVar6 = FUN_1448332aa(param_2,&DAT_14ab009d4);
  local_1d0 = (longlong)&uStack_1db + 3;
  local_1e8 = &PTR_FUN_149e37810;
  uStack_1e0 = SUB85(param_2,0);
  uStack_1db._0_3_ = (undefined3)((ulonglong)param_2 >> 0x28);
  pppuVar9 = &local_1e8;
  uStack_1db._3_1_ = SUB81(pppuVar9,0);
  uStack_1d7 = (undefined1)((ulonglong)pppuVar9 >> 8);
  uStack_1d6 = (undefined6)((ulonglong)pppuVar9 >> 0x10);
  switchD_143c3d4dc::caseD_20(param_1);
  local_1f0 = 0;
  local_1f4 = 0;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f0,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f0);
    }
  }
  else {
    local_1f0 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f4,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f4);
    }
  }
  else {
    local_1f4 = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  local_1f8 = 0;
  local_1fc = 0;
  puVar4 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f8,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f8);
    }
  }
  else {
    local_1f8 = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1fc,4);
    }
    else {
      FUN_14572512c(param_2,&local_1fc);
    }
  }
  else {
    local_1fc = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  local_200 = 0;
  puVar4 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_200,4);
    }
    else {
      FUN_14572512c(param_2,&local_200);
    }
  }
  else {
    local_200 = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  local_e8 = 0x1000000000;
  (**(code **)(*param_2 + 0x10))(param_2,0,0x100);
  local_1ec = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_1ec = (uint)local_e8;
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar3 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar3) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1ec,4);
    }
    else {
      FUN_14572512c(param_2,&local_1ec);
    }
  }
  else {
    local_1ec = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar3;
  }
  uVar7 = local_1ec;
  if (local_1ec == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_143793374(&local_1e8,local_e8 & 0xffffffff);
      uVar5 = local_e8 >> 0x20;
      local_e8 = local_e8 & 0xffffffff00000000;
      if ((int)uVar5 != 0) {
        FUN_143793534(&local_1e8,0);
      }
    }
  }
  else if ((((int)local_1ec < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_1ec && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_e8 = CONCAT44(local_e8._4_4_,local_1ec);
    lVar10 = 0;
    do {
      FUN_14379339f(param_2,pppuVar9);
      lVar10 = lVar10 + 1;
      pppuVar9 = pppuVar9 + 2;
    } while (lVar10 < (int)(uint)local_e8);
  }
  else {
    FUN_143793374(&local_1e8,local_e8 & 0xffffffff);
    uVar5 = local_e8 >> 0x20;
    local_e8 = local_e8 & 0xffffffff00000000;
    if ((uint)uVar5 != uVar7) {
      FUN_143793534(&local_1e8,uVar7);
    }
    if (0 < (int)local_1ec) {
      iVar8 = 0;
      do {
        uVar5 = local_e8;
        lVar10 = (longlong)(int)(uint)local_e8;
        uVar7 = (uint)local_e8 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,uVar7);
        if (local_e8._4_4_ < uVar7) {
          FUN_1437937e0(&local_1e8,uVar5 & 0xffffffff);
        }
        (&local_1e8)[lVar10 * 2] = (undefined **)0x0;
        *(undefined8 *)((longlong)&stack0xfffffffffffffe20 + lVar10 * 0x10) = 0;
        FUN_14379339f(param_2);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_1ec);
    }
  }
  pppuVar9 = &local_1e8;
  FUN_143793374(pppuVar9,local_e8 & 0xffffffff);
  if (1 < iVar6) {
    uVar5 = (ulonglong)local_1e8 >> 0x20;
    local_1e8 = (undefined **)((ulonglong)local_1e8 & 0xffffffff00000000);
    local_1ec = 0;
    puVar4 = (ulonglong *)param_2[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1e8,4);
      }
      else {
        FUN_14572512c(param_2,&local_1e8);
      }
    }
    else {
      local_1e8 = (undefined **)CONCAT44((int)uVar5,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    puVar4 = (ulonglong *)param_2[1];
    if (puVar4[1] < *puVar4 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1ec,4);
      }
      else {
        FUN_14572512c(param_2,&local_1ec);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  local_1f0 = 0;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1f0,4);
    }
    else {
      FUN_14572512c(param_2,&local_1f0);
    }
  }
  else {
    local_1f0 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (0 < local_1f0)) {
    iVar8 = 0;
    do {
      local_1e8 = (undefined **)0x0;
      uStack_1e0 = 0;
      uStack_1db = uStack_1db & 0xff000000;
      FUN_14021219d(param_2,&local_1e8);
      if (local_1e8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_1f0);
  }
  if (iVar6 - 1U < 4) {
    local_1a8 = 0x400000000;
    (**(code **)(*param_2 + 0x10))(param_2,0,0x40);
    local_1ec = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_1ec = (uint)local_1a8;
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar3 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1ec,4);
      }
      else {
        FUN_14572512c(param_2,&local_1ec);
      }
    }
    else {
      local_1ec = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar3;
    }
    uVar7 = local_1ec;
    if (local_1ec == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_143793806(&local_1e8,local_1a8 & 0xffffffff);
        uVar5 = local_1a8 >> 0x20;
        local_1a8 = local_1a8 & 0xffffffff00000000;
        if ((int)uVar5 != 0) {
          FUN_143793a1c(&local_1e8,0);
        }
      }
    }
    else if ((((int)local_1ec < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0x100000 < local_1ec && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_1a8 = CONCAT44(local_1a8._4_4_,local_1ec);
      lVar10 = 0;
      do {
        FUN_14379386b(param_2,pppuVar9);
        lVar10 = lVar10 + 1;
        pppuVar9 = pppuVar9 + 2;
      } while (lVar10 < (int)(uint)local_1a8);
    }
    else {
      FUN_143793806(&local_1e8,local_1a8 & 0xffffffff);
      uVar5 = local_1a8 >> 0x20;
      local_1a8 = local_1a8 & 0xffffffff00000000;
      if ((uint)uVar5 != uVar7) {
        FUN_143793a1c(&local_1e8,uVar7);
      }
      if (0 < (int)local_1ec) {
        iVar8 = 0;
        do {
          uVar5 = local_1a8;
          lVar10 = (longlong)(int)(uint)local_1a8;
          uVar7 = (uint)local_1a8 + 1;
          local_1a8 = CONCAT44(local_1a8._4_4_,uVar7);
          if (local_1a8._4_4_ < uVar7) {
            FUN_143793d00(&local_1e8,uVar5 & 0xffffffff);
          }
          (&local_1e8)[lVar10 * 2] = (undefined **)0x0;
          *(undefined8 *)((longlong)&stack0xfffffffffffffe20 + lVar10 * 0x10) = 0;
          FUN_14379386b(param_2);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)local_1ec);
      }
    }
    FUN_143793806(&local_1e8,local_1a8 & 0xffffffff);
  }
  local_1ec = 0;
  puVar4 = (ulonglong *)param_2[1];
  puVar3 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar3) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1ec,4);
    }
    else {
      FUN_14572512c(param_2,&local_1ec);
    }
  }
  else {
    local_1ec = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar3;
  }
  if (0 < (int)local_1ec) {
    iVar8 = 0;
    do {
      if (param_2[0xd] == 0) {
        bVar11 = false;
      }
      else {
        bVar11 = *(longlong *)(param_2[0xd] + 0x10) != 0;
      }
      if (3 < iVar6) {
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,(uint)bVar11);
          (**(code **)(*param_2 + 0x170))(param_2,&local_1e8,4);
          if (1 < (uint)local_1e8) {
            FUN_14572541c(param_2);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      local_1e8 = (undefined **)0x0;
      uStack_1e0 = 0;
      uStack_1d6 = 0;
      uStack_1d7 = 0xff;
      uStack_1db = 0xffffffff;
      local_1c8 = DAT_14c845dc4;
      local_1d0 = DAT_14c845dbc;
      local_210 = 0;
      local_218 = 1;
      FUN_140430222(&local_1e8,param_2,param_1,0);
      FUN_1400ea36e(&local_1e8,&local_1e8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_1ec);
  }
  if (2 < iVar6) {
    uVar5 = (ulonglong)local_1e8 >> 0x20;
    local_1e8 = (undefined **)((ulonglong)local_1e8 & 0xffffffff00000000);
    puVar4 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1e8,4);
      }
      else {
        FUN_14572512c(param_2,&local_1e8);
      }
      iVar6 = (uint)local_1e8;
    }
    else {
      iVar6 = *(int *)*puVar4;
      local_1e8 = (undefined **)CONCAT44((int)uVar5,iVar6);
      *puVar4 = (ulonglong)piVar1;
    }
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        local_1f4 = 0;
        puVar4 = (ulonglong *)param_2[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_1f4,4);
          }
          else {
            FUN_14572512c(param_2,&local_1f4);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)local_1e8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da8ba6 FUN_147da8ba6 body=42 status=ok
// SIG undefined FUN_147da8ba6(void)

void FUN_147da8ba6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147da8bd4 FUN_147da8bd4 body=96 status=ok
// SIG undefined FUN_147da8bd4(void)

undefined8 FUN_147da8bd4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0db44();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb10520,1);
  return uVar3;
}



// FUNCTION 147da8c34 FUN_147da8c34 body=52 status=ok
// SIG undefined FUN_147da8c34(void)

void FUN_147da8c34(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147da8c68 FUN_147da8c68 body=387 status=ok
// SIG undefined FUN_147da8c68(void)

undefined8 FUN_147da8c68(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar4 = FUN_144a79692();
    lVar6 = *(longlong *)(param_1 + 0x138);
    if (lVar6 != 0) {
      if ((((lVar4 == 0) || (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 == 0)) ||
          (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar4 = FUN_144a805b8();
        lVar6 = *(longlong *)(param_1 + 0x138);
        if (lVar6 != 0) {
          uVar5 = 0;
          if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 == 0)) goto LAB_147da8d09;
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) goto LAB_147da8cfe;
        }
      }
      else {
LAB_147da8cfe:
        if ((*(byte *)(lVar6 + 0xfe) & 4) == 0) {
          local_38 = 0;
          FUN_147da8dec();
          if (*(char *)(param_1 + 0x148) == '\x01') {
            iVar7 = (int)local_38;
            uVar8 = local_38._4_4_;
          }
          else {
            uVar8 = 0x400;
            if (*(uint *)(param_1 + 0x14c) < 0x400) {
              uVar8 = *(uint *)(param_1 + 0x14c);
            }
            uVar3 = 0x10;
            if (0x10 < uVar8) {
              uVar3 = uVar8;
            }
            uVar1 = (ulonglong)(uVar3 - 1) * 2 + 1;
            lVar6 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar7 = 1 << ((byte)lVar6 & 0x1f);
            uVar8 = 8;
            if (*(uint *)(param_1 + 0x150) < 8) {
              uVar8 = *(uint *)(param_1 + 0x150);
            }
            uVar8 = uVar8 + 1 & 0x1e;
          }
          if (*(longlong *)(param_1 + 0x140) == 0) {
            local_40 = 0;
          }
          else {
            local_40 = FUN_147d6e2de(*(longlong *)(param_1 + 0x140),0);
          }
          uVar5 = FUN_14001cc68(0xb8,0x10);
          local_48 = uVar8;
          FUN_147da8e98(uVar5,param_1,*(undefined8 *)(param_1 + 0x138),iVar7);
          goto LAB_147da8d09;
        }
      }
    }
  }
  uVar5 = 0;
LAB_147da8d09:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da8dec FUN_147da8dec body=171 status=ok
// SIG undefined FUN_147da8dec(void)

void FUN_147da8dec(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar2 = DAT_14cb0fce8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (*piVar1 == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  uVar4 = *(uint *)(lVar2 + uVar5 * 4);
  uVar6 = 0x400;
  if (uVar4 < 0x400) {
    uVar6 = uVar4;
  }
  uVar4 = 0x10;
  if (0x10 < uVar6) {
    uVar4 = uVar6;
  }
  uVar5 = (ulonglong)(uVar4 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  *param_1 = 1 << ((byte)lVar2 & 0x1f);
  lVar2 = DAT_14cb0fd00;
  if (*piVar1 == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar3 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar3 ^ 1);
  }
  uVar4 = *(uint *)(lVar2 + uVar5 * 4);
  uVar6 = 8;
  if (uVar4 < 8) {
    uVar6 = uVar4;
  }
  param_1[1] = uVar6 + 1 & 0x1e;
  return;
}



// FUNCTION 147da8e98 FUN_147da8e98 body=544 status=ok
// SIG undefined FUN_147da8e98(void)

undefined8 *
FUN_147da8e98(undefined8 *param_1,longlong param_2,longlong *param_3,uint param_4,undefined4 param_5
             ,byte param_6)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar3 = (uint)param_6;
  FUN_147d6e8a0();
  *param_1 = &PTR_FUN_14ab08590;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x100000000;
  param_1[10] = *(undefined8 *)(param_2 + 0x18);
  lVar6 = FUN_144a79778(param_2);
  param_1[0xb] = *(undefined8 *)(lVar6 + 0x18);
  uVar7 = FUN_1447b4020(param_3);
  param_1[0x12] = uVar7;
  if (param_3 == (longlong *)0x0) {
LAB_147da8f72:
    bVar2 = 0;
  }
  else {
    lVar6 = FUN_144a79692();
    if ((*(int *)(param_3[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) {
      lVar6 = FUN_144a805b8();
      if ((*(int *)(param_3[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_147da8f72;
      bVar2 = (**(code **)(*param_3 + 0x3b8))(param_3);
    }
    else {
      bVar2 = FUN_147d6e2de(param_3);
      uVar4 = FUN_144b2b4be(param_3);
      *(undefined4 *)(param_1 + 0x16) = uVar4;
    }
    *(byte *)((longlong)param_1 + 0x46) = *(byte *)((longlong)param_3 + 0xfe) & 1;
    uVar5 = (uint)bVar2;
    if (param_6 == 0) {
      uVar3 = uVar5;
    }
    if (((uVar5 - 5 < 0x40) && ((0x809c180479840007U >> ((ulonglong)(uVar5 - 5) & 0x3f) & 1) != 0))
       || ((uVar5 - 0x4f < 0xe && ((0x2037U >> (uVar5 - 0x4f & 0x1f) & 1) != 0))))
    goto LAB_147da8f98;
  }
  if (((0x3c < uVar3 - 0x20) ||
      ((0x101b80101203000fU >> ((ulonglong)(uVar3 - 0x20) & 0x3f) & 1) == 0)) && (1 < uVar3 - 0x1c))
  {
    bVar2 = (byte)uVar3;
  }
LAB_147da8f98:
  *(byte *)(param_1 + 0x13) = bVar2;
  *(uint *)((longlong)param_1 + 0x9c) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  fVar8 = (float)(**(code **)(*param_3 + 0x350))(param_3);
  *(uint *)((longlong)param_1 + 0xa4) = (((int)(longlong)fVar8 + param_4) - 1) / param_4;
  uVar3 = *(uint *)((longlong)param_1 + 0x9c);
  fVar8 = (float)(**(code **)(*param_3 + 0x358))(param_3);
  uVar3 = (((int)(longlong)fVar8 + uVar3) - 1) / uVar3;
  *(uint *)(param_1 + 0x15) = uVar3;
  uVar5 = *(uint *)((longlong)param_1 + 0xa4);
  if (*(uint *)((longlong)param_1 + 0xa4) < uVar3) {
    uVar5 = uVar3;
  }
  uVar1 = (ulonglong)((uVar5 - 1) + (uint)(uVar5 == 0)) * 2 + 1;
  lVar6 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  *(int *)((longlong)param_1 + 0xac) = (int)lVar6;
  return param_1;
}



// FUNCTION 147da9100 FUN_147da9100 body=103 status=ok
// SIG undefined FUN_147da9100(void)

void FUN_147da9100(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(*param_2 + 8);
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da9184 FUN_147da9184 body=283 status=ok
// SIG undefined FUN_147da9184(void)

undefined8 FUN_147da9184(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Src;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar7 = (longlong)*(int *)(param_1 + 0x58);
  if (0 < lVar7) {
    iVar3 = *(int *)(param_2 + 1);
    uVar4 = *param_2;
    uVar8 = lVar7 + 1;
    piVar6 = (int *)(*plVar1 + lVar7 * 0x28 + -0x10);
    do {
      if ((((iVar3 == piVar6[-4]) &&
           (cVar5 = FUN_147dafb32(uVar4,*(undefined8 *)(piVar6 + -6),iVar3), cVar5 != '\0')) &&
          (*(int *)((longlong)param_2 + 0x14) == piVar6[-1])) &&
         (*(int *)(param_2 + 2) == piVar6[-2])) {
        if (*piVar6 != *(int *)(param_2 + 3)) {
          *piVar6 = *(int *)(param_2 + 3);
          FUN_143783c16();
          return 1;
        }
        return 0;
      }
      uVar8 = uVar8 - 1;
      piVar6 = piVar6 + -10;
    } while (1 < uVar8);
  }
  FUN_143783c16();
  iVar3 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
    FUN_147347c96(plVar1,iVar3);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x28);
  *puVar2 = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(puVar2 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_145740780(puVar2,iVar3,0);
    memcpy((void *)*puVar2,_Src,(longlong)iVar3);
  }
  puVar2[4] = param_2[4];
  uVar4 = param_2[3];
  puVar2[2] = param_2[2];
  puVar2[3] = uVar4;
  return 1;
}



// FUNCTION 147da929f FUN_147da929f body=563 status=ok
// SIG undefined FUN_147da929f(void)

void FUN_147da929f(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_88 [36];
  int local_64;
  longlong local_60;
  int local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145a3347a(&local_60,0x10,1,0x200000);
  uVar11 = (ulonglong)local_50;
  if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
    do {
      cVar5 = (**(code **)(**(longlong **)(local_60 + (uVar11 & 0xffffffff) * 8) + 0x330))();
      if ((cVar5 != '\0') &&
         ((plVar8 = (longlong *)
                    FUN_1447b4020(*(undefined8 *)(local_60 + (longlong)(int)local_50 * 8)),
          plVar8 != (longlong *)0x0 &&
          (iVar6 = (**(code **)(*plVar8 + 200))(plVar8), iVar6 == (int)param_1[1])))) {
        uVar11 = 0;
        do {
          if ((longlong)(int)param_1[1] <= (longlong)uVar11) {
            (**(code **)(**(longlong **)(local_60 + (longlong)(int)local_50 * 8) + 0x318))();
            break;
          }
          lVar10 = *param_1;
          cVar5 = (**(code **)(*plVar8 + 0xa0))(plVar8,uVar11 & 0xffffffff);
          pcVar1 = (char *)(lVar10 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pcVar1 == cVar5);
      }
      uVar11 = (longlong)(int)local_50;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
        local_50 = (uint)uVar11;
        if ((longlong)local_58 <= (longlong)uVar11) break;
      } while (*(longlong *)(local_60 + uVar11 * 8) == 0);
    } while ((-2 < (longlong)uVar12) && ((int)local_50 < local_58));
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1457b22ec(&local_60);
  uVar11 = (ulonglong)local_50;
  lVar10 = local_60;
  local_64 = local_58;
  if ((int)local_50 < local_58 && -1 < (int)local_50) {
    do {
      uVar13 = (uint)uVar11;
      lVar2 = *(longlong *)(lVar10 + (uVar11 & 0xffffffff) * 8);
      lVar3 = *(longlong *)(lVar2 + 0x2d8);
      if (lVar3 != 0) {
        bVar9 = *(char *)(lVar3 + 0x34) - 2;
        uVar7 = 1;
        if (bVar9 < 4) {
          uVar7 = *(uint *)(&DAT_14ab09a94 + (ulonglong)bVar9 * 4);
        }
        if (uVar7 == *(uint *)(param_1 + 1)) {
          lVar4 = *param_1;
          uVar11 = 0;
          do {
            if (uVar7 == uVar11) {
              FUN_1448215fa(lVar2);
              lVar10 = local_60;
              uVar13 = local_50;
              local_64 = local_58;
              break;
            }
            cVar5 = FUN_1412d295c(lVar3,uVar11 & 0xffffffff);
            pcVar1 = (char *)(lVar4 + uVar11);
            uVar11 = uVar11 + 1;
          } while (*pcVar1 == cVar5);
        }
      }
      uVar11 = (longlong)(int)uVar13;
      do {
        uVar12 = uVar11;
        uVar11 = uVar12 + 1;
        local_50 = (uint)uVar11;
        if ((longlong)local_64 <= (longlong)uVar11) break;
      } while (*(longlong *)(lVar10 + uVar11 * 8) == 0);
    } while ((-2 < (longlong)uVar12) && ((int)local_50 < local_64));
  }
  if (lVar10 != 0) {
    FUN_1400020a8(lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da94d4 FUN_147da94d4 body=48 status=ok
// SIG undefined FUN_147da94d4(void)

void FUN_147da94d4(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)(*param_1 + 8))(param_1,0);
  }
  param_1[4] = -0x101010101010102;
  param_1[5] = -0x101010101010102;
  param_1[2] = -0x101010101010102;
  param_1[3] = -0x101010101010102;
  *param_1 = -0x101010101010102;
  param_1[1] = -0x101010101010102;
  return;
}



// FUNCTION 147da9508 FUN_147da9508 body=924 status=ok
// SIG undefined FUN_147da9508(void)

void FUN_147da9508(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  uVar16 = (**(code **)(*param_1 + 0x20))(param_1,&local_78);
  uVar13 = uStack_70;
  *(undefined4 *)(param_1 + 5) = uVar16;
  iVar5 = (int)uStack_70;
  uVar12 = uStack_70 & 0xffffffff;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if ((int)uStack_70 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  uStack_90._4_4_ = 0;
  if (uVar12 != 0) {
    FUN_14481578e(&local_88,uStack_70 & 0xffffffff);
  }
  if ((int)uStack_90._4_4_ < iVar5) {
    FUN_14481578e(&local_98,uVar13 & 0xffffffff);
  }
  puVar1 = (ulonglong *)(param_1 + 1);
  FUN_147da98a6(puVar1,uVar13 & 0xffffffff);
  puVar2 = (ulonglong *)(param_1 + 3);
  FUN_147cce946(puVar2,uVar13 & 0xffffffff,1);
  if (uVar12 != 0) {
    fVar4 = *(float *)(param_1 + 5);
    iVar14 = iVar5 + 1;
    uVar13 = (ulonglong)(iVar5 - 1);
    do {
      uVar6 = uStack_80;
      uVar12 = uStack_90;
      *(float *)(local_78 + uVar13 * 4) =
           *(float *)(local_78 + uVar13 * 4) *
           (float)(-(uint)(fVar4 != 0.0) & (uint)((float)iVar5 / fVar4));
      pfVar3 = (float *)(local_78 + uVar13 * 4);
      if (1.0 < *pfVar3 || *pfVar3 == 1.0) {
        iVar10 = (uint)uStack_90;
        uVar7 = (uint)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
        plVar8 = &local_98;
        if (uStack_90._4_4_ < uVar7) {
          FUN_1446f48e2(&local_98,uVar12 & 0xffffffff);
        }
      }
      else {
        iVar10 = (uint)uStack_80;
        uVar7 = (uint)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
        plVar8 = &local_88;
        if (uStack_80._4_4_ < uVar7) {
          FUN_1446f48e2(&local_88,uVar6 & 0xffffffff);
        }
      }
      *(int *)(*plVar8 + (longlong)iVar10 * 4) = (int)uVar13;
      iVar14 = iVar14 + -1;
      uVar13 = uVar13 - 1;
    } while (1 < iVar14);
  }
  if ((uint)uStack_90 != 0 && (uint)uStack_80 != 0) {
    uVar7 = (uint)uStack_80;
    uVar9 = (uint)uStack_90;
    do {
      lVar11 = (longlong)*(int *)(local_88 + -4 + (longlong)(int)uVar7 * 4);
      iVar14 = uVar7 - 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar14);
      iVar5 = *(int *)(local_98 + -4 + (longlong)(int)uVar9 * 4);
      lVar15 = (longlong)iVar5;
      iVar10 = uVar9 - 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar10);
      uVar13 = *puVar1;
      uVar12 = ((longlong)uVar13 >> 0x18) + (longlong)puVar1;
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar13;
      }
      *(undefined4 *)(uVar12 + lVar11 * 4) = *(undefined4 *)(local_78 + lVar11 * 4);
      uVar13 = *puVar2;
      uVar12 = ((longlong)uVar13 >> 0x18) + (longlong)puVar2;
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar13;
      }
      *(int *)(uVar12 + lVar11 * 4) = iVar5;
      *(float *)(local_78 + lVar15 * 4) =
           *(float *)(local_78 + lVar15 * 4) + *(float *)(local_78 + lVar11 * 4) + -1.0;
      pfVar3 = (float *)(local_78 + lVar15 * 4);
      if (1.0 < *pfVar3 || *pfVar3 == 1.0) {
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
        plVar8 = &local_98;
        iVar14 = iVar10;
        if (uStack_90._4_4_ < uVar9) {
          FUN_1446f48e2(&local_98);
        }
      }
      else {
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
        plVar8 = &local_88;
        if (uStack_80._4_4_ < uVar7) {
          FUN_1446f48e2(&local_88);
        }
      }
      *(int *)(*plVar8 + (longlong)iVar14 * 4) = iVar5;
    } while (((uint)uStack_80 != 0) &&
            (uVar7 = (uint)uStack_80, uVar9 = (uint)uStack_90, (uint)uStack_90 != 0));
  }
  uVar7 = (uint)uStack_80;
  if ((uint)uStack_90 != 0) {
    lVar11 = 0;
    do {
      uVar13 = *puVar1;
      uVar12 = ((longlong)uVar13 >> 0x18) + (longlong)puVar1;
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar13;
      }
      *(undefined4 *)(uVar12 + (longlong)*(int *)(local_98 + lVar11) * 4) = 0x3f800000;
      uVar13 = *puVar2;
      uVar12 = ((longlong)uVar13 >> 0x18) + (longlong)puVar2;
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar13;
      }
      *(int *)(uVar12 + (longlong)*(int *)(local_98 + lVar11) * 4) = *(int *)(local_98 + lVar11);
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)(uint)uStack_90 * 4 != lVar11);
    uVar7 = (uint)uStack_80;
  }
  if (uVar7 != 0) {
    lVar11 = 0;
    do {
      uVar13 = *puVar1;
      uVar12 = ((longlong)uVar13 >> 0x18) + (longlong)puVar1;
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar13;
      }
      *(undefined4 *)(uVar12 + (longlong)*(int *)(local_88 + lVar11) * 4) = 0x3f800000;
      uVar13 = *puVar2;
      uVar12 = ((longlong)uVar13 >> 0x18) + (longlong)puVar2;
      if ((uVar13 & 1) == 0) {
        uVar12 = uVar13;
      }
      *(int *)(uVar12 + (longlong)*(int *)(local_88 + lVar11) * 4) = *(int *)(local_88 + lVar11);
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)uVar7 * 4 != lVar11);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da98a6 FUN_147da98a6 body=42 status=ok
// SIG undefined FUN_147da98a6(void)

void FUN_147da98a6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14066e04e();
      return;
    }
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 8) = param_2;
    FUN_14737b8a8();
    return;
  }
  return;
}



// FUNCTION 147da98da FUN_147da98da body=38 status=ok
// SIG undefined FUN_147da98da(void)

void FUN_147da98da(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147da9900();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147da9900 FUN_147da9900 body=48 status=ok
// SIG undefined FUN_147da9900(void)

undefined8 FUN_147da9900(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x3f0), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xd0);
  }
  return 0;
}



// FUNCTION 147da993e FUN_147da993e body=270 status=ok
// SIG undefined FUN_147da993e(void)

void FUN_147da993e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar2 != 0)) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_14798f98e(lVar2,&local_38,0);
    lVar2 = local_38;
    lVar3 = (longlong)(int)uStack_30;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar4) + 0xa68))();
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x178) + 8) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + 8 + lVar3);
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0)) {
        *(undefined8 *)(lVar2 + 8 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x78;
    } while ((longlong)iVar1 * 0x78 - lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147da9a8e FUN_147da9a8e body=166 status=ok
// SIG undefined FUN_147da9a8e(void)

longlong * FUN_147da9a8e(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14480c34d();
  FUN_1401fb57a(param_1,param_2 + 0x18);
  puVar1 = (undefined4 *)(param_2 + 0x30);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
    }
    else {
      FUN_14572512c(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined1 *)(param_2 + 0x34) = 1;
    if ((*(float *)(param_2 + 0x30) < 1.0) || (1e+25 < *(float *)(param_2 + 0x30))) {
      *puVar1 = 0x461c4000;
    }
  }
  return param_1;
}



// FUNCTION 147da9b34 FUN_147da9b34 body=249 status=ok
// SIG undefined FUN_147da9b34(void)

void FUN_147da9b34(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [6];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_58 = 0;
  local_50 = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((char)param_2 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(lVar1 + 0xc0) == 0) {
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      *(longlong *)(lVar1 + 0xc0) = param_1;
    }
    lVar1 = FUN_144a79778(param_1);
    *(byte *)(lVar1 + 0x2e) = *(byte *)(lVar1 + 0x2e) | 2;
  }
  FUN_147daff94(param_1,param_2,local_88 + 2,local_88);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(local_88 + 2);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da9c4c FUN_147da9c4c body=58 status=ok
// SIG undefined FUN_147da9c4c(void)

void FUN_147da9c4c(longlong param_1,longlong *param_2)

{
  if ((*(char *)(*param_2 + 0x3b) == '\x01') &&
     ((*(byte *)(*(longlong *)(param_1 + 0x30) + 0x240) & 2) == 0)) {
    FUN_14621b55a(*(longlong *)(param_1 + 0x30),1,0);
    *(undefined1 *)(*param_2 + 0x90) = 1;
  }
  return;
}



// FUNCTION 147da9c8c FUN_147da9c8c body=105 status=ok
// SIG undefined FUN_147da9c8c(void)

void FUN_147da9c8c(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  *(int *)(local_20 + 0x94) = *(int *)(local_20 + 0x94) + 1;
  switchD_143c3d4dc::caseD_15();
  if ((*(char *)(*param_2 + 0x3b) == '\x01') && (*(char *)(*param_2 + 0x90) == '\x01')) {
    FUN_1408dc6b8(*(undefined8 *)(param_1 + 0x30));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147da9cf6 FUN_147da9cf6 body=101 status=ok
// SIG undefined FUN_147da9cf6(void)

longlong FUN_147da9cf6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (lVar1 == 0) {
    lVar1 = FUN_1460d9905(DAT_14c951640,0,0,0,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x208) = lVar1;
  }
  return lVar1;
}



// FUNCTION 147da9d5c FUN_147da9d5c body=23 status=ok
// SIG undefined FUN_147da9d5c(void)

undefined8 FUN_147da9d5c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x260) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x260) + 0x350);
  }
  return 0;
}



// FUNCTION 147da9d74 FUN_147da9d74 body=15 status=ok
// SIG undefined FUN_147da9d74(void)

undefined8 FUN_147da9d74(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 400) + (longlong)param_2 * 8);
}



// FUNCTION 147da9d83 FUN_147da9d83 body=175 status=ok
// SIG undefined FUN_147da9d83(void)

undefined8 FUN_147da9d83(undefined8 param_1)

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
  local_b8 = FUN_1459e9c6e();
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



// FUNCTION 147da9e34 FUN_147da9e34 body=8 status=ok
// SIG undefined FUN_147da9e34(void)

undefined8 FUN_147da9e34(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// FUNCTION 147da9e3c FUN_147da9e3c body=643 status=ok
// SIG undefined FUN_147da9e3c(void)

undefined4 FUN_147da9e3c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = FUN_1449a7b8c();
  if ((char)uVar2 == '\0') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1401031ac(param_1,0,&local_58);
    lVar3 = *param_3;
    if (&local_58 == param_3) {
      iVar4 = (int)param_3[1];
    }
    else {
      if (lVar3 != 0) {
        FUN_1400020a8(lVar3);
      }
      lVar3 = local_58;
      *param_3 = local_58;
      local_58 = 0;
      iVar4 = (int)uStack_50;
      *(int *)(param_3 + 1) = (int)uStack_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
    }
    iVar1 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_2,lVar3,iVar1);
  }
  else {
    lVar3 = FUN_144b00ba4(param_1);
    FUN_1468750d6(lVar3 + 0x38,&local_58);
    FUN_140c50e9c(local_68,&local_58,1);
    local_88[0] = *(longlong *)(lVar3 + 0x18);
    FUN_1400021e4(local_88,local_78);
    local_98 = *(longlong *)(param_1 + 0x18);
    FUN_1400021e4(&local_98,local_88);
    FUN_1449b8608(local_a8,&local_58,&DAT_149e0635c);
    FUN_144a7dea0(&local_98,local_a8,local_68);
    if (&local_98 == param_2) {
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_98;
      local_98 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_90._4_4_;
      local_90 = 0;
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449b8608(local_a8,local_78,&DAT_149e0635c);
    FUN_144a7dea0(&local_98,local_a8,local_88);
    if (&local_98 == param_3) {
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_98;
      local_98 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_90;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_90._4_4_;
      local_90 = 0;
    }
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daa0c0 FUN_147daa0c0 body=336 status=ok
// SIG undefined FUN_147daa0c0(void)

undefined8 * FUN_147daa0c0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141090af6(&local_38);
  cVar2 = FUN_144a791f8(&local_38,&DAT_14a8eb0f8,6,1);
  if (cVar2 == '\0') {
    FUN_140d2be42(&local_48,param_2);
    FUN_140002266(&local_58,L"%s_%d_",&DAT_14a8eb0f8,param_3);
    local_68 = &DAT_149dfb77a;
    if (local_30 != 0) {
      local_68 = local_38;
    }
    puVar4 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar4 = local_58;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar3 = local_48;
    }
    FUN_140002266(param_1,L"%s/%s%s",puVar3,puVar4);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
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
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daa212 FUN_147daa212 body=39 status=ok
// SIG undefined FUN_147daa212(void)

undefined8 FUN_147daa212(undefined8 param_1,undefined4 param_2)

{
  FUN_140002266(param_1,L"%s_%d_",&DAT_14a8eb0f8,param_2);
  return param_1;
}



// FUNCTION 147daa23a FUN_147daa23a body=469 status=ok
// SIG undefined FUN_147daa23a(void)

longlong * FUN_147daa23a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_141090af6(&local_40);
  iVar4 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
    iVar4 = *(int *)(param_3 + 1) + -1;
  }
  cVar1 = FUN_144a791f8(&local_40,puVar5,iVar4,1);
  if (cVar1 == '\0') {
    FUN_144a787a6(param_1,param_2);
  }
  else {
    FUN_140d2be42(local_50,param_2);
    uVar2 = *(int *)(param_3 + 1) - 1;
    if (*(int *)(param_3 + 1) == 0) {
      uVar2 = 0;
    }
    uVar6 = local_38 - 1;
    puVar5 = local_40;
    if (local_38 == 0) {
      uVar6 = 0;
      puVar5 = &DAT_149dfb77a;
    }
    if ((int)uVar6 <= (int)uVar2) {
      uVar2 = uVar6;
    }
    uVar3 = (ulonglong)uVar2;
    if ((int)uVar2 < 1) {
      uVar3 = 0;
    }
    FUN_14006620a(local_70,puVar5 + uVar3,uVar6 - (int)uVar3);
    FUN_1400b22c2(local_90,L"/Disabled");
    FUN_1407ec8fc(local_80,local_50,local_90);
    FUN_1401c7f3e(&local_60,local_80,local_70);
    if (&local_60 == param_1) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_58;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_58._4_4_;
      local_58 = 0;
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147daa410 FUN_147daa410 body=311 status=ok
// SIG undefined FUN_147daa410(void)

undefined8 FUN_147daa410(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb10190 == 0) {
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar1 = FUN_1447ee042(param_2,&DAT_14ab07a2e,3,1);
    if (iVar1 != -1) {
      if ((int)param_2[1] == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(local_20,puVar3);
      if (0 < (longlong)*(int *)(param_1 + 0x198)) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 400) + lVar4 * 8);
          if (lVar5 == 0) {
            lVar5 = *(longlong *)(param_1 + 0x30);
          }
          if ((*(longlong *)(lVar5 + 0xf0) != 0) &&
             (uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 0xf0) + 0x18), local_20[0] == (int)uVar2
             )) {
            local_38 = uVar2;
            FUN_1400021e4(&local_38,&local_30);
            if (&local_30 == param_2) {
              if (local_30 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_2 != 0) {
                FUN_1400020a8();
              }
              *param_2 = local_30;
              *(undefined4 *)(param_2 + 1) = local_28;
              *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
            }
            uVar2 = 1;
            goto LAB_147daa430;
          }
          lVar4 = lVar4 + 1;
        } while (*(int *)(param_1 + 0x198) != lVar4);
      }
    }
  }
  uVar2 = 0;
LAB_147daa430:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147daa548 FUN_147daa548 body=8 status=ok
// SIG undefined FUN_147daa548(void)

longlong FUN_147daa548(longlong param_1)

{
  return param_1 + 400;
}



// FUNCTION 147daa550 FUN_147daa550 body=41 status=ok
// SIG undefined FUN_147daa550(void)

void FUN_147daa550(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147daff34();
  return;
}



// FUNCTION 147daa57a FUN_147daa57a body=61 status=ok
// SIG undefined FUN_147daa57a(void)

void FUN_147daa57a(longlong param_1,undefined8 *param_2)

{
  FUN_147daa550(param_1 + 0x88,*(undefined4 *)(param_2 + 1));
  FUN_147daa5b8(param_1 + 0x88,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_1414451e4(param_1);
  return;
}



// FUNCTION 147daa5b8 FUN_147daa5b8 body=81 status=ok
// SIG undefined FUN_147daa5b8(void)

void FUN_147daa5b8(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_140831cc2(param_1,iVar1);
  }
  FUN_147db02ca((longlong)iVar1 * 8 + *param_1,param_2,param_3);
  return;
}



// FUNCTION 147daa60a FUN_147daa60a body=441 status=ok
// SIG undefined FUN_147daa60a(void)

undefined8 FUN_147daa60a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *_Str;
  longlong *plVar7;
  bool bVar8;
  double dVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  local_28 = param_2;
  cVar5 = FUN_140ffc744(&local_28,&local_38,0,0);
  if (cVar5 == '\0') {
    FUN_1468161aa(param_3,L"You must specify a time");
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x108);
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x8f8);
      plVar7 = *(longlong **)(lVar3 + 0x900);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if ((lVar6 == 0) || (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0xf0), lVar3 == 0)
         ) {
        bVar8 = false;
      }
      else {
        bVar8 = *(longlong *)(lVar3 + 0x98) != 0;
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
      if (bVar8) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0xf0);
        if (*(longlong *)(lVar3 + 0x98) != 0) {
          lVar6 = FUN_144a75eb4();
          lVar3 = *(longlong *)(lVar3 + 0x98);
          if ((((lVar3 != 0) && (lVar6 != 0)) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0))
             && ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  == lVar6 + 0x30)))) {
            if (*(longlong *)(param_1 + 0x30) == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2b0);
            }
            (**(code **)(*plVar7 + 0x690))(plVar7,*(undefined8 *)(lVar3 + 0x398));
            _Str = local_38;
            if ((int)uStack_30 == 0) {
              _Str = L"";
            }
            dVar9 = _wtof(_Str);
            local_48 = 0;
            uStack_40 = 0;
            FUN_1434c20c8(*(undefined8 *)(param_1 + 0x108),(float)dVar9,&local_48);
            FUN_1449db362(&local_48);
          }
        }
      }
    }
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147daa7c4 FUN_147daa7c4 body=157 status=ok
// SIG undefined FUN_147daa7c4(void)

undefined8 FUN_147daa7c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x2b0);
  }
  if (plVar5[0xb1] == 0) {
    if (*(longlong *)(param_1 + 0x108) == 0) {
      return 1;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0xf0);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(longlong *)(lVar1 + 0x98) == 0) {
      return 1;
    }
    lVar3 = FUN_144a75eb4();
    lVar1 = *(longlong *)(lVar1 + 0x98);
    if (lVar1 == 0) {
      return 1;
    }
    if (lVar3 == 0) {
      return 1;
    }
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 == 0) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) {
      return 1;
    }
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30) {
      return 1;
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x398);
  }
  else {
    uVar4 = 0;
  }
  (**(code **)(*plVar5 + 0x690))(plVar5,uVar4);
  return 1;
}



// FUNCTION 147daa862 FUN_147daa862 body=182 status=ok
// SIG undefined FUN_147daa862(void)

undefined8 FUN_147daa862(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  wchar_t *_Str;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0);
  }
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  local_20 = param_2;
  cVar1 = FUN_140ffc744(&local_20,&local_38,0,0);
  if (cVar1 == '\0') {
    FUN_1468161aa(param_3,L"You must specify a speed in the form of a float");
  }
  else {
    _Str = local_38;
    if ((int)uStack_30 == 0) {
      _Str = L"";
    }
    dVar3 = _wtof(_Str);
    *(float *)(lVar2 + 0x4d0) = (float)dVar3;
  }
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147daa91a FUN_147daa91a body=63 status=ok
// SIG undefined FUN_147daa91a(void)

undefined1 FUN_147daa91a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x1f0) != 0) && (lVar1 = FUN_145f81532(), lVar1 != 0)) {
    FUN_147ce2a60(lVar1);
    return 1;
  }
  FUN_1468161aa(param_3,L"Unable to get the replay subsystem.");
  return 1;
}



// FUNCTION 147daa95a FUN_147daa95a body=485 status=ok
// SIG undefined FUN_147daa95a(void)

undefined8 FUN_147daa95a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *_Dst;
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  longlong *local_68;
  ulonglong uStack_60;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_2;
  if ((param_4 != 0) && (*(longlong *)(param_4 + 0x1f0) != 0)) {
    local_58 = (void *)0x0;
    uStack_50 = 0;
    FUN_140ffc744(&local_48,&local_58,0,0);
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    iVar1 = FUN_1403de9f2(&local_58,&local_68,&DAT_149e1423e,1);
    if (1 < iVar1) {
      iVar1 = (int)local_68[1] + -1;
      if ((int)local_68[1] == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(&local_58,*local_68,iVar1);
      _Dst = local_68;
      if (*local_68 != 0) {
        FUN_1400020a8();
      }
      iVar1 = (int)uStack_60 + -1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar3 = 1;
        if (iVar1 < 1) {
          iVar3 = iVar1;
        }
        memmove(_Dst,_Dst + (longlong)((int)uStack_60 - iVar3) * 2,(longlong)iVar3 << 4);
        iVar1 = (int)uStack_60 + -1;
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar1);
      FUN_140b12644();
    }
    _Src = local_58;
    uVar2 = uStack_50 & 0xffffffff;
    if ((int)uStack_50 < 2) {
      FUN_1410908dc(param_4,&local_78,0);
    }
    else {
      local_78 = (void *)0x0;
      local_70 = (int)uStack_50;
      FUN_1446dd670(&local_78,uVar2,0);
      memcpy(local_78,_Src,uVar2 * 2);
    }
    local_98 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    (**(code **)(**(longlong **)(param_4 + 0x1f0) + 0x360))
              (*(longlong **)(param_4 + 0x1f0),&local_58,&local_78,&local_68);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daab40 FUN_147daab40 body=128 status=ok
// SIG undefined FUN_147daab40(void)

void FUN_147daab40(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    pcVar1 = *(char **)(param_1 + 0x1a0);
    lVar2 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
    lVar4 = 0;
    do {
      if (pcVar1[lVar4] == '\0') {
        if (pcVar1 + lVar4 != (char *)0x0) {
          pcVar1 = pcVar1 + lVar4 + 0x18;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          if ((longlong)*(int *)(param_1 + 0x1a8) == 0) goto LAB_147daab7b;
          pcVar1 = *(char **)(param_1 + 0x1a0);
          lVar2 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
        }
        break;
      }
      lVar4 = lVar4 + 0x78;
    } while (lVar2 - lVar4 != 0);
    pcVar3 = pcVar1 + lVar2;
    do {
      if (*pcVar1 == '\x02') {
        if (pcVar1 != (char *)0x0) {
          pcVar1[0x18] = '\0';
          pcVar1[0x19] = '\0';
          pcVar1[0x1a] = '\0';
          pcVar1[0x1b] = '\0';
          pcVar1[0x1c] = '\0';
          pcVar1[0x1d] = '\0';
          pcVar1[0x1e] = '\0';
          pcVar1[0x1f] = '\0';
        }
        break;
      }
      pcVar1 = pcVar1 + 0x78;
    } while (pcVar1 != pcVar3);
  }
LAB_147daab7b:
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}



// FUNCTION 147daabc0 FUN_147daabc0 body=108 status=ok
// SIG undefined FUN_147daabc0(void)

void FUN_147daabc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x38) == param_2) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x108) == param_2) {
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) == param_2) {
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
      }
      if (*(longlong *)(lVar2 + 0x18 + lVar3) == param_2) {
        *(undefined8 *)(lVar2 + 0x18 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x78;
    } while ((longlong)iVar1 * 0x78 - lVar3 != 0);
  }
  return;
}



// FUNCTION 147daac2c FUN_147daac2c body=91 status=ok
// SIG undefined FUN_147daac2c(void)

void FUN_147daac2c(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  FUN_147db031c(param_1 + 0x240,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daac88 FUN_147daac88 body=22 status=ok
// SIG undefined FUN_147daac88(void)

void FUN_147daac88(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x2b8) = param_2;
  return;
}



// FUNCTION 147daac96 FUN_147daac96 body=65 status=ok
// SIG undefined FUN_147daac96(void)

undefined4 FUN_147daac96(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_144800528();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(lVar2 + 0x38);
}



// FUNCTION 147daacd7 FUN_147daacd7 body=362 status=ok
// SIG undefined FUN_147daacd7(void)

longlong * FUN_147daacd7(longlong *param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  if ((DAT_14cb0d2b0 == 0) || ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0)) {
LAB_147daada4:
    cVar2 = FUN_141528353();
    if (cVar2 == '\0') goto LAB_147daadf2;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14375da72(&local_30,&DAT_14c846b20);
    if (&local_30 != param_1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_30;
      *(int *)(param_1 + 1) = local_28;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
      goto LAB_147daadf2;
    }
  }
  else {
    lVar4 = 0;
    pcVar5 = (char *)0x0;
    do {
      pcVar3 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
      cVar2 = *pcVar3;
      if (cVar2 == '\x03') {
        if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\x03')) goto LAB_147daad3b;
      }
      else {
        if (cVar2 == '\x01') break;
LAB_147daad3b:
        if (pcVar5 != (char *)0x0) {
          pcVar3 = pcVar5;
        }
        if (cVar2 != '\x02') {
          pcVar3 = pcVar5;
        }
      }
      lVar4 = lVar4 + 8;
      pcVar5 = pcVar3;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    if ((pcVar3 == (char *)0x0) || (*(longlong *)(pcVar3 + 0x360) == 0)) goto LAB_147daada4;
    FUN_1410908dc(*(longlong *)(pcVar3 + 0x360),&local_30,0);
    iVar1 = local_28 + -1;
    if (local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(param_1,local_30,iVar1);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_147daadf2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147daae42 FUN_147daae42 body=109 status=ok
// SIG undefined FUN_147daae42(void)

undefined8 * FUN_147daae42(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x30);
    _Src = *(void **)(param_1 + 0x28);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  return param_2;
}



// FUNCTION 147daaeb0 FUN_147daaeb0 body=234 status=ok
// SIG undefined FUN_147daaeb0(void)

void FUN_147daaeb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_198 [44];
  undefined1 local_16c [11];
  undefined1 local_161;
  longlong local_160;
  ulonglong *local_158;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_160,lVar2,0);
    local_161 = 2;
    puVar1 = (undefined1 *)*local_158 + 1;
    if ((undefined1 *)local_158[1] < puVar1) {
      (**(code **)(local_160 + 0x170))(&local_160,&local_161,1);
    }
    else {
      local_161 = *(undefined1 *)*local_158;
      *local_158 = (ulonglong)puVar1;
    }
    FUN_147db0454(&local_160,param_2,param_3);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_16c,&local_160,1);
    FUN_1449daebe(&local_160);
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daaf9c FUN_147daaf9c body=173 status=ok
// SIG undefined FUN_147daaf9c(void)

longlong * FUN_147daaf9c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ab09730;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14ab096c0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 147dab04a FUN_147dab04a body=224 status=ok
// SIG undefined FUN_147dab04a(void)

longlong *
FUN_147dab04a(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,7,0x10);
  *(undefined4 *)(param_1 + 1) = 7;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ab098f0;
  FUN_147db0cb0(puVar3 + 1,param_4,param_5,param_6);
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
  puVar3[10] = lVar5;
  *puVar3 = &PTR_FUN_14ab09880;
  puVar3[0xb] = 0;
  FUN_14485c47a(puVar3 + 0xb,param_2);
  *(undefined4 *)(puVar3 + 0xd) = uVar1;
  puVar3[0xc] = uVar2;
  return param_1;
}



// FUNCTION 147dab12a FUN_147dab12a body=78 status=ok
// SIG undefined FUN_147dab12a(void)

undefined8 FUN_147dab12a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    lVar2 = FUN_145f81532();
    if (lVar2 != 0) {
      uVar1 = FUN_147ce2a06(lVar2);
      return uVar1;
    }
  }
  if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147dab152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x3c0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147dab178 FUN_147dab178 body=39 status=ok
// SIG undefined FUN_147dab178(void)

void FUN_147dab178(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14cb0d2b0;
  uVar2 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
  FUN_14640a5b8(uVar1,uVar2);
  return;
}



// FUNCTION 147dab1a0 FUN_147dab1a0 body=20 status=ok
// SIG undefined FUN_147dab1a0(void)

void FUN_147dab1a0(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x71c) = *param_2;
  return;
}



// FUNCTION 147dab1b4 FUN_147dab1b4 body=440 status=ok
// SIG undefined FUN_147dab1b4(void)

longlong FUN_147dab1b4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_40;
  code *local_38;
  longlong **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_30 = &local_40;
  local_38 = FUN_14284083c;
  local_68 = 0;
  lVar5 = 0;
  FUN_144a56f9f(0,&local_38,0,0);
  if (0 < (int)uStack_50) {
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(local_58 + lVar9 * 8);
      if (lVar3 != 0) {
        lVar5 = FUN_140007dea();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (lVar5 = *(longlong *)(lVar3 + 0x28), lVar5 != 0)) {
          lVar6 = FUN_144a7757c();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            if (DAT_14cb108d0 == DAT_14cb108fc) goto LAB_147dab288;
            lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x18);
            uVar4 = (uint)((ulonglong)lVar9 >> 0x10);
            uVar7 = (uint)lVar9 & 0xffff;
            puVar8 = &DAT_14cb10900;
            if (DAT_14cb10908 != (undefined *)0x0) {
              puVar8 = DAT_14cb10908;
            }
            iVar2 = *(int *)(puVar8 + (ulonglong)
                                      (DAT_14cb10910 - 1U &
                                      (int)((ulonglong)lVar9 >> 0x20) +
                                      ((uint)lVar9 << 0x10 | uVar7) +
                                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
            goto joined_r0x000147dab321;
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while ((int)lVar9 < (int)uStack_50);
    lVar5 = 0;
  }
LAB_147dab294:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
joined_r0x000147dab321:
  if (iVar2 == -1) goto LAB_147dab288;
  plVar1 = (longlong *)(DAT_14cb108c8 + (longlong)iVar2 * 0x14);
  if (*plVar1 == lVar9) {
    if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
      *(char *)(lVar5 + 0x152) = (char)plVar1[1];
    }
    goto LAB_147dab288;
  }
  iVar2 = *(int *)((longlong)plVar1 + 0xc);
  goto joined_r0x000147dab321;
LAB_147dab288:
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar3;
  }
  goto LAB_147dab294;
}



// FUNCTION 147dab36e FUN_147dab36e body=112 status=ok
// SIG undefined FUN_147dab36e(void)

undefined8 FUN_147dab36e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x98) == 0) || (param_2[1] == -1)) {
    uVar1 = 0;
  }
  else if (param_2[1] == 0) {
    uVar1 = 1;
  }
  else {
    QueryPerformanceCounter(&local_20);
    uVar1 = CONCAT71((int7)((ulonglong)(param_2[1] + *param_2) >> 8),
                     (ulonglong)(param_2[1] + *param_2) < (ulonglong)local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dab3e0 FUN_147dab3e0 body=315 status=ok
// SIG undefined FUN_147dab3e0(void)

ulonglong FUN_147dab3e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_2 + 0x98);
  if ((uVar2 == 3) || (uVar2 == 0)) {
    FUN_14378f82c(param_1,param_3);
    if ((*(int *)(param_2 + 0x98) != 0) &&
       (iVar3 = *(int *)(param_2 + 0x98) + 1, *(int *)(param_2 + 0x98) = iVar3, iVar3 == 0xf)) {
      FUN_140113df6(param_2);
    }
    cVar1 = FUN_147dab36e(param_2,param_4);
    if (cVar1 == '\0') {
      uVar2 = *(uint *)(param_2 + 0x98);
      goto LAB_147dab413;
    }
  }
  else {
LAB_147dab413:
    if ((uVar2 & 0xfffffffb) == 0) {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      cVar1 = FUN_14378fa0c(param_1);
      if (cVar1 != '\0') {
        if ((*(int *)(param_2 + 0x98) != 0) &&
           (iVar3 = *(int *)(param_2 + 0x98) + 1, *(int *)(param_2 + 0x98) = iVar3, iVar3 == 0xf)) {
          FUN_140113df6(param_2);
        }
        cVar1 = FUN_147dab36e(param_2,param_4);
        if (cVar1 == '\0') {
          uVar2 = *(uint *)(param_2 + 0x98);
          goto LAB_147dab4d6;
        }
      }
    }
    else {
LAB_147dab4d6:
      if ((uVar2 == 5) || (uVar2 == 0)) {
        FUN_14378fbcc(param_1,param_3);
        uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        if ((*(int *)(param_2 + 0x98) != 0) &&
           (iVar3 = *(int *)(param_2 + 0x98) + 1, *(int *)(param_2 + 0x98) = iVar3, iVar3 == 0xf)) {
          FUN_140113df6(param_2);
        }
        goto LAB_147dab438;
      }
    }
  }
  uVar4 = 0;
LAB_147dab438:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dab51c FUN_147dab51c body=21 status=ok
// SIG undefined FUN_147dab51c(void)

longlong * FUN_147dab51c(longlong param_1,longlong *param_2)

{
  *param_2 = param_1 + 400;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 147dab532 FUN_147dab532 body=30 status=ok
// SIG undefined FUN_147dab532(void)

bool FUN_147dab532(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  if ((DAT_14cb10448 == '\x01') && (*(char *)(param_1 + 0x80) == '\x01')) {
    bVar1 = *(longlong *)(param_1 + 0x78) == param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 147dab550 FUN_147dab550 body=128 status=ok
// SIG undefined FUN_147dab550(void)

bool FUN_147dab550(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_144a803b6(param_1 + 400,&local_28);
    FUN_1447f69b6(param_1 + 0x540);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dab5d1 FUN_147dab5d1 body=52 status=ok
// SIG undefined FUN_147dab5d1(void)

undefined8 FUN_147dab5d1(undefined8 param_1,uint param_2)

{
  wchar_t *pwVar1;
  
  if (param_2 < 4) {
    pwVar1 = (wchar_t *)(&PTR_u_Standalone_14ab09aa8)[param_2];
  }
  else {
    pwVar1 = L"Invalid";
  }
  FUN_140056680(param_1,pwVar1);
  return param_1;
}



// FUNCTION 147dab606 FUN_147dab606 body=476 status=ok
// SIG undefined FUN_147dab606(void)

uint FUN_147dab606(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint local_a0;
  undefined1 local_98 [104];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140002266(&local_30,L"%ls?%ls",param_2,PTR_u_SeamlessNetTransition_14c761ec8);
  lVar4 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
  puVar10 = local_30;
  if (local_28 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_140245d8a(local_98,lVar4 + 0x160,puVar10,0);
  uVar2 = FUN_147d8a6b2(local_98);
  if ((char)uVar2 != '\0') goto LAB_147dab779;
  uVar3 = FUN_14490d72a(param_1);
  *(undefined4 *)(param_1 + 0x940) = uVar3;
  FUN_14107e8f0(&DAT_14cb10938,param_1);
  FUN_14375df50(DAT_14cb0d2b0,&local_a8,param_1);
  uVar8 = (ulonglong)(int)local_a0;
  if (-1 < (longlong)uVar8) {
    uVar6 = *(uint *)(local_a8 + 1);
    plVar5 = local_a8;
    if ((int)local_a0 < (int)uVar6) {
      if (*(longlong *)(*local_a8 + uVar8 * 8) == 0) {
        plVar11 = (longlong *)(*local_a8 + uVar8 * 8);
        do {
          plVar11 = plVar11 + 1;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          if ((int)uVar6 <= (int)uVar7) {
            uVar8 = (ulonglong)uVar6;
            break;
          }
        } while (*plVar11 == 0);
      }
      local_a0 = (uint)uVar8;
      if ((int)local_a0 < 0) goto LAB_147dab74c;
    }
    while ((int)uVar8 < (int)plVar5[1]) {
      plVar11 = *(longlong **)(*(longlong *)(*plVar5 + (uVar8 & 0xffffffff) * 8) + 0x30);
      uVar9 = uVar8;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0xef8))(plVar11,0);
        uVar8 = (ulonglong)local_a0;
        uVar9 = uVar8;
        plVar5 = local_a8;
      }
      do {
        if ((int)uVar9 < -1) goto LAB_147dab74c;
        iVar1 = (int)uVar8;
        uVar6 = iVar1 + 1;
        uVar8 = (ulonglong)uVar6;
      } while (((int)uVar6 < (int)plVar5[1]) && (*(longlong *)(*plVar5 + (ulonglong)uVar6 * 8) == 0)
              );
      local_a0 = uVar6;
      if (iVar1 < -1) break;
    }
  }
LAB_147dab74c:
  puVar10 = local_30;
  if (local_28 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  FUN_14640a448(DAT_14cb0d2b0,param_1,puVar10,0);
LAB_147dab779:
  FUN_141238aee(local_98);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 ^ 1;
}



// FUNCTION 147dab7e4 FUN_147dab7e4 body=130 status=ok
// SIG undefined FUN_147dab7e4(void)

void FUN_147dab7e4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 1000) != 0) {
      FUN_140aeefbc(*(longlong *)(lVar1 + 1000),0,1);
      *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 1000) = 0;
      lVar1 = *(longlong *)(param_1 + 0x170);
    }
    FUN_140aeefbc(lVar1,0,1);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x178),0,1);
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  return;
}



// FUNCTION 147dab866 FUN_147dab866 body=1652 status=ok
// SIG undefined FUN_147dab866(void)

ulonglong FUN_147dab866(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  uint local_d0;
  longlong local_c8 [2];
  code *local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(longlong *)(param_1 + 0x38) == 0) ||
      (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0xf0) == 0)) ||
     (iVar6 = FUN_14490d72a(), iVar6 != 3)) {
    uVar17 = 0;
    goto LAB_147dab8b7;
  }
  uVar7 = FUN_14490d72a(param_1);
  *(undefined4 *)(param_1 + 0x940) = uVar7;
  FUN_14107e8f0(&DAT_14cb10938,param_1);
  local_78 = 0;
  uStack_70 = 0;
  FUN_14375df50(DAT_14cb0d2b0,&local_b8,param_1);
  pcVar3 = local_b8;
  uVar17 = (ulonglong)(int)(uint)uStack_b0;
  if (-1 < (longlong)uVar17) {
    uVar8 = *(uint *)(local_b8 + 8);
    if ((int)(uint)uStack_b0 < (int)uVar8) {
      uVar9 = uVar17;
      uVar11 = (uint)uStack_b0;
      if (*(longlong *)(*(longlong *)local_b8 + uVar17 * 8) == 0) {
        do {
          if ((int)uVar8 <= (int)uVar9 + 1) {
            uVar17 = (ulonglong)uVar8;
            uVar11 = uVar8;
            goto LAB_147daba30;
          }
          uVar17 = uVar9 + 1;
          lVar10 = uVar9 * 8;
          uVar9 = uVar17;
        } while (*(longlong *)(*(longlong *)local_b8 + 8 + lVar10) == 0);
        uVar11 = (uint)uVar17;
      }
LAB_147daba30:
      iVar6 = (int)uVar17;
      uVar9 = uVar17;
      uVar17 = (ulonglong)uVar11;
      if (iVar6 < 0) goto LAB_147daba3b;
    }
    else {
      uVar9 = uStack_b0 & 0xffffffff;
    }
    while (uVar4 = uStack_70, uVar8 = (uint)uVar9, (int)uVar8 < *(int *)(pcVar3 + 8)) {
      plVar13 = *(longlong **)(*(longlong *)(*(longlong *)pcVar3 + (uVar9 & 0xffffffff) * 8) + 0x30)
      ;
      if (plVar13 != (longlong *)0x0) {
        lVar10 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1447d05f2(&local_78,uVar4 & 0xffffffff);
        }
        *(longlong **)(local_78 + lVar10 * 8) = plVar13;
        (**(code **)(*plVar13 + 0xbd8))(plVar13,0,&local_78);
        (**(code **)(*plVar13 + 0xf10))(plVar13);
        uVar8 = (uint)uVar17;
      }
      uVar17 = (ulonglong)uVar8;
      do {
        if ((int)uVar8 < -1) goto LAB_147daba3b;
        iVar6 = (int)uVar17;
        uVar11 = iVar6 + 1;
        uVar17 = (ulonglong)uVar11;
      } while (((int)uVar11 < *(int *)(pcVar3 + 8)) &&
              (*(longlong *)(*(longlong *)pcVar3 + (ulonglong)uVar11 * 8) == 0));
      uVar9 = (ulonglong)uVar11;
      if (iVar6 < -1) break;
    }
  }
LAB_147daba3b:
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xf0);
  (**(code **)(*plVar13 + 0x2f8))(plVar13,0);
  FUN_147a4c716(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0xf0),&local_b8);
  if (local_9c < *(int *)(local_a8 + 0x18)) {
    do {
      lVar10 = FUN_14479d2ce((longlong)local_9c * 0x18 + *(longlong *)local_b8);
      uVar17 = uStack_80;
      if (lVar10 != 0) {
        lVar16 = (longlong)(int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_1447d05f2(&local_88,uVar17 & 0xffffffff);
        }
        local_88[lVar16] = lVar10;
      }
      local_a0 = local_a0 & ~uStack_b0._4_4_;
      FUN_1449c0562(&uStack_b0);
    } while (local_9c < *(int *)(local_a8 + 0x18));
  }
  uVar17 = local_78;
  lVar10 = (longlong)(int)uStack_70;
  if (lVar10 != 0) {
    lVar16 = 0;
    do {
      uVar9 = uStack_80;
      lVar15 = *(longlong *)(uVar17 + lVar16);
      if (((lVar15 != 0) && ((*(byte *)(lVar15 + 99) & 8) != 0)) && (1 < *(byte *)(lVar15 + 0x179)))
      {
        lVar18 = (longlong)(int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_1447d05f2(&local_88,uVar9 & 0xffffffff);
        }
        local_88[lVar18] = lVar15;
      }
      lVar16 = lVar16 + 8;
    } while (lVar10 * 8 != lVar16);
  }
  plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xf0);
  if (plVar13[0x13] != 0) {
    lVar16 = FUN_144a75eb4();
    lVar10 = plVar13[0x13];
    if ((((lVar10 != 0) && (lVar16 != 0)) && (lVar15 = *(longlong *)(lVar10 + 0x10), lVar15 != 0))
       && ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar15 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
            lVar16 + 0x30)))) {
      *(undefined8 *)(lVar10 + 0x608) = 0;
    }
    *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0xf0) + 0x98) = 0;
    plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0xf0);
  }
  while( true ) {
    FUN_147bcc4f0(plVar13);
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0x100) == 0) break;
    plVar13 = (longlong *)**(longlong **)(*(longlong *)(param_1 + 0x38) + 0xf8);
    (**(code **)(*plVar13 + 0x2f8))(plVar13,0);
  }
  FUN_14375e010(DAT_14cb0d2b0,param_1);
  lVar10 = param_1 + 0x5b8;
  FUN_14622b792(lVar10,PTR_u_SeamlessNetTransition_14c761ec8,0);
  if ((param_2 == '\0') || (cVar5 = FUN_1416a341a(param_1,lVar10), cVar5 != '\0')) {
    if ((longlong)(int)uStack_80 != 0) {
      plVar13 = local_88 + (int)uStack_80;
      plVar12 = local_88;
      do {
        plVar2 = (longlong *)*plVar12;
        lVar16 = 0x618;
        if ((*(byte *)(plVar2 + 0xc) & 2) == 0) {
          if ((longlong)(int)uStack_70 != 0) {
            lVar15 = 0;
            do {
              if (*(longlong **)(local_78 + lVar15) == plVar2) goto LAB_147dabcba;
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)uStack_70 * 8 != lVar15);
          }
          lVar16 = 0x620;
        }
LAB_147dabcba:
        (**(code **)(*plVar2 + lVar16))();
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar13);
    }
    *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) & 0xfd;
    FUN_1437893fe(param_1,lVar10);
    plVar13 = *(longlong **)(param_1 + 0x170);
    if (plVar13 != (longlong *)0x0) {
      local_b8 = (code *)0x0;
      uStack_b0 = 0;
      iVar6 = *(int *)(param_1 + 0x608);
      if ((longlong)iVar6 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x600);
        lVar16 = 0;
        do {
          FUN_1400020e8(&local_b8,&DAT_149e1423e,1);
          iVar1 = *(int *)(lVar10 + 8 + lVar16);
          iVar14 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar14 = 0;
          }
          FUN_1400020e8(&local_b8,*(undefined8 *)(lVar10 + lVar16),iVar14);
          lVar16 = lVar16 + 0x10;
        } while ((longlong)iVar6 * 0x10 != lVar16);
        plVar13 = *(longlong **)(param_1 + 0x170);
      }
      local_c8[0] = 0;
      local_c8[1] = 0;
      FUN_140c50e9c(&local_d8,param_1 + 0x5e0,1);
      (**(code **)(*plVar13 + 0x698))(plVar13,&local_d8,&local_b8,local_c8);
      if (local_d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_14375df50(DAT_14cb0d2b0,&local_d8,param_1);
      uVar17 = (ulonglong)(int)local_d0;
      if (-1 < (longlong)uVar17) {
        uVar8 = *(uint *)(local_d8 + 1);
        if ((int)local_d0 < (int)uVar8) {
          if (*(longlong *)(*local_d8 + uVar17 * 8) == 0) {
            plVar13 = (longlong *)(*local_d8 + uVar17 * 8);
            do {
              plVar13 = plVar13 + 1;
              uVar11 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar11;
              if ((int)uVar8 <= (int)uVar11) {
                uVar17 = (ulonglong)uVar8;
                break;
              }
            } while (*plVar13 == 0);
          }
          local_d0 = (uint)uVar17;
          if ((int)local_d0 < 0) goto LAB_147dabea4;
        }
        while ((int)local_d0 < (int)local_d8[1]) {
          uVar8 = local_d0;
          if (*(longlong *)(*(longlong *)(*local_d8 + (ulonglong)local_d0 * 8) + 0x30) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x170) + 0x768))();
            uVar8 = (uint)uVar17;
          }
          uVar17 = (ulonglong)uVar8;
          do {
            if ((int)uVar8 < -1) goto LAB_147dabea4;
            iVar6 = (int)uVar17;
            local_d0 = iVar6 + 1;
            uVar17 = (ulonglong)local_d0;
          } while (((int)local_d0 < (int)local_d8[1]) &&
                  (*(longlong *)(*local_d8 + (ulonglong)local_d0 * 8) == 0));
          if (iVar6 < -1) break;
        }
      }
LAB_147dabea4:
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x6c0))();
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((*(byte *)(param_1 + 0x155) & 2) == 0) {
      local_b8 = FUN_147dabedc;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_14572c8a8(param_1 + 2000,local_c8,param_1);
      *(longlong *)(param_1 + 0x948) = local_c8[0];
    }
    else {
      FUN_147dabedc(param_1);
    }
    uVar17 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar17 = 0;
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_147dab8b7:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 147dabedc FUN_147dabedc body=264 status=ok
// SIG undefined FUN_147dabedc(void)

void FUN_147dabedc(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FUN_14480f766(param_1 + 2000);
    *(undefined8 *)(param_1 + 0x948) = 0;
  }
  FUN_14375df50(DAT_14cb0d2b0,&local_30,param_1);
  uVar5 = (ulonglong)(int)local_28;
  if (-1 < (longlong)uVar5) {
    uVar4 = *(uint *)(local_30 + 1);
    if ((int)local_28 < (int)uVar4) {
      if (*(longlong *)(*local_30 + uVar5 * 8) == 0) {
        plVar2 = (longlong *)(*local_30 + uVar5 * 8);
        do {
          plVar2 = plVar2 + 1;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
          if ((int)uVar4 <= (int)uVar3) {
            uVar5 = (ulonglong)uVar4;
            break;
          }
        } while (*plVar2 == 0);
      }
      local_28 = (uint)uVar5;
      if ((int)local_28 < 0) goto LAB_147dabfbf;
    }
    while ((int)local_28 < (int)local_30[1]) {
      plVar2 = *(longlong **)(*(longlong *)(*local_30 + (ulonglong)local_28 * 8) + 0x30);
      uVar4 = local_28;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xf18))();
        uVar4 = (uint)uVar5;
      }
      uVar5 = (ulonglong)uVar4;
      do {
        if ((int)uVar4 < -1) goto LAB_147dabfbf;
        iVar1 = (int)uVar5;
        local_28 = iVar1 + 1;
        uVar5 = (ulonglong)local_28;
      } while (((int)local_28 < (int)local_30[1]) &&
              (*(longlong *)(*local_30 + (ulonglong)local_28 * 8) == 0));
      if (iVar1 < -1) break;
    }
  }
LAB_147dabfbf:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147dabfe6(param_1);
  return;
}



// FUNCTION 147dabfe6 FUN_147dabfe6 body=88 status=ok
// SIG undefined FUN_147dabfe6(void)

void FUN_147dabfe6(longlong param_1)

{
  longlong *plVar1;
  
  FUN_147db13e0(&DAT_14cb10920,param_1,*(undefined4 *)(param_1 + 0x940));
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x468))(plVar1,param_1,*(undefined4 *)(param_1 + 0x940));
  }
  FUN_147db13e0(&DAT_14cb103e0,param_1,*(undefined4 *)(param_1 + 0x940));
  return;
}



// FUNCTION 147dac03e FUN_147dac03e body=133 status=ok
// SIG undefined FUN_147dac03e(void)

undefined8 FUN_147dac03e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d632de(param_1,local_30);
  FUN_140056680(local_40,L"VoIP: ");
  FUN_1401c7f3e(param_2,local_40,local_30);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dac0d0 FUN_147dac0d0 body=45 status=ok
// SIG undefined FUN_147dac0d0(void)

longlong FUN_147dac0d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d7bfdc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac13c FUN_147dac13c body=48 status=ok
// SIG undefined FUN_147dac13c(void)

longlong FUN_147dac13c(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac16c FUN_147dac16c body=48 status=ok
// SIG undefined FUN_147dac16c(void)

longlong FUN_147dac16c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac1bc FUN_147dac1bc body=48 status=ok
// SIG undefined FUN_147dac1bc(void)

longlong FUN_147dac1bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac1ec FUN_147dac1ec body=48 status=ok
// SIG undefined FUN_147dac1ec(void)

longlong FUN_147dac1ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac238 FUN_147dac238 body=48 status=ok
// SIG undefined FUN_147dac238(void)

longlong FUN_147dac238(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac268 FUN_147dac268 body=48 status=ok
// SIG undefined FUN_147dac268(void)

longlong FUN_147dac268(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac2a4 FUN_147dac2a4 body=48 status=ok
// SIG undefined FUN_147dac2a4(void)

longlong FUN_147dac2a4(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac2d4 FUN_147dac2d4 body=48 status=ok
// SIG undefined FUN_147dac2d4(void)

longlong FUN_147dac2d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_140216160(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac304 FUN_147dac304 body=68 status=ok
// SIG undefined FUN_147dac304(void)

longlong FUN_147dac304(longlong param_1,int param_2)

{
  FUN_144725486(param_1 + 0x18);
  FUN_1458f4488(param_1 + 0xe8);
  FUN_1458f4274(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dac386 FUN_147dac386 body=54 status=ok
// SIG undefined FUN_147dac386(void)

undefined1 FUN_147dac386(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147da506c(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147dac3e4 FUN_147dac3e4 body=59 status=ok
// SIG undefined FUN_147dac3e4(void)

undefined8 FUN_147dac3e4(longlong *param_1)

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



// FUNCTION 147dac486 FUN_147dac486 body=334 status=ok
// SIG undefined FUN_147dac486(void)

undefined4 * FUN_147dac486(undefined4 *param_1,ulonglong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147dac5d6(local_48);
  uVar7 = *param_2;
  *local_40 = uVar7;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147dac6e4(uVar4,local_40,&local_4c,param_3);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = DAT_14cb0f800 - DAT_14cb0f82c;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14cb0f840)) {
      uVar4 = DAT_14cb0f840 - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0xc) = uVar4;
      puVar6 = DAT_14cb0f838;
      if (DAT_14cb0f838 == (undefined *)0x0) {
        puVar6 = &DAT_14cb0f830;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14cb0f840 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14cb0f838;
      if (DAT_14cb0f838 == (undefined *)0x0) {
        puVar6 = &DAT_14cb0f830;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14cb0f840 - 1U & (longlong)(int)uVar4) * 4) = local_4c
      ;
    }
    else {
      DAT_14cb0f840 = iVar8;
      FUN_147dac7fc();
    }
  }
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dac5d6 FUN_147dac5d6 body=269 status=ok
// SIG undefined FUN_147dac5d6(void)

int * FUN_147dac5d6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb0f828;
  iVar4 = DAT_14cb0f800;
  if (DAT_14cb0f82c == 0) {
    iVar2 = DAT_14cb0f800 + 1;
    bVar7 = DAT_14cb0f804 == DAT_14cb0f800;
    DAT_14cb0f800 = iVar2;
    if (bVar7) {
      FUN_1446efaca(&DAT_14cb0f7f8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb0f808,1);
    puVar3 = DAT_14cb0f818;
    if (DAT_14cb0f818 == (undefined *)0x0) {
      puVar3 = &DAT_14cb0f808;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb0f828;
    DAT_14cb0f828 = *(int *)(DAT_14cb0f7f8 + 4 + lVar6 * 0x10);
    DAT_14cb0f82c = DAT_14cb0f82c + -1;
    iVar4 = iVar2;
    if (DAT_14cb0f82c != 0) {
      *(undefined4 *)(DAT_14cb0f7f8 + (longlong)DAT_14cb0f828 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb0f808;
  if (DAT_14cb0f818 != (undefined *)0x0) {
    puVar3 = DAT_14cb0f818;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14cb0f7f8;
  return param_1;
}



// FUNCTION 147dac6e4 FUN_147dac6e4 body=151 status=ok
// SIG undefined FUN_147dac6e4(void)

void FUN_147dac6e4(uint param_1,longlong *param_2,int *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  
  if ((DAT_14cb0f800 - DAT_14cb0f82c != 1) && (DAT_14cb0f800 != DAT_14cb0f82c)) {
    puVar4 = &DAT_14cb0f830;
    if (DAT_14cb0f838 != (undefined *)0x0) {
      puVar4 = DAT_14cb0f838;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14cb0f840 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb0f7f8 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(DAT_14cb0f7f8 + (longlong)iVar3 * 0x10) == *param_2) {
          *plVar1 = *param_2;
          FUN_147dac77c(*param_3);
          *param_3 = iVar3;
          uVar2 = 1;
          goto LAB_147dac75c;
        }
        iVar3 = (int)plVar1[1];
      } while (iVar3 != -1);
    }
  }
  uVar2 = 0;
LAB_147dac75c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar2;
  }
  return;
}



// FUNCTION 147dac77c FUN_147dac77c body=128 status=ok
// SIG undefined FUN_147dac77c(void)

void FUN_147dac77c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb0f7f8;
  if (DAT_14cb0f82c != 0) {
    *(int *)(DAT_14cb0f7f8 + (longlong)DAT_14cb0f828 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb0f82c) {
    iVar4 = DAT_14cb0f828;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14cb0f82c = DAT_14cb0f82c + 1;
  puVar3 = &DAT_14cb0f808;
  if (DAT_14cb0f818 != (undefined *)0x0) {
    puVar3 = DAT_14cb0f818;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb0f828 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147dac7fc FUN_147dac7fc body=518 status=ok
// SIG undefined FUN_147dac7fc(void)

void FUN_147dac7fc(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
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
  if (DAT_14cb0f838 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb0f838,0,0,4);
  }
  uVar7 = DAT_14cb0f840;
  uVar2 = local_50;
  if (DAT_14cb0f840 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14cb0f830,0,DAT_14cb0f840,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14cb0f838;
        if (DAT_14cb0f838 == (undefined *)0x0) {
          puVar4 = &DAT_14cb0f830;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14cb0f840 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb0f808;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb0f820 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb0f7f8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14cb0f840 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0xc + lVar5) = iVar8;
        puVar4 = DAT_14cb0f838;
        if (DAT_14cb0f838 == (undefined *)0x0) {
          puVar4 = &DAT_14cb0f830;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14cb0f840 - 1U & uVar9) * 4);
        puVar4 = DAT_14cb0f838;
        if (DAT_14cb0f838 == (undefined *)0x0) {
          puVar4 = &DAT_14cb0f830;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14cb0f840 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147daca04 FUN_147daca04 body=140 status=ok
// SIG undefined FUN_147daca04(void)

void FUN_147daca04(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (DAT_14cb0f800 != DAT_14cb0f82c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar3 = &DAT_14cb0f830;
    if (DAT_14cb0f838 != (undefined *)0x0) {
      puVar3 = DAT_14cb0f838;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14cb0f840 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14cb0f7f8 + 8)) {
      if (*(ulonglong *)(DAT_14cb0f7f8 + (longlong)iVar1 * 0x10) == param_1) {
        FUN_147dacb24(iVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147daca90 FUN_147daca90 body=147 status=ok
// SIG undefined FUN_147daca90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147daca90(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = DAT_14cb0f848;
  if (param_1 != &DAT_14cb0f848) {
    DAT_14cb0f848 = *param_1;
    *param_1 = 0;
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
    lVar3 = DAT_14cb0f850;
    DAT_14cb0f850 = param_1[1];
    param_1[1] = 0;
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
  _DAT_14cb0f858 = param_1[2];
  _DAT_14cb0f860 = param_1[3];
  return;
}



// FUNCTION 147dacb24 FUN_147dacb24 body=96 status=ok
// SIG undefined FUN_147dacb24(void)

void FUN_147dacb24(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14cb0f830;
  if (DAT_14cb0f838 != (undefined *)0x0) {
    puVar3 = DAT_14cb0f838;
  }
  lVar4 = (longlong)*(int *)(DAT_14cb0f7f8 + 0xc + (longlong)param_1 * 0x10);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14cb0f7f8 + 8 + lVar4 * 0x10);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14cb0f7f8 + lVar4 * 0x10 + 8);
  }
  *puVar1 = *(undefined4 *)(DAT_14cb0f7f8 + (longlong)param_1 * 0x10 + 8);
  FUN_147dac77c();
  return;
}



// FUNCTION 147dacb8e FUN_147dacb8e body=91 status=ok
// SIG undefined FUN_147dacb8e(void)

void FUN_147dacb8e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1458b3c44(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1458b3c44(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147dacbdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147dacbee FUN_147dacbee body=105 status=ok
// SIG undefined FUN_147dacbee(void)

void FUN_147dacbee(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14122f47e(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14122f47e(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147dacc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147dacc58 FUN_147dacc58 body=138 status=ok
// SIG undefined FUN_147dacc58(void)

code * FUN_147dacc58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TexelOffsets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147dacce2;
}



// FUNCTION 147dacce2 FUN_147dacce2 body=138 status=ok
// SIG undefined FUN_147dacce2(void)

code * FUN_147dacce2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147dacd6c;
}



// FUNCTION 147dacd6c FUN_147dacd6c body=138 status=ok
// SIG undefined FUN_147dacd6c(void)

code * FUN_147dacd6c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0ddb2;
}



// FUNCTION 147dacdf6 FUN_147dacdf6 body=138 status=ok
// SIG undefined FUN_147dacdf6(void)

code * FUN_147dacdf6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DestCompressTexture_64bit";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147dace80;
}



// FUNCTION 147dace80 FUN_147dace80 body=138 status=ok
// SIG undefined FUN_147dace80(void)

code * FUN_147dace80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DestTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0de3a;
}



// FUNCTION 147dacf0a FUN_147dacf0a body=138 status=ok
// SIG undefined FUN_147dacf0a(void)

code * FUN_147dacf0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTextureB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0dd2e;
}



// FUNCTION 147dacf98 FUN_147dacf98 body=38 status=ok
// SIG undefined FUN_147dacf98(void)

undefined8 FUN_147dacf98(undefined8 param_1,int param_2)

{
  thunk_FUN_1401c04d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dad008 FUN_147dad008 body=52 status=ok
// SIG undefined FUN_147dad008(void)

undefined8 * FUN_147dad008(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab08680;
  FUN_147dad8b6(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dad064 FUN_147dad064 body=220 status=ok
// SIG undefined FUN_147dad064(void)

longlong FUN_147dad064(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000050;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *in_stack_00000050;
  uVar4 = in_stack_00000050[1];
  local_48 = *(undefined4 *)(in_stack_00000050 + 3);
  local_50 = in_stack_00000050[2];
  uVar1 = *(undefined4 *)((longlong)in_stack_00000050 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar2 + 1U) {
    FUN_147dad908(param_1 + 0xf8,iVar2);
  }
  lVar5 = *(longlong *)(param_1 + 0xf8);
  lVar6 = (longlong)iVar2 * 0x30;
  *(undefined8 *)(lVar5 + lVar6) = uVar3;
  *(undefined8 *)(lVar5 + 8 + lVar6) = uVar4;
  *(undefined8 *)(lVar5 + 0x10 + lVar6) = local_50;
  *(undefined4 *)(lVar5 + 0x18 + lVar6) = local_48;
  *(undefined4 *)(lVar5 + 0x1c + lVar6) = uVar1;
  *(undefined8 *)(lVar5 + 0x20 + lVar6) = in_stack_00000040;
  *(undefined1 *)(lVar5 + 0x28 + lVar6) = in_stack_00000038;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dad142 FUN_147dad142 body=38 status=ok
// SIG undefined FUN_147dad142(void)

undefined8 FUN_147dad142(undefined8 param_1,int param_2)

{
  FUN_147dad8b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dad168 FUN_147dad168 body=177 status=ok
// SIG undefined FUN_147dad168(void)

void FUN_147dad168(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f0db44();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cb10520,param_4);
  local_78 = &DAT_14cb10520;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147dad238(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dad21a FUN_147dad21a body=29 status=ok
// SIG undefined FUN_147dad21a(void)

undefined8 FUN_147dad21a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dad238 FUN_147dad238 body=384 status=ok
// SIG undefined FUN_147dad238(void)

void FUN_147dad238(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14cb10568;
  if (DAT_14cb10568 != 0) {
    LOCK();
    *(int *)(DAT_14cb10568 + 8) = *(int *)(DAT_14cb10568 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cb10520;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14ab08760;
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



// FUNCTION 147dad3ba FUN_147dad3ba body=38 status=ok
// SIG undefined FUN_147dad3ba(void)

undefined8 FUN_147dad3ba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dad3e0 FUN_147dad3e0 body=163 status=ok
// SIG undefined FUN_147dad3e0(void)

void FUN_147dad3e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143792938();
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
  FUN_143792a20(param_1,param_2);
  return;
}



// FUNCTION 147dad483 FUN_147dad483 body=374 status=ok
// SIG undefined FUN_147dad483(void)

void FUN_147dad483(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147dad5fa FUN_147dad5fa body=29 status=ok
// SIG undefined FUN_147dad5fa(void)

undefined8 FUN_147dad5fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dad618 FUN_147dad618 body=258 status=ok
// SIG undefined FUN_147dad618(void)

void FUN_147dad618(void)

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
              0x110) < DAT_14cb10628) {
    FUN_144b3d300(&DAT_14cb10628);
    if (DAT_14cb10628 == -1) {
      FUN_147dad71c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCopyToOutputParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x3c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb105a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143792e20);
      _Init_thread_footer(&DAT_14cb10628);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dad71c FUN_147dad71c body=226 status=ok
// SIG undefined FUN_147dad71c(void)

longlong * FUN_147dad71c(longlong *param_1)

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
  pcVar13 = FUN_147dad800;
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



// FUNCTION 147dad800 FUN_147dad800 body=130 status=ok
// SIG undefined FUN_147dad800(void)

undefined1 * FUN_147dad800(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147dad882;
}



// FUNCTION 147dad886 FUN_147dad886 body=48 status=ok
// SIG undefined FUN_147dad886(void)

void FUN_147dad886(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 147dad8b6 FUN_147dad8b6 body=82 status=ok
// SIG undefined FUN_147dad8b6(void)

void FUN_147dad8b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab086c8;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da93(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dad908 FUN_147dad908 body=147 status=ok
// SIG undefined FUN_147dad908(void)

void FUN_147dad908(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dada08 FUN_147dada08 body=59 status=ok
// SIG undefined FUN_147dada08(void)

undefined8 FUN_147dada08(longlong *param_1)

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



// FUNCTION 147dadaaa FUN_147dadaaa body=45 status=ok
// SIG undefined FUN_147dadaaa(void)

longlong FUN_147dadaaa(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1458f4274(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dadb24 FUN_147dadb24 body=84 status=ok
// SIG undefined FUN_147dadb24(void)

undefined8 FUN_147dadb24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14574072c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147dadba0 FUN_147dadba0 body=59 status=ok
// SIG undefined FUN_147dadba0(void)

undefined8 FUN_147dadba0(longlong *param_1)

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



// FUNCTION 147dadbe6 FUN_147dadbe6 body=37 status=ok
// SIG undefined FUN_147dadbe6(void)

void FUN_147dadbe6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147dadc70 FUN_147dadc70 body=12 status=ok
// SIG undefined FUN_147dadc70(void)

void FUN_147dadc70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147dadc79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147dadc7c FUN_147dadc7c body=29 status=ok
// SIG undefined FUN_147dadc7c(void)

undefined8 FUN_147dadc7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147daddd2 FUN_147daddd2 body=59 status=ok
// SIG undefined FUN_147daddd2(void)

undefined8 FUN_147daddd2(longlong *param_1)

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



// FUNCTION 147dadf14 FUN_147dadf14 body=59 status=ok
// SIG undefined FUN_147dadf14(void)

undefined8 FUN_147dadf14(longlong *param_1)

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



// FUNCTION 147dadf5a FUN_147dadf5a body=32 status=ok
// SIG undefined FUN_147dadf5a(void)

void FUN_147dadf5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147dae06a FUN_147dae06a body=59 status=ok
// SIG undefined FUN_147dae06a(void)

undefined8 FUN_147dae06a(longlong *param_1)

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



// FUNCTION 147dae0b0 FUN_147dae0b0 body=32 status=ok
// SIG undefined FUN_147dae0b0(void)

void FUN_147dae0b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147dae1d6 FUN_147dae1d6 body=59 status=ok
// SIG undefined FUN_147dae1d6(void)

undefined8 FUN_147dae1d6(longlong *param_1)

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



// FUNCTION 147dae21c FUN_147dae21c body=34 status=ok
// SIG undefined FUN_147dae21c(void)

void FUN_147dae21c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1456d5336(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147dae2b2 FUN_147dae2b2 body=47 status=ok
// SIG undefined FUN_147dae2b2(void)

void FUN_147dae2b2(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dae2f8 FUN_147dae2f8 body=81 status=ok
// SIG undefined FUN_147dae2f8(void)

undefined8 FUN_147dae2f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_147dae40e(param_2 + -0x10,param_3 + -0x10);
      FUN_147dae512(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147dae372 FUN_147dae372 body=59 status=ok
// SIG undefined FUN_147dae372(void)

undefined8 FUN_147dae372(longlong *param_1)

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



// FUNCTION 147dae40e FUN_147dae40e body=79 status=ok
// SIG undefined FUN_147dae40e(void)

undefined8 * FUN_147dae40e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147dae45e(param_1,iVar1);
      FUN_147dae4c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147dae45e FUN_147dae45e body=98 status=ok
// SIG undefined FUN_147dae45e(void)

void FUN_147dae45e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147dae4c0 FUN_147dae4c0 body=82 status=ok
// SIG undefined FUN_147dae4c0(void)

void FUN_147dae4c0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147dae512 FUN_147dae512 body=79 status=ok
// SIG undefined FUN_147dae512(void)

undefined8 * FUN_147dae512(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147dae562(param_1,iVar1);
      FUN_147dae5c4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147dae562 FUN_147dae562 body=98 status=ok
// SIG undefined FUN_147dae562(void)

void FUN_147dae562(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147dae5c4 FUN_147dae5c4 body=96 status=ok
// SIG undefined FUN_147dae5c4(void)

void FUN_147dae5c4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined1 *)(param_1 + 8 + lVar3) = *(undefined1 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147dae626 FUN_147dae626 body=51 status=ok
// SIG undefined FUN_147dae626(void)

void FUN_147dae626(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 147dae65a FUN_147dae65a body=38 status=ok
// SIG undefined FUN_147dae65a(void)

undefined8 FUN_147dae65a(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dae680 FUN_147dae680 body=38 status=ok
// SIG undefined FUN_147dae680(void)

undefined8 FUN_147dae680(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dae6a6 FUN_147dae6a6 body=114 status=ok
// SIG undefined FUN_147dae6a6(void)

void FUN_147dae6a6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
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



// FUNCTION 147dae718 FUN_147dae718 body=132 status=ok
// SIG undefined FUN_147dae718(void)

void FUN_147dae718(longlong param_1,int param_2)

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



// FUNCTION 147dae79e FUN_147dae79e body=122 status=ok
// SIG undefined FUN_147dae79e(void)

longlong FUN_147dae79e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147dae818(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147dae818 FUN_147dae818 body=119 status=ok
// SIG undefined FUN_147dae818(void)

undefined8 * FUN_147dae818(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1401be58a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 147dae890 FUN_147dae890 body=139 status=ok
// SIG undefined FUN_147dae890(void)

void FUN_147dae890(longlong param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    FUN_147d88064(param_1 + 0x108);
    FUN_147d881a8(param_1 + 0x108);
  }
  FUN_1457b12ce(param_1 + 0xa8,local_1c,param_1 + 0x90,0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x90);
  FUN_1468763da(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dae91c FUN_147dae91c body=38 status=ok
// SIG undefined FUN_147dae91c(void)

undefined8 FUN_147dae91c(undefined8 param_1,int param_2)

{
  FUN_147d8229a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dae942 FUN_147dae942 body=108 status=ok
// SIG undefined FUN_147dae942(void)

undefined8 FUN_147dae942(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  FUN_147d882c6(param_1,&local_28);
  if (local_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    if ((*(uint *)(local_28 + 8) >> 0x1e & 1) == 0) {
      lVar1 = local_28;
    }
  }
  *param_2 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dae9b0 FUN_147dae9b0 body=372 status=ok
// SIG undefined FUN_147dae9b0(void)

undefined4 * FUN_147dae9b0(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a1a978(&DAT_14cae8cc0,local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar6 >> 4);
  local_58 = 0;
  cVar4 = FUN_140a1a8e0(&DAT_14cae8cc0,uVar8,local_38);
  if (cVar4 == '\0') {
    uVar6 = DAT_14cae8cc8 - DAT_14cae8cf4;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cae8d08)) {
      uVar8 = DAT_14cae8d08 - 1U & uVar8;
      *(uint *)((longlong)local_38 + 0x14) = uVar8;
      puVar7 = DAT_14cae8d00;
      if (DAT_14cae8d00 == (undefined *)0x0) {
        puVar7 = &DAT_14cae8cf8;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cae8d08 - 1U & (longlong)(int)uVar8) * 4);
      puVar7 = DAT_14cae8d00;
      if (DAT_14cae8d00 == (undefined *)0x0) {
        puVar7 = &DAT_14cae8cf8;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cae8d08 - 1U & (longlong)(int)uVar8) * 4) = local_44
      ;
    }
    else {
      DAT_14cae8d08 = iVar9;
      FUN_140a1ab4e(&DAT_14cae8cc0);
    }
  }
  *param_1 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daeb26 FUN_147daeb26 body=96 status=ok
// SIG undefined FUN_147daeb26(void)

void FUN_147daeb26(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147daeb86 FUN_147daeb86 body=62 status=ok
// SIG undefined FUN_147daeb86(void)

void FUN_147daeb86(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147daebc4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147daebc4 FUN_147daebc4 body=93 status=ok
// SIG undefined FUN_147daebc4(void)

ulonglong FUN_147daebc4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147daec22 FUN_147daec22 body=118 status=ok
// SIG undefined FUN_147daec22(void)

void FUN_147daec22(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147daec98 FUN_147daec98 body=132 status=ok
// SIG undefined FUN_147daec98(void)

void FUN_147daec98(longlong param_1,int param_2)

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



// FUNCTION 147daed1e FUN_147daed1e body=118 status=ok
// SIG undefined FUN_147daed1e(void)

void FUN_147daed1e(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_147daed96(&DAT_14cb0f2f0,param_1,param_2);
  if ((iVar1 == -1) || ((longlong)iVar1 * 0x30 + DAT_14cb0f2f0 == 0)) {
    local_28 = param_2;
    FUN_147daee08(local_1c,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daed96 FUN_147daed96 body=114 status=ok
// SIG undefined FUN_147daed96(void)

int FUN_147daed96(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_140ba41f1(lVar4 + (longlong)iVar1 * 0x30,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x28 + (longlong)iVar1 * 0x30);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147daee08 FUN_147daee08 body=323 status=ok
// SIG undefined FUN_147daee08(void)

undefined4 * FUN_147daee08(undefined4 *param_1,uint param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147daef4c(local_48);
  lVar2 = *param_3;
  *local_40 = &PTR_FUN_14a184370;
  bVar1 = *(byte *)(lVar2 + 0x18);
  *(byte *)(local_40 + 3) = bVar1;
  (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])(local_40 + 1,lVar2 + 8);
  local_40[4] = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  cVar3 = FUN_147daf062(param_2,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb0f2f8 - DAT_14cb0f324;
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14cb0f338)) {
      param_2 = DAT_14cb0f338 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x2c) = param_2;
      puVar5 = DAT_14cb0f330;
      if (DAT_14cb0f330 == (undefined *)0x0) {
        puVar5 = &DAT_14cb0f328;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14cb0f338 - 1U & (longlong)(int)param_2) * 4);
      puVar5 = DAT_14cb0f330;
      if (DAT_14cb0f330 == (undefined *)0x0) {
        puVar5 = &DAT_14cb0f328;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cb0f338 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14cb0f338 = iVar7;
      FUN_147daf18e();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147daef4c FUN_147daef4c body=278 status=ok
// SIG undefined FUN_147daef4c(void)

int * FUN_147daef4c(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb0f320;
  iVar4 = DAT_14cb0f2f8;
  if (DAT_14cb0f324 == 0) {
    iVar2 = DAT_14cb0f2f8 + 1;
    bVar7 = DAT_14cb0f2fc == DAT_14cb0f2f8;
    DAT_14cb0f2f8 = iVar2;
    if (bVar7) {
      FUN_140044672(&DAT_14cb0f2f0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cb0f300,1);
    puVar3 = DAT_14cb0f310;
    if (DAT_14cb0f310 == (undefined *)0x0) {
      puVar3 = &DAT_14cb0f300;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cb0f320;
    DAT_14cb0f320 = *(int *)(DAT_14cb0f2f0 + 4 + lVar6 * 0x30);
    DAT_14cb0f324 = DAT_14cb0f324 + -1;
    iVar4 = iVar2;
    if (DAT_14cb0f324 != 0) {
      *(undefined4 *)(DAT_14cb0f2f0 + (longlong)DAT_14cb0f320 * 0x30) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cb0f300;
  if (DAT_14cb0f310 != (undefined *)0x0) {
    puVar3 = DAT_14cb0f310;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x30 + DAT_14cb0f2f0;
  return param_1;
}



// FUNCTION 147daf062 FUN_147daf062 body=164 status=ok
// SIG undefined FUN_147daf062(void)

undefined8 FUN_147daf062(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if ((DAT_14cb0f2f8 - DAT_14cb0f324 != 1) &&
     (iVar10 = FUN_147daed96(&DAT_14cb0f2f0,param_1,param_2), iVar10 != -1)) {
    puVar1 = (undefined8 *)(DAT_14cb0f2f0 + (longlong)iVar10 * 0x30);
    *puVar1 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar1 + 3)])(puVar1 + 1);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[6];
    uVar9 = param_2[7];
    puVar1[4] = *(undefined8 *)(param_2 + 8);
    *(undefined4 *)(puVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar7;
    *(undefined4 *)(puVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar9;
    *(undefined4 *)puVar1 = uVar2;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar3;
    *(undefined4 *)(puVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar5;
    FUN_147daf106(*param_3);
    *param_3 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 147daf106 FUN_147daf106 body=136 status=ok
// SIG undefined FUN_147daf106(void)

void FUN_147daf106(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb0f2f0;
  if (DAT_14cb0f324 != 0) {
    *(int *)(DAT_14cb0f2f0 + (longlong)DAT_14cb0f320 * 0x30) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x30) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb0f324) {
    iVar4 = DAT_14cb0f320;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x30) = iVar4;
  DAT_14cb0f324 = DAT_14cb0f324 + 1;
  puVar3 = &DAT_14cb0f300;
  if (DAT_14cb0f310 != (undefined *)0x0) {
    puVar3 = DAT_14cb0f310;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb0f320 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147daf18e FUN_147daf18e body=481 status=ok
// SIG undefined FUN_147daf18e(void)

void FUN_147daf18e(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb0f330 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb0f330,0,0,4);
  }
  uVar2 = DAT_14cb0f338;
  uVar3 = local_60;
  if (DAT_14cb0f338 != 0) {
    uVar8 = 0;
    FUN_144a1cbf0(&DAT_14cb0f328,0,DAT_14cb0f338,4);
    if (0 < (int)uVar2) {
      do {
        puVar7 = DAT_14cb0f330;
        if (DAT_14cb0f330 == (undefined *)0x0) {
          puVar7 = &DAT_14cb0f328;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14cb0f338 + 0x7fffffff & uVar8) * 4) = 0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cb0f300;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cb0f318 != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = &DAT_14cb0f2f0;
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if (local_60._4_4_ < *(int *)(local_48 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        lVar1 = *local_78;
        lVar9 = (longlong)iVar4 * 0x30;
        iVar5 = FUN_140ba40f9(lVar1 + lVar9);
        uVar6 = (longlong)iVar5 & (longlong)(int)DAT_14cb0f338 - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar1 + 0x2c + lVar9) = iVar5;
        puVar7 = DAT_14cb0f330;
        if (DAT_14cb0f330 == (undefined *)0x0) {
          puVar7 = &DAT_14cb0f328;
        }
        *(undefined4 *)(lVar1 + 0x28 + lVar9) =
             *(undefined4 *)(puVar7 + ((longlong)(int)DAT_14cb0f338 - 1U & uVar6) * 4);
        puVar7 = DAT_14cb0f330;
        if (DAT_14cb0f330 == (undefined *)0x0) {
          puVar7 = &DAT_14cb0f328;
        }
        *(int *)(puVar7 + ((longlong)iVar5 & (longlong)(int)DAT_14cb0f338 - 1U) * 4) = iVar4;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
    }
  }
  local_60 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147daf370 FUN_147daf370 body=187 status=ok
// SIG undefined FUN_147daf370(void)

void FUN_147daf370(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (DAT_14cb0f2f8 != DAT_14cb0f324) {
    iVar2 = FUN_140ba40f9();
    puVar3 = &DAT_14cb0f328;
    if (DAT_14cb0f330 != (undefined *)0x0) {
      puVar3 = DAT_14cb0f330;
    }
    uVar7 = (longlong)iVar2 & (longlong)DAT_14cb0f338 - 1U;
    if ((longlong)*(int *)(puVar3 + uVar7 * 4) != -1) {
      lVar5 = (longlong)*(int *)(puVar3 + uVar7 * 4) * 0x30 + DAT_14cb0f2f0;
      cVar1 = FUN_140ba41f1(lVar5,param_1);
      if (cVar1 == '\0') {
        do {
          lVar6 = lVar5;
          lVar5 = (longlong)*(int *)(lVar6 + 0x28);
          if (lVar5 == -1) {
            return;
          }
          lVar5 = lVar5 * 0x30 + DAT_14cb0f2f0;
          cVar1 = FUN_140ba41f1(lVar5,param_1);
        } while (cVar1 == '\0');
        puVar4 = (undefined4 *)(lVar6 + 0x28);
      }
      else {
        puVar4 = (undefined4 *)(puVar3 + uVar7 * 4);
      }
      FUN_147daf42c(*puVar4);
      return;
    }
  }
  return;
}



// FUNCTION 147daf42c FUN_147daf42c body=154 status=ok
// SIG undefined FUN_147daf42c(void)

void FUN_147daf42c(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  lVar1 = (longlong)param_1 * 0x30;
  puVar5 = &DAT_14cb0f328;
  if (DAT_14cb0f330 != (undefined *)0x0) {
    puVar5 = DAT_14cb0f330;
  }
  lVar6 = (longlong)*(int *)(DAT_14cb0f2f0 + 0x2c + lVar1);
  iVar4 = *(int *)(puVar5 + lVar6 * 4);
  if (iVar4 == param_1) {
    puVar2 = (undefined4 *)(puVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(DAT_14cb0f2f0 + 0x28 + lVar6 * 0x30);
    } while (iVar4 != param_1);
    puVar2 = (undefined4 *)(DAT_14cb0f2f0 + lVar6 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(DAT_14cb0f2f0 + lVar1 + 0x28);
  puVar3 = (undefined8 *)(DAT_14cb0f2f0 + lVar1);
  *puVar3 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(puVar3 + 3)])();
  FUN_147daf106(param_1);
  return;
}



// FUNCTION 147daf4c6 FUN_147daf4c6 body=56 status=ok
// SIG undefined FUN_147daf4c6(void)

undefined8 * FUN_147daf4c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab09500;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147daf4fe FUN_147daf4fe body=117 status=ok
// SIG undefined FUN_147daf4fe(void)

void FUN_147daf4fe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4008);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x4000;
    if (0x4000 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x4000 < *(uint *)(param_1 + 0x400c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x400c) = iVar4;
    FUN_147daf574(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147daf574 FUN_147daf574 body=136 status=ok
// SIG undefined FUN_147daf574(void)

void FUN_147daf574(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x4000);
  if ((uint)param_3 < 0x4001) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x4000,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 0x4000),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x4000,param_2,param_3,1);
  return;
}



// FUNCTION 147daf5fc FUN_147daf5fc body=138 status=ok
// SIG undefined FUN_147daf5fc(void)

void FUN_147daf5fc(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4008);
  uVar2 = *(uint *)(param_1 + 0x400c);
  if (uVar1 < 0x4001) {
    uVar1 = 0x4000;
  }
  else {
    uVar3 = uVar2 - uVar1;
    if (uVar3 < 0x4000) {
      if (uVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if ((int)uVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar1 = FUN_144a3809e(uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x400c);
    }
  }
  if (uVar1 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x400c) = uVar1;
  FUN_147daf574(param_1,*(undefined4 *)(param_1 + 0x4008),uVar1);
  return;
}



// FUNCTION 147daf686 FUN_147daf686 body=105 status=ok
// SIG undefined FUN_147daf686(void)

void FUN_147daf686(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_147da80a6(param_1[0x16],param_1 + 0x15);
  plVar3 = (longlong *)param_1[0x15];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147daf6e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147daf6f0 FUN_147daf6f0 body=295 status=ok
// SIG undefined FUN_147daf6f0(void)

longlong * FUN_147daf6f0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x10) << 2,(longlong)*(int *)(param_2 + 0x14) << 2
            );
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 0x10);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 0x10) = 0, *(int *)(param_2 + 0x14) != 0)) {
      FUN_147daf82e(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 0x10) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147daf818(param_2,local_1c,*(undefined4 *)(param_2 + 0x14));
      uVar3 = *(uint *)(param_2 + 0x10);
    }
    (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)(int)uVar3 << 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147daf818 FUN_147daf818 body=21 status=ok
// SIG undefined FUN_147daf818(void)

void FUN_147daf818(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) * 4;
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



// FUNCTION 147daf82e FUN_147daf82e body=19 status=ok
// SIG undefined FUN_147daf82e(void)

void FUN_147daf82e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) << 2;
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x14) = iVar1;
  }
  return;
}



// FUNCTION 147daf842 FUN_147daf842 body=147 status=ok
// SIG undefined FUN_147daf842(void)

void FUN_147daf842(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147daf8d6 FUN_147daf8d6 body=180 status=ok
// SIG undefined FUN_147daf8d6(void)

undefined8 * FUN_147daf8d6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1447bda9e(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 147daf98a FUN_147daf98a body=147 status=ok
// SIG undefined FUN_147daf98a(void)

void FUN_147daf98a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dafa1e FUN_147dafa1e body=101 status=ok
// SIG undefined FUN_147dafa1e(void)

void FUN_147dafa1e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x90 + *param_1);
  FUN_1400ea4bd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x90 + (longlong)_Dst),(longlong)iVar2 * 0x90);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147dafa84 FUN_147dafa84 body=62 status=ok
// SIG undefined FUN_147dafa84(void)

void FUN_147dafa84(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dafac2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x90,8);
  }
  return;
}



// FUNCTION 147dafac2 FUN_147dafac2 body=112 status=ok
// SIG undefined FUN_147dafac2(void)

ulonglong FUN_147dafac2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x90) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147dafafc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x90,8);
      param_2 = param_2 / 0x90;
    }
  }
LAB_147dafafc:
  return param_2 & 0xffffffff;
}



// FUNCTION 147dafb32 FUN_147dafb32 body=40 status=ok
// SIG undefined FUN_147dafb32(void)

bool FUN_147dafb32(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return true;
  }
  lVar2 = 0;
  do {
    bVar3 = *(char *)(param_1 + lVar2) == *(char *)(param_2 + lVar2);
    if (!bVar3) {
      return bVar3;
    }
    iVar1 = (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (param_3 + -1 != iVar1);
  return bVar3;
}



// FUNCTION 147dafb5a FUN_147dafb5a body=104 status=ok
// SIG undefined FUN_147dafb5a(void)

void FUN_147dafb5a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_147dafbc2(param_1 + 0x15);
  FUN_145a4510b(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147dafbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147dafbc2 FUN_147dafbc2 body=325 status=ok
// SIG undefined FUN_147dafbc2(void)

void FUN_147dafbc2(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x800000000;
  plVar4 = (longlong *)FUN_140dfbee4();
  lVar8 = plVar4[0x22];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar8 = plVar4[0x22];
  }
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    lVar6 = 0;
    do {
      cVar2 = FUN_147da9184(lVar8,*param_1 + lVar9);
      uVar1 = local_40;
      if (cVar2 != '\0') {
        lVar7 = (longlong)(int)local_40;
        uVar3 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,uVar3);
        if (local_40._4_4_ < uVar3) {
          FUN_1400cc390(local_68,uVar1 & 0xffffffff);
        }
        puVar5 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar5 = local_68;
        }
        *(int *)(puVar5 + lVar7 * 4) = (int)lVar6;
      }
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar6 < (int)param_1[1]);
    lVar8 = (longlong)(int)local_40;
    puVar5 = local_68;
    if (local_48 != (undefined1 *)0x0) {
      puVar5 = local_48;
    }
    if (lVar8 != 0) {
      lVar6 = 0;
      do {
        local_78 = *(undefined8 *)(*param_1 + (longlong)*(int *)(puVar5 + lVar6) * 0x28);
        local_70 = *(undefined4 *)(*param_1 + 8 + (longlong)*(int *)(puVar5 + lVar6) * 0x28);
        FUN_147da929f(&local_78);
        lVar6 = lVar6 + 4;
      } while (lVar8 * 4 != lVar6);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dafd08 FUN_147dafd08 body=48 status=ok
// SIG undefined FUN_147dafd08(void)

void FUN_147dafd08(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147dafd38 FUN_147dafd38 body=48 status=ok
// SIG undefined FUN_147dafd38(void)

void FUN_147dafd38(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147dafd68 FUN_147dafd68 body=38 status=ok
// SIG undefined FUN_147dafd68(void)

undefined8 FUN_147dafd68(undefined8 param_1,int param_2)

{
  FUN_14079057a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dafd8e FUN_147dafd8e body=421 status=ok
// SIG undefined FUN_147dafd8e(void)

longlong * FUN_147dafd8e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14572c66e(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_14572c66e(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1458edfd8(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147daff34 FUN_147daff34 body=96 status=ok
// SIG undefined FUN_147daff34(void)

void FUN_147daff34(longlong param_1,int param_2)

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



// FUNCTION 147daff94 FUN_147daff94 body=223 status=ok
// SIG undefined FUN_147daff94(void)

void FUN_147daff94(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar4 = (ulonglong)DAT_14cb109e0;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb109ec = DAT_14cb109ec + 1;
  do {
    lVar7 = uVar4 * 0x10 + -8;
    uVar6 = uVar4;
    while (((*(int *)(DAT_14cb109d8 + lVar7) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb109d8 + -8 + lVar7), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,param_3,param_4),
           cVar3 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar2 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar2) {
        DAT_14cb109ec = DAT_14cb109ec + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147db0042;
      }
    }
    uVar4 = uVar6 - 1;
    bVar5 = true;
  } while (1 < uVar6);
  DAT_14cb109ec = DAT_14cb109ec + -1;
LAB_147db0042:
  FUN_14474d06a(&DAT_14cb109d8,0);
  return;
}



// FUNCTION 147db0074 FUN_147db0074 body=132 status=ok
// SIG undefined FUN_147db0074(void)

void FUN_147db0074(longlong param_1,int param_2)

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



// FUNCTION 147db00fa FUN_147db00fa body=416 status=ok
// SIG undefined FUN_147db00fa(void)

void FUN_147db00fa(longlong *param_1,ulonglong *param_2,undefined1 *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < 1) {
    uVar9 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar9 = 0;
    bVar6 = DAT_14c950c29;
    do {
      uVar3 = *param_2;
      if ((uVar3 != 0 & bVar6) == 1) {
        FUN_1456cec3c(uVar3);
        bVar6 = DAT_14c950c29;
      }
      uVar1 = (uVar7 >> 1) + uVar9;
      uVar8 = *(ulonglong *)((ulonglong)uVar1 * 0x10 + lVar2);
      if (((bVar6 & 1) != 0) && (uVar8 != 0)) {
        FUN_1456cec3c(uVar8);
        bVar6 = DAT_14c950c29;
      }
      if (uVar8 < uVar3) {
        uVar9 = uVar1 + (uVar7 & 1);
      }
      bVar5 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar5);
    uVar7 = *(uint *)(param_1 + 1);
    if ((int)uVar9 < (int)uVar7) {
      uVar8 = (ulonglong)uVar9;
      uVar3 = *(ulonglong *)(*param_1 + uVar8 * 0x10);
      if (((bVar6 & 1) != 0) && (uVar3 != 0)) {
        FUN_1456cec3c(uVar3);
        bVar6 = DAT_14c950c29;
      }
      uVar4 = *param_2;
      if ((uVar4 != 0 & bVar6) == 1) {
        FUN_1456cec3c(uVar4);
      }
      if (uVar3 <= uVar4) goto LAB_147db0232;
      uVar7 = *(uint *)(param_1 + 1);
    }
  }
  *(uint *)(param_1 + 1) = uVar7 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar7) {
    FUN_1417faaaa(param_1,uVar7);
  }
  uVar8 = (ulonglong)uVar9;
  memmove((void *)(uVar8 * 0x10 + *param_1 + 0x10),(void *)(*param_1 + uVar8 * 0x10),
          (ulonglong)(uVar7 - uVar9) << 4);
LAB_147db0232:
  lVar2 = *param_1;
  uVar3 = *param_2;
  *(ulonglong *)(lVar2 + uVar8 * 0x10) = uVar3;
  if ((uVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(lVar2 + uVar8 * 0x10 + 8) = *param_3;
  return;
}



// FUNCTION 147db029a FUN_147db029a body=48 status=ok
// SIG undefined FUN_147db029a(void)

void FUN_147db029a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147db02ca FUN_147db02ca body=82 status=ok
// SIG undefined FUN_147db02ca(void)

void FUN_147db02ca(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147db031c FUN_147db031c body=124 status=ok
// SIG undefined FUN_147db031c(void)

void FUN_147db031c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_147db0398(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147db03ce(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 147db0398 FUN_147db0398 body=53 status=ok
// SIG undefined FUN_147db0398(void)

ulonglong FUN_147db0398(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147db03ce FUN_147db03ce body=132 status=ok
// SIG undefined FUN_147db03ce(void)

void FUN_147db03ce(longlong param_1,int param_2)

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



// FUNCTION 147db0454 FUN_147db0454 body=94 status=ok
// SIG undefined FUN_147db0454(void)

void FUN_147db0454(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14612a8a6(param_1,param_3);
  return;
}



// FUNCTION 147db04b2 FUN_147db04b2 body=29 status=ok
// SIG undefined FUN_147db04b2(void)

undefined8 FUN_147db04b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db04ea FUN_147db04ea body=29 status=ok
// SIG undefined FUN_147db04ea(void)

bool FUN_147db04ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147db0508 FUN_147db0508 body=26 status=ok
// SIG undefined FUN_147db0508(void)

bool FUN_147db0508(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147db0522 FUN_147db0522 body=24 status=ok
// SIG undefined FUN_147db0522(void)

bool FUN_147db0522(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147db0546 FUN_147db0546 body=101 status=ok
// SIG undefined FUN_147db0546(void)

void FUN_147db0546(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab09730;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab096c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147db05ac FUN_147db05ac body=101 status=ok
// SIG undefined FUN_147db05ac(void)

void FUN_147db05ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab09730;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab096c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147db0612 FUN_147db0612 body=134 status=ok
// SIG undefined FUN_147db0612(void)

void FUN_147db0612(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab09730;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab096c0;
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
                    /* WARNING: Could not recover jumptable at 0x000147db0689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147db0698 FUN_147db0698 body=44 status=ok
// SIG undefined FUN_147db0698(void)

void FUN_147db0698(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147db06c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147db06c4 FUN_147db06c4 body=156 status=ok
// SIG undefined FUN_147db06c4(void)

bool FUN_147db06c4(longlong param_1,undefined8 param_2)

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



// FUNCTION 147db0764 FUN_147db0764 body=31 status=ok
// SIG undefined FUN_147db0764(void)

undefined8 FUN_147db0764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db079e FUN_147db079e body=29 status=ok
// SIG undefined FUN_147db079e(void)

bool FUN_147db079e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147db07bc FUN_147db07bc body=26 status=ok
// SIG undefined FUN_147db07bc(void)

bool FUN_147db07bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147db07d6 FUN_147db07d6 body=24 status=ok
// SIG undefined FUN_147db07d6(void)

bool FUN_147db07d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147db07fa FUN_147db07fa body=101 status=ok
// SIG undefined FUN_147db07fa(void)

void FUN_147db07fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab09810;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab097a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147db0860 FUN_147db0860 body=101 status=ok
// SIG undefined FUN_147db0860(void)

void FUN_147db0860(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab09810;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab097a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147db08c6 FUN_147db08c6 body=134 status=ok
// SIG undefined FUN_147db08c6(void)

void FUN_147db08c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab09810;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14ab097a0;
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
                    /* WARNING: Could not recover jumptable at 0x000147db093d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147db094c FUN_147db094c body=48 status=ok
// SIG undefined FUN_147db094c(void)

void FUN_147db094c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147db0979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 147db097e FUN_147db097e body=52 status=ok
// SIG undefined FUN_147db097e(void)

undefined8 * FUN_147db097e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ab098f0;
  FUN_147db0d46(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147db09cc FUN_147db09cc body=29 status=ok
// SIG undefined FUN_147db09cc(void)

bool FUN_147db09cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  return lVar1 == param_2;
}



// FUNCTION 147db09ea FUN_147db09ea body=26 status=ok
// SIG undefined FUN_147db09ea(void)

bool FUN_147db09ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x58,1);
  return lVar1 == 0;
}


