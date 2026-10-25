// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472d1510 FUN_1472d1510 body=38 status=ok
// SIG undefined FUN_1472d1510(void)

undefined8 FUN_1472d1510(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d1536 FUN_1472d1536 body=38 status=ok
// SIG undefined FUN_1472d1536(void)

undefined8 FUN_1472d1536(undefined8 param_1,int param_2)

{
  FUN_146302fbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d1590 FUN_1472d1590 body=31 status=ok
// SIG undefined FUN_1472d1590(void)

undefined8 FUN_1472d1590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d15cc FUN_1472d15cc body=93 status=ok
// SIG undefined FUN_1472d15cc(void)

void FUN_1472d15cc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a2e7950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1472d162a FUN_1472d162a body=126 status=ok
// SIG undefined FUN_1472d162a(void)

void FUN_1472d162a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a2e7950;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d1699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1472d16a8 FUN_1472d16a8 body=21 status=ok
// SIG undefined FUN_1472d16a8(void)

undefined8 FUN_1472d16a8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1472d16c2 FUN_1472d16c2 body=1057 status=ok
// SIG undefined FUN_1472d16c2(void)

undefined8 * FUN_1472d16c2(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
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
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  *param_1 = &PTR_FUN_14a2e9940;
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar13;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x38);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 7) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1472d1ae4(param_1 + 8,param_2 + 0x40);
  uVar13 = *(undefined8 *)(param_2 + 0x4c8);
  param_1[0x98] = *(undefined8 *)(param_2 + 0x4c0);
  param_1[0x99] = uVar13;
  param_1[0x9a] = *(undefined8 *)(param_2 + 0x4d0);
  param_1[0x9b] = *(undefined8 *)(param_2 + 0x4d8);
  param_1[0x9c] = *(undefined8 *)(param_2 + 0x4e0);
  param_1[0x9d] = *(undefined8 *)(param_2 + 0x4e8);
  param_1[0x9e] = *(undefined8 *)(param_2 + 0x4f0);
  memcpy(param_1 + 0x9f,(void *)(param_2 + 0x4f8),0xc14);
  cVar1 = *(char *)(param_2 + 0x1170);
  *(char *)(param_1 + 0x22e) = cVar1;
  if (cVar1 == '\x01') {
    puVar15 = (undefined8 *)(param_2 + 0x1110);
    puVar16 = param_1 + 0x222;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  memcpy(param_1 + 0x230,(void *)(param_2 + 0x1180),0xd14);
  FUN_14018a936(param_1 + 0x3d3,param_2 + 0x1e98);
  if (*(int *)(param_2 + 0x1ef4) == -1) {
    param_1[0x3dd] = 0;
    param_1[0x3de] = 0xffffffff00000000;
    param_1[0x3e1] = 0;
    *(undefined4 *)(param_1 + 0x3e2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1f14) = 0x80;
    *(undefined4 *)(param_1 + 0x3e3) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1f1c) = 0;
    param_1[0x3e5] = 0;
    *(undefined4 *)(param_1 + 0x3e6) = 0;
  }
  else {
    FUN_14018a936(param_1 + 0x3dd,param_2 + 0x1ee8);
  }
  *(undefined1 *)(param_1 + 999) = *(undefined1 *)(param_2 + 0x1f38);
  FUN_142fc167a(param_1 + 1000,param_2 + 8000);
  uVar2 = *(undefined4 *)(param_2 + 0x2144);
  uVar3 = *(undefined4 *)(param_2 + 0x2148);
  uVar4 = *(undefined4 *)(param_2 + 0x214c);
  uVar5 = *(undefined4 *)(param_2 + 0x2150);
  uVar6 = *(undefined4 *)(param_2 + 0x2154);
  uVar7 = *(undefined4 *)(param_2 + 0x2158);
  uVar8 = *(undefined4 *)(param_2 + 0x215c);
  uVar9 = *(undefined4 *)(param_2 + 0x2160);
  uVar10 = *(undefined4 *)(param_2 + 0x2164);
  uVar11 = *(undefined4 *)(param_2 + 0x2168);
  uVar12 = *(undefined4 *)(param_2 + 0x216c);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x2140);
  *(undefined4 *)((longlong)param_1 + 0x2144) = uVar2;
  *(undefined4 *)(param_1 + 0x429) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x214c) = uVar4;
  *(undefined4 *)(param_1 + 0x42a) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2154) = uVar6;
  *(undefined4 *)(param_1 + 0x42b) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x215c) = uVar8;
  *(undefined4 *)(param_1 + 0x42c) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x2164) = uVar10;
  *(undefined4 *)(param_1 + 0x42d) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x216c) = uVar12;
  *(undefined4 *)(param_1 + 0x42e) = *(undefined4 *)(param_2 + 0x2170);
  FUN_142fc167a(param_1 + 0x430,param_2 + 0x2180);
  memcpy(param_1 + 0x470,(void *)(param_2 + 0x2380),0xa0);
  param_1[0x484] = *(undefined8 *)(param_2 + 0x2420);
  param_1[0x485] = *(undefined8 *)(param_2 + 0x2428);
  uVar13 = *(undefined8 *)(param_2 + 0x2441);
  *(undefined8 *)((longlong)param_1 + 0x2439) = *(undefined8 *)(param_2 + 0x2439);
  *(undefined8 *)((longlong)param_1 + 0x2441) = uVar13;
  uVar13 = *(undefined8 *)(param_2 + 0x2438);
  param_1[0x486] = *(undefined8 *)(param_2 + 0x2430);
  param_1[0x487] = uVar13;
  cVar1 = *(char *)(param_2 + 0x2450);
  *(char *)(param_1 + 0x48a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x244c) = *(undefined4 *)(param_2 + 0x244c);
  }
  cVar1 = *(char *)(param_2 + 0x2458);
  *(char *)(param_1 + 0x48b) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x2454) = *(undefined4 *)(param_2 + 0x2454);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x2464);
  uVar3 = *(undefined4 *)(param_2 + 0x2468);
  uVar4 = *(undefined4 *)(param_2 + 0x246c);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_2 + 0x2460);
  *(undefined4 *)((longlong)param_1 + 0x2464) = uVar2;
  *(undefined4 *)(param_1 + 0x48d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x246c) = uVar4;
  cVar1 = *(char *)(param_2 + 0x2471);
  *(char *)((longlong)param_1 + 0x2471) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x48e) = *(undefined1 *)(param_2 + 0x2470);
  }
  cVar1 = *(char *)(param_2 + 0x2500);
  *(char *)(param_1 + 0x4a0) = cVar1;
  if (cVar1 == '\x01') {
    puVar15 = (undefined8 *)(param_2 + 0x2480);
    puVar16 = param_1 + 0x490;
    for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
  }
  FUN_1472d1c7a(param_1 + 0x4a2,param_2 + 0x2510);
  param_1[0x604] = *(undefined8 *)(param_2 + 0x3020);
  param_1[0x605] = *(undefined8 *)(param_2 + 0x3028);
  *(undefined8 *)(param_2 + 0x3028) = 0;
  param_1[0x606] = *(undefined8 *)(param_2 + 0x3030);
  *(undefined8 *)(param_2 + 0x3030) = 0;
  param_1[0x607] = *(undefined8 *)(param_2 + 0x3038);
  *(undefined8 *)(param_2 + 0x3038) = 0;
  param_1[0x608] = *(undefined8 *)(param_2 + 0x3040);
  param_1[0x609] = *(undefined8 *)(param_2 + 0x3048);
  *(undefined8 *)(param_2 + 0x3048) = 0;
  param_1[0x60a] = *(undefined8 *)(param_2 + 0x3050);
  *(undefined8 *)(param_2 + 0x3050) = 0;
  *(undefined4 *)(param_1 + 0x60b) = *(undefined4 *)(param_2 + 0x3058);
  param_1[0x60c] = 0;
  param_1[0x60c] = *(undefined8 *)(param_2 + 0x3060);
  *(undefined8 *)(param_2 + 0x3060) = 0;
  *(undefined4 *)(param_1 + 0x60d) = *(undefined4 *)(param_2 + 0x3068);
  *(undefined4 *)((longlong)param_1 + 0x306c) = *(undefined4 *)(param_2 + 0x306c);
  *(undefined8 *)(param_2 + 0x3068) = 0;
  param_1[0x60e] = *(undefined8 *)(param_2 + 0x3070);
  *(undefined8 *)(param_2 + 0x3070) = 0;
  param_1[0x60f] = *(undefined8 *)(param_2 + 0x3078);
  *(undefined8 *)(param_2 + 0x3078) = 0;
  param_1[0x610] = *(undefined8 *)(param_2 + 0x3080);
  param_1[0x611] = *(undefined8 *)(param_2 + 0x3088);
  *(undefined8 *)(param_2 + 0x3088) = 0;
  puVar15 = (undefined8 *)(param_2 + 0x3090);
  puVar16 = param_1 + 0x612;
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  param_1[0x61c] = *(undefined8 *)(param_2 + 0x30e0);
  *(undefined8 *)(param_2 + 0x30e0) = 0;
  param_1[0x61d] = *(undefined8 *)(param_2 + 0x30e8);
  return param_1;
}



// FUNCTION 1472d1ae4 FUN_1472d1ae4 body=405 status=ok
// SIG undefined FUN_1472d1ae4(void)

void * FUN_1472d1ae4(void *param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  memcpy(param_1,param_2,0x120);
  *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x128) = *(undefined8 *)((longlong)param_2 + 0x128);
  cVar1 = *(char *)((longlong)param_2 + 0x148);
  *(char *)((longlong)param_1 + 0x148) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x140);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x138);
    *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
    *(undefined8 *)((longlong)param_1 + 0x138) = uVar2;
  }
  cVar1 = *(char *)((longlong)param_2 + 0x1d0);
  *(char *)((longlong)param_1 + 0x1d0) = cVar1;
  if (cVar1 == '\x01') {
    puVar4 = (undefined8 *)((longlong)param_2 + 0x150);
    puVar5 = (undefined8 *)((longlong)param_1 + 0x150);
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  cVar1 = *(char *)((longlong)param_2 + 0x260);
  *(char *)((longlong)param_1 + 0x260) = cVar1;
  if (cVar1 == '\x01') {
    puVar4 = (undefined8 *)((longlong)param_2 + 0x1e0);
    puVar5 = (undefined8 *)((longlong)param_1 + 0x1e0);
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x280) = *(undefined8 *)((longlong)param_2 + 0x280);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x278);
  *(undefined8 *)((longlong)param_1 + 0x270) = *(undefined8 *)((longlong)param_2 + 0x270);
  *(undefined8 *)((longlong)param_1 + 0x278) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x288) = *(undefined8 *)((longlong)param_2 + 0x288);
  *(undefined8 *)((longlong)param_1 + 0x290) = *(undefined8 *)((longlong)param_2 + 0x290);
  memcpy((void *)((longlong)param_1 + 0x298),(void *)((longlong)param_2 + 0x298),0x98);
  FUN_14018a936((longlong)param_1 + 0x330,(longlong)param_2 + 0x330);
  if (*(int *)((longlong)param_2 + 0x38c) == -1) {
    *(undefined8 *)((longlong)param_1 + 0x380) = 0;
    *(undefined8 *)((longlong)param_1 + 0x388) = 0xffffffff00000000;
    *(undefined8 *)((longlong)param_1 + 0x3a0) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3a8) = 0x8000000000;
    *(undefined8 *)((longlong)param_1 + 0x3b0) = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c8) = 0;
  }
  else {
    FUN_14018a936((longlong)param_1 + 0x380,(longlong)param_2 + 0x380);
  }
  memcpy((void *)((longlong)param_1 + 0x3d0),(void *)((longlong)param_2 + 0x3d0),0xa3);
  return param_1;
}



// FUNCTION 1472d1c7a FUN_1472d1c7a body=529 status=ok
// SIG undefined FUN_1472d1c7a(void)

longlong FUN_1472d1c7a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  FUN_1472d1e8c();
  *(undefined8 *)(param_1 + 0x980) = 0;
  lVar17 = *(longlong *)(param_2 + 0x980);
  if (lVar17 == 0) {
    memmove((void *)(param_1 + 0x8c0),(void *)(param_2 + 0x8c0),0xc0);
    lVar17 = *(longlong *)(param_2 + 0x980);
  }
  *(longlong *)(param_1 + 0x980) = lVar17;
  *(undefined8 *)(param_2 + 0x980) = 0;
  *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_2 + 0x988);
  *(undefined4 *)(param_1 + 0x98c) = *(undefined4 *)(param_2 + 0x98c);
  *(undefined8 *)(param_2 + 0x988) = 0x800000000;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  lVar17 = *(longlong *)(param_2 + 0xa10);
  if (lVar17 == 0) {
    memmove((void *)(param_1 + 0x990),(void *)(param_2 + 0x990),0x80);
    lVar17 = *(longlong *)(param_2 + 0xa10);
  }
  *(longlong *)(param_1 + 0xa10) = lVar17;
  *(undefined8 *)(param_2 + 0xa10) = 0;
  *(undefined4 *)(param_1 + 0xa18) = *(undefined4 *)(param_2 + 0xa18);
  *(undefined4 *)(param_1 + 0xa1c) = *(undefined4 *)(param_2 + 0xa1c);
  *(undefined8 *)(param_2 + 0xa18) = 0x800000000;
  *(undefined8 *)(param_1 + 0xa20) = 0;
  *(undefined8 *)(param_1 + 0xa20) = *(undefined8 *)(param_2 + 0xa20);
  *(undefined8 *)(param_2 + 0xa20) = 0;
  *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_2 + 0xa28);
  *(undefined4 *)(param_1 + 0xa2c) = *(undefined4 *)(param_2 + 0xa2c);
  *(undefined8 *)(param_2 + 0xa28) = 0;
  *(undefined1 *)(param_1 + 0xa60) = *(undefined1 *)(param_2 + 0xa60);
  uVar1 = *(undefined4 *)(param_2 + 0xa30);
  uVar2 = *(undefined4 *)(param_2 + 0xa34);
  uVar3 = *(undefined4 *)(param_2 + 0xa38);
  uVar4 = *(undefined4 *)(param_2 + 0xa3c);
  uVar5 = *(undefined4 *)(param_2 + 0xa40);
  uVar6 = *(undefined4 *)(param_2 + 0xa44);
  uVar7 = *(undefined4 *)(param_2 + 0xa48);
  uVar8 = *(undefined4 *)(param_2 + 0xa4c);
  uVar9 = *(undefined4 *)(param_2 + 0xa54);
  uVar10 = *(undefined4 *)(param_2 + 0xa58);
  uVar11 = *(undefined4 *)(param_2 + 0xa5c);
  *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(param_2 + 0xa50);
  *(undefined4 *)(param_1 + 0xa54) = uVar9;
  *(undefined4 *)(param_1 + 0xa58) = uVar10;
  *(undefined4 *)(param_1 + 0xa5c) = uVar11;
  *(undefined4 *)(param_1 + 0xa40) = uVar5;
  *(undefined4 *)(param_1 + 0xa44) = uVar6;
  *(undefined4 *)(param_1 + 0xa48) = uVar7;
  *(undefined4 *)(param_1 + 0xa4c) = uVar8;
  *(undefined4 *)(param_1 + 0xa30) = uVar1;
  *(undefined4 *)(param_1 + 0xa34) = uVar2;
  *(undefined4 *)(param_1 + 0xa38) = uVar3;
  *(undefined4 *)(param_1 + 0xa3c) = uVar4;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_2 + 0xa68);
  *(undefined8 *)(param_2 + 0xa68) = 0;
  *(undefined4 *)(param_1 + 0xa70) = *(undefined4 *)(param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0xa74) = *(undefined4 *)(param_2 + 0xa74);
  *(undefined8 *)(param_2 + 0xa70) = 0;
  FUN_1472d22c4(param_1 + 0xa78,param_2 + 0xa78);
  *(undefined8 *)(param_1 + 0xac8) = 0;
  *(undefined8 *)(param_1 + 0xac8) = *(undefined8 *)(param_2 + 0xac8);
  *(undefined8 *)(param_2 + 0xac8) = 0;
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_2 + 0xad0);
  *(undefined4 *)(param_1 + 0xad4) = *(undefined4 *)(param_2 + 0xad4);
  *(undefined8 *)(param_2 + 0xad0) = 0;
  uVar12 = *(undefined8 *)(param_2 + 0xad8);
  uVar13 = *(undefined8 *)(param_2 + 0xae0);
  uVar14 = *(undefined8 *)(param_2 + 0xae8);
  uVar15 = *(undefined8 *)(param_2 + 0xaf0);
  uVar16 = *(undefined8 *)(param_2 + 0xb00);
  *(undefined8 *)(param_1 + 0xaf8) = *(undefined8 *)(param_2 + 0xaf8);
  *(undefined8 *)(param_1 + 0xb00) = uVar16;
  *(undefined8 *)(param_1 + 0xae8) = uVar14;
  *(undefined8 *)(param_1 + 0xaf0) = uVar15;
  *(undefined8 *)(param_1 + 0xad8) = uVar12;
  *(undefined8 *)(param_1 + 0xae0) = uVar13;
  return param_1;
}



