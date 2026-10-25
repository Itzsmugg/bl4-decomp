// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14724b5da FUN_14724b5da body=38 status=ok
// SIG undefined FUN_14724b5da(void)

undefined8 FUN_14724b5da(undefined8 param_1,int param_2)

{
  FUN_1462ec744();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724b606 FUN_14724b606 body=38 status=ok
// SIG undefined FUN_14724b606(void)

undefined8 FUN_14724b606(undefined8 param_1,int param_2)

{
  FUN_1462ec78c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724b632 FUN_14724b632 body=38 status=ok
// SIG undefined FUN_14724b632(void)

undefined8 FUN_14724b632(undefined8 param_1,int param_2)

{
  FUN_1462ec7d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724b65e FUN_14724b65e body=293 status=ok
// SIG undefined FUN_14724b65e(void)

void FUN_14724b65e(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined1 *local_60;
  undefined2 local_4a;
  undefined8 local_48;
  undefined1 local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 - 1U < 2)) {
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc30);
    local_48 = uVar1;
    EnterCriticalSection(lpCriticalSection);
    local_68 = &local_4a;
    local_4a = 0;
    local_60 = &local_3d;
    FUN_14573482a(param_1 + 0xc58,&local_3c,
                  (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1 & 0x7fffffff,&local_48);
    if (*(char *)(*(longlong *)(param_1 + 0xc58) + 8 + (longlong)local_3c * 0x10) == '\x01') {
      LeaveCriticalSection(lpCriticalSection);
    }
    else {
      *(undefined1 *)((longlong)local_3c * 0x10 + *(longlong *)(param_1 + 0xc58) + 8) = 1;
      LeaveCriticalSection(lpCriticalSection);
      FUN_140691a2a(param_1,param_3,param_4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724b784 FUN_14724b784 body=68 status=ok
// SIG undefined FUN_14724b784(void)

void FUN_14724b784(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724b7cc FUN_14724b7cc body=68 status=ok
// SIG undefined FUN_14724b7cc(void)

void FUN_14724b7cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724b814 FUN_14724b814 body=175 status=ok
// SIG undefined FUN_14724b814(void)

longlong FUN_14724b814(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724b8c4 FUN_14724b8c4 body=68 status=ok
// SIG undefined FUN_14724b8c4(void)

void FUN_14724b8c4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724b90c FUN_14724b90c body=68 status=ok
// SIG undefined FUN_14724b90c(void)

void FUN_14724b90c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724b954 FUN_14724b954 body=296 status=ok
// SIG undefined FUN_14724b954(void)

longlong FUN_14724b954(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724ba7c FUN_14724ba7c body=68 status=ok
// SIG undefined FUN_14724ba7c(void)

void FUN_14724ba7c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724bac4 FUN_14724bac4 body=68 status=ok
// SIG undefined FUN_14724bac4(void)

void FUN_14724bac4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724bb0c FUN_14724bb0c body=175 status=ok
// SIG undefined FUN_14724bb0c(void)

longlong FUN_14724bb0c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724bbbc FUN_14724bbbc body=68 status=ok
// SIG undefined FUN_14724bbbc(void)

void FUN_14724bbbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724bc04 FUN_14724bc04 body=68 status=ok
// SIG undefined FUN_14724bc04(void)

void FUN_14724bc04(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724bc4c FUN_14724bc4c body=296 status=ok
// SIG undefined FUN_14724bc4c(void)

longlong FUN_14724bc4c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724bd74 FUN_14724bd74 body=68 status=ok
// SIG undefined FUN_14724bd74(void)

void FUN_14724bd74(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724bdbc FUN_14724bdbc body=68 status=ok
// SIG undefined FUN_14724bdbc(void)

void FUN_14724bdbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724be04 FUN_14724be04 body=175 status=ok
// SIG undefined FUN_14724be04(void)

longlong FUN_14724be04(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724beb4 FUN_14724beb4 body=68 status=ok
// SIG undefined FUN_14724beb4(void)

void FUN_14724beb4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724befc FUN_14724befc body=68 status=ok
// SIG undefined FUN_14724befc(void)

void FUN_14724befc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724bf44 FUN_14724bf44 body=296 status=ok
// SIG undefined FUN_14724bf44(void)

longlong FUN_14724bf44(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724c06c FUN_14724c06c body=68 status=ok
// SIG undefined FUN_14724c06c(void)

void FUN_14724c06c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c0b4 FUN_14724c0b4 body=68 status=ok
// SIG undefined FUN_14724c0b4(void)

void FUN_14724c0b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c0fc FUN_14724c0fc body=175 status=ok
// SIG undefined FUN_14724c0fc(void)

longlong FUN_14724c0fc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724c1ac FUN_14724c1ac body=68 status=ok
// SIG undefined FUN_14724c1ac(void)

void FUN_14724c1ac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724c1f4 FUN_14724c1f4 body=68 status=ok
// SIG undefined FUN_14724c1f4(void)

void FUN_14724c1f4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724c23c FUN_14724c23c body=296 status=ok
// SIG undefined FUN_14724c23c(void)

longlong FUN_14724c23c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724c364 FUN_14724c364 body=68 status=ok
// SIG undefined FUN_14724c364(void)

void FUN_14724c364(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c3ac FUN_14724c3ac body=68 status=ok
// SIG undefined FUN_14724c3ac(void)

void FUN_14724c3ac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c3f4 FUN_14724c3f4 body=175 status=ok
// SIG undefined FUN_14724c3f4(void)

longlong FUN_14724c3f4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724c4a4 FUN_14724c4a4 body=68 status=ok
// SIG undefined FUN_14724c4a4(void)

void FUN_14724c4a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724c4ec FUN_14724c4ec body=68 status=ok
// SIG undefined FUN_14724c4ec(void)

void FUN_14724c4ec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724c534 FUN_14724c534 body=296 status=ok
// SIG undefined FUN_14724c534(void)

longlong FUN_14724c534(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724c65c FUN_14724c65c body=68 status=ok
// SIG undefined FUN_14724c65c(void)

void FUN_14724c65c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c6a4 FUN_14724c6a4 body=68 status=ok
// SIG undefined FUN_14724c6a4(void)

void FUN_14724c6a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c6ec FUN_14724c6ec body=175 status=ok
// SIG undefined FUN_14724c6ec(void)

longlong FUN_14724c6ec(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724c79c FUN_14724c79c body=68 status=ok
// SIG undefined FUN_14724c79c(void)

void FUN_14724c79c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724c7e4 FUN_14724c7e4 body=68 status=ok
// SIG undefined FUN_14724c7e4(void)

void FUN_14724c7e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724c82c FUN_14724c82c body=296 status=ok
// SIG undefined FUN_14724c82c(void)

longlong FUN_14724c82c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724c954 FUN_14724c954 body=68 status=ok
// SIG undefined FUN_14724c954(void)

void FUN_14724c954(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c99c FUN_14724c99c body=68 status=ok
// SIG undefined FUN_14724c99c(void)

void FUN_14724c99c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724c9e4 FUN_14724c9e4 body=175 status=ok
// SIG undefined FUN_14724c9e4(void)

longlong FUN_14724c9e4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724ca94 FUN_14724ca94 body=68 status=ok
// SIG undefined FUN_14724ca94(void)

void FUN_14724ca94(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724cadc FUN_14724cadc body=68 status=ok
// SIG undefined FUN_14724cadc(void)

void FUN_14724cadc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724cb24 FUN_14724cb24 body=296 status=ok
// SIG undefined FUN_14724cb24(void)

longlong FUN_14724cb24(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724cc4c FUN_14724cc4c body=68 status=ok
// SIG undefined FUN_14724cc4c(void)

void FUN_14724cc4c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724cc94 FUN_14724cc94 body=68 status=ok
// SIG undefined FUN_14724cc94(void)

void FUN_14724cc94(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14724ccdc FUN_14724ccdc body=175 status=ok
// SIG undefined FUN_14724ccdc(void)

longlong FUN_14724ccdc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1472ea40c();
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x10c) = 0xffff;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  return param_1;
}



// FUNCTION 14724cd8c FUN_14724cd8c body=68 status=ok
// SIG undefined FUN_14724cd8c(void)

void FUN_14724cd8c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724cdd4 FUN_14724cdd4 body=68 status=ok
// SIG undefined FUN_14724cdd4(void)

void FUN_14724cdd4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724ce1c FUN_14724ce1c body=296 status=ok
// SIG undefined FUN_14724ce1c(void)

longlong FUN_14724ce1c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1472ea40c();
  *(undefined8 *)(param_1 + 0x108) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x110) = 0xffff;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined2 *)(param_1 + 0x116) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_147440b96(param_1 + 0x108,uVar1,L"PrecomputedLightingBuffer",0);
  FUN_147440b96(param_1 + 0x10a,uVar1,L"IndirectLightingCache",0);
  FUN_147440b96(param_1 + 0x10c,uVar1,L"LightmapResourceCluster",0);
  FUN_145d50964();
  FUN_147440b96(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),DAT_14ca09858,0);
  lVar2 = FUN_1415bf548();
  FUN_147440b96(param_1 + 0x10e,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  lVar2 = FUN_1415bf3a0();
  FUN_147440b96(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x18),0);
  FUN_1474409b8(param_1 + 0x112,*(undefined8 *)(param_2 + 0x28),L"UseCSM",0);
  return param_1;
}



// FUNCTION 14724cf44 FUN_14724cf44 body=241 status=ok
// SIG undefined FUN_14724cf44(void)

longlong FUN_14724cf44(longlong param_1)

{
  FUN_144b13da0(param_1 + 0x10);
  FUN_144b13da0(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x26c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x290) = 0;
  FUN_144b11552(param_1 + 0x2a0);
  FUN_144b11552(param_1 + 0x550);
  FUN_144b13dec(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0xbb0) = 0;
  *(undefined8 *)(param_1 + 0xbc0) = 0;
  *(undefined4 *)(param_1 + 0xbc8) = 0;
  memset((void *)(param_1 + 0x950),0,0xd8);
  *(undefined4 *)(param_1 + 0xbcc) = 0x3f800000;
  memset((void *)(param_1 + 0xbd0),0,0x88);
  memset((void *)(param_1 + 0xc60),0,0x9c);
  *(undefined8 *)(param_1 + 0xcfc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd04) = 0;
  *(undefined8 *)(param_1 + 0xd0c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd14) = 0;
  *(undefined8 *)(param_1 + 0xd1c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd24) = 0;
  *(undefined4 *)(param_1 + 0xd2c) = 0x3f800000;
  return param_1;
}



// FUNCTION 14724d036 FUN_14724d036 body=29 status=ok
// SIG undefined FUN_14724d036(void)

undefined8 FUN_14724d036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d054 FUN_14724d054 body=231 status=ok
// SIG undefined FUN_14724d054(void)

undefined8 *
FUN_14724d054(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_145d50964();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca09888;
  puVar6[4] = DAT_14ca09888;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca09840;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a290c50;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 14724d13c FUN_14724d13c body=38 status=ok
// SIG undefined FUN_14724d13c(void)

undefined8 FUN_14724d13c(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d162 FUN_14724d162 body=38 status=ok
// SIG undefined FUN_14724d162(void)

undefined8 FUN_14724d162(undefined8 param_1,int param_2)

{
  FUN_1462ec81c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d18e FUN_14724d18e body=38 status=ok
// SIG undefined FUN_14724d18e(void)

undefined8 FUN_14724d18e(undefined8 param_1,int param_2)

{
  FUN_1462ec864();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d1ba FUN_14724d1ba body=38 status=ok
// SIG undefined FUN_14724d1ba(void)

undefined8 FUN_14724d1ba(undefined8 param_1,int param_2)

{
  FUN_1462ec8ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d1e6 FUN_14724d1e6 body=38 status=ok
// SIG undefined FUN_14724d1e6(void)

undefined8 FUN_14724d1e6(undefined8 param_1,int param_2)

{
  FUN_1462ec8f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d212 FUN_14724d212 body=38 status=ok
// SIG undefined FUN_14724d212(void)

undefined8 FUN_14724d212(undefined8 param_1,int param_2)

{
  FUN_1462ec93c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d23e FUN_14724d23e body=38 status=ok
// SIG undefined FUN_14724d23e(void)

undefined8 FUN_14724d23e(undefined8 param_1,int param_2)

{
  FUN_1462ec984();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d26a FUN_14724d26a body=38 status=ok
// SIG undefined FUN_14724d26a(void)

undefined8 FUN_14724d26a(undefined8 param_1,int param_2)

{
  FUN_1462ec9cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d296 FUN_14724d296 body=38 status=ok
// SIG undefined FUN_14724d296(void)

undefined8 FUN_14724d296(undefined8 param_1,int param_2)

{
  FUN_1462eca14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d2c2 FUN_14724d2c2 body=38 status=ok
// SIG undefined FUN_14724d2c2(void)

undefined8 FUN_14724d2c2(undefined8 param_1,int param_2)

{
  FUN_1462eca5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d2ee FUN_14724d2ee body=38 status=ok
// SIG undefined FUN_14724d2ee(void)

undefined8 FUN_14724d2ee(undefined8 param_1,int param_2)

{
  FUN_1462ecaa4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d31a FUN_14724d31a body=38 status=ok
// SIG undefined FUN_14724d31a(void)

undefined8 FUN_14724d31a(undefined8 param_1,int param_2)

{
  FUN_1462ecaec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d346 FUN_14724d346 body=38 status=ok
// SIG undefined FUN_14724d346(void)

undefined8 FUN_14724d346(undefined8 param_1,int param_2)

{
  FUN_1462ecb34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d372 FUN_14724d372 body=38 status=ok
// SIG undefined FUN_14724d372(void)

undefined8 FUN_14724d372(undefined8 param_1,int param_2)

{
  FUN_1462ecb7c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d39e FUN_14724d39e body=38 status=ok
// SIG undefined FUN_14724d39e(void)

undefined8 FUN_14724d39e(undefined8 param_1,int param_2)

{
  FUN_1462ecbc4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d3ca FUN_14724d3ca body=38 status=ok
// SIG undefined FUN_14724d3ca(void)

undefined8 FUN_14724d3ca(undefined8 param_1,int param_2)

{
  FUN_1462ecc0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d3f6 FUN_14724d3f6 body=38 status=ok
// SIG undefined FUN_14724d3f6(void)

undefined8 FUN_14724d3f6(undefined8 param_1,int param_2)

{
  FUN_1462ecc54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d422 FUN_14724d422 body=38 status=ok
// SIG undefined FUN_14724d422(void)

undefined8 FUN_14724d422(undefined8 param_1,int param_2)

{
  FUN_1462ecc9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d44e FUN_14724d44e body=38 status=ok
// SIG undefined FUN_14724d44e(void)

undefined8 FUN_14724d44e(undefined8 param_1,int param_2)

{
  FUN_1462ecce4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d47a FUN_14724d47a body=38 status=ok
// SIG undefined FUN_14724d47a(void)

undefined8 FUN_14724d47a(undefined8 param_1,int param_2)

{
  FUN_1462ecd2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d4a6 FUN_14724d4a6 body=38 status=ok
// SIG undefined FUN_14724d4a6(void)

undefined8 FUN_14724d4a6(undefined8 param_1,int param_2)

{
  FUN_1462ecd74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d4d2 FUN_14724d4d2 body=38 status=ok
// SIG undefined FUN_14724d4d2(void)

undefined8 FUN_14724d4d2(undefined8 param_1,int param_2)

{
  FUN_1462ecdbc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d4fe FUN_14724d4fe body=38 status=ok
// SIG undefined FUN_14724d4fe(void)

undefined8 FUN_14724d4fe(undefined8 param_1,int param_2)

{
  FUN_1462ece04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d52a FUN_14724d52a body=38 status=ok
// SIG undefined FUN_14724d52a(void)

undefined8 FUN_14724d52a(undefined8 param_1,int param_2)

{
  FUN_1462ece4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d584 FUN_14724d584 body=38 status=ok
// SIG undefined FUN_14724d584(void)

undefined8 FUN_14724d584(undefined8 param_1,int param_2)

{
  FUN_1462ece94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14724d5af FUN_14724d5af body=195 status=ok
// SIG undefined FUN_14724d5af(void)

bool FUN_14724d5af(longlong param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca121a0) {
    FUN_144b3d300(&DAT_14ca121a0);
    if (DAT_14ca121a0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca12198 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DisableDistortion",1);
      _Init_thread_footer(&DAT_14ca121a0);
    }
  }
  iVar2 = (**(code **)(*DAT_14ca12198 + 0xb0))();
  if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x54) & 1) == 0) ||
     (*(char *)(param_1 + 0x36cc) != '\x01')) {
    bVar1 = false;
  }
  else {
    iVar3 = FUN_140198686();
    bVar1 = iVar2 == 0 && 0 < iVar3;
  }
  return bVar1;
}



// FUNCTION 14724d672 FUN_14724d672 body=425 status=ok
// SIG undefined FUN_14724d672(void)

void FUN_14724d672(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar9 + 0x20;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(plVar1);
    puVar9 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar9 + 0x20;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar9 = &PTR_FUN_14a299360;
  puVar6 = puVar9 + 2;
  puVar9[0x1e] = 0;
  *(undefined4 *)(puVar9 + 0x1f) = 0;
  memset(puVar6,0,0xd8);
  *(undefined4 *)((longlong)puVar9 + 0xfc) = 0x3f800000;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar9;
  uVar3 = *(uint *)(param_2 + 0x125b0);
  cVar5 = FUN_14743049a(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2));
  if (*(char *)(*(longlong *)(param_2 + 8) + 0xd0) == '\x01') {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x348);
    lVar7 = 0;
    if (*(char *)(lVar4 + 8) != '\0') {
      lVar7 = lVar4;
    }
  }
  else {
    lVar7 = 0;
  }
  uVar8 = 2;
  if (cVar5 != '\0') {
    uVar8 = 0x80;
  }
  FUN_140250972(param_1,lVar7,uVar8 | uVar3 >> 7 & 4,puVar6);
  FUN_142bf7d8f(puVar9 + 0x1e,param_2);
  local_50 = puVar6;
  FUN_145f81274();
  local_58 = DAT_14ca12118;
  FUN_14725af08(param_1 + 0x1a8,plVar1,&local_50);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14724d81c FUN_14724d81c body=44 status=ok
// SIG undefined FUN_14724d81c(void)

void FUN_14724d81c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724d868 FUN_14724d868 body=96 status=ok
// SIG undefined FUN_14724d868(void)

undefined8 FUN_14724d868(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4ff3e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16be8,1);
  return uVar3;
}



// FUNCTION 14724d8c8 FUN_14724d8c8 body=138 status=ok
// SIG undefined FUN_14724d8c8(void)

void * FUN_14724d8c8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724d952 FUN_14724d952 body=44 status=ok
// SIG undefined FUN_14724d952(void)

void FUN_14724d952(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724d99e FUN_14724d99e body=96 status=ok
// SIG undefined FUN_14724d99e(void)

undefined8 FUN_14724d99e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145edd4f6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16c70,1);
  return uVar3;
}



// FUNCTION 14724d9fe FUN_14724d9fe body=138 status=ok
// SIG undefined FUN_14724d9fe(void)

void * FUN_14724d9fe(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724da88 FUN_14724da88 body=44 status=ok
// SIG undefined FUN_14724da88(void)

void FUN_14724da88(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724dabc FUN_14724dabc body=96 status=ok
// SIG undefined FUN_14724dabc(void)

undefined8 FUN_14724dabc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f50534();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16cf8,1);
  return uVar3;
}



// FUNCTION 14724db1c FUN_14724db1c body=138 status=ok
// SIG undefined FUN_14724db1c(void)

void * FUN_14724db1c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724dba6 FUN_14724dba6 body=179 status=ok
// SIG undefined FUN_14724dba6(void)

undefined4 * FUN_14724dba6(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[4];
  bVar3 = param_3[8];
  bVar4 = param_3[0xc];
  bVar5 = param_3[0x10];
  bVar6 = param_3[0x14];
  bVar7 = param_3[0x18];
  iVar8 = *(int *)(param_3 + 0x1c);
  FUN_145f502c6();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca12490,
                ((uint)bVar2 * 2 + (uint)bVar3 * 4 | (uint)bVar1) +
                ((uint)bVar4 + (uint)bVar5 * 2 | iVar8 << 4 | (uint)bVar6 * 4 + (uint)bVar7 * 8) * 8
               );
  FUN_145f502c6();
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



// FUNCTION 14724dc5a FUN_14724dc5a body=44 status=ok
// SIG undefined FUN_14724dc5a(void)

void FUN_14724dc5a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724dc8e FUN_14724dc8e body=96 status=ok
// SIG undefined FUN_14724dc8e(void)

undefined8 FUN_14724dc8e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8a798();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16d80,1);
  return uVar3;
}



// FUNCTION 14724dcee FUN_14724dcee body=138 status=ok
// SIG undefined FUN_14724dcee(void)

void * FUN_14724dcee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724dd78 FUN_14724dd78 body=44 status=ok
// SIG undefined FUN_14724dd78(void)

void FUN_14724dd78(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724ddac FUN_14724ddac body=96 status=ok
// SIG undefined FUN_14724ddac(void)

undefined8 FUN_14724ddac(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8ad08();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16e08,1);
  return uVar3;
}



// FUNCTION 14724de0c FUN_14724de0c body=138 status=ok
// SIG undefined FUN_14724de0c(void)

void * FUN_14724de0c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724de96 FUN_14724de96 body=44 status=ok
// SIG undefined FUN_14724de96(void)

void FUN_14724de96(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724deca FUN_14724deca body=96 status=ok
// SIG undefined FUN_14724deca(void)

undefined8 FUN_14724deca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145edd9dc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16e90,1);
  return uVar3;
}



// FUNCTION 14724df2a FUN_14724df2a body=138 status=ok
// SIG undefined FUN_14724df2a(void)

void * FUN_14724df2a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724dfb4 FUN_14724dfb4 body=56 status=ok
// SIG undefined FUN_14724dfb4(void)

void FUN_14724dfb4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 14724dff4 FUN_14724dff4 body=96 status=ok
// SIG undefined FUN_14724dff4(void)

undefined8 FUN_14724dff4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_147254bd0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16f18,0);
  return uVar3;
}



// FUNCTION 14724e054 FUN_14724e054 body=52 status=ok
// SIG undefined FUN_14724e054(void)

void FUN_14724e054(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf8);
  memset(_Dst,0,0xf8);
  FUN_1472ea222(_Dst);
  return;
}



// FUNCTION 14724e088 FUN_14724e088 body=108 status=ok
// SIG undefined FUN_14724e088(void)

undefined4 * FUN_14724e088(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e8a52a();
  FUN_145e8a52a();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca125c8,0);
  FUN_145e8a52a();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724e0f5 FUN_14724e0f5 body=177 status=ok
// SIG undefined FUN_14724e0f5(void)

void FUN_14724e0f5(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e8a798();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca16d80,param_4);
  local_78 = &DAT_14ca16d80;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14725b872(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724e1a8 FUN_14724e1a8 body=108 status=ok
// SIG undefined FUN_14724e1a8(void)

undefined4 * FUN_14724e1a8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e8aa9a();
  FUN_145e8aa9a();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca126f0,0);
  FUN_145e8aa9a();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724e216 FUN_14724e216 body=44 status=ok
// SIG undefined FUN_14724e216(void)

void FUN_14724e216(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724e24e FUN_14724e24e body=96 status=ok
// SIG undefined FUN_14724e24e(void)

undefined8 FUN_14724e24e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f190fe();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca16fa0,1);
  return uVar3;
}



// FUNCTION 14724e2ae FUN_14724e2ae body=138 status=ok
// SIG undefined FUN_14724e2ae(void)

void * FUN_14724e2ae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14724e338 FUN_14724e338 body=230 status=ok
// SIG undefined FUN_14724e338(void)

void FUN_14724e338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145f190fe();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca16fa0,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145f190fe();
  FUN_14725c4b4(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724e41f FUN_14724e41f body=52 status=ok
// SIG undefined FUN_14724e41f(void)

void FUN_14724e41f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_142df6a6b();
  FUN_142f854c6(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14724e454 FUN_14724e454 body=954 status=ok
// SIG undefined FUN_14724e454(void)

undefined8 * FUN_14724e454(undefined8 *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  longlong lVar10;
  bool bVar11;
  
  FUN_140533278();
  *param_1 = &PTR_FUN_14a292270;
  bVar9 = DAT_14c760e14;
  *(byte *)(param_1 + 0x1a8) = DAT_14c760e14 ^ 1;
  bVar9 = DAT_14ca964f0 & bVar9;
  *(byte *)((longlong)param_1 + 0xd41) = bVar9;
  uVar2 = *(ushort *)(param_1 + 0x115);
  if (bVar9 == 0) {
    puVar8 = &DAT_14ca96b08;
    if (DAT_14ca96b58 != (undefined4 *)0x0) {
      puVar8 = DAT_14ca96b58;
    }
    bVar11 = ((uint)puVar8[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0;
  }
  else {
    bVar11 = false;
  }
  *(bool *)((longlong)param_1 + 0xd42) = bVar11;
  bVar11 = false;
  cVar4 = FUN_1449d9015(uVar2,0);
  if (cVar4 != '\0') {
    iVar6 = FUN_144b16810(param_1);
    bVar11 = iVar6 != 0;
  }
  *(bool *)((longlong)param_1 + 0xd43) = bVar11;
  *(bool *)((longlong)param_1 + 0xd44) =
       *(char *)((longlong)param_1 + 0xd41) != '\0' || DAT_14ca964dd != '\0' && 0 < DAT_14c760e10;
  param_1[0x1ae] = 0;
  *(undefined4 *)(param_1 + 0x1af) = 4;
  param_1[0x1b0] = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 8;
  param_1[0x1b4] = 0;
  *(undefined1 *)(param_1 + 0x1b5) = 1;
  param_1[0x1b6] = 0;
  *(undefined1 *)(param_1 + 0x1b7) = 1;
  param_1[0x1b8] = 0;
  *(undefined1 *)(param_1 + 0x1b9) = 1;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bb) = 4;
  param_1[0x1bc] = 0;
  *(undefined4 *)(param_1 + 0x1bd) = 8;
  param_1[0x1c0] = 0;
  *(undefined1 *)(param_1 + 0x1c1) = 1;
  param_1[0x1c2] = 0;
  *(undefined1 *)(param_1 + 0x1c3) = 1;
  param_1[0x1c4] = 0;
  *(undefined1 *)(param_1 + 0x1c5) = 1;
  param_1[0x1c6] = 0;
  *(undefined4 *)(param_1 + 0x1c7) = 4;
  param_1[0x1c8] = 0;
  *(undefined4 *)(param_1 + 0x1c9) = 8;
  param_1[0x1cc] = 0;
  *(undefined1 *)(param_1 + 0x1cd) = 1;
  param_1[0x1ce] = 0;
  *(undefined1 *)(param_1 + 0x1cf) = 1;
  param_1[0x1d0] = 0;
  *(undefined1 *)(param_1 + 0x1d1) = 1;
  param_1[0x1d2] = 0;
  *(undefined4 *)(param_1 + 0x1d3) = 4;
  param_1[0x1d4] = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 8;
  param_1[0x1d8] = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 1;
  param_1[0x1da] = 0;
  *(undefined1 *)(param_1 + 0x1db) = 1;
  param_1[0x1dc] = 0;
  *(undefined1 *)(param_1 + 0x1dd) = 1;
  param_1[0x1de] = 0;
  *(undefined4 *)(param_1 + 0x1df) = 4;
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1e1) = 8;
  param_1[0x1e4] = 0;
  *(undefined1 *)(param_1 + 0x1e5) = 1;
  param_1[0x1e6] = 0;
  *(undefined1 *)(param_1 + 0x1e7) = 1;
  param_1[0x1e8] = 0;
  *(undefined1 *)(param_1 + 0x1e9) = 1;
  param_1[0x1ea] = 0;
  *(undefined4 *)(param_1 + 0x1eb) = 4;
  param_1[0x1ec] = 0;
  *(undefined4 *)(param_1 + 0x1ed) = 8;
  param_1[0x1f0] = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  param_1[0x1f2] = 0;
  *(undefined1 *)(param_1 + 499) = 1;
  param_1[500] = 0;
  *(undefined1 *)(param_1 + 0x1f5) = 1;
  param_1[0x1f6] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4c) = 0;
  *(bool *)((longlong)param_1 + 0xd56) = (*(int *)(param_1[1] + 0x35e8) - 3U & 0xfffffffd) == 0;
  *(bool *)((longlong)param_1 + 0xd57) = *(int *)(param_1[1] + 0x35e8) == 4;
  *(bool *)((longlong)param_1 + 0xd59) = 0 < DAT_14c760e10;
  uVar5 = FUN_14743059b(*(undefined2 *)(param_1 + 0x115));
  *(undefined1 *)((longlong)param_1 + 0xd5a) = uVar5;
  uVar5 = FUN_147430623(*(undefined2 *)(param_1 + 0x115));
  *(undefined1 *)((longlong)param_1 + 0xd55) = uVar5;
  uVar7 = 6;
  if (*(char *)(param_1 + 0x49) != '\0') {
    uVar7 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xd5c) = uVar7;
  uVar5 = FUN_147322fce();
  *(undefined1 *)(param_1 + 0x1ac) = uVar5;
  iVar6 = *(int *)(param_1 + 0x7e);
  if ((longlong)iVar6 != 0) {
    lVar3 = param_1[0x7d];
    lVar10 = 0;
    do {
      if (*(char *)(lVar3 + 0x23e8 + lVar10) == '\x01') {
        pbVar1 = (byte *)(lVar3 + 0x125b0 + lVar10);
        *pbVar1 = *pbVar1 | 0x30;
      }
      lVar10 = lVar10 + 0x13c10;
    } while ((longlong)iVar6 * 0x13c10 - lVar10 != 0);
  }
  uVar7 = FUN_1400b0b91(1,8);
  *(undefined4 *)(param_1 + 0x1a9) = uVar7;
  cVar4 = FUN_147cef6de(*(undefined2 *)(param_1 + 0x115),*(undefined1 *)((longlong)param_1 + 0x179))
  ;
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x163) != '\x01')) {
    bVar11 = false;
  }
  else {
    iVar6 = FUN_144b16810(param_1);
    bVar11 = iVar6 != 0;
  }
  *(bool *)((longlong)param_1 + 0xd45) = bVar11;
  cVar4 = FUN_147cef7d7(*(undefined2 *)(param_1 + 0x115),*(undefined1 *)((longlong)param_1 + 0x179),
                        *(undefined4 *)(param_1 + 0x1a9));
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined1 *)((longlong)param_1 + 0xd45);
  }
  *(undefined1 *)((longlong)param_1 + 0xd46) = uVar5;
  cVar4 = FUN_14743049a(*(undefined2 *)(param_1 + 0x115));
  if (cVar4 == '\0') {
    bVar9 = 0;
  }
  else {
    bVar9 = *(byte *)((longlong)param_1 + 0xd45) ^ 1;
  }
  *(byte *)(param_1 + 0x1ab) = bVar9;
  return param_1;
}



// FUNCTION 14724e80e FUN_14724e80e body=440 status=ok
// SIG undefined FUN_14724e80e(void)

void FUN_14724e80e(longlong param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  void *pvVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((longlong)*(int *)(param_1 + 0x3f0) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x3f0) * 0x13c10;
    lVar6 = *(longlong *)(param_1 + 1000) + 0x11808;
    do {
      *(int *)(lVar6 + -0x28) = *(int *)(lVar6 + -0xe6d8);
      uVar5 = *(int *)(lVar6 + -0xe6d8) + 0x1f;
      if (0x1f < uVar5) {
        pvVar7 = (void *)(lVar6 + -0x40);
        uVar8 = uVar5 >> 5;
        if (*(int *)(lVar6 + -0x24) + 0x1fU >> 5 < uVar8) {
          FUN_144aafd68(pvVar7,0,uVar8,4);
          *(uint *)(lVar6 + -0x24) = uVar5 & 0xffffffe0;
        }
        pvVar4 = *(void **)(lVar6 + -0x30);
        if (*(void **)(lVar6 + -0x30) == (void *)0x0) {
          pvVar4 = pvVar7;
        }
        if (uVar5 < 0x120) {
          uVar8 = uVar5 >> 3 & 0x3c;
        }
        else {
          uVar8 = uVar8 << 2;
        }
        memset(pvVar4,0,(ulonglong)uVar8);
        iVar1 = *(int *)(lVar6 + -0x28);
        iVar2 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if (*(void **)(lVar6 + -0x30) != (void *)0x0) {
            pvVar7 = *(void **)(lVar6 + -0x30);
          }
          bVar3 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)pvVar7 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar7 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
               (bVar3 & 0x1f);
        }
      }
      *(int *)(lVar6 + -8) = *(int *)(lVar6 + -0xe608);
      uVar5 = *(int *)(lVar6 + -0xe608) + 0x1f;
      if (0x1f < uVar5) {
        pvVar7 = (void *)(lVar6 + -0x20);
        uVar8 = uVar5 >> 5;
        if (*(int *)(lVar6 + -4) + 0x1fU >> 5 < uVar8) {
          FUN_144aafd68(pvVar7,0,uVar8,4);
          *(uint *)(lVar6 + -4) = uVar5 & 0xffffffe0;
        }
        pvVar4 = *(void **)(lVar6 + -0x10);
        if (*(void **)(lVar6 + -0x10) == (void *)0x0) {
          pvVar4 = pvVar7;
        }
        if (uVar5 < 0x120) {
          uVar8 = uVar5 >> 3 & 0x3c;
        }
        else {
          uVar8 = uVar8 << 2;
        }
        memset(pvVar4,0,(ulonglong)uVar8);
        iVar1 = *(int *)(lVar6 + -8);
        iVar2 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if (*(void **)(lVar6 + -0x10) != (void *)0x0) {
            pvVar7 = *(void **)(lVar6 + -0x10);
          }
          bVar3 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)pvVar7 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar7 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
               (bVar3 & 0x1f);
        }
      }
      FUN_14725cb18(lVar6);
      lVar6 = lVar6 + 0x13c10;
      lVar9 = lVar9 + -0x13c10;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14724e9c6 FUN_14724e9c6 body=1226 status=ok
// SIG undefined FUN_14724e9c6(void)

void FUN_14724e9c6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_298 [32];
  undefined4 **local_278;
  longlong local_270;
  undefined8 local_268;
  ulonglong local_260;
  longlong local_258;
  undefined4 local_250;
  longlong local_248;
  void **local_240;
  undefined4 local_238;
  longlong local_230;
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  longlong *local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined4 *local_1c0;
  undefined4 local_1b8;
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  longlong local_198 [39];
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_200 = param_2;
  local_1f8 = param_3;
  if (0 < *(int *)(param_1 + 0x410)) {
    lVar11 = 0x4a8;
    lVar8 = 0;
    local_218 = param_1;
    do {
      lVar9 = local_218;
      lVar1 = *(longlong *)(*(longlong *)(local_218 + 0x408) + lVar8 * 8);
      lVar2 = *local_200;
      lVar10 = *(longlong *)(local_218 + 8);
      local_1c8 = lVar8;
      if (DAT_14ca11620 == (code *)0x0) {
        if (DAT_14ca119c0 == (code *)0x0) {
          uVar6 = (*DAT_14ca11230)(lVar10,lVar1,0);
        }
        else {
          uVar6 = (*DAT_14ca119c0)(*(undefined4 *)(lVar10 + 8),lVar10,lVar1,0);
        }
      }
      else {
        local_278 = (undefined4 **)0x0;
        uVar6 = (*DAT_14ca11620)(CONCAT71((int7)((ulonglong)lVar8 >> 8),2),
                                 *(undefined4 *)(lVar10 + 8),lVar10,lVar1);
      }
      lVar8 = *(longlong *)(lVar9 + 8);
      if (DAT_14ca116c8 == (code *)0x0) {
        if (DAT_14ca11a68 == (code *)0x0) {
          local_1d8 = (*DAT_14ca112d8)(lVar8,lVar1,0);
        }
        else {
          local_1d8 = (*DAT_14ca11a68)(*(undefined4 *)(lVar8 + 8),lVar8,lVar1,0);
        }
      }
      else {
        local_278 = (undefined4 **)0x0;
        local_1d8 = (*DAT_14ca116c8)(0x17,*(undefined4 *)(lVar8 + 8),lVar8,lVar1);
      }
      local_58 = (undefined4 *)0x0;
      local_50 = 0x200000001;
      local_60[0] = *(undefined4 *)(lVar1 + 0x13b84);
      local_20c = 0;
      local_1d0 = uVar6;
      if (((*(char *)(lVar1 + 0x23f2) == '\x01') &&
          (lVar9 = local_218, *(int *)(lVar1 + 0x1dd0) != 0)) &&
         (cVar4 = FUN_144b2acba(lVar1), lVar9 = local_218, cVar4 != '\0')) {
        lVar8 = FUN_144b28782(lVar1);
        uVar3 = local_50;
        lVar10 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_140fadf14(local_60,uVar3 & 0xffffffff);
        }
        puVar7 = local_58;
        if (local_58 == (undefined4 *)0x0) {
          puVar7 = local_60;
        }
        puVar7[lVar10] = *(undefined4 *)(lVar8 + 0x13b84);
        local_20c = 1;
        lVar9 = local_218;
      }
      if (*(char *)(lVar9 + 0x910) == '\x01') {
        FUN_140056680(local_198,L"BasePass");
        FUN_14723aed0(lVar1 + 0x4f80,local_198);
        if (local_198[0] != 0) {
          FUN_1400020a8();
        }
      }
      local_1e0 = lVar1 + 0x4f80;
      FUN_1446f470e(&local_1a0,L"BasePass",1);
      local_204 = *(undefined4 *)(lVar2 + -0x100 + lVar11);
      local_1b0 = (void *)0x0;
      local_1a8 = *(int *)(lVar2 + 0x3a8 + lVar11);
      _Size = (size_t)local_1a8;
      _Src = *(void **)(lVar2 + 0x3a0 + lVar11);
      if (_Size == 0) {
        local_1a4 = 0;
      }
      else {
        FUN_14477be48(&local_1b0,local_1a8,0);
        memcpy(local_1b0,_Src,_Size);
      }
      lVar8 = local_218;
      local_208 = *(undefined4 *)(lVar1 + 0x3278);
      local_1e8 = lVar1 + 0x3d50;
      local_1f0 = lVar1 + 0x3d10;
      local_270 = lVar1 + 0x13198;
      local_1c0 = local_58;
      if (local_58 == (undefined4 *)0x0) {
        local_1c0 = local_60;
      }
      local_1b8 = (int)local_50;
      local_268 = CONCAT44(local_268._4_4_,local_20c);
      local_278 = &local_1c0;
      local_258 = CONCAT44(local_258._4_4_,1);
      local_260 = local_260 & 0xffffffffffffff00;
      FUN_14008c8c8(local_198,local_1a0,*(undefined2 *)(local_218 + 0x8a8),local_1f8);
      local_228 = local_1d8;
      local_238 = local_204;
      local_250 = local_208;
      local_258 = local_1e8;
      local_260 = local_1f0;
      local_268 = local_1d0;
      local_270 = CONCAT44(local_270._4_4_,0x22);
      local_278 = (undefined4 **)CONCAT71(local_278._1_7_,2);
      local_248 = lVar2 + lVar11;
      local_240 = &local_1b0;
      local_230 = lVar2 + lVar11 + -0x488;
      local_220 = lVar2 + lVar11 + -0x338;
      FUN_142de47ea(local_1e0,*(undefined8 *)(lVar8 + 8),lVar1);
      FUN_1446f93f0(local_198);
      if (local_58 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = local_1c8 + 1;
      lVar11 = lVar11 + 0xbc8;
    } while (lVar8 < *(int *)(local_218 + 0x410));
  }
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14724ee92 FUN_14724ee92 body=308 status=ok
// SIG undefined FUN_14724ee92(void)

ulonglong FUN_14724ee92(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca12f38) && (FUN_144b3d300(&DAT_14ca12f38), DAT_14ca12f38 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Mobile.AmbientOcclusionTechnique",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14ca12f30 = 0;
    }
    else {
      DAT_14ca12f30 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14ca12f38);
  }
  if (*(char *)(param_1 + 0xd52) == '\x01') {
    bVar7 = *(int *)(DAT_14ca12f30 + 4) == 1;
  }
  else {
    bVar7 = false;
  }
  cVar1 = FUN_144b11216();
  uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if ((cVar1 == '\0') && (!bVar7)) {
    if ((longlong)(int)param_2[1] != 0) {
      lVar5 = *param_2;
      lVar4 = (longlong)(int)param_2[1] * 0x13c10;
      iVar3 = DAT_14ca12f3c;
      do {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          cVar1 = FUN_14044417b(lVar5);
          iVar3 = DAT_14ca12f3c;
          if ((cVar1 != '\0') && (DAT_14c760824 != 0.0)) goto LAB_14724ef49;
        }
        lVar5 = lVar5 + 0x13c10;
        lVar4 = lVar4 + -0x13c10;
      } while (lVar4 != 0);
    }
    uVar6 = 0;
  }
LAB_14724ef49:
  return uVar6 & 0xffffffff;
}



// FUNCTION 14724efc6 FUN_14724efc6 body=138 status=ok
// SIG undefined FUN_14724efc6(void)

undefined8 FUN_14724efc6(int param_1,ushort param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = (ulonglong)param_2;
  if ((((*(longlong *)(&DAT_14ca814b0 + uVar2 * 0x3c) == DAT_14ca81498) ||
       ((uVar1 = (&DAT_14ca814c8)[uVar2 * 0xf],
        (uVar1 & 1) != 0 && *(longlong *)(&DAT_14ca814b0 + uVar2 * 0x3c) == DAT_14ca838f8 &&
        (DAT_14ca84dfc != '\0')))) ||
      (((uVar1 & 0x20) != 0 && ((DAT_14ca84dfc != '\0' || (DAT_14ca84e00 != '\0')))))) ||
     ((uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1), (DAT_14ca964f0 & DAT_14c760e14) == 0 &&
      ((((DAT_14c760e14 & 1) == 0 && ((*(byte *)(&DAT_14ca814d8 + uVar2 * 0xf) & 0x80) == 0)) ||
       ((1 < param_1 && ((*(byte *)(&DAT_14ca814d8 + uVar2 * 0xf) & 0x80) == 0)))))))) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14724f050 FUN_14724f050 body=198 status=ok
// SIG undefined FUN_14724f050(void)

void FUN_14724f050(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3608);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
     (*(longlong *)(*(longlong *)(lVar1 + 8) + 0x10) == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if ((*(byte *)(lVar1 + 0x20) & 4) == 0) {
      lVar2 = lVar1;
    }
  }
  if ((((*(byte *)(param_1 + 0xf3) & 0x20) == 0) && (0 < *(int *)(param_1 + 0x3f0))) &&
     (*(char *)(*(longlong *)(param_1 + 1000) + 0x23eb) != '\0')) {
    lVar2 = 0;
  }
  local_58 = 0;
  uStack_50 = 0x3f80000000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147242148(lVar2,&local_58);
  FUN_14724fee6(*(longlong *)(param_1 + 8) + 0x50,param_2,&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14724f118 FUN_14724f118 body=225 status=ok
// SIG undefined FUN_14724f118(void)

undefined8 * FUN_14724f118(longlong param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  param_2[6] = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 6;
  if ((((*(byte *)(&DAT_14ca814c8 + (ulonglong)*(ushort *)(param_1 + 0x8a8) * 0xf) & 0x20) == 0) ||
      (DAT_14ca84dff != '\x01')) || (DAT_14ca84e00 != '\x01')) {
    *param_2 = *(undefined8 *)(param_3 + 0x1b0);
    param_2[1] = *(undefined8 *)(param_3 + 0x2a8);
    param_2[2] = *(undefined8 *)(param_3 + 0x2b0);
    *(undefined4 *)(param_2 + 7) = 4;
    param_2[3] = *(undefined8 *)(param_3 + 0x2b8);
    cVar1 = FUN_147430900();
    uVar3 = 4;
    if (cVar1 != '\0') {
      *(undefined4 *)(param_2 + 7) = 5;
      param_2[4] = *(undefined8 *)(param_3 + 0x2c0);
      uVar3 = 5;
    }
    if (*(char *)(param_1 + 0xd58) != '\x01') {
      return param_2;
    }
    *(uint *)(param_2 + 7) = uVar3 + 1;
    puVar4 = (undefined8 *)(param_3 + 0x2e0);
    puVar2 = param_2 + uVar3;
  }
  else {
    puVar4 = (undefined8 *)(param_3 + 0x1b0);
    *(undefined4 *)(param_2 + 7) = 1;
    puVar2 = param_2;
  }
  *puVar2 = *puVar4;
  return param_2;
}



// FUNCTION 14724f1fa FUN_14724f1fa body=229 status=ok
// SIG undefined FUN_14724f1fa(void)

longlong FUN_14724f1fa(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(longlong *)(param_4 + 0x30);
  if (*(longlong *)(param_4 + 0x30) == 0) {
    local_38 = param_4;
  }
  local_30 = *(undefined4 *)(param_4 + 0x38);
  bVar3 = 2;
  FUN_14724fd9a(param_2,2);
  bVar1 = *(byte *)(param_1 + 0xd56);
  cVar2 = '\x02' - bVar1;
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0x1c0);
  *(undefined8 *)(param_2 + 200) = 0;
  *(char *)(param_2 + 0xd0) = cVar2;
  *(char *)(param_2 + 0xd1) = cVar2;
  *(uint *)(param_2 + 0xd4) = 0x22 - (uint)bVar1;
  *(undefined1 *)(param_2 + 0xec) = 0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  if (*(char *)(*(longlong *)(param_1 + 1000) + 0x23f5) == '\0') {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 1000) + 0x3099) >> 1 & 1;
  }
  *(byte *)(param_2 + 0xed) = bVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724f2e0 FUN_14724f2e0 body=350 status=ok
// SIG undefined FUN_14724f2e0(void)

void FUN_14724f2e0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar4 = DAT_14ca8507f;
  iVar2 = *(int *)(param_1 + 0xd48);
  if (*(char *)(param_1 + 0xd4c) == '\0') {
    if (iVar2 < 2) {
      uVar5 = 0;
      uVar6 = param_3;
    }
    else {
      uVar5 = param_3;
      uVar6 = *(undefined8 *)(param_4 + 0x1b0);
    }
  }
  else {
    if (iVar2 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_4 + 0x1b8);
    }
    uVar6 = *(undefined8 *)(param_4 + 0x1b0);
  }
  lVar3 = *(longlong *)(param_4 + 0x1c0);
  lVar7 = *(longlong *)(param_4 + 0x1c8);
  lVar8 = 0x12;
  do {
    *(undefined1 (*) [16])((longlong)param_2 + lVar8 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_2 + lVar8 + -2) = 0xffff0000;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd2);
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xed) = 0;
  param_2[0x1e] = 0;
  *param_2 = uVar6;
  param_2[1] = uVar5;
  *(undefined4 *)(param_2 + 2) = 0xffff0002;
  if (*(char *)(param_1 + 0xd58) == '\x01') {
    uVar5 = *(undefined8 *)(param_4 + 0x2e8);
    param_2[3] = *(undefined8 *)(param_4 + 0x2e0);
    param_2[4] = uVar5;
    *(undefined4 *)(param_2 + 5) = 0xffff0002;
  }
  if (*(char *)(param_1 + 0xd46) == '\x01') {
    param_2[1] = 0;
    param_2[3] = param_3;
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 5) = 0xffff0002;
  }
  lVar8 = 0;
  if (lVar3 == lVar7) {
    lVar7 = lVar8;
  }
  if (iVar2 < 2) {
    lVar7 = lVar8;
  }
  if (cVar4 == '\0') {
    lVar7 = lVar8;
  }
  bVar1 = *(byte *)(param_1 + 0xd56);
  cVar4 = '\x02' - bVar1;
  param_2[0x18] = lVar3;
  param_2[0x19] = lVar7;
  *(char *)(param_2 + 0x1a) = cVar4;
  *(char *)((longlong)param_2 + 0xd1) = cVar4;
  *(uint *)((longlong)param_2 + 0xd4) = 0x22 - (uint)bVar1;
  *(undefined1 *)((longlong)param_2 + 0xec) = 0;
  *(undefined4 *)(param_2 + 0x1d) = 0;
  return;
}



// FUNCTION 14724f43e FUN_14724f43e body=1546 status=ok
// SIG undefined FUN_14724f43e(void)

void FUN_14724f43e(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  ulonglong local_220;
  uint local_214;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong *local_1f8;
  longlong local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178 [4];
  longlong *local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138;
  undefined1 local_120;
  undefined2 local_78;
  int local_74;
  byte local_5b;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar12 = *(longlong *)(param_1 + 1000);
  local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffffffffff00);
  FUN_1430bb348(&DAT_14ca63c98,param_2,param_1 + 0x98);
  local_228 = (undefined4 *)((ulonglong)local_228 & 0xffffffffffffff00);
  uVar8 = FUN_1401c8e48(&DAT_14ca63c98,param_2,lVar12,0);
  local_220 = param_4;
  local_208 = param_1;
  FUN_14724f2e0(param_1,local_148,param_3,param_4);
  local_58 = 0;
  if (((*(byte *)(lVar12 + 0x23eb) | *(byte *)(lVar12 + 0x23e8)) & 1) == 0) {
    local_58 = uVar8;
  }
  local_5b = 2;
  if (*(char *)(lVar12 + 0x23f5) == '\0') {
    local_5b = *(byte *)(lVar12 + 0x3099) >> 1 & 1;
  }
  local_210 = lVar12;
  FUN_144a8d736(param_2);
  lVar12 = local_208;
  local_158 = (longlong *)0x0;
  local_150 = 0x200000000;
  local_188 = *(undefined8 *)(local_208 + 1000);
  local_180 = *(undefined4 *)(local_208 + 0x3f0);
  FUN_142df7ef9(&local_188,local_178);
  plVar14 = local_158;
  if (local_158 == (longlong *)0x0) {
    plVar14 = local_178;
  }
  if ((longlong)(int)local_150 != 0) {
    local_1f8 = (longlong *)(param_2 + 0x70);
    local_200 = param_2 + 0x98;
    lVar9 = (longlong)(int)local_150 << 4;
    do {
      lVar4 = *plVar14;
      puVar5 = *(ulonglong **)(param_2 + 0x18);
      local_1f0 = lVar9;
      if ((*(char *)(lVar4 + 0x23f2) == '\x01') && (*(int *)(lVar4 + 0x1dd0) != 0)) {
        cVar7 = FUN_144b2acba(lVar4);
        if (cVar7 == '\0') goto LAB_14724f5ad;
        lVar9 = FUN_144b28782(lVar4);
        uVar13 = *(uint *)(lVar4 + 0x1de0) | *(uint *)(lVar9 + 0x1de0);
      }
      else {
LAB_14724f5ad:
        uVar13 = *(uint *)(lVar4 + 0x1de0);
      }
      local_214 = *(uint *)((longlong)puVar5 + 0x17c);
      if (local_214 != uVar13) {
        *(uint *)((longlong)puVar5 + 0x17c) = uVar13;
        puVar10 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar10 + 3;
        if ((undefined8 *)puVar5[1] < puVar11) {
          FUN_140023dd8(puVar5,0x20);
          puVar10 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar10 + 3;
        }
        *puVar5 = (ulonglong)puVar11;
        *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
        *(undefined8 **)puVar5[6] = puVar10;
        puVar5[6] = (ulonglong)(puVar10 + 1);
        uVar2 = *(undefined4 *)((longlong)puVar5 + 0x17c);
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar10 + 2) = uVar2;
      }
      if (*(char *)((longlong)plVar14 + 0xc) == '\0') {
        local_138 = 1;
        if (*(char *)(lVar12 + 0xd58) == '\x01') {
          local_120 = 1;
        }
        local_78 = 0x101;
        local_74 = 0x22 - (uint)*(byte *)(lVar12 + 0xd56);
      }
      FUN_144b166e6(lVar4);
      FUN_142df73a2(lVar12,param_2,lVar4);
      plVar6 = local_1f8;
      local_1c8 = *param_5;
      uStack_1c4 = param_5[1];
      uStack_1c0 = param_5[2];
      uStack_1bc = param_5[3];
      local_1b8 = param_5[4];
      uStack_1b4 = param_5[5];
      uStack_1b0 = param_5[6];
      uStack_1ac = param_5[7];
      local_1a8 = param_5[8];
      uStack_1a4 = param_5[9];
      uStack_1a0 = param_5[10];
      uStack_19c = param_5[0xb];
      local_198 = param_5[0xc];
      uStack_194 = param_5[0xd];
      uStack_190 = param_5[0xe];
      uStack_18c = param_5[0xf];
      bVar1 = *(byte *)(lVar12 + 0xd56);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar10 + 0x40;
      if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
        FUN_140023dd8(local_1f8,0x210);
        puVar10 = (undefined8 *)(*plVar6 + 0xfU & 0xfffffffffffffff0);
        puVar11 = puVar10 + 0x40;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar11;
      *puVar10 = &PTR_FUN_14a2996a8;
      puVar11 = puVar10 + 2;
      FUN_14725cba6(puVar11);
      iVar3 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
        FUN_1448cfae8(local_200,iVar3);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar10;
      FUN_1448c58dc(lVar4,&local_1e8);
      *(undefined4 *)(puVar10 + 4) = local_1d8;
      *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_1d4;
      *(undefined4 *)(puVar10 + 5) = uStack_1d0;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_1cc;
      *(undefined4 *)puVar11 = local_1e8;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_1e4;
      *(undefined4 *)(puVar10 + 3) = uStack_1e0;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_1dc;
      local_228 = &local_1c8;
      uVar8 = FUN_147241975(param_2,lVar4,1,(uint)bVar1 * 2 + 4);
      lVar12 = FUN_145d50964();
      cVar7 = *(char *)(lVar12 + 0x41);
      if (*(char *)(lVar12 + 0x41) == '\x03') {
        cVar7 = '\x02';
      }
      puVar10[0x12] = uVar8;
      *(char *)(puVar10 + 0x13) = cVar7;
      lVar12 = FUN_145d59ed4();
      cVar7 = *(char *)(lVar12 + 0x41);
      if (cVar7 == '\x03') {
        cVar7 = '\x02';
      }
      puVar10[0x14] = *(undefined8 *)(lVar4 + 0x13718);
      *(char *)(puVar10 + 0x15) = cVar7;
      memcpy(puVar10 + 0x20,local_148,0xf8);
      lVar12 = local_208;
      puVar10[0x16] = *(undefined8 *)(lVar4 + 0x118f0);
      puVar10[0x17] = *(undefined8 *)(lVar4 + 0x11920);
      *(undefined4 *)(puVar10 + 0x18) = 4;
      puVar10[0x19] = *(undefined8 *)(lVar4 + 0x119b8);
      puVar10[0x1a] = *(undefined8 *)(lVar4 + 0x11910);
      puVar10[0x1b] = *(undefined8 *)(lVar4 + 0x119e0);
      puVar10[0x1c] = *(undefined8 *)(lVar4 + 0x119f0);
      FUN_14724fa4a(local_208,param_2,lVar4,puVar11);
      if (*(char *)(lVar12 + 0xd4d) == '\x01') {
        local_228 = (undefined4 *)local_220;
        FUN_142dfe95a(lVar12,param_2,puVar11,plVar14);
      }
      else {
        local_228 = (undefined4 *)local_220;
        FUN_142dfeeba(lVar12,param_2,puVar11,plVar14);
      }
      if (*(uint *)((longlong)puVar5 + 0x17c) != local_214) {
        *(uint *)((longlong)puVar5 + 0x17c) = local_214;
        puVar10 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar10 + 3;
        if ((undefined8 *)puVar5[1] < puVar11) {
          FUN_140023dd8(puVar5,0x20);
          puVar10 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar10 + 3;
        }
        *puVar5 = (ulonglong)puVar11;
        *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
        *(undefined8 **)puVar5[6] = puVar10;
        puVar5[6] = (ulonglong)(puVar10 + 1);
        uVar2 = *(undefined4 *)((longlong)puVar5 + 0x17c);
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar10 + 2) = uVar2;
      }
      plVar14 = plVar14 + 2;
      lVar9 = local_1f0 + -0x10;
    } while (lVar9 != 0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12bb0) {
    FUN_144b3d300(&DAT_14ca12bb0);
    if (DAT_14ca12bb0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca12ba8 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.AlphaInvertPass",1);
      _Init_thread_footer(&DAT_14ca12bb0);
    }
  }
  if (DAT_14ca12ba8 != (longlong *)0x0) {
    cVar7 = (**(code **)(*DAT_14ca12ba8 + 0xa8))();
    if (cVar7 != '\0') {
      FUN_142f0ffac(param_2,local_210,local_220);
    }
  }
  FUN_142e2a674(&local_158);
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724fa4a FUN_14724fa4a body=307 status=ok
// SIG undefined FUN_14724fa4a(void)

void FUN_14724fa4a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x4284) == '\x01') {
    if (*(char *)(param_1 + 0xd56) == '\0') {
      FUN_144ab2b62(param_3 + 0x4860,param_2,lVar1 + 0x3f08,param_1 + 0xd70);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    FUN_144ab2b62(param_3 + 0x4f80,param_2,lVar1 + 0x3f08,param_4 + 0x20);
    FUN_144ab2b62(param_3 + 0x56a0,param_2,*(longlong *)(param_1 + 8) + 0x3f08,param_1 + 0xdd0);
    FUN_144ab2b62(param_3 + (ulonglong)*(byte *)(param_1 + 0xd60) * 0x390 + 0x4860,param_2,
                  *(longlong *)(param_1 + 8) + 0x3f08,param_1 + 0xe90);
    FUN_144ab2b62(param_3 + 0x9330,param_2,*(longlong *)(param_1 + 8) + 0x3f08,param_1 + 0xe30);
    FUN_144ab2b62(param_3 + 0xc180,param_2,*(longlong *)(param_1 + 8) + 0x3f08,param_1 + 0xef0);
    FUN_144ab2b62(param_3 + 0xba60,param_2,*(longlong *)(param_1 + 8) + 0x3f08,param_1 + 0xf50);
    return;
  }
  return;
}



// FUNCTION 14724fb7e FUN_14724fb7e body=44 status=ok
// SIG undefined FUN_14724fb7e(void)

void FUN_14724fb7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724fbd8 FUN_14724fbd8 body=39 status=ok
// SIG undefined FUN_14724fbd8(void)

void FUN_14724fbd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14724fc00 FUN_14724fc00 body=140 status=ok
// SIG undefined FUN_14724fc00(void)

void FUN_14724fc00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  return;
}



// FUNCTION 14724fc8c FUN_14724fc8c body=44 status=ok
// SIG undefined FUN_14724fc8c(void)

void FUN_14724fc8c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724fce6 FUN_14724fce6 body=39 status=ok
// SIG undefined FUN_14724fce6(void)

void FUN_14724fce6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14724fd0e FUN_14724fd0e body=140 status=ok
// SIG undefined FUN_14724fd0e(void)

void FUN_14724fd0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  return;
}



// FUNCTION 14724fd9a FUN_14724fd9a body=168 status=ok
// SIG undefined FUN_14724fd9a(void)

void FUN_14724fd9a(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  lVar2 = 0x12;
  do {
    *(undefined1 (*) [16])(param_1 + -0x12 + lVar2) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + -2 + lVar2) = 0xffff0000;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd2);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 (*) [16])(param_1 + 0xc0) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar2 = param_3[1];
  if (0 < (longlong)(int)lVar2) {
    lVar1 = *param_3;
    puVar3 = (undefined2 *)(param_1 + 0x12);
    lVar4 = 0;
    do {
      *(undefined8 *)(puVar3 + -9) = *(undefined8 *)(lVar1 + lVar4 * 8);
      *(undefined8 *)(puVar3 + -5) = 0;
      *(undefined1 *)(puVar3 + -1) = param_2;
      *(undefined1 *)((longlong)puVar3 + -1) = 0;
      *puVar3 = 0xffff;
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 0xc;
    } while ((int)lVar2 != lVar4);
  }
  return;
}



// FUNCTION 14724fe42 FUN_14724fe42 body=162 status=ok
// SIG undefined FUN_14724fe42(void)

char FUN_14724fe42(longlong param_1,byte param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = '\0';
  if (DAT_14ca12f3c != 0) {
    cVar1 = FUN_14044417b();
    if ((cVar1 != '\0') && (DAT_14c760824 != 0.0)) {
      local_2c = 0x13f800000;
      FUN_143038766(param_1,&local_24);
      cVar2 = (1 < local_24 & param_2) + 1;
      if (*(longlong *)(param_1 + 0x131e0) == 0) {
        cVar2 = '\0';
      }
      if ((int)local_24 < 1) {
        cVar2 = '\0';
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14724fee6 FUN_14724fee6 body=110 status=ok
// SIG undefined FUN_14724fee6(void)

void FUN_14724fee6(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014724ff1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 14724ff54 FUN_14724ff54 body=44 status=ok
// SIG undefined FUN_14724ff54(void)

void FUN_14724ff54(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14724ffae FUN_14724ffae body=39 status=ok
// SIG undefined FUN_14724ffae(void)

void FUN_14724ffae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 14724ffd6 FUN_14724ffd6 body=140 status=ok
// SIG undefined FUN_14724ffd6(void)

void FUN_14724ffd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  return;
}



// FUNCTION 147250062 FUN_147250062 body=99 status=ok
// SIG undefined FUN_147250062(void)

undefined4 * FUN_147250062(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_1417ed4a6();
  FUN_1448e935e(param_2,&local_30,uVar1,0);
  FUN_1417ed4a6();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472500c6 FUN_1472500c6 body=103 status=ok
// SIG undefined FUN_1472500c6(void)

undefined4 * FUN_1472500c6(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14607ef9a();
  FUN_1448e935e(param_2,&local_30,&DAT_14ca12e70,0);
  FUN_14607ef9a();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725012e FUN_14725012e body=33 status=ok
// SIG undefined FUN_14725012e(void)

undefined1 FUN_14725012e(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_142ce86ce();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0xd44);
  }
  return uVar2;
}



// FUNCTION 14725014f FUN_14725014f body=1226 status=ok
// SIG undefined FUN_14725014f(void)

void FUN_14725014f(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 local_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined2 uStack_c4;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  ushort local_bf;
  longlong local_b8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14ca12f3c != 0) {
    cVar3 = FUN_14044417b(param_2);
    if ((((cVar3 != '\0') && (DAT_14c760824 != 0.0)) && (*(longlong *)(param_2 + 0x131e0) != 0)) &&
       (*(longlong *)(param_2 + 0x13198) != 0 || *(longlong *)(param_2 + 0x136f0) != 0)) {
      lVar6 = FUN_14473c272(param_1,param_2 + 0x131e0,0);
      if ((*(char *)(lVar6 + 0x92) == '\x04') || (*(char *)(lVar6 + 0x92) == '\x01')) {
        uStack_c4 = *(undefined2 *)(param_2 + 0x13208);
        uStack_c6 = *(undefined1 *)(lVar6 + 0x90);
        uStack_c2 = 1;
        local_bf = 0x100;
      }
      else {
        local_bf = (ushort)(byte)local_bf;
        uStack_c4 = 0;
        uStack_c2 = 0;
        uStack_c6 = *(undefined1 *)(lVar6 + 0x90);
      }
      uStack_c0 = 0;
      uStack_c1 = 0;
      uStack_c5 = 0;
      local_c8 = 0;
      local_b8 = lVar6;
      uVar7 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,lVar6 + 8,&local_c8);
      *param_3 = uVar7;
      uVar7 = DAT_14c9c0d80;
      param_3[1] = DAT_14c9c0d80;
      lVar8 = *(longlong *)(param_2 + 0x136f0);
      if (lVar8 == 0) {
        lVar8 = FUN_14473c272(param_1,param_2 + 0x13198,0);
        uVar7 = DAT_14c9c0d80;
      }
      param_3[2] = lVar8;
      param_3[3] = uVar7;
      puVar9 = (undefined8 *)(param_2 + 0x30f8);
      if (*(longlong *)(param_2 + 0x136f0) == 0) {
        puVar9 = (undefined8 *)(param_2 + 0x125c0);
      }
      fVar10 = (float)((int)((ulonglong)puVar9[1] >> 0x20) - (int)((ulonglong)*puVar9 >> 0x20)) /
               (float)(*(int *)(lVar8 + 0x88) * 2);
      fVar11 = (float)((int)puVar9[1] - (int)*puVar9) / (float)(*(int *)(lVar8 + 0x84) * 2);
      *(float *)(param_3 + 4) = fVar11;
      *(float *)((longlong)param_3 + 0x24) = fVar10;
      *(float *)(param_3 + 5) = 1.0 / fVar11;
      *(float *)((longlong)param_3 + 0x2c) = 1.0 / fVar10;
      iVar1 = *(int *)(param_2 + 0x131f8);
      iVar2 = *(int *)(param_2 + 0x131fc);
      iVar4 = *(int *)(param_2 + 0x13204) - iVar2;
      fVar10 = 1.0 / (float)*(int *)(param_2 + 0x131f4);
      fVar11 = 1.0 / (float)*(int *)(param_2 + 0x131f0);
      fVar12 = (float)(*(int *)(param_2 + 0x13200) - iVar1) * 0.5;
      *(float *)(param_3 + 6) = fVar12 * fVar11;
      *(float *)((longlong)param_3 + 0x34) = (float)-iVar4 * 0.5 * fVar10;
      *(float *)(param_3 + 7) = ((float)iVar1 + fVar12) * fVar11;
      *(float *)((longlong)param_3 + 0x3c) = ((float)iVar4 * 0.5 + (float)iVar2) * fVar10;
      local_c8 = 0;
      uStack_c6 = 0x80;
      uStack_c5 = 0x3f;
      uStack_c4 = 1;
      uStack_c2 = 0;
      uStack_c1 = 0;
      FUN_143038766(param_2,&local_e0);
      if ((int)local_e0 < 1) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = *(float *)(param_2 + 0x2948) * 0.01 *
                 (float)(~-(uint)(0.0 <= DAT_14c760824) & 0x3f800000 |
                        (uint)DAT_14c760824 & -(uint)(0.0 <= DAT_14c760824));
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
      }
      *(float *)(param_3 + 10) = fVar10;
      *(float *)((longlong)param_3 + 0x54) = 1.0 / *(float *)(param_2 + 0x13170);
      fVar10 = *(float *)(param_2 + 0x2950);
      if (0.6 <= fVar10) {
        fVar10 = 0.6;
      }
      if (fVar10 <= 0.01) {
        fVar10 = 0.01;
      }
      *(float *)(param_3 + 0xb) = fVar10 * 0.5;
      *(float *)((longlong)param_3 + 0x5c) = 2.0 / (fVar10 * 0.5);
      local_d8 = *(undefined4 *)(param_2 + 0x131f8);
      uStack_d4 = *(undefined4 *)(param_2 + 0x131fc);
      uStack_d0 = *(undefined4 *)(param_2 + 0x13200);
      uStack_cc = *(undefined4 *)(param_2 + 0x13204);
      local_e0 = *(undefined8 *)(lVar6 + 0x84);
      FUN_144a2c7c2(&local_c8);
      *(undefined4 *)(param_3 + 8) = local_68;
      *(undefined4 *)((longlong)param_3 + 0x44) = local_64;
      *(undefined4 *)(param_3 + 9) = local_60;
      *(undefined4 *)((longlong)param_3 + 0x4c) = local_5c;
      if ((*(int *)(param_2 + 0x3020) == 2) || (*(int *)(param_2 + 0x3020) == 4)) {
        if (*(longlong *)(param_2 + 0x3108) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(*(longlong *)(param_2 + 0x3108) + 0x6e0) & 7;
        }
        *(uint *)(param_3 + 0xc) = uVar5;
      }
      else {
        *(undefined4 *)(param_3 + 0xc) = 0;
        if (DAT_14c760824 < 0.0) {
          fVar10 = *(float *)(param_3 + 10);
          if (0.4 <= fVar10) {
            fVar10 = 0.4;
          }
          *(float *)(param_3 + 10) = fVar10;
        }
      }
      goto LAB_14725026c;
    }
  }
  lVar6 = FUN_144a8d736(param_1);
  param_3[2] = *(undefined8 *)(lVar6 + 8);
  param_3[3] = DAT_14c9c0d80;
  local_b8 = *(longlong *)(lVar6 + 8);
  local_c8 = 0;
  local_bf = (ushort)(byte)local_bf;
  uStack_c1 = 0;
  uStack_c0 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  uStack_c2 = 0;
  uStack_c6 = *(undefined1 *)(local_b8 + 0x90);
  if ((*(char *)(local_b8 + 0x92) == '\x04') || (*(char *)(local_b8 + 0x92) == '\x01')) {
    uStack_c2 = (undefined1)*(undefined2 *)(local_b8 + 0x8e);
    uStack_c1 = (undefined1)((ushort)*(undefined2 *)(local_b8 + 0x8e) >> 8);
  }
  uVar7 = FUN_144aaac76(param_1 + 0x198,param_1 + 0x70,local_b8 + 8,&local_c8);
  *param_3 = uVar7;
  param_3[1] = DAT_14c9c0de0;
  param_3[8] = 0;
  param_3[9] = &DAT_3f8000003f800000;
  param_3[10] = 0;
  param_3[0xb] = 0;
LAB_14725026c:
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14725061a FUN_14725061a body=44 status=ok
// SIG undefined FUN_14725061a(void)

void FUN_14725061a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14725064e FUN_14725064e body=96 status=ok
// SIG undefined FUN_14725064e(void)

undefined8 FUN_14725064e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f20942();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca170b0,1);
  return uVar3;
}



// FUNCTION 1472506ae FUN_1472506ae body=138 status=ok
// SIG undefined FUN_1472506ae(void)

void * FUN_1472506ae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147250738 FUN_147250738 body=44 status=ok
// SIG undefined FUN_147250738(void)

void FUN_147250738(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14725076c FUN_14725076c body=96 status=ok
// SIG undefined FUN_14725076c(void)

undefined8 FUN_14725076c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145d48650();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17138,1);
  return uVar3;
}



// FUNCTION 1472507cc FUN_1472507cc body=138 status=ok
// SIG undefined FUN_1472507cc(void)

void * FUN_1472507cc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147250856 FUN_147250856 body=44 status=ok
// SIG undefined FUN_147250856(void)

void FUN_147250856(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14725088a FUN_14725088a body=96 status=ok
// SIG undefined FUN_14725088a(void)

undefined8 FUN_14725088a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145d48650();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17138,1);
  return uVar3;
}



// FUNCTION 1472508ea FUN_1472508ea body=138 status=ok
// SIG undefined FUN_1472508ea(void)

void * FUN_1472508ea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147250974 FUN_147250974 body=44 status=ok
// SIG undefined FUN_147250974(void)

void FUN_147250974(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472509a8 FUN_1472509a8 body=96 status=ok
// SIG undefined FUN_1472509a8(void)

undefined8 FUN_1472509a8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145d48650();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17138,1);
  return uVar3;
}



// FUNCTION 147250a08 FUN_147250a08 body=138 status=ok
// SIG undefined FUN_147250a08(void)

void * FUN_147250a08(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147250a92 FUN_147250a92 body=44 status=ok
// SIG undefined FUN_147250a92(void)

void FUN_147250a92(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147250ac6 FUN_147250ac6 body=96 status=ok
// SIG undefined FUN_147250ac6(void)

undefined8 FUN_147250ac6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f30c0a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca171c0,1);
  return uVar3;
}



// FUNCTION 147250b26 FUN_147250b26 body=138 status=ok
// SIG undefined FUN_147250b26(void)

void * FUN_147250b26(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147250bb0 FUN_147250bb0 body=44 status=ok
// SIG undefined FUN_147250bb0(void)

void FUN_147250bb0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147250be0 FUN_147250be0 body=96 status=ok
// SIG undefined FUN_147250be0(void)

undefined8 FUN_147250be0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f311fe();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17248,1);
  return uVar3;
}



