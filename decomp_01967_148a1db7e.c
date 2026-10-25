// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a1db7e FUN_148a1db7e body=142 status=ok
// SIG undefined FUN_148a1db7e(void)

bool FUN_148a1db7e(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148a1dc28 FUN_148a1dc28 body=29 status=ok
// SIG undefined FUN_148a1dc28(void)

bool FUN_148a1dc28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1dc46 FUN_148a1dc46 body=26 status=ok
// SIG undefined FUN_148a1dc46(void)

bool FUN_148a1dc46(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a1dc60 FUN_148a1dc60 body=93 status=ok
// SIG undefined FUN_148a1dc60(void)

void FUN_148a1dc60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa6c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1dcbe FUN_148a1dcbe body=93 status=ok
// SIG undefined FUN_148a1dcbe(void)

void FUN_148a1dcbe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa6c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1dd1c FUN_148a1dd1c body=126 status=ok
// SIG undefined FUN_148a1dd1c(void)

void FUN_148a1dd1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa6c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1dd8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1dd9a FUN_148a1dd9a body=38 status=ok
// SIG undefined FUN_148a1dd9a(void)

void FUN_148a1dd9a(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1ddbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a1ddda FUN_148a1ddda body=93 status=ok
// SIG undefined FUN_148a1ddda(void)

void FUN_148a1ddda(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aa7a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1de38 FUN_148a1de38 body=126 status=ok
// SIG undefined FUN_148a1de38(void)

void FUN_148a1de38(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa7a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1dea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1deb6 FUN_148a1deb6 body=35 status=ok
// SIG undefined FUN_148a1deb6(void)

void FUN_148a1deb6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1ded5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a1deda FUN_148a1deda body=29 status=ok
// SIG undefined FUN_148a1deda(void)

undefined8 FUN_148a1deda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1df12 FUN_148a1df12 body=29 status=ok
// SIG undefined FUN_148a1df12(void)

bool FUN_148a1df12(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1df30 FUN_148a1df30 body=26 status=ok
// SIG undefined FUN_148a1df30(void)

bool FUN_148a1df30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a1df4a FUN_148a1df4a body=24 status=ok
// SIG undefined FUN_148a1df4a(void)

bool FUN_148a1df4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a1df62 FUN_148a1df62 body=93 status=ok
// SIG undefined FUN_148a1df62(void)

void FUN_148a1df62(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aa810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1dfc0 FUN_148a1dfc0 body=93 status=ok
// SIG undefined FUN_148a1dfc0(void)

void FUN_148a1dfc0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aa810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1e01e FUN_148a1e01e body=126 status=ok
// SIG undefined FUN_148a1e01e(void)

void FUN_148a1e01e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa810;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1e08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1e09c FUN_148a1e09c body=35 status=ok
// SIG undefined FUN_148a1e09c(void)

void FUN_148a1e09c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1e0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a1e0c0 FUN_148a1e0c0 body=142 status=ok
// SIG undefined FUN_148a1e0c0(void)

bool FUN_148a1e0c0(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 148a1e156 FUN_148a1e156 body=40 status=ok
// SIG undefined FUN_148a1e156(void)

void FUN_148a1e156(longlong param_1)

{
  if (*(char *)(param_1 + 0xad) == '\0') {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa0) ^ 0x80000000;
    *(undefined1 *)(param_1 + 0xad) = 1;
  }
  return;
}



// FUNCTION 148a1e17e FUN_148a1e17e body=123 status=ok
// SIG undefined FUN_148a1e17e(void)

void FUN_148a1e17e(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148a262b6(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x48) = param_2;
    FUN_148a2632c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148a1e1fa FUN_148a1e1fa body=144 status=ok
// SIG undefined FUN_148a1e1fa(void)

byte FUN_148a1e1fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  byte bVar5;
  
  plVar3 = (longlong *)FUN_148a263d2(param_3);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (0 < *(int *)(uVar4 + 0xa8)) {
    uVar4 = *(ulonglong *)(uVar4 + 0xa0);
    lVar1 = *(longlong *)(uVar4 + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_148a1e272;
    bVar2 = *(byte *)(lVar1 + 0xbd8);
    uVar4 = (ulonglong)bVar2;
    if ((int)(uint)bVar2 < *(int *)(lVar1 + 0xbf0)) {
      uVar4 = (ulonglong)bVar2 * 0x80 + uVar4 * 8;
      plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0xbe8) + 0x10 + uVar4);
      if (plVar3 != (longlong *)0x0) {
        bVar2 = (**(code **)(*plVar3 + 0x318))();
        bVar5 = 1;
        goto LAB_148a1e274;
      }
    }
  }
LAB_148a1e272:
  bVar2 = (byte)uVar4;
  bVar5 = 0;
LAB_148a1e274:
  return bVar2 & bVar5;
}



// FUNCTION 148a1e28a FUN_148a1e28a body=128 status=ok
// SIG undefined FUN_148a1e28a(void)

bool FUN_148a1e28a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  
  lVar1 = FUN_14095be44(param_3);
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0xb18) == 0)) ||
     (*(longlong **)(lVar1 + 0xb20) == (longlong *)0x0)) {
    bVar6 = false;
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb20) + 0x18))();
    iVar4 = 0x7fffffff;
    if (0 < (int)*(uint *)(lVar2 + 0xa8)) {
      plVar5 = (longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x28);
      uVar3 = 0;
      do {
        if ((plVar5[-1] == lVar1) || (*plVar5 == lVar1)) {
          iVar4 = (int)uVar3;
          break;
        }
        uVar3 = uVar3 + 1;
        plVar5 = plVar5 + 0x2e;
      } while (*(uint *)(lVar2 + 0xa8) != uVar3);
    }
    bVar6 = iVar4 == *(int *)(param_1 + 0x10);
  }
  return bVar6;
}



// FUNCTION 148a1e30a FUN_148a1e30a body=178 status=ok
// SIG undefined FUN_148a1e30a(void)

bool FUN_148a1e30a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((-1 < *(int *)(param_1 + 0x10)) &&
      (plVar3 = (longlong *)FUN_148a263d2(param_3), plVar3 != (longlong *)0x0)) &&
     (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), 0 < *(int *)(lVar4 + 0xa8))) {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
      FUN_1456cec3c(lVar4);
    }
    else if (lVar4 == 0) {
      return false;
    }
    bVar1 = *(byte *)(lVar4 + 0xbd8);
    if ((((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) &&
        (plVar3 = *(longlong **)
                   (*(longlong *)(lVar4 + 0xbe8) + 0x10 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) &&
       (iVar2 = (**(code **)(*plVar3 + 0x2c0))(), -1 < iVar2)) {
      if (*(char *)(param_1 + 0x14) != '\x01') {
        return iVar2 <= *(int *)(param_1 + 0x10);
      }
      return *(int *)(param_1 + 0x10) <= iVar2;
    }
  }
  return false;
}



// FUNCTION 148a1e3e4 FUN_148a1e3e4 body=99 status=ok
// SIG undefined FUN_148a1e3e4(void)

void FUN_148a1e3e4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb94c08);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb94c10);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  FUN_147f573da(param_1,param_2);
  return;
}



// FUNCTION 148a1e448 FUN_148a1e448 body=183 status=ok
// SIG undefined FUN_148a1e448(void)

void FUN_148a1e448(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14066e964();
  uVar1 = FUN_140343d7a(param_1);
  local_40 = uVar1;
  FUN_148a1e500(&local_38);
  *(undefined4 *)(param_1 + 0xd8) = local_38;
  *(undefined4 *)(param_1 + 0xdc) = uStack_34;
  *(undefined4 *)(param_1 + 0xe0) = uStack_30;
  *(undefined4 *)(param_1 + 0xe4) = uStack_2c;
  lVar2 = FUN_140519fd4(uVar1);
  if (lVar2 != 0) {
    FUN_148a26402(&local_38,param_1);
    FUN_140d0168e(lVar2,&local_48,&local_38);
    FUN_1449db362(&local_38);
    *(undefined8 *)(param_1 + 0xe8) = local_48;
  }
  FUN_148a1e562(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1e500 FUN_148a1e500 body=74 status=ok
// SIG undefined FUN_148a1e500(void)

undefined8 * FUN_148a1e500(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_14058c734();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 148a1e562 FUN_148a1e562 body=395 status=ok
// SIG undefined FUN_148a1e562(void)

void FUN_148a1e562(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_81;
  undefined8 **local_80;
  longlong *local_78;
  ushort local_68;
  byte local_60;
  undefined1 local_58 [40];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_81 = 2;
  local_90 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_80);
  local_58[0] = 0;
  local_30 = 0;
  FUN_144a7bf34(local_58,&local_80,&local_90,&local_81);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  FUN_1447c3578(lVar2 + 0x80,&local_80,local_58);
  uVar5 = FUN_144a7b41a(&local_80,0x3f800000);
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar4 = &local_80;
    if (0x18 < local_68) {
      pppuVar4 = (undefined8 ***)local_80;
    }
    (*pcVar3)(pppuVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(local_80);
  }
  FUN_1447c3578(lVar2 + 0xb8,&local_80,local_58);
  uVar5 = FUN_144a7b41a(&local_80,0);
  *(undefined4 *)(param_1 + 0xf4) = uVar5;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar4 = &local_80;
    if (0x18 < local_68) {
      pppuVar4 = (undefined8 ***)local_80;
    }
    (*pcVar3)(pppuVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(local_80);
  }
  FUN_144a5ac3a(local_58);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1e6ee FUN_148a1e6ee body=72 status=ok
// SIG undefined FUN_148a1e6ee(void)

void FUN_148a1e6ee(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar1 = FUN_140343d7a(param_1);
    lVar2 = FUN_140519fd4(uVar1);
    if ((lVar2 != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
      FUN_14480f766(lVar2);
    }
  }
  FUN_1409e0f3c(param_1);
  return;
}



// FUNCTION 148a1e736 FUN_148a1e736 body=569 status=ok
// SIG undefined FUN_148a1e736(void)

void FUN_148a1e736(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = (float)FUN_141236616();
  fVar12 = 0.0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar6 = FUN_144729dda(param_1 + 0xd8);
    if (cVar6 != '\0') {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      fVar12 = *(float *)(lVar7 + 0x144);
    }
  }
  fVar13 = *(float *)(param_1 + 0xf8);
  uVar3 = *(undefined4 *)(param_1 + 0xf0);
  fVar4 = *(float *)(param_1 + 0xf4);
  lVar7 = FUN_1470e53c2(param_2,&DAT_14cb94c08);
  puVar1 = (undefined8 *)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 3) {
    *(undefined4 *)puVar1 = uVar3;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      puVar8 = puVar1;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        puVar8 = *(undefined8 **)(lVar7 + 0x40);
      }
      (*pcVar5)(puVar8);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*puVar1);
    }
    *(undefined2 *)(lVar7 + 0x58) = 4;
    *(undefined4 *)(lVar7 + 0x40) = uVar3;
    *(undefined1 *)(lVar7 + 0x60) = 3;
  }
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  fVar12 = 0.0;
  if (*(char *)(param_1 + 0xfc) == '\0') {
    fVar11 = fVar10 - *(float *)(param_1 + 0xf8);
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
  }
  lVar7 = FUN_1470e53c2(param_2,&DAT_14cb94c20);
  pfVar2 = (float *)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 3) {
    *pfVar2 = fVar12;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar9 = pfVar2;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        pfVar9 = *(float **)(lVar7 + 0x40);
      }
      (*pcVar5)(pfVar9);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar7 + 0x58) = 4;
    *(float *)(lVar7 + 0x40) = fVar12;
    *(undefined1 *)(lVar7 + 0x60) = 3;
  }
  fVar10 = (fVar4 + fVar13) - fVar10;
  fVar12 = 0.0;
  if (0.0 <= fVar10) {
    fVar12 = fVar10;
  }
  lVar7 = FUN_1470e53c2(param_2,&DAT_14cb94c18);
  pfVar2 = (float *)(lVar7 + 0x40);
  if (*(byte *)(lVar7 + 0x60) == 3) {
    *pfVar2 = fVar12;
  }
  else {
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar7 + 0x60) * 0x120));
    if (pcVar5 != (code *)0x0) {
      pfVar9 = pfVar2;
      if (0x18 < *(ushort *)(lVar7 + 0x58)) {
        pfVar9 = *(float **)(lVar7 + 0x40);
      }
      (*pcVar5)(pfVar9);
    }
    if (0x18 < *(ushort *)(lVar7 + 0x58)) {
      FUN_1400020a8(*(undefined8 *)pfVar2);
    }
    *(undefined2 *)(lVar7 + 0x58) = 4;
    *(float *)(lVar7 + 0x40) = fVar12;
    *(undefined1 *)(lVar7 + 0x60) = 3;
  }
  FUN_147f574a0(param_1,param_2);
  return;
}



// FUNCTION 148a1e970 FUN_148a1e970 body=137 status=ok
// SIG undefined FUN_148a1e970(void)

undefined8 FUN_148a1e970(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0xd8);
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
      fVar3 = *(float *)(param_1 + 0xf8);
      if (*(float *)(param_1 + 0xf8) <= *(float *)(lVar2 + 0x144)) {
        fVar3 = *(float *)(lVar2 + 0x144);
      }
      if (fVar3 + *(float *)(param_1 + 0xf4) <= *(float *)(param_2 + 8)) {
        cVar1 = FUN_148a185dc(lVar2,*(undefined4 *)(param_1 + 0xf0));
        if (cVar1 != '\0') {
          FUN_140bd9266(lVar2);
          FUN_148a1e562(param_1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148a1e9fa FUN_148a1e9fa body=170 status=ok
// SIG undefined FUN_148a1e9fa(void)

void FUN_148a1e9fa(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x489) == '\x01') {
    FUN_1489a5ae0(param_1 + 0x490,&local_30);
    if ((longlong *)(param_2 + 8) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_30;
      local_30 = 0;
      *(undefined4 *)(param_2 + 0x10) = local_28;
      *(undefined4 *)(param_2 + 0x14) = local_24;
    }
  }
  thunk_FUN_147f573da(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1eaa8 FUN_148a1eaa8 body=927 status=ok
// SIG undefined FUN_148a1eaa8(void)

void FUN_148a1eaa8(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined1 local_b3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_68;
  char local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x90))();
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = DAT_14c8464e0;
  uStack_a8 = DAT_14c8464e8;
  local_a0 = DAT_14c8464f0;
  local_98 = 0;
  local_96 = 0;
  local_88 = (undefined4)DAT_14c8464f8;
  uStack_84 = DAT_14c8464f8._4_4_;
  uStack_80 = (undefined4)DAT_14c846500;
  uStack_7c = DAT_14c846500._4_4_;
  local_78 = DAT_14c846508;
  local_90 = 0;
  local_70 = 0x18;
  local_68 = 5;
  local_60 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_b3 = 0;
  local_b7 = 0;
  local_57 = 1;
  param_1[0x89] = param_1[2];
  uVar3 = DAT_14cb94d00;
  uVar1 = FUN_141115664();
  lVar2 = FUN_140c48046(param_1 + 0x10,uVar1,uVar3,0);
  if (lVar2 != 0) {
    local_f8 = 0;
    uVar3 = FUN_1411157a2();
    lVar4 = FUN_140c47e50(lVar2,uVar3,&local_f8);
    if (lVar4 != 0) {
      FUN_14054d68c(lVar4 + 0x80,param_1 + 0x3b);
      *(undefined1 *)(lVar4 + 0x331) = 1;
    }
    uVar3 = FUN_140a48832();
    lVar5 = FUN_140c483dc(lVar2,uVar3,&DAT_14cb94d10,0);
    if (lVar5 != 0) {
      *(char *)(lVar5 + 0x1c) = (char)param_1[0x3a];
      *(undefined1 *)(*(longlong *)(lVar2 + 0xd8) + (longlong)(*(int *)(lVar2 + 0xe0) + -1) * 4) = 0
      ;
      local_f8 = 0;
      uVar3 = FUN_140c48226();
      lVar6 = FUN_140c47e50(lVar5,uVar3,&local_f8);
      if (lVar6 != 0) {
        FUN_144955a78(lVar6 + 0x98,&local_c0);
        local_110 = 0;
        if (lVar4 == 0) {
          local_f0 = 0;
          local_108 = 0;
        }
        else {
          FUN_14111569e(lVar4,&local_f8);
          local_108 = local_f8;
        }
        local_100 = local_f0;
        FUN_141115702(&local_f8);
        FUN_1403719a4(lVar6 + 0x1e8,&local_f8);
        FUN_144a2da94(&local_f8);
      }
      local_f8 = 0;
      uVar3 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar5,uVar3,&local_f8);
      if (lVar4 != 0) {
        FUN_144983130(lVar4 + 0x80,param_1 + 0x33);
        if (*(char *)(lVar4 + 0xb8) != *(char *)((longlong)param_1 + 0x1d2)) {
          *(char *)(lVar4 + 0xb8) = *(char *)((longlong)param_1 + 0x1d2);
          FUN_1403a3fe6(lVar4);
        }
        *(undefined1 *)(lVar4 + 0x261) = 1;
      }
      local_f8 = 0;
      uVar3 = FUN_140ffa79a();
      lVar4 = FUN_140c47e50(lVar5,uVar3,&local_f8);
      if (lVar4 != 0) {
        *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0x1d1);
        FUN_140ffb226(lVar4 + 0x80,param_1 + 0x8a);
      }
    }
    uVar3 = FUN_140a48832();
    lVar2 = FUN_140c483dc(lVar2,uVar3,&DAT_14cb94d08,0);
    if (lVar2 != 0) {
      local_f8 = 0;
      uVar3 = FUN_140c4800c();
      lVar4 = FUN_140c47e50(lVar2,uVar3,&local_f8);
      if (lVar4 != 0) {
        FUN_144983130(lVar4 + 0x80,param_1 + 0x33);
        if (*(char *)(lVar4 + 0xb8) != *(char *)((longlong)param_1 + 0x1d3)) {
          *(char *)(lVar4 + 0xb8) = *(char *)((longlong)param_1 + 0x1d3);
          FUN_1403a3fe6(lVar4);
        }
        *(undefined1 *)(lVar4 + 0x261) = 1;
      }
      local_f8 = 0;
      uVar3 = FUN_140ffa79a();
      lVar2 = FUN_140c47e50(lVar2,uVar3,&local_f8);
      if (lVar2 != 0) {
        FUN_140ffb226(lVar2 + 0x80,param_1 + 0x8a);
      }
    }
  }
  FUN_144a2da94(&local_90);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1ee4a FUN_148a1ee4a body=442 status=ok
// SIG undefined FUN_148a1ee4a(void)