// FUNCTION 1472d1e8c FUN_1472d1e8c body=1079 status=ok
// SIG undefined FUN_1472d1e8c(void)

void * FUN_1472d1e8c(void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
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
  longlong lVar13;
  byte bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  memcpy(param_1,param_2,0x390);
  lVar13 = *(longlong *)((longlong)param_2 + 0x390);
  *(longlong *)((longlong)param_1 + 0x390) = lVar13;
  if ((lVar13 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar14 = DAT_14c950c29;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x398);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x39c);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3a0);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3a4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3ac);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3b0);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x3b4);
  *(undefined4 *)((longlong)param_1 + 0x3a8) = *(undefined4 *)((longlong)param_2 + 0x3a8);
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3b0) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x398) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x39c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3a0) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar5;
  lVar13 = *(longlong *)((longlong)param_2 + 0x3b8);
  *(longlong *)((longlong)param_1 + 0x3b8) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  memcpy((void *)((longlong)param_1 + 0x3c0),(void *)((longlong)param_2 + 0x3c0),0x9c);
  lVar13 = *(longlong *)((longlong)param_2 + 0x460);
  *(longlong *)((longlong)param_1 + 0x460) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  *(undefined1 *)((longlong)param_1 + 0x488) = *(undefined1 *)((longlong)param_2 + 0x488);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x468);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x46c);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x470);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x474);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x47c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x480);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x484);
  *(undefined4 *)((longlong)param_1 + 0x478) = *(undefined4 *)((longlong)param_2 + 0x478);
  *(undefined4 *)((longlong)param_1 + 0x47c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x480) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x484) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x468) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x46c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x470) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x474) = uVar5;
  lVar13 = *(longlong *)((longlong)param_2 + 0x490);
  *(longlong *)((longlong)param_1 + 0x490) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  lVar13 = *(longlong *)((longlong)param_2 + 0x498);
  *(longlong *)((longlong)param_1 + 0x498) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  *(undefined4 *)((longlong)param_1 + 0x4d0) = *(undefined4 *)((longlong)param_2 + 0x4d0);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4a0);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4a4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x4a8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4ac);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4b0);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4b4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x4b8);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x4bc);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x4c4);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x4c8);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x4cc);
  *(undefined4 *)((longlong)param_1 + 0x4c0) = *(undefined4 *)((longlong)param_2 + 0x4c0);
  *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x4c8) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x4b0) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x4b8) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x4a0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4a8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = uVar5;
  lVar13 = *(longlong *)((longlong)param_2 + 0x4d8);
  *(longlong *)((longlong)param_1 + 0x4d8) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  lVar13 = *(longlong *)((longlong)param_2 + 0x4e0);
  *(longlong *)((longlong)param_1 + 0x4e0) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  *(undefined4 *)((longlong)param_1 + 0x518) = *(undefined4 *)((longlong)param_2 + 0x518);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x4e8);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x4ec);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x4f0);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x4f4);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x4f8);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4fc);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x500);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x504);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x50c);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x510);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x514);
  *(undefined4 *)((longlong)param_1 + 0x508) = *(undefined4 *)((longlong)param_2 + 0x508);
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x510) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x514) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x4f8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x500) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x504) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x4e8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4f0) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = uVar5;
  lVar13 = *(longlong *)((longlong)param_2 + 0x520);
  *(longlong *)((longlong)param_1 + 0x520) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  memcpy((void *)((longlong)param_1 + 0x528),(void *)((longlong)param_2 + 0x528),0xb0);
  lVar13 = *(longlong *)((longlong)param_2 + 0x5d8);
  *(longlong *)((longlong)param_1 + 0x5d8) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
    bVar14 = DAT_14c950c29;
  }
  puVar15 = (undefined8 *)((longlong)param_2 + 0x5e0);
  puVar16 = (undefined8 *)((longlong)param_1 + 0x5e0);
  for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x628) = *(undefined4 *)((longlong)param_2 + 0x628);
  lVar13 = *(longlong *)((longlong)param_2 + 0x630);
  *(longlong *)((longlong)param_1 + 0x630) = lVar13;
  if ((lVar13 != 0 & bVar14) == 1) {
    FUN_1456cec3c();
  }
  memcpy((void *)((longlong)param_1 + 0x638),(void *)((longlong)param_2 + 0x638),0x1cc);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x80c);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x810);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x814);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x818);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x81c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x820);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x824);
  *(undefined4 *)((longlong)param_1 + 0x808) = *(undefined4 *)((longlong)param_2 + 0x808);
  *(undefined4 *)((longlong)param_1 + 0x80c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x810) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x814) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x818) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x81c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x820) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x824) = uVar8;
  *(undefined8 *)((longlong)param_1 + 0x828) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x830);
  _Src = *(void **)((longlong)param_2 + 0x828);
  *(int *)((longlong)param_1 + 0x830) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  }
  else {
    FUN_144721d4c((undefined8 *)((longlong)param_1 + 0x828),iVar1,0);
    memcpy(*(void **)((longlong)param_1 + 0x828),_Src,(longlong)iVar1 << 4);
  }
  puVar15 = (undefined8 *)((longlong)param_2 + 0x840);
  puVar16 = (undefined8 *)((longlong)param_1 + 0x840);
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x8a0) = *(undefined4 *)((longlong)param_2 + 0x8a0);
  lVar13 = *(longlong *)((longlong)param_2 + 0x8a8);
  *(longlong *)((longlong)param_1 + 0x8a8) = lVar13;
  if ((lVar13 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)param_1 + 0x8b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8b0) = *(undefined8 *)((longlong)param_2 + 0x8b0);
  *(undefined8 *)((longlong)param_2 + 0x8b0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8b8) = *(undefined4 *)((longlong)param_2 + 0x8b8);
  *(undefined4 *)((longlong)param_1 + 0x8bc) = *(undefined4 *)((longlong)param_2 + 0x8bc);
  *(undefined8 *)((longlong)param_2 + 0x8b8) = 0;
  return param_1;
}



// FUNCTION 1472d22c4 FUN_1472d22c4 body=123 status=ok
// SIG undefined FUN_1472d22c4(void)