// FUNCTION 147250c40 FUN_147250c40 body=138 status=ok
// SIG undefined FUN_147250c40(void)

void * FUN_147250c40(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147250cca FUN_147250cca body=108 status=ok
// SIG undefined FUN_147250cca(void)

undefined4 * FUN_147250cca(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f3099c();
  FUN_145f3099c();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca13628,0);
  FUN_145f3099c();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147250d37 FUN_147250d37 body=177 status=ok
// SIG undefined FUN_147250d37(void)

void FUN_147250d37(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f30c0a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca171c0,param_4);
  local_78 = &DAT_14ca171c0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14725d9aa(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147250de9 FUN_147250de9 body=177 status=ok
// SIG undefined FUN_147250de9(void)

void FUN_147250de9(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f311fe();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca17248,param_4);
  local_78 = &DAT_14ca17248;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14725dd8a(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147250e9c FUN_147250e9c body=248 status=ok
// SIG undefined FUN_147250e9c(void)

void FUN_147250e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145f20942();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca170b0,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_7;
  local_70 = 0;
  uStack_b0 = param_2;
  FUN_145f20942();
  FUN_14725e196(param_1,param_3,param_5,&local_b8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147250f96 FUN_147250f96 body=44 status=ok
// SIG undefined FUN_147250f96(void)

void FUN_147250f96(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147250fca FUN_147250fca body=96 status=ok
// SIG undefined FUN_147250fca(void)

undefined8 FUN_147250fca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141555f1e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca172d0,1);
  return uVar3;
}



// FUNCTION 14725102a FUN_14725102a body=138 status=ok
// SIG undefined FUN_14725102a(void)

void * FUN_14725102a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472510b4 FUN_1472510b4 body=44 status=ok
// SIG undefined FUN_1472510b4(void)

void FUN_1472510b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472510e8 FUN_1472510e8 body=96 status=ok
// SIG undefined FUN_1472510e8(void)

undefined8 FUN_1472510e8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141569d34();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17358,1);
  return uVar3;
}



// FUNCTION 147251148 FUN_147251148 body=138 status=ok
// SIG undefined FUN_147251148(void)

void * FUN_147251148(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472511d2 FUN_1472511d2 body=44 status=ok
// SIG undefined FUN_1472511d2(void)

void FUN_1472511d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251206 FUN_147251206 body=96 status=ok
// SIG undefined FUN_147251206(void)

undefined8 FUN_147251206(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141520a96();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca173e0,1);
  return uVar3;
}



// FUNCTION 147251266 FUN_147251266 body=138 status=ok
// SIG undefined FUN_147251266(void)

void * FUN_147251266(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472512f0 FUN_1472512f0 body=44 status=ok
// SIG undefined FUN_1472512f0(void)

void FUN_1472512f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251324 FUN_147251324 body=39 status=ok
// SIG undefined FUN_147251324(void)

void FUN_147251324(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1472559ea(uVar1,param_1);
  return;
}



// FUNCTION 14725134c FUN_14725134c body=138 status=ok
// SIG undefined FUN_14725134c(void)

void * FUN_14725134c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472513d6 FUN_1472513d6 body=44 status=ok
// SIG undefined FUN_1472513d6(void)

void FUN_1472513d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14725140a FUN_14725140a body=39 status=ok
// SIG undefined FUN_14725140a(void)

void FUN_14725140a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147255a6a(uVar1,param_1);
  return;
}



// FUNCTION 147251432 FUN_147251432 body=138 status=ok
// SIG undefined FUN_147251432(void)

void * FUN_147251432(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472514bc FUN_1472514bc body=44 status=ok
// SIG undefined FUN_1472514bc(void)

void FUN_1472514bc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472514f0 FUN_1472514f0 body=39 status=ok
// SIG undefined FUN_1472514f0(void)

void FUN_1472514f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147255aea(uVar1,param_1);
  return;
}



// FUNCTION 147251518 FUN_147251518 body=138 status=ok
// SIG undefined FUN_147251518(void)

void * FUN_147251518(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472515a2 FUN_1472515a2 body=44 status=ok
// SIG undefined FUN_1472515a2(void)

void FUN_1472515a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472515d6 FUN_1472515d6 body=96 status=ok
// SIG undefined FUN_1472515d6(void)

undefined8 FUN_1472515d6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141597452();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17468,1);
  return uVar3;
}