void FUN_148a1ee4a(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 ***pppuVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 **local_a8 [3];
  ushort local_90;
  byte local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400ef488();
  lVar1 = param_1 + 0x418;
  FUN_1400ef524(lVar1,0);
  uVar8 = FUN_144a7be76(param_1);
  lVar9 = FUN_14069ce20(uVar8);
  if ((lVar9 != 0) && (iVar3 = *(int *)(lVar9 + 0x70), (longlong)iVar3 != 0)) {
    lVar9 = *(longlong *)(lVar9 + 0x68);
    lVar12 = 0;
    do {
      puVar2 = (undefined4 *)(lVar9 + lVar12);
      local_b8 = *puVar2;
      uStack_b4 = puVar2[1];
      uStack_b0 = puVar2[2];
      uStack_ac = puVar2[3];
      plVar6 = *(longlong **)(puVar2 + 2);
      if (plVar6 != (longlong *)0x0) {
        cVar7 = FUN_144729dda(&local_b8);
        if (cVar7 != '\0') {
          uVar8 = (**(code **)(*plVar6 + 0x30))(plVar6);
          lVar10 = FUN_145a2b174(uVar8);
          if (lVar10 != 0) {
            local_90 = 8;
            local_a8[0] = (undefined8 ***)0x0;
            FUN_14485c47a(local_a8,lVar10);
            local_88 = 6;
            FUN_141814da4(local_80,local_a8,0);
            iVar4 = *(int *)(param_1 + 0x7a0);
            *(uint *)(param_1 + 0x7a0) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x7a4) < iVar4 + 1U) {
              FUN_14052e0a0(lVar1,iVar4);
            }
            lVar10 = *(longlong *)(param_1 + 0x798);
            if (*(longlong *)(param_1 + 0x798) == 0) {
              lVar10 = lVar1;
            }
            FUN_1410930e6((longlong)iVar4 * 0x38 + lVar10,local_80);
            FUN_143d90102(local_80);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
            if (pcVar5 != (code *)0x0) {
              pppuVar11 = local_a8;
              if (0x18 < local_90) {
                pppuVar11 = (undefined8 ***)local_a8[0];
              }
              (*pcVar5)(pppuVar11);
            }
            if (0x18 < local_90) {
              FUN_1400020a8(local_a8[0]);
            }
          }
        }
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1f01e FUN_148a1f01e body=623 status=ok
// SIG undefined FUN_148a1f01e(void)

void FUN_148a1f01e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined8 ***local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ushort local_90;
  byte local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400ef488();
  lVar3 = param_1 + 0x418;
  FUN_1400ef524(lVar3,0);
  lVar10 = *(longlong *)(param_1 + 0x48);
  cVar4 = *(char *)(lVar10 + 0x40);
  uVar8 = FUN_143880244(param_1);
  lVar9 = FUN_144a8069e(uVar8);
  if (cVar4 != '\0' && lVar9 != 0) {
    if (cVar4 != '\x01') goto LAB_148a1f08b;
    lVar9 = *(longlong *)(lVar9 + 0x1b0);
  }
  if (lVar9 != 0) {
    uVar8 = FUN_1447210f0(lVar9);
    FUN_148a19d84(&local_80,uVar8);
    if (local_78 != (longlong *)0x0) {
      iVar7 = (int)local_78[1];
      do {
        if (iVar7 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)local_78[1];
        bVar14 = iVar7 == iVar6;
        if (bVar14) {
          *(int *)(local_78 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
        plVar13 = local_78;
      } while (!bVar14);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (plVar13 != (longlong *)0x0) {
        if ((local_80 != 0) &&
           (lVar10 = FUN_148a1f28e(local_80,lVar9,*(undefined1 *)(lVar10 + 0x41)), lVar10 != 0)) {
          lVar9 = *(longlong *)(lVar10 + 0x1c0);
          if (*(longlong *)(lVar10 + 0x1c0) == 0) {
            lVar9 = lVar10;
          }
          if ((longlong)*(int *)(lVar10 + 0x1c8) != 0) {
            lVar10 = (longlong)*(int *)(lVar10 + 0x1c8) * 0x38;
            do {
              if ((*(byte *)(lVar9 + 0x34) & 1) == 0) {
                local_90 = 0x18;
                local_a8 = *(undefined8 ****)(lVar9 + 8);
                uStack_a0 = *(undefined4 *)(lVar9 + 0x10);
                uStack_9c = *(undefined4 *)(lVar9 + 0x14);
                local_98 = *(undefined8 *)(lVar9 + 0x18);
                local_88 = 4;
LAB_148a1f1ae:
                FUN_141814da4(&local_80,&local_a8,0);
                iVar7 = *(int *)(param_1 + 0x7a0);
                *(uint *)(param_1 + 0x7a0) = iVar7 + 1U;
                if (*(uint *)(param_1 + 0x7a4) < iVar7 + 1U) {
                  FUN_14052e0a0(lVar3,iVar7);
                }
                lVar11 = *(longlong *)(param_1 + 0x798);
                if (*(longlong *)(param_1 + 0x798) == 0) {
                  lVar11 = lVar3;
                }
                FUN_1410930e6((longlong)iVar7 * 0x38 + lVar11,&local_80);
                FUN_143d90102(&local_80);
                pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
                if (pcVar5 != (code *)0x0) {
                  ppppuVar12 = &local_a8;
                  if (0x18 < local_90) {
                    ppppuVar12 = (undefined8 ****)local_a8;
                  }
                  (*pcVar5)(ppppuVar12);
                }
                if (0x18 < local_90) {
                  FUN_1400020a8(local_a8);
                }
              }
              else {
                lVar11 = FUN_14479d2ce(lVar9);
                if (lVar11 != 0) {
                  local_90 = 8;
                  local_a8 = (undefined8 ****)0x0;
                  FUN_14485c47a(&local_a8,lVar11);
                  local_88 = 7;
                  goto LAB_148a1f1ae;
                }
              }
              lVar9 = lVar9 + 0x38;
              lVar10 = lVar10 + -0x38;
            } while (lVar10 != 0);
          }
        }
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
LAB_148a1f08b:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a1f28e FUN_148a1f28e body=147 status=ok
// SIG undefined FUN_148a1f28e(void)

longlong FUN_148a1f28e(longlong param_1,longlong param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_2c = 0;
    FUN_14485c47a(&local_2c);
    local_24 = param_3;
    iVar1 = FUN_148a28050((longlong *)(param_1 + 0x28),
                          (uint)param_3 + (local_2c._4_4_ ^ (uint)local_2c),&local_2c);
    if (((iVar1 != -1) &&
        (lVar2 = (longlong)iVar1 * 0x1e8 + *(longlong *)(param_1 + 0x28), lVar2 != 0)) &&
       (0 < *(int *)(lVar2 + 0x1d8))) {
      lVar2 = lVar2 + 0x10;
      goto LAB_148a1f2ab;
    }
  }
  lVar2 = 0;
LAB_148a1f2ab:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1f33a FUN_148a1f33a body=430 status=ok
// SIG undefined FUN_148a1f33a(void)

void FUN_148a1f33a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  longlong local_78;
  uint local_70;
  undefined4 uStack_6c;
  uint local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x48);
  cVar6 = *(char *)(lVar3 + 0x84);
  uVar8 = FUN_143880244();
  lVar9 = FUN_144a8069e(uVar8);
  if (cVar6 != '\0' && lVar9 != 0) {
    if (cVar6 != '\x01') goto LAB_148a1f393;
    lVar9 = *(longlong *)(lVar9 + 0x1b0);
  }
  if (lVar9 != 0) {
    uVar8 = FUN_1447210f0(lVar9);
    FUN_148a19d84(&local_78,uVar8);
    plVar11 = (longlong *)CONCAT44(uStack_6c,local_70);
    if (plVar11 != (longlong *)0x0) {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_6c,local_70) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x10))();
      }
      lVar4 = local_78;
      if (plVar11 != (longlong *)0x0) {
        if (local_78 != 0) {
          local_80 = 0;
          local_88 = 0x3f800000;
          FUN_143888b76(param_1,&local_78,param_2,0);
          if (local_68 < local_70) {
            do {
              lVar10 = FUN_14030a32e((longlong)(int)local_68 * 0x38 + local_78);
              uVar13 = 0;
              if (lVar10 != 0) {
                cVar6 = FUN_148a1f4ea(lVar4,lVar9,*(undefined1 *)(lVar3 + 0x85),lVar10);
                if (cVar6 != '\0') {
                  uVar13 = *(undefined4 *)(lVar3 + 0x80);
                }
              }
              FUN_14023b10e(&local_78,uVar13);
              local_68 = local_68 + 1;
              FUN_143888ae0(&local_78);
            } while (local_68 < local_70);
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
  }
LAB_148a1f393:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a1f4ea FUN_148a1f4ea body=103 status=ok
// SIG undefined FUN_148a1f4ea(void)

undefined1 FUN_148a1f4ea(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_R9;
  
  if ((in_R9 != 0) && (lVar1 = FUN_148a1f28e(), lVar1 != 0)) {
    lVar3 = *(longlong *)(lVar1 + 0x1c0);
    if (*(longlong *)(lVar1 + 0x1c0) == 0) {
      lVar3 = lVar1;
    }
    if ((longlong)*(int *)(lVar1 + 0x1c8) != 0) {
      lVar1 = (longlong)*(int *)(lVar1 + 0x1c8) * 0x38;
      do {
        lVar1 = lVar1 + -0x38;
        lVar2 = FUN_14479d2ce(lVar3);
        if (lVar2 == in_R9) {
          return 1;
        }
        lVar3 = lVar3 + 0x38;
      } while (lVar1 != 0);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148a1f5aa FUN_148a1f5aa body=152 status=ok
// SIG undefined FUN_148a1f5aa(void)

void FUN_148a1f5aa(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = *(byte *)(param_1 + 0xd50);
  if ((bVar1 & 0x10) == 0 && -1 < *(char *)(param_1 + 0x60)) {
    *(byte *)(param_1 + 0xd50) = bVar1 & 0xe7;
    iVar2 = *(int *)(param_1 + 0xd10);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd08);
      lVar4 = 0;
      do {
        FUN_146247d00(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar2 * 8 != lVar4);
    }
    iVar2 = *(int *)(param_1 + 0xd20);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd18);
      lVar4 = 0;
      do {
        FUN_146247d00(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar2 * 8 != lVar4);
    }
  }
  else {
    *(byte *)(param_1 + 0xd50) = bVar1 | 8;
  }
  return;
}



// FUNCTION 148a1f642 FUN_148a1f642 body=41 status=ok
// SIG undefined FUN_148a1f642(void)

void FUN_148a1f642(longlong param_1)

{
  FUN_1488c6e08();
  if (*(char *)(param_1 + 0xcf8) != '\x01') {
    return;
  }
  FUN_148a1f5aa(param_1);
  return;
}



// FUNCTION 148a1f66c FUN_148a1f66c body=195 status=ok
// SIG undefined FUN_148a1f66c(void)

void FUN_148a1f66c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x900) != 0) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(param_1 + 0xcf8));
    uVar4 = FUN_1447210f0();
    local_28 = *(undefined8 *)(param_1 + 0x900);
    plVar3 = *(longlong **)(param_1 + 0x908);
    if (plVar3 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      FUN_1487bc308(&local_28,uVar4,uVar5 & 0xffffffff);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_20 = plVar3;
      FUN_1487bc308(&local_28,uVar4,uVar5 & 0xffffffff);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1f858 FUN_148a1f858 body=73 status=ok
// SIG undefined FUN_148a1f858(void)

longlong FUN_148a1f858(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = FUN_14895adb6(param_1 + -0x8d8);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x18) = lVar1;
  }
  return lVar1;
}



// FUNCTION 148a1f8a2 FUN_148a1f8a2 body=52 status=ok
// SIG undefined FUN_148a1f8a2(void)

void FUN_148a1f8a2(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1f8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x378))();
      return;
    }
  }
  return;
}



// FUNCTION 148a1f8d6 FUN_148a1f8d6 body=35 status=ok
// SIG undefined FUN_148a1f8d6(void)

undefined8 * FUN_148a1f8d6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14cb94e00;
  if (*(char *)(param_1 + 0xd45) == '\x02') {
    puVar1 = &DAT_14cb94e20;
  }
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 148a1f8fa FUN_148a1f8fa body=794 status=ok
// SIG undefined FUN_148a1f8fa(void)

void FUN_148a1f8fa(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar1 = *(byte *)(param_1 + 0xb90);
  if ((bVar1 & 0x40) != 0) {
    *(byte *)(param_1 + 0xb90) = bVar1 & 0x3f;
    cVar2 = *(char *)(param_1 + 0xbd8);
    if ((cVar2 == '\0') ||
       (((bVar1 & 0x30) == 0 && (*(longlong *)(param_1 + 0xd60) != DAT_14cb94e30)))) {
      if (-1 < (char)bVar1) {
LAB_148a1f992:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_e8);
      }
      *(byte *)(param_1 + 0xb90) = bVar1 & 0x1f;
    }
    else {
      *(undefined1 *)(param_1 + 0xbd8) = 0;
      if (*(int *)(param_1 + 0xbf0) < 1) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 8);
      }
      local_c8 = (undefined2 *)((ulonglong)local_c8 & 0xffffffffffffff00);
      fVar9 = (float)(**(code **)(*plVar7 + 0x3b0))
                               (plVar7,0,*(float *)(param_1 + 3000) * *(float *)(param_1 + 0xbb0));
      *(char *)(param_1 + 0xbd8) = cVar2;
      if (0.0 < fVar9) {
        uVar4 = FUN_1401b4c98(param_1);
        if ((char)bVar1 < '\0') {
          local_c0 = (undefined8 *)0x0;
          local_b8 = 0;
          FUN_1446efa72(&local_c0,0,3,0x10);
          puVar8 = local_c0;
          local_b8 = 3;
          *local_c0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_c0[2] = lVar6;
          *local_c0 = &PTR_FUN_14b4ab980;
          local_c0[3] = 0;
          FUN_14485c47a(local_c0 + 3,param_1);
          *(undefined4 *)(puVar8 + 5) = 0;
          pcVar5 = (code *)&LAB_140ebdd1a;
        }
        else {
          local_c0 = (undefined8 *)0x0;
          local_b8 = 0;
          FUN_1446efa72(&local_c0,0,3,0x10);
          puVar8 = local_c0;
          local_b8 = 3;
          *local_c0 = &PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar3 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar3 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar3;
          local_c0[2] = lVar6;
          *local_c0 = &PTR_FUN_14b4ab980;
          local_c0[3] = 0;
          FUN_14485c47a(local_c0 + 3,param_1);
          *(undefined4 *)(puVar8 + 5) = 0;
          pcVar5 = FUN_140ebdd2e;
        }
        puVar8[4] = pcVar5;
        local_a8 = 0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_c0);
        local_68 = 1;
        local_c8 = local_b0;
        local_b0[0] = 0;
        local_ac = 0xbf800000;
        FUN_1406f4044(uVar4,param_1 + 0xb78,&local_a8);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        FUN_1449db362(&local_c0);
        goto LAB_148a1f930;
      }
      if (-1 < (char)bVar1) goto LAB_148a1f992;
      *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) & 0xdf;
    }
    *(undefined8 *)(param_1 + 0xb78) = 0;
  }
LAB_148a1f930:
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1fc34 FUN_148a1fc34 body=55 status=ok
// SIG undefined FUN_148a1fc34(void)

void FUN_148a1fc34(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
     (plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8
                ), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148a1fc67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x370))();
    return;
  }
  return;
}



// FUNCTION 148a1fc6c FUN_148a1fc6c body=116 status=ok
// SIG undefined FUN_148a1fc6c(void)

