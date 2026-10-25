// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14967ed2a FUN_14967ed2a body=93 status=ok
// SIG undefined FUN_14967ed2a(void)

longlong FUN_14967ed2a(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14967ed88(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14967ed88 FUN_14967ed88 body=146 status=ok
// SIG undefined FUN_14967ed88(void)

longlong * FUN_14967ed88(longlong *param_1,longlong *param_2)

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



// FUNCTION 14967ee1a FUN_14967ee1a body=199 status=ok
// SIG undefined FUN_14967ee1a(void)

undefined8 * FUN_14967ee1a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdabb50;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdabb70;
  param_1[7] = param_2;
  param_1[2] = &LAB_14967f00e;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdabb90;
  param_1[0x17] = &LAB_14967f05c;
  param_1[0x12] = &LAB_14967f064;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14967eee2 FUN_14967eee2 body=38 status=ok
// SIG undefined FUN_14967eee2(void)

undefined8 FUN_14967eee2(undefined8 param_1,int param_2)

{
  FUN_14967f0b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ef08 FUN_14967ef08 body=207 status=ok
// SIG undefined FUN_14967ef08(void)

void FUN_14967ef08(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_14967efb9;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14967efb9:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967efd8 FUN_14967efd8 body=53 status=ok
// SIG undefined FUN_14967efd8(void)

void FUN_14967efd8(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 14967f03e FUN_14967f03e body=29 status=ok
// SIG undefined FUN_14967f03e(void)

undefined8 FUN_14967f03e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967f09a FUN_14967f09a body=29 status=ok
// SIG undefined FUN_14967f09a(void)

undefined8 FUN_14967f09a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967f0b8 FUN_14967f0b8 body=127 status=ok
// SIG undefined FUN_14967f0b8(void)

void FUN_14967f0b8(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdabb50;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14967f138 FUN_14967f138 body=84 status=ok
// SIG undefined FUN_14967f138(void)

longlong * FUN_14967f138(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 14967f18c FUN_14967f18c body=132 status=ok
// SIG undefined FUN_14967f18c(void)

void FUN_14967f18c(longlong param_1,int param_2)

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



// FUNCTION 14967f212 FUN_14967f212 body=48 status=ok
// SIG undefined FUN_14967f212(void)

void FUN_14967f212(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14967f242 FUN_14967f242 body=45 status=ok
// SIG undefined FUN_14967f242(void)

void FUN_14967f242(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xac;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x200000000;
      param_1 = param_1 + 0xb0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14967f270 FUN_14967f270 body=98 status=ok
// SIG undefined FUN_14967f270(void)

void FUN_14967f270(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xb0 + *param_1);
  FUN_148544d7f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xb0 + (longlong)_Dst),(longlong)iVar2 * 0xb0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14967f2d2 FUN_14967f2d2 body=62 status=ok
// SIG undefined FUN_14967f2d2(void)

void FUN_14967f2d2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14967f310(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb0,8);
  }
  return;
}



// FUNCTION 14967f310 FUN_14967f310 body=110 status=ok
// SIG undefined FUN_14967f310(void)

ulonglong FUN_14967f310(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14967f349;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb0,8);
      param_2 = param_2 / 0xb0;
    }
  }
LAB_14967f349:
  return param_2 & 0xffffffff;
}



// FUNCTION 14967f37e FUN_14967f37e body=65 status=ok
// SIG undefined FUN_14967f37e(void)

void FUN_14967f37e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14967f3c0 FUN_14967f3c0 body=29 status=ok
// SIG undefined FUN_14967f3c0(void)

undefined8 FUN_14967f3c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967f3f8 FUN_14967f3f8 body=29 status=ok
// SIG undefined FUN_14967f3f8(void)

bool FUN_14967f3f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14967f416 FUN_14967f416 body=26 status=ok
// SIG undefined FUN_14967f416(void)

bool FUN_14967f416(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14967f430 FUN_14967f430 body=24 status=ok
// SIG undefined FUN_14967f430(void)

bool FUN_14967f430(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14967f448 FUN_14967f448 body=101 status=ok
// SIG undefined FUN_14967f448(void)

void FUN_14967f448(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdabbf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14967f4ae FUN_14967f4ae body=101 status=ok
// SIG undefined FUN_14967f4ae(void)

void FUN_14967f4ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdabbf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14967f514 FUN_14967f514 body=134 status=ok
// SIG undefined FUN_14967f514(void)

void FUN_14967f514(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdabbf0;
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
                    /* WARNING: Could not recover jumptable at 0x00014967f58b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14967f59a FUN_14967f59a body=39 status=ok
// SIG undefined FUN_14967f59a(void)

void FUN_14967f59a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014967f5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14967f5c2 FUN_14967f5c2 body=146 status=ok
// SIG undefined FUN_14967f5c2(void)

bool FUN_14967f5c2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967f656 FUN_14967f656 body=29 status=ok
// SIG undefined FUN_14967f656(void)

undefined8 FUN_14967f656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967f68e FUN_14967f68e body=29 status=ok
// SIG undefined FUN_14967f68e(void)

bool FUN_14967f68e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14967f6ac FUN_14967f6ac body=26 status=ok
// SIG undefined FUN_14967f6ac(void)

bool FUN_14967f6ac(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14967f6c6 FUN_14967f6c6 body=24 status=ok
// SIG undefined FUN_14967f6c6(void)

bool FUN_14967f6c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14967f6de FUN_14967f6de body=101 status=ok
// SIG undefined FUN_14967f6de(void)

void FUN_14967f6de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14967f744 FUN_14967f744 body=101 status=ok
// SIG undefined FUN_14967f744(void)

void FUN_14967f744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14967f7aa FUN_14967f7aa body=134 status=ok
// SIG undefined FUN_14967f7aa(void)

void FUN_14967f7aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdabc60;
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
                    /* WARNING: Could not recover jumptable at 0x00014967f821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14967f830 FUN_14967f830 body=44 status=ok
// SIG undefined FUN_14967f830(void)

void FUN_14967f830(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014967f859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14967f85c FUN_14967f85c body=156 status=ok
// SIG undefined FUN_14967f85c(void)

bool FUN_14967f85c(longlong param_1,undefined8 param_2)

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



// FUNCTION 14967f8fa FUN_14967f8fa body=29 status=ok
// SIG undefined FUN_14967f8fa(void)

undefined8 FUN_14967f8fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967f932 FUN_14967f932 body=29 status=ok
// SIG undefined FUN_14967f932(void)

bool FUN_14967f932(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14967f950 FUN_14967f950 body=26 status=ok
// SIG undefined FUN_14967f950(void)

bool FUN_14967f950(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14967f96a FUN_14967f96a body=24 status=ok
// SIG undefined FUN_14967f96a(void)

bool FUN_14967f96a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14967f982 FUN_14967f982 body=101 status=ok
// SIG undefined FUN_14967f982(void)

void FUN_14967f982(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabcd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14967f9e8 FUN_14967f9e8 body=101 status=ok
// SIG undefined FUN_14967f9e8(void)

void FUN_14967f9e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabcd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14967fa4e FUN_14967fa4e body=134 status=ok
// SIG undefined FUN_14967fa4e(void)

void FUN_14967fa4e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdabcd0;
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
                    /* WARNING: Could not recover jumptable at 0x00014967fac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14967fad4 FUN_14967fad4 body=118 status=ok
// SIG undefined FUN_14967fad4(void)

void FUN_14967fad4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967fb4c FUN_14967fb4c body=199 status=ok
// SIG undefined FUN_14967fb4c(void)

bool FUN_14967fb4c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14967fc14 FUN_14967fc14 body=48 status=ok
// SIG undefined FUN_14967fc14(void)

void FUN_14967fc14(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 14967fc44 FUN_14967fc44 body=117 status=ok
// SIG undefined FUN_14967fc44(void)

void FUN_14967fc44(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14c8464e8;
  uVar2 = DAT_14c8464e0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_14c8464e0 = uVar2;
    DAT_14c8464e8 = uVar1;
    param_1[2] = DAT_14c8464f0;
    *param_1 = uVar2;
    param_1[1] = uVar1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0x3ff0000000000000;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0x7fefffffffffffff;
    param_1[0xc] = 0x7fefffffffffffff;
    param_1[0xd] = 0xffefffffffffffff;
    param_1[0xe] = 0xffefffffffffffff;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1 = param_1 + 0x13;
    uVar1 = DAT_14c8464e8;
    uVar2 = DAT_14c8464e0;
  }
  DAT_14c8464e0 = uVar2;
  DAT_14c8464e8 = uVar1;
  return;
}



// FUNCTION 14967fcba FUN_14967fcba body=146 status=ok
// SIG undefined FUN_14967fcba(void)

void FUN_14967fcba(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14967fd4e FUN_14967fd4e body=98 status=ok
// SIG undefined FUN_14967fd4e(void)

void FUN_14967fd4e(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x98 + *param_1);
  FUN_145d098fb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x98 + (longlong)_Dst),(longlong)iVar2 * 0x98);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14967fdb0 FUN_14967fdb0 body=62 status=ok
// SIG undefined FUN_14967fdb0(void)

void FUN_14967fdb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14967fdee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x98,8);
  }
  return;
}



// FUNCTION 14967fdee FUN_14967fdee body=110 status=ok
// SIG undefined FUN_14967fdee(void)

ulonglong FUN_14967fdee(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x98) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14967fe27;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x98,8);
      param_2 = param_2 / 0x98;
    }
  }
LAB_14967fe27:
  return param_2 & 0xffffffff;
}



// FUNCTION 14967fe5c FUN_14967fe5c body=199 status=ok
// SIG undefined FUN_14967fe5c(void)

undefined8 * FUN_14967fe5c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdabe10;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdabe30;
  param_1[7] = param_2;
  param_1[2] = &LAB_149680050;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdabe50;
  param_1[0x17] = &LAB_14968009e;
  param_1[0x12] = &LAB_1496800a6;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14967ff24 FUN_14967ff24 body=38 status=ok
// SIG undefined FUN_14967ff24(void)

undefined8 FUN_14967ff24(undefined8 param_1,int param_2)

{
  FUN_1496800fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14967ff4a FUN_14967ff4a body=207 status=ok
// SIG undefined FUN_14967ff4a(void)

void FUN_14967ff4a(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_14967fffb;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14967fffb:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968001a FUN_14968001a body=53 status=ok
// SIG undefined FUN_14968001a(void)

void FUN_14968001a(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149680080 FUN_149680080 body=29 status=ok
// SIG undefined FUN_149680080(void)

undefined8 FUN_149680080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496800dc FUN_1496800dc body=29 status=ok
// SIG undefined FUN_1496800dc(void)

undefined8 FUN_1496800dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496800fa FUN_1496800fa body=127 status=ok
// SIG undefined FUN_1496800fa(void)

void FUN_1496800fa(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdabe10;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968017a FUN_14968017a body=29 status=ok
// SIG undefined FUN_14968017a(void)

undefined8 FUN_14968017a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496801b2 FUN_1496801b2 body=29 status=ok
// SIG undefined FUN_1496801b2(void)

bool FUN_1496801b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1496801d0 FUN_1496801d0 body=26 status=ok
// SIG undefined FUN_1496801d0(void)

bool FUN_1496801d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1496801ea FUN_1496801ea body=24 status=ok
// SIG undefined FUN_1496801ea(void)

bool FUN_1496801ea(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149680202 FUN_149680202 body=101 status=ok
// SIG undefined FUN_149680202(void)

void FUN_149680202(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdabeb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149680268 FUN_149680268 body=101 status=ok
// SIG undefined FUN_149680268(void)

void FUN_149680268(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdabeb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496802ce FUN_1496802ce body=134 status=ok
// SIG undefined FUN_1496802ce(void)

void FUN_1496802ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdabeb0;
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
                    /* WARNING: Could not recover jumptable at 0x000149680345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149680354 FUN_149680354 body=39 status=ok
// SIG undefined FUN_149680354(void)

void FUN_149680354(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149680377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14968037c FUN_14968037c body=146 status=ok
// SIG undefined FUN_14968037c(void)

bool FUN_14968037c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149680410 FUN_149680410 body=112 status=ok
// SIG undefined FUN_149680410(void)

void FUN_149680410(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 149680480 FUN_149680480 body=147 status=ok
// SIG undefined FUN_149680480(void)

void FUN_149680480(longlong param_1,int param_2)

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



// FUNCTION 149680514 FUN_149680514 body=14 status=ok
// SIG undefined FUN_149680514(void)

void FUN_149680514(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
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



// FUNCTION 149680522 FUN_149680522 body=29 status=ok
// SIG undefined FUN_149680522(void)

undefined8 FUN_149680522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149680540 FUN_149680540 body=199 status=ok
// SIG undefined FUN_149680540(void)

undefined8 * FUN_149680540(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdac0b0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdac0d0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149680734;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdac0f0;
  param_1[0x17] = &LAB_149680782;
  param_1[0x12] = &LAB_14968078a;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149680608 FUN_149680608 body=38 status=ok
// SIG undefined FUN_149680608(void)

undefined8 FUN_149680608(undefined8 param_1,int param_2)

{
  FUN_1496807de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968062e FUN_14968062e body=207 status=ok
// SIG undefined FUN_14968062e(void)

void FUN_14968062e(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496806df;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496806df:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496806fe FUN_1496806fe body=53 status=ok
// SIG undefined FUN_1496806fe(void)

void FUN_1496806fe(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149680764 FUN_149680764 body=29 status=ok
// SIG undefined FUN_149680764(void)

undefined8 FUN_149680764(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496807c0 FUN_1496807c0 body=29 status=ok
// SIG undefined FUN_1496807c0(void)

undefined8 FUN_1496807c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496807de FUN_1496807de body=127 status=ok
// SIG undefined FUN_1496807de(void)

void FUN_1496807de(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdac0b0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968085e FUN_14968085e body=199 status=ok
// SIG undefined FUN_14968085e(void)

undefined8 * FUN_14968085e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdac150;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdac170;
  param_1[7] = param_2;
  param_1[2] = &LAB_149680a52;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdac190;
  param_1[0x17] = &LAB_149680aa0;
  param_1[0x12] = &LAB_149680aa8;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149680926 FUN_149680926 body=38 status=ok
// SIG undefined FUN_149680926(void)

undefined8 FUN_149680926(undefined8 param_1,int param_2)

{
  FUN_149680afc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968094c FUN_14968094c body=207 status=ok
// SIG undefined FUN_14968094c(void)

void FUN_14968094c(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_1496809fd;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496809fd:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149680a1c FUN_149680a1c body=53 status=ok
// SIG undefined FUN_149680a1c(void)

void FUN_149680a1c(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149680a82 FUN_149680a82 body=29 status=ok
// SIG undefined FUN_149680a82(void)

undefined8 FUN_149680a82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149680ade FUN_149680ade body=29 status=ok
// SIG undefined FUN_149680ade(void)

undefined8 FUN_149680ade(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149680afc FUN_149680afc body=127 status=ok
// SIG undefined FUN_149680afc(void)

void FUN_149680afc(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdac150;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 149680b7b FUN_149680b7b body=30 status=ok
// SIG undefined FUN_149680b7b(void)

void FUN_149680b7b(longlong param_1)

{
  FUN_1483a4068(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149680b9a FUN_149680b9a body=169 status=ok
// SIG undefined FUN_149680b9a(void)

undefined8 *
FUN_149680b9a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = &PTR_LAB_14bdac360;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  FUN_14850c1d2(param_1 + 1);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_14850c1d2(param_1 + 0xb,param_3);
  *(undefined4 *)(param_1 + 0x15) = param_4;
  return param_1;
}



// FUNCTION 149680c44 FUN_149680c44 body=75 status=ok
// SIG undefined FUN_149680c44(void)

undefined4 FUN_149680c44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459fa9e6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_149680c54;
  }
  param_2 = 0;
LAB_149680c54:
  return CONCAT31((int3)((uint)*(int *)(param_2 + 0x200) >> 8),
                  *(int *)(param_2 + 0x200) != *(int *)(param_1 + 0xa8));
}



// FUNCTION 149680c90 FUN_149680c90 body=38 status=ok
// SIG undefined FUN_149680c90(void)

undefined8 FUN_149680c90(undefined8 param_1,int param_2)

{
  FUN_149680cd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149680cb6 FUN_149680cb6 body=32 status=ok
// SIG undefined FUN_149680cb6(void)

undefined8 FUN_149680cb6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"ToolCommandChange");
  return param_2;
}



// FUNCTION 149680cd6 FUN_149680cd6 body=97 status=ok
// SIG undefined FUN_149680cd6(void)

void FUN_149680cd6(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bdac360;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(param_1 + 1);
  return;
}



// FUNCTION 149680d38 FUN_149680d38 body=71 status=ok
// SIG undefined FUN_149680d38(void)

void FUN_149680d38(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149680d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149680d80 FUN_149680d80 body=79 status=ok
// SIG undefined FUN_149680d80(void)

void FUN_149680d80(longlong *param_1)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 1);
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149680dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 149680dd0 FUN_149680dd0 body=544 status=ok
// SIG undefined FUN_149680dd0(void)

void FUN_149680dd0(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined1 local_c0 [24];
  uint local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((ulonglong)(uint)(*(int *)(param_1 + 200) * 0x200 + *(int *)(param_1 + 0xcc)) <=
       (ulonglong)(longlong)(int)param_2) ||
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)(param_2 >> 9) * 8) +
              (ulonglong)(param_2 & 0x1ff) * 4) == -1)) {
    local_74 = param_2;
    (*(code *)*param_3)(local_c0,param_3[1]);
    FUN_149680ff2(param_1,&local_74,local_c0);
    if (local_74 == 0xffffffff && (uStack_70 & 0xff) == 0) {
      local_78 = local_44;
      local_88 = local_54;
      uStack_84 = uStack_50;
      uStack_80 = uStack_4c;
      uStack_7c = uStack_48;
      local_98 = local_64;
      uStack_94 = uStack_60;
      uStack_90 = uStack_5c;
      uStack_8c = uStack_58;
      local_a8 = local_74;
      uStack_a4 = uStack_70;
      uStack_a0 = uStack_6c;
      uStack_9c = uStack_68;
      FUN_14968126c(param_1,param_2);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(local_74 >> 9) * 8);
      uVar4 = (ulonglong)((local_74 & 0x1ff) * 0x60);
      iVar2 = *(int *)(lVar3 + 0x48 + uVar4);
      iVar5 = 1;
      if (1 < iVar2) {
        iVar5 = iVar2;
      }
      lVar1 = param_1 + 0x60;
      if ((*(int *)(lVar3 + 0x58 + uVar4) + (iVar5 + -1) * *(int *)(param_1 + 0x60) + 1 <
           *(int *)(param_1 + 0xc)) || (*(uint *)(param_1 + 8) == (uStack_70 & 0xff))) {
        FUN_146c86ab8(param_1 + 200,&local_74,param_2);
        FUN_1496816b0(lVar1,(ulonglong)((local_74 & 0x1ff) * 0x60) +
                            *(longlong *)
                             (*(longlong *)(param_1 + 0xb8) + (ulonglong)(local_74 >> 9) * 8),
                      param_2);
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(local_74 >> 9) * 8);
        lVar6 = (ulonglong)(local_74 & 0x1ff) * 0x34;
        local_c8 = lVar3 + lVar6;
        local_d8 = param_1;
        local_d0 = param_3;
        FUN_149681318(lVar1,*(undefined4 *)(lVar3 + lVar6),&local_d8);
        FUN_146c906de(lVar1,(ulonglong)((*(uint *)(lVar3 + lVar6) & 0x1ff) * 0x60) +
                            *(longlong *)
                             (*(longlong *)(param_1 + 0xb8) +
                             (ulonglong)(*(uint *)(lVar3 + lVar6) >> 9) * 8));
        FUN_1496813ce(&local_d8,param_2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149680ff2 FUN_149680ff2 body=632 status=ok
// SIG undefined FUN_149680ff2(void)

undefined8 * FUN_149680ff2(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_c8 [44];
  int local_9c;
  int iStack_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar1 = *param_1;
  auVar18._0_8_ = *param_3 / dVar1;
  auVar18._8_8_ = 0;
  auVar19 = roundsd(auVar18,auVar18,9);
  local_9c = (int)auVar19._0_8_;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[1] / dVar1;
  auVar19 = roundsd(ZEXT816(0),auVar19,9);
  iStack_98 = (int)auVar19._0_8_;
  auVar20._0_8_ = param_3[2] / dVar1;
  auVar20._8_8_ = 0;
  auVar19 = roundsd(ZEXT816(0),auVar20,9);
  local_94 = (int)auVar19._0_8_;
  puVar13 = (uint *)FUN_146c89490(param_1 + 0x1c);
  if (puVar13 == (uint *)0x0) {
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined1 *)((longlong)param_2 + 4) = 0;
    param_2[1] = CONCAT44(iStack_98,local_9c);
    *(int *)(param_2 + 2) = local_94;
  }
  else {
    dVar1 = param_1[10];
    puVar14 = (undefined8 *)
              ((ulonglong)(*puVar13 & 0x1ff) * 0x34 +
              *(longlong *)((longlong)dVar1 + (ulonglong)(*puVar13 >> 9) * 8));
    cVar12 = FUN_14968158e(param_1,puVar14,param_3);
    if (cVar12 != '\0') {
      dVar2 = *param_1;
      dVar3 = *param_3;
      dVar4 = param_3[1];
      dVar5 = param_3[2];
      do {
        puVar15 = puVar14;
        dVar16 = dVar2 / (double)(1L << (*(byte *)((longlong)puVar15 + 4) & 0x1f));
        dVar17 = dVar16 * 0.5;
        uVar6 = *(uint *)((longlong)puVar15 +
                         (ulonglong)
                         ((uint)((double)*(int *)(puVar15 + 2) * dVar16 + dVar17 <= dVar5) << 4 |
                         (uint)(dVar17 + (double)*(int *)(puVar15 + 1) * dVar16 <= dVar3) * 4 +
                         (uint)((double)*(int *)((longlong)puVar15 + 0xc) * dVar16 + dVar17 <= dVar4
                               ) * 8) + 0x14);
        if (uVar6 == 0xffffffff) break;
        puVar14 = (undefined8 *)
                  ((ulonglong)(uVar6 & 0x1ff) * 0x34 +
                  *(longlong *)((longlong)dVar1 + (ulonglong)(uVar6 >> 9) * 8));
        cVar12 = FUN_14968158e(param_1,puVar14,param_3);
      } while (cVar12 != '\0');
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar15 + 6);
      uVar7 = *puVar15;
      uVar8 = puVar15[1];
      uVar9 = puVar15[2];
      uVar10 = puVar15[3];
      uVar11 = puVar15[5];
      param_2[4] = puVar15[4];
      param_2[5] = uVar11;
      param_2[2] = uVar9;
      param_2[3] = uVar10;
      *param_2 = uVar7;
      param_2[1] = uVar8;
      goto LAB_1496810cd;
    }
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined1 *)((longlong)param_2 + 4) = 0xff;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_2 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
LAB_1496810cd:
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968126c FUN_14968126c body=171 status=ok
// SIG undefined FUN_14968126c(void)

void FUN_14968126c(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [44];
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = param_3[4];
  uStack_44 = param_3[5];
  uStack_40 = param_3[6];
  uStack_3c = param_3[7];
  local_38 = param_3[8];
  uStack_34 = param_3[9];
  uStack_30 = param_3[10];
  uStack_2c = param_3[0xb];
  local_28 = param_3[0xc];
  local_5c = FUN_149681630();
  FUN_146c86ab8(param_1 + 200,&local_5c,param_2);
  FUN_1496816b0(param_1 + 0x60,
                (ulonglong)((local_5c & 0x1ff) * 0x60) +
                *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(local_5c >> 9) * 8),
                param_2);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149681318 FUN_149681318 body=181 status=ok
// SIG undefined FUN_149681318(void)

void FUN_149681318(int *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(param_2 >> 9) * 8);
  uVar6 = (ulonglong)((param_2 & 0x1ff) * 0x60);
  if (*(longlong *)(lVar5 + 0x50 + uVar6) != 0) {
    lVar5 = lVar5 + uVar6;
    iVar1 = *(int *)(lVar5 + 0x48);
    if (0 < (longlong)iVar1) {
      uVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar5 + 0x40);
        if (*(longlong *)(lVar5 + 0x40) == 0) {
          lVar3 = lVar5;
        }
        piVar4 = param_1;
        if (uVar6 == iVar1 - 1) {
          piVar4 = (int *)(lVar5 + 0x58);
        }
        iVar2 = *piVar4;
        if ((longlong)iVar2 != 0) {
          lVar3 = *(longlong *)(lVar3 + uVar6 * 8);
          lVar7 = 0;
          do {
            FUN_1496813ce(param_3,*(undefined4 *)(lVar3 + lVar7));
            lVar7 = lVar7 + 4;
          } while ((longlong)iVar2 * 4 != lVar7);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != (longlong)iVar1);
    }
  }
  return;
}



// FUNCTION 1496813ce FUN_1496813ce body=446 status=ok
// SIG undefined FUN_1496813ce(void)

void FUN_1496813ce(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  double *pdVar2;
  undefined4 *puVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  uint local_98;
  double local_88;
  double local_80;
  double local_78;
  undefined4 local_70;
  undefined4 local_6c;
  char local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pdVar2 = (double *)*param_1;
  local_70 = param_2;
  (**(code **)param_1[1])(&local_88,((undefined8 *)param_1[1])[1]);
  puVar3 = (undefined4 *)param_1[2];
  dVar10 = *pdVar2 / (double)(1L << (*(byte *)(puVar3 + 1) & 0x1f));
  dVar11 = dVar10 * 0.5;
  bVar5 = dVar11 + (double)(int)puVar3[2] * dVar10 <= local_88;
  bVar6 = (double)(int)puVar3[3] * dVar10 + dVar11 <= local_80;
  bVar7 = (double)(int)puVar3[4] * dVar10 + dVar11 <= local_78;
  uVar9 = (uint)bVar5 + (uint)bVar6 * 2 + (uint)bVar7 * 4;
  uVar1 = puVar3[(ulonglong)uVar9 + 5];
  if (uVar1 == 0xffffffff) {
    local_5c = (uint)bVar7 + puVar3[4] * 2;
    local_60 = (uint)bVar6 + puVar3[3] * 2;
    local_64 = (uint)bVar5 + puVar3[2] * 2;
    local_68 = *(byte *)(puVar3 + 1) + 1;
    local_6c = 0xffffffff;
    local_58 = 0xffffffff;
    uStack_54 = 0xffffffff;
    uStack_50 = 0xffffffff;
    uStack_4c = 0xffffffff;
    local_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    uStack_40 = 0xffffffff;
    uStack_3c = 0xffffffff;
    local_98 = uVar9;
    FUN_149681732(pdVar2,param_2,*puVar3);
  }
  else {
    lVar4 = *(longlong *)((longlong)pdVar2[10] + (ulonglong)(uVar1 >> 9) * 8);
    lVar8 = (ulonglong)(uVar1 & 0x1ff) * 0x34;
    FUN_146c86ab8(pdVar2 + 0x19,lVar4 + lVar8,param_2);
    uVar1 = *(uint *)(lVar4 + lVar8);
    FUN_1496816b0(pdVar2 + 0xc,
                  (ulonglong)((uVar1 & 0x1ff) * 0x60) +
                  *(longlong *)((longlong)pdVar2[0x17] + (ulonglong)(uVar1 >> 9) * 8),param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968158e FUN_14968158e body=161 status=ok
// SIG undefined FUN_14968158e(void)

byte FUN_14968158e(double *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = *param_1 / (double)(1L << (*(byte *)(param_2 + 4) & 0x1f));
  dVar1 = (double)*(int *)(param_2 + 8) * dVar2;
  if (dVar1 <= *param_3) {
    dVar3 = (double)*(int *)(param_2 + 0xc) * dVar2;
    if (dVar3 <= param_3[1]) {
      dVar4 = (double)*(int *)(param_2 + 0x10) * dVar2;
      return (param_3[2] <= dVar2 + dVar4 && dVar4 <= param_3[2]) &
             -(*param_3 <= dVar1 + dVar2) & -(param_3[1] <= dVar3 + dVar2);
    }
  }
  return 0;
}



// FUNCTION 149681630 FUN_149681630 body=126 status=ok
// SIG undefined FUN_149681630(void)

undefined4 FUN_149681630(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_146c08aba(param_1 + 0x10);
  *param_2 = uVar1;
  FUN_146c8ed90(param_1 + 0x48,param_2,uVar1);
  puVar2 = (undefined4 *)FUN_146c86d86(param_1 + 0xe0,param_2 + 2,1);
  *puVar2 = *param_2;
  FUN_146c8ee08(param_1 + 0x60,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496816b0 FUN_1496816b0 body=129 status=ok
// SIG undefined FUN_1496816b0(void)

void FUN_1496816b0(int *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x58);
  if (iVar1 == *param_1) {
    uVar2 = FUN_146c8f208();
    iVar1 = *(int *)(param_2 + 0x48);
    *(uint *)(param_2 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x4c) < iVar1 + 1U) {
      FUN_146c8f376(param_2,iVar1);
    }
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar3 = param_2;
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 8) = uVar2;
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar3 = param_2;
    }
    lVar3 = *(longlong *)(lVar3 + (longlong)(*(int *)(param_2 + 0x48) + -1) * 8);
    *(longlong *)(param_2 + 0x50) = lVar3;
    iVar1 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x50);
  }
  *(int *)(param_2 + 0x58) = iVar1 + 1;
  *(undefined4 *)(lVar3 + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 149681732 FUN_149681732 body=222 status=ok
// SIG undefined FUN_149681732(void)

void FUN_149681732(longlong param_1,undefined4 param_2,uint param_3,uint *param_4,uint param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(param_3 >> 9) * 8);
  uVar2 = FUN_146c08aba(param_1 + 0x10);
  *param_4 = uVar2;
  FUN_146c8ed90(param_1 + 0x48,param_4,uVar2);
  FUN_146c86ab8(param_1 + 200,param_4,param_2);
  FUN_146c8ee08(param_1 + 0x60,local_40,*param_4);
  FUN_1496816b0(param_1 + 0x60,
                (ulonglong)((*param_4 & 0x1ff) * 0x60) +
                *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(*param_4 >> 9) * 8),
                param_2);
  *(uint *)((ulonglong)(param_3 & 0x1ff) * 0x34 + lVar1 + 0x14 + (ulonglong)param_5 * 4) = *param_4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149681846 FUN_149681846 body=29 status=ok
// SIG undefined FUN_149681846(void)

undefined8 FUN_149681846(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496818d6 FUN_1496818d6 body=29 status=ok
// SIG undefined FUN_1496818d6(void)

undefined8 FUN_1496818d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496818f4 FUN_1496818f4 body=103 status=ok
// SIG undefined FUN_1496818f4(void)

undefined8 * FUN_1496818f4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
  local_20 = *(longlong *)(lVar1 + 0x80);
  if (local_20 == 0) {
    local_20 = lVar1;
  }
  local_20 = local_20 + 0x20;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_149681a1e();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968195c FUN_14968195c body=163 status=ok
// SIG undefined FUN_14968195c(void)

undefined8 * FUN_14968195c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
  lVar4 = *(longlong *)(lVar1 + 0x80);
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  FUN_146faa024(lVar4 + 0x20,&local_30);
  if (local_30 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *puVar3 = &PTR_FUN_14bdac440;
    puVar3[1] = uVar2;
    puVar3[2] = param_3;
    puVar3[3] = local_30;
  }
  *param_2 = puVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149681a1e FUN_149681a1e body=284 status=ok
// SIG undefined FUN_149681a1e(void)

void FUN_149681a1e(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      local_88 = *param_2;
      uStack_84 = param_2[1];
      uStack_80 = param_2[2];
      uStack_7c = param_2[3];
      (*(code *)(&PTR_LAB_14bdac400)
                [*(uint *)(*(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18) + 8)])
                (*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x18));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149681b3c FUN_149681b3c body=69 status=ok
// SIG undefined FUN_149681b3c(void)

void FUN_149681b3c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681b82 FUN_149681b82 body=69 status=ok
// SIG undefined FUN_149681b82(void)

void FUN_149681b82(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681bc8 FUN_149681bc8 body=69 status=ok
// SIG undefined FUN_149681bc8(void)

void FUN_149681bc8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681c0e FUN_149681c0e body=69 status=ok
// SIG undefined FUN_149681c0e(void)

void FUN_149681c0e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681c54 FUN_149681c54 body=69 status=ok
// SIG undefined FUN_149681c54(void)

void FUN_149681c54(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681c9a FUN_149681c9a body=69 status=ok
// SIG undefined FUN_149681c9a(void)

void FUN_149681c9a(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681ce0 FUN_149681ce0 body=69 status=ok
// SIG undefined FUN_149681ce0(void)

void FUN_149681ce0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681d26 FUN_149681d26 body=69 status=ok
// SIG undefined FUN_149681d26(void)

void FUN_149681d26(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681d6c FUN_149681d6c body=69 status=ok
// SIG undefined FUN_149681d6c(void)

void FUN_149681d6c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681db2 FUN_149681db2 body=69 status=ok
// SIG undefined FUN_149681db2(void)

void FUN_149681db2(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681df8 FUN_149681df8 body=69 status=ok
// SIG undefined FUN_149681df8(void)

void FUN_149681df8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681e3e FUN_149681e3e body=69 status=ok
// SIG undefined FUN_149681e3e(void)

void FUN_149681e3e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681e84 FUN_149681e84 body=69 status=ok
// SIG undefined FUN_149681e84(void)

void FUN_149681e84(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681eca FUN_149681eca body=69 status=ok
// SIG undefined FUN_149681eca(void)

void FUN_149681eca(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681f10 FUN_149681f10 body=69 status=ok
// SIG undefined FUN_149681f10(void)

void FUN_149681f10(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681f56 FUN_149681f56 body=69 status=ok
// SIG undefined FUN_149681f56(void)

void FUN_149681f56(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681f9c FUN_149681f9c body=69 status=ok
// SIG undefined FUN_149681f9c(void)

void FUN_149681f9c(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149681fe2 FUN_149681fe2 body=69 status=ok
// SIG undefined FUN_149681fe2(void)

void FUN_149681fe2(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149682028 FUN_149682028 body=69 status=ok
// SIG undefined FUN_149682028(void)

void FUN_149682028(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 14968206e FUN_14968206e body=69 status=ok
// SIG undefined FUN_14968206e(void)

void FUN_14968206e(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1496820b4 FUN_1496820b4 body=69 status=ok
// SIG undefined FUN_1496820b4(void)

void FUN_1496820b4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1496820fa FUN_1496820fa body=69 status=ok
// SIG undefined FUN_1496820fa(void)

void FUN_1496820fa(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149682140 FUN_149682140 body=69 status=ok
// SIG undefined FUN_149682140(void)

void FUN_149682140(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 149682186 FUN_149682186 body=69 status=ok
// SIG undefined FUN_149682186(void)

void FUN_149682186(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_146fb173c(*param_1);
  if (cVar3 != '\0') {
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1496821cc FUN_1496821cc body=29 status=ok
// SIG undefined FUN_1496821cc(void)

undefined8 FUN_1496821cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968224c FUN_14968224c body=290 status=ok
// SIG undefined FUN_14968224c(void)

longlong * FUN_14968224c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968236f FUN_14968236f body=22 status=ok
// SIG undefined FUN_14968236f(void)

void FUN_14968236f(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x30);
    return;
  }
  return;
}



// FUNCTION 149682386 FUN_149682386 body=147 status=ok
// SIG undefined FUN_149682386(void)

void FUN_149682386(longlong param_1,int param_2)

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



// FUNCTION 14968241a FUN_14968241a body=101 status=ok
// SIG undefined FUN_14968241a(void)

void FUN_14968241a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_145bc96d5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149682480 FUN_149682480 body=62 status=ok
// SIG undefined FUN_149682480(void)

void FUN_149682480(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496824be(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1496824be FUN_1496824be body=112 status=ok
// SIG undefined FUN_1496824be(void)

ulonglong FUN_1496824be(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1496824f8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1496824f8:
  return param_2 & 0xffffffff;
}



// FUNCTION 14968252e FUN_14968252e body=390 status=ok
// SIG undefined FUN_14968252e(void)

void FUN_14968252e(longlong *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_2;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    plVar4 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[9];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar2 = param_1[1];
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x10;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x10) == param_2) {
          if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
            *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + (longlong)*(int *)(lVar1 + 4) * 4) =
                 *param_4;
            goto LAB_149682618;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  local_50 = *(undefined4 *)(*param_1 + 0x10);
  local_40 = &local_50;
  local_48 = &local_4c;
  FUN_140263e2a(param_1 + 1,local_34,&local_48,0);
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 8),iVar3);
  }
  *(uint *)(*(longlong *)(lVar2 + 8) + (longlong)iVar3 * 4) = local_4c;
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 0x20);
  *(uint *)(lVar2 + 0x20) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0x24) < iVar3 + 1U) {
    FUN_14475e4ac((longlong *)(lVar2 + 0x18),iVar3);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar3 * 4) = *param_3;
  lVar2 = *param_1;
  iVar3 = *(int *)(lVar2 + 0x30);
  *(uint *)(lVar2 + 0x30) = iVar3 + 1U;
  if (*(uint *)(lVar2 + 0x34) < iVar3 + 1U) {
    FUN_14475e4ac((longlong *)(lVar2 + 0x28),iVar3);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar3 * 4) = *param_4;
LAB_149682618:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496826b6 FUN_1496826b6 body=130 status=ok
// SIG undefined FUN_1496826b6(void)

void FUN_1496826b6(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x40);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    local_38 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_48 = param_1 + 0x28;
    (*pcVar1)(uVar2,&local_38,param_1 + 0x38,param_1 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968273a FUN_14968273a body=139 status=ok
// SIG undefined FUN_14968273a(void)

void FUN_14968273a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = *(code **)(param_1 + 0x80);
  if (pcVar1 != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x90);
    }
    local_38 = param_2;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_48 = param_1 + 0x18;
    (*pcVar1)(uVar2,&local_38,param_1 + 0x38,param_1 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496827c6 FUN_1496827c6 body=32 status=ok
// SIG undefined FUN_1496827c6(void)

undefined8 FUN_1496827c6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Paint Attribute");
  return param_2;
}



// FUNCTION 1496827e6 FUN_1496827e6 body=38 status=ok
// SIG undefined FUN_1496827e6(void)

undefined8 FUN_1496827e6(undefined8 param_1,int param_2)

{
  FUN_14968289c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968280c FUN_14968280c body=32 status=ok
// SIG undefined FUN_14968280c(void)

undefined8 FUN_14968280c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Indexed Values Change");
  return param_2;
}



// FUNCTION 14968282c FUN_14968282c body=38 status=ok
// SIG undefined FUN_14968282c(void)

undefined8 FUN_14968282c(undefined8 param_1,int param_2)

{
  FUN_14968289c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149682854 FUN_149682854 body=72 status=ok
// SIG undefined FUN_149682854(void)

void FUN_149682854(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bdac550;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14968289c FUN_14968289c body=96 status=ok
// SIG undefined FUN_14968289c(void)

void FUN_14968289c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdac500;
  if (param_1[0x10] != 0) {
    plVar1 = param_1 + 0x14;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_149682854(param_1);
  return;
}



// FUNCTION 14968292a FUN_14968292a body=29 status=ok
// SIG undefined FUN_14968292a(void)

undefined8 FUN_14968292a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149682948 FUN_149682948 body=38 status=ok
// SIG undefined FUN_149682948(void)

undefined8 FUN_149682948(undefined8 param_1,int param_2)

{
  FUN_145aba0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496829b8 FUN_1496829b8 body=29 status=ok
// SIG undefined FUN_1496829b8(void)

undefined8 FUN_1496829b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496829f0 FUN_1496829f0 body=29 status=ok
// SIG undefined FUN_1496829f0(void)

bool FUN_1496829f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149682a0e FUN_149682a0e body=26 status=ok
// SIG undefined FUN_149682a0e(void)

bool FUN_149682a0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149682a28 FUN_149682a28 body=24 status=ok
// SIG undefined FUN_149682a28(void)

bool FUN_149682a28(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149682a40 FUN_149682a40 body=101 status=ok
// SIG undefined FUN_149682a40(void)

void FUN_149682a40(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdac660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149682aa6 FUN_149682aa6 body=101 status=ok
// SIG undefined FUN_149682aa6(void)

void FUN_149682aa6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdac660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149682b0c FUN_149682b0c body=134 status=ok
// SIG undefined FUN_149682b0c(void)

void FUN_149682b0c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdac660;
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
                    /* WARNING: Could not recover jumptable at 0x000149682b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149682b92 FUN_149682b92 body=39 status=ok
// SIG undefined FUN_149682b92(void)

void FUN_149682b92(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149682bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 149682bba FUN_149682bba body=146 status=ok
// SIG undefined FUN_149682bba(void)

bool FUN_149682bba(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149682c4e FUN_149682c4e body=91 status=ok
// SIG undefined FUN_149682c4e(void)

void FUN_149682c4e(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 2);
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000149682c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
    return;
  }
  return;
}



// FUNCTION 149682caa FUN_149682caa body=29 status=ok
// SIG undefined FUN_149682caa(void)

undefined8 FUN_149682caa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149682ce2 FUN_149682ce2 body=29 status=ok
// SIG undefined FUN_149682ce2(void)

bool FUN_149682ce2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149682d00 FUN_149682d00 body=26 status=ok
// SIG undefined FUN_149682d00(void)

bool FUN_149682d00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149682d1a FUN_149682d1a body=24 status=ok
// SIG undefined FUN_149682d1a(void)

bool FUN_149682d1a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149682d32 FUN_149682d32 body=101 status=ok
// SIG undefined FUN_149682d32(void)

void FUN_149682d32(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdac6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149682d98 FUN_149682d98 body=101 status=ok
// SIG undefined FUN_149682d98(void)

void FUN_149682d98(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdac6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149682dfe FUN_149682dfe body=134 status=ok
// SIG undefined FUN_149682dfe(void)

void FUN_149682dfe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdac6d0;
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
                    /* WARNING: Could not recover jumptable at 0x000149682e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149682e84 FUN_149682e84 body=39 status=ok
// SIG undefined FUN_149682e84(void)

void FUN_149682e84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149682ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 149682eac FUN_149682eac body=146 status=ok
// SIG undefined FUN_149682eac(void)

bool FUN_149682eac(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149682f40 FUN_149682f40 body=230 status=ok
// SIG undefined FUN_149682f40(void)

undefined8 * FUN_149682f40(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149683028 FUN_149683028 body=29 status=ok
// SIG undefined FUN_149683028(void)

undefined8 FUN_149683028(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683060 FUN_149683060 body=29 status=ok
// SIG undefined FUN_149683060(void)

bool FUN_149683060(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14968307e FUN_14968307e body=26 status=ok
// SIG undefined FUN_14968307e(void)

bool FUN_14968307e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149683098 FUN_149683098 body=24 status=ok
// SIG undefined FUN_149683098(void)

bool FUN_149683098(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1496830bc FUN_1496830bc body=101 status=ok
// SIG undefined FUN_1496830bc(void)

void FUN_1496830bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdac7f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdac780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149683122 FUN_149683122 body=101 status=ok
// SIG undefined FUN_149683122(void)

void FUN_149683122(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdac7f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdac780;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149683188 FUN_149683188 body=134 status=ok
// SIG undefined FUN_149683188(void)

void FUN_149683188(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bdac7f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdac780;
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
                    /* WARNING: Could not recover jumptable at 0x0001496831ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14968320e FUN_14968320e body=52 status=ok
// SIG undefined FUN_14968320e(void)

void FUN_14968320e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014968323f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149683242 FUN_149683242 body=167 status=ok
// SIG undefined FUN_149683242(void)

bool FUN_149683242(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496832ec FUN_1496832ec body=199 status=ok
// SIG undefined FUN_1496832ec(void)

undefined8 * FUN_1496832ec(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdac880;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdac8a0;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496834e0;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdac8c0;
  param_1[0x17] = &LAB_14968352e;
  param_1[0x12] = &LAB_149683536;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496833b4 FUN_1496833b4 body=38 status=ok
// SIG undefined FUN_1496833b4(void)

undefined8 FUN_1496833b4(undefined8 param_1,int param_2)

{
  FUN_14968358a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496833da FUN_1496833da body=207 status=ok
// SIG undefined FUN_1496833da(void)

void FUN_1496833da(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_14968348b;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14968348b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496834aa FUN_1496834aa body=53 status=ok
// SIG undefined FUN_1496834aa(void)

void FUN_1496834aa(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149683510 FUN_149683510 body=29 status=ok
// SIG undefined FUN_149683510(void)

undefined8 FUN_149683510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968356c FUN_14968356c body=29 status=ok
// SIG undefined FUN_14968356c(void)

undefined8 FUN_14968356c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968358a FUN_14968358a body=127 status=ok
// SIG undefined FUN_14968358a(void)

void FUN_14968358a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdac880;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 14968360a FUN_14968360a body=83 status=ok
// SIG undefined FUN_14968360a(void)

undefined8 * FUN_14968360a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968369a FUN_14968369a body=133 status=ok
// SIG undefined FUN_14968369a(void)

void FUN_14968369a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 8);
  iVar3 = (**(code **)(*plVar5 + 0x2e0))(plVar5);
  lVar2 = param_4[1];
  if (0 < (longlong)(int)lVar2) {
    cVar1 = *(char *)((longlong)plVar5 + 0xac);
    lVar7 = 0;
    do {
      iVar4 = FUN_146bc96d4(param_2,*(undefined4 *)(*param_4 + lVar7 * 4));
      iVar6 = iVar3;
      if (iVar4 != 0) {
        iVar6 = iVar4;
      }
      if (cVar1 == '\0') {
        iVar6 = iVar3;
      }
      *(int *)(*param_5 + lVar7 * 4) = iVar6;
      lVar7 = lVar7 + 1;
    } while ((int)lVar2 != lVar7);
  }
  return;
}



// FUNCTION 149683722 FUN_149683722 body=71 status=ok
// SIG undefined FUN_149683722(void)

undefined8 * FUN_149683722(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdaca18;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14968376a FUN_14968376a body=52 status=ok
// SIG undefined FUN_14968376a(void)

undefined8 FUN_14968376a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2);
  return param_2;
}



// FUNCTION 14968379e FUN_14968379e body=29 status=ok
// SIG undefined FUN_14968379e(void)

undefined8 FUN_14968379e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496837bc FUN_1496837bc body=102 status=ok
// SIG undefined FUN_1496837bc(void)

undefined8 * FUN_1496837bc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdaca60;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 149683822 FUN_149683822 body=83 status=ok
// SIG undefined FUN_149683822(void)

undefined8 * FUN_149683822(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bdac9c0;
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683876 FUN_149683876 body=182 status=ok
// SIG undefined FUN_149683876(void)

void FUN_149683876(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  
  plVar7 = (longlong *)FUN_14479d2ce(param_1 + 8);
  iVar4 = (**(code **)(*plVar7 + 0x2e0))(plVar7);
  cVar1 = *(char *)((longlong)plVar7 + 0xac);
  pcVar2 = (code *)plVar7[0x16];
  plVar11 = plVar7 + 0x1a;
  if ((longlong *)plVar7[0x18] != (longlong *)0x0) {
    plVar11 = (longlong *)plVar7[0x18];
  }
  uVar8 = (**(code **)(*plVar11 + 8))(plVar11);
  iVar5 = (*pcVar2)(uVar8);
  lVar3 = param_4[1];
  if (0 < (longlong)(int)lVar3) {
    lVar10 = 0;
    do {
      iVar6 = FUN_146bc96d4(param_2,*(undefined4 *)(*param_4 + lVar10 * 4));
      iVar9 = iVar4;
      if (iVar6 != iVar5) {
        iVar9 = iVar6;
      }
      if (cVar1 == '\0') {
        iVar9 = iVar4;
      }
      *(int *)(*param_5 + lVar10 * 4) = iVar9;
      lVar10 = lVar10 + 1;
    } while ((int)lVar3 != lVar10);
  }
  return;
}



// FUNCTION 14968392c FUN_14968392c body=199 status=ok
// SIG undefined FUN_14968392c(void)

undefined8 * FUN_14968392c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdacac0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdacae0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149683b20;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdacb00;
  param_1[0x17] = &LAB_149683b6e;
  param_1[0x12] = &LAB_149683b76;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496839f4 FUN_1496839f4 body=38 status=ok
// SIG undefined FUN_1496839f4(void)

undefined8 FUN_1496839f4(undefined8 param_1,int param_2)

{
  FUN_149683bca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683a1a FUN_149683a1a body=207 status=ok
// SIG undefined FUN_149683a1a(void)

void FUN_149683a1a(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_149683acb;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149683acb:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149683aea FUN_149683aea body=53 status=ok
// SIG undefined FUN_149683aea(void)

void FUN_149683aea(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149683b50 FUN_149683b50 body=29 status=ok
// SIG undefined FUN_149683b50(void)

undefined8 FUN_149683b50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683bac FUN_149683bac body=29 status=ok
// SIG undefined FUN_149683bac(void)

undefined8 FUN_149683bac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683bca FUN_149683bca body=127 status=ok
// SIG undefined FUN_149683bca(void)

void FUN_149683bca(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdacac0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 149683c4a FUN_149683c4a body=130 status=ok
// SIG undefined FUN_149683c4a(void)

void FUN_149683c4a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 0;
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  local_40 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_48 = &local_31;
  (*pcVar1)(uVar2,&local_40,param_1 + 8,param_1 + 0x18);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149683cce FUN_149683cce body=130 status=ok
// SIG undefined FUN_149683cce(void)

void FUN_149683cce(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 1;
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  local_40 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_48 = &local_31;
  (*pcVar1)(uVar2,&local_40,param_1 + 0x18,param_1 + 8);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149683d52 FUN_149683d52 body=38 status=ok
// SIG undefined FUN_149683d52(void)

undefined8 FUN_149683d52(undefined8 param_1,int param_2)

{
  FUN_149683d78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683d78 FUN_149683d78 body=86 status=ok
// SIG undefined FUN_149683d78(void)

void FUN_149683d78(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdacc00;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149683dce FUN_149683dce body=171 status=ok
// SIG undefined FUN_149683dce(void)

void FUN_149683dce(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_2a = 0;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_2a);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_29 = 0;
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149683e7a FUN_149683e7a body=171 status=ok
// SIG undefined FUN_149683e7a(void)

void FUN_149683e7a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x10);
  if (pcVar1 != (code *)0x0) {
    local_2a = 1;
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&local_2a);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    local_29 = 1;
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x60);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    (*pcVar1)(uVar2,&local_29);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149683f26 FUN_149683f26 body=27 status=ok
// SIG undefined FUN_149683f26(void)

undefined8 FUN_149683f26(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return param_2;
}



// FUNCTION 149683f42 FUN_149683f42 body=38 status=ok
// SIG undefined FUN_149683f42(void)

undefined8 FUN_149683f42(undefined8 param_1,int param_2)

{
  FUN_149683f68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149683f68 FUN_149683f68 body=110 status=ok
// SIG undefined FUN_149683f68(void)

void FUN_149683f68(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdacc90;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149683fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 149683fd6 FUN_149683fd6 body=130 status=ok
// SIG undefined FUN_149683fd6(void)

void FUN_149683fd6(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 0;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_48 = &local_31;
  (*pcVar1)(uVar2,&local_40,param_1 + 8,param_1 + 0xc);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968405a FUN_14968405a body=130 status=ok
// SIG undefined FUN_14968405a(void)

void FUN_14968405a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 1;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  local_40 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_48 = &local_31;
  (*pcVar1)(uVar2,&local_40,param_1 + 0xc,param_1 + 8);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496840de FUN_1496840de body=71 status=ok
// SIG undefined FUN_1496840de(void)

undefined8 * FUN_1496840de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14bdacd00;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149684126 FUN_149684126 body=31 status=ok
// SIG undefined FUN_149684126(void)

undefined8 FUN_149684126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149684162 FUN_149684162 body=93 status=ok
// SIG undefined FUN_149684162(void)

void FUN_149684162(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdacdf0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1496841c0 FUN_1496841c0 body=126 status=ok
// SIG undefined FUN_1496841c0(void)

void FUN_1496841c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdacdf0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014968422f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14968423e FUN_14968423e body=21 status=ok
// SIG undefined FUN_14968423e(void)

undefined8 FUN_14968423e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149684254 FUN_149684254 body=230 status=ok
// SIG undefined FUN_149684254(void)

undefined8 * FUN_149684254(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14968434a FUN_14968434a body=199 status=ok
// SIG undefined FUN_14968434a(void)

undefined8 * FUN_14968434a(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bdad050;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bdad070;
  param_1[7] = param_2;
  param_1[2] = &LAB_14968453e;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bdad090;
  param_1[0x17] = &LAB_14968458c;
  param_1[0x12] = &LAB_149684594;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149684412 FUN_149684412 body=38 status=ok
// SIG undefined FUN_149684412(void)

undefined8 FUN_149684412(undefined8 param_1,int param_2)

{
  FUN_1496845e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149684438 FUN_149684438 body=207 status=ok
// SIG undefined FUN_149684438(void)

void FUN_149684438(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_1496844e9;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_1496844e9:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149684508 FUN_149684508 body=53 status=ok
// SIG undefined FUN_149684508(void)

void FUN_149684508(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 14968456e FUN_14968456e body=29 status=ok
// SIG undefined FUN_14968456e(void)

undefined8 FUN_14968456e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496845ca FUN_1496845ca body=29 status=ok
// SIG undefined FUN_1496845ca(void)

undefined8 FUN_1496845ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496845e8 FUN_1496845e8 body=127 status=ok
// SIG undefined FUN_1496845e8(void)

void FUN_1496845e8(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bdad050;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 149684668 FUN_149684668 body=154 status=ok
// SIG undefined FUN_149684668(void)

void FUN_149684668(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar8 = 8;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar8);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_144729dda(lVar2);
      if (cVar5 != '\0') {
        plVar4 = *(longlong **)(lVar2 + 8);
        uVar6 = FUN_14479d2ce(lVar2);
        (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
      }
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
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 149684702 FUN_149684702 body=157 status=ok
// SIG undefined FUN_149684702(void)

void FUN_149684702(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)*(int *)(param_1 + 0x10);
  if (0 < lVar8) {
    uVar7 = lVar8 + 1;
    lVar8 = lVar8 * 0x10 + -8;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar8);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + lVar8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      cVar5 = FUN_144729dda(lVar2);
      if (cVar5 != '\0') {
        plVar4 = *(longlong **)(lVar2 + 8);
        uVar6 = FUN_14479d2ce(lVar2);
        (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
      }
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
      uVar7 = uVar7 - 1;
      lVar8 = lVar8 + -0x10;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 1496847a0 FUN_1496847a0 body=299 status=ok
// SIG undefined FUN_1496847a0(void)

longlong * FUN_1496847a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(param_2,L"FCommandChangeSequence: ");
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar2) + 8);
      (**(code **)(*plVar1 + 0x30))(plVar1,local_78);
      FUN_1407ec8fc(local_68,param_2,local_78);
      FUN_144a882a8(&local_58,local_68,&DAT_149e001d8);
      if (&local_58 == param_2) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_58;
        local_58 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_50;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
        local_50 = 0;
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1496848cc FUN_1496848cc body=69 status=ok
// SIG undefined FUN_1496848cc(void)

undefined8 * FUN_1496848cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bdae7d0;
  FUN_149684911(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149684911 FUN_149684911 body=73 status=ok
// SIG undefined FUN_149684911(void)

void FUN_149684911(longlong param_1,int param_2)

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



// FUNCTION 14968495a FUN_14968495a body=30 status=ok
// SIG undefined FUN_14968495a(void)

void FUN_14968495a(longlong param_1)

{
  FUN_148516e48(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149684978 FUN_149684978 body=29 status=ok
// SIG undefined FUN_149684978(void)

undefined8 FUN_149684978(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496849b0 FUN_1496849b0 body=29 status=ok
// SIG undefined FUN_1496849b0(void)

bool FUN_1496849b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1496849ce FUN_1496849ce body=26 status=ok
// SIG undefined FUN_1496849ce(void)

bool FUN_1496849ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1496849e8 FUN_1496849e8 body=24 status=ok
// SIG undefined FUN_1496849e8(void)

bool FUN_1496849e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149684a00 FUN_149684a00 body=101 status=ok
// SIG undefined FUN_149684a00(void)

void FUN_149684a00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149684a66 FUN_149684a66 body=101 status=ok
// SIG undefined FUN_149684a66(void)

void FUN_149684a66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149684acc FUN_149684acc body=134 status=ok
// SIG undefined FUN_149684acc(void)

void FUN_149684acc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdad230;
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
                    /* WARNING: Could not recover jumptable at 0x000149684b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149684b52 FUN_149684b52 body=118 status=ok
// SIG undefined FUN_149684b52(void)

void FUN_149684b52(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149684bca FUN_149684bca body=199 status=ok
// SIG undefined FUN_149684bca(void)

bool FUN_149684bca(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149684c92 FUN_149684c92 body=79 status=ok
// SIG undefined FUN_149684c92(void)

void FUN_149684c92(longlong *param_1)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 1);
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149684cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 149684ce2 FUN_149684ce2 body=29 status=ok
// SIG undefined FUN_149684ce2(void)

undefined8 FUN_149684ce2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149684d1a FUN_149684d1a body=29 status=ok
// SIG undefined FUN_149684d1a(void)

bool FUN_149684d1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149684d38 FUN_149684d38 body=26 status=ok
// SIG undefined FUN_149684d38(void)

bool FUN_149684d38(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149684d52 FUN_149684d52 body=24 status=ok
// SIG undefined FUN_149684d52(void)

bool FUN_149684d52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149684d6a FUN_149684d6a body=101 status=ok
// SIG undefined FUN_149684d6a(void)

void FUN_149684d6a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdad3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149684dd0 FUN_149684dd0 body=101 status=ok
// SIG undefined FUN_149684dd0(void)

void FUN_149684dd0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdad3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149684e36 FUN_149684e36 body=134 status=ok
// SIG undefined FUN_149684e36(void)

void FUN_149684e36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdad3f0;
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
                    /* WARNING: Could not recover jumptable at 0x000149684ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149684ebc FUN_149684ebc body=39 status=ok
// SIG undefined FUN_149684ebc(void)

void FUN_149684ebc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149684edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 149684ee4 FUN_149684ee4 body=146 status=ok
// SIG undefined FUN_149684ee4(void)

bool FUN_149684ee4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149684f78 FUN_149684f78 body=29 status=ok
// SIG undefined FUN_149684f78(void)

undefined8 FUN_149684f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149684fb0 FUN_149684fb0 body=29 status=ok
// SIG undefined FUN_149684fb0(void)

bool FUN_149684fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}