// FUNCTION 147251636 FUN_147251636 body=138 status=ok
// SIG undefined FUN_147251636(void)

void * FUN_147251636(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472516c0 FUN_1472516c0 body=44 status=ok
// SIG undefined FUN_1472516c0(void)

void FUN_1472516c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472516f0 FUN_1472516f0 body=96 status=ok
// SIG undefined FUN_1472516f0(void)

undefined8 FUN_1472516f0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8b278();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca174f0,1);
  return uVar3;
}



// FUNCTION 147251750 FUN_147251750 body=138 status=ok
// SIG undefined FUN_147251750(void)

void * FUN_147251750(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472517da FUN_1472517da body=137 status=ok
// SIG undefined FUN_1472517da(void)

undefined4 * FUN_1472517da(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
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
  FUN_145e8b00a();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca140c8,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8);
  FUN_145e8b00a();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147251864 FUN_147251864 body=177 status=ok
// SIG undefined FUN_147251864(void)

void FUN_147251864(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e8b278();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca174f0,param_4);
  local_78 = &DAT_14ca174f0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14725e5e8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147251916 FUN_147251916 body=44 status=ok
// SIG undefined FUN_147251916(void)

void FUN_147251916(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14725194a FUN_14725194a body=96 status=ok
// SIG undefined FUN_14725194a(void)

undefined8 FUN_14725194a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14154dc42();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17578,1);
  return uVar3;
}