undefined8 * FUN_1472d22c4(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1472d2340();
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



// FUNCTION 1472d2340 FUN_1472d2340 body=419 status=ok
// SIG undefined FUN_1472d2340(void)

longlong * FUN_1472d2340(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar10 = (int)param_1[5];
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68 = local_48;
    uVar8 = local_68;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    iVar9 = local_68._4_4_;
    local_80 = param_1;
    if ((local_68._4_4_ != iVar10) || (local_68 = uVar8, uStack_50 != plVar1)) {
      do {
        local_68 = uVar8;
        plVar4 = *(longlong **)(*local_80 + 0x10 + (longlong)iVar9 * 0x20);
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar8 = local_68;
      } while (local_80 != param_1 ||
               ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar10));
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
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar7 = param_2[3];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
      *(int *)(param_1 + 3) = (int)lVar7;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d24e4 FUN_1472d24e4 body=56 status=ok
// SIG undefined FUN_1472d24e4(void)

undefined8 * FUN_1472d24e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e7c90;
  FUN_144725486();
  FUN_146305308(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d251c FUN_1472d251c body=38 status=ok
// SIG undefined FUN_1472d251c(void)

undefined8 FUN_1472d251c(undefined8 param_1,int param_2)

{
  FUN_146305308();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d2542 FUN_1472d2542 body=56 status=ok
// SIG undefined FUN_1472d2542(void)

undefined8 * FUN_1472d2542(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e7cf0;
  FUN_144725486();
  FUN_1463053d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d257a FUN_1472d257a body=38 status=ok
// SIG undefined FUN_1472d257a(void)

undefined8 FUN_1472d257a(undefined8 param_1,int param_2)

{
  FUN_1463053d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d25a0 FUN_1472d25a0 body=41 status=ok
// SIG undefined FUN_1472d25a0(void)

void FUN_1472d25a0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) << 2;
  if (iVar1 == *(int *)(param_1 + 0x14c)) {
    return;
  }
  *(int *)(param_1 + 0x14c) = iVar1;
  FUN_1472d25ca(param_1,*(undefined4 *)(param_1 + 0x148));
  return;
}



// FUNCTION 1472d25ca FUN_1472d25ca body=149 status=ok
// SIG undefined FUN_1472d25ca(void)

void FUN_1472d25ca(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x50);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x50);
  return;
}



// FUNCTION 1472d2660 FUN_1472d2660 body=136 status=ok
// SIG undefined FUN_1472d2660(void)

void FUN_1472d2660(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x14c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x50,0);
      iVar4 = (int)(uVar3 / 0x50);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_1472d25ca(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472d26ea FUN_1472d26ea body=110 status=ok
// SIG undefined FUN_1472d26ea(void)

void FUN_1472d26ea(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1472d275a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472d275a FUN_1472d275a body=132 status=ok
// SIG undefined FUN_1472d275a(void)

void FUN_1472d275a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1472d27de FUN_1472d27de body=52 status=ok
// SIG undefined FUN_1472d27de(void)

void FUN_1472d27de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472d2812(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_1472d275a(param_1,*(undefined4 *)(param_1 + 0x28),iVar1);
  return;
}



// FUNCTION 1472d2812 FUN_1472d2812 body=108 status=ok
// SIG undefined FUN_1472d2812(void)

ulonglong FUN_1472d2812(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472d287e FUN_1472d287e body=116 status=ok
// SIG undefined FUN_1472d287e(void)

void FUN_1472d287e(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FUN_144a78877(param_2 & 0xffffffff,0xffffffff);
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)iVar1 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1472d28f2(param_1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1472d28f2 FUN_1472d28f2 body=93 status=ok
// SIG undefined FUN_1472d28f2(void)

void FUN_1472d28f2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14721d074(param_1,param_2,1);
  return;
}



// FUNCTION 1472d2950 FUN_1472d2950 body=62 status=ok
// SIG undefined FUN_1472d2950(void)

void FUN_1472d2950(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472d298e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472d298e FUN_1472d298e body=93 status=ok
// SIG undefined FUN_1472d298e(void)

ulonglong FUN_1472d298e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472d29ec FUN_1472d29ec body=132 status=ok
// SIG undefined FUN_1472d29ec(void)

void FUN_1472d29ec(longlong param_1,int param_2)

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



// FUNCTION 1472d2a72 FUN_1472d2a72 body=321 status=ok
// SIG undefined FUN_1472d2a72(void)

undefined4 * FUN_1472d2a72(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14721cefa(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_144a78877(uVar4,uVar4 >> 0x20);
  local_58 = 0;
  cVar2 = FUN_14721cfe0(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14721d0fe(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d2bb4 FUN_1472d2bb4 body=193 status=ok
// SIG undefined FUN_1472d2bb4(void)

void FUN_1472d2bb4(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x10;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar3 = (uVar1 & 0xff) - (ulonglong)((uint)(uVar1 >> 1) & 0x55);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  local_c = param_2;
  if (((uint)uVar1 >> 8 & 1) == 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 | 0x100;
    FUN_1402a8efa(param_1 + 0x20,&local_c);
  }
  else {
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined4 *)
     (lVar2 + (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) =
         param_2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d2c76 FUN_1472d2c76 body=71 status=ok
// SIG undefined FUN_1472d2c76(void)

undefined8 * FUN_1472d2c76(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e7fb8;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d2cbe FUN_1472d2cbe body=84 status=ok
// SIG undefined FUN_1472d2cbe(void)

void FUN_1472d2cbe(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d2d12(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d2d12 FUN_1472d2d12 body=48 status=ok
// SIG undefined FUN_1472d2d12(void)

void FUN_1472d2d12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,0x10);
  }
  return;
}



// FUNCTION 1472d2d42 FUN_1472d2d42 body=132 status=ok
// SIG undefined FUN_1472d2d42(void)

void FUN_1472d2d42(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d2dc8 FUN_1472d2dc8 body=324 status=ok
// SIG undefined FUN_1472d2dc8(void)

undefined4 * FUN_1472d2dc8(undefined4 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472d2f0e(local_40);
  uVar7 = *param_2;
  *local_38 = uVar7;
  *(undefined4 *)(local_38 + 1) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1472d301c(uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
    uVar5 = DAT_14ca44d80 - DAT_14ca44dac;
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
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14ca44dc0)) {
      uVar4 = DAT_14ca44dc0 - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0xc) = uVar4;
      puVar6 = DAT_14ca44db8;
      if (DAT_14ca44db8 == (undefined *)0x0) {
        puVar6 = &DAT_14ca44db0;
      }
      *(undefined4 *)(local_38 + 1) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14ca44dc0 - 1U & (longlong)(int)uVar4) * 4);
      puVar6 = DAT_14ca44db8;
      if (DAT_14ca44db8 == (undefined *)0x0) {
        puVar6 = &DAT_14ca44db0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14ca44dc0 - 1U & (longlong)(int)uVar4) * 4) = local_44
      ;
    }
    else {
      DAT_14ca44dc0 = iVar8;
      FUN_1472d3128();
    }
  }
  *param_1 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d2f0e FUN_1472d2f0e body=269 status=ok
// SIG undefined FUN_1472d2f0e(void)

int * FUN_1472d2f0e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14ca44da8;
  iVar4 = DAT_14ca44d80;
  if (DAT_14ca44dac == 0) {
    iVar2 = DAT_14ca44d80 + 1;
    bVar7 = DAT_14ca44d84 == DAT_14ca44d80;
    DAT_14ca44d80 = iVar2;
    if (bVar7) {
      FUN_1446efaca(&DAT_14ca44d78,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14ca44d88,1);
    puVar3 = DAT_14ca44d98;
    if (DAT_14ca44d98 == (undefined4 *)0x0) {
      puVar3 = &DAT_14ca44d88;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar3[iVar5 >> 5] = puVar3[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14ca44da8;
    DAT_14ca44da8 = *(int *)(DAT_14ca44d78 + 4 + lVar6 * 0x10);
    DAT_14ca44dac = DAT_14ca44dac + -1;
    iVar4 = iVar2;
    if (DAT_14ca44dac != 0) {
      *(undefined4 *)(DAT_14ca44d78 + (longlong)DAT_14ca44da8 * 0x10) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14ca44d88;
  if (DAT_14ca44d98 != (undefined4 *)0x0) {
    puVar3 = DAT_14ca44d98;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  puVar3[iVar2 >> 5] = puVar3[iVar2 >> 5] | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x10 + DAT_14ca44d78;
  return param_1;
}



// FUNCTION 1472d301c FUN_1472d301c body=139 status=ok
// SIG undefined FUN_1472d301c(void)

undefined8 FUN_1472d301c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((DAT_14ca44d80 - DAT_14ca44dac != 1) && (DAT_14ca44d80 != DAT_14ca44dac)) {
    puVar3 = &DAT_14ca44db0;
    if (DAT_14ca44db8 != (undefined *)0x0) {
      puVar3 = DAT_14ca44db8;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14ca44dc0 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14ca44d78 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(DAT_14ca44d78 + (longlong)iVar2 * 0x10) == *param_2) {
          *plVar1 = *param_2;
          FUN_1472d30a8(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472d30a8 FUN_1472d30a8 body=128 status=ok
// SIG undefined FUN_1472d30a8(void)

void FUN_1472d30a8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14ca44d78;
  if (DAT_14ca44dac != 0) {
    *(int *)(DAT_14ca44d78 + (longlong)DAT_14ca44da8 * 0x10) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x10) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14ca44dac) {
    iVar4 = DAT_14ca44da8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x10) = iVar4;
  DAT_14ca44dac = DAT_14ca44dac + 1;
  puVar3 = &DAT_14ca44d88;
  if (DAT_14ca44d98 != (undefined4 *)0x0) {
    puVar3 = DAT_14ca44d98;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14ca44da8 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1472d3128 FUN_1472d3128 body=518 status=ok
// SIG undefined FUN_1472d3128(void)

void FUN_1472d3128(void)

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
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14ca44db8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca44db8,0,0,4);
  }
  uVar7 = DAT_14ca44dc0;
  uVar2 = local_50;
  if (DAT_14ca44dc0 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14ca44db0,0,DAT_14ca44dc0,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14ca44db8;
        if (DAT_14ca44db8 == (undefined *)0x0) {
          puVar4 = &DAT_14ca44db0;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14ca44dc0 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca44d88;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca44da0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca44d78;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x10;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14ca44dc0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0xc + lVar5) = iVar8;
        puVar4 = DAT_14ca44db8;
        if (DAT_14ca44db8 == (undefined *)0x0) {
          puVar4 = &DAT_14ca44db0;
        }
        *(undefined4 *)(lVar1 + 8 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14ca44dc0 - 1U & uVar9) * 4);
        puVar4 = DAT_14ca44db8;
        if (DAT_14ca44db8 == (undefined *)0x0) {
          puVar4 = &DAT_14ca44db0;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14ca44dc0 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472d3330 FUN_1472d3330 body=84 status=ok
// SIG undefined FUN_1472d3330(void)

void FUN_1472d3330(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  FUN_144ab59a2(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_144ab5a64(param_1 + 0x120);
  return;
}



// FUNCTION 1472d3384 FUN_1472d3384 body=48 status=ok
// SIG undefined FUN_1472d3384(void)

void FUN_1472d3384(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1472d33b4 FUN_1472d33b4 body=85 status=ok
// SIG undefined FUN_1472d33b4(void)

void FUN_1472d33b4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1400b16b6();
  return;
}



// FUNCTION 1472d340a FUN_1472d340a body=722 status=ok
// SIG undefined FUN_1472d340a(void)

void FUN_1472d340a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_178 [32];
  longlong local_158;
  undefined4 *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((longlong)(int)param_1[2] != 0) {
    lVar2 = *param_1;
    lVar1 = lVar2 + 0x53a0;
    lVar12 = (longlong)(int)param_1[2] * 400;
    lVar11 = param_1[1] + 0x100;
    do {
      local_138 = *(undefined8 *)(lVar11 + 0x48);
      local_148 = *(undefined4 *)(lVar11 + 0x38);
      uStack_144 = *(undefined4 *)(lVar11 + 0x3c);
      uStack_140 = *(undefined4 *)(lVar11 + 0x40);
      uStack_13c = *(undefined4 *)(lVar11 + 0x44);
      local_158 = lVar11 + 0x50;
      local_150 = &local_148;
      FUN_14486f79c(*(undefined8 *)(lVar11 + -0xf8),param_2,lVar11 + -0x80,lVar11);
      (**(code **)(**(longlong **)(lVar11 + -0xf8) + 0x110))(*(longlong **)(lVar11 + -0xf8),param_2)
      ;
      uVar3 = *(undefined8 *)(lVar11 + -0x100);
      iVar10 = FUN_14486f0b8(lVar1,uVar3);
      *(undefined1 *)(*(longlong *)(lVar2 + 0x55a0) + 0x19 + (longlong)iVar10 * 0x50) = 1;
      if (*(char *)(lVar11 + -0x90) == '\x01') {
        dVar6 = *(double *)(lVar11 + -0xf0);
        dVar7 = *(double *)(lVar11 + -0xe8);
        dVar8 = *(double *)(lVar11 + -0xe0);
        local_c8 = *(undefined4 *)(lVar11 + -0xd0);
        uStack_c4 = *(undefined4 *)(lVar11 + -0xcc);
        uStack_c0 = *(undefined4 *)(lVar11 + -200);
        uStack_bc = *(undefined4 *)(lVar11 + -0xc4);
        local_b8 = *(undefined8 *)(lVar11 + -0xc0);
        dVar17 = dVar7 + dVar7;
        dVar13 = dVar8 + dVar8;
        dVar16 = dVar6 * (dVar6 + dVar6);
        dVar9 = *(double *)(lVar11 + -0xb0);
        local_108 = *(double *)(lVar11 + -0xa8);
        dStack_100 = (1.0 - (dVar8 * dVar13 + dVar16)) * local_108;
        dStack_e0 = *(double *)(lVar11 + -0xa0);
        local_d8 = (1.0 - (dVar16 + dVar7 * dVar17)) * dStack_e0;
        dVar4 = *(double *)(lVar11 + -0xf0) * dVar13;
        dVar16 = *(double *)(lVar11 + -0xd8);
        dVar14 = dVar13 * dVar16;
        dVar15 = (dVar6 + dVar6) * *(double *)(lVar11 + -0xd8);
        dVar16 = dVar17 * dVar16;
        dVar5 = (dVar17 * dVar6 + dVar14) * dVar9;
        local_f8 = (dVar13 * dVar7 + dVar15) * local_108;
        local_e8 = (dVar16 + dVar4) * dStack_e0;
        local_118 = (dVar4 - dVar16) * dVar9;
        local_108 = (dVar17 * dVar6 - dVar14) * local_108;
        dStack_e0 = (dVar13 * dVar7 - dVar15) * dStack_e0;
        local_128._8_4_ = SUB84(dVar5,0);
        local_128._0_8_ = (1.0 - (dVar8 * dVar13 + dVar7 * dVar17)) * dVar9;
        local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        uStack_110 = 0;
        uStack_f0 = 0;
        uStack_d0 = 0;
        uStack_b0 = 0x3ff0000000000000;
        FUN_1472c7db2(lVar1,uVar3);
      }
      lVar11 = lVar11 + 400;
      lVar12 = lVar12 + -400;
    } while (lVar12 != 0);
  }
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d36e2 FUN_1472d36e2 body=71 status=ok
// SIG undefined FUN_1472d36e2(void)

undefined8 * FUN_1472d36e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e8040;
  FUN_144746569(param_1[2],*(undefined4 *)(param_1 + 3));
  FUN_140058982(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d372a FUN_1472d372a body=14 status=ok
// SIG undefined FUN_1472d372a(void)

void FUN_1472d372a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_142fc336e();
  return;
}



// FUNCTION 1472d3738 FUN_1472d3738 body=85 status=ok
// SIG undefined FUN_1472d3738(void)

void FUN_1472d3738(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142fc336e();
  return;
}



// FUNCTION 1472d378e FUN_1472d378e body=213 status=ok
// SIG undefined FUN_1472d378e(void)

void FUN_1472d378e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    uVar1 = *param_1;
    lVar3 = (longlong)*(int *)(param_1 + 2) * 400;
    lVar2 = param_1[1] + 0x100;
    do {
      local_38 = *(undefined8 *)(lVar2 + 0x48);
      local_48 = *(undefined4 *)(lVar2 + 0x38);
      uStack_44 = *(undefined4 *)(lVar2 + 0x3c);
      uStack_40 = *(undefined4 *)(lVar2 + 0x40);
      uStack_3c = *(undefined4 *)(lVar2 + 0x44);
      local_58 = lVar2 + 0x50;
      local_50 = &local_48;
      FUN_14486f79c(*(undefined8 *)(lVar2 + -0xf8),param_2,lVar2 + -0x80,lVar2);
      (**(code **)(**(longlong **)(lVar2 + -0xf8) + 0x110))(*(longlong **)(lVar2 + -0xf8),param_2);
      FUN_1472c7b90(uVar1,*(undefined8 *)(lVar2 + -0x100),lVar2 + -0xf0);
      lVar2 = lVar2 + 400;
      lVar3 = lVar3 + -400;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d3874 FUN_1472d3874 body=12 status=ok
// SIG undefined FUN_1472d3874(void)

void FUN_1472d3874(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472d387d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1472d3880 FUN_1472d3880 body=69 status=ok
// SIG undefined FUN_1472d3880(void)

undefined8 * FUN_1472d3880(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e80a0;
  FUN_1472d38c5(param_1[2],*(undefined4 *)(param_1 + 3));
  FUN_142fc36f8(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d38c5 FUN_1472d38c5 body=28 status=ok
// SIG undefined FUN_1472d38c5(void)

void FUN_1472d38c5(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x70);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 400;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1472d38e2 FUN_1472d38e2 body=84 status=ok
// SIG undefined FUN_1472d38e2(void)

void FUN_1472d38e2(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d3936(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d3936 FUN_1472d3936 body=48 status=ok
// SIG undefined FUN_1472d3936(void)

void FUN_1472d3936(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x110,0x10);
  }
  return;
}



// FUNCTION 1472d3966 FUN_1472d3966 body=71 status=ok
// SIG undefined FUN_1472d3966(void)

void FUN_1472d3966(undefined8 *param_1)

{
  FUN_14493a558(*param_1,param_1[1],param_1 + 2,param_1 + 9,param_1 + 0x10,param_1 + 0x2e,
                param_1 + 0x20);
  return;
}



// FUNCTION 1472d39b8 FUN_1472d39b8 body=29 status=ok
// SIG undefined FUN_1472d39b8(void)

void FUN_1472d39b8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1472d39d6 FUN_1472d39d6 body=55 status=ok
// SIG undefined FUN_1472d39d6(void)

undefined8 * FUN_1472d39d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e80e0;
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d3a0e FUN_1472d3a0e body=71 status=ok
// SIG undefined FUN_1472d3a0e(void)

void FUN_1472d3a0e(undefined8 *param_1)

{
  FUN_14493a558(*param_1,param_1[1],param_1 + 2,param_1 + 9,param_1 + 0x10,param_1 + 0x2e,
                param_1 + 0x20);
  return;
}



// FUNCTION 1472d3a60 FUN_1472d3a60 body=29 status=ok
// SIG undefined FUN_1472d3a60(void)

void FUN_1472d3a60(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1472d3a7e FUN_1472d3a7e body=55 status=ok
// SIG undefined FUN_1472d3a7e(void)

undefined8 * FUN_1472d3a7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e8140;
  if (*(char *)(param_1 + 0x2e) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d3ab6 FUN_1472d3ab6 body=98 status=ok
// SIG undefined FUN_1472d3ab6(void)

void FUN_1472d3ab6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 400 + *param_1);
  FUN_144718522(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 400 + (longlong)_Dst),(longlong)iVar2 * 400);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1472d3b18 FUN_1472d3b18 body=62 status=ok
// SIG undefined FUN_1472d3b18(void)

void FUN_1472d3b18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472d3b56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,400,0x10);
  }
  return;
}



// FUNCTION 1472d3b56 FUN_1472d3b56 body=110 status=ok
// SIG undefined FUN_1472d3b56(void)

ulonglong FUN_1472d3b56(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 400) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1472d3b8f;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 400,0x10);
      param_2 = param_2 / 400;
    }
  }
LAB_1472d3b8f:
  return param_2 & 0xffffffff;
}



// FUNCTION 1472d3bc4 FUN_1472d3bc4 body=48 status=ok
// SIG undefined FUN_1472d3bc4(void)

void FUN_1472d3bc4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,400,0x10);
  }
  return;
}



// FUNCTION 1472d3bf4 FUN_1472d3bf4 body=327 status=ok
// SIG undefined FUN_1472d3bf4(void)

void FUN_1472d3bf4(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = FUN_14486f0b8();
  lVar6 = (longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 4;
    *puVar3 = &PTR_FUN_14a2e81a0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar3;
  }
  if ((*(ulonglong *)(lVar6 + 8) & 0x10) != 0) {
    uVar2 = (uint)*(ulonglong *)(lVar6 + 8);
    uVar4 = (ulonglong)(uVar2 & 0xf) - (ulonglong)(uVar2 >> 1 & 5);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    lVar5 = lVar6 + 0x20;
    if (*(longlong *)(lVar6 + 0x40) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x40);
    }
    iVar7 = *(int *)(lVar5 + (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             ) * 4);
    if (iVar7 != -1) goto LAB_1472d3cd4;
  }
  FUN_1472d3d3c(lVar6,*(undefined4 *)(puVar3 + 5));
  iVar7 = *(int *)(puVar3 + 5);
  *(uint *)(puVar3 + 5) = iVar7 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x2c) < iVar7 + 1U) {
    FUN_1446f48e2(puVar3 + 4,iVar7);
  }
  *(int *)(puVar3[4] + (longlong)iVar7 * 4) = iVar1;
  iVar7 = *(int *)(puVar3 + 3);
  *(uint *)(puVar3 + 3) = iVar7 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x1c) < iVar7 + 1U) {
    FUN_1472d3ec6(puVar3 + 2,iVar7);
  }
LAB_1472d3cd4:
  *(undefined4 *)(puVar3[2] + (longlong)iVar7 * 4) = *param_3;
  return;
}



// FUNCTION 1472d3d3c FUN_1472d3d3c body=188 status=ok
// SIG undefined FUN_1472d3d3c(void)

void FUN_1472d3d3c(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar3 = (ulonglong)((uint)uVar1 & 0xf) - (ulonglong)((uint)(uVar1 >> 1) & 5);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  local_c = param_2;
  if ((uVar1 & 0x10) == 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 | 0x10;
    FUN_1402a8efa(param_1 + 0x20,&local_c);
  }
  else {
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined4 *)
     (lVar2 + (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) =
         param_2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d3dfa FUN_1472d3dfa body=71 status=ok
// SIG undefined FUN_1472d3dfa(void)

undefined8 * FUN_1472d3dfa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e81a0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d3e42 FUN_1472d3e42 body=84 status=ok
// SIG undefined FUN_1472d3e42(void)

void FUN_1472d3e42(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d3e96(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d3e96 FUN_1472d3e96 body=48 status=ok
// SIG undefined FUN_1472d3e96(void)

void FUN_1472d3e96(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 1472d3ec6 FUN_1472d3ec6 body=132 status=ok
// SIG undefined FUN_1472d3ec6(void)

void FUN_1472d3ec6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d3f6e FUN_1472d3f6e body=12 status=ok
// SIG undefined FUN_1472d3f6e(void)

void FUN_1472d3f6e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472d3f77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1472d3f7a FUN_1472d3f7a body=29 status=ok
// SIG undefined FUN_1472d3f7a(void)

undefined8 FUN_1472d3f7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d3f98 FUN_1472d3f98 body=132 status=ok
// SIG undefined FUN_1472d3f98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d3f98(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472d3bf4(_DAT_000000a8 + 0x53a0,_DAT_000000b0,0xb8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472d3bf4(param_1[0x15] + 0x53a0,param_1[0x16],param_1 + 0x17);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d4012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d401c FUN_1472d401c body=84 status=ok
// SIG undefined FUN_1472d401c(void)

void FUN_1472d401c(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d4070(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d4070 FUN_1472d4070 body=48 status=ok
// SIG undefined FUN_1472d4070(void)

void FUN_1472d4070(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 1472d40a4 FUN_1472d40a4 body=132 status=ok
// SIG undefined FUN_1472d40a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d40a4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140c21b0e(_DAT_000000a8 + 0x53a0,_DAT_000000b0,0xb8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140c21b0e(param_1[0x15] + 0x53a0,param_1[0x16],param_1 + 0x17);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d40f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d4128 FUN_1472d4128 body=329 status=ok
// SIG undefined FUN_1472d4128(void)

void FUN_1472d4128(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = FUN_14486f0b8();
  lVar6 = (longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar3 + 1) = 8;
    *puVar3 = &PTR_FUN_14a2e8250;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined8 **)(param_1 + 0x28) = puVar3;
  }
  if ((*(ulonglong *)(lVar6 + 8) & 0x20) != 0) {
    uVar2 = (uint)*(ulonglong *)(lVar6 + 8);
    uVar4 = (ulonglong)(uVar2 & 0x1f) - (ulonglong)(uVar2 >> 1 & 5);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    lVar5 = lVar6 + 0x20;
    if (*(longlong *)(lVar6 + 0x40) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x40);
    }
    iVar7 = *(int *)(lVar5 + (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38
                             ) * 4);
    if (iVar7 != -1) goto LAB_1472d4208;
  }
  FUN_1472d4272(lVar6,*(undefined4 *)(puVar3 + 5));
  iVar7 = *(int *)(puVar3 + 5);
  *(uint *)(puVar3 + 5) = iVar7 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x2c) < iVar7 + 1U) {
    FUN_1446f48e2(puVar3 + 4,iVar7);
  }
  *(int *)(puVar3[4] + (longlong)iVar7 * 4) = iVar1;
  iVar7 = *(int *)(puVar3 + 3);
  *(uint *)(puVar3 + 3) = iVar7 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x1c) < iVar7 + 1U) {
    FUN_1472d4400(puVar3 + 2,iVar7);
  }
LAB_1472d4208:
  *(undefined8 *)(puVar3[2] + (longlong)iVar7 * 8) = *param_3;
  return;
}



// FUNCTION 1472d4272 FUN_1472d4272 body=192 status=ok
// SIG undefined FUN_1472d4272(void)

void FUN_1472d4272(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 0x18;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar3 = (ulonglong)((uint)uVar1 & 0x1f) - (ulonglong)((uint)(uVar1 >> 1) & 5);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  local_c = param_2;
  if ((uVar1 & 0x20) == 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 | 0x20;
    FUN_1402a8efa(param_1 + 0x20,&local_c);
  }
  else {
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined4 *)
     (lVar2 + (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) =
         param_2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d4334 FUN_1472d4334 body=71 status=ok
// SIG undefined FUN_1472d4334(void)

undefined8 * FUN_1472d4334(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e8250;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d437c FUN_1472d437c body=84 status=ok
// SIG undefined FUN_1472d437c(void)

void FUN_1472d437c(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d43d0(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d43d0 FUN_1472d43d0 body=48 status=ok
// SIG undefined FUN_1472d43d0(void)

void FUN_1472d43d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1472d4400 FUN_1472d4400 body=132 status=ok
// SIG undefined FUN_1472d4400(void)

void FUN_1472d4400(longlong param_1,int param_2)

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



// FUNCTION 1472d44a8 FUN_1472d44a8 body=12 status=ok
// SIG undefined FUN_1472d44a8(void)

void FUN_1472d44a8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472d44b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1472d44b4 FUN_1472d44b4 body=29 status=ok
// SIG undefined FUN_1472d44b4(void)

undefined8 FUN_1472d44b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d44d2 FUN_1472d44d2 body=132 status=ok
// SIG undefined FUN_1472d44d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d44d2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472d4128(_DAT_000000a8 + 0x53a0,_DAT_000000b0,0xb8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472d4128(param_1[0x15] + 0x53a0,param_1[0x16],param_1 + 0x17);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d4556 FUN_1472d4556 body=199 status=ok
// SIG undefined FUN_1472d4556(void)

void FUN_1472d4556(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 6;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar3 = (ulonglong)((uint)uVar1 & 0x1ff) - (ulonglong)((uint)(uVar1 >> 1) & 0x55);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  local_c = param_2;
  if (((uint)uVar1 >> 9 & 1) == 0) {
    *(ulonglong *)(param_1 + 8) = uVar1 | 0x200;
    FUN_1402a8efa(param_1 + 0x20,&local_c);
  }
  else {
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined4 *)
     (lVar2 + (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) =
         param_2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d461e FUN_1472d461e body=38 status=ok
// SIG undefined FUN_1472d461e(void)

undefined8 FUN_1472d461e(undefined8 param_1,int param_2)

{
  FUN_1472d46a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d4644 FUN_1472d4644 body=99 status=ok
// SIG undefined FUN_1472d4644(void)

void FUN_1472d4644(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_1472d46ee(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_1472d4718(param_1 + 0x10);
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d46a8 FUN_1472d46a8 body=70 status=ok
// SIG undefined FUN_1472d46a8(void)

void FUN_1472d46a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2e8290;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1472d46ee(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472d46ee FUN_1472d46ee body=42 status=ok
// SIG undefined FUN_1472d46ee(void)

void FUN_1472d46ee(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1472d4718 FUN_1472d4718 body=48 status=ok
// SIG undefined FUN_1472d4718(void)

void FUN_1472d4718(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1472d4748 FUN_1472d4748 body=147 status=ok
// SIG undefined FUN_1472d4748(void)

void FUN_1472d4748(longlong param_1,int param_2)

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



// FUNCTION 1472d47dc FUN_1472d47dc body=84 status=ok
// SIG undefined FUN_1472d47dc(void)

void FUN_1472d47dc(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d4830(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d4830 FUN_1472d4830 body=48 status=ok
// SIG undefined FUN_1472d4830(void)

void FUN_1472d4830(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb0,8);
  }
  return;
}



// FUNCTION 1472d4864 FUN_1472d4864 body=132 status=ok
// SIG undefined FUN_1472d4864(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d4864(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14054ec84(_DAT_000000a8 + 0x53a0,_DAT_000000b0,0xb8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14054ec84(param_1[0x15] + 0x53a0,param_1[0x16],param_1 + 0x17);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d48b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d48e8 FUN_1472d48e8 body=84 status=ok
// SIG undefined FUN_1472d48e8(void)

void FUN_1472d48e8(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d493c(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d493c FUN_1472d493c body=48 status=ok
// SIG undefined FUN_1472d493c(void)

void FUN_1472d493c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 1472d4970 FUN_1472d4970 body=132 status=ok
// SIG undefined FUN_1472d4970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d4970(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14085e0c4(_DAT_000000a8 + 0x53a0,_DAT_000000b0,0xb8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14085e0c4(param_1[0x15] + 0x53a0,param_1[0x16],param_1 + 0x17);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d49bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d49f4 FUN_1472d49f4 body=99 status=ok
// SIG undefined FUN_1472d49f4(void)

void FUN_1472d49f4(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_1460795a2(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_1472d4a58(param_1 + 0x10);
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d4a58 FUN_1472d4a58 body=48 status=ok
// SIG undefined FUN_1472d4a58(void)

void FUN_1472d4a58(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1472d4a92 FUN_1472d4a92 body=111 status=ok
// SIG undefined FUN_1472d4a92(void)

void FUN_1472d4a92(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_146178af8(param_1[0x15] + 0x53a0,param_1[0x16],param_1 + 0x17);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d4af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1472d4b02 FUN_1472d4b02 body=293 status=ok
// SIG undefined FUN_1472d4b02(void)

void FUN_1472d4b02(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar2 = FUN_14486f0b8();
  lVar7 = (longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x200);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_FUN_14a2e8360;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined8 **)(param_1 + 0x38) = puVar4;
  }
  if ((char)*(undefined8 *)(lVar7 + 8) < '\0') {
    uVar3 = (uint)*(undefined8 *)(lVar7 + 8);
    uVar5 = (ulonglong)(uVar3 & 0x7f) - (ulonglong)(uVar3 >> 1 & 0x15);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    lVar6 = lVar7 + 0x20;
    if (*(longlong *)(lVar7 + 0x40) != 0) {
      lVar6 = *(longlong *)(lVar7 + 0x40);
    }
    if (*(int *)(lVar6 + (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) *
                         4) != -1) {
      return;
    }
  }
  FUN_1472d4c28(lVar7,*(undefined4 *)(puVar4 + 5));
  iVar1 = *(int *)(puVar4 + 5);
  *(uint *)(puVar4 + 5) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar4 + 0x2c) < iVar1 + 1U) {
    FUN_1446f48e2(puVar4 + 4,iVar1);
  }
  *(int *)(puVar4[4] + (longlong)iVar1 * 4) = iVar2;
  iVar2 = *(int *)(puVar4 + 3);
  *(uint *)(puVar4 + 3) = iVar2 + 1U;
  if (iVar2 + 1U <= *(uint *)((longlong)puVar4 + 0x1c)) {
    return;
  }
  FUN_1472d4db4(puVar4 + 2);
  return;
}



// FUNCTION 1472d4c28 FUN_1472d4c28 body=190 status=ok
// SIG undefined FUN_1472d4c28(void)

void FUN_1472d4c28(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar3 = (ulonglong)((uint)uVar1 & 0x7f) - (ulonglong)((uint)(uVar1 >> 1) & 0x15);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  local_c = param_2;
  if ((char)uVar1 < '\0') {
    lVar2 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
    *(undefined4 *)
     (lVar2 + (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) * 4) =
         param_2;
  }
  else {
    *(ulonglong *)(param_1 + 8) = uVar1 | 0x80;
    FUN_1402a8efa(param_1 + 0x20,&local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d4ce8 FUN_1472d4ce8 body=71 status=ok
// SIG undefined FUN_1472d4ce8(void)

undefined8 * FUN_1472d4ce8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e8360;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d4d30 FUN_1472d4d30 body=84 status=ok
// SIG undefined FUN_1472d4d30(void)

void FUN_1472d4d30(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d4d84(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d4d84 FUN_1472d4d84 body=48 status=ok
// SIG undefined FUN_1472d4d84(void)

void FUN_1472d4d84(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 1472d4db4 FUN_1472d4db4 body=124 status=ok
// SIG undefined FUN_1472d4db4(void)

void FUN_1472d4db4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d4e50 FUN_1472d4e50 body=12 status=ok
// SIG undefined FUN_1472d4e50(void)

void FUN_1472d4e50(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472d4e59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1472d4e5c FUN_1472d4e5c body=29 status=ok
// SIG undefined FUN_1472d4e5c(void)

undefined8 FUN_1472d4e5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d4e7a FUN_1472d4e7a body=119 status=ok
// SIG undefined FUN_1472d4e7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d4e7a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472d4b02(_DAT_000000a8 + 0x53a0,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472d4b02(param_1[0x15] + 0x53a0,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d4ee7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d4ef2 FUN_1472d4ef2 body=112 status=ok
// SIG undefined FUN_1472d4ef2(void)

void FUN_1472d4ef2(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((longlong)(int)param_1[2] != 0) {
    puVar4 = (undefined8 *)param_1[1];
    puVar1 = puVar4 + (longlong)(int)param_1[2] * 3;
    lVar2 = *param_1;
    do {
      iVar3 = FUN_14486f0b8(lVar2 + 0x53a0,*puVar4);
      *(undefined1 *)(*(longlong *)(lVar2 + 0x55a0) + 0x18 + (longlong)iVar3 * 0x50) = 1;
      (**(code **)(*(longlong *)puVar4[1] + 0x118))();
      LOCK();
      *(int *)puVar4[2] = *(int *)puVar4[2] + -1;
      UNLOCK();
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar1);
  }
  return;
}



// FUNCTION 1472d4f66 FUN_1472d4f66 body=54 status=ok
// SIG undefined FUN_1472d4f66(void)

undefined8 * FUN_1472d4f66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e83a0;
  FUN_1400628fc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d4f9c FUN_1472d4f9c body=127 status=ok
// SIG undefined FUN_1472d4f9c(void)

void FUN_1472d4f9c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472d4ef2(0xa8,&DAT_14ca85100);
    FUN_1400628fc(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472d4ef2(param_1 + 0x15,&DAT_14ca85100);
  FUN_1400628fc(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d4feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d501c FUN_1472d501c body=85 status=ok
// SIG undefined FUN_1472d501c(void)

void FUN_1472d501c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142fc465e();
  return;
}



// FUNCTION 1472d5072 FUN_1472d5072 body=112 status=ok
// SIG undefined FUN_1472d5072(void)

void FUN_1472d5072(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  if ((longlong)(int)param_1[2] != 0) {
    puVar4 = (undefined8 *)param_1[1];
    puVar1 = puVar4 + (longlong)(int)param_1[2] * 3;
    lVar2 = *param_1;
    do {
      iVar3 = FUN_14486f0b8(lVar2 + 0x53a0,*puVar4);
      *(undefined1 *)(*(longlong *)(lVar2 + 0x55a0) + 0x18 + (longlong)iVar3 * 0x50) = 1;
      (**(code **)(*(longlong *)puVar4[1] + 0x118))();
      LOCK();
      *(int *)puVar4[2] = *(int *)puVar4[2] + -1;
      UNLOCK();
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar1);
  }
  return;
}



// FUNCTION 1472d50f2 FUN_1472d50f2 body=12 status=ok
// SIG undefined FUN_1472d50f2(void)

void FUN_1472d50f2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001472d50fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1472d50fe FUN_1472d50fe body=52 status=ok
// SIG undefined FUN_1472d50fe(void)

undefined8 * FUN_1472d50fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e8400;
  FUN_142fc493e(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d5132 FUN_1472d5132 body=113 status=ok
// SIG undefined FUN_1472d5132(void)

void FUN_1472d5132(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1472d5072(0xa8);
    FUN_142fc493e(0xb0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1472d5072(param_1 + 0x15);
  FUN_142fc493e(param_1 + 0x16);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d5199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d51a4 FUN_1472d51a4 body=124 status=ok
// SIG undefined FUN_1472d51a4(void)

void FUN_1472d51a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 2,0);
      iVar3 = (int)(uVar4 >> 2);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1472d5222(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d5222 FUN_1472d5222 body=132 status=ok
// SIG undefined FUN_1472d5222(void)

void FUN_1472d5222(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 1472d52aa FUN_1472d52aa body=61 status=ok
// SIG undefined FUN_1472d52aa(void)

undefined8 * FUN_1472d52aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e8430;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d52e8 FUN_1472d52e8 body=87 status=ok
// SIG undefined FUN_1472d52e8(void)

void FUN_1472d52e8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = param_1 + 1;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  lVar1 = param_1[3];
  if ((longlong)(int)lVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_144b1112c(*param_1 + 0x3930,*(undefined4 *)((longlong)plVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar1 * 4 != lVar3);
  }
  return;
}



// FUNCTION 1472d534a FUN_1472d534a body=29 status=ok
// SIG undefined FUN_1472d534a(void)

void FUN_1472d534a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1472d5368 FUN_1472d5368 body=57 status=ok
// SIG undefined FUN_1472d5368(void)

undefined8 * FUN_1472d5368(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2e84a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d53a2 FUN_1472d53a2 body=110 status=ok
// SIG undefined FUN_1472d53a2(void)

void FUN_1472d53a2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1472d5412(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1472d5412 FUN_1472d5412 body=132 status=ok
// SIG undefined FUN_1472d5412(void)

void FUN_1472d5412(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1472d5496 FUN_1472d5496 body=115 status=ok
// SIG undefined FUN_1472d5496(void)

void FUN_1472d5496(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 8;
    lVar4 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) == *param_2) {
        if ((uint)lVar4 == 0xffffffff) {
          return;
        }
        memmove((void *)(lVar2 + (lVar3 >> 0x20) * 8),(void *)(lVar2 + (lVar3 >> 0x20) * 8 + 8),
                (longlong)(int)(~(uint)lVar4 + iVar1) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1472d550a FUN_1472d550a body=62 status=ok
// SIG undefined FUN_1472d550a(void)

void FUN_1472d550a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472d5548(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472d5548 FUN_1472d5548 body=93 status=ok
// SIG undefined FUN_1472d5548(void)

ulonglong FUN_1472d5548(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472d55a6 FUN_1472d55a6 body=107 status=ok
// SIG undefined FUN_1472d55a6(void)

void FUN_1472d55a6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 8) = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (longlong)param_2 * 8) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1472d5612 FUN_1472d5612 body=132 status=ok
// SIG undefined FUN_1472d5612(void)

void FUN_1472d5612(longlong param_1,int param_2)

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



// FUNCTION 1472d5698 FUN_1472d5698 body=201 status=ok
// SIG undefined FUN_1472d5698(void)

void FUN_1472d5698(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 1472d5762 FUN_1472d5762 body=132 status=ok
// SIG undefined FUN_1472d5762(void)

void FUN_1472d5762(longlong param_1,int param_2)

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



// FUNCTION 1472d57e8 FUN_1472d57e8 body=63 status=ok
// SIG undefined FUN_1472d57e8(void)

void FUN_1472d57e8(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1456b3d16(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1471daeb8(param_1);
    return;
  }
  FUN_1472d5828(param_1);
  FUN_1456b3d16(param_1);
  return;
}



// FUNCTION 1472d5828 FUN_1472d5828 body=328 status=ok
// SIG undefined FUN_1472d5828(void)

void FUN_1472d5828(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc4 + (longlong)iVar4 * 0xd0) * 4) =
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



// FUNCTION 1472d5972 FUN_1472d5972 body=201 status=ok
// SIG undefined FUN_1472d5972(void)

void FUN_1472d5972(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 1472d5a3c FUN_1472d5a3c body=114 status=ok
// SIG undefined FUN_1472d5a3c(void)

void FUN_1472d5a3c(longlong *param_1,int param_2)

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



// FUNCTION 1472d5aae FUN_1472d5aae body=114 status=ok
// SIG undefined FUN_1472d5aae(void)

void FUN_1472d5aae(longlong *param_1,int param_2)

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



// FUNCTION 1472d5b20 FUN_1472d5b20 body=84 status=ok
// SIG undefined FUN_1472d5b20(void)

void FUN_1472d5b20(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d5b74(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d5b74 FUN_1472d5b74 body=48 status=ok
// SIG undefined FUN_1472d5b74(void)

void FUN_1472d5b74(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xa0,0x10);
  }
  return;
}



// FUNCTION 1472d5ba8 FUN_1472d5ba8 body=136 status=ok
// SIG undefined FUN_1472d5ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d5ba8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14024e7c8(*(undefined8 *)(_DAT_000000b0 + 0x5660),_DAT_000000b8,0xc0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14024e7c8(*(undefined8 *)(param_1[0x16] + 0x5660),param_1[0x17],param_1 + 0x18);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d5bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d5c30 FUN_1472d5c30 body=84 status=ok
// SIG undefined FUN_1472d5c30(void)

void FUN_1472d5c30(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1472d5c84(param_1 + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_14481578e(param_1 + 0x20,0);
  return;
}



// FUNCTION 1472d5c84 FUN_1472d5c84 body=48 status=ok
// SIG undefined FUN_1472d5c84(void)

void FUN_1472d5c84(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 1472d5cb8 FUN_1472d5cb8 body=136 status=ok
// SIG undefined FUN_1472d5cb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472d5cb8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1402a8da0(*(undefined8 *)(_DAT_000000a8 + 0x5660),_DAT_000000b0,0xb8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1402a8da0(*(undefined8 *)(param_1[0x15] + 0x5660),param_1[0x16],param_1 + 0x17);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001472d5d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1472d5d40 FUN_1472d5d40 body=326 status=ok
// SIG undefined FUN_1472d5d40(void)

undefined4 * FUN_1472d5d40(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1472d5e88(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1472d5f6e(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1472d60a4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d5e88 FUN_1472d5e88 body=230 status=ok
// SIG undefined FUN_1472d5e88(void)

int * FUN_1472d5e88(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1472d5f6e FUN_1472d5f6e body=128 status=ok
// SIG undefined FUN_1472d5f6e(void)

undefined8 FUN_1472d5f6e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1472d5fee((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472d5fee FUN_1472d5fee body=114 status=ok
// SIG undefined FUN_1472d5fee(void)

void FUN_1472d5fee(longlong *param_1,int param_2)

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



// FUNCTION 1472d6060 FUN_1472d6060 body=68 status=ok
// SIG undefined FUN_1472d6060(void)

void FUN_1472d6060(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1472d60a4(param_1);
  return;
}



// FUNCTION 1472d60a4 FUN_1472d60a4 body=474 status=ok
// SIG undefined FUN_1472d60a4(void)

void FUN_1472d60a4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1472d6280 FUN_1472d6280 body=326 status=ok
// SIG undefined FUN_1472d6280(void)

undefined4 * FUN_1472d6280(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_1472d63c8(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1472d64ae(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1472d65a0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d63c8 FUN_1472d63c8 body=230 status=ok
// SIG undefined FUN_1472d63c8(void)

int * FUN_1472d63c8(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1472d64ae FUN_1472d64ae body=128 status=ok
// SIG undefined FUN_1472d64ae(void)

undefined8 FUN_1472d64ae(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1472d652e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472d652e FUN_1472d652e body=114 status=ok
// SIG undefined FUN_1472d652e(void)

void FUN_1472d652e(longlong *param_1,int param_2)

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



// FUNCTION 1472d65a0 FUN_1472d65a0 body=474 status=ok
// SIG undefined FUN_1472d65a0(void)

void FUN_1472d65a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 1472d677c FUN_1472d677c body=87 status=ok
// SIG undefined FUN_1472d677c(void)

void FUN_1472d677c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1472d5fee();
  return;
}



// FUNCTION 1472d67d4 FUN_1472d67d4 body=132 status=ok
// SIG undefined FUN_1472d67d4(void)

void FUN_1472d67d4(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1472d6858(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1472d6858 FUN_1472d6858 body=87 status=ok
// SIG undefined FUN_1472d6858(void)

void FUN_1472d6858(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1472d652e();
  return;
}



// FUNCTION 1472d68b0 FUN_1472d68b0 body=110 status=ok
// SIG undefined FUN_1472d68b0(void)

void FUN_1472d68b0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001472d68e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_14002049c(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_14002049c(param_2,0);
  return;
}



// FUNCTION 1472d691e FUN_1472d691e body=132 status=ok
// SIG undefined FUN_1472d691e(void)

void FUN_1472d691e(longlong param_1,int param_2)

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



// FUNCTION 1472d69a4 FUN_1472d69a4 body=132 status=ok
// SIG undefined FUN_1472d69a4(void)

void FUN_1472d69a4(longlong param_1,int param_2)

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



// FUNCTION 1472d6a2a FUN_1472d6a2a body=241 status=ok
// SIG undefined FUN_1472d6a2a(void)

void FUN_1472d6a2a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 1) {
    FUN_1472d6b1c(param_1 + 0x60);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x8c);
  FUN_140038146(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((iVar3 < 1) && (*(int *)(param_1 + 0x8c) != 1)) {
    FUN_1472d6bac(plVar1);
  }
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14480809c(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14480809c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_145971a68(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
    FUN_140042f8e(plVar1,iVar3);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 1472d6b1c FUN_1472d6b1c body=144 status=ok
// SIG undefined FUN_1472d6b1c(void)

void FUN_1472d6b1c(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1472d6bac FUN_1472d6bac body=140 status=ok
// SIG undefined FUN_1472d6bac(void)

void FUN_1472d6bac(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,8);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  FUN_140043092(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10);
  return;
}



// FUNCTION 1472d6c38 FUN_1472d6c38 body=203 status=ok
// SIG undefined FUN_1472d6c38(void)

void FUN_1472d6c38(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 1) {
    FUN_1472d6d04(param_1 + 0x60);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  FUN_140038171(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((iVar1 < 1) && (*(int *)(param_1 + 0x8c) != 1)) {
    FUN_1472d6d94(param_1 + 0x80);
  }
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14480809c(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14480809c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_14588ccee(param_1 + 0x60);
  FUN_14588cd2a(param_1 + 0x80);
  return;
}



// FUNCTION 1472d6d04 FUN_1472d6d04 body=144 status=ok
// SIG undefined FUN_1472d6d04(void)

void FUN_1472d6d04(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1472d6d94 FUN_1472d6d94 body=153 status=ok
// SIG undefined FUN_1472d6d94(void)

undefined8 FUN_1472d6d94(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x420;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e42];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x420,0x10);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0x420)) {
    uVar4 = uVar3 / 0x420 & 0xffffffff;
  }
  if ((int)uVar4 == *(int *)(param_1 + 0xc)) {
    return SUB168(auVar1 * ZEXT816(0xf83e0f83e0f83e1),0);
  }
  *(int *)(param_1 + 0xc) = (int)uVar4;
  uVar2 = FUN_144a7ea90(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x420);
  return uVar2;
}



// FUNCTION 1472d6e2e FUN_1472d6e2e body=626 status=ok
// SIG undefined FUN_1472d6e2e(void)

undefined4 *
FUN_1472d6e2e(longlong *param_1,undefined4 *param_2,uint param_3,int *param_4,undefined1 *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  int *local_80;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar14 = param_1 + 0xb;
  plVar2 = (longlong *)param_1[0xc];
  plVar8 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar8 = plVar14;
  }
  plVar9 = param_1 + 8;
  do {
    lVar12 = (longlong)(int)uVar4;
    local_80 = param_4;
    if (*(uint *)((longlong)plVar8 + lVar12 * 4) == param_3) {
      plVar13 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar13 = plVar9;
      }
      if (*param_4 == *(int *)(*param_1 + (longlong)*(int *)((longlong)plVar13 + lVar12 * 4) * 0x58)
         ) {
        *param_5 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar9 + lVar12 * 4);
        goto LAB_1472d6f0f;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_1472d6ed6:
    uVar5 = FUN_1472d7194(param_1,local_80,param_3);
    FUN_1472d70a2(param_1,uVar5,param_3);
    *param_5 = 0;
LAB_1472d6f0f:
    *param_2 = uVar5;
    if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  puVar3 = (undefined4 *)param_1[9];
  if (puVar3 == (undefined4 *)0x0) {
    local_60[0] = (undefined4)*plVar9;
  }
  param_1[9] = 0;
  local_50 = (undefined4)param_1[10];
  local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
  param_1[10] = 0x100000000;
  if (plVar2 == (longlong *)0x0) {
    local_78[0] = (undefined4)*plVar14;
  }
  param_1[0xc] = 0;
  local_68 = (undefined4)param_1[0xd];
  local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
  param_1[0xd] = 0x100000000;
  iVar7 = uVar1 * 2 + 1;
  *(int *)(param_1 + 0xe) = iVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  uVar4 = uVar1 * 2 + 2;
  local_70 = plVar2;
  local_58 = puVar3;
  if (-1 < (int)uVar4) {
    if (uVar1 * 2 < 0x7ffffffe) {
      FUN_14475fe8c(plVar9);
      iVar7 = (int)param_1[0xe];
      iVar6 = (int)param_1[10];
      iVar11 = *(int *)((longlong)param_1 + 0x54);
    }
    else {
      iVar6 = 0;
      iVar11 = 1;
    }
    uVar4 = iVar7 + 1;
    *(int *)(param_1 + 10) = iVar7 + iVar6 + 1;
    if ((uint)(iVar11 - iVar6) < uVar4) {
      FUN_146f3c7b6(plVar9,iVar6);
      uVar4 = (int)param_1[0xe] + 1;
    }
    if (-1 < (int)uVar4) {
      if (*(int *)((longlong)param_1 + 0x6c) < (int)uVar4) {
        FUN_14476002c(plVar14);
        uVar4 = (int)param_1[0xe] + 1;
      }
      FUN_144a7a6da(plVar14,uVar4);
      plVar14 = (longlong *)local_78;
      if (plVar2 != (longlong *)0x0) {
        plVar14 = plVar2;
      }
      puVar10 = local_60;
      if (puVar3 != (undefined4 *)0x0) {
        puVar10 = puVar3;
      }
      uVar4 = 0;
      local_88 = puVar3;
      do {
        if (!SBORROW4(0,*(int *)((longlong)plVar14 + (longlong)(int)uVar4 * 4))) {
          FUN_1472d70a2(param_1,puVar10[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1472d6ed6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 1472d70a2 FUN_1472d70a2 body=241 status=ok
// SIG undefined FUN_1472d70a2(void)

void FUN_1472d70a2(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar8 = uVar7 & param_3;
  lVar2 = param_1 + 0x58;
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = lVar2;
  }
  lVar9 = (longlong)(int)uVar8;
  uVar4 = *(uint *)(lVar5 + lVar9 * 4);
  if (!SBORROW4(0,uVar4)) {
    puVar11 = (uint *)(lVar5 + lVar9 * 4);
    uVar10 = uVar8 - uVar4 & uVar7;
    uVar6 = 0;
    do {
      if (uVar10 < uVar6) {
        if (*(uint *)(param_1 + 0x74) < uVar6) {
          *(uint *)(param_1 + 0x74) = uVar6;
          uVar4 = *puVar11;
        }
        lVar3 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar3 = param_1 + 0x40;
        }
        uVar1 = *(undefined4 *)(lVar3 + lVar9 * 4);
        *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar3 = lVar2;
        }
        *(uint *)(lVar3 + lVar9 * 4) = param_3;
        uVar7 = *(uint *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_1 + 0x60);
        param_3 = uVar4;
        uVar6 = uVar10;
        param_2 = uVar1;
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 1 & uVar7;
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = lVar2;
      }
      lVar9 = (longlong)(int)uVar8;
      puVar11 = (uint *)(lVar5 + lVar9 * 4);
      uVar4 = *puVar11;
      uVar10 = uVar8 - uVar4 & uVar7;
    } while (!SBORROW4(0,uVar4));
    if (*(uint *)(param_1 + 0x74) < uVar6) {
      *(uint *)(param_1 + 0x74) = uVar6;
    }
  }
  lVar3 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  *(uint *)(lVar2 + lVar9 * 4) = param_3;
  return;
}



// FUNCTION 1472d7194 FUN_1472d7194 body=622 status=ok
// SIG undefined FUN_1472d7194(void)

/* WARNING: Removing unreachable block (ram,0x0001472d736c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1472d7194(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  void *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  pvVar5 = DAT_14ca43580;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[7] < 1) {
    uVar10 = *(uint *)(param_1 + 1);
    uVar8 = (ulonglong)uVar10;
    local_90 = *param_2;
    local_88 = _DAT_14ca43540;
    uStack_80 = uRam000000014ca43548;
    local_78 = _DAT_14ca43550;
    uStack_70 = uRam000000014ca43558;
    local_68 = _DAT_14ca43560;
    _uStack_60 = CONCAT44(_DAT_14ca4356c,uRam000000014ca43568);
    uStack_58 = uRam000000014ca43570;
    uStack_54 = uRam000000014ca43574;
    uStack_50 = uRam000000014ca43578;
    local_48 = (void *)0x0;
    lVar13 = (longlong)(int)DAT_14ca43588;
    local_40 = CONCAT44(local_40._4_4_,DAT_14ca43588);
    if (lVar13 == 0) {
      local_40 = (ulonglong)DAT_14ca43588;
    }
    else {
      FUN_1472d7404(&local_48,DAT_14ca43588);
      memcpy(local_48,pvVar5,lVar13 << 3);
      uVar10 = *(uint *)(param_1 + 1);
    }
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar10 + 1) {
      FUN_1472d745e(param_1,uVar10);
    }
    lVar13 = *param_1;
    lVar7 = (longlong)(int)uVar10 * 0x58;
    *(undefined4 *)(lVar13 + lVar7) = local_90;
    puVar12 = (undefined4 *)(lVar13 + 8 + lVar7);
    *puVar12 = (undefined4)local_88;
    puVar12[1] = local_88._4_4_;
    puVar12[2] = (undefined4)uStack_80;
    puVar12[3] = uStack_80._4_4_;
    puVar12 = (undefined4 *)(lVar13 + 0x18 + lVar7);
    *puVar12 = (undefined4)local_78;
    puVar12[1] = local_78._4_4_;
    puVar12[2] = (undefined4)uStack_70;
    puVar12[3] = uStack_70._4_4_;
    puVar12 = (undefined4 *)(lVar13 + 0x28 + lVar7);
    *puVar12 = (undefined4)local_68;
    puVar12[1] = local_68._4_4_;
    puVar12[2] = uStack_60;
    puVar12[3] = uStack_5c;
    puVar12 = (undefined4 *)(lVar13 + 0x34 + lVar7);
    *puVar12 = uStack_5c;
    puVar12[1] = uStack_58;
    puVar12[2] = uStack_54;
    puVar12[3] = uStack_50;
    *(undefined8 *)(lVar13 + 0x48 + lVar7) = 0;
    *(void **)(lVar13 + 0x48 + lVar7) = local_48;
    *(undefined4 *)(lVar13 + 0x50 + lVar7) = (undefined4)local_40;
    *(undefined4 *)(lVar13 + 0x54 + lVar7) = local_40._4_4_;
    local_40 = 0;
    local_48 = (void *)0x0;
    iVar6 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar6 + 1U) {
      FUN_1447602e0(param_1 + 2,iVar6);
    }
    puVar12 = (undefined4 *)((longlong)iVar6 * 4 + param_1[2]);
  }
  else {
    iVar6 = FUN_14020b4c6(param_1 + 4);
    lVar13 = *param_1;
    uVar8 = (ulonglong)iVar6;
    lVar7 = uVar8 * 0x58;
    *(undefined4 *)(lVar13 + lVar7) = *param_2;
    uVar1 = uRam000000014ca43548;
    puVar9 = (undefined8 *)(lVar13 + 8 + lVar7);
    *puVar9 = _DAT_14ca43540;
    puVar9[1] = uVar1;
    uVar1 = uRam000000014ca43558;
    puVar9 = (undefined8 *)(lVar13 + 0x18 + lVar7);
    *puVar9 = _DAT_14ca43550;
    puVar9[1] = uVar1;
    uVar1 = CONCAT44(_DAT_14ca4356c,uRam000000014ca43568);
    puVar9 = (undefined8 *)(lVar13 + 0x28 + lVar7);
    *puVar9 = _DAT_14ca43560;
    puVar9[1] = uVar1;
    uVar4 = uRam000000014ca43578;
    uVar3 = uRam000000014ca43574;
    uVar2 = uRam000000014ca43570;
    puVar12 = (undefined4 *)(lVar13 + 0x34 + lVar7);
    *puVar12 = _DAT_14ca4356c;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    *(undefined8 *)(lVar13 + 0x48 + lVar7) = 0;
    uVar10 = DAT_14ca43588;
    pvVar5 = DAT_14ca43580;
    lVar11 = (longlong)(int)DAT_14ca43588;
    *(uint *)(lVar13 + 0x50 + lVar7) = DAT_14ca43588;
    if (lVar11 == 0) {
      *(undefined4 *)(lVar13 + lVar7 + 0x54) = 0;
    }
    else {
      puVar9 = (undefined8 *)(lVar13 + lVar7 + 0x48);
      FUN_1472d7404(puVar9,uVar10);
      memcpy((void *)*puVar9,pvVar5,lVar11 << 3);
    }
    puVar12 = (undefined4 *)(uVar8 * 4 + param_1[2]);
  }
  *puVar12 = param_3;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1472d7404 FUN_1472d7404 body=89 status=ok
// SIG undefined FUN_1472d7404(void)

void FUN_1472d7404(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1472d745e FUN_1472d745e body=143 status=ok
// SIG undefined FUN_1472d745e(void)

void FUN_1472d745e(longlong param_1,int param_2)

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



// FUNCTION 1472d74ee FUN_1472d74ee body=70 status=ok
// SIG undefined FUN_1472d74ee(void)

void FUN_1472d74ee(longlong *param_1,int param_2)

{
  FUN_1447f872e(param_1 + 4);
  *(undefined4 *)(param_1[2] + (longlong)param_2 * 4) = 0x80000000;
  if (*(longlong *)(*param_1 + 0x48 + (longlong)param_2 * 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472d7534 FUN_1472d7534 body=622 status=ok
// SIG undefined FUN_1472d7534(void)

undefined4 *
FUN_1472d7534(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined1 *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar14 = param_1 + 0xb;
  plVar2 = (longlong *)param_1[0xc];
  plVar8 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar8 = plVar14;
  }
  plVar9 = param_1 + 8;
  do {
    lVar12 = (longlong)(int)uVar4;
    local_80 = param_4;
    if (*(uint *)((longlong)plVar8 + lVar12 * 4) == param_3) {
      plVar13 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar13 = plVar9;
      }
      if (*param_4 ==
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar13 + lVar12 * 4) * 8)) {
        *param_5 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar9 + lVar12 * 4);
        goto LAB_1472d7611;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_1472d75d8:
    uVar5 = FUN_1472d7896(param_1,local_80,param_3);
    FUN_1472d77a4(param_1,uVar5,param_3);
    *param_5 = 0;
LAB_1472d7611:
    *param_2 = uVar5;
    if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  puVar3 = (undefined4 *)param_1[9];
  if (puVar3 == (undefined4 *)0x0) {
    local_60[0] = (undefined4)*plVar9;
  }
  param_1[9] = 0;
  local_50 = (undefined4)param_1[10];
  local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
  param_1[10] = 0x100000000;
  if (plVar2 == (longlong *)0x0) {
    local_78[0] = (undefined4)*plVar14;
  }
  param_1[0xc] = 0;
  local_68 = (undefined4)param_1[0xd];
  local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
  param_1[0xd] = 0x100000000;
  iVar7 = uVar1 * 2 + 1;
  *(int *)(param_1 + 0xe) = iVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  uVar4 = uVar1 * 2 + 2;
  local_70 = plVar2;
  local_58 = puVar3;
  if (-1 < (int)uVar4) {
    if (uVar1 * 2 < 0x7ffffffe) {
      FUN_14475fe8c(plVar9);
      iVar7 = (int)param_1[0xe];
      iVar6 = (int)param_1[10];
      iVar11 = *(int *)((longlong)param_1 + 0x54);
    }
    else {
      iVar6 = 0;
      iVar11 = 1;
    }
    uVar4 = iVar7 + 1;
    *(int *)(param_1 + 10) = iVar7 + iVar6 + 1;
    if ((uint)(iVar11 - iVar6) < uVar4) {
      FUN_146f3c7b6(plVar9,iVar6);
      uVar4 = (int)param_1[0xe] + 1;
    }
    if (-1 < (int)uVar4) {
      if (*(int *)((longlong)param_1 + 0x6c) < (int)uVar4) {
        FUN_14476002c(plVar14);
        uVar4 = (int)param_1[0xe] + 1;
      }
      FUN_144a7a6da(plVar14,uVar4);
      plVar14 = (longlong *)local_78;
      if (plVar2 != (longlong *)0x0) {
        plVar14 = plVar2;
      }
      puVar10 = local_60;
      if (puVar3 != (undefined4 *)0x0) {
        puVar10 = puVar3;
      }
      uVar4 = 0;
      local_88 = puVar3;
      do {
        if (!SBORROW4(0,*(int *)((longlong)plVar14 + (longlong)(int)uVar4 * 4))) {
          FUN_1472d77a4(param_1,puVar10[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1472d75d8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 1472d77a4 FUN_1472d77a4 body=241 status=ok
// SIG undefined FUN_1472d77a4(void)

void FUN_1472d77a4(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar8 = uVar7 & param_3;
  lVar2 = param_1 + 0x58;
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = lVar2;
  }
  lVar9 = (longlong)(int)uVar8;
  uVar4 = *(uint *)(lVar5 + lVar9 * 4);
  if (!SBORROW4(0,uVar4)) {
    puVar11 = (uint *)(lVar5 + lVar9 * 4);
    uVar10 = uVar8 - uVar4 & uVar7;
    uVar6 = 0;
    do {
      if (uVar10 < uVar6) {
        if (*(uint *)(param_1 + 0x74) < uVar6) {
          *(uint *)(param_1 + 0x74) = uVar6;
          uVar4 = *puVar11;
        }
        lVar3 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar3 = param_1 + 0x40;
        }
        uVar1 = *(undefined4 *)(lVar3 + lVar9 * 4);
        *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar3 = lVar2;
        }
        *(uint *)(lVar3 + lVar9 * 4) = param_3;
        uVar7 = *(uint *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_1 + 0x60);
        param_3 = uVar4;
        uVar6 = uVar10;
        param_2 = uVar1;
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 1 & uVar7;
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = lVar2;
      }
      lVar9 = (longlong)(int)uVar8;
      puVar11 = (uint *)(lVar5 + lVar9 * 4);
      uVar4 = *puVar11;
      uVar10 = uVar8 - uVar4 & uVar7;
    } while (!SBORROW4(0,uVar4));
    if (*(uint *)(param_1 + 0x74) < uVar6) {
      *(uint *)(param_1 + 0x74) = uVar6;
    }
  }
  lVar3 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  *(uint *)(lVar2 + lVar9 * 4) = param_3;
  return;
}



// FUNCTION 1472d7896 FUN_1472d7896 body=155 status=ok
// SIG undefined FUN_1472d7896(void)

int FUN_1472d7896(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((int)param_1[7] < 1) {
    iVar3 = (int)param_1[1];
    uVar2 = *param_2;
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1472d7932(param_1,iVar3);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
    iVar1 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1447602e0(param_1 + 2,iVar1);
    }
    puVar4 = (undefined4 *)((longlong)iVar1 * 4 + param_1[2]);
  }
  else {
    iVar3 = FUN_14020b4c6(param_1 + 4);
    *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = *param_2;
    puVar4 = (undefined4 *)((longlong)iVar3 * 4 + param_1[2]);
  }
  *puVar4 = param_3;
  return iVar3;
}



// FUNCTION 1472d7932 FUN_1472d7932 body=132 status=ok
// SIG undefined FUN_1472d7932(void)

void FUN_1472d7932(longlong param_1,int param_2)

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



// FUNCTION 1472d79b8 FUN_1472d79b8 body=146 status=ok
// SIG undefined FUN_1472d79b8(void)

void FUN_1472d79b8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d7a4b FUN_1472d7a4b body=817 status=ok
// SIG undefined FUN_1472d7a4b(void)

void FUN_1472d7a4b(void *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [184];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar7;
joined_r0x0001472d7a9c:
    do {
      iVar4 = iVar7 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar3 = iVar7 * 2 + 2;
        if (iVar3 < (int)param_2) {
          fVar1 = *(float *)((longlong)param_1 + (longlong)iVar3 * 0xb0 + 0x68);
          fVar2 = *(float *)((longlong)param_1 + (longlong)iVar4 * 0xb0 + 0x68);
          bVar11 = *(uint *)((longlong)param_1 + (longlong)iVar3 * 0xb0 + 0x60) <
                   *(uint *)((longlong)param_1 + (longlong)iVar4 * 0xb0 + 0x60);
          if (fVar1 != fVar2) {
            bVar11 = fVar1 < fVar2;
          }
          if (NAN(fVar1) || NAN(fVar2)) {
            bVar11 = fVar1 < fVar2;
          }
          if (!bVar11) {
            iVar4 = iVar3;
          }
        }
        lVar9 = (longlong)iVar7 * 0xb0;
        lVar8 = (longlong)iVar4 * 0xb0;
        fVar1 = *(float *)((longlong)param_1 + lVar9 + 0x68);
        fVar2 = *(float *)((longlong)param_1 + lVar8 + 0x68);
        bVar11 = *(uint *)((longlong)param_1 + lVar9 + 0x60) <
                 *(uint *)((longlong)param_1 + lVar8 + 0x60);
        if (fVar1 != fVar2) {
          bVar11 = fVar1 < fVar2;
        }
        if (NAN(fVar1) || NAN(fVar2)) {
          bVar11 = fVar1 < fVar2;
        }
        if (bVar11) {
          memcpy(local_f8,(void *)(lVar9 + (longlong)param_1),0xb0);
          memcpy((void *)(lVar9 + (longlong)param_1),(void *)(lVar8 + (longlong)param_1),0xb0);
          memcpy((void *)(lVar8 + (longlong)param_1),local_f8,0xb0);
          iVar7 = iVar4;
          goto joined_r0x0001472d7a9c;
        }
      }
      bVar11 = iVar5 != 0;
      iVar7 = iVar5 + -1;
      iVar5 = iVar7;
    } while (bVar11);
    if (1 < (int)param_2) {
      pvVar6 = (void *)(((ulonglong)param_2 - 1) * 0xb0 + (longlong)param_1);
      memcpy(local_f8,param_1,0xb0);
      memcpy(param_1,pvVar6,0xb0);
      memcpy(pvVar6,local_f8,0xb0);
      if (param_2 != 2) {
        uVar10 = (ulonglong)param_2 - 1;
        do {
          iVar7 = 0;
          iVar4 = 1;
          iVar5 = 0;
          do {
            iVar7 = iVar7 + 2;
            iVar3 = iVar4;
            if ((longlong)iVar7 < (longlong)uVar10) {
              lVar8 = (longlong)iVar7 * 0xb0;
              fVar1 = *(float *)((longlong)param_1 + lVar8 + 0x68);
              fVar2 = *(float *)((longlong)param_1 + (longlong)iVar4 * 0xb0 + 0x68);
              bVar11 = *(uint *)((longlong)param_1 + lVar8 + 0x60) <
                       *(uint *)((longlong)param_1 + (longlong)iVar4 * 0xb0 + 0x60);
              if (fVar1 != fVar2) {
                bVar11 = fVar1 < fVar2;
              }
              if (NAN(fVar1) || NAN(fVar2)) {
                bVar11 = fVar1 < fVar2;
              }
              if (!bVar11) {
                iVar3 = iVar7;
              }
            }
            lVar9 = (longlong)iVar5 * 0xb0;
            lVar8 = (longlong)iVar3 * 0xb0;
            fVar1 = *(float *)((longlong)param_1 + lVar9 + 0x68);
            fVar2 = *(float *)((longlong)param_1 + lVar8 + 0x68);
            bVar11 = *(uint *)((longlong)param_1 + lVar9 + 0x60) <
                     *(uint *)((longlong)param_1 + lVar8 + 0x60);
            if (fVar1 != fVar2) {
              bVar11 = fVar1 < fVar2;
            }
            if (NAN(fVar1) || NAN(fVar2)) {
              bVar11 = fVar1 < fVar2;
            }
            if (!bVar11) break;
            memcpy(local_f8,(void *)(lVar9 + (longlong)param_1),0xb0);
            memcpy((void *)(lVar9 + (longlong)param_1),(void *)(lVar8 + (longlong)param_1),0xb0);
            memcpy((void *)(lVar8 + (longlong)param_1),local_f8,0xb0);
            iVar7 = iVar3 * 2;
            iVar4 = iVar3 * 2 + 1;
            iVar5 = iVar3;
          } while ((longlong)iVar4 < (longlong)uVar10);
          pvVar6 = (void *)((uVar10 - 1) * 0xb0 + (longlong)param_1);
          memcpy(local_f8,param_1,0xb0);
          memcpy(param_1,pvVar6,0xb0);
          memcpy(pvVar6,local_f8,0xb0);
          bVar11 = 2 < uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar11);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472d7d7e FUN_1472d7d7e body=143 status=ok
// SIG undefined FUN_1472d7d7e(void)

void FUN_1472d7d7e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x640);
  lVar2 = 0x640;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0xc80);
  lVar2 = 0xc80;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x12c0);
  lVar2 = 0x12c0;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x1900);
  lVar2 = 0x3200;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0x3f80000000000000;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x3840);
  return;
}



// FUNCTION 1472d7e0e FUN_1472d7e0e body=29 status=ok
// SIG undefined FUN_1472d7e0e(void)

undefined8 FUN_1472d7e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d7e2c FUN_1472d7e2c body=29 status=ok
// SIG undefined FUN_1472d7e2c(void)

undefined8 FUN_1472d7e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472d7e58 FUN_1472d7e58 body=85 status=ok
// SIG undefined FUN_1472d7e58(void)

void FUN_1472d7e58(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_140257f64();
  return;
}



// FUNCTION 1472d7eae FUN_1472d7eae body=132 status=ok
// SIG undefined FUN_1472d7eae(void)

void FUN_1472d7eae(longlong param_1,int param_2)

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



// FUNCTION 1472d7f34 FUN_1472d7f34 body=132 status=ok
// SIG undefined FUN_1472d7f34(void)

void FUN_1472d7f34(longlong param_1,int param_2)

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



// FUNCTION 1472d7fba FUN_1472d7fba body=132 status=ok
// SIG undefined FUN_1472d7fba(void)

void FUN_1472d7fba(longlong param_1,int param_2)

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



// FUNCTION 1472d8040 FUN_1472d8040 body=147 status=ok
// SIG undefined FUN_1472d8040(void)

void FUN_1472d8040(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d80d4 FUN_1472d80d4 body=124 status=ok
// SIG undefined FUN_1472d80d4(void)

void FUN_1472d80d4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d8152 FUN_1472d8152 body=132 status=ok
// SIG undefined FUN_1472d8152(void)

void FUN_1472d8152(longlong param_1,int param_2)

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



// FUNCTION 1472d81d8 FUN_1472d81d8 body=132 status=ok
// SIG undefined FUN_1472d81d8(void)

void FUN_1472d81d8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d825e FUN_1472d825e body=124 status=ok
// SIG undefined FUN_1472d825e(void)

void FUN_1472d825e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d82dc FUN_1472d82dc body=130 status=ok
// SIG undefined FUN_1472d82dc(void)

void FUN_1472d82dc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d8360 FUN_1472d8360 body=132 status=ok
// SIG undefined FUN_1472d8360(void)

void FUN_1472d8360(longlong param_1,int param_2)

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



// FUNCTION 1472d83e6 FUN_1472d83e6 body=124 status=ok
// SIG undefined FUN_1472d83e6(void)

void FUN_1472d83e6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d8464 FUN_1472d8464 body=322 status=ok
// SIG undefined FUN_1472d8464(void)

void FUN_1472d8464(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1472d85a8 FUN_1472d85a8 body=181 status=ok
// SIG undefined FUN_1472d85a8(void)

longlong FUN_1472d85a8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1472d8640;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1472d865e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1472d8640:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1472d865e FUN_1472d865e body=277 status=ok
// SIG undefined FUN_1472d865e(void)

undefined4 * FUN_1472d865e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1472d8774(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1472d885a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1472d896e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d8774 FUN_1472d8774 body=229 status=ok
// SIG undefined FUN_1472d8774(void)

int * FUN_1472d8774(longlong *param_1,int *param_2)

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



// FUNCTION 1472d885a FUN_1472d885a body=161 status=ok
// SIG undefined FUN_1472d885a(void)

undefined8 FUN_1472d885a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1472d88fc(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472d88fc FUN_1472d88fc body=114 status=ok
// SIG undefined FUN_1472d88fc(void)

void FUN_1472d88fc(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 1472d896e FUN_1472d896e body=477 status=ok
// SIG undefined FUN_1472d896e(void)

void FUN_1472d896e(longlong *param_1)

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



// FUNCTION 1472d8b4c FUN_1472d8b4c body=223 status=ok
// SIG undefined FUN_1472d8b4c(void)

void * FUN_1472d8b4c(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  memcpy(param_1,param_2,0x120);
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0;
  FUN_144899d7a((longlong)param_1 + 0x120,(longlong)param_2 + 0x120);
  FUN_144ab5ada((longlong)param_1 + 0x170,(longlong)param_2 + 0x170);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x1c8);
  *(undefined8 *)((longlong)param_1 + 0x1c0) = *(undefined8 *)((longlong)param_2 + 0x1c0);
  *(undefined8 *)((longlong)param_1 + 0x1c8) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1d1);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1d5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1d9);
  *(undefined4 *)((longlong)param_1 + 0x1cd) = *(undefined4 *)((longlong)param_2 + 0x1cd);
  *(undefined4 *)((longlong)param_1 + 0x1d1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1d5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1d9) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  FUN_144a69486((longlong)param_1 + 0x1e0,(longlong)param_2 + 0x1e0);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x200);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x208);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x218);
  *(undefined8 *)((longlong)param_1 + 0x210) = *(undefined8 *)((longlong)param_2 + 0x210);
  *(undefined8 *)((longlong)param_1 + 0x218) = uVar6;
  *(undefined8 *)((longlong)param_1 + 0x200) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x208) = uVar5;
  return param_1;
}



// FUNCTION 1472d8c2c FUN_1472d8c2c body=146 status=ok
// SIG undefined FUN_1472d8c2c(void)

void FUN_1472d8c2c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x220,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x220)) {
      uVar5 = uVar4 / 0x220 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x220,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472d8cbf FUN_1472d8cbf body=165 status=ok
// SIG undefined FUN_1472d8cbf(void)

ulonglong FUN_1472d8cbf(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar1 = (longlong *)*param_1;
  plVar6 = plVar1;
  if ((longlong)(int)param_1[1] != 0) {
    plVar2 = plVar1;
    plVar6 = plVar1 + (int)param_1[1];
    do {
      while (plVar7 = plVar2, cVar3 = FUN_1472d8ddc(param_2,*plVar7), plVar5 = plVar6, cVar3 == '\0'
            ) {
        plVar2 = plVar7 + 1;
        if (plVar7 + 1 == plVar6) goto LAB_1472d8d1c;
      }
      while( true ) {
        plVar5 = plVar5 + -1;
        cVar3 = FUN_1472d8ddc(param_2,*plVar5);
        if (cVar3 == '\0') break;
        plVar6 = plVar7;
        if (plVar5 == plVar7) goto LAB_1472d8d1c;
      }
      lVar4 = *plVar5;
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *plVar5;
        }
      }
      *plVar7 = lVar4;
      plVar2 = plVar7 + 1;
      plVar6 = plVar5;
    } while (plVar5 != plVar7 + 1);
    plVar6 = plVar7 + 1;
  }
LAB_1472d8d1c:
  return (ulonglong)((longlong)plVar6 - (longlong)plVar1) >> 3 & 0xffffffff;
}



// FUNCTION 1472d8d64 FUN_1472d8d64 body=118 status=ok
// SIG undefined FUN_1472d8d64(void)

void FUN_1472d8d64(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1457d5db8(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1472d8e80(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472d8ddc FUN_1472d8ddc body=163 status=ok
// SIG undefined FUN_1472d8ddc(void)

bool FUN_1472d8ddc(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar5 = false;
  if (*(longlong *)(param_2 + 0x110) != 0) {
    lVar3 = FUN_144b00ba4();
    local_20 = *(undefined8 *)(lVar3 + 0x18);
    FUN_144aa13b0(&local_20,*param_1);
    iVar2 = (int)param_1[2];
    iVar1 = (int)((ulonglong)(((longlong *)*param_1)[1] - *(longlong *)*param_1) >> 1);
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
    if (((iVar2 == iVar4) && (bVar5 = true, iVar2 != 0)) && (0 < iVar1)) {
      iVar2 = FUN_144a54874(param_1[1]);
      bVar5 = iVar2 == 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d8e80 FUN_1472d8e80 body=63 status=ok
// SIG undefined FUN_1472d8e80(void)

void FUN_1472d8e80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472d8ec0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1472d8ec0 FUN_1472d8ec0 body=97 status=ok
// SIG undefined FUN_1472d8ec0(void)

ulonglong FUN_1472d8ec0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1472d8f22 FUN_1472d8f22 body=88 status=ok
// SIG undefined FUN_1472d8f22(void)

undefined8 * FUN_1472d8f22(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1472d8f7a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1472d8f7a FUN_1472d8f7a body=98 status=ok
// SIG undefined FUN_1472d8f7a(void)

void FUN_1472d8f7a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1472d8fdc FUN_1472d8fdc body=42 status=ok
// SIG undefined FUN_1472d8fdc(void)

void FUN_1472d8fdc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1472d9042 FUN_1472d9042 body=39 status=ok
// SIG undefined FUN_1472d9042(void)

void FUN_1472d9042(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_1472db8d2(uVar1,param_1);
  return;
}



// FUNCTION 1472d906a FUN_1472d906a body=75 status=ok
// SIG undefined FUN_1472d906a(void)

void * FUN_1472d906a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  FUN_147432e26(_Dst);
  *(undefined4 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined2 *)((longlong)_Dst + 0xe4) = 0;
  return _Dst;
}



// FUNCTION 1472d90b6 FUN_1472d90b6 body=42 status=ok
// SIG undefined FUN_1472d90b6(void)

void FUN_1472d90b6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472d90e4 FUN_1472d90e4 body=289 status=ok
// SIG undefined FUN_1472d90e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1472d90e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca450f8) {
    FUN_144b3d300(&DAT_14ca450f8);
    if (DAT_14ca450f8 == -1) {
      FUN_1415a842a();
      FUN_14610c90c();
      FUN_140db5666(&DAT_14ca45050,0,&DAT_14ca44fe8,L"FClearIndirectDispatchArgsCS",
                    L"/Engine/Private/RendererUtils.usf",L"ClearIndirectDispatchArgsCS",5,1,
                    FUN_1472d926e,FUN_1472d920e,&LAB_1472d920a,&LAB_1472d9206,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca46b80);
      _DAT_14ca45050 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd19a0);
      _Init_thread_footer(&DAT_14ca450f8);
    }
  }
  return &DAT_14ca45050;
}



// FUNCTION 1472d920e FUN_1472d920e body=96 status=ok
// SIG undefined FUN_1472d920e(void)

undefined8 FUN_1472d920e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a842a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46b80,1);
  return uVar3;
}



// FUNCTION 1472d926e FUN_1472d926e body=52 status=ok
// SIG undefined FUN_1472d926e(void)

void FUN_1472d926e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472d92a2 FUN_1472d92a2 body=42 status=ok
// SIG undefined FUN_1472d92a2(void)

void FUN_1472d92a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472d932a FUN_1472d932a body=96 status=ok
// SIG undefined FUN_1472d932a(void)

undefined8 FUN_1472d932a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157d948();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46c08,1);
  return uVar3;
}



// FUNCTION 1472d938a FUN_1472d938a body=52 status=ok
// SIG undefined FUN_1472d938a(void)

void FUN_1472d938a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472d93be FUN_1472d93be body=246 status=ok
// SIG undefined FUN_1472d93be(void)

void FUN_1472d93be(undefined8 param_1,float param_2,float param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_3;
  dVar2 = dVar3;
  if (NAN(param_3)) {
    dVar2 = (-dVar3 * dVar3) / (dVar3 - dVar3);
  }
  dVar4 = 0.0;
  if (NAN(param_3)) {
    dVar4 = dVar3 / (dVar3 - dVar3);
  }
  dVar3 = tan((double)param_2);
  dVar1 = tan((double)param_2);
  *param_4 = 1.0 / dVar1;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  param_4[4] = 0.0;
  param_4[5] = (double)((float)(int)param_1 / (float)(int)((ulonglong)param_1 >> 0x20)) / dVar3;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  param_4[8] = 0.0;
  param_4[9] = 0.0;
  param_4[10] = dVar4;
  param_4[0xb] = 1.0;
  param_4[0xc] = 0.0;
  param_4[0xd] = 0.0;
  param_4[0xe] = dVar2;
  param_4[0xf] = 0.0;
  return;
}



// FUNCTION 1472d94b4 FUN_1472d94b4 body=207 status=ok
// SIG undefined FUN_1472d94b4(void)

longlong FUN_1472d94b4(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0x80;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0x8000000000;
  FUN_1401b5a8c(param_1 + 0x1c0,0);
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x20f) = 0;
  return param_1;
}



// FUNCTION 1472d9584 FUN_1472d9584 body=562 status=ok
// SIG undefined FUN_1472d9584(void)

undefined8 * FUN_1472d9584(undefined8 *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong in_stack_00000028;
  longlong in_stack_00000030;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &stack0x00000038;
  FUN_147cc7ce0();
  *param_1 = &PTR_FUN_14a2f0700;
  lVar3 = FUN_1447b4020(in_stack_00000028);
  lVar4 = lVar3 + 0x50;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  param_1[0x15] = lVar4;
  *(byte *)(param_1 + 0x16) = *(byte *)(in_stack_00000028 + 0x15c) >> 1 & 1;
  local_28 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  local_28[4] = 0;
  local_28[5] = 0;
  *local_28 = &PTR_FUN_14a2f06f0;
  uVar2 = *(uint *)(in_stack_00000030 + 0xd54);
  bVar1 = *(byte *)(in_stack_00000030 + 0xd50);
  bVar6 = true;
  if ((uVar2 & 0x1c) == 0) {
    if (((bVar1 & 1) == 0) || ((*(byte *)(in_stack_00000030 + 0x2a9) & 0xfc) != 4)) {
      bVar6 = false;
    }
    else if ((*(longlong *)(in_stack_00000030 + 0xd60) == 0) &&
            (*(longlong *)(in_stack_00000030 + 0xd68) == 0)) {
      bVar6 = *(longlong *)(in_stack_00000030 + 0xd70) != 0;
    }
  }
  *(bool *)(local_28 + 1) = bVar6;
  if ((uVar2 & 0x18) == 0) {
    if ((bVar1 & 1) != 0) {
      if ((*(byte *)(in_stack_00000030 + 0x2a9) & 0xfc) == 4) {
        bVar6 = true;
        if ((*(longlong *)(in_stack_00000030 + 0xd60) == 0) &&
           (*(longlong *)(in_stack_00000030 + 0xd68) == 0)) {
          bVar6 = *(longlong *)(in_stack_00000030 + 0xd70) != 0;
        }
      }
      else {
        bVar6 = false;
      }
      *(bool *)((longlong)local_28 + 9) = bVar6;
      *(undefined1 *)((longlong)local_28 + 10) = 0;
      goto LAB_1472d96d8;
    }
    *(undefined2 *)((longlong)local_28 + 9) = 0;
  }
  else {
    *(undefined1 *)((longlong)local_28 + 9) = 1;
    *(byte *)((longlong)local_28 + 10) = (byte)uVar2 >> 4 & 1;
    if ((bVar1 & 1) != 0) {
LAB_1472d96d8:
      if ((*(byte *)(in_stack_00000030 + 0x2a9) & 0xfc) == 4) {
        if ((((uVar2 & 0x20) == 0) || (*(longlong *)(in_stack_00000030 + 0xd60) != 0)) ||
           (*(longlong *)(in_stack_00000030 + 0xd68) != 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = *(longlong *)(in_stack_00000030 + 0xd70) == 0;
        }
        goto LAB_1472d9703;
      }
    }
  }
  bVar6 = SUB41((uVar2 & 0x20) >> 5,0);
LAB_1472d9703:
  *(bool *)((longlong)local_28 + 0xb) = bVar6;
  uVar5 = (ulonglong)*(uint *)(in_stack_00000030 + 0xd5c);
  if ((int)*(uint *)(in_stack_00000030 + 0xd5c) < 2) {
    uVar5 = 1;
  }
  uVar2 = 1;
  if (1 < (int)*(uint *)(in_stack_00000030 + 0xd58)) {
    uVar2 = *(uint *)(in_stack_00000030 + 0xd58);
  }
  *(ulonglong *)((longlong)local_28 + 0xc) = (ulonglong)uVar2 | uVar5 << 0x20;
  *(undefined8 *)((longlong)local_28 + 0x14) = *(undefined8 *)(in_stack_00000030 + 0xd60);
  *(undefined8 *)((longlong)local_28 + 0x1c) = *(undefined8 *)(in_stack_00000030 + 0xd68);
  *(undefined8 *)((longlong)local_28 + 0x24) = *(undefined8 *)(in_stack_00000030 + 0xd70);
  FUN_147cc7db8(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1472d97b8 FUN_1472d97b8 body=134 status=ok
// SIG undefined FUN_1472d97b8(void)

int FUN_1472d97b8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_2 + 0x140);
  if (plVar3 == (longlong *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      if (param_3 == (longlong *)0x0) {
        uVar1 = 2;
      }
      else {
        (**(code **)(*param_3 + 8))(param_3,&local_2c,*(undefined8 *)(*plVar3 + 0x28));
        uVar1 = local_2c;
      }
      iVar2 = (iVar2 + 1) - (uint)(uVar1 < 2);
      plVar3 = (longlong *)plVar3[5];
    } while (plVar3 != (longlong *)0x0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1472d9840 FUN_1472d9840 body=265 status=ok
// SIG undefined FUN_1472d9840(void)

void FUN_1472d9840(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (((((*param_1 != 0) && (lVar3 = param_1[1], lVar3 != 0)) &&
       (lVar2 = *(longlong *)(lVar3 + 8), lVar2 != 0)) &&
      ((lVar3 = *(longlong *)(lVar3 + 0x148), lVar3 != 0 &&
       ((*(byte *)((longlong)param_1 + 0x34) & 1) != 0)))) &&
     ((*(char *)(lVar2 + 0x68) != '\x02' &&
      (((*(byte *)(lVar2 + 0x6f) & 0x10) != 0 &&
       (*(int *)(lVar3 + 0x4bc0) != *(int *)(lVar3 + 0x4bec))))))) {
    uVar1 = *(uint *)(*param_1 + 0x34);
    lVar2 = lVar3 + 0x4bf0;
    if (*(longlong *)(lVar3 + 0x4bf8) != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x4bf8);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(lVar3 + 0x4c00) - 1U & uVar1) * 4);
    if (iVar5 != -1) {
      do {
        lVar2 = *(longlong *)(lVar3 + 0x4bb8) + (longlong)iVar5 * 0x20;
        if (*(uint *)(*(longlong *)(lVar3 + 0x4bb8) + (longlong)iVar5 * 0x20) == uVar1) {
          if (lVar2 == 0) {
            return;
          }
          if (lVar2 == -8) {
            return;
          }
          if ((longlong)*(int *)(lVar2 + 0x10) == 0) {
            return;
          }
          lVar4 = (longlong)*(int *)(lVar2 + 0x10) * 0x430;
          lVar3 = *(longlong *)(lVar2 + 8) + 0x3a0;
          do {
            FUN_14002d1ac(lVar3);
            FUN_1447c6044(lVar3 + 0x40,0,*(undefined4 *)(lVar3 + 0x58),0);
            lVar3 = lVar3 + 0x430;
            lVar4 = lVar4 + -0x430;
          } while (lVar4 != 0);
          return;
        }
        iVar5 = *(int *)(lVar2 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 1472d994a FUN_1472d994a body=42 status=ok
// SIG undefined FUN_1472d994a(void)

void FUN_1472d994a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472d997c FUN_1472d997c body=96 status=ok
// SIG undefined FUN_1472d997c(void)

undefined8 FUN_1472d997c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141592a4c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46d08,1);
  return uVar3;
}



// FUNCTION 1472d99dc FUN_1472d99dc body=52 status=ok
// SIG undefined FUN_1472d99dc(void)

void FUN_1472d99dc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472d9a10 FUN_1472d9a10 body=42 status=ok
// SIG undefined FUN_1472d9a10(void)

void FUN_1472d9a10(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472d9a42 FUN_1472d9a42 body=96 status=ok
// SIG undefined FUN_1472d9a42(void)

undefined8 FUN_1472d9a42(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb09be();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca46d90,1);
  return uVar3;
}



// FUNCTION 1472d9aa2 FUN_1472d9aa2 body=52 status=ok
// SIG undefined FUN_1472d9aa2(void)

void FUN_1472d9aa2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472d9ad6 FUN_1472d9ad6 body=68 status=ok
// SIG undefined FUN_1472d9ad6(void)

void FUN_1472d9ad6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

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



// FUNCTION 1472d9b22 FUN_1472d9b22 body=84 status=ok
// SIG undefined FUN_1472d9b22(void)

longlong FUN_1472d9b22(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  FUN_147440a6c(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"VertexFetch_HitProxyIdBuffer",0);
  return lVar1;
}



// FUNCTION 1472d9b76 FUN_1472d9b76 body=70 status=ok
// SIG undefined FUN_1472d9b76(void)

longlong FUN_1472d9b76(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0;
  return lVar1;
}



// FUNCTION 1472d9bbc FUN_1472d9bbc body=68 status=ok
// SIG undefined FUN_1472d9bbc(void)

void FUN_1472d9bbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

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



// FUNCTION 1472d9c08 FUN_1472d9c08 body=93 status=ok
// SIG undefined FUN_1472d9c08(void)

longlong FUN_1472d9c08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  FUN_1474409b8(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"HitProxyId",0);
  return lVar1;
}



// FUNCTION 1472d9c66 FUN_1472d9c66 body=79 status=ok
// SIG undefined FUN_1472d9c66(void)

longlong FUN_1472d9c66(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  return lVar1;
}



// FUNCTION 1472d9cb6 FUN_1472d9cb6 body=138 status=ok
// SIG undefined FUN_1472d9cb6(void)

void FUN_1472d9cb6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1403c665e();
  FUN_14071c6f0(local_30,param_2);
  lVar1 = *(longlong *)(param_1 + 8) + 0x3f08;
  FUN_141763a12(lVar1,param_2,param_1 + 0x918);
  FUN_142fdaa76(param_1,param_2);
  FUN_142c2fffa(lVar1);
  FUN_1401e383c(local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d9d42 FUN_1472d9d42 body=169 status=ok
// SIG undefined FUN_1472d9d42(void)

void FUN_1472d9d42(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14479fe53(*(undefined2 *)(param_1 + 0x8a8),1,1);
  FUN_140443a4e(param_1);
  FUN_1403c665e(param_1,param_2);
  FUN_14071c6f0(local_30,param_2);
  lVar1 = *(longlong *)(param_1 + 8) + 0x3f08;
  FUN_141763a12(lVar1,param_2,param_1 + 0x918);
  FUN_142fdaa76(param_1,param_2);
  FUN_142c2fffa(lVar1);
  FUN_1401e383c(local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472d9dec FUN_1472d9dec body=42 status=ok
// SIG undefined FUN_1472d9dec(void)

void FUN_1472d9dec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1472d9e22 FUN_1472d9e22 body=39 status=ok
// SIG undefined FUN_1472d9e22(void)

void FUN_1472d9e22(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472dc622(uVar1,param_1);
  return;
}



// FUNCTION 1472d9e4a FUN_1472d9e4a body=61 status=ok
// SIG undefined FUN_1472d9e4a(void)

longlong FUN_1472d9e4a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 1472d9e88 FUN_1472d9e88 body=42 status=ok
// SIG undefined FUN_1472d9e88(void)

void FUN_1472d9e88(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472d9ebe FUN_1472d9ebe body=39 status=ok
// SIG undefined FUN_1472d9ebe(void)

void FUN_1472d9ebe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472d9ee6 FUN_1472d9ee6 body=31 status=ok
// SIG undefined FUN_1472d9ee6(void)

void FUN_1472d9ee6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 1472d9f06 FUN_1472d9f06 body=98 status=ok
// SIG undefined FUN_1472d9f06(void)

void FUN_1472d9f06(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1404e2186(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1472d9f68 FUN_1472d9f68 body=13 status=ok
// SIG undefined FUN_1472d9f68(void)

bool FUN_1472d9f68(longlong param_1,uint param_2)

{
  return (param_2 & 0x7fffffff) == *(uint *)(param_1 + 0x38);
}



// FUNCTION 1472d9f76 FUN_1472d9f76 body=10 status=ok
// SIG undefined FUN_1472d9f76(void)

void FUN_1472d9f76(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x38) = param_2 & 0x7fffffff;
  return;
}



// FUNCTION 1472d9f80 FUN_1472d9f80 body=109 status=ok
// SIG undefined FUN_1472d9f80(void)

int FUN_1472d9f80(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
    FUN_1472de0a8(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar5 = (longlong)iVar3 * 0x30;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = param_2[2];
  uVar6 = param_2[1];
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  *puVar2 = *param_2;
  puVar2[1] = uVar6;
  lVar4 = *plVar1;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = param_3[2];
  uVar6 = param_3[1];
  puVar2 = (undefined8 *)(lVar4 + 0x18 + lVar5);
  *puVar2 = *param_3;
  puVar2[1] = uVar6;
  return iVar3;
}



// FUNCTION 1472d9fee FUN_1472d9fee body=382 status=ok
// SIG undefined FUN_1472d9fee(void)

void FUN_1472d9fee(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34 [20];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x38) != -1) {
    FUN_1403936f2(local_34,1,1);
    lVar5 = *(longlong *)(param_1 + 0x30);
    iVar1 = *(int *)((longlong)param_2 + 0x17c);
    if (iVar1 != *(int *)(lVar5 + 0x10)) {
      *(int *)((longlong)param_2 + 0x17c) = *(int *)(lVar5 + 0x10);
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar6) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar6 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar6;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar3 + 2) = uVar2;
      lVar5 = *(longlong *)(param_1 + 0x30);
    }
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = FUN_1431ed846(lVar5,param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    if (*(int *)((longlong)param_2 + 0x17c) != iVar1) {
      *(int *)((longlong)param_2 + 0x17c) = iVar1;
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar6) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar6 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar6;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar3 + 2) = uVar2;
    }
    FUN_1402488ea(local_34);
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_14c7609b0;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472da16e FUN_1472da16e body=279 status=ok
// SIG undefined FUN_1472da16e(void)

void FUN_1472da16e(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if (*(int *)(param_1 + 0x38) != -1) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    iVar1 = *(int *)((longlong)param_2 + 0x17c);
    if (iVar1 != *(int *)(lVar4 + 0x10)) {
      *(int *)((longlong)param_2 + 0x17c) = *(int *)(lVar4 + 0x10);
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar3 + 2) = uVar2;
      lVar4 = *(longlong *)(param_1 + 0x30);
    }
    FUN_1431ed91e(lVar4);
    if (*(int *)((longlong)param_2 + 0x17c) != iVar1) {
      *(int *)((longlong)param_2 + 0x17c) = iVar1;
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar3 + 3;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x20);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar3 + 3;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar3 + 2) = uVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1472da286 FUN_1472da286 body=55 status=ok
// SIG undefined FUN_1472da286(void)

undefined8 FUN_1472da286(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = ((param_2 >> 3 & 7) + (param_2 >> 0xb) * 8) * *(int *)(param_1 + 0x28) +
          (param_2 & 7 | param_2 >> 3 & 0xf8);
  return CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 4) != '\0');
}