void FUN_148a1fc6c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    bVar2 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
      lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 8 + lVar1);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + lVar1);
      if (plVar4 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar3 + 0x310))();
                    /* WARNING: Could not recover jumptable at 0x000148a1fcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x378))(plVar4,uVar5,1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a1fce0 FUN_148a1fce0 body=428 status=ok
// SIG undefined FUN_148a1fce0(void)

void FUN_148a1fce0(longlong param_1,ulonglong param_2,undefined1 param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar10 = (int)(param_2 & 0xff);
  if (*(int *)(param_1 + 0xc08) <= iVar10) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0xd60);
  if (lVar3 == DAT_14cb94e48) {
    return;
  }
  if (lVar3 == DAT_14cb95120) {
    return;
  }
  if (lVar3 == DAT_14cb94e38) {
    return;
  }
  if (lVar3 == DAT_14cb94e50) {
    return;
  }
  if (lVar3 == DAT_14cb94e30) {
    if ((*(byte *)(param_1 + 0xb90) & 2) == 0) {
      *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) | 2;
      *(undefined1 *)(param_1 + 0xbc1) = param_3;
      return;
    }
    FUN_145784dac(param_1);
  }
  cVar1 = FUN_14022747e(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0xbc3) == '\0')) {
    return;
  }
  *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) & 0xfd;
  bVar2 = 0xff;
  if (iVar10 < *(int *)(param_1 + 0xc08)) {
    lVar3 = param_1 + 0xbf8;
    if (*(longlong *)(param_1 + 0xc00) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc00);
    }
    bVar2 = *(byte *)(lVar3 + (param_2 & 0xff));
  }
  uVar7 = (ulonglong)bVar2;
  iVar10 = *(int *)(param_1 + 0xbf0);
  uVar9 = 1 << ((byte)param_2 & 0x1f);
  lVar3 = (ulonglong)bVar2 * 0x80 + uVar7 * 8;
  uVar11 = uVar7;
  while( true ) {
    lVar3 = lVar3 + 0x88;
    uVar11 = uVar11 + 1;
    if ((longlong)iVar10 <= (longlong)uVar11) break;
    puVar8 = *(uint **)(param_1 + 0xbe8);
    if ((*(uint *)((longlong)puVar8 + lVar3) & uVar9) != 0) goto LAB_148a1fde6;
  }
  if (bVar2 == 0) {
    return;
  }
  puVar8 = *(uint **)(param_1 + 0xbe8);
  uVar11 = 0;
  puVar4 = puVar8;
  while ((*puVar4 & uVar9) == 0) {
    uVar11 = uVar11 + 1;
    puVar4 = puVar4 + 0x22;
    if (uVar7 == uVar11) {
      return;
    }
  }
LAB_148a1fde6:
  if (cVar1 != '\0') {
    if ((int)(uint)bVar2 < iVar10) {
      plVar5 = *(longlong **)(puVar8 + uVar7 * 2 + (ulonglong)bVar2 * 0x20 + 8);
    }
    else {
      plVar5 = (longlong *)0x0;
    }
    if ((int)((uint)uVar11 & 0xff) < iVar10) {
      plVar6 = *(longlong **)
                ((longlong)puVar8 +
                (ulonglong)(uint)((int)(uVar11 & 0xff) << 7) + (uVar11 & 0xff) * 8 + 0x20);
    }
    else {
      plVar6 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 == plVar6) {
        return;
      }
      cVar1 = (**(code **)(*plVar5 + 0x2f8))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  FUN_143eca894(param_1,param_2 & 0xffffffff,uVar11 & 0xffffffff,0,param_3);
  return;
}



// FUNCTION 148a1fe8c FUN_148a1fe8c body=142 status=ok
// SIG undefined FUN_148a1fe8c(void)

void FUN_148a1fe8c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar4) {
    bVar3 = 0;
    lVar2 = 3;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xbe8) + lVar2 * 8);
      if (lVar1 != 0) {
        if ((*(uint *)(param_1 + 0xb64) >> (bVar3 & 0x1f) & 0xff) !=
            (*(uint *)(param_1 + 0xb60) >> (bVar3 & 0x1f) & 0xff)) {
          FUN_148a1acba(lVar1);
          iVar4 = *(int *)(param_1 + 0xbf0);
        }
      }
      lVar5 = lVar5 + 1;
      bVar3 = bVar3 + 8;
      lVar2 = lVar2 + 0x11;
    } while (lVar5 < iVar4);
  }
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb60);
  return;
}



// FUNCTION 148a1ff1a FUN_148a1ff1a body=220 status=ok
// SIG undefined FUN_148a1ff1a(void)

void FUN_148a1ff1a(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0xbd8) == (char)param_2) {
    return;
  }
  iVar3 = (int)(param_2 & 0xff);
  if (iVar3 < *(int *)(param_1 + 0xbf0)) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 8 +
              (ulonglong)(uint)(iVar3 << 7) + (param_2 & 0xff) * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 800))();
    }
  }
  iVar3 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar4 = 0;
    do {
      FUN_1488c7472(*(undefined8 *)(lVar2 + lVar4),*(undefined1 *)(param_1 + 0xbd8));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar3 * 8 != lVar4);
  }
  iVar3 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar4 = 0;
    do {
      FUN_1488c7472(*(undefined8 *)(lVar2 + lVar4),*(undefined1 *)(param_1 + 0xbd8));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar3 * 8 != lVar4);
  }
  FUN_148a1fff6(param_1,param_2 & 0xffffffff);
  FUN_1447cd2ec(param_1 + 0xa10,0);
  return;
}



// FUNCTION 148a1fff6 FUN_148a1fff6 body=507 status=ok
// SIG undefined FUN_148a1fff6(void)

void FUN_148a1fff6(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  bVar3 = *(byte *)(param_1 + 0xbd8);
  uVar4 = (ulonglong)bVar3;
  if ((uint)param_2 < *(uint *)(param_1 + 0xbf0) &&
      (int)(uint)bVar3 < (int)*(uint *)(param_1 + 0xbf0)) {
    lVar5 = *(longlong *)(param_1 + 0xbe8);
    lVar2 = (ulonglong)bVar3 * 0x80 + uVar4 * 8;
    lVar7 = (longlong)*(int *)(lVar5 + 0x70 + lVar2);
    if (lVar7 != 0) {
      plVar9 = *(longlong **)(lVar5 + 0x68 + lVar2);
      plVar8 = (longlong *)(lVar7 * 0x1c + (longlong)plVar9);
      plVar1 = (longlong *)(param_1 + 0x8c0);
      lVar2 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8;
      do {
        lVar5 = *plVar9;
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0xbe8) + 0x70 + lVar2);
        if (lVar7 != 0) {
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x68 + lVar2);
          lVar7 = lVar7 * 0x1c;
          do {
            if (*plVar6 == lVar5) {
              if (plVar6 != (longlong *)0x0) {
                if ((*(float *)(plVar9 + 1) == *(float *)(plVar6 + 1)) &&
                   (!NAN(*(float *)(plVar9 + 1)) && !NAN(*(float *)(plVar6 + 1)))) {
                  if ((*(float *)((longlong)plVar9 + 0xc) == *(float *)((longlong)plVar6 + 0xc)) &&
                     (!NAN(*(float *)((longlong)plVar9 + 0xc)) &&
                      !NAN(*(float *)((longlong)plVar6 + 0xc)))) {
                    if ((*(float *)(plVar9 + 2) == *(float *)(plVar6 + 2)) &&
                       (!NAN(*(float *)(plVar9 + 2)) && !NAN(*(float *)(plVar6 + 2)))) {
                      if ((*(float *)((longlong)plVar9 + 0x14) ==
                           *(float *)((longlong)plVar6 + 0x14)) &&
                         (!NAN(*(float *)((longlong)plVar9 + 0x14)) &&
                          !NAN(*(float *)((longlong)plVar6 + 0x14)))) goto LAB_148a200ae;
                    }
                  }
                }
                (**(code **)(*plVar1 + 0x78))(plVar1,lVar5,plVar6 + 1,plVar9 + 1,(int)plVar9[3],0);
                goto LAB_148a200ae;
              }
              break;
            }
            plVar6 = (longlong *)((longlong)plVar6 + 0x1c);
            lVar7 = lVar7 + -0x1c;
          } while (lVar7 != 0);
        }
        (**(code **)(*plVar1 + 0x60))(plVar1,lVar5,plVar9 + 1,0);
LAB_148a200ae:
        plVar9 = (longlong *)((longlong)plVar9 + 0x1c);
      } while (plVar9 != plVar8);
      uVar4 = (ulonglong)*(byte *)(param_1 + 0xbd8);
      lVar5 = *(longlong *)(param_1 + 0xbe8);
    }
    lVar2 = (ulonglong)(uint)((int)uVar4 << 7) + uVar4 * 8;
    lVar7 = (longlong)*(int *)(lVar5 + 0x80 + lVar2);
    if (lVar7 != 0) {
      plVar9 = *(longlong **)(lVar5 + 0x78 + lVar2);
      plVar8 = plVar9 + lVar7 * 2;
      plVar1 = (longlong *)(param_1 + 0x8c0);
      lVar2 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8;
      do {
        lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0xbe8) + 0x80 + lVar2);
        if (lVar5 != 0) {
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x78 + lVar2);
          lVar5 = lVar5 << 4;
          do {
            if (*plVar6 == *plVar9) {
              if (plVar6 != (longlong *)0x0) {
                if ((*(float *)(plVar9 + 1) != *(float *)(plVar6 + 1)) ||
                   (NAN(*(float *)(plVar9 + 1)) || NAN(*(float *)(plVar6 + 1)))) {
                  (**(code **)(*plVar1 + 0x68))(plVar1);
                }
                goto LAB_148a201a5;
              }
              break;
            }
            plVar6 = plVar6 + 2;
            lVar5 = lVar5 + -0x10;
          } while (lVar5 != 0);
        }
        (**(code **)(*plVar1 + 0x50))(plVar1,*plVar9,(int)plVar9[1],0);
LAB_148a201a5:
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar8);
    }
  }
  return;
}



// FUNCTION 148a20200 FUN_148a20200 body=48 status=ok
// SIG undefined FUN_148a20200(void)

undefined8 FUN_148a20200(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if (((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) &&
     (lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 8 +
               (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xb0);
  }
  return 0;
}



// FUNCTION 148a20230 FUN_148a20230 body=8 status=ok
// SIG undefined FUN_148a20230(void)

void FUN_148a20230(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xb51) = 1;
  return;
}



// FUNCTION 148a20382 FUN_148a20382 body=1397 status=ok
// SIG undefined FUN_148a20382(void)

void FUN_148a20382(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 unaff_RBP;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar4 = *(undefined1 *)(param_1 + 0xbd8);
  plVar10 = (longlong *)FUN_1401654a2();
  if ((plVar10 != (longlong *)0x0) &&
     (cVar9 = (**(code **)(*plVar10 + 0x48))(plVar10,1), cVar9 != '\0')) {
    bVar5 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar5 < *(int *)(param_1 + 0xbf0)) {
      lVar12 = *(longlong *)
                (*(longlong *)(param_1 + 0xbe8) + 0x28 +
                (ulonglong)bVar5 * 0x80 + (ulonglong)bVar5 * 8);
    }
    else {
      lVar12 = 0;
    }
    bVar5 = *(byte *)(param_1 + 0xbc2);
    if (((((*(int *)(param_1 + 0xbf0) <= (int)(uint)bVar5) ||
          (lVar13 = *(longlong *)
                     (*(longlong *)(param_1 + 0xbe8) + 0x28 +
                     (ulonglong)bVar5 * 0x80 + (ulonglong)bVar5 * 8), lVar13 == 0)) ||
         (*(char *)(param_1 + 0x8fc) != '\0')) ||
        ((*(byte *)(*(longlong *)(lVar13 + 0x38) + 0x44) & 1) != 0)) ||
       ((lVar12 != 0 && ((*(byte *)(*(longlong *)(lVar12 + 0x38) + 0x44) & 1) != 0)))) {
      (**(code **)(*plVar10 + 0x80))(plVar10,0,0);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0xbd0);
  if (*(longlong *)(param_1 + 0xbd0) != 0) {
    uVar11 = FUN_1401b4c98(param_1);
    lVar12 = FUN_144a61814(uVar11,puVar1);
    if (lVar12 != 0) {
      FUN_1405a424c(uVar11,*puVar1);
    }
    *puVar1 = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0xbc8);
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    uVar11 = FUN_1401b4c98(param_1);
    lVar12 = FUN_144a61814(uVar11,puVar2);
    if (lVar12 != 0) {
      FUN_1405a424c(uVar11,*puVar2);
    }
    *puVar2 = 0;
  }
  bVar5 = *(byte *)(param_1 + 0xbc2);
  if ((int)*(uint *)(param_1 + 0xbf0) <= (int)(uint)bVar5) goto LAB_148a20576;
  lVar12 = *(longlong *)(param_1 + 0xbe8);
  lVar13 = *(longlong *)(lVar12 + 8 + (ulonglong)bVar5 * 0x80 + (ulonglong)bVar5 * 8);
  if (lVar13 == 0) goto LAB_148a20576;
  bVar6 = *(byte *)(param_1 + 0xbd8);
  if ((uint)bVar6 < *(uint *)(param_1 + 0xbf0)) {
    plVar10 = *(longlong **)(lVar12 + 8 + (ulonglong)bVar6 * 0x80 + (ulonglong)bVar6 * 8);
    if ((*(byte *)(*(longlong *)(lVar13 + 0xa0) + 0x31) & 1) != 0) goto LAB_148a20603;
    if (plVar10 == (longlong *)0x0) goto LAB_148a20576;
    if ((*(byte *)(plVar10[0x14] + 0x31) & 1) != 0) goto LAB_148a20603;
  }
  else {
    if ((*(byte *)(*(longlong *)(lVar13 + 0xa0) + 0x31) & 1) == 0) goto LAB_148a20576;
    plVar10 = (longlong *)0x0;
LAB_148a20603:
    uVar14 = ~*(uint *)(lVar12 + (ulonglong)bVar5 * 0x80 + (ulonglong)bVar5 * 8) &
             *(uint *)(param_1 + 0xc10);
    *(uint *)(param_1 + 0xc10) = uVar14;
    *(undefined1 *)(param_1 + 0xc14) = 0;
    if (uVar14 != 0) {
      cVar9 = '\0';
      uVar7 = uVar14 & 1;
      while (uVar7 == 0) {
        cVar9 = cVar9 + '\x01';
        uVar7 = uVar14 & 2;
        uVar14 = uVar14 >> 1;
      }
      *(char *)(param_1 + 0xc14) = cVar9;
    }
    if (plVar10 == (longlong *)0x0) goto LAB_148a20576;
  }
  local_e8 = (undefined2 *)CONCAT71(local_e8._1_7_,*(undefined1 *)(param_1 + 0xbc0));
  fVar15 = (float)(**(code **)(*plVar10 + 0x3b0))
                            (plVar10,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar4) & 0xffffffff,
                             *(float *)(param_1 + 3000) * *(float *)(param_1 + 0xbb0));
  if (0.0 < fVar15) {
    uVar14 = -(uint)(0.0001 < *(float *)(param_1 + 0x74));
    fVar16 = (float)(~uVar14 & 0x3f800000 | (uint)(1.0 / *(float *)(param_1 + 0x74)) & uVar14);
    if (0.0 < *(float *)(param_1 + 0xbbc)) {
      uVar11 = FUN_1401b4c98(param_1);
      fVar3 = *(float *)(param_1 + 0xbbc);
      local_e0 = (undefined8 *)0x0;
      local_d8 = 0;
      FUN_1446efa72(&local_e0,0,3,0x10);
      puVar8 = local_e0;
      local_d8 = 3;
      *local_e0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      local_e0[2] = lVar13;
      *local_e0 = &PTR_FUN_14b4ab980;
      local_e0[3] = 0;
      FUN_14485c47a(local_e0 + 3,param_1);
      *(undefined4 *)(puVar8 + 5) = 0;
      puVar8[4] = FUN_148a208f8;
      local_c8 = 0;
      local_c0 = 0;
      FUN_14487d8d8(&local_c8,&local_e0);
      local_88 = 1;
      local_e8 = local_d0;
      local_d0[0] = 0;
      local_cc = 0xbf800000;
      FUN_1406f4044(uVar11,puVar1,&local_c8,fVar3 * fVar15 * fVar16);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
      FUN_1449db362(&local_e0);
    }
    uVar11 = FUN_1401b4c98(param_1);
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    FUN_1446efa72(&local_e0,0,3,0x10);
    puVar1 = local_e0;
    local_d8 = 3;
    *local_e0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    local_e0[2] = lVar13;
    *local_e0 = &PTR_FUN_14b4ab980;
    local_e0[3] = 0;
    FUN_14485c47a(local_e0 + 3,param_1);
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = FUN_148a20ae8;
    local_c8 = 0;
    local_c0 = 0;
    FUN_14487d8d8(&local_c8,&local_e0);
    local_88 = 1;
    local_e8 = local_d0;
    local_d0[0] = 0;
    local_cc = 0xbf800000;
    FUN_1406f4044(uVar11,puVar2,&local_c8,fVar15 * fVar16);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
    FUN_1449db362(&local_e0);
  }
LAB_148a20576:
  FUN_1447cd2ec(param_1 + 0xa00,0);
  if (((*(longlong *)(param_1 + 0xbc8) == 0) ||
      ((*(float *)(param_1 + 0xbbc) == 0.0 && (!NAN(*(float *)(param_1 + 0xbbc)))))) &&
     (FUN_148a208f8(param_1), *(longlong *)(param_1 + 0xbc8) == 0)) {
    FUN_148a20ae8(param_1);
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a208f8 FUN_148a208f8 body=496 status=ok
// SIG undefined FUN_148a208f8(void)

void FUN_148a208f8(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 0xbd0) = 0;
  *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) & 0xfe;
  lVar6 = FUN_1401654a2();
  if (lVar6 == 0) {
    cVar4 = '\0';
  }
  else {
    plVar7 = (longlong *)FUN_1401654a2(param_1);
    cVar4 = (**(code **)(*plVar7 + 0x48))(plVar7,1);
  }
  bVar1 = *(byte *)(param_1 + 0xbd8);
  *(undefined1 *)(param_1 + 0xbc1) = 0;
  if ((*(char *)(param_1 + 0x178) == '\x03') ||
     ((*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0 &&
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar5 != '\0')))) {
    if ((int)(uint)*(byte *)(param_1 + 0xba9) < *(int *)(param_1 + 0xc08)) {
      lVar6 = param_1 + 0xbf8;
      if (*(longlong *)(param_1 + 0xc00) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xc00);
      }
      *(undefined1 *)(lVar6 + (ulonglong)*(byte *)(param_1 + 0xba9)) =
           *(undefined1 *)(param_1 + 0xbc2);
    }
    FUN_140c06afe(param_1);
  }
  if ((cVar4 != '\0') && (*(char *)(param_1 + 0x8fc) == '\0')) {
    bVar2 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
      lVar6 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 0x28 +
               (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
    }
    else {
      lVar6 = 0;
    }
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      lVar8 = *(longlong *)
               (*(longlong *)(param_1 + 0xbe8) + 0x28 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((((lVar6 != lVar8) && (lVar6 != 0)) && (lVar8 != 0)) &&
       ((((*(byte *)(*(longlong *)(lVar6 + 0x38) + 0x44) & 1) == 0 &&
         ((*(byte *)(*(longlong *)(lVar8 + 0x38) + 0x44) & 1) == 0)) &&
        (*(longlong *)(param_1 + 0xbc8) != 0)))) {
      FUN_1401b4c98(param_1);
    }
  }
  iVar3 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0xd08);
    lVar8 = 0;
    do {
      FUN_1488c7472(*(undefined8 *)(lVar6 + lVar8),*(undefined1 *)(param_1 + 0xbd8));
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  iVar3 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(param_1 + 0xd18);
    lVar8 = 0;
    do {
      FUN_1488c7472(*(undefined8 *)(lVar6 + lVar8),*(undefined1 *)(param_1 + 0xbd8));
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  FUN_148a1fff6(param_1,(ulonglong)bVar1);
  FUN_1447cd2ec(param_1 + 0xa10,0);
  return;
}



// FUNCTION 148a20ae8 FUN_148a20ae8 body=192 status=ok
// SIG undefined FUN_148a20ae8(void)

void FUN_148a20ae8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) & 0xfd;
  if (*(longlong *)(param_1 + 0xbd0) != 0) {
    uVar1 = FUN_1401b4c98(param_1);
    lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0xbd0));
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0xbd0));
    }
    *(undefined8 *)(param_1 + 0xbd0) = 0;
    FUN_148a208f8(param_1);
  }
  if ((*(longlong *)(param_1 + 0xb18) != 0) && (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0))
  {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x18))();
    FUN_148a1843a(uVar1,param_1);
  }
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb95120) {
    return;
  }
  FUN_1408bd412(param_1,&DAT_14cb95128);
  return;
}



// FUNCTION 148a20ba8 FUN_148a20ba8 body=220 status=ok
// SIG undefined FUN_148a20ba8(void)

void FUN_148a20ba8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 0xbaa) & 1) != 0) {
    FUN_148a208f8(param_1);
  }
  if ((((*(longlong *)(param_1 + 0xbc8) != 0) && (*(longlong *)(param_1 + 0xbd0) == 0)) &&
      (*(longlong *)(param_1 + 0xb18) != 0)) && (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)
     ) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x18))();
    FUN_148a1843a(uVar1,param_1);
  }
  uVar1 = FUN_1401b4c98(param_1);
  lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0xbc8));
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0xbc8));
  }
  *(undefined8 *)(param_1 + 0xbc8) = 0;
  uVar1 = FUN_1401b4c98(param_1);
  puVar3 = (undefined8 *)(param_1 + 0xbd0);
  lVar2 = FUN_144a61814(uVar1,puVar3);
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*puVar3);
  }
  *puVar3 = 0;
  return;
}



// FUNCTION 148a20c84 FUN_148a20c84 body=139 status=ok
// SIG undefined FUN_148a20c84(void)

void FUN_148a20c84(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0xcf8) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if (((*(byte *)(param_1 + 0xbc2) != bVar1) && ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0))) &&
       (plVar2 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 8 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)(uint)bVar1 * 8), plVar2 != (longlong *)0x0))
    {
      (**(code **)(*plVar2 + 0x3b0))
                (plVar2,bVar1,*(float *)(param_1 + 3000) * *(float *)(param_1 + 0xbb0),
                 *(float *)(param_1 + 0xbb0),*(undefined1 *)(param_1 + 0xbc0));
      FUN_1447cd2ec(param_1 + 0xa00,0);
      return;
    }
  }
  return;
}



// FUNCTION 148a20d10 FUN_148a20d10 body=314 status=ok
// SIG undefined FUN_148a20d10(void)

void FUN_148a20d10(longlong param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  undefined1 param_5)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (((((int)(param_2 & 0xff) < *(int *)(param_1 + 0xc08)) &&
       (lVar2 = *(longlong *)(param_1 + 0xd60), lVar2 != DAT_14cb94e48)) && (lVar2 != DAT_14cb95120)
      ) && ((lVar2 != DAT_14cb94e38 && (lVar2 != DAT_14cb94e50)))) {
    lVar6 = param_1 + 0xbf8;
    if (*(longlong *)(param_1 + 0xc00) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xc00);
    }
    bVar1 = *(byte *)(lVar6 + (param_2 & 0xff));
    if (bVar1 != (byte)param_3) {
      if (lVar2 == DAT_14cb94e30) {
        if ((*(byte *)(param_1 + 0xb90) & 2) == 0) {
          *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) | 2;
          *(undefined1 *)(param_1 + 0xbc1) = param_5;
          return;
        }
        FUN_145784dac(param_1);
      }
      cVar3 = FUN_14022747e();
      if ((cVar3 == '\0') || (*(char *)(param_1 + 0xbc3) != '\0')) {
        if (cVar3 != '\0') {
          if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
            plVar4 = *(longlong **)
                      (*(longlong *)(param_1 + 0xbe8) + 0x20 +
                      (ulonglong)bVar1 * 0x80 + (ulonglong)(uint)bVar1 * 8);
          }
          else {
            plVar4 = (longlong *)0x0;
          }
          uVar5 = param_3 & 0xff;
          if ((int)uVar5 < *(int *)(param_1 + 0xbf0)) {
            plVar7 = *(longlong **)
                      (*(longlong *)(param_1 + 0xbe8) + 0x20 +
                      (ulonglong)(uVar5 << 7) + (ulonglong)uVar5 * 8);
          }
          else {
            plVar7 = (longlong *)0x0;
          }
          if (plVar4 != (longlong *)0x0) {
            if (plVar4 == plVar7) {
              return;
            }
            cVar3 = (**(code **)(*plVar4 + 0x2f8))();
            if (cVar3 == '\0') {
              return;
            }
          }
        }
        FUN_143eca894(param_1,param_2 & 0xffffffff,param_3,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a20e4a FUN_148a20e4a body=14 status=ok
// SIG undefined FUN_148a20e4a(void)

void FUN_148a20e4a(longlong param_1,undefined1 param_2)

{
  *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) | 2;
  *(undefined1 *)(param_1 + 0xbc1) = param_2;
  return;
}



// FUNCTION 148a20e66 FUN_148a20e66 body=203 status=ok
// SIG undefined FUN_148a20e66(void)

void FUN_148a20e66(longlong param_1,byte param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = (uint)param_2;
  if ((int)uVar2 < *(int *)(param_1 + 0xc08)) {
    lVar3 = param_1 + 0xbf8;
    if (*(longlong *)(param_1 + 0xc00) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc00);
    }
    cVar1 = *(char *)(lVar3 + (ulonglong)uVar2);
    if (cVar1 != *(char *)(param_1 + 0xbd8)) {
      *(char *)(lVar3 + (ulonglong)uVar2) = param_3;
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0xbd8) != -1) {
      return;
    }
    cVar1 = -1;
  }
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb94e48) {
    *(byte *)(param_1 + 0xbaa) =
         *(byte *)(param_1 + 0xbaa) & 0xfe | *(char *)(param_1 + 0xbc2) == param_3;
    FUN_1408bd412(param_1,&DAT_14cb95128);
    cVar1 = *(char *)(param_1 + 0xbd8);
  }
  if (cVar1 == param_3) {
    return;
  }
  *(byte *)(param_1 + 0xba9) = param_2;
  *(char *)(param_1 + 0xbc2) = param_3;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x11);
  *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) | 1;
  FUN_148a208f8(param_1);
  return;
}



// FUNCTION 148a20f32 FUN_148a20f32 body=182 status=ok
// SIG undefined FUN_148a20f32(void)

void FUN_148a20f32(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
      (*(longlong *)
        (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8) != 0))
     && (plVar2 = *(longlong **)(param_1 + 0x1b0), plVar2 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar2 + 0x700))(plVar2);
    if ((cVar3 != '\0') || ((plVar2[0x78] == 0 && (*(char *)(param_1 + 0x178) == '\x03')))) {
      bVar1 = *(byte *)(param_1 + 0xbd8);
      FUN_148a1fce0(param_1,CONCAT31((int3)(((uint)bVar1 << 7) >> 8),
                                     *(undefined1 *)
                                      (*(longlong *)(param_1 + 0xbe8) + 4 +
                                      (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8)),
                    *(undefined1 *)(param_1 + 0xbc1));
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0xd60) != DAT_14cb94e30) || ((*(byte *)(param_1 + 0xb90) & 2) != 0))
  {
    *(byte *)(param_1 + 0xbaa) = *(byte *)(param_1 + 0xbaa) & 0xfd;
  }
  return;
}



// FUNCTION 148a20fe8 FUN_148a20fe8 body=143 status=ok
// SIG undefined FUN_148a20fe8(void)

void FUN_148a20fe8(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb95100) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 0xbe8) + 0x20 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x308))();
      }
    }
  }
  plVar2 = (longlong *)FUN_1401654a2(param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x80))(plVar2,0,0);
  }
  if (*param_2 == DAT_14cb94e30) {
    FUN_140ebdd2e(param_1);
    return;
  }
  return;
}



// FUNCTION 148a21078 FUN_148a21078 body=65 status=ok
// SIG undefined FUN_148a21078(void)

void FUN_148a21078(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_1401b4c98();
  puVar3 = (undefined8 *)(param_1 + 0xcf0);
  lVar2 = FUN_144a61814(uVar1,puVar3);
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*puVar3);
  }
  *puVar3 = 0;
  return;
}



// FUNCTION 148a210ba FUN_148a210ba body=602 status=ok
// SIG undefined FUN_148a210ba(void)

void FUN_148a210ba(longlong param_1,float param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x178) == '\x03') {
      FUN_148a0cff6(param_1,param_2);
    }
    else {
      FUN_148a0d4dc(param_1,param_2);
    }
  }
  FUN_1408bd412(param_1,&DAT_14cb94e50);
  lVar3 = FUN_1401b4c98(param_1);
  puVar1 = (undefined8 *)(param_1 + 0xcf0);
  lVar5 = *(longlong *)(param_1 + 0xcf0);
  if (param_2 <= 0.0) {
    if (lVar5 != 0) {
      lVar4 = FUN_144a61814(lVar3,puVar1);
      if (lVar4 != 0) {
        FUN_1405a424c(lVar3,lVar5);
      }
      *puVar1 = 0;
    }
  }
  else {
    local_98 = lVar5;
    lVar4 = FUN_144a61814(lVar3);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 1) != '\x02')) {
      local_98 = lVar5;
      lVar5 = FUN_144a61814(lVar3);
      if (lVar5 == 0) {
        fVar6 = -1.0;
      }
      else if (*(char *)(lVar5 + 1) == '\x01') {
        fVar6 = (float)(*(double *)(lVar5 + 8) - *(double *)(lVar3 + 0x140));
      }
      else if (*(char *)(lVar5 + 1) == '\x03') {
        fVar6 = 0.0;
      }
      else {
        fVar6 = (float)*(double *)(lVar5 + 8);
      }
      if (param_2 <= fVar6) goto LAB_148a2124c;
    }
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar2 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_b0[2] = lVar4;
    *local_b0 = &PTR_FUN_14b4ab980;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = &LAB_148a21316;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_b0);
    local_58 = 1;
    local_b8 = local_a0;
    local_a0[0] = 0;
    local_9c = 0xbf800000;
    FUN_1406f4044(lVar3,puVar1,&local_98,param_2);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_b0);
  }
LAB_148a2124c:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a21324 FUN_148a21324 body=79 status=ok
// SIG undefined FUN_148a21324(void)

void FUN_148a21324(longlong *param_1,char param_2)

{
  if (param_1[0x1ac] == DAT_14cb94e50) {
    if (param_2 != '\0') {
      if ((char)param_1[0x2f] == '\x03') {
        FUN_148a0d140(param_1);
      }
      else {
        FUN_148a0d9ca(param_1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000148a2136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8b8))(param_1);
    return;
  }
  return;
}



// FUNCTION 148a21374 FUN_148a21374 body=109 status=ok
// SIG undefined FUN_148a21374(void)

void FUN_148a21374(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1401b4c98();
  lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0xcf0));
  if (lVar2 != 0) {
    FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0xcf0));
  }
  *(undefined8 *)(param_1 + 0xcf0) = 0;
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb95120) {
    return;
  }
  FUN_1408bd412(param_1,&DAT_14cb95128);
  return;
}



// FUNCTION 148a21456 FUN_148a21456 body=82 status=ok
// SIG undefined FUN_148a21456(void)

void FUN_148a21456(longlong param_1,undefined4 param_2)

{
  if ((char)param_2 == '\0') {
    FUN_140994e4c(param_1,DAT_14cb94a18,*(undefined1 *)(param_1 + 0xbd8),0);
  }
  else {
    FUN_140980406(param_1,DAT_14cb94a18,*(undefined1 *)(param_1 + 0xbd8),0,0);
  }
  FUN_148a0cf71(param_1 + 0xa40,param_1,param_2);
  return;
}



// FUNCTION 148a214a8 FUN_148a214a8 body=39 status=ok
// SIG undefined FUN_148a214a8(void)

void FUN_148a214a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x188,0x10);
  FUN_140d50c48(uVar1,param_1);
  return;
}



// FUNCTION 148a21502 FUN_148a21502 body=155 status=ok
// SIG undefined FUN_148a21502(void)

void FUN_148a21502(longlong param_1,undefined8 param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != '\x01') {
    iVar1 = *(int *)(param_1 + 0x450);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x448);
      lVar3 = 0;
      do {
        FUN_1405b2cf0(*(undefined8 *)(lVar2 + lVar3),param_2,param_4);
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    if (param_3 == '\x02') {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x460);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x458);
    lVar3 = 0;
    do {
      FUN_1405b2cf0(*(undefined8 *)(lVar2 + lVar3),param_2,param_4);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 148a2159e FUN_148a2159e body=60 status=ok
// SIG undefined FUN_148a2159e(void)

void FUN_148a2159e(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x8c0) + 0x968))(param_1 + -0x8c0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + -0x8c0) + 0x400);
                    /* WARNING: Could not recover jumptable at 0x000148a215d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + -0x8c0,uVar1,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 148a215da thunk_FUN_1408bd596 body=7 status=ok
// SIG undefined thunk_FUN_1408bd596(void)

void thunk_FUN_1408bd596(undefined8 param_1)

{
  FUN_1408bd596(param_1,4);
  return;
}



// FUNCTION 148a215e2 FUN_148a215e2 body=109 status=ok
// SIG undefined FUN_148a215e2(void)

void FUN_148a215e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar3 = 0;
    do {
      FUN_1488c7986(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar3 = 0;
    do {
      FUN_1488c7986(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 148a21650 FUN_148a21650 body=159 status=ok
// SIG undefined FUN_148a21650(void)

void FUN_148a21650(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_3[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = uVar1;
  *(undefined8 *)(param_4 + 4) = DAT_14c846508;
  uVar5 = DAT_14c846500._4_4_;
  uVar4 = (undefined4)DAT_14c846500;
  uVar3 = DAT_14c8464f8._4_4_;
  uVar2 = (undefined4)DAT_14c8464f8;
  *param_4 = (undefined4)DAT_14c8464f8;
  param_4[1] = uVar3;
  param_4[2] = uVar4;
  param_4[3] = uVar5;
  lVar6 = FUN_14059f5ca(uVar2,&local_21);
  if (lVar6 != 0) {
    local_38 = local_21;
    FUN_14059f62a(lVar6,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a216f0 FUN_148a216f0 body=133 status=ok
// SIG undefined FUN_148a216f0(void)

void FUN_148a216f0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar4 = 0;
    do {
      FUN_1488c769c(*(undefined8 *)(lVar2 + lVar4),param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    if ((*(longlong *)(param_1 + 0xb18) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0xb20), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148a21765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2 ^ 1,DAT_14cb94e58,1);
      return;
    }
  }
  return;
}



// FUNCTION 148a21776 FUN_148a21776 body=155 status=ok
// SIG undefined FUN_148a21776(void)

void FUN_148a21776(longlong param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_4 & 0xfd) == 0) && (iVar1 = *(int *)(param_1 + 0x450), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x448);
    lVar3 = 0;
    do {
      FUN_1488c77fc(*(undefined8 *)(lVar2 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((param_4 < 2) && (iVar1 = *(int *)(param_1 + 0x460), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x458);
    lVar3 = 0;
    do {
      FUN_1488c77fc(*(undefined8 *)(lVar2 + lVar3),param_2,param_3);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 148a21812 FUN_148a21812 body=306 status=ok
// SIG undefined FUN_148a21812(void)

void FUN_148a21812(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 **local_50;
  undefined8 *local_48;
  undefined4 local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = param_1 + -0x8c0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14b4aba60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  puVar1[4] = FUN_148a215e2;
  *(undefined4 *)(puVar1 + 5) = 0;
  local_58 = param_1;
  local_50 = &local_48;
  if ((char)param_2 != '\0') {
    cVar4 = '\0';
    do {
      bVar5 = (byte)param_2;
      if ((param_2 & 1) != 0) {
        local_31 = cVar4;
        FUN_143ecb3b2(&local_58,&local_31);
      }
      param_2 = param_2 >> 1 & 0x7f;
      cVar4 = cVar4 + '\x01';
    } while (1 < bVar5);
  }
  FUN_1449db362(&local_48);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a219cc FUN_148a219cc body=158 status=ok
// SIG undefined FUN_148a219cc(void)

void FUN_148a219cc(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x820);
  plVar4 = *(longlong **)(param_1 + 0x828);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x900) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x908);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x908) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x900) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x908);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_148a21a3c;
    }
    *(longlong **)(param_1 + 0x908) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  LOCK();
  plVar3 = plVar4 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
LAB_148a21a3c:
                    /* WARNING: Could not recover jumptable at 0x000148a21a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 148a21a92 FUN_148a21a92 body=190 status=ok
// SIG undefined FUN_148a21a92(void)

uint * FUN_148a21a92(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1403e5e94(param_4);
  if (lVar3 == 0) goto switchD_148a21ac4_default;
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
    bVar2 = 1;
    break;
  case 1:
    bVar2 = FUN_1402273fc(lVar3);
    break;
  case 2:
    bVar2 = *(byte *)(lVar3 + 0xbd8);
    if (((int)(uint)bVar2 < *(int *)(lVar3 + 0xbf0)) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)(lVar3 + 0xbe8) + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8)
       , lVar3 != 0)) {
      lVar4 = FUN_140086c3a();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        bVar2 = FUN_148a19880(lVar3);
        break;
      }
    }
  default:
switchD_148a21ac4_default:
    bVar2 = 0;
    break;
  case 3:
    bVar2 = FUN_14022747e(lVar3);
  }
  bVar1 = *(byte *)(param_1 + 8);
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = (uint)(bVar2 ^ bVar1);
  *(undefined1 *)(param_2 + 8) = 1;
  return param_2;
}



// FUNCTION 148a21b50 FUN_148a21b50 body=19 status=ok
// SIG undefined FUN_148a21b50(void)

bool FUN_148a21b50(longlong param_1)

{
  if (param_1 != 0) {
    return 1 < *(byte *)(param_1 + 0x178);
  }
  return false;
}



// FUNCTION 148a21b64 FUN_148a21b64 body=31 status=ok
// SIG undefined FUN_148a21b64(void)

void FUN_148a21b64(longlong *param_1)

{
  if ((param_1 != (longlong *)0x0) && ((char)param_1[0x2f] == '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x000148a21b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x808))();
    return;
  }
  return;
}



// FUNCTION 148a21b84 FUN_148a21b84 body=201 status=ok
// SIG undefined FUN_148a21b84(void)

void FUN_148a21b84(longlong param_1,ulonglong param_2,char param_3)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
      plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar2 != (longlong *)0x0) {
        if (param_3 != '\0') {
          fVar4 = (float)(int)param_2 / 100.0;
          if (1.0 <= fVar4) {
            fVar4 = 1.0;
          }
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          iVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
          param_2 = (ulonglong)
                    (uint)-((int)ROUND(-0.5 - ((float)iVar3 * fVar4 + (float)iVar3 * fVar4)) >> 1);
        }
                    /* WARNING: Could not recover jumptable at 0x000148a21c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x358))(plVar2,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a21c4e FUN_148a21c4e body=55 status=ok
// SIG undefined FUN_148a21c4e(void)

undefined8 FUN_148a21c4e(longlong param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0))) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 0x10 +
              (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a21c7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2b8))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148a21c86 FUN_148a21c86 body=123 status=ok
// SIG undefined FUN_148a21c86(void)

undefined8 FUN_148a21c86(longlong param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) &&
     ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0))) {
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0xbe8) + 8 +
             (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8);
    if (lVar1 != 0) {
      lVar3 = FUN_140086c3a();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        cVar2 = FUN_148a19908(lVar1);
        if (cVar2 != '\0') {
          uVar4 = FUN_140284a0c(lVar1);
          return uVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148a21d02 FUN_148a21d02 body=42 status=ok
// SIG undefined FUN_148a21d02(void)

undefined8 FUN_148a21d02(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0xbd8);
  }
  FUN_1458dc048(param_1,param_2,uVar1);
  return param_1;
}



// FUNCTION 148a21d2c FUN_148a21d2c body=75 status=ok
// SIG undefined FUN_148a21d2c(void)

void FUN_148a21d2c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_1412bb140(uVar1,param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 148a21d78 FUN_148a21d78 body=75 status=ok
// SIG undefined FUN_148a21d78(void)

void FUN_148a21d78(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_1412bb140(uVar1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 148a21dc4 FUN_148a21dc4 body=43 status=ok
// SIG undefined FUN_148a21dc4(void)

void FUN_148a21dc4(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145b26070();
    if (lVar1 != 0) {
      FUN_140c6f3ae(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a21df0 FUN_148a21df0 body=43 status=ok
// SIG undefined FUN_148a21df0(void)

void FUN_148a21df0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145b26070();
    if (lVar1 != 0) {
      FUN_148a18cee(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a21e1c FUN_148a21e1c body=36 status=ok
// SIG undefined FUN_148a21e1c(void)

void FUN_148a21e1c(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145b26070();
    if (lVar1 != 0) {
      FUN_148a18cfe(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148a21e40 FUN_148a21e40 body=43 status=ok
// SIG undefined FUN_148a21e40(void)

void FUN_148a21e40(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_145b26070();
    if (lVar1 != 0) {
      FUN_148a18caa(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 148a21e6c FUN_148a21e6c body=195 status=ok
// SIG undefined FUN_148a21e6c(void)

undefined8 * FUN_148a21e6c(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  if (param_2 != 0) {
    FUN_148a21650(param_2,param_3,&local_38,local_50);
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_34;
    *(undefined4 *)(param_1 + 5) = uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_2c;
    param_1[6] = local_28;
    param_1[7] = 0;
    FUN_144a7484c(local_50,&local_78);
    *(undefined4 *)param_1 = local_78;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_74;
    *(undefined4 *)(param_1 + 1) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_6c;
    *(undefined4 *)(param_1 + 2) = local_68;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_64;
    *(undefined4 *)(param_1 + 3) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_5c;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a21f30 FUN_148a21f30 body=63 status=ok
// SIG undefined FUN_148a21f30(void)

void FUN_148a21f30(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      FUN_148a18444(uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148a21f70 FUN_148a21f70 body=204 status=ok
// SIG undefined FUN_148a21f70(void)

undefined8 FUN_148a21f70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 != 0) && ((longlong)*(int *)(param_1 + 0x408) != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x400);
    plVar1 = plVar5 + *(int *)(param_1 + 0x408);
    do {
      if (*plVar5 != 0) {
        uVar3 = FUN_143da615c();
        FUN_141738170(uVar3);
        if ((longlong)local_38 == 0) {
          bVar2 = true;
        }
        else {
          lVar4 = 0;
          do {
            bVar6 = *(longlong *)(local_40 + lVar4) == param_2;
            bVar2 = !bVar6;
            if (bVar6) break;
            bVar6 = (longlong)local_38 * 8 + -8 != lVar4;
            lVar4 = lVar4 + 8;
          } while (bVar6);
        }
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        if (!bVar2) {
          uVar3 = 1;
          goto LAB_148a22017;
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  uVar3 = 0;
LAB_148a22017:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148a2203e FUN_148a2203e body=350 status=ok
// SIG undefined FUN_148a2203e(void)

void FUN_148a2203e(longlong *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong *plVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94df0;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94df8;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94e00;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94e08;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94e10;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94e18;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = DAT_14cb94e20;
  UNRECOVERED_JUMPTABLE = DAT_14cb95030;
  if (DAT_14cb95030 != (code *)0x0) {
    plVar3 = &DAT_14cb95050;
    if (DAT_14cb95040 != (longlong *)0x0) {
      plVar3 = DAT_14cb95040;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000148a22191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 148a2219c FUN_148a2219c body=214 status=ok
// SIG undefined FUN_148a2219c(void)

void FUN_148a2219c(longlong param_1)

{
  int iVar1;
  
  FUN_148a22272(param_1 + 0x208);
  iVar1 = *(int *)(param_1 + 0x29c);
  FUN_140943f4f(*(undefined8 *)(param_1 + 0x290),*(undefined4 *)(param_1 + 0x298));
  *(undefined4 *)(param_1 + 0x298) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x29c) != 0)) {
    FUN_140ae7534(param_1 + 0x290,0);
  }
  iVar1 = *(int *)(param_1 + 0x2ac);
  FUN_140943f04(*(undefined8 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a8));
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2ac) != 0)) {
    FUN_148a27794(param_1 + 0x2a0);
  }
  if (*(int *)(param_1 + 0x2d4) < 0) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    FUN_1448aa092(param_1 + 0x2c0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  FUN_143daacd4(param_1);
  return;
}



// FUNCTION 148a22272 FUN_148a22272 body=59 status=ok
// SIG undefined FUN_148a22272(void)

void FUN_148a22272(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x7c)) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar1 = param_1;
    }
    FUN_140943ec3(lVar1,*(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    return;
  }
  FUN_148a2770c(param_1);
  return;
}



// FUNCTION 148a222ae FUN_148a222ae body=125 status=ok
// SIG undefined FUN_148a222ae(void)

undefined4 * FUN_148a222ae(longlong param_1,undefined4 *param_2,longlong param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((longlong)*(int *)(param_1 + 0x298) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x290);
    lVar2 = 0;
    lVar3 = 0;
    do {
      if ((*(longlong *)(lVar1 + lVar2) == param_3) &&
         ((*(uint *)(lVar1 + 0x18 + lVar2) & 1 << (param_4 & 0x1f)) != 0)) {
        if (lVar1 - lVar3 != 0) {
          uVar4 = FUN_145a16d70((lVar1 - lVar3) + 8);
        }
        break;
      }
      lVar3 = lVar3 + -0x20;
      lVar2 = lVar2 + 0x20;
    } while (-lVar3 != (longlong)*(int *)(param_1 + 0x298) * 0x20);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar4;
  *(undefined1 *)(param_2 + 8) = 3;
  return param_2;
}



// FUNCTION 148a2232c FUN_148a2232c body=129 status=ok
// SIG undefined FUN_148a2232c(void)

longlong * FUN_148a2232c(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x280);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_14480809c(param_2);
      iVar1 = *(int *)(param_1 + 0x280);
      if (0 < iVar1) {
        uVar2 = 0;
        do {
          if ((*(uint *)(param_1 + 0x288) >> (uVar2 & 0x1f) & 1) != 0) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1447808da(param_2,iVar1);
            }
            *(uint *)(*param_2 + (longlong)iVar1 * 4) = uVar2;
            iVar1 = *(int *)(param_1 + 0x280);
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < iVar1);
      }
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 148a223ae FUN_148a223ae body=142 status=ok
// SIG undefined FUN_148a223ae(void)

void FUN_148a223ae(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x78) = param_2;
    if ((uint)(*(int *)(param_1 + 0x7c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148a278c6(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1;
    }
    FUN_148a27a6f((longlong)iVar1 * 0x38 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148a27954(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148a279bc(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148a2243e FUN_148a2243e body=677 status=ok
// SIG undefined FUN_148a2243e(void)

void FUN_148a2243e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_f4;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined2 *local_e0;
  int local_d8;
  longlong local_d0 [2];
  longlong local_c0;
  int local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  undefined4 local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1488cd55e();
  if (param_2 != 0) {
    lVar2 = FUN_144a7d050();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      uVar11 = *(undefined4 *)(param_2 + 0x8f8);
      if ((longlong)*(int *)(param_1 + 0x298) != 0) {
        puVar7 = *(undefined8 **)(param_1 + 0x290);
        puVar3 = puVar7 + (longlong)*(int *)(param_1 + 0x298) * 4;
        local_e8 = param_3 + 4;
        local_f4 = uVar11;
        local_f0 = puVar3;
        do {
          if (*(char *)((longlong)puVar7 + 0x15) != '\x03') {
            *(undefined4 *)(param_2 + 0x8f8) = *(undefined4 *)(puVar7 + 3);
            local_a8 = local_a8 & 0xffffff00;
            local_80 = 0;
            FUN_1456bb102(&local_a8,param_2);
            local_78[0] = 0;
            local_50 = 0;
            FUN_1470dc50a(&local_c0,*puVar7,&local_a8);
            FUN_144a5ac3a(local_78);
            FUN_144a5ac3a(&local_a8);
            iVar8 = 0;
            if ((longlong)local_b8 != 0) {
              lVar2 = (longlong)local_b8 * 0x28;
              lVar10 = local_c0;
              do {
                local_a8 = FUN_143daac96(puVar7);
                local_90 = 4;
                local_88 = 3;
                uVar4 = *puVar7;
                uVar11 = *(undefined4 *)(puVar7 + 3);
                FUN_1410a642a(&local_e0,uVar4);
                puVar9 = &DAT_149dfb77a;
                if (local_d8 != 0) {
                  puVar9 = local_e0;
                }
                FUN_140002266(local_d0,L"%s (UM 0x%x)",puVar9,uVar11);
                pcVar1 = (code *)*param_3;
                plVar5 = (longlong *)param_3[2];
                if ((longlong *)param_3[2] == (longlong *)0x0) {
                  plVar5 = local_e8;
                }
                local_b0 = uVar4;
                uVar4 = (**(code **)(*plVar5 + 8))();
                local_108 = lVar10;
                (*pcVar1)(uVar4,local_d0,&local_b0,&local_a8);
                if (local_d0[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_e0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
                if (pcVar1 != (code *)0x0) {
                  puVar6 = &local_a8;
                  if (0x18 < local_90) {
                    puVar6 = (uint *)CONCAT44(uStack_a4,local_a8);
                  }
                  (*pcVar1)(puVar6);
                }
                if (0x18 < local_90) {
                  FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
                }
                lVar10 = lVar10 + 0x28;
                lVar2 = lVar2 + -0x28;
                uVar11 = local_f4;
                iVar8 = local_b8;
              } while (lVar2 != 0);
            }
            FUN_1401b95a9(local_c0,iVar8);
            puVar3 = local_f0;
            if (local_c0 != 0) {
              FUN_1400020a8();
              puVar3 = local_f0;
            }
          }
          puVar7 = puVar7 + 4;
        } while (puVar7 != puVar3);
      }
      *(undefined4 *)(param_2 + 0x8f8) = uVar11;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a226e4 FUN_148a226e4 body=2497 status=ok
// SIG undefined FUN_148a226e4(void)

void FUN_148a226e4(longlong param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined2 **ppuVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 **ppuVar16;
  longlong lVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined4 local_190;
  uint local_184;
  undefined8 *local_180;
  longlong *local_178;
  longlong local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  code **local_148;
  longlong *local_140;
  undefined2 **local_138;
  undefined8 local_130;
  undefined2 *local_128;
  int local_120;
  undefined8 *local_118;
  int local_110;
  longlong local_108 [2];
  code *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  undefined2 **local_d0;
  undefined2 *local_b0;
  int local_a8;
  undefined2 **local_90;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1488cd7ca();
  local_184 = param_2;
  local_170 = param_1;
  FUN_148a230a6(local_f8,param_2,*(undefined4 *)(param_1 + 0x2b8));
  pcVar2 = (code *)*param_3;
  local_178 = param_3 + 4;
  plVar7 = (longlong *)param_3[2];
  if ((longlong *)param_3[2] == (longlong *)0x0) {
    plVar7 = local_178;
  }
  local_180 = param_3;
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar4,local_f8);
  if (local_f8[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(local_170 + 0x2b8) != 0) {
    plVar7 = *(longlong **)(local_170 + 0x2b0);
    local_158 = plVar7 + (longlong)*(int *)(local_170 + 0x2b8) * 5;
    local_168 = *(longlong *)(local_170 + 0x200);
    local_150 = local_170 + 0x290;
    local_148 = local_f8;
    if ((local_184 & 1) == 0) {
      local_148 = (code **)0x0;
    }
    do {
      FUN_142b160fc(plVar7,&local_80);
      FUN_1400021e4(&local_80,&local_b0);
      puVar14 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar14 = local_b0;
      }
      FUN_148a2313c(local_f8,local_184,puVar14);
      pcVar2 = (code *)*local_180;
      plVar6 = (longlong *)local_180[2];
      if ((longlong *)local_180[2] == (longlong *)0x0) {
        plVar6 = local_178;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar4,local_f8);
      if (local_f8[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_140 = plVar7 + 1;
      plVar6 = (longlong *)plVar7[3];
      if ((longlong *)plVar7[3] == (longlong *)0x0) {
        plVar6 = local_140;
      }
      lVar17 = plVar7[4];
      local_160 = plVar7;
      if ((longlong)(int)lVar17 != 0) {
        lVar13 = 0;
        do {
          FUN_148a231d6(local_f8,local_184,*(undefined4 *)((longlong)plVar6 + lVar13),
                        *(undefined4 *)((longlong)plVar6 + lVar13 + 4));
          pcVar2 = (code *)*local_180;
          plVar7 = (longlong *)local_180[2];
          if ((longlong *)local_180[2] == (longlong *)0x0) {
            plVar7 = local_178;
          }
          uVar4 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(uVar4,local_f8);
          if (local_f8[0] != (code *)0x0) {
            FUN_1400020a8();
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar17 * 8 != lVar13);
      }
      plVar7 = local_160;
      if ((longlong)*(int *)(local_168 + 0x30) != 0) {
        lVar17 = *(longlong *)(local_168 + 0x28);
        lVar13 = (longlong)*(int *)(local_168 + 0x30) * 0x40 + lVar17;
        do {
          if (*(longlong *)(lVar17 + 0x38) == *plVar7) {
            local_70 = (undefined2 **)0x0;
            local_68 = 0x200000000;
            lVar5 = *(longlong *)(lVar17 + 0x18);
            if (lVar5 == 0) {
              uVar4 = FUN_14016979c();
              lVar5 = FUN_14477b664(uVar4);
              *(longlong *)(lVar17 + 0x18) = lVar5;
            }
            lVar9 = *(longlong *)(lVar17 + 0x20);
            if (lVar9 == 0) {
              if (lVar5 == 0) {
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                if (*(longlong *)(lVar17 + 0x10) != 0) {
                  plVar6 = *(longlong **)(lVar5 + 0xb8);
                  if ((plVar6 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) {
                    lVar9 = 0;
                  }
                  else {
                    uVar4 = (**(code **)(*plVar6 + 0x110))(plVar6);
                    lVar9 = FUN_144aff482(uVar4,(longlong *)(lVar17 + 0x10));
                  }
                  *(longlong *)(lVar17 + 0x20) = lVar9;
                }
              }
            }
            FUN_148a23278(local_150,lVar9);
            ppuVar12 = local_70;
            if (local_70 == (undefined2 **)0x0) {
              ppuVar12 = &local_80;
            }
            if ((longlong)(int)local_68 != 0) {
              local_138 = ppuVar12 + (int)local_68;
              do {
                plVar6 = (longlong *)plVar7[3];
                if ((longlong *)plVar7[3] == (longlong *)0x0) {
                  plVar6 = local_140;
                }
                fVar19 = 0.0;
                if ((longlong)(int)plVar7[4] != 0) {
                  lVar5 = 0;
                  do {
                    if ((*(uint *)((longlong)plVar6 + lVar5) & *(uint *)(*ppuVar12 + 0xc)) != 0) {
                      fVar19 = fVar19 + *(float *)((longlong)plVar6 + lVar5 + 4);
                    }
                    lVar5 = lVar5 + 8;
                  } while ((longlong)(int)plVar7[4] * 8 != lVar5);
                }
                local_90 = (undefined2 **)0x0;
                local_88 = 0x200000000;
                local_e8 = (undefined ***)0x0;
                local_d8 = &PTR_LAB_14b4abc20;
                local_d0 = &local_b0;
                local_f8[0] = FUN_143ecb5dc;
                uVar18 = FUN_140ac2084(local_170,lVar17,fVar19,local_148);
                uVar4 = FUN_146246322();
                FUN_1401cfad2(uVar4,&local_118,*(undefined1 *)(lVar17 + 0x2d));
                puVar11 = (undefined8 *)&DAT_149dfb77a;
                if (local_110 != 0) {
                  puVar11 = local_118;
                }
                uVar1 = *(undefined4 *)(*ppuVar12 + 0xc);
                local_130 = *(undefined8 *)(lVar17 + 0x10);
                FUN_1400021e4(&local_130,&local_128);
                puVar14 = &DAT_149dfb77a;
                if (local_120 != 0) {
                  puVar14 = local_128;
                }
                local_198 = puVar11;
                local_190 = uVar18;
                FUN_148a232e2(local_108,local_184,puVar14,uVar1);
                pcVar2 = (code *)*local_180;
                plVar7 = (longlong *)local_180[2];
                if ((longlong *)local_180[2] == (longlong *)0x0) {
                  plVar7 = local_178;
                }
                uVar4 = (**(code **)(*plVar7 + 8))();
                (*pcVar2)(uVar4,local_108);
                if (local_108[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_128 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_118 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                if ((local_184 & 1) != 0) {
                  ppuVar16 = local_90;
                  if (local_90 == (undefined2 **)0x0) {
                    ppuVar16 = &local_b0;
                  }
                  lVar5 = (longlong)(int)local_88;
                  if (lVar5 != 0) {
                    lVar9 = 0;
                    do {
                      local_198 = (undefined8 *)&DAT_149dfb77a;
                      if (*(int *)((longlong)ppuVar16 + lVar9 + 8) != 0) {
                        local_198 = *(undefined8 **)((longlong)ppuVar16 + lVar9);
                      }
                      FUN_1488ce3be(local_108,local_184,4,&DAT_149e0625e);
                      pcVar2 = (code *)*local_180;
                      plVar7 = (longlong *)local_180[2];
                      if ((longlong *)local_180[2] == (longlong *)0x0) {
                        plVar7 = local_178;
                      }
                      uVar4 = (**(code **)(*plVar7 + 8))();
                      (*pcVar2)(uVar4,local_108);
                      if (local_108[0] != 0) {
                        FUN_1400020a8();
                      }
                      lVar9 = lVar9 + 0x10;
                    } while (lVar5 * 0x10 != lVar9);
                  }
                }
                if (local_f8[0] != (code *)0x0) {
                  pppuVar8 = local_e8;
                  if (local_e8 == (undefined ***)0x0) {
                    pppuVar8 = &local_d8;
                  }
                  (*(code *)(*pppuVar8)[2])();
                }
                FUN_145ff2774(&local_b0);
                ppuVar12 = ppuVar12 + 1;
                plVar7 = local_160;
              } while (ppuVar12 != local_138);
            }
            if (local_70 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
          }
          lVar17 = lVar17 + 0x40;
        } while (lVar17 != lVar13);
      }
      FUN_140056680(local_f8,&DAT_149dfb77a);
      pcVar2 = (code *)*local_180;
      plVar6 = (longlong *)local_180[2];
      if ((longlong *)local_180[2] == (longlong *)0x0) {
        plVar6 = local_178;
      }
      uVar4 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar4,local_f8);
      if (local_f8[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      plVar7 = plVar7 + 5;
    } while (plVar7 != local_158);
    if (*(int *)(local_170 + 0x2b8) != 0) goto LAB_148a227d9;
  }
  FUN_140056680(local_f8,&DAT_149dfb77a);
  pcVar2 = (code *)*local_180;
  plVar7 = (longlong *)local_180[2];
  if ((longlong *)local_180[2] == (longlong *)0x0) {
    plVar7 = local_178;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar4,local_f8);
  if (local_f8[0] != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_148a227d9:
  FUN_148a23398(local_f8,local_184,*(undefined4 *)(local_170 + 0x280));
  pcVar2 = (code *)*local_180;
  plVar7 = (longlong *)local_180[2];
  if ((longlong *)local_180[2] == (longlong *)0x0) {
    plVar7 = local_178;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar4,local_f8);
  if (local_f8[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(local_170 + 0x280)) {
    lVar17 = local_170 + 0x208;
    iVar10 = 0;
    lVar13 = 0x28;
    do {
      lVar5 = *(longlong *)(local_170 + 0x278);
      if (*(longlong *)(local_170 + 0x278) == 0) {
        lVar5 = lVar17;
      }
      FUN_148a23432(local_f8,local_184,iVar10);
      pcVar2 = (code *)*local_180;
      plVar7 = (longlong *)local_180[2];
      if ((longlong *)local_180[2] == (longlong *)0x0) {
        plVar7 = local_178;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar4,local_f8);
      if (local_f8[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_1410a642a(&local_b0,*(undefined8 *)(lVar5 + lVar13));
      puVar14 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar14 = local_b0;
      }
      FUN_148a234cc(local_f8,local_184,puVar14);
      pcVar2 = (code *)*local_180;
      plVar7 = (longlong *)local_180[2];
      if ((longlong *)local_180[2] == (longlong *)0x0) {
        plVar7 = local_178;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar4,local_f8);
      if (local_f8[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_f8,&DAT_149dfb77a);
      pcVar2 = (code *)*local_180;
      plVar7 = (longlong *)local_180[2];
      if ((longlong *)local_180[2] == (longlong *)0x0) {
        plVar7 = local_178;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar4,local_f8);
      if (local_f8[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 0x38;
    } while (iVar10 < *(int *)(local_170 + 0x280));
  }
  FUN_148a23566(local_f8,local_184,*(undefined4 *)(local_170 + 0x298));
  pcVar2 = (code *)*local_180;
  plVar7 = (longlong *)local_180[2];
  if ((longlong *)local_180[2] == (longlong *)0x0) {
    plVar7 = local_178;
  }
  uVar4 = (**(code **)(*plVar7 + 8))();
  (*pcVar2)(uVar4,local_f8);
  if (local_f8[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(local_170 + 0x298) != 0) {
    puVar11 = *(undefined8 **)(local_170 + 0x290);
    lVar17 = (longlong)*(int *)(local_170 + 0x298) << 5;
    do {
      FUN_1470b0b78(puVar11 + 1,&local_b0);
      puVar14 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar14 = local_b0;
      }
      FUN_1410a642a(&local_80,*puVar11);
      puVar15 = &DAT_149dfb77a;
      if (local_78 != 0) {
        puVar15 = local_80;
      }
      local_198 = (undefined8 *)puVar14;
      FUN_148a23600(local_f8,local_184,*(undefined4 *)(puVar11 + 3),puVar15);
      pcVar2 = (code *)*local_180;
      plVar7 = (longlong *)local_180[2];
      if ((longlong *)local_180[2] == (longlong *)0x0) {
        plVar7 = local_178;
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar4,local_f8);
      if (local_f8[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_198 = local_180;
      FUN_143daadac(local_170,2,puVar11,local_184);
      puVar11 = puVar11 + 4;
      lVar17 = lVar17 + -0x20;
    } while (lVar17 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a230a6 FUN_148a230a6 body=149 status=ok
// SIG undefined FUN_148a230a6(void)

undefined8 FUN_148a230a6(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Use Mode Stats ({value}%d{header}):");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2313c FUN_148a2313c body=152 status=ok
// SIG undefined FUN_148a2313c(void)

undefined8 FUN_148a2313c(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Stat {value}%s{header}:");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a231d6 FUN_148a231d6 body=161 status=ok
// SIG undefined FUN_148a231d6(void)

undefined8 FUN_148a231d6(undefined8 param_1,undefined4 param_2,undefined8 param_3,float param_4)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"UM({value}0x%x{normal}): Value={value}%g{normal}",param_3,
                (double)param_4);
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a23278 FUN_148a23278 body=106 status=ok
// SIG undefined FUN_148a23278(void)

void FUN_148a23278(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar4 = (longlong *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) << 5;
    do {
      if (*plVar4 == param_2) {
        iVar1 = *(int *)(param_3 + 0x18);
        *(uint *)(param_3 + 0x18) = iVar1 + 1U;
        if (*(uint *)(param_3 + 0x1c) < iVar1 + 1U) {
          FUN_148a27b12(param_3,iVar1);
        }
        lVar2 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar2 = param_3;
        }
        *(longlong **)(lVar2 + (longlong)iVar1 * 8) = plVar4;
      }
      plVar4 = plVar4 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 148a232e2 FUN_148a232e2 body=180 status=ok
// SIG undefined FUN_148a232e2(void)

undefined8
FUN_148a232e2(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,float param_6)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  double local_40;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (double)param_6;
  local_48 = (undefined2 *)param_5;
  FUN_140002266(&local_30,L"{value}%s{normal} UM({value}0x%x{normal}): %s={value}%g");
  local_48 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_48 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",6);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a23398 FUN_148a23398 body=152 status=ok
// SIG undefined FUN_148a23398(void)

undefined8 FUN_148a23398(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Use Modes ({value}%d{header}):");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a23432 FUN_148a23432 body=152 status=ok
// SIG undefined FUN_148a23432(void)

undefined8 FUN_148a23432(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"Use Mode[{value}%d{normal}]:");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a234cc FUN_148a234cc body=152 status=ok
// SIG undefined FUN_148a234cc(void)

undefined8 FUN_148a234cc(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"DamageType: {value}%s");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",6);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a23566 FUN_148a23566 body=152 status=ok
// SIG undefined FUN_148a23566(void)

undefined8 FUN_148a23566(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Use Mode Associated Attributes ({value}%d{header}):");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a23600 FUN_148a23600 body=165 status=ok
// SIG undefined FUN_148a23600(void)

undefined8
FUN_148a23600(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)param_5;
  FUN_140002266(&local_30,L"UM({value}0x%x{normal}) {value}%s{normal}: %s");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a236a6 FUN_148a236a6 body=840 status=ok
// SIG undefined FUN_148a236a6(void)

undefined1 (*) [16]
FUN_148a236a6(undefined1 (*param_1) [16],longlong param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    *(double *)param_1[1] = param_4[2];
    dVar11 = param_4[1];
    *(double *)*param_1 = *param_4;
    *(double *)(*param_1 + 8) = dVar11;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_f8);
  }
  if (*param_3 != 0) {
    plVar7 = (longlong *)FUN_144a545f2(param_2,*param_3,0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x4a8))(plVar7,&local_d8,*param_3,0);
      local_98 = *param_4 * local_98;
      dStack_90 = param_4[1] * dStack_90;
      local_88 = param_4[2] * local_88;
      dVar11 = dStack_90 * local_d8 - local_98 * dStack_d0;
      dVar12 = local_88 * dStack_d0 - dStack_90 * local_c8;
      dVar13 = local_98 * local_c8 - local_d8 * local_88;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar11 = dVar11 + dVar11;
      dStack_b0 = (local_c8 * dVar12 - local_d8 * dVar11) + dStack_c0 * dVar13 + dStack_90 +
                  dStack_b0;
      auVar2._8_4_ = SUB84(dStack_b0,0);
      auVar2._0_8_ = (dVar11 * dStack_d0 - dVar13 * local_c8) + dStack_c0 * dVar12 + local_98 +
                     local_b8;
      auVar2._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
      *param_1 = auVar2;
      *(double *)param_1[1] =
           dVar11 * dStack_c0 + local_88 + (dVar13 * local_d8 - dVar12 * dStack_d0) + local_a8;
      goto LAB_148a23811;
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x1c8);
  if (lVar1 == 0) {
    *(undefined8 *)param_1[1] = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8;
    *(undefined8 *)*param_1 = DAT_14c8464e0;
    *(undefined8 *)(*param_1 + 8) = uVar6;
  }
  else {
    uVar6 = *(undefined8 *)(lVar1 + 0x268);
    *(undefined8 *)*param_1 = *(undefined8 *)(lVar1 + 0x260);
    *(undefined8 *)(*param_1 + 8) = uVar6;
    *(undefined8 *)param_1[1] = *(undefined8 *)(lVar1 + 0x270);
  }
  dVar11 = param_4[2];
  if ((*param_4 == 0.0) && (!NAN(*param_4))) {
    if ((param_4[1] == 0.0) && (((!NAN(param_4[1]) && (dVar11 == 0.0)) && (!NAN(dVar11)))))
    goto LAB_148a23811;
  }
  pdVar8 = (double *)&DAT_14c846480;
  if (lVar1 != 0) {
    pdVar8 = (double *)(lVar1 + 0x240);
  }
  dVar9 = *param_4 * pdVar8[8];
  dVar10 = param_4[1] * pdVar8[9];
  dVar11 = dVar11 * pdVar8[10];
  dVar3 = *pdVar8;
  dVar4 = pdVar8[1];
  dVar5 = pdVar8[2];
  dVar12 = pdVar8[3];
  dVar13 = pdVar8[3];
  dVar14 = dVar10 * dVar3 - dVar9 * dVar4;
  dVar15 = dVar11 * dVar4 - dVar10 * dVar5;
  dVar16 = dVar9 * dVar5 - dVar3 * dVar11;
  dVar15 = dVar15 + dVar15;
  dVar16 = dVar16 + dVar16;
  dVar14 = dVar14 + dVar14;
  *(double *)*param_1 =
       *(double *)*param_1 + (dVar14 * dVar4 - dVar16 * dVar5) + dVar12 * dVar15 + dVar9;
  *(double *)(*param_1 + 8) =
       (dVar5 * dVar15 - dVar3 * dVar14) + dVar13 * dVar16 + dVar10 + *(double *)(*param_1 + 8);
  *(double *)param_1[1] =
       dVar14 * dVar12 + dVar11 + (dVar16 * dVar3 - dVar15 * dVar4) + *(double *)param_1[1];
LAB_148a23811:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148a239ef FUN_148a239ef body=853 status=ok
// SIG undefined FUN_148a239ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_148a239ef(double *param_1,double *param_2,longlong param_3,longlong *param_4)

{
  double dVar1;
  longlong *plVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_a8 [16];
  double local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_4 != 0) {
    plVar2 = (longlong *)FUN_144a545f2(param_3,*param_4,0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x4a8))(plVar2,&local_e8,*param_4,0);
      local_c8 = *param_2 - local_c8;
      dStack_c0 = param_2[1] - dStack_c0;
      local_b8 = param_2[2] - local_b8;
      dVar4 = -local_e8;
      dStack_e0 = -dStack_e0;
      local_d8 = local_d8 * -1.0;
      dStack_d0 = dStack_d0 * 1.0;
      dVar13 = local_c8 * local_d8 - dVar4 * local_b8;
      dVar5 = dStack_c0 * dVar4 - local_c8 * dStack_e0;
      dVar1 = local_b8 * dStack_e0 - dStack_c0 * local_d8;
      dVar1 = dVar1 + dVar1;
      dVar13 = dVar13 + dVar13;
      dVar5 = dVar5 + dVar5;
      dVar8 = dStack_d0 * dVar5 + local_b8 + (dVar13 * dVar4 - dVar1 * dStack_e0);
      auVar6 = divpd(_DAT_149934d80,local_a8);
      dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_a8._0_8_)) & auVar6._0_8_) *
              ((dVar5 * dStack_e0 - dVar13 * local_d8) + dStack_d0 * dVar1 + local_c8);
      dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_a8._8_8_)) & auVar6._8_8_) *
              (local_e8 * dVar5 + local_d8 * dVar1 + dStack_d0 * dVar13 + dStack_c0);
      goto LAB_148a23cc6;
    }
  }
  pdVar3 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_3 + 0x1c8) != 0) {
    pdVar3 = (double *)(*(longlong *)(param_3 + 0x1c8) + 0x240);
  }
  dVar11 = *param_2 - pdVar3[4];
  dVar12 = param_2[1] - pdVar3[5];
  dVar8 = param_2[2] - pdVar3[6];
  auVar6 = *(undefined1 (*) [16])(pdVar3 + 8);
  dVar4 = -*pdVar3;
  dVar1 = -pdVar3[1];
  dVar9 = pdVar3[2] * -1.0;
  dVar10 = pdVar3[3] * 1.0;
  dVar14 = dVar11 * dVar9 - dVar4 * dVar8;
  dVar5 = dVar12 * dVar4 - dVar11 * dVar1;
  dVar13 = dVar8 * dVar1 - dVar12 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar5 = dVar5 + dVar5;
  dVar8 = dVar10 * dVar5 + dVar8 + (dVar14 * dVar4 - dVar13 * dVar1);
  auVar7 = divpd(_DAT_149934d80,auVar6);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar6._0_8_)) & auVar7._0_8_) *
          ((dVar5 * dVar1 - dVar14 * dVar9) + dVar10 * dVar13 + dVar11);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar6._8_8_)) & auVar7._8_8_) *
          (*pdVar3 * dVar5 + dVar9 * dVar13 + dVar10 * dVar14 + dVar12);
  local_98 = pdVar3[10];
LAB_148a23cc6:
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_98)) &
                       (ulonglong)(1.0 / local_98)) * dVar8;
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a23d46 FUN_148a23d46 body=179 status=ok
// SIG undefined FUN_148a23d46(void)

undefined8 * FUN_148a23d46(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b4ab7d0;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14b4ab710;
  param_1[4] = &PTR_FUN_14b4ab730;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x19) = 1;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 1;
  return param_1;
}



// FUNCTION 148a23dfa FUN_148a23dfa body=153 status=ok
// SIG undefined FUN_148a23dfa(void)

void FUN_148a23dfa(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ab710;
  param_1[4] = &PTR_FUN_14b4ab730;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140201ac2(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_148a26112(param_1 + 5);
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148a23e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148a23e94 FUN_148a23e94 body=43 status=ok
// SIG undefined FUN_148a23e94(void)

void FUN_148a23e94(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
  iVar1 = FUN_14490d72a(uVar2);
  *(bool *)(param_1 + 0xcd) = iVar1 != 3;
  return;
}



// FUNCTION 148a23ec0 FUN_148a23ec0 body=697 status=ok
// SIG undefined FUN_148a23ec0(void)

void FUN_148a23ec0(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined2 local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 8);
  local_88 = param_1 + 0x18;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  local_78 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_1449c0562(&local_90);
  }
  param_1 = param_1 + -0x20;
  local_b8 = local_80;
  iStack_b4 = iStack_7c;
  local_b0 = local_78;
  local_ac = local_74;
  local_c8 = local_90;
  local_c0 = local_88;
  local_98 = 0;
  local_d0 = plVar1;
  local_a8 = plVar1;
  local_a0 = plVar1;
  if (iStack_7c < *(int *)(local_88 + 0x18)) {
    do {
      lVar8 = *local_d0;
      lVar11 = (longlong)iStack_b4 * 0x1e8;
      lVar9 = lVar8 + lVar11 + 0x10;
      lVar6 = FUN_14479d2ce(lVar8 + lVar11);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar8 + 0x1d0 + lVar11);
        if (lVar6 != 0) {
          lVar9 = lVar6;
        }
        lVar8 = (longlong)*(int *)(lVar8 + 0x1d8 + lVar11);
        if (lVar8 != 0) {
          lVar8 = lVar8 * 0x38;
          do {
            FUN_148a2417a(param_1,lVar9,1);
            lVar9 = lVar9 + 0x38;
            lVar8 = lVar8 + -0x38;
          } while (lVar8 != 0);
        }
LAB_148a24101:
        FUN_148a27e1a(local_a8,iStack_b4);
        local_98 = CONCAT11(local_98._1_1_,1);
      }
      else {
        iVar13 = *(int *)(lVar8 + 0x1d8 + lVar11);
        uVar14 = (ulonglong)iVar13;
        if (0 < (longlong)uVar14) {
          lVar6 = uVar14 * 0x38;
          do {
            lVar6 = lVar6 + -0x38;
            lVar12 = *(longlong *)(lVar8 + lVar11 + 0x1d0);
            if (lVar12 == 0) {
              lVar12 = lVar9;
            }
            bVar4 = *(byte *)(lVar12 + 0x34 + lVar6);
            if ((bVar4 & 1) == 0) {
LAB_148a24012:
              if ((bVar4 & 4) != 0) {
                fVar15 = *(float *)(lVar12 + 0x28 + lVar6) - param_2;
                *(float *)(lVar12 + 0x28 + lVar6) = fVar15;
                if (fVar15 <= 0.0) {
                  uVar10 = 1;
                  goto LAB_148a2405b;
                }
              }
            }
            else {
              cVar5 = FUN_144729dda(lVar6 + lVar12);
              if (cVar5 != '\0') {
                bVar4 = *(byte *)(lVar12 + 0x34 + lVar6);
                goto LAB_148a24012;
              }
              uVar10 = 0;
LAB_148a2405b:
              uVar2 = *(undefined1 *)(*local_d0 + 8 + (longlong)iStack_b4 * 0x1e8);
              uVar7 = FUN_14479d2ce(*local_d0 + (longlong)iStack_b4 * 0x1e8);
              local_e8 = uVar2;
              local_e0 = uVar10;
              FUN_148a24324(param_1,lVar9,(int)uVar14 + -1,uVar7);
            }
            bVar3 = 1 < uVar14;
            uVar14 = uVar14 - 1;
          } while (bVar3);
          iVar13 = *(int *)(lVar8 + lVar11 + 0x1d8);
        }
        if (iVar13 == 0) goto LAB_148a24101;
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (iStack_b4 < *(int *)(local_c0 + 0x18));
    if (((local_98 & 1) != 0) && (local_98._1_1_ == '\x01')) {
      FUN_148a27c14(local_a0,(int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34));
    }
  }
  FUN_148a243fc(param_1);
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a2417a FUN_148a2417a body=425 status=ok
// SIG undefined FUN_148a2417a(void)

void FUN_148a2417a(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != '\0') && ((*(byte *)(param_2 + 0x34) & 2) != 0)) {
    lVar5 = FUN_14479d2ce(param_2);
    if ((lVar5 != 0) && (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac))) {
      lVar8 = param_1 + 0xb0;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar8 = *(longlong *)(param_1 + 0xb8);
      }
      iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & *(uint *)(lVar5 + 0xc)) *
                               4);
      if (iVar4 != -1) {
        lVar8 = *(longlong *)(param_1 + 0x78);
        do {
          lVar2 = lVar8 + (longlong)iVar4 * 0x10;
          if (*(uint *)(lVar8 + (longlong)iVar4 * 0x10) == *(uint *)(lVar5 + 0xc)) {
            piVar9 = (int *)(lVar2 + 4);
            if ((piVar9 != (int *)0x0 && lVar2 != 0) && (*piVar9 = *piVar9 + -1, *piVar9 == 0)) {
              uVar6 = FUN_144a7b040();
              plVar7 = (longlong *)FUN_144718840(lVar5,uVar6);
              lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
              FUN_140457ffc(lVar8 + 400,param_1);
              FUN_1409a11ae((longlong *)(param_1 + 0x78),*(undefined4 *)(lVar5 + 0xc));
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 8);
        } while (iVar4 != -1);
      }
    }
    *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) & 0xfd;
  }
  if (*(int *)(param_2 + 0x2c) != -1) {
    uVar6 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
    FUN_1407f7f84(&local_38,uVar6);
    if (local_30 != (longlong *)0x0) {
      iVar4 = (int)local_30[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(local_30 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_30;
      } while (!bVar10);
      LOCK();
      piVar9 = (int *)((longlong)local_30 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_38 != 0) {
          FUN_1488313f8(local_38,*(undefined4 *)(param_2 + 0x2c));
          *(undefined4 *)(param_2 + 0x2c) = 0xffffffff;
        }
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar9 = (int *)((longlong)plVar7 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a24324 FUN_148a24324 body=215 status=ok
// SIG undefined FUN_148a24324(void)

void FUN_148a24324(undefined8 param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  int iVar6;
  
  lVar5 = *(longlong *)(param_2 + 0x1c0);
  if (*(longlong *)(param_2 + 0x1c0) == 0) {
    lVar5 = param_2;
  }
  FUN_148a2417a(param_1,lVar5 + (longlong)(int)param_3 * 0x38,
                CONCAT71((int7)((ulonglong)in_RAX >> 8),param_6) & 0xffffffff);
  iVar1 = *(int *)(param_2 + 0x1c8);
  iVar6 = ~param_3 + iVar1;
  if (iVar6 != 0) {
    iVar4 = 1;
    if (iVar6 < 1) {
      iVar4 = iVar6;
    }
    lVar5 = *(longlong *)(param_2 + 0x1c0);
    if (*(longlong *)(param_2 + 0x1c0) == 0) {
      lVar5 = param_2;
    }
    memmove((void *)((longlong)(int)param_3 * 0x38 + lVar5),
            (void *)((longlong)(iVar1 - iVar4) * 0x38 + lVar5),(longlong)iVar4 * 0x38);
    iVar1 = *(int *)(param_2 + 0x1c8);
  }
  *(int *)(param_2 + 0x1c8) = iVar1 + -1;
  if (param_4 != 0 && iVar1 + -1 == 0) {
    uVar2 = FUN_140e819e6();
    plVar3 = (longlong *)FUN_144718840(param_4,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a243f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))
                (plVar3,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,0,
                 *(code **)(*plVar3 + 0x18));
      return;
    }
  }
  return;
}



// FUNCTION 148a243fc FUN_148a243fc body=52 status=ok
// SIG undefined FUN_148a243fc(void)

void FUN_148a243fc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x5c);
  if ((bool)*(char *)(param_1 + 0xcc) == iVar3 < iVar2) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  *(bool *)(param_1 + 0xcc) = iVar3 < iVar2;
  if (iVar2 <= iVar3) {
    FUN_1449db8d8();
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  FUN_140548616(&DAT_14cb0ba60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  if ((longlong)(int)DAT_14cb0ba30 != 0) {
    lVar8 = 0;
    do {
      if (*(longlong **)(DAT_14cb0ba28 + lVar8) == plVar1) goto LAB_144958e23;
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)DAT_14cb0ba30 * 0x10 != lVar8);
  }
  if (DAT_14c963ff1 == '\x01') {
    FUN_14032851c(&DAT_14cb0ba00,plVar1);
  }
  else {
    uVar6 = (**(code **)(*plVar1 + 8))(plVar1);
    uVar7 = (**(code **)(*plVar1 + 0x28))(plVar1);
    uVar5 = DAT_14cb0ba30;
    lVar8 = (longlong)(int)DAT_14cb0ba30;
    DAT_14cb0ba30 = DAT_14cb0ba30 + 1;
    if (DAT_14cb0ba34 < DAT_14cb0ba30) {
      FUN_14084398e(&DAT_14cb0ba28,uVar5);
    }
    lVar4 = DAT_14cb0ba28;
    lVar8 = lVar8 * 0x10;
    *(longlong **)(DAT_14cb0ba28 + lVar8) = plVar1;
    *(undefined1 *)(lVar4 + 8 + lVar8) = uVar6;
    *(undefined4 *)(lVar4 + 0xc + lVar8) = uVar7;
  }
LAB_144958e23:
                    /* WARNING: Could not recover jumptable at 0x000144958e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 148a24444 FUN_148a24444 body=52 status=ok
// SIG undefined FUN_148a24444(void)

void FUN_148a24444(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (lVar1 != 0) {
      FUN_148a24478(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148a24478 FUN_148a24478 body=527 status=ok
// SIG undefined FUN_148a24478(void)

void FUN_148a24478(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x28);
  local_50 = param_1 + 0x38;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_80 = local_48;
  iStack_7c = iStack_44;
  local_78 = local_40;
  local_74 = local_3c;
  local_90 = local_58;
  local_88 = local_50;
  local_60 = 0;
  local_98 = plVar1;
  local_70 = plVar1;
  local_68 = plVar1;
  if (iStack_44 < *(int *)(local_50 + 0x18)) {
    do {
      uVar8 = (ulonglong)*(int *)(*local_98 + 0x1d8 + (longlong)iStack_7c * 0x1e8);
      if (0 < (longlong)uVar8) {
        lVar9 = uVar8 * 0x38;
        do {
          lVar9 = lVar9 + -0x38;
          lVar5 = *local_98 + (longlong)iStack_7c * 0x1e8;
          lVar7 = *(longlong *)(lVar5 + 0x1d0);
          if (lVar7 == 0) {
            lVar7 = lVar5 + 0x10;
          }
          cVar4 = FUN_14069eaf4(lVar7 + lVar9,param_2);
          if (cVar4 != '\0') {
            uVar2 = *(undefined1 *)(*local_98 + 8 + (longlong)iStack_7c * 0x1e8);
            uVar6 = FUN_14479d2ce(*local_98 + (longlong)iStack_7c * 0x1e8);
            local_a0 = 1;
            local_a8 = uVar2;
            FUN_148a24324(param_1,(longlong)iStack_7c * 0x1e8 + *local_98 + 0x10,(int)uVar8 + -1,
                          uVar6);
          }
          bVar3 = 1 < uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar3);
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < *(int *)(local_88 + 0x18));
    if (((local_60 & 1) != 0) && (local_60._1_1_ == '\x01')) {
      FUN_148a27c14(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
    }
  }
  FUN_148a243fc(param_1);
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a24688 FUN_148a24688 body=157 status=ok
// SIG undefined FUN_148a24688(void)

undefined8 FUN_148a24688(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_14485c47a(&local_2c);
  local_24 = param_3;
  iVar2 = FUN_148a28050((longlong *)(param_1 + 0x28),
                        (uint)param_3 + (local_2c._4_4_ ^ (uint)local_2c),&local_2c);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar3 = (longlong)iVar2 * 0x1e8;
    if ((lVar1 + lVar3 + 0x10U & 0xffffffffffffffef) != 0) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),0 < *(int *)(lVar1 + lVar3 + 0x1d8));
      goto LAB_148a246f8;
    }
  }
  uVar4 = 0;
LAB_148a246f8:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a24726 FUN_148a24726 body=299 status=ok
// SIG undefined FUN_148a24726(void)

undefined8 FUN_148a24726(longlong param_1,longlong param_2,byte param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  byte local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_3c = 0;
    FUN_14485c47a(&local_3c);
    local_34 = param_3;
    iVar5 = FUN_148a28050((longlong *)(param_1 + 0x28),
                          (uint)param_3 + (local_3c._4_4_ ^ (uint)local_3c),&local_3c);
    if (iVar5 != -1) {
      lVar9 = (longlong)iVar5 * 0x1e8 + *(longlong *)(param_1 + 0x28);
      if ((lVar9 + 0x10 != 0 && lVar9 != 0) && (iVar5 = *(int *)(lVar9 + 0x1d8), 0 < iVar5)) {
        uVar6 = rand();
        iVar7 = (int)((float)iVar5 * ((float)(uVar6 & 0x7fff) / 32767.0));
        iVar10 = iVar5 + -1;
        if (iVar7 < iVar5 + -1) {
          iVar10 = iVar7;
        }
        lVar11 = lVar9 + 0x10;
        if (*(longlong *)(lVar9 + 0x1d0) != 0) {
          lVar11 = *(longlong *)(lVar9 + 0x1d0);
        }
        lVar9 = (longlong)iVar10 * 0x38;
        uVar8 = FUN_14479d2ce(lVar11 + lVar9);
        FUN_14485c47a(param_4,uVar8);
        *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(lVar11 + 0x18 + lVar9);
        puVar1 = (undefined4 *)(lVar11 + 8 + lVar9);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *(undefined4 *)(param_4 + 8) = *puVar1;
        *(undefined4 *)(param_4 + 0xc) = uVar2;
        *(undefined4 *)(param_4 + 0x10) = uVar3;
        *(undefined4 *)(param_4 + 0x14) = uVar4;
        uVar8 = *(undefined8 *)(lVar11 + 0x20 + lVar9);
        *(undefined8 *)(param_4 + 0x20) = uVar8;
        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        goto LAB_148a24746;
      }
    }
  }
  uVar8 = 0;
LAB_148a24746:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a24852 FUN_148a24852 body=1515 status=ok
// SIG undefined FUN_148a24852(void)

undefined4
FUN_148a24852(longlong param_1,longlong param_2,byte param_3,longlong param_4,undefined4 *param_5,
             longlong *param_6,float param_7,longlong *param_8,byte param_9,byte param_10)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  bool bVar16;
  undefined1 auStack_1f8 [32];
  byte local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  byte local_1b1;
  code *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_bc;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar9 = 0;
  if ((*param_8 != 0) && ((int)param_8[1] - 1U < 0xfffffffe)) {
    local_180 = *param_8;
    FUN_1446dcdd4(&local_160);
    lVar9 = FUN_141880288(&local_160);
    if (CONCAT44(uStack_144,uStack_148) != 0) {
      FUN_1400020a8();
    }
  }
  if (((lVar9 != 0 & (param_10 ^ 1)) == 0) &&
     (uVar8 = 0xffffffff, *(char *)(param_1 + 0xcd) == '\0')) goto LAB_148a248fe;
  local_160 = (code *)0x0;
  local_190 = param_2;
  FUN_14485c47a(&local_160);
  uStack_158 = CONCAT31(uStack_158._1_3_,param_3);
  local_1b1 = param_3;
  local_198 = FUN_148a27fc4(param_1 + 0x28,(uint)param_3 + (local_160._4_4_ ^ (uint)local_160),
                            &local_160);
  lVar10 = FUN_148a24e3e(local_198);
  iVar7 = *(int *)(param_1 + 200);
  *(int *)(param_1 + 200) = iVar7 + 1;
  *(int *)(lVar10 + 0x30) = iVar7;
  FUN_14485c47a(lVar10,param_4);
  bVar6 = *(byte *)(lVar10 + 0x34) & 0xfe | param_4 != 0;
  *(byte *)(lVar10 + 0x34) = bVar6;
  uVar8 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(lVar10 + 8) = *param_5;
  *(undefined4 *)(lVar10 + 0xc) = uVar8;
  *(undefined4 *)(lVar10 + 0x10) = uVar2;
  *(undefined4 *)(lVar10 + 0x14) = uVar3;
  *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_5 + 4);
  *(longlong *)(lVar10 + 0x20) = *param_6;
  if (((param_9 ^ 1) & param_4 != 0) == 1) {
    FUN_148a239ef(&local_160,param_5,param_4,param_6);
    *(ulonglong *)(lVar10 + 0x18) = CONCAT44(uStack_14c,local_150);
    *(longlong *)(lVar10 + 8) = (longlong)local_160;
    *(ulonglong *)(lVar10 + 0x10) = CONCAT44(uStack_154,uStack_158);
    bVar6 = *(byte *)(lVar10 + 0x34);
  }
  lVar4 = local_190;
  *(byte *)(lVar10 + 0x34) = bVar6 & 0xfb | (0.0 < param_7) << 2;
  if (0.0 < param_7) {
    *(float *)(lVar10 + 0x28) = param_7;
  }
  if (lVar9 != 0) {
    local_1a0 = (longlong *)(lVar10 + 8);
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))();
    FUN_1407f7f84(&local_160);
    plVar12 = (longlong *)CONCAT44(uStack_154,uStack_158);
    if (plVar12 != (longlong *)0x0) {
      local_1a8 = lVar10 + 0x20;
      iVar7 = (int)plVar12[1];
      do {
        if (iVar7 == 0) {
          plVar12 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)plVar12[1];
        bVar16 = iVar7 == iVar5;
        if (bVar16) {
          *(int *)(plVar12 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar16);
      LOCK();
      piVar15 = (int *)((longlong)CONCAT44(uStack_154,uStack_158) + 0xc);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_154,uStack_158) + 0x10))();
      }
      if (plVar12 != (longlong *)0x0) {
        if (local_160 != (code *)0x0) {
          local_1b0 = local_160;
          memset(&local_160,0,0x100);
          local_160 = (code *)CONCAT44(0x3f800000,(uint)local_160);
          local_bc = 0xffffffff;
          lVar13 = param_4;
          if (param_4 == 0) {
            uVar11 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))
                               ((longlong *)(param_1 + 0x20));
            lVar13 = FUN_14494016c(uVar11,0,1);
          }
          FUN_140871de8(&local_180,lVar13);
          local_98 = local_170;
          uStack_94 = uStack_16c;
          uStack_90 = uStack_168;
          uStack_8c = uStack_164;
          local_a8[0] = local_180;
          local_108 = (undefined4)DAT_14c8462c0;
          uStack_104 = DAT_14c8462c0._4_4_;
          uStack_100 = (undefined4)DAT_14c8462c8;
          uStack_fc = DAT_14c8462c8._4_4_;
          local_f8 = DAT_14c8462d0;
          local_120 = (undefined4)DAT_14c8462c0;
          uStack_11c = DAT_14c8462c0._4_4_;
          uStack_118 = (undefined4)DAT_14c8462c8;
          uStack_114 = DAT_14c8462c8._4_4_;
          local_110 = DAT_14c8462d0;
          local_70 = *param_6;
          if (local_70 != 0 && param_4 != 0) {
            lVar13 = FUN_144a545f2(param_4,local_70,0);
            if (lVar13 == 0) {
LAB_148a24db7:
              lVar13 = 0;
            }
            else {
              lVar14 = FUN_144a3a302();
              if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_148a24db7;
            }
            FUN_14485c47a(local_88,lVar13);
          }
          uVar11 = FUN_14485cccc(local_a8);
          FUN_148a236a6(&local_180,uVar11,local_1a8,local_1a0);
          local_138 = (int)local_180;
          uStack_134 = local_180._4_4_;
          uStack_130 = uStack_178;
          uStack_12c = uStack_174;
          local_150 = (int)local_180;
          uStack_14c = local_180._4_4_;
          uStack_148 = uStack_178;
          uStack_144 = uStack_174;
          local_1d0 = &DAT_14cb7bc40;
          local_1d8 = param_10;
          local_1c8 = 0;
          uVar8 = FUN_14883101a(local_1b0,lVar9,lVar4);
          *(undefined4 *)(lVar10 + 0x2c) = uVar8;
        }
        LOCK();
        plVar1 = plVar12 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar15 = (int *)((longlong)plVar12 + 0xc);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  if (param_4 != 0) {
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar9 = param_1 + 0xb0;
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        lVar9 = *(longlong *)(param_1 + 0xb8);
      }
      iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & *(uint *)(param_4 + 0xc))
                               * 4);
      if (iVar7 != -1) {
        lVar9 = *(longlong *)(param_1 + 0x78);
        do {
          lVar13 = lVar9 + (longlong)iVar7 * 0x10;
          if (*(uint *)(lVar9 + (longlong)iVar7 * 0x10) == *(uint *)(param_4 + 0xc)) {
            piVar15 = (int *)(lVar13 + 4);
            if (piVar15 != (int *)0x0 && lVar13 != 0) {
              *piVar15 = *piVar15 + 1;
              *(byte *)(lVar10 + 0x34) = *(byte *)(lVar10 + 0x34) | 2;
              goto LAB_148a24b13;
            }
            break;
          }
          iVar7 = *(int *)(lVar13 + 8);
        } while (iVar7 != -1);
      }
    }
    uVar11 = FUN_144a7b040();
    plVar12 = (longlong *)FUN_144718840(param_4,uVar11);
    if ((plVar12 != (longlong *)0x0) &&
       (lVar9 = (**(code **)(*plVar12 + 0x20))(plVar12), lVar9 != 0)) {
      *(byte *)(lVar10 + 0x34) = *(byte *)(lVar10 + 0x34) | 2;
      local_184 = *(undefined4 *)(param_4 + 0xc);
      local_160 = (code *)&local_184;
      FUN_148a284a0((longlong *)(param_1 + 0x78),&local_180,&local_160);
      *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 4 + (longlong)(int)local_180 * 0x10) = 1;
      lVar9 = (**(code **)(*plVar12 + 0x20))(plVar12);
      local_160 = FUN_148a24444;
      uStack_158 = 0;
      FUN_148a24e90(lVar9 + 400,&local_180,param_1,&local_160);
    }
  }
LAB_148a24b13:
  if ((lVar4 != 0) && (*(int *)(local_198 + 0x1c8) == 1)) {
    uVar11 = FUN_140e819e6();
    plVar12 = (longlong *)FUN_144718840(lVar4,uVar11);
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12,local_1b1,1);
    }
  }
  if ((*(byte *)(lVar10 + 0x34) & 4) != 0) {
    FUN_148a243fc(param_1);
  }
  uVar8 = *(undefined4 *)(lVar10 + 0x30);
LAB_148a248fe:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 148a24e3e FUN_148a24e3e body=82 status=ok
// SIG undefined FUN_148a24e3e(void)

longlong FUN_148a24e3e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  *(uint *)(param_1 + 0x1c8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_148a2841a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x38 + lVar2;
  FUN_148a283f7(lVar2);
  return lVar2;
}



// FUNCTION 148a24e90 FUN_148a24e90 body=237 status=ok
// SIG undefined FUN_148a24e90(void)

undefined8
FUN_148a24e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b4abc60;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1403524de(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a24f7e FUN_148a24f7e body=484 status=ok
// SIG undefined FUN_148a24f7e(void)

void FUN_148a24f7e(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x28);
  local_40 = param_1 + 0x38;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_88 = plVar1;
  local_60 = plVar1;
  local_58 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      lVar4 = *local_88;
      lVar8 = (longlong)iStack_6c * 0x1e8;
      lVar2 = lVar4 + lVar8;
      lVar7 = *(longlong *)(lVar2 + 0x1d0);
      if (*(longlong *)(lVar2 + 0x1d0) == 0) {
        lVar7 = lVar2 + 0x10;
      }
      if ((longlong)*(int *)(lVar2 + 0x1d8) != 0) {
        uVar10 = 0;
        do {
          if (*(int *)(lVar7 + 0x30 + uVar10) == param_2) {
            iVar9 = (int)(uVar10 >> 3) * -0x49249249;
            if (iVar9 != -1) {
              uVar3 = *(undefined1 *)(lVar4 + 8 + lVar8);
              uVar6 = FUN_14479d2ce(lVar4 + lVar8);
              local_90 = 1;
              local_98 = uVar3;
              FUN_148a24324(param_1,(longlong)iStack_6c * 0x1e8 + *local_88 + 0x10,iVar9,uVar6);
              bVar5 = true;
              goto LAB_148a250c7;
            }
            break;
          }
          uVar10 = uVar10 + 0x38;
        } while ((longlong)*(int *)(lVar2 + 0x1d8) * 0x38 - uVar10 != 0);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  bVar5 = false;
LAB_148a250c7:
  if (((char)local_50 == '\x01') && (local_50._1_1_ == '\x01')) {
    FUN_148a27c14(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
  }
  if (!bVar5) {
    FUN_148a243fc(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a25164 FUN_148a25164 body=292 status=ok
// SIG undefined FUN_148a25164(void)

void FUN_148a25164(longlong param_1,undefined8 param_2,byte param_3,longlong param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  byte local_68;
  undefined1 local_60;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_54 = 0;
    FUN_14485c47a(&local_54);
    local_4c = param_3;
    iVar3 = FUN_148a28050((longlong *)(param_1 + 0x28),
                          (uint)param_3 + (local_54._4_4_ ^ (uint)local_54),&local_54);
    if (iVar3 != -1) {
      lVar6 = (longlong)iVar3 * 0x1e8 + *(longlong *)(param_1 + 0x28);
      lVar8 = lVar6 + 0x10;
      if ((lVar8 != 0 && lVar6 != 0) &&
         (uVar7 = (ulonglong)*(int *)(lVar6 + 0x1d8), 0 < (longlong)uVar7)) {
        lVar5 = uVar7 * 0x38;
        do {
          lVar5 = lVar5 + -0x38;
          lVar4 = *(longlong *)(lVar6 + 0x1d0);
          if (*(longlong *)(lVar6 + 0x1d0) == 0) {
            lVar4 = lVar8;
          }
          cVar2 = FUN_14069eaf4(lVar4 + lVar5,param_4);
          if (cVar2 != '\0') {
            local_60 = 1;
            local_68 = param_3;
            FUN_148a24324(param_1,lVar8,(int)uVar7 + -1,param_2);
          }
          bVar1 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar1);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a252a2 FUN_148a252a2 body=296 status=ok
// SIG undefined FUN_148a252a2(void)

void FUN_148a252a2(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 0;
  FUN_14485c47a(&local_4c);
  local_44 = (undefined1)param_3;
  iVar1 = FUN_148a28050((longlong *)(param_1 + 0x28),
                        (param_3 & 0xff) + (local_4c._4_4_ ^ (uint)local_4c),&local_4c);
  if (iVar1 != -1) {
    lVar4 = (longlong)iVar1 * 0x1e8 + *(longlong *)(param_1 + 0x28);
    lVar6 = lVar4 + 0x10;
    if ((lVar6 != 0 && lVar4 != 0) && (0 < (longlong)*(int *)(lVar4 + 0x1d8))) {
      lVar7 = *(longlong *)(lVar4 + 0x1d0);
      if (*(longlong *)(lVar4 + 0x1d0) == 0) {
        lVar7 = lVar6;
      }
      lVar5 = (longlong)*(int *)(lVar4 + 0x1d8) * 0x38;
      do {
        FUN_148a2417a(param_1,lVar7,1);
        lVar7 = lVar7 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      uVar2 = FUN_140e819e6();
      plVar3 = (longlong *)FUN_144718840(param_2,uVar2);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_3,0);
      }
      *(undefined4 *)(lVar4 + 0x1d8) = 0;
      if (*(int *)(lVar4 + 0x1dc) != 0) {
        FUN_148a2877c(lVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_148a243fc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a253cc FUN_148a253cc body=340 status=ok
// SIG undefined FUN_148a253cc(void)

void FUN_148a253cc(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_54;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = 0;
  bVar1 = true;
  local_60 = param_2;
  do {
    bVar8 = bVar1;
    local_54 = 0;
    FUN_14485c47a(&local_54,param_2);
    local_4c = (undefined1)iVar5;
    iVar2 = FUN_148a28050((longlong *)(param_1 + 0x28),(local_54._4_4_ ^ (uint)local_54) + iVar5,
                          &local_54);
    if (iVar2 != -1) {
      lVar10 = (longlong)iVar2 * 0x1e8 + *(longlong *)(param_1 + 0x28);
      lVar9 = lVar10 + 0x10;
      if ((lVar9 != 0 && lVar10 != 0) && (0 < (longlong)*(int *)(lVar10 + 0x1d8))) {
        lVar7 = *(longlong *)(lVar10 + 0x1d0);
        if (*(longlong *)(lVar10 + 0x1d0) == 0) {
          lVar7 = lVar9;
        }
        lVar6 = (longlong)*(int *)(lVar10 + 0x1d8) * 0x38;
        do {
          FUN_148a2417a(param_1,lVar7,1);
          lVar7 = lVar7 + 0x38;
          lVar6 = lVar6 + -0x38;
        } while (lVar6 != 0);
        uVar3 = FUN_140e819e6();
        param_2 = local_60;
        plVar4 = (longlong *)FUN_144718840(local_60,uVar3);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,iVar5,0);
        }
        *(undefined4 *)(lVar10 + 0x1d8) = 0;
        if (*(int *)(lVar10 + 0x1dc) != 0) {
          FUN_148a2877c(lVar9);
        }
      }
    }
    iVar5 = 1;
    bVar1 = false;
  } while (bVar8);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_148a243fc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a25522 FUN_148a25522 body=358 status=ok
// SIG undefined FUN_148a25522(void)

undefined4
FUN_148a25522(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_80;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar8 = 0xffffffff;
  if (((param_1 != 0) && (lVar9 = FUN_1447210f0(), lVar9 != 0)) &&
     (FUN_148a19d84(&local_70,lVar9), uVar5 = param_9, uVar4 = param_8, uVar3 = param_6,
     local_68 != (longlong *)0x0)) {
    iVar7 = (int)local_68[1];
    do {
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar6 = (int)local_68[1];
      bVar11 = iVar7 == iVar6;
      if (bVar11) {
        *(int *)(local_68 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
      plVar10 = local_68;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    if (plVar10 != (longlong *)0x0) {
      uVar8 = 0xffffffff;
      if (local_70 != 0) {
        local_80 = uVar5;
        local_88 = uVar4;
        local_90 = param_7;
        local_98 = uVar3;
        local_a0 = (undefined1 *)&param_5;
        local_a8 = param_4;
        uVar8 = FUN_148a24852(local_70,param_1,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar10 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 148a2568a FUN_148a2568a body=192 status=ok
// SIG undefined FUN_148a2568a(void)

void FUN_148a2568a(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_1 + 0x180))(), lVar5 != 0)) &&
     (FUN_148a19d84(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_148a24f7e(local_28,param_2);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a2574c FUN_148a2574c body=216 status=ok
// SIG undefined FUN_148a2574c(void)

void FUN_148a2574c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_148a19d84(&local_38,lVar5), local_30 != (longlong *)0x0)) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_30;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_148a25164(local_38,param_1,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a25826 FUN_148a25826 body=201 status=ok
// SIG undefined FUN_148a25826(void)

void FUN_148a25826(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_148a19d84(&local_30,lVar5), local_28 != (longlong *)0x0)) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 != 0) {
        FUN_148a252a2(local_30,param_1,param_2);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a258f0 FUN_148a258f0 body=190 status=ok
// SIG undefined FUN_148a258f0(void)

void FUN_148a258f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_148a19d84(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_148a253cc(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a259b0 FUN_148a259b0 body=190 status=ok
// SIG undefined FUN_148a259b0(void)

void FUN_148a259b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_148a19d84(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_148a24478(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a25a70 FUN_148a25a70 body=221 status=ok
// SIG undefined FUN_148a25a70(void)

ulonglong FUN_148a25a70(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 == 0) || (lVar6 = FUN_1447210f0(), lVar6 == 0)) {
    uVar7 = 0;
    goto LAB_148a25a9f;
  }
  FUN_148a19d84(&local_40,lVar6);
  if (local_38 == (longlong *)0x0) {
LAB_148a25b34:
    bVar9 = false;
  }
  else {
    iVar4 = (int)local_38[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_38[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_38 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_38;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_148a25b34;
    bVar9 = local_40 != 0;
    if (bVar9) {
      uVar5 = FUN_148a24688(local_40,param_1,param_2);
      unaff_RBP = (ulonglong)uVar5;
    }
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uVar7 = CONCAT71((int7)(unaff_RBP >> 8),(byte)unaff_RBP & bVar9);
LAB_148a25a9f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148a25b4e FUN_148a25b4e body=222 status=ok
// SIG undefined FUN_148a25b4e(void)

undefined4 FUN_148a25b4e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = 0;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_148a19d84(&local_38,lVar5), local_30 != (longlong *)0x0)) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    uVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      uVar6 = 0;
      if ((local_38 != 0) && (lVar5 = FUN_148a1f28e(local_38,param_1,param_2), lVar5 != 0)) {
        uVar6 = *(undefined4 *)(lVar5 + 0x1c8);
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 148a25c2e FUN_148a25c2e body=236 status=ok
// SIG undefined FUN_148a25c2e(void)

ulonglong FUN_148a25c2e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_1 == 0) || (lVar6 = FUN_1447210f0(), lVar6 == 0)) {
    uVar7 = 0;
    goto LAB_148a25c62;
  }
  FUN_148a19d84(&local_48,lVar6);
  if (local_40 == (longlong *)0x0) {
LAB_148a25cfe:
    bVar9 = false;
  }
  else {
    iVar4 = (int)local_40[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_40[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_40;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_148a25cfe;
    bVar9 = local_48 != 0;
    if (bVar9) {
      uVar5 = FUN_148a24726(local_48,param_1,param_2,param_3);
      unaff_RBP = (ulonglong)uVar5;
    }
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  uVar7 = CONCAT71((int7)(unaff_RBP >> 8),(byte)unaff_RBP & bVar9);
LAB_148a25c62:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148a25d1c FUN_148a25d1c body=374 status=ok
// SIG undefined FUN_148a25d1c(void)

longlong * FUN_148a25d1c(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_2 != 0) && (lVar11 = FUN_1447210f0(param_2), lVar11 != 0)) &&
     (FUN_148a19d84(&local_58,lVar11), local_50 != (longlong *)0x0)) {
    iVar10 = (int)local_50[1];
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)local_50[1];
      bVar17 = iVar10 == iVar9;
      if (bVar17) {
        *(int *)(local_50 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
      plVar14 = local_50;
    } while (!bVar17);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar14 != (longlong *)0x0) {
      if ((local_58 != 0) && (lVar11 = FUN_148a1f28e(local_58,param_2,param_3), lVar11 != 0)) {
        iVar10 = *(int *)(lVar11 + 0x1c8);
        FUN_148a25e94(param_1,iVar10);
        if (0 < (longlong)iVar10) {
          local_60 = (longlong)iVar10 * 0x38;
          lVar15 = 0;
          lVar16 = 0;
          do {
            lVar13 = *(longlong *)(lVar11 + 0x1c0);
            if (*(longlong *)(lVar11 + 0x1c0) == 0) {
              lVar13 = lVar11;
            }
            lVar5 = *param_1;
            uVar12 = FUN_14479d2ce(lVar13 + lVar16);
            FUN_14485c47a(lVar5 + lVar15,uVar12);
            *(undefined8 *)(lVar5 + 0x18 + lVar15) = *(undefined8 *)(lVar13 + 0x18 + lVar16);
            puVar3 = (undefined4 *)(lVar13 + 8 + lVar16);
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            puVar4 = (undefined4 *)(lVar5 + 8 + lVar15);
            *puVar4 = *puVar3;
            puVar4[1] = uVar6;
            puVar4[2] = uVar7;
            puVar4[3] = uVar8;
            *(undefined8 *)(lVar5 + 0x20 + lVar15) = *(undefined8 *)(lVar13 + 0x20 + lVar16);
            lVar16 = lVar16 + 0x38;
            lVar15 = lVar15 + 0x40;
          } while (local_60 != lVar16);
        }
      }
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148a25e94 FUN_148a25e94 body=109 status=ok
// SIG undefined FUN_148a25e94(void)

void FUN_148a25e94(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148a2880c(param_1,iVar1);
    }
    FUN_148a287d6((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148a28892(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148a25f02 FUN_148a25f02 body=222 status=ok
// SIG undefined FUN_148a25f02(void)

undefined4 FUN_148a25f02(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_3 != 0) && (lVar6 = FUN_1447210f0(param_3), lVar6 != 0)) &&
     (FUN_148a19d84(&local_38,lVar6), local_30 != (longlong *)0x0)) {
    iVar4 = (int)local_30[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_30[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_38 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_148a1f4ea(local_38,param_1,param_2,param_3);
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_148a25f36;
    }
  }
  uVar5 = 0;
LAB_148a25f36:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148a25fe8 FUN_148a25fe8 body=77 status=ok
// SIG undefined FUN_148a25fe8(void)

undefined8 * FUN_148a25fe8(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x98);
  memset(_Dst,0,0x98);
  FUN_140e6d4da(_Dst);
  *_Dst = &PTR_FUN_14b487170;
  _Dst[0x12] = 0;
  return _Dst;
}



// FUNCTION 148a2603c FUN_148a2603c body=38 status=ok
// SIG undefined FUN_148a2603c(void)

undefined8 FUN_148a2603c(undefined8 param_1,int param_2)

{
  FUN_140cada64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a26062 FUN_148a26062 body=38 status=ok
// SIG undefined FUN_148a26062(void)

undefined8 FUN_148a26062(undefined8 param_1,int param_2)

{
  FUN_148a23dfa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a26088 FUN_148a26088 body=45 status=ok
// SIG undefined FUN_148a26088(void)

longlong FUN_148a26088(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_148a23dfa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a260b6 FUN_148a260b6 body=38 status=ok
// SIG undefined FUN_148a260b6(void)

undefined8 FUN_148a260b6(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a260dc FUN_148a260dc body=54 status=ok
// SIG undefined FUN_148a260dc(void)

longlong FUN_148a260dc(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148a26112 FUN_148a26112 body=52 status=ok
// SIG undefined FUN_148a26112(void)

void FUN_148a26112(longlong *param_1)

{
  FUN_148a26146();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148a26146 FUN_148a26146 body=319 status=ok
// SIG undefined FUN_148a26146(void)

void FUN_148a26146(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x1d0 + (longlong)iStack_4c * 0x1e8) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_148a26286(param_1);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a26286 FUN_148a26286 body=48 status=ok
// SIG undefined FUN_148a26286(void)

void FUN_148a26286(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1e8,8);
  }
  return;
}



// FUNCTION 148a262b6 FUN_148a262b6 body=116 status=ok
// SIG undefined FUN_148a262b6(void)

void FUN_148a262b6(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar4 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x4c) = (int)uVar4;
    FUN_148a0aa6e(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148a2632c FUN_148a2632c body=58 status=ok
// SIG undefined FUN_148a2632c(void)

void FUN_148a2632c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a26366(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_148a0aa6e(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,8);
  return;
}



// FUNCTION 148a26366 FUN_148a26366 body=108 status=ok
// SIG undefined FUN_148a26366(void)

ulonglong FUN_148a26366(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 8;
  if (8 < param_1) {
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



// FUNCTION 148a263d2 FUN_148a263d2 body=47 status=ok
// SIG undefined FUN_148a263d2(void)

undefined8 FUN_148a263d2(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_141262f1a();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148a26402 FUN_148a26402 body=450 status=ok
// SIG undefined FUN_148a26402(void)

longlong * FUN_148a26402(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_14045cb56(param_2,&local_38);
  plVar3 = local_30;
  if (local_30 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b4ab7f0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = &LAB_148a1e54a;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b4ab7f0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = &LAB_148a1e54a;
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a265c8 FUN_148a265c8 body=64 status=ok
// SIG undefined FUN_148a265c8(void)

undefined8 * FUN_148a265c8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b4ab7f0;
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



// FUNCTION 148a2660c FUN_148a2660c body=81 status=ok
// SIG undefined FUN_148a2660c(void)

undefined8 FUN_148a2660c(longlong param_1)

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



// FUNCTION 148a26664 FUN_148a26664 body=89 status=ok
// SIG undefined FUN_148a26664(void)

bool FUN_148a26664(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a266af;
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
LAB_148a266af:
  return lVar6 == param_2;
}



// FUNCTION 148a266da FUN_148a266da body=118 status=ok
// SIG undefined FUN_148a266da(void)

void FUN_148a266da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ab7f0;
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



// FUNCTION 148a26750 FUN_148a26750 body=118 status=ok
// SIG undefined FUN_148a26750(void)

void FUN_148a26750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac89870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ab7f0;
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



// FUNCTION 148a267c6 FUN_148a267c6 body=156 status=ok
// SIG undefined FUN_148a267c6(void)

void FUN_148a267c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac89870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ab7f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a26852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a26862 FUN_148a26862 body=98 status=ok
// SIG undefined FUN_148a26862(void)

void FUN_148a26862(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148a268ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a268ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148a268c4 FUN_148a268c4 body=94 status=ok
// SIG undefined FUN_148a268c4(void)

ulonglong FUN_148a268c4(longlong param_1)

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
LAB_148a26917:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148a26917;
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



// FUNCTION 148a26926 FUN_148a26926 body=81 status=ok
// SIG undefined FUN_148a26926(void)

undefined8 FUN_148a26926(longlong param_1)

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



// FUNCTION 148a2697e FUN_148a2697e body=89 status=ok
// SIG undefined FUN_148a2697e(void)

bool FUN_148a2697e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148a269c9;
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
LAB_148a269c9:
  return lVar6 == param_2;
}



// FUNCTION 148a269d8 FUN_148a269d8 body=118 status=ok
// SIG undefined FUN_148a269d8(void)

void FUN_148a269d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ab860;
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



// FUNCTION 148a26a4e FUN_148a26a4e body=118 status=ok
// SIG undefined FUN_148a26a4e(void)

void FUN_148a26a4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ab860;
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



// FUNCTION 148a26ac4 FUN_148a26ac4 body=156 status=ok
// SIG undefined FUN_148a26ac4(void)

void FUN_148a26ac4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ab860;
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
                    /* WARNING: Could not recover jumptable at 0x000148a26b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a26b60 FUN_148a26b60 body=94 status=ok
// SIG undefined FUN_148a26b60(void)

void FUN_148a26b60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148a26ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148a26bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148a26bbe FUN_148a26bbe body=31 status=ok
// SIG undefined FUN_148a26bbe(void)

undefined8 FUN_148a26bbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a26bfa FUN_148a26bfa body=93 status=ok
// SIG undefined FUN_148a26bfa(void)

void FUN_148a26bfa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ab8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a26c58 FUN_148a26c58 body=126 status=ok
// SIG undefined FUN_148a26c58(void)

void FUN_148a26c58(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ab8d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a26cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a26cd6 FUN_148a26cd6 body=21 status=ok
// SIG undefined FUN_148a26cd6(void)

undefined8 FUN_148a26cd6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a26cf2 FUN_148a26cf2 body=29 status=ok
// SIG undefined FUN_148a26cf2(void)

bool FUN_148a26cf2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a26d10 FUN_148a26d10 body=26 status=ok
// SIG undefined FUN_148a26d10(void)

bool FUN_148a26d10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a26d2a FUN_148a26d2a body=101 status=ok
// SIG undefined FUN_148a26d2a(void)

void FUN_148a26d2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4ab980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a26d90 FUN_148a26d90 body=134 status=ok
// SIG undefined FUN_148a26d90(void)

void FUN_148a26d90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ab980;
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
                    /* WARNING: Could not recover jumptable at 0x000148a26e07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a26e16 FUN_148a26e16 body=146 status=ok
// SIG undefined FUN_148a26e16(void)

bool FUN_148a26e16(longlong param_1)

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



// FUNCTION 148a26ec4 FUN_148a26ec4 body=101 status=ok
// SIG undefined FUN_148a26ec4(void)

void FUN_148a26ec4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ab9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a26f2a FUN_148a26f2a body=101 status=ok
// SIG undefined FUN_148a26f2a(void)

void FUN_148a26f2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4ab9f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a26f90 FUN_148a26f90 body=134 status=ok
// SIG undefined FUN_148a26f90(void)

void FUN_148a26f90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4ab9f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a27007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a27016 FUN_148a27016 body=68 status=ok
// SIG undefined FUN_148a27016(void)

void FUN_148a27016(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a27057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148a27074 FUN_148a27074 body=101 status=ok
// SIG undefined FUN_148a27074(void)

void FUN_148a27074(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4aba60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a270da FUN_148a270da body=134 status=ok
// SIG undefined FUN_148a270da(void)

void FUN_148a270da(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aba60;
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
                    /* WARNING: Could not recover jumptable at 0x000148a27151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a27160 FUN_148a27160 body=39 status=ok
// SIG undefined FUN_148a27160(void)

void FUN_148a27160(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a27183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148a27188 FUN_148a27188 body=102 status=ok
// SIG undefined FUN_148a27188(void)

void FUN_148a27188(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x14)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14) = iVar4;
    FUN_148a271f0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148a271f0 FUN_148a271f0 body=124 status=ok
// SIG undefined FUN_148a271f0(void)

void FUN_148a271f0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,1);
  return;
}



// FUNCTION 148a27286 FUN_148a27286 body=101 status=ok
// SIG undefined FUN_148a27286(void)

void FUN_148a27286(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4abad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a272ec FUN_148a272ec body=101 status=ok
// SIG undefined FUN_148a272ec(void)

void FUN_148a272ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4abad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a27352 FUN_148a27352 body=134 status=ok
// SIG undefined FUN_148a27352(void)

void FUN_148a27352(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4abad0;
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
                    /* WARNING: Could not recover jumptable at 0x000148a273c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a273d8 FUN_148a273d8 body=42 status=ok
// SIG undefined FUN_148a273d8(void)

void FUN_148a273d8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a273ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148a2741c FUN_148a2741c body=29 status=ok
// SIG undefined FUN_148a2741c(void)

bool FUN_148a2741c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a2743a FUN_148a2743a body=101 status=ok
// SIG undefined FUN_148a2743a(void)

void FUN_148a2743a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4abb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a274a0 FUN_148a274a0 body=101 status=ok
// SIG undefined FUN_148a274a0(void)

void FUN_148a274a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4abb40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a27506 FUN_148a27506 body=134 status=ok
// SIG undefined FUN_148a27506(void)

void FUN_148a27506(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4abb40;
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
                    /* WARNING: Could not recover jumptable at 0x000148a2757d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a2758c FUN_148a2758c body=42 status=ok
// SIG undefined FUN_148a2758c(void)

void FUN_148a2758c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a275b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148a275b6 FUN_148a275b6 body=132 status=ok
// SIG undefined FUN_148a275b6(void)

void FUN_148a275b6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a2763c FUN_148a2763c body=9 status=ok
// SIG undefined FUN_148a2763c(void)

void FUN_148a2763c(longlong param_1)

{
  FUN_140adf366(param_1 + 0x10);
  return;
}



// FUNCTION 148a27646 FUN_148a27646 body=29 status=ok
// SIG undefined FUN_148a27646(void)

undefined8 FUN_148a27646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a27664 FUN_148a27664 body=167 status=ok
// SIG undefined FUN_148a27664(void)

void FUN_148a27664(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148a276df;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148a276df;
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
LAB_148a276df:
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
                    /* WARNING: Could not recover jumptable at 0x000148a276ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148a2770c FUN_148a2770c body=59 status=ok
// SIG undefined FUN_148a2770c(void)

void FUN_148a2770c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar1 = param_1;
  }
  FUN_140943ec3(lVar1,*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) == 0) {
    return;
  }
  FUN_148a27748(param_1);
  return;
}



// FUNCTION 148a27748 FUN_148a27748 body=75 status=ok
// SIG undefined FUN_148a27748(void)

void FUN_148a27748(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x7c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x70),
              (longlong)*(int *)((longlong)param_1 + 0x78) * 0x38);
      FUN_1446efa72((longlong)param_1 + 0x70,0,0,0x38);
      return;
    }
  }
  return;
}



// FUNCTION 148a27794 FUN_148a27794 body=48 status=ok
// SIG undefined FUN_148a27794(void)

void FUN_148a27794(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148a277c4 FUN_148a277c4 body=124 status=ok
// SIG undefined FUN_148a277c4(void)

void FUN_148a277c4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_148a27842(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a27842 FUN_148a27842 body=132 status=ok
// SIG undefined FUN_148a27842(void)

void FUN_148a27842(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 148a278c6 FUN_148a278c6 body=141 status=ok
// SIG undefined FUN_148a278c6(void)

void FUN_148a278c6(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (param_2 <= (int)uVar1) {
    iVar7 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x7c) < 3) {
        uVar3 = 4;
        if (4 < uVar1) {
          uVar3 = uVar1;
        }
        lVar4 = (longlong)(int)uVar3;
      }
      else {
        lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = FUN_144a3809e(lVar4 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5 >> 3;
      iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar7 = 0x7fffffff;
      if ((int)uVar1 <= iVar6) {
        iVar7 = iVar6;
      }
    }
    *(int *)(param_1 + 0x7c) = iVar7;
    FUN_148a1749e(param_1,param_2,iVar7,0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a27954 FUN_148a27954 body=103 status=ok
// SIG undefined FUN_148a27954(void)

void FUN_148a27954(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((longlong)param_2 * 0x38 + lVar2);
  FUN_140943ec3(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x78);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar3 * 0x38);
    iVar1 = *(int *)(param_1 + 0x78);
  }
  *(int *)(param_1 + 0x78) = iVar1 - param_3;
  return;
}



// FUNCTION 148a279bc FUN_148a279bc body=58 status=ok
// SIG undefined FUN_148a279bc(void)

void FUN_148a279bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a279f6(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  if (iVar1 == *(int *)(param_1 + 0x7c)) {
    return;
  }
  *(int *)(param_1 + 0x7c) = iVar1;
  FUN_148a1749e(param_1,*(undefined4 *)(param_1 + 0x78),iVar1,0x38);
  return;
}



// FUNCTION 148a279f6 FUN_148a279f6 body=121 status=ok
// SIG undefined FUN_148a279f6(void)

ulonglong FUN_148a279f6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x38) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x38,0);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 148a27a6f FUN_148a27a6f body=31 status=ok
// SIG undefined FUN_148a27a6f(void)

void FUN_148a27a6f(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x21) = 0;
    *(undefined8 *)(param_1 + 0x29) = 0;
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 148a27a8e FUN_148a27a8e body=130 status=ok
// SIG undefined FUN_148a27a8e(void)

void FUN_148a27a8e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_148a17906(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a27b12 FUN_148a27b12 body=124 status=ok
// SIG undefined FUN_148a27b12(void)

void FUN_148a27b12(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_148a27b90(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a27b90 FUN_148a27b90 body=132 status=ok
// SIG undefined FUN_148a27b90(void)

void FUN_148a27b90(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 148a27c14 FUN_148a27c14 body=68 status=ok
// SIG undefined FUN_148a27c14(void)

void FUN_148a27c14(longlong param_1,uint param_2)

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
  FUN_148a27c58(param_1);
  return;
}



// FUNCTION 148a27c58 FUN_148a27c58 body=449 status=ok
// SIG undefined FUN_148a27c58(void)

void FUN_148a27c58(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x1e8;
        uVar10 = (longlong)
                 (int)((uint)*(byte *)(lVar3 + 8 + lVar7) +
                      (*(uint *)(lVar3 + 4 + lVar7) ^ *(uint *)(lVar3 + lVar7))) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1e4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x1e0 + lVar7) =
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



// FUNCTION 148a27e1a FUN_148a27e1a body=104 status=ok
// SIG undefined FUN_148a27e1a(void)

void FUN_148a27e1a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1e4 + (longlong)param_2 * 0x1e8);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x1e0 + lVar5 * 0x1e8);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x1e8 + 0x1e0);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x1e8 + 0x1e0);
  FUN_148a27e82();
  return;
}



// FUNCTION 148a27e82 FUN_148a27e82 body=58 status=ok
// SIG undefined FUN_148a27e82(void)

void FUN_148a27e82(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x1d0 + (longlong)param_2 * 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_148a27ebc(param_1,param_2);
  return;
}



// FUNCTION 148a27ebc FUN_148a27ebc body=122 status=ok
// SIG undefined FUN_148a27ebc(void)

void FUN_148a27ebc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1e8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1e8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1e8 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148a27f36 FUN_148a27f36 body=141 status=ok
// SIG undefined FUN_148a27f36(void)

void FUN_148a27f36(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c0,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x1c0),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c0,param_2,param_3,0x38);
  return;
}



// FUNCTION 148a27fc4 FUN_148a27fc4 body=139 status=ok
// SIG undefined FUN_148a27fc4(void)

longlong FUN_148a27fc4(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_148a28050();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x1e8;
    if (lVar3 + lVar2 != 0) goto LAB_148a28000;
  }
  local_30 = param_3;
  FUN_148a280bc(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x1e8;
LAB_148a28000:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a28050 FUN_148a28050 body=107 status=ok
// SIG undefined FUN_148a28050(void)

int FUN_148a28050(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x1e8;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(char *)(lVar2 + lVar4 + 8) == (char)param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x1e0 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 148a280bc FUN_148a280bc body=313 status=ok
// SIG undefined FUN_148a280bc(void)

undefined4 * FUN_148a280bc(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148a281f6(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  local_40[0x3a] = 0;
  local_40[0x3b] = 0x800000000;
  *(undefined4 *)(local_40 + 0x3c) = 0xffffffff;
  cVar2 = FUN_148a282e4(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1e4) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x3c) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148a27c58(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a281f6 FUN_148a281f6 body=237 status=ok
// SIG undefined FUN_148a281f6(void)

int * FUN_148a281f6(longlong *param_1,int *param_2)

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
      FUN_148a28360(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x1e8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x1e8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1e8 + *param_1;
  return param_2;
}



// FUNCTION 148a282e4 FUN_148a282e4 body=123 status=ok
// SIG undefined FUN_148a282e4(void)

undefined8 FUN_148a282e4(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_148a28050(), iVar2 != -1)) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x1d0 + (longlong)iVar2 * 0x1e8) != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x1e8),param_3,0x1e0);
    FUN_148a27ebc(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 148a28360 FUN_148a28360 body=150 status=ok
// SIG undefined FUN_148a28360(void)

void FUN_148a28360(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1e8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1e8)) {
      uVar5 = uVar4 / 0x1e8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1e8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a283f7 FUN_148a283f7 body=35 status=ok
// SIG undefined FUN_148a283f7(void)

void FUN_148a283f7(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xf8;
  return;
}



// FUNCTION 148a2841a FUN_148a2841a body=132 status=ok
// SIG undefined FUN_148a2841a(void)

void FUN_148a2841a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1c8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 8;
    if (8 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1cc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1cc) = iVar6;
    FUN_148a27f36(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 148a284a0 FUN_148a284a0 body=291 status=ok
// SIG undefined FUN_148a284a0(void)

undefined4 * FUN_148a284a0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a49c02(param_1,local_48);
  uVar3 = *(uint *)*param_3;
  *local_40 = uVar3;
  local_40[1] = 0;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar1 = FUN_144b079a6(param_1,uVar3,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[3] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14499e768(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a285c4 FUN_148a285c4 body=29 status=ok
// SIG undefined FUN_148a285c4(void)

undefined8 FUN_148a285c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a285fe FUN_148a285fe body=101 status=ok
// SIG undefined FUN_148a285fe(void)

void FUN_148a285fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4abc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a28664 FUN_148a28664 body=101 status=ok
// SIG undefined FUN_148a28664(void)

void FUN_148a28664(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4abc60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a286ca FUN_148a286ca body=134 status=ok
// SIG undefined FUN_148a286ca(void)

void FUN_148a286ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4abc60;
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
                    /* WARNING: Could not recover jumptable at 0x000148a28741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a28762 FUN_148a28762 body=25 status=ok
// SIG undefined FUN_148a28762(void)

undefined8 FUN_148a28762(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148a2877c FUN_148a2877c body=90 status=ok
// SIG undefined FUN_148a2877c(void)

void FUN_148a2877c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1cc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
    if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x1c0),
              (longlong)*(int *)((longlong)param_1 + 0x1c8) * 0x38);
      FUN_1446efa72((longlong)param_1 + 0x1c0,0,0,0x38);
      return;
    }
  }
  return;
}



// FUNCTION 148a287d6 FUN_148a287d6 body=53 status=ok
// SIG undefined FUN_148a287d6(void)

void FUN_148a287d6(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    uVar1 = DAT_14c846500;
    param_1[5] = DAT_14c8464f8;
    param_1[6] = uVar1;
    param_1[7] = DAT_14c846508;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 148a2880c FUN_148a2880c body=132 status=ok
// SIG undefined FUN_148a2880c(void)

void FUN_148a2880c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a28892 FUN_148a28892 body=62 status=ok
// SIG undefined FUN_148a28892(void)

void FUN_148a28892(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a288d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 148a288d0 FUN_148a288d0 body=93 status=ok
// SIG undefined FUN_148a288d0(void)

ulonglong FUN_148a288d0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 148a2892d FUN_148a2892d body=54 status=ok
// SIG undefined FUN_148a2892d(void)

void FUN_148a2892d(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_145dddb3e(&LAB_148a2a0ea);
  FUN_148a28980(DAT_14cb95310,param_1,param_2,param_3);
  return;
}



// FUNCTION 148a28964 FUN_148a28964 body=28 status=ok
// SIG undefined FUN_148a28964(void)

undefined8 FUN_148a28964(void)

{
  FUN_145dddb3e(&LAB_148a2a0ea);
  return DAT_14cb95310;
}



// FUNCTION 148a28980 FUN_148a28980 body=376 status=ok
// SIG undefined FUN_148a28980(void)

undefined8 FUN_148a28980(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  bVar3 = FUN_148a291a2();
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar5 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & (uint)bVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x60;
        if (*(byte *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 0x60) == bVar3) {
          if ((longlong *)(lVar5 + 8) == (longlong *)0x0 || lVar5 == 0) {
            return 0;
          }
          if (*(int *)(lVar5 + 0x10) == *(int *)(lVar5 + 0x3c)) {
            return 0;
          }
          uVar2 = (uint)((ulonglong)param_4 >> 0x10);
          uVar9 = (uint)param_4 & 0xffff;
          uVar6 = (uint)((ulonglong)param_3 >> 0x10);
          uVar7 = (uint)param_3 & 0xffff;
          uVar6 = (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                  (uVar7 >> 4) + (uVar6 << 0x13 | uVar6 & 0xffff);
          lVar8 = lVar5 + 0x40;
          if (*(longlong *)(lVar5 + 0x48) != 0) {
            lVar8 = *(longlong *)(lVar5 + 0x48);
          }
          iVar4 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar5 + 0x50) - 1U &
                                   ((uVar6 >> 2) +
                                    (int)((ulonglong)param_4 >> 0x20) + (uint)param_4 * 0x10000 +
                                    uVar9 + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4) +
                                    uVar6 * 0x40 + 0x9e3779b9 ^ uVar6)) * 4);
          if (iVar4 == -1) {
            return 0;
          }
          lVar5 = *(longlong *)(lVar5 + 8);
          while( true ) {
            plVar1 = (longlong *)(lVar5 + (longlong)iVar4 * 0x28);
            if ((*plVar1 == param_3) &&
               (*(longlong *)(lVar5 + 8 + (longlong)iVar4 * 0x28) == param_4)) break;
            iVar4 = (int)plVar1[4];
            if (iVar4 == -1) {
              return 0;
            }
          }
          return CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar1 != (longlong *)0x0);
        }
        iVar4 = *(int *)(lVar5 + 0x58);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a28af8 FUN_148a28af8 body=71 status=ok
// SIG undefined FUN_148a28af8(void)

undefined8
FUN_148a28af8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_145dddb3e(&LAB_148a2a0ea);
  FUN_148a28b40(DAT_14cb95310,param_1,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 148a28b40 FUN_148a28b40 body=803 status=ok
// SIG undefined FUN_148a28b40(void)

longlong **
FUN_148a28b40(longlong param_1,longlong **param_2,undefined4 param_3,longlong param_4,
             longlong param_5)

{
  int *piVar1;
  longlong **pplVar2;
  longlong *plVar3;
  uint uVar4;
  longlong **pplVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  byte local_51;
  longlong *local_50;
  longlong **local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_51 = FUN_148a291a2(param_1,param_3);
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  if (0xfc < local_51) goto LAB_148a28b81;
  plVar6 = (longlong *)FUN_148a2a13c(param_1 + 0x50,local_51,&local_51);
  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
    uVar4 = (uint)((ulonglong)param_5 >> 0x10);
    uVar12 = (uint)param_5 & 0xffff;
    uVar13 = (uint)((ulonglong)param_4 >> 0x10);
    uVar11 = (uint)param_4 & 0xffff;
    uVar13 = (int)((ulonglong)param_4 >> 0x20) + ((uint)param_4 << 0x10 | uVar11) +
             (uVar11 >> 4) + (uVar13 << 0x13 | uVar13 & 0xffff);
    plVar10 = plVar6 + 7;
    if ((longlong *)plVar6[8] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar6[8];
    }
    iVar9 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)plVar6[9] - 1U &
                    ((uVar13 >> 2) +
                     (int)((ulonglong)param_5 >> 0x20) + (uint)param_5 * 0x10000 + uVar12 +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + uVar13 * 0x40 + (uVar12 >> 4) + 0x9e3779b9 ^
                    uVar13)) * 4);
    if (iVar9 != -1) {
      do {
        plVar10 = (longlong *)(*plVar6 + (longlong)iVar9 * 0x28);
        if ((*plVar10 == param_4) &&
           (*(longlong *)(*plVar6 + 8 + (longlong)iVar9 * 0x28) == param_5)) {
          if ((plVar10 != (longlong *)0x0) && (plVar10 != (longlong *)&DAT_fffffffffffffff0)) {
            plVar6 = (longlong *)plVar10[2];
            plVar10 = (longlong *)plVar10[3];
            if (plVar10 == (longlong *)0x0) {
              *param_2 = plVar6;
              goto LAB_148a28b81;
            }
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            plVar3 = param_2[1];
            *param_2 = plVar6;
            if (plVar10 == plVar3) {
              LOCK();
              plVar6 = plVar10 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 != 0) goto LAB_148a28b81;
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) goto LAB_148a28b81;
              lVar8 = *plVar10;
            }
            else {
              param_2[1] = plVar10;
              if (plVar3 == (longlong *)0x0) goto LAB_148a28b81;
              LOCK();
              plVar6 = plVar3 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 != 0) goto LAB_148a28b81;
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) goto LAB_148a28b81;
              lVar8 = *plVar3;
              plVar10 = plVar3;
            }
            (**(code **)(lVar8 + 0x10))(plVar10);
            goto LAB_148a28b81;
          }
          break;
        }
        iVar9 = (int)plVar10[4];
      } while (iVar9 != -1);
    }
  }
  local_98 = param_5;
  FUN_148a29292(param_1,&local_50,local_51,param_4);
  pplVar5 = local_48;
  if (&local_50 == param_2) {
    if (local_48 != (longlong **)0x0) {
      LOCK();
      pplVar2 = local_48 + 1;
      *(int *)pplVar2 = *(int *)pplVar2 + -1;
      UNLOCK();
      if (*(int *)pplVar2 == 0) {
        (*(code *)**local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)pplVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pplVar5)[2])(pplVar5);
        }
      }
    }
LAB_148a28ce4:
    plVar6 = *param_2;
  }
  else {
    *param_2 = local_50;
    plVar6 = local_50;
    if (local_48 != (longlong **)0x0) {
      param_2[1] = (longlong *)local_48;
      goto LAB_148a28ce4;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_148a2a13c(param_1 + 0x50,local_51);
    local_68 = *param_2;
    local_60 = param_2[1];
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_50 = &local_78;
    local_70 = param_5;
    local_48 = &local_68;
    local_78 = param_4;
    FUN_148a2a9bc(uVar7,local_3c);
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_60 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_88 = *param_2;
    local_80 = param_2[1];
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    FUN_148a293aa(&local_88);
  }
LAB_148a28b81:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a28e64 FUN_148a28e64 body=40 status=ok
// SIG undefined FUN_148a28e64(void)

void FUN_148a28e64(undefined8 param_1)

{
  FUN_145dddb3e(&LAB_148a2a0ea);
  FUN_148a28e8c(DAT_14cb95310,param_1);
  return;
}



// FUNCTION 148a28e8c FUN_148a28e8c body=789 status=ok
// SIG undefined FUN_148a28e8c(void)

void FUN_148a28e8c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  undefined2 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = (longlong *)(param_1 + 0x50);
  local_e0 = param_1 + 0x60;
  local_e8 = (longlong *)&DAT_100000000;
  local_d8 = 0xffffffff;
  local_d0 = local_d0 & 0xffffffff00000000;
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_1449c0562(&local_e8);
  }
  local_90 = local_d8;
  lVar3 = local_90;
  local_88 = (uint)local_d0;
  local_84 = local_d0._4_4_;
  local_a0 = local_e8;
  local_98 = local_e0;
  local_70 = 0;
  local_90._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if (local_90._4_4_ < *(int *)(local_e0 + 0x18)) {
    iVar8 = local_90._4_4_;
    local_90 = lVar3;
    do {
      lVar4 = *local_a8;
      lVar3 = lVar4 + (longlong)iVar8 * 0x60;
      local_60 = lVar3 + 0x18;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      if (*(int *)(lVar3 + 0x30) != 0) {
        FUN_1449c0562(&local_68);
      }
      local_e8 = (longlong *)(lVar4 + (longlong)iVar8 * 0x60 + 8);
      local_d0 = local_58;
      uVar7 = local_d0;
      local_c8 = local_50;
      local_c4 = local_4c;
      local_e0 = local_68;
      local_d8 = local_60;
      local_b0 = 0;
      local_d0._4_4_ = (int)(local_58 >> 0x20);
      bVar6 = local_d0._4_4_ < *(int *)(local_60 + 0x18);
      iVar8 = local_d0._4_4_;
      local_d0 = uVar7;
      local_c0 = local_e8;
      local_b8 = local_e8;
      if (bVar6) {
        do {
          if (*(longlong *)(*local_e8 + (longlong)iVar8 * 0x28) == param_2) {
            lVar3 = *local_e8 + (longlong)iVar8 * 0x28;
            plVar1 = *(longlong **)(lVar3 + 0x10);
            plVar5 = *(longlong **)(lVar3 + 0x18);
            if (plVar5 == (longlong *)0x0) {
              (**(code **)(*plVar1 + 8))();
              FUN_148a2b13a(local_c0,local_d0._4_4_);
              local_b0 = CONCAT11(local_b0._1_1_,1);
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              (**(code **)(*plVar1 + 8))();
              FUN_148a2b13a(local_c0,local_d0._4_4_);
              local_b0 = CONCAT11(local_b0._1_1_,1);
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
          local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
          FUN_1449c0562(&local_e0);
          iVar8 = local_d0._4_4_;
        } while (local_d0._4_4_ < *(int *)(local_d8 + 0x18));
        if (((local_b0 & 1) != 0) && (local_b0._1_1_ == '\x01')) {
          FUN_148a2ad90(local_b8,(int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34));
        }
      }
      if (*(int *)(*local_a8 + 0x10 + (longlong)local_90._4_4_ * 0x60) ==
          *(int *)(*local_a8 + 0x3c + (longlong)local_90._4_4_ * 0x60)) {
        FUN_148a2b1e0(local_80);
        local_70 = CONCAT11(local_70._1_1_,1);
      }
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
      FUN_1449c0562(&local_a0);
      iVar8 = local_90._4_4_;
    } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
    lVar3 = local_90;
    if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
      FUN_148a2a7d8(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      lVar3 = local_90;
    }
  }
  local_90 = lVar3;
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a291a2 FUN_148a291a2 body=239 status=ok
// SIG undefined FUN_148a291a2(void)

char FUN_148a291a2(longlong param_1,char param_2)

{
  char cVar1;
  undefined2 *puVar2;
  wchar_t *pwVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined2 *local_28;
  undefined8 uStack_20;
  char local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == -2) {
    pwVar3 = L"PlatformServices";
  }
  else {
    local_9 = param_2;
    if (param_2 != -1) goto LAB_148a29272;
    local_9 = *(char *)(param_1 + 0xa0);
    if (local_9 != -1) goto LAB_148a29272;
    pwVar3 = L"DefaultServices";
  }
  uStack_20 = 0;
  local_28 = (undefined2 *)0x0;
  local_38 = &DAT_14c872ce8;
  local_9 = param_2;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"OnlineServices",pwVar3);
  if (cVar1 != '\0') {
    puVar2 = local_28;
    if ((int)uStack_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_146fdf7d2(&local_9,puVar2);
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_148a29272:
  if ((local_8 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_9;
}



// FUNCTION 148a29292 FUN_148a29292 body=279 status=ok
// SIG undefined FUN_148a29292(void)

undefined8 *
FUN_148a29292(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = FUN_148a291a2(param_1,param_3);
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & (uint)bVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(byte *)(*param_1 + (longlong)iVar4 * 0x20) == bVar3) {
          if ((undefined8 *)(lVar2 + 8) != (undefined8 *)0x0 && lVar2 != 0) {
            plVar5 = *(longlong **)(lVar2 + 8);
            (**(code **)(*plVar5 + 8))(plVar5,&local_30,param_4,param_5);
            if (&local_30 == param_2) {
              if (local_28 != (longlong *)0x0) {
                LOCK();
                plVar5 = local_28 + 1;
                *(int *)plVar5 = (int)*plVar5 + -1;
                UNLOCK();
                if ((int)*plVar5 == 0) {
                  (**(code **)*local_28)(local_28);
                  LOCK();
                  piVar1 = (int *)((longlong)local_28 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_28 + 0x10))(local_28);
                  }
                }
              }
            }
            else {
              *param_2 = local_30;
              if (local_28 != (longlong *)0x0) {
                param_2[1] = local_28;
              }
            }
            (*(code *)**(undefined8 **)*param_2)();
          }
          break;
        }
        iVar4 = *(int *)(lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