// FUNCTION 1472519aa FUN_1472519aa body=138 status=ok
// SIG undefined FUN_1472519aa(void)

void * FUN_1472519aa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147251a34 FUN_147251a34 body=44 status=ok
// SIG undefined FUN_147251a34(void)

void FUN_147251a34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251a68 FUN_147251a68 body=96 status=ok
// SIG undefined FUN_147251a68(void)

undefined8 FUN_147251a68(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eade0e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17688,1);
  return uVar3;
}



// FUNCTION 147251ac8 FUN_147251ac8 body=138 status=ok
// SIG undefined FUN_147251ac8(void)

void * FUN_147251ac8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147251b52 FUN_147251b52 body=44 status=ok
// SIG undefined FUN_147251b52(void)

void FUN_147251b52(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251b82 FUN_147251b82 body=289 status=ok
// SIG undefined FUN_147251b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147251b82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14920) {
    FUN_144b3d300(&DAT_14ca14920);
    if (DAT_14ca14920 == -1) {
      FUN_1415b3850();
      FUN_14610bade();
      FUN_140db5666(&DAT_14ca14878,0,&DAT_14ca14810,L"FInstanceHierarchyCull_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceHierarchyCulling.usf",
                    L"HierarchyCellInstanceCull",5,0xc,FUN_147251d04,FUN_147251ca4,&LAB_142e0a2c0,
                    &LAB_142e0a2bc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca17710);
      _DAT_14ca14878 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a2fa);
      _Init_thread_footer(&DAT_14ca14920);
    }
  }
  return &DAT_14ca14878;
}



// FUNCTION 147251ca4 FUN_147251ca4 body=96 status=ok
// SIG undefined FUN_147251ca4(void)

undefined8 FUN_147251ca4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415b3850();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17710,1);
  return uVar3;
}



// FUNCTION 147251d04 FUN_147251d04 body=138 status=ok
// SIG undefined FUN_147251d04(void)

void * FUN_147251d04(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147251d8e FUN_147251d8e body=44 status=ok
// SIG undefined FUN_147251d8e(void)

void FUN_147251d8e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251dc2 FUN_147251dc2 body=96 status=ok
// SIG undefined FUN_147251dc2(void)

undefined8 FUN_147251dc2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415923da();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca178a8,1);
  return uVar3;
}



// FUNCTION 147251e22 FUN_147251e22 body=138 status=ok
// SIG undefined FUN_147251e22(void)

void * FUN_147251e22(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147251eac FUN_147251eac body=44 status=ok
// SIG undefined FUN_147251eac(void)

void FUN_147251eac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251ee0 FUN_147251ee0 body=96 status=ok
// SIG undefined FUN_147251ee0(void)

undefined8 FUN_147251ee0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415729ec();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17930,1);
  return uVar3;
}



// FUNCTION 147251f40 FUN_147251f40 body=138 status=ok
// SIG undefined FUN_147251f40(void)

void * FUN_147251f40(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147251fca FUN_147251fca body=44 status=ok
// SIG undefined FUN_147251fca(void)

void FUN_147251fca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147251ffe FUN_147251ffe body=96 status=ok
// SIG undefined FUN_147251ffe(void)

undefined8 FUN_147251ffe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141597678();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca179b8,1);
  return uVar3;
}



// FUNCTION 14725205e FUN_14725205e body=138 status=ok
// SIG undefined FUN_14725205e(void)

void * FUN_14725205e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472520e8 FUN_1472520e8 body=44 status=ok
// SIG undefined FUN_1472520e8(void)

void FUN_1472520e8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252118 FUN_147252118 body=289 status=ok
// SIG undefined FUN_147252118(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147252118(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14dc0) {
    FUN_144b3d300(&DAT_14ca14dc0);
    if (DAT_14ca14dc0 == -1) {
      FUN_147257916();
      FUN_14610bc28();
      FUN_140db5666(&DAT_14ca14d18,0,&DAT_14ca14cb0,L"FInstanceCull_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceCulling.usf",L"InstanceCull",5,0x100,
                    FUN_14725229a,FUN_14725223a,&LAB_142e0a346,&LAB_142e0a32a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17a40);
      _DAT_14ca14d18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a42c);
      _Init_thread_footer(&DAT_14ca14dc0);
    }
  }
  return &DAT_14ca14d18;
}



// FUNCTION 14725223a FUN_14725223a body=96 status=ok
// SIG undefined FUN_14725223a(void)

undefined8 FUN_14725223a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_147257916();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17a40,1);
  return uVar3;
}



// FUNCTION 14725229a FUN_14725229a body=138 status=ok
// SIG undefined FUN_14725229a(void)

void * FUN_14725229a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147252324 FUN_147252324 body=44 status=ok
// SIG undefined FUN_147252324(void)

void FUN_147252324(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252358 FUN_147252358 body=96 status=ok
// SIG undefined FUN_147252358(void)

undefined8 FUN_147252358(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141579fb0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17b50,1);
  return uVar3;
}



// FUNCTION 1472523b8 FUN_1472523b8 body=138 status=ok
// SIG undefined FUN_1472523b8(void)

void * FUN_1472523b8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147252442 FUN_147252442 body=44 status=ok
// SIG undefined FUN_147252442(void)

void FUN_147252442(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252476 FUN_147252476 body=96 status=ok
// SIG undefined FUN_147252476(void)

undefined8 FUN_147252476(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f50b2a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17bd8,1);
  return uVar3;
}



// FUNCTION 1472524d6 FUN_1472524d6 body=138 status=ok
// SIG undefined FUN_1472524d6(void)

void * FUN_1472524d6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147252560 FUN_147252560 body=44 status=ok
// SIG undefined FUN_147252560(void)

void FUN_147252560(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252590 FUN_147252590 body=289 status=ok
// SIG undefined FUN_147252590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147252590(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15138) {
    FUN_144b3d300(&DAT_14ca15138);
    if (DAT_14ca15138 == -1) {
      FUN_140069c2e();
      FUN_1456bf4e6();
      FUN_140db5666(&DAT_14ca15090,0,&DAT_14ca15028,L"FNodeAndClusterCull_CS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"NodeAndClusterCull",5,0x120
                    ,FUN_147252712,FUN_1472526b2,FUN_141771848,FUN_142e0a48a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17c60);
      _DAT_14ca15090 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a567);
      _Init_thread_footer(&DAT_14ca15138);
    }
  }
  return &DAT_14ca15090;
}



// FUNCTION 1472526b2 FUN_1472526b2 body=96 status=ok
// SIG undefined FUN_1472526b2(void)

undefined8 FUN_1472526b2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_140069c2e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17c60,1);
  return uVar3;
}



// FUNCTION 147252712 FUN_147252712 body=138 status=ok
// SIG undefined FUN_147252712(void)

void * FUN_147252712(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14725279c FUN_14725279c body=44 status=ok
// SIG undefined FUN_14725279c(void)

void FUN_14725279c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472527d0 FUN_1472527d0 body=96 status=ok
// SIG undefined FUN_1472527d0(void)

undefined8 FUN_1472527d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e58712();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17d70,1);
  return uVar3;
}



// FUNCTION 147252830 FUN_147252830 body=138 status=ok
// SIG undefined FUN_147252830(void)

void * FUN_147252830(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472528ba FUN_1472528ba body=44 status=ok
// SIG undefined FUN_1472528ba(void)

void FUN_1472528ba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472528ee FUN_1472528ee body=96 status=ok
// SIG undefined FUN_1472528ee(void)

undefined8 FUN_1472528ee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e58c7c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17df8,1);
  return uVar3;
}



// FUNCTION 14725294e FUN_14725294e body=138 status=ok
// SIG undefined FUN_14725294e(void)

void * FUN_14725294e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472529d8 FUN_1472529d8 body=44 status=ok
// SIG undefined FUN_1472529d8(void)

void FUN_1472529d8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252a0c FUN_147252a0c body=96 status=ok
// SIG undefined FUN_147252a0c(void)

undefined8 FUN_147252a0c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415711de();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17e80,1);
  return uVar3;
}



// FUNCTION 147252a6c FUN_147252a6c body=138 status=ok
// SIG undefined FUN_147252a6c(void)

void * FUN_147252a6c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147252af6 FUN_147252af6 body=44 status=ok
// SIG undefined FUN_147252af6(void)

void FUN_147252af6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252b26 FUN_147252b26 body=289 status=ok
// SIG undefined FUN_147252b26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147252b26(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca155d8) {
    FUN_144b3d300(&DAT_14ca155d8);
    if (DAT_14ca155d8 == -1) {
      FUN_14156a45e();
      FUN_14610bd72();
      FUN_140db5666(&DAT_14ca15530,0,&DAT_14ca154c8,L"FInitClusterCullArgs_CS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"InitClusterCullArgs",5,1,
                    FUN_147252cac,FUN_147252c4c,&LAB_1462eed1c,&LAB_147252c48,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17f08);
      _DAT_14ca15530 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a597);
      _Init_thread_footer(&DAT_14ca155d8);
    }
  }
  return &DAT_14ca15530;
}



// FUNCTION 147252c4c FUN_147252c4c body=96 status=ok
// SIG undefined FUN_147252c4c(void)

undefined8 FUN_147252c4c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14156a45e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17f08,1);
  return uVar3;
}



// FUNCTION 147252cac FUN_147252cac body=138 status=ok
// SIG undefined FUN_147252cac(void)

void * FUN_147252cac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147252d36 FUN_147252d36 body=44 status=ok
// SIG undefined FUN_147252d36(void)

void FUN_147252d36(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252d66 FUN_147252d66 body=289 status=ok
// SIG undefined FUN_147252d66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147252d66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15700) {
    FUN_144b3d300(&DAT_14ca15700);
    if (DAT_14ca15700 == -1) {
      FUN_1415a823a();
      FUN_14610bebc();
      FUN_140db5666(&DAT_14ca15658,0,&DAT_14ca155f0,L"FInitNodeCullArgs_CS",
                    L"/Engine/Private/Nanite/NaniteClusterCulling.usf",L"InitNodeCullArgs",5,1,
                    FUN_147252eec,FUN_147252e8c,&LAB_1462eed26,&LAB_147252e88,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17f90);
      _DAT_14ca15658 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a5a3);
      _Init_thread_footer(&DAT_14ca15700);
    }
  }
  return &DAT_14ca15658;
}



// FUNCTION 147252e8c FUN_147252e8c body=96 status=ok
// SIG undefined FUN_147252e8c(void)

undefined8 FUN_147252e8c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a823a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca17f90,1);
  return uVar3;
}



// FUNCTION 147252eec FUN_147252eec body=138 status=ok
// SIG undefined FUN_147252eec(void)

void * FUN_147252eec(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147252f76 FUN_147252f76 body=44 status=ok
// SIG undefined FUN_147252f76(void)

void FUN_147252f76(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147252faa FUN_147252faa body=96 status=ok
// SIG undefined FUN_147252faa(void)

undefined8 FUN_147252faa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158e728();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca18018,1);
  return uVar3;
}



// FUNCTION 14725300a FUN_14725300a body=138 status=ok
// SIG undefined FUN_14725300a(void)

void * FUN_14725300a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147253094 FUN_147253094 body=44 status=ok
// SIG undefined FUN_147253094(void)

void FUN_147253094(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472530c4 FUN_1472530c4 body=289 status=ok
// SIG undefined FUN_1472530c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1472530c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15950) {
    FUN_144b3d300(&DAT_14ca15950);
    if (DAT_14ca15950 == -1) {
      FUN_144a90996();
      FUN_14610c006();
      FUN_140db5666(&DAT_14ca158a8,0,&DAT_14ca15840,L"FInitVisiblePatchesArgsCS",
                    L"/Engine/Private/Nanite/NaniteRasterBinning.usf",L"InitVisiblePatchesArgs",5,1,
                    FUN_14725324a,FUN_1472531ea,&LAB_1462eed3a,&LAB_1472531e6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca180a0);
      _DAT_14ca158a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a5bb);
      _Init_thread_footer(&DAT_14ca15950);
    }
  }
  return &DAT_14ca158a8;
}



// FUNCTION 1472531ea FUN_1472531ea body=96 status=ok
// SIG undefined FUN_1472531ea(void)

undefined8 FUN_1472531ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_144a90996();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca180a0,1);
  return uVar3;
}



// FUNCTION 14725324a FUN_14725324a body=138 status=ok
// SIG undefined FUN_14725324a(void)

void * FUN_14725324a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472532d4 FUN_1472532d4 body=44 status=ok
// SIG undefined FUN_1472532d4(void)

void FUN_1472532d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147253304 FUN_147253304 body=289 status=ok
// SIG undefined FUN_147253304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147253304(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15a78) {
    FUN_144b3d300(&DAT_14ca15a78);
    if (DAT_14ca15a78 == -1) {
      FUN_144a94382();
      FUN_146105c1e();
      FUN_140db5666(&DAT_14ca159d0,0,&DAT_14ca15968,L"FRasterBinBuild_CS",
                    L"/Engine/Private/Nanite/NaniteRasterBinning.usf",L"RasterBinBuild",5,0x10,
                    FUN_147253486,FUN_147253426,&LAB_142e0a5cc,&LAB_142e0a5c8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca18128);
      _DAT_14ca159d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a606);
      _Init_thread_footer(&DAT_14ca15a78);
    }
  }
  return &DAT_14ca159d0;
}



// FUNCTION 147253426 FUN_147253426 body=96 status=ok
// SIG undefined FUN_147253426(void)

undefined8 FUN_147253426(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_144a94382();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca18128,1);
  return uVar3;
}



// FUNCTION 147253486 FUN_147253486 body=138 status=ok
// SIG undefined FUN_147253486(void)

void * FUN_147253486(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147253510 FUN_147253510 body=44 status=ok
// SIG undefined FUN_147253510(void)

void FUN_147253510(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147253540 FUN_147253540 body=289 status=ok
// SIG undefined FUN_147253540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147253540(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15ba0) {
    FUN_144b3d300(&DAT_14ca15ba0);
    if (DAT_14ca15ba0 == -1) {
      FUN_144a90a9a();
      FUN_14610c150();
      FUN_140db5666(&DAT_14ca15af8,0,&DAT_14ca15a90,L"FRasterBinInit_CS",
                    L"/Engine/Private/Nanite/NaniteRasterBinning.usf",L"RasterBinInit",5,1,
                    FUN_1472536c6,FUN_147253666,&LAB_1462eed44,&LAB_147253662,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca18238);
      _DAT_14ca15af8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a612);
      _Init_thread_footer(&DAT_14ca15ba0);
    }
  }
  return &DAT_14ca15af8;
}


