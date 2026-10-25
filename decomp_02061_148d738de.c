// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148d738de FUN_148d738de body=53 status=ok
// SIG undefined FUN_148d738de(void)

void FUN_148d738de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b97a310;
  FUN_148d73914();
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ec0c8(param_1);
  return;
}



// FUNCTION 148d73914 FUN_148d73914 body=109 status=ok
// SIG undefined FUN_148d73914(void)

void FUN_148d73914(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
    lVar2 = FUN_14040226a(uVar1,0);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_14039ffc6(lVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar3 + 0x110))(plVar3);
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          FUN_14480f766(uVar1);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148d73982 FUN_148d73982 body=226 status=ok
// SIG undefined FUN_148d73982(void)

void FUN_148d73982(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  int local_90;
  int local_8c [2];
  int local_84;
  undefined1 local_80 [40];
  undefined2 local_58 [2];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1447a97f4(local_80);
  FUN_14071d490(local_80,local_58);
  cVar1 = FUN_140114204(local_58);
  if (cVar1 != '\0') {
    FUN_144a659ac(&local_48,local_8c,2);
    FUN_1488ecbb8(param_1,local_98);
    if ((local_8c[0] == local_98[0]) && (local_84 == local_90)) {
      (**(code **)(*param_1 + 0x50))(param_1);
    }
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73a66 FUN_148d73a66 body=61 status=ok
// SIG undefined FUN_148d73a66(void)

void FUN_148d73a66(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x34) < 0) {
    FUN_148d79bc2(param_1,0);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = param_1;
  }
  FUN_1488f27c6(lVar1,*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 148d73aa4 FUN_148d73aa4 body=115 status=ok
// SIG undefined FUN_148d73aa4(void)

undefined8 FUN_148d73aa4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d79dc2(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73b18 FUN_148d73b18 body=76 status=ok
// SIG undefined FUN_148d73b18(void)

longlong FUN_148d73b18(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1488f2df0(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar2 = param_1;
  }
  lVar2 = lVar2 + (longlong)iVar1 * 0x28;
  FUN_1488f2db6(lVar2,1);
  return lVar2;
}



// FUNCTION 148d73b64 FUN_148d73b64 body=51 status=ok
// SIG undefined FUN_148d73b64(void)

void FUN_148d73b64(longlong param_1,undefined8 param_2)

{
  FUN_148d79c6a(param_2,param_1 + 0xa0);
  FUN_146897be2(param_1 + 0x100,param_2);
  return;
}



// FUNCTION 148d73b98 FUN_148d73b98 body=150 status=ok
// SIG undefined FUN_148d73b98(void)

undefined8 *
FUN_148d73b98(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x120,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d73530(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d73c38 FUN_148d73c38 body=38 status=ok
// SIG undefined FUN_148d73c38(void)

undefined8 FUN_148d73c38(undefined8 param_1,int param_2)

{
  FUN_148d72bcc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d73c5e FUN_148d73c5e body=38 status=ok
// SIG undefined FUN_148d73c5e(void)

undefined8 FUN_148d73c5e(undefined8 param_1,int param_2)

{
  FUN_148d738de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d73c88 FUN_148d73c88 body=29 status=ok
// SIG undefined FUN_148d73c88(void)

undefined8 FUN_148d73c88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d73caa FUN_148d73caa body=105 status=ok
// SIG undefined FUN_148d73caa(void)

void FUN_148d73caa(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140cfff30(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140cfff30(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148d73ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148d73d14 FUN_148d73d14 body=130 status=ok
// SIG undefined FUN_148d73d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_148d73d14(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_148d73d86:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_148d73d86;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 148d73d96 FUN_148d73d96 body=132 status=ok
// SIG undefined FUN_148d73d96(void)

void FUN_148d73d96(longlong param_1,int param_2)

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



// FUNCTION 148d73e1c FUN_148d73e1c body=107 status=ok
// SIG undefined FUN_148d73e1c(void)

/* WARNING: Removing unreachable block (ram,0x000148d73e4e) */
/* WARNING: Removing unreachable block (ram,0x000148d73e2a) */
/* WARNING: Removing unreachable block (ram,0x000148d73e40) */
/* WARNING: Removing unreachable block (ram,0x000148d73e59) */
/* WARNING: Removing unreachable block (ram,0x000148d73e42) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d73e1c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cbcd1d0;
  LOCK();
  UNLOCK();
  DAT_14cbcd1d0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cbcd1d8 = _DAT_14cbcd1d8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cbcd1d8 = _DAT_14cbcd1d8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148d73e87 FUN_148d73e87 body=286 status=ok
// SIG undefined FUN_148d73e87(void)

longlong FUN_148d73e87(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = FUN_1402576f0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) {
    lVar3 = FUN_1405b04b6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
        ((longlong)*(int *)(param_1 + 0x118) != 0)))) {
      plVar6 = *(longlong **)(param_1 + 0x110);
      plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x118) * 5;
      do {
        lVar3 = *plVar6;
        if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x90) != 0)) {
          lVar5 = *(longlong *)(lVar3 + 0x88);
          lVar3 = (longlong)*(int *)(lVar3 + 0x90) * 0xb8;
          do {
            if ((*(longlong *)(lVar5 + 0x48) != 0) &&
               (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x10), lVar4 = FUN_145b8a1e0(),
               lVar2 == lVar4)) {
              if (lVar5 != 0) {
                return lVar5;
              }
              break;
            }
            lVar5 = lVar5 + 0xb8;
            lVar3 = lVar3 + -0xb8;
          } while (lVar3 != 0);
        }
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar1);
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar5 = (longlong)*(int *)(param_1 + 0x90) * 0xb8;
    do {
      if ((*(longlong *)(lVar3 + 0x48) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x48) + 0x10), lVar4 = FUN_145b8a1e0(),
         lVar2 == lVar4)) {
        return lVar3;
      }
      lVar3 = lVar3 + 0xb8;
      lVar5 = lVar5 + -0xb8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 148d73fac FUN_148d73fac body=29 status=ok
// SIG undefined FUN_148d73fac(void)

bool FUN_148d73fac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d73fca FUN_148d73fca body=26 status=ok
// SIG undefined FUN_148d73fca(void)

bool FUN_148d73fca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d73fe4 FUN_148d73fe4 body=101 status=ok
// SIG undefined FUN_148d73fe4(void)

void FUN_148d73fe4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a700;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d7404a FUN_148d7404a body=134 status=ok
// SIG undefined FUN_148d7404a(void)

void FUN_148d7404a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a700;
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
                    /* WARNING: Could not recover jumptable at 0x000148d740c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d740d0 FUN_148d740d0 body=146 status=ok
// SIG undefined FUN_148d740d0(void)

bool FUN_148d740d0(longlong param_1)

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



// FUNCTION 148d74164 FUN_148d74164 body=29 status=ok
// SIG undefined FUN_148d74164(void)

undefined8 FUN_148d74164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d7419c FUN_148d7419c body=29 status=ok
// SIG undefined FUN_148d7419c(void)

bool FUN_148d7419c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d741ba FUN_148d741ba body=26 status=ok
// SIG undefined FUN_148d741ba(void)

bool FUN_148d741ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d741d4 FUN_148d741d4 body=24 status=ok
// SIG undefined FUN_148d741d4(void)

bool FUN_148d741d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d741ec FUN_148d741ec body=101 status=ok
// SIG undefined FUN_148d741ec(void)

void FUN_148d741ec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d74252 FUN_148d74252 body=101 status=ok
// SIG undefined FUN_148d74252(void)

void FUN_148d74252(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d742b8 FUN_148d742b8 body=134 status=ok
// SIG undefined FUN_148d742b8(void)

void FUN_148d742b8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a770;
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
                    /* WARNING: Could not recover jumptable at 0x000148d7432f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d7433e FUN_148d7433e body=44 status=ok
// SIG undefined FUN_148d7433e(void)

void FUN_148d7433e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d74367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d7436a FUN_148d7436a body=156 status=ok
// SIG undefined FUN_148d7436a(void)

bool FUN_148d7436a(longlong param_1,undefined8 param_2)

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



// FUNCTION 148d74408 FUN_148d74408 body=29 status=ok
// SIG undefined FUN_148d74408(void)

undefined8 FUN_148d74408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d74440 FUN_148d74440 body=29 status=ok
// SIG undefined FUN_148d74440(void)

bool FUN_148d74440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  return lVar1 == param_2;
}



// FUNCTION 148d7445e FUN_148d7445e body=26 status=ok
// SIG undefined FUN_148d7445e(void)

bool FUN_148d7445e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x30,1);
  return lVar1 == 0;
}



// FUNCTION 148d74478 FUN_148d74478 body=24 status=ok
// SIG undefined FUN_148d74478(void)

bool FUN_148d74478(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  return lVar1 != 0;
}



// FUNCTION 148d7449c FUN_148d7449c body=117 status=ok
// SIG undefined FUN_148d7449c(void)

void FUN_148d7449c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97a8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14b97a880;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 148d74512 FUN_148d74512 body=117 status=ok
// SIG undefined FUN_148d74512(void)

void FUN_148d74512(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97a8f0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_14b97a880;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar2;
  puVar1[8] = *(undefined8 *)(param_1 + 0x40);
  return;
}



// FUNCTION 148d74588 FUN_148d74588 body=150 status=ok
// SIG undefined FUN_148d74588(void)

void FUN_148d74588(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _LIST_ENTRY *p_Var9;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97a8f0;
  p_Var9 = *(_LIST_ENTRY **)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  DVar5 = *(DWORD *)(param_1 + 0x20);
  DVar6 = *(DWORD *)(param_1 + 0x24);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var9;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = uVar3;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar4;
  p_Var1->EntryCount = DVar5;
  p_Var1->ContentionCount = DVar6;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a880;
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar3 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar4;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar7;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar8;
  p_Var1[1].ProcessLocksList.Flink = *(_LIST_ENTRY **)(param_1 + 0x40);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d7460f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d7461e FUN_148d7461e body=107 status=ok
// SIG undefined FUN_148d7461e(void)

void FUN_148d7461e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(param_1 + 0x38))
            (*(int *)(param_1 + 0x40) + lVar1,param_2,*(undefined8 *)(param_1 + 8));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7468a FUN_148d7468a body=184 status=ok
// SIG undefined FUN_148d7468a(void)

bool FUN_148d7468a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x30,&local_48,0);
    lVar3 = CONCAT44(uStack_44,local_48);
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined4 *)(param_1 + 0x10);
    uStack_44 = *(undefined4 *)(param_1 + 0x14);
    uStack_40 = *(undefined4 *)(param_1 + 0x18);
    uStack_3c = *(undefined4 *)(param_1 + 0x1c);
    (**(code **)(param_1 + 0x38))
              (*(int *)(param_1 + 0x40) + lVar2,param_2,*(undefined8 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d74746 FUN_148d74746 body=147 status=ok
// SIG undefined FUN_148d74746(void)

void FUN_148d74746(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148d747da FUN_148d747da body=147 status=ok
// SIG undefined FUN_148d747da(void)

void FUN_148d747da(longlong param_1,int param_2)

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



// FUNCTION 148d7486e FUN_148d7486e body=31 status=ok
// SIG undefined FUN_148d7486e(void)

undefined8 FUN_148d7486e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d748a8 FUN_148d748a8 body=93 status=ok
// SIG undefined FUN_148d748a8(void)

void FUN_148d748a8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d74906 FUN_148d74906 body=93 status=ok
// SIG undefined FUN_148d74906(void)

void FUN_148d74906(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d74964 FUN_148d74964 body=126 status=ok
// SIG undefined FUN_148d74964(void)

void FUN_148d74964(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a960;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d749d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d749e2 FUN_148d749e2 body=35 status=ok
// SIG undefined FUN_148d749e2(void)

void FUN_148d749e2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d74a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148d74a05 FUN_148d74a05 body=82 status=ok
// SIG undefined FUN_148d74a05(void)

void FUN_148d74a05(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[3] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    param_1[1] = DAT_14c8464e0;
    param_1[2] = uVar1;
    uVar1 = DAT_14c8464e8;
    param_1[4] = DAT_14c8464e0;
    param_1[5] = uVar1;
    param_1[6] = DAT_14c8464f0;
    uVar1 = DAT_14c8463f8;
    param_1[7] = DAT_14c8463f0;
    param_1[8] = uVar1;
    *(undefined4 *)(param_1 + 9) = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 148d74a58 FUN_148d74a58 body=147 status=ok
// SIG undefined FUN_148d74a58(void)

void FUN_148d74a58(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148d74aec FUN_148d74aec body=62 status=ok
// SIG undefined FUN_148d74aec(void)

void FUN_148d74aec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d74b2a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 148d74b2a FUN_148d74b2a body=112 status=ok
// SIG undefined FUN_148d74b2a(void)

ulonglong FUN_148d74b2a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148d74b64;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_148d74b64:
  return param_2 & 0xffffffff;
}



// FUNCTION 148d74b9a FUN_148d74b9a body=48 status=ok
// SIG undefined FUN_148d74b9a(void)

void FUN_148d74b9a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x80,0x10);
  }
  return;
}



// FUNCTION 148d74bca FUN_148d74bca body=105 status=ok
// SIG undefined FUN_148d74bca(void)

void FUN_148d74bca(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140279b48(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 148d74c34 FUN_148d74c34 body=164 status=ok
// SIG undefined FUN_148d74c34(void)

void FUN_148d74c34(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148d74cb4;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d74cb4:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d74cd8 FUN_148d74cd8 body=48 status=ok
// SIG undefined FUN_148d74cd8(void)

void FUN_148d74cd8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148d74d08 FUN_148d74d08 body=132 status=ok
// SIG undefined FUN_148d74d08(void)

void FUN_148d74d08(longlong param_1,int param_2)

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



// FUNCTION 148d74d8e FUN_148d74d8e body=68 status=ok
// SIG undefined FUN_148d74d8e(void)

undefined8 * FUN_148d74d8e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97a9f0;
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



// FUNCTION 148d74dd6 FUN_148d74dd6 body=81 status=ok
// SIG undefined FUN_148d74dd6(void)

undefined8 FUN_148d74dd6(longlong param_1)

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



// FUNCTION 148d74e2e FUN_148d74e2e body=89 status=ok
// SIG undefined FUN_148d74e2e(void)

bool FUN_148d74e2e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d74e79;
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
LAB_148d74e79:
  return lVar6 == param_2;
}



// FUNCTION 148d74ea4 FUN_148d74ea4 body=118 status=ok
// SIG undefined FUN_148d74ea4(void)

void FUN_148d74ea4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a9f0;
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



// FUNCTION 148d74f1a FUN_148d74f1a body=118 status=ok
// SIG undefined FUN_148d74f1a(void)

void FUN_148d74f1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97a9f0;
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



// FUNCTION 148d74f90 FUN_148d74f90 body=156 status=ok
// SIG undefined FUN_148d74f90(void)

void FUN_148d74f90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97a9f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d7501c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d7502c FUN_148d7502c body=94 status=ok
// SIG undefined FUN_148d7502c(void)

void FUN_148d7502c(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d75074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d7507f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d7508a FUN_148d7508a body=162 status=ok
// SIG undefined FUN_148d7508a(void)

void FUN_148d7508a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148d750c9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148d750c9;
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
LAB_148d750c9:
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
                    /* WARNING: Could not recover jumptable at 0x000148d75128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d7512c FUN_148d7512c body=68 status=ok
// SIG undefined FUN_148d7512c(void)

undefined8 * FUN_148d7512c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97aa80;
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



// FUNCTION 148d75174 FUN_148d75174 body=81 status=ok
// SIG undefined FUN_148d75174(void)

undefined8 FUN_148d75174(longlong param_1)

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



// FUNCTION 148d751cc FUN_148d751cc body=89 status=ok
// SIG undefined FUN_148d751cc(void)

bool FUN_148d751cc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d75217;
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
LAB_148d75217:
  return lVar6 == param_2;
}



// FUNCTION 148d75242 FUN_148d75242 body=118 status=ok
// SIG undefined FUN_148d75242(void)

void FUN_148d75242(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968dc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97aa80;
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



// FUNCTION 148d752b8 FUN_148d752b8 body=118 status=ok
// SIG undefined FUN_148d752b8(void)

void FUN_148d752b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968dc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97aa80;
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



// FUNCTION 148d7532e FUN_148d7532e body=156 status=ok
// SIG undefined FUN_148d7532e(void)

void FUN_148d7532e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968dc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97aa80;
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
                    /* WARNING: Could not recover jumptable at 0x000148d753ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d753ca FUN_148d753ca body=98 status=ok
// SIG undefined FUN_148d753ca(void)

void FUN_148d753ca(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d75413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d75422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d7542c FUN_148d7542c body=68 status=ok
// SIG undefined FUN_148d7542c(void)

undefined8 * FUN_148d7542c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97aaf0;
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



// FUNCTION 148d75474 FUN_148d75474 body=81 status=ok
// SIG undefined FUN_148d75474(void)

undefined8 FUN_148d75474(longlong param_1)

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



// FUNCTION 148d754cc FUN_148d754cc body=89 status=ok
// SIG undefined FUN_148d754cc(void)

bool FUN_148d754cc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d75517;
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
LAB_148d75517:
  return lVar6 == param_2;
}



// FUNCTION 148d75542 FUN_148d75542 body=118 status=ok
// SIG undefined FUN_148d75542(void)

void FUN_148d75542(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97aaf0;
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



// FUNCTION 148d755b8 FUN_148d755b8 body=118 status=ok
// SIG undefined FUN_148d755b8(void)

void FUN_148d755b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968e30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97aaf0;
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



// FUNCTION 148d7562e FUN_148d7562e body=156 status=ok
// SIG undefined FUN_148d7562e(void)

void FUN_148d7562e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b968e30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97aaf0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d756ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d756ca FUN_148d756ca body=98 status=ok
// SIG undefined FUN_148d756ca(void)

void FUN_148d756ca(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d75713. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d75722. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d7572c FUN_148d7572c body=94 status=ok
// SIG undefined FUN_148d7572c(void)

ulonglong FUN_148d7572c(longlong param_1)

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
LAB_148d75745:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d75745;
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



// FUNCTION 148d7578a FUN_148d7578a body=68 status=ok
// SIG undefined FUN_148d7578a(void)

undefined8 * FUN_148d7578a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97ab60;
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



// FUNCTION 148d757d2 FUN_148d757d2 body=81 status=ok
// SIG undefined FUN_148d757d2(void)

undefined8 FUN_148d757d2(longlong param_1)

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



// FUNCTION 148d7582a FUN_148d7582a body=91 status=ok
// SIG undefined FUN_148d7582a(void)

bool FUN_148d7582a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_148d75846;
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
LAB_148d75846:
  return lVar6 == param_2;
}



// FUNCTION 148d75886 FUN_148d75886 body=118 status=ok
// SIG undefined FUN_148d75886(void)

void FUN_148d75886(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97abd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ab60;
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



// FUNCTION 148d758fc FUN_148d758fc body=118 status=ok
// SIG undefined FUN_148d758fc(void)

void FUN_148d758fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97abd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ab60;
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



// FUNCTION 148d75972 FUN_148d75972 body=156 status=ok
// SIG undefined FUN_148d75972(void)

void FUN_148d75972(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b97abd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97ab60;
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
                    /* WARNING: Could not recover jumptable at 0x000148d759fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d75a0e FUN_148d75a0e body=98 status=ok
// SIG undefined FUN_148d75a0e(void)

void FUN_148d75a0e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148d75a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148d75a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 148d75a70 FUN_148d75a70 body=94 status=ok
// SIG undefined FUN_148d75a70(void)

ulonglong FUN_148d75a70(longlong param_1)

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
LAB_148d75ac3:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148d75ac3;
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



// FUNCTION 148d75ad0 FUN_148d75ad0 body=122 status=ok
// SIG undefined FUN_148d75ad0(void)

void FUN_148d75ad0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x180) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x180) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x180 + 4) = uVar4;
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



// FUNCTION 148d75b4a FUN_148d75b4a body=110 status=ok
// SIG undefined FUN_148d75b4a(void)

void FUN_148d75b4a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x180) == lVar2) {
          FUN_148d75bb8();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x180 + *param_1 + 0x170);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148d75bb8 FUN_148d75bb8 body=140 status=ok
// SIG undefined FUN_148d75bb8(void)

void FUN_148d75bb8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x180;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x174 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x170 + lVar6 * 0x180);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x180 + 0x170);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x170);
  FUN_1413ed254(*param_1 + lVar2 + 0x10);
  FUN_148d75ad0(param_1,param_2);
  return;
}



// FUNCTION 148d75c44 FUN_148d75c44 body=143 status=ok
// SIG undefined FUN_148d75c44(void)

void FUN_148d75c44(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148d75cd4 FUN_148d75cd4 body=71 status=ok
// SIG undefined FUN_148d75cd4(void)

void FUN_148d75cd4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    uVar1 = DAT_14c8464e8;
    param_1[1] = DAT_14c8464e0;
    param_1[2] = uVar1;
    param_1[3] = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[5] = 0x7fefffffffffffff;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 148d75d1c FUN_148d75d1c body=62 status=ok
// SIG undefined FUN_148d75d1c(void)

void FUN_148d75d1c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148d75d5a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 148d75d5a FUN_148d75d5a body=104 status=ok
// SIG undefined FUN_148d75d5a(void)

ulonglong FUN_148d75d5a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148d75d90;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_148d75d90:
  return param_2 & 0xffffffff;
}



// FUNCTION 148d75dc2 FUN_148d75dc2 body=68 status=ok
// SIG undefined FUN_148d75dc2(void)

char FUN_148d75dc2(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_14419dd74(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x38;
      param_2 = param_2 + 0x38;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 148d75e06 FUN_148d75e06 body=111 status=ok
// SIG undefined FUN_148d75e06(void)

void FUN_148d75e06(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148d75e76 FUN_148d75e76 body=48 status=ok
// SIG undefined FUN_148d75e76(void)

void FUN_148d75e76(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 148d75ea6 FUN_148d75ea6 body=132 status=ok
// SIG undefined FUN_148d75ea6(void)

void FUN_148d75ea6(longlong param_1,int param_2)

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



// FUNCTION 148d75f2c FUN_148d75f2c body=31 status=ok
// SIG undefined FUN_148d75f2c(void)

undefined8 FUN_148d75f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d75f66 FUN_148d75f66 body=29 status=ok
// SIG undefined FUN_148d75f66(void)

bool FUN_148d75f66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d75f84 FUN_148d75f84 body=26 status=ok
// SIG undefined FUN_148d75f84(void)

bool FUN_148d75f84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d75f9e FUN_148d75f9e body=93 status=ok
// SIG undefined FUN_148d75f9e(void)

void FUN_148d75f9e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97acb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d75ffc FUN_148d75ffc body=93 status=ok
// SIG undefined FUN_148d75ffc(void)

void FUN_148d75ffc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97acb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d7605a FUN_148d7605a body=126 status=ok
// SIG undefined FUN_148d7605a(void)

void FUN_148d7605a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97acb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d760c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d760d8 FUN_148d760d8 body=35 status=ok
// SIG undefined FUN_148d760d8(void)

void FUN_148d760d8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d760f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148d760fc FUN_148d760fc body=29 status=ok
// SIG undefined FUN_148d760fc(void)

undefined8 FUN_148d760fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d76134 FUN_148d76134 body=29 status=ok
// SIG undefined FUN_148d76134(void)

bool FUN_148d76134(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d76152 FUN_148d76152 body=26 status=ok
// SIG undefined FUN_148d76152(void)

bool FUN_148d76152(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d7616c FUN_148d7616c body=24 status=ok
// SIG undefined FUN_148d7616c(void)

bool FUN_148d7616c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d76184 FUN_148d76184 body=101 status=ok
// SIG undefined FUN_148d76184(void)

void FUN_148d76184(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97ad20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d761ea FUN_148d761ea body=101 status=ok
// SIG undefined FUN_148d761ea(void)

void FUN_148d761ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97ad20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d76250 FUN_148d76250 body=134 status=ok
// SIG undefined FUN_148d76250(void)

void FUN_148d76250(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b97ad20;
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
                    /* WARNING: Could not recover jumptable at 0x000148d762c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d762d6 FUN_148d762d6 body=39 status=ok
// SIG undefined FUN_148d762d6(void)

void FUN_148d762d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d762f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148d762fe FUN_148d762fe body=146 status=ok
// SIG undefined FUN_148d762fe(void)

bool FUN_148d762fe(longlong param_1)

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



// FUNCTION 148d76392 FUN_148d76392 body=308 status=ok
// SIG undefined FUN_148d76392(void)

void FUN_148d76392(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_141022352(param_2,iVar3);
        }
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d764c8 FUN_148d764c8 body=96 status=ok
// SIG undefined FUN_148d764c8(void)

longlong * FUN_148d764c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148d76528 FUN_148d76528 body=147 status=ok
// SIG undefined FUN_148d76528(void)

void FUN_148d76528(longlong param_1,int param_2)

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



// FUNCTION 148d765bc FUN_148d765bc body=48 status=ok
// SIG undefined FUN_148d765bc(void)

void FUN_148d765bc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148d765ec FUN_148d765ec body=105 status=ok
// SIG undefined FUN_148d765ec(void)

void FUN_148d765ec(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14069fc80(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 148d76656 FUN_148d76656 body=284 status=ok
// SIG undefined FUN_148d76656(void)

undefined8 *
FUN_148d76656(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 **local_38;
  undefined1 *local_30;
  undefined8 **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_78 = param_5;
  FUN_143dd931c(param_1);
  *param_1 = &PTR_FUN_14b97ae00;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (*(char *)(param_2 + 0x118) == '\x01') {
    local_60 = &local_70;
    local_38 = &local_68;
    local_68 = &LAB_148d76a12;
    local_40 = *(undefined4 *)(param_3 + 1);
    local_48 = *param_3;
    local_28 = &local_38;
    local_30 = &LAB_143de34b6;
    local_70 = param_1;
    FUN_1488eda1c(param_2);
    FUN_14419e1e4(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d76774 FUN_148d76774 body=38 status=ok
// SIG undefined FUN_148d76774(void)

undefined8 FUN_148d76774(undefined8 param_1,int param_2)

{
  FUN_148d77620();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d7679a FUN_148d7679a body=26 status=ok
// SIG undefined FUN_148d7679a(void)

void FUN_148d7679a(undefined8 param_1)

{
  FUN_148d76a1a();
  FUN_14419e1e4(param_1);
  return;
}



// FUNCTION 148d767b4 FUN_148d767b4 body=26 status=ok
// SIG undefined FUN_148d767b4(void)

void FUN_148d767b4(undefined8 param_1)

{
  FUN_148d77880();
  FUN_14419e1e4(param_1);
  return;
}



// FUNCTION 148d767ce FUN_148d767ce body=28 status=ok
// SIG undefined FUN_148d767ce(void)

bool FUN_148d767ce(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  lVar2 = FUN_148d7741a();
  return *(uint *)(lVar2 + 0x20) <= uVar1;
}



// FUNCTION 148d767ea FUN_148d767ea body=17 status=ok
// SIG undefined FUN_148d767ea(void)

undefined4 FUN_148d767ea(void)

{
  longlong lVar1;
  
  lVar1 = FUN_148d7741a();
  return *(undefined4 *)(lVar1 + 0x20);
}



// FUNCTION 148d76804 FUN_148d76804 body=343 status=ok
// SIG undefined FUN_148d76804(void)

undefined8 FUN_148d76804(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60 [2];
  undefined4 local_50;
  undefined4 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_148d7741a();
  uVar3 = *(uint *)(lVar5 + 0x20);
  uVar4 = *(uint *)(param_1 + 0x148);
  FUN_14023409e(&local_a8,*(longlong *)(param_1 + 0x38) + 0x38,1);
  local_88 = &local_68;
  local_68._0_4_ = 1;
  local_60[1] = 0;
  local_50 = 0;
  local_48 = 1;
  local_38 = 0;
  local_30 = 0;
  local_80 = &local_28;
  local_60[0] = (ulonglong)uVar4;
  local_40 = (ulonglong)uVar3;
  FUN_14010d304(&local_78);
  local_98 = local_a8;
  local_90 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_98,&local_78);
  FUN_14007f2db(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_68 + lVar5) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_68 + lVar5) + 0x10))();
      *(undefined8 *)((longlong)&local_68 + lVar5) = 0;
      *(undefined4 *)((longlong)local_60 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7695c FUN_148d7695c body=98 status=ok
// SIG undefined FUN_148d7695c(void)

void FUN_148d7695c(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143d29a28(local_28,*(undefined4 *)(param_1 + 0x148));
  FUN_1488ebe76(param_1,&DAT_14cbcd0c8,local_28);
  FUN_143dd99e6(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d76a1a FUN_148d76a1a body=231 status=ok
// SIG undefined FUN_148d76a1a(void)

void FUN_148d76a1a(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14119f41e();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_14119f41e();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar3 != 0 && lVar2 != lVar3) {
        local_48 = param_1;
        local_40 = (undefined1 *)lVar3;
        FUN_148d76b02(lVar3 + 8,local_50,param_1[3],&local_48);
        local_58 = 0;
        FUN_14485c47a(&local_58,param_2);
        local_48 = &local_58;
        local_40 = local_50;
        FUN_148d76ea4(param_1 + 0x1f,local_34,&local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d76b02 FUN_148d76b02 body=248 status=ok
// SIG undefined FUN_148d76b02(void)

undefined8
FUN_148d76b02(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar4 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b97b2d0;
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
  local_40[2] = lVar6;
  *local_40 = &PTR_FUN_14b97ae60;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(puVar4 + 4) = *param_4;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar1;
  *(undefined4 *)(puVar4 + 5) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = uVar3;
  FUN_145c3317e(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d76bfc FUN_148d76bfc body=29 status=ok
// SIG undefined FUN_148d76bfc(void)

undefined8 FUN_148d76bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d76c32 FUN_148d76c32 body=29 status=ok
// SIG undefined FUN_148d76c32(void)

bool FUN_148d76c32(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d76c50 FUN_148d76c50 body=26 status=ok
// SIG undefined FUN_148d76c50(void)

bool FUN_148d76c50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d76c74 FUN_148d76c74 body=101 status=ok
// SIG undefined FUN_148d76c74(void)

void FUN_148d76c74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ae60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d76cda FUN_148d76cda body=101 status=ok
// SIG undefined FUN_148d76cda(void)

void FUN_148d76cda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b2d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97ae60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d76d40 FUN_148d76d40 body=134 status=ok
// SIG undefined FUN_148d76d40(void)

void FUN_148d76d40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b2d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97ae60;
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
                    /* WARNING: Could not recover jumptable at 0x000148d76db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d76dc6 FUN_148d76dc6 body=49 status=ok
// SIG undefined FUN_148d76dc6(void)

void FUN_148d76dc6(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
  if (lVar2 != param_2) {
    return;
  }
  FUN_14419e1e4(uVar1);
  return;
}



// FUNCTION 148d76df8 FUN_148d76df8 body=168 status=ok
// SIG undefined FUN_148d76df8(void)

undefined4 FUN_148d76df8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  uVar3 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar3 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    if (lVar4 == param_2) {
      FUN_14419e1e4(uVar1);
    }
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d76ea4 FUN_148d76ea4 body=299 status=ok
// SIG undefined FUN_148d76ea4(void)

undefined4 * FUN_148d76ea4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148d76fd0(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_148d770b6(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148d77264(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d76fd0 FUN_148d76fd0 body=230 status=ok
// SIG undefined FUN_148d76fd0(void)

int * FUN_148d76fd0(longlong *param_1,int *param_2)

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



// FUNCTION 148d770b6 FUN_148d770b6 body=132 status=ok
// SIG undefined FUN_148d770b6(void)

undefined8 FUN_148d770b6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_148d7713c();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148d771f2(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148d770da;
    }
  }
  uVar6 = 0;
LAB_148d770da:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7713c FUN_148d7713c body=180 status=ok
// SIG undefined FUN_148d7713c(void)

int FUN_148d7713c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_145a48466(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d771ca;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d771ca:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d771f2 FUN_148d771f2 body=114 status=ok
// SIG undefined FUN_148d771f2(void)

void FUN_148d771f2(longlong *param_1,int param_2)

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



// FUNCTION 148d77264 FUN_148d77264 body=436 status=ok
// SIG undefined FUN_148d77264(void)

void FUN_148d77264(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148d7741a FUN_148d7741a body=115 status=ok
// SIG undefined FUN_148d7741a(void)

undefined8 FUN_148d7741a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d7748e(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7748e FUN_148d7748e body=83 status=ok
// SIG undefined FUN_148d7748e(void)

longlong * FUN_148d7748e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4694();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d774e8 FUN_148d774e8 body=188 status=ok
// SIG undefined FUN_148d774e8(void)

void FUN_148d774e8(undefined4 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14119f41e();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_14119f41e();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar3 != 0 && lVar2 != lVar3) {
        lVar2 = FUN_1488c6336(lVar3);
        if (lVar2 != 0) {
          local_30 = *param_1;
          uStack_2c = param_1[1];
          uStack_28 = param_1[2];
          uStack_24 = param_1[3];
          local_48 = 0;
          local_38 = &PTR_LAB_14b97aed0;
          local_58 = FUN_148d775a6;
          FUN_14100973a(lVar2);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d775a6 FUN_148d775a6 body=50 status=ok
// SIG undefined FUN_148d775a6(void)

void FUN_148d775a6(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1457b768a(*(undefined8 *)(param_2 + 8),*(undefined8 *)*param_1);
  if (cVar1 != '\0') {
    *(int *)param_1[1] = *(int *)param_1[1] + *(int *)(param_2 + 0xe8);
  }
  return;
}



// FUNCTION 148d77602 FUN_148d77602 body=29 status=ok
// SIG undefined FUN_148d77602(void)

undefined8 FUN_148d77602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d77620 FUN_148d77620 body=464 status=ok
// SIG undefined FUN_148d77620(void)

void FUN_148d77620(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14b97ae00;
  if (*(char *)(param_1[3] + 0x118) == '\x01') {
    plVar1 = param_1 + 0x1f;
    puVar2 = param_1 + 0x21;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar9 = 0;
    local_58 = puVar2;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_1449c0562(&local_60);
      iVar9 = *(int *)(param_1 + 0x24);
    }
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar3 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar9) || (local_70 = uVar5, local_58 != puVar2)) {
      do {
        local_70 = uVar5;
        lVar8 = (longlong)iVar3 * 0x18 + *local_88;
        plVar4 = (longlong *)FUN_14479d2ce(lVar8);
        if (plVar4 != (longlong *)0x0) {
          uVar5 = FUN_14119f41e();
          lVar6 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
          if (lVar6 == 0) {
            bVar10 = true;
            lVar7 = 0;
          }
          else {
            uVar5 = FUN_14119f41e();
            lVar7 = FUN_144718840(lVar6,uVar5);
            bVar10 = lVar6 == lVar7;
          }
          if (*(longlong *)(lVar8 + 8) != 0) {
            if (bVar10) {
              lVar7 = 0;
            }
            FUN_14480f766(lVar7 + 8);
          }
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar3 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != plVar1 || (local_78 != puVar2 || local_70._4_4_ != iVar9));
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_148d777f2(param_1 + 0x1f);
  FUN_1488ec0c8(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d777f2 FUN_148d777f2 body=52 status=ok
// SIG undefined FUN_148d777f2(void)

void FUN_148d777f2(longlong *param_1)

{
  FUN_148d77826();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148d77826 FUN_148d77826 body=89 status=ok
// SIG undefined FUN_148d77826(void)

void FUN_148d77826(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148d77880 FUN_148d77880 body=225 status=ok
// SIG undefined FUN_148d77880(void)

void FUN_148d77880(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)(param_1 + 0xf8);
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = local_30;
  iVar2 = FUN_148d7713c(plVar5,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(*plVar5 + 8 + (longlong)iVar2 * 0x18);
    FUN_148d77974(plVar5,iVar2);
    if (param_2 != (longlong *)0x0) {
      uVar3 = FUN_14119f41e();
      lVar4 = (**(code **)(*param_2 + 0x288))(param_2,uVar3);
      if (lVar4 != 0) {
        uVar3 = FUN_14119f41e();
        FUN_144718840(lVar4,uVar3);
      }
    }
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d77974 FUN_148d77974 body=87 status=ok
// SIG undefined FUN_148d77974(void)

void FUN_148d77974(longlong *param_1,int param_2)

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
  FUN_148d771f2();
  return;
}



// FUNCTION 148d779cc FUN_148d779cc body=132 status=ok
// SIG undefined FUN_148d779cc(void)

void FUN_148d779cc(longlong param_1,int param_2)

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



// FUNCTION 148d77a52 FUN_148d77a52 body=132 status=ok
// SIG undefined FUN_148d77a52(void)

void FUN_148d77a52(longlong param_1,int param_2)

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



// FUNCTION 148d77ad8 FUN_148d77ad8 body=83 status=ok
// SIG undefined FUN_148d77ad8(void)

longlong * FUN_148d77ad8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c472a();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d77b2c FUN_148d77b2c body=779 status=ok
// SIG undefined FUN_148d77b2c(void)

undefined8 *
FUN_148d77b2c(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
             ulonglong param_5)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 *local_c8;
  undefined8 **local_c0;
  undefined1 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = *param_3;
  local_80 = *(undefined4 *)(param_3 + 1);
  local_f8 = param_5;
  FUN_143dd931c(param_1,param_2,&local_88);
  *param_1 = &PTR_FUN_14b97af30;
  if ((char)param_2[0x23] == '\x01') {
    uVar7 = (**(code **)(*param_2 + 0x180))(param_2);
    lVar8 = FUN_141552268(uVar7,0);
    if (lVar8 != 0) {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      lVar9 = FUN_148d77e38(param_1);
      lVar10 = *(longlong *)(lVar9 + 0x10);
      if (lVar10 == 0) {
        lVar10 = FUN_141843f1a();
      }
      uVar7 = *(undefined8 *)(lVar9 + 8);
      uVar11 = FUN_14477b664(lVar10);
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      uVar11 = FUN_14477b664(uVar11);
      uVar11 = FUN_14477b664(uVar11);
      uStack_90 = CONCAT44(uStack_90._4_4_,1);
      FUN_148d77ed8(&local_98);
      puVar5 = local_98;
      local_98[1] = 0;
      local_98[2] = 0;
      *local_98 = uVar7;
      uVar7 = FUN_14477b664(uVar11);
      uVar7 = FUN_14477b664(uVar7);
      puVar5[1] = uVar7;
      puVar5[2] = uVar4;
      local_b0 = (undefined1 *)0x0;
      local_a8 = 0x3860a972;
      local_a0 = 0;
      local_78 = &local_70;
      local_70 = 0;
      uStack_e0 = &local_78;
      local_58 = &local_e8;
      local_e8 = FUN_148d77fba;
      local_60 = *(undefined4 *)(param_1 + 5);
      local_68 = param_1[4];
      local_c0 = &local_58;
      local_c8 = &LAB_143de34b6;
      FUN_1488eda1c(param_1[3]);
      lVar10 = local_70;
      if (local_70 != 0) {
        uVar7 = (**(code **)(*param_2 + 0x180))(param_2);
        FUN_1408b794c(&local_c8,uVar7);
        ppuVar12 = local_c0;
        if (local_c0 != (undefined8 **)0x0) {
          iVar6 = *(int *)(local_c0 + 1);
          do {
            if (iVar6 == 0) {
              ppuVar12 = (undefined8 **)0x0;
              break;
            }
            LOCK();
            iVar3 = *(int *)(ppuVar12 + 1);
            bVar13 = iVar6 == iVar3;
            if (bVar13) {
              *(int *)(ppuVar12 + 1) = iVar6 + 1;
              iVar3 = iVar6;
            }
            iVar6 = iVar3;
            UNLOCK();
          } while (!bVar13);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (*(code *)(*local_c0)[2])();
          }
          if (ppuVar12 != (undefined8 **)0x0) {
            if (local_c8 != (undefined1 *)0x0) {
              lVar9 = *(longlong *)(lVar10 + 0x1c8);
              if (lVar9 == 0) {
                local_d8 = DAT_14c8464f0;
                local_e8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_e0 = (longlong **)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_e8 = *(code **)(lVar9 + 0x260);
                uStack_e0 = *(longlong ***)(lVar9 + 0x268);
                local_d8 = *(undefined8 *)(lVar9 + 0x270);
              }
              FUN_140782676(local_c8,&local_c8,&local_e8);
              if ((local_b0 != local_c8) || (local_a8 != (int)local_c0)) {
                local_b0 = local_c8;
                local_a8 = (int)local_c0;
                local_a0 = 0;
              }
            }
            LOCK();
            ppuVar2 = ppuVar12 + 1;
            *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
            UNLOCK();
            if (*(int *)ppuVar2 == 0) {
              (*(code *)**ppuVar12)(ppuVar12);
              LOCK();
              piVar1 = (int *)((longlong)ppuVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppuVar12)[2])(ppuVar12);
              }
            }
          }
        }
      }
      local_f8 = local_f8 & 0xffffffffffffff00;
      FUN_143c91dfc(lVar8,&local_98,lVar10,&local_b0);
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d77e38 FUN_148d77e38 body=115 status=ok
// SIG undefined FUN_148d77e38(void)

undefined8 FUN_148d77e38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d77f66(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d77eac FUN_148d77eac body=38 status=ok
// SIG undefined FUN_148d77eac(void)

undefined8 FUN_148d77eac(undefined8 param_1,int param_2)

{
  FUN_148d77fca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d77ed8 FUN_148d77ed8 body=141 status=ok
// SIG undefined FUN_148d77ed8(void)

void FUN_148d77ed8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 * 0x18,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 / 0x18)) {
    uVar3 = uVar2 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x18,8);
  return;
}



// FUNCTION 148d77f66 FUN_148d77f66 body=83 status=ok
// SIG undefined FUN_148d77f66(void)

longlong * FUN_148d77f66(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c4894();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d77fba FUN_148d77fba body=15 status=ok
// SIG undefined FUN_148d77fba(void)

void FUN_148d77fba(undefined8 *param_1,longlong param_2)

{
  if (*(longlong *)*param_1 == 0) {
    *(longlong *)*param_1 = param_2;
  }
  return;
}



// FUNCTION 148d77fca FUN_148d77fca body=404 status=ok
// SIG undefined FUN_148d77fca(void)

void FUN_148d77fca(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  code **local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14b97af30;
  if ((char)((longlong *)param_1[3])[0x23] == '\x01') {
    uVar3 = (**(code **)(*(longlong *)param_1[3] + 0x180))();
    lVar4 = FUN_141552268(uVar3,0);
    if (lVar4 != 0) {
      local_a8 = (undefined8 *)0x0;
      uStack_a0 = 0;
      lVar5 = FUN_148d77e38(param_1);
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (lVar6 == 0) {
        lVar6 = FUN_141843f1a();
      }
      uVar3 = *(undefined8 *)(lVar5 + 8);
      uVar7 = FUN_14477b664(lVar6);
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      uVar7 = FUN_14477b664(uVar7);
      uVar7 = FUN_14477b664(uVar7);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
      FUN_148d77ed8(&local_a8);
      puVar2 = local_a8;
      local_a8[1] = 0;
      local_a8[2] = 0;
      *local_a8 = uVar3;
      uVar3 = FUN_14477b664(uVar7);
      uVar3 = FUN_14477b664(uVar3);
      puVar2[1] = uVar3;
      puVar2[2] = uVar1;
      local_98 = &local_80;
      local_80 = 0;
      local_88 = &local_98;
      local_68 = &local_90;
      local_90 = FUN_148d77fba;
      local_70 = *(undefined4 *)(param_1 + 5);
      local_78 = param_1[4];
      local_58 = &local_68;
      local_60 = &LAB_143de34b6;
      FUN_1488eda1c(param_1[3]);
      FUN_141135846(lVar4,&local_a8,local_80);
      if (local_a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1488ec0c8(param_1);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78160 FUN_148d78160 body=430 status=ok
// SIG undefined FUN_148d78160(void)

longlong *
FUN_148d78160(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_78;
  code *local_70;
  longlong **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  code **local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = *param_3;
  local_58 = *(undefined4 *)(param_3 + 1);
  local_88 = param_5;
  FUN_143dd931c(param_1);
  *param_1 = (longlong)&PTR_FUN_14b97af90;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (*(char *)(param_2 + 0x118) != '\x01') goto LAB_148d7823a;
  local_68 = &local_78;
  local_40 = &local_70;
  local_70 = FUN_148d78694;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = *param_3;
  local_30 = &local_40;
  local_38 = 0x43de34b6;
  uStack_34 = 1;
  local_78 = param_1;
  FUN_1488eda1c(param_2);
  FUN_1488ebfe8(param_1,&local_38,&DAT_14cbcd188);
  if ((local_38 & 0xff) == 3) {
    bVar2 = CONCAT44((undefined4)local_30,uStack_34) == 0;
LAB_148d782db:
    uVar1 = (uint)!bVar2;
  }
  else {
    uVar1 = local_30._4_4_;
    if (((local_38 & 0xff) != 2) && (uVar1 = 0, (char)local_38 == '\x01')) {
      bVar2 = local_30._4_4_ == 0;
      goto LAB_148d782db;
    }
  }
  *(uint *)(param_1 + 0x33) = uVar1;
  (**(code **)(*param_1 + 0x50))(param_1);
LAB_148d7823a:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d78310 FUN_148d78310 body=38 status=ok
// SIG undefined FUN_148d78310(void)

undefined8 FUN_148d78310(undefined8 param_1,int param_2)

{
  FUN_148d795a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d78336 FUN_148d78336 body=176 status=ok
// SIG undefined FUN_148d78336(void)

void FUN_148d78336(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488ec6b6();
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x118) == '\x01') {
    cVar1 = FUN_14883d960(param_2,L"Finished");
    if (cVar1 != '\0') {
      local_48 = &local_58;
      local_30 = &local_50;
      local_50 = &LAB_148d79986;
      local_38 = *(undefined4 *)(param_1 + 0x28);
      local_40 = *(undefined8 *)(param_1 + 0x20);
      local_20 = &local_30;
      local_28 = &LAB_143de34b6;
      local_58 = param_1;
      FUN_1488eda1c(*(undefined8 *)(param_1 + 0x18));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d783e8 FUN_148d783e8 body=96 status=ok
// SIG undefined FUN_148d783e8(void)

void FUN_148d783e8(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14b97aff0;
  local_48 = &LAB_148d786f6;
  local_20 = param_1;
  FUN_143ddb962(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78450 FUN_148d78450 body=28 status=ok
// SIG undefined FUN_148d78450(void)

bool FUN_148d78450(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x198);
  lVar2 = FUN_148d78cea();
  return *(uint *)(lVar2 + 0x40) <= uVar1;
}



// FUNCTION 148d7846c FUN_148d7846c body=17 status=ok
// SIG undefined FUN_148d7846c(void)

undefined4 FUN_148d7846c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_148d78cea();
  return *(undefined4 *)(lVar1 + 0x40);
}



// FUNCTION 148d78486 FUN_148d78486 body=343 status=ok
// SIG undefined FUN_148d78486(void)

undefined8 FUN_148d78486(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60 [2];
  undefined4 local_50;
  undefined4 local_48;
  ulonglong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_148d78cea();
  uVar3 = *(uint *)(lVar5 + 0x40);
  uVar4 = *(uint *)(param_1 + 0x198);
  FUN_14023409e(&local_a8,*(longlong *)(param_1 + 0x38) + 0x38,1);
  local_88 = &local_68;
  local_68._0_4_ = 1;
  local_60[1] = 0;
  local_50 = 0;
  local_48 = 1;
  local_38 = 0;
  local_30 = 0;
  local_80 = &local_28;
  local_60[0] = (ulonglong)uVar4;
  local_40 = (ulonglong)uVar3;
  FUN_14010d304(&local_78);
  local_98 = local_a8;
  local_90 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_98,&local_78);
  FUN_14007f2db(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_68 + lVar5) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_68 + lVar5) + 0x10))();
      *(undefined8 *)((longlong)&local_68 + lVar5) = 0;
      *(undefined4 *)((longlong)local_60 + lVar5) = 0;
    }
    lVar5 = lVar5 + -0x20;
  } while (lVar5 != -0x10);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d785de FUN_148d785de body=98 status=ok
// SIG undefined FUN_148d785de(void)

void FUN_148d785de(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143d29a28(local_28,*(undefined4 *)(param_1 + 0x198));
  FUN_1488ebe76(param_1,&DAT_14cbcd188,local_28);
  FUN_143dd99e6(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78694 FUN_148d78694 body=96 status=ok
// SIG undefined FUN_148d78694(void)

void FUN_148d78694(longlong *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  longlong local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = *param_1;
  local_38 = 0;
  local_28 = &PTR_LAB_14b97aff0;
  local_48 = &LAB_148d786f6;
  FUN_143ddb962(*(undefined8 *)(local_20 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78726 FUN_148d78726 body=29 status=ok
// SIG undefined FUN_148d78726(void)

undefined8 FUN_148d78726(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d78744 FUN_148d78744 body=357 status=ok
// SIG undefined FUN_148d78744(void)

void FUN_148d78744(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    uVar3 = FUN_1403ec9c0();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1403ec9c0();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar3 = FUN_14049e780();
        cVar2 = FUN_1448093f4(lVar6,uVar3);
        if ((lVar6 != 0) && (cVar2 != '\0')) {
          local_60 = puVar1;
          FUN_148d788aa(lVar6 + 0x218,local_68,puVar1[3],&local_60);
          local_70 = 0;
          FUN_14485c47a(&local_70,param_2);
          local_60 = &local_70;
          local_58 = (undefined8 *)local_68;
          FUN_148d78db2(puVar1 + 0x1f,&local_78,&local_60);
          local_60 = puVar1;
          FUN_148d789a2(lVar6 + 0x20,&local_70,puVar1[3],&local_60);
          local_78 = 0;
          FUN_14485c47a(&local_78,param_2);
          local_60 = &local_78;
          local_58 = &local_70;
          FUN_148d78db2(puVar1 + 0x29,local_4c,&local_60);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d788aa FUN_148d788aa body=247 status=ok
// SIG undefined FUN_148d788aa(void)

undefined8
FUN_148d788aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b40ec50;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b97b010;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = *param_4;
  FUN_1412c5acc(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d789a2 FUN_148d789a2 body=247 status=ok
// SIG undefined FUN_148d789a2(void)

undefined8
FUN_148d789a2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3e9ef0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b97b080;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = *param_4;
  FUN_1403524de(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78a9a FUN_148d78a9a body=29 status=ok
// SIG undefined FUN_148d78a9a(void)

undefined8 FUN_148d78a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d78ad0 FUN_148d78ad0 body=29 status=ok
// SIG undefined FUN_148d78ad0(void)

bool FUN_148d78ad0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d78aee FUN_148d78aee body=26 status=ok
// SIG undefined FUN_148d78aee(void)

bool FUN_148d78aee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d78b12 FUN_148d78b12 body=93 status=ok
// SIG undefined FUN_148d78b12(void)

void FUN_148d78b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ec50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d78b70 FUN_148d78b70 body=93 status=ok
// SIG undefined FUN_148d78b70(void)

void FUN_148d78b70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ec50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97b010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d78bce FUN_148d78bce body=126 status=ok
// SIG undefined FUN_148d78bce(void)

void FUN_148d78bce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b40ec50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97b010;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d78c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d78c56 FUN_148d78c56 body=147 status=ok
// SIG undefined FUN_148d78c56(void)

undefined4 FUN_148d78c56(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
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
  uVar2 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar2 != '\0') {
    FUN_14419e2c8(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78cea FUN_148d78cea body=115 status=ok
// SIG undefined FUN_148d78cea(void)

undefined8 FUN_148d78cea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d78d5e(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78d5e FUN_148d78d5e body=83 status=ok
// SIG undefined FUN_148d78d5e(void)

longlong * FUN_148d78d5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c492a();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d78db2 FUN_148d78db2 body=299 status=ok
// SIG undefined FUN_148d78db2(void)

undefined4 * FUN_148d78db2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148d78ede(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  cVar4 = FUN_148d78fc4(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148d79176(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d78ede FUN_148d78ede body=230 status=ok
// SIG undefined FUN_148d78ede(void)

int * FUN_148d78ede(longlong *param_1,int *param_2)

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



// FUNCTION 148d78fc4 FUN_148d78fc4 body=132 status=ok
// SIG undefined FUN_148d78fc4(void)

undefined8 FUN_148d78fc4(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar5 = FUN_148d7904a();
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      uVar3 = *(undefined4 *)(param_3 + 1);
      uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = *(undefined4 *)param_3;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      FUN_148d79104(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_148d78fe8;
    }
  }
  uVar6 = 0;
LAB_148d78fe8:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7904a FUN_148d7904a body=185 status=ok
// SIG undefined FUN_148d7904a(void)

int FUN_148d7904a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_144902768(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_148d79073;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_148d79073:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 148d79104 FUN_148d79104 body=114 status=ok
// SIG undefined FUN_148d79104(void)

void FUN_148d79104(longlong *param_1,int param_2)

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



// FUNCTION 148d79176 FUN_148d79176 body=436 status=ok
// SIG undefined FUN_148d79176(void)

void FUN_148d79176(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 148d7932c FUN_148d7932c body=29 status=ok
// SIG undefined FUN_148d7932c(void)

undefined8 FUN_148d7932c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d79362 FUN_148d79362 body=29 status=ok
// SIG undefined FUN_148d79362(void)

bool FUN_148d79362(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d79380 FUN_148d79380 body=26 status=ok
// SIG undefined FUN_148d79380(void)

bool FUN_148d79380(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d793a4 FUN_148d793a4 body=93 status=ok
// SIG undefined FUN_148d793a4(void)

void FUN_148d793a4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97b080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d79402 FUN_148d79402 body=93 status=ok
// SIG undefined FUN_148d79402(void)

void FUN_148d79402(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b97b080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148d79460 FUN_148d79460 body=126 status=ok
// SIG undefined FUN_148d79460(void)

void FUN_148d79460(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97b080;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d794cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d794de FUN_148d794de body=37 status=ok
// SIG undefined FUN_148d794de(void)

void FUN_148d794de(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  FUN_14419e2c8(uVar1,uVar2);
  return;
}



// FUNCTION 148d79504 FUN_148d79504 body=162 status=ok
// SIG undefined FUN_148d79504(void)

undefined4 FUN_148d79504(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar5 = local_30;
  }
  else {
    lVar5 = 0;
  }
  uVar3 = FUN_144729dda(param_1 + 0x18);
  if ((char)uVar3 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = (**(code **)(*param_2 + 0xf8))(param_2);
    FUN_14419e2c8(uVar1,uVar4);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d795a8 FUN_148d795a8 body=846 status=ok
// SIG undefined FUN_148d795a8(void)

void FUN_148d795a8(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14b97af90;
  if (*(char *)(param_1[3] + 0x118) == '\x01') {
    plVar1 = param_1 + 0x1f;
    puVar2 = param_1 + 0x21;
    local_68 = 0x100000000;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_50 = 0;
    iVar10 = 0;
    local_60 = puVar2;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 0x24);
    }
    local_78._0_4_ = (uint)local_58;
    local_78._4_4_ = local_58._4_4_;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_90 = plVar1;
    if ((local_58._4_4_ != iVar10) || (local_60 != puVar2)) {
      do {
        lVar9 = (longlong)local_78._4_4_ * 0x18 + *local_90;
        plVar5 = (longlong *)FUN_14479d2ce(lVar9);
        if (plVar5 != (longlong *)0x0) {
          uVar6 = FUN_1403ec9c0();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
          if (plVar5 == (longlong *)0x0) {
LAB_148d796cc:
            plVar7 = (longlong *)0x0;
          }
          else {
            uVar6 = FUN_1403ec9c0();
            plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
            if (plVar5 == plVar7) goto LAB_148d796cc;
          }
          lVar8 = (**(code **)(*plVar7 + 0x10))();
          uVar6 = FUN_14049e780();
          cVar3 = FUN_1448093f4(lVar8,uVar6);
          if (*(longlong *)(lVar9 + 8) != 0) {
            if (cVar3 == '\0') {
              lVar8 = 0;
            }
            FUN_14480f766(lVar8 + 0x218);
          }
        }
        local_78._0_4_ = (uint)local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (local_90 != plVar1 || (local_80 != puVar2 || local_78._4_4_ != iVar10));
    }
    plVar1 = param_1 + 0x29;
    puVar2 = param_1 + 0x2b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar10 = 0;
    local_60 = puVar2;
    if (*(int *)(param_1 + 0x2e) != 0) {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 0x2e);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar4 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar10) || (local_78 = uVar6, local_60 != puVar2)) {
      do {
        local_78 = uVar6;
        lVar9 = (longlong)iVar4 * 0x18 + *local_90;
        plVar5 = (longlong *)FUN_14479d2ce(lVar9);
        if (plVar5 != (longlong *)0x0) {
          uVar6 = FUN_1403ec9c0();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar6);
          if (plVar5 == (longlong *)0x0) {
LAB_148d7981e:
            plVar7 = (longlong *)0x0;
          }
          else {
            uVar6 = FUN_1403ec9c0();
            plVar7 = (longlong *)FUN_144718840(plVar5,uVar6);
            if (plVar5 == plVar7) goto LAB_148d7981e;
          }
          lVar8 = (**(code **)(*plVar7 + 0x10))();
          if (*(longlong *)(lVar9 + 8) != 0) {
            FUN_14480f766(lVar8 + 0x20);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar4 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_90 != plVar1 || (local_80 != puVar2 || local_78._4_4_ != iVar10));
    }
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_148d798f8(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_148d798f8(param_1 + 0x1f);
  FUN_1488ec0c8(param_1);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d798f8 FUN_148d798f8 body=52 status=ok
// SIG undefined FUN_148d798f8(void)

void FUN_148d798f8(longlong *param_1)

{
  FUN_148d7992c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148d7992c FUN_148d7992c body=89 status=ok
// SIG undefined FUN_148d7992c(void)

void FUN_148d7992c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 148d7998e FUN_148d7998e body=439 status=ok
// SIG undefined FUN_148d7998e(void)

void FUN_148d7998e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_2 + 0xa08);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_144a78b9e();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      uVar6 = FUN_1403ec9c0();
      plVar7 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar6);
      if (plVar7 != (longlong *)0x0) {
        uVar6 = FUN_1403ec9c0();
        plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
        if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
          lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
          uVar6 = FUN_14049e780();
          cVar3 = FUN_1448093f4(lVar5,uVar6);
          if ((lVar5 != 0) && (cVar3 != '\0')) {
            plVar7 = (longlong *)(param_1 + 0xf8);
            local_40 = 0;
            FUN_14485c47a(&local_40,plVar1);
            local_38 = local_40;
            iVar4 = FUN_148d7904a(plVar7,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40);
            if (iVar4 != -1) {
              lVar2 = *(longlong *)(*plVar7 + 8 + (longlong)iVar4 * 0x18);
              FUN_148d79b5c(plVar7,iVar4);
              if (lVar2 != 0) {
                FUN_14480f766(lVar5 + 0x218,lVar2);
              }
            }
            plVar7 = (longlong *)(param_1 + 0x148);
            local_48 = 0;
            FUN_14485c47a(&local_48,plVar1);
            local_38 = local_48;
            iVar4 = FUN_148d7904a(plVar7,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
            if (iVar4 != -1) {
              lVar5 = *(longlong *)(*plVar7 + 8 + (longlong)iVar4 * 0x18);
              FUN_148d79b5c(plVar7,iVar4);
              if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
              }
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d79b5c FUN_148d79b5c body=87 status=ok
// SIG undefined FUN_148d79b5c(void)

void FUN_148d79b5c(longlong *param_1,int param_2)

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
  FUN_148d79104();
  return;
}



// FUNCTION 148d79bc2 FUN_148d79bc2 body=65 status=ok
// SIG undefined FUN_148d79bc2(void)

void FUN_148d79bc2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = param_1;
  }
  FUN_1488f27c6(lVar1,*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) == param_2) {
    return;
  }
  FUN_148d79c04(param_1,param_2);
  return;
}



// FUNCTION 148d79c04 FUN_148d79c04 body=101 status=ok
// SIG undefined FUN_148d79c04(void)

void FUN_148d79c04(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,0);
    uVar2 = (uint)(uVar1 / 0x28);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x34)) {
    return;
  }
  *(uint *)(param_1 + 0x34) = uVar3;
  FUN_1488f2e82(param_1,*(undefined4 *)(param_1 + 0x30),uVar3,0x28);
  return;
}



// FUNCTION 148d79c6a FUN_148d79c6a body=342 status=ok
// SIG undefined FUN_148d79c6a(void)

longlong * FUN_148d79c6a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 0x30) * 0x28,
             (longlong)*(int *)(param_2 + 0x34) * 0x28);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 0x30);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_148d79bc2(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 0x30) = local_2c;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x28);
      if (*(longlong *)(param_2 + 0x28) == 0) {
        lVar4 = param_2;
      }
      FUN_148d733e9(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar7 < *(int *)(param_2 + 0x30));
  }
  else {
    FUN_148d79bc2(param_2);
    if (0 < (int)local_2c) {
      iVar5 = 0;
      do {
        uVar3 = FUN_148d73b18(param_2);
        FUN_148d733e9(param_1,uVar3);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148d79dc2 FUN_148d79dc2 body=83 status=ok
// SIG undefined FUN_148d79dc2(void)

longlong * FUN_148d79dc2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1465c49c0();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148d79e16 FUN_148d79e16 body=341 status=ok
// SIG undefined FUN_148d79e16(void)

undefined8 * FUN_148d79e16(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b6aee20;
  param_1[1] = &DAT_14a171d50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_14a171d50;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &DAT_14a171d50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = &DAT_14a171d50;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  uVar1 = FUN_143c8ceda();
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_140115c12(param_1 + 3,0);
  }
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 7,0);
  }
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0xb,0);
  }
  param_1[10] = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0xf,0);
  }
  param_1[0xe] = uVar1;
  FUN_140d23e2a(local_28,&DAT_14cbcd288);
  FUN_140653d46(param_1 + 9,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d79f6c FUN_148d79f6c body=150 status=ok
// SIG undefined FUN_148d79f6c(void)

undefined8 *
FUN_148d79f6c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x118,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d80f18(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a004 FUN_148d7a004 body=150 status=ok
// SIG undefined FUN_148d7a004(void)

undefined8 *
FUN_148d7a004(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x108,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d81426(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a09c FUN_148d7a09c body=150 status=ok
// SIG undefined FUN_148d7a09c(void)

undefined8 *
FUN_148d7a09c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x118,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d81dda(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a134 FUN_148d7a134 body=150 status=ok
// SIG undefined FUN_148d7a134(void)

undefined8 *
FUN_148d7a134(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x148,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d8255e(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a1cc FUN_148d7a1cc body=251 status=ok
// SIG undefined FUN_148d7a1cc(void)

void FUN_148d7a1cc(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  lVar1 = FUN_1459975fc();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_1458f2b14();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) goto LAB_148d7a22e;
    FUN_148d730c0(&local_40);
    FUN_148d7a2c8(param_2 + 0x590,param_1,local_40);
    param_2 = param_2 + 0x5a0;
    puVar2 = &local_48;
  }
  else {
    FUN_148d730c0(&local_30);
    FUN_148d7a2c8(param_2 + 0x560,param_1,local_30);
    param_2 = param_2 + 0x570;
    puVar2 = &local_38;
  }
  FUN_148d731bc(puVar2);
  FUN_148d7a2c8(param_2,param_1,*puVar2);
LAB_148d7a22e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a2c8 FUN_148d7a2c8 body=125 status=ok
// SIG undefined FUN_148d7a2c8(void)

void FUN_148d7a2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a346 FUN_148d7a346 body=34 status=ok
// SIG undefined FUN_148d7a346(void)

void FUN_148d7a346(longlong param_1,longlong param_2,byte param_3)

{
  if ((param_2 != 0 & param_3 & *(longlong **)(param_1 + 0x28) != (longlong *)0x0) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148d7a363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
    return;
  }
  return;
}



// FUNCTION 148d7a368 FUN_148d7a368 body=34 status=ok
// SIG undefined FUN_148d7a368(void)

void FUN_148d7a368(longlong param_1,longlong param_2,byte param_3)

{
  if ((param_2 != 0 & param_3 & *(longlong **)(param_1 + 0x28) != (longlong *)0x0) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000148d7a385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
    return;
  }
  return;
}



// FUNCTION 148d7a38a FUN_148d7a38a body=303 status=ok
// SIG undefined FUN_148d7a38a(void)

void FUN_148d7a38a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar1 = FUN_1459975fc();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      != lVar1 + 0x30)) {
    lVar1 = FUN_1458f2b14();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) goto LAB_148d7a3f0;
    FUN_148d730c0(&local_48);
    FUN_1409ca370(param_2 + 0x590,param_1,local_48);
    FUN_144a7b126(param_2 + 0x590,&local_29,1);
    param_2 = param_2 + 0x5a0;
    puVar2 = &local_50;
  }
  else {
    FUN_148d730c0(&local_38);
    FUN_1409ca370(param_2 + 0x560,param_1,local_38);
    FUN_144a7b126(param_2 + 0x560,&local_29,1);
    param_2 = param_2 + 0x570;
    puVar2 = &local_40;
  }
  FUN_148d731bc(puVar2);
  FUN_1409ca370(param_2,param_1,*puVar2);
  FUN_144a7b126(param_2,&local_29,1);
LAB_148d7a3f0:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a4ba FUN_148d7a4ba body=499 status=ok
// SIG undefined FUN_148d7a4ba(void)

undefined8 FUN_148d7a4ba(longlong param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined2 *local_100;
  undefined1 local_ec [12];
  undefined2 *local_e0;
  int local_d8;
  undefined1 local_cc [12];
  undefined2 *local_c0;
  int local_b8;
  undefined1 local_ac [12];
  undefined2 *local_a0;
  int local_98;
  undefined1 local_8c [12];
  undefined2 *local_80;
  int local_78;
  longlong local_70 [2];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1 = param_1 + 0x10;
  FUN_144a659ac(param_1,local_8c,4);
  FUN_1408226d0(local_8c,&local_80,1);
  puVar5 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar5 = local_80;
  }
  FUN_144a659ac(param_1,local_ac,3);
  FUN_1408226d0(local_ac,&local_a0,1);
  puVar4 = &DAT_149dfb77a;
  if (local_98 != 0) {
    puVar4 = local_a0;
  }
  FUN_144a659ac(param_1,local_cc,2);
  FUN_1408226d0(local_cc,&local_c0,1);
  puVar2 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    puVar2 = local_c0;
  }
  FUN_144a659ac(param_1,local_ec,1);
  FUN_1408226d0(local_ec,&local_e0,1);
  puVar3 = &DAT_149dfb77a;
  if (local_d8 != 0) {
    puVar3 = local_e0;
  }
  local_108 = puVar4;
  local_100 = puVar5;
  FUN_140002266(local_70,L"%ls_%ls_%ls_%ls_WP",puVar3,puVar2);
  FUN_14000bbd8(local_60,local_70,0);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1410002c4(local_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a6ae FUN_148d7a6ae body=765 status=ok
// SIG undefined FUN_148d7a6ae(void)

undefined8 *
FUN_148d7a6ae(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = *param_3;
  local_40 = *(undefined4 *)(param_3 + 1);
  local_b8 = param_5;
  FUN_143dd931c(param_1,param_2,&local_48);
  *param_1 = &PTR_FUN_14b97b3b0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 1;
  *(undefined1 *)((longlong)param_1 + 0x126) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0x8000000000;
  cVar3 = FUN_1488ebfe0(param_2);
  if (cVar3 != '\0') {
    FUN_1441a09f2(param_1);
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar1 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b97b250;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14b97c5d0;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,param_2);
    puVar1[4] = param_1;
    local_60 = DAT_14cbcd3f0;
    local_68 = DAT_14cbcd3e8;
    FUN_1488ec3e0(param_1,&local_68,&local_58);
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar1 = local_78;
    local_70 = 3;
    *local_78 = &PTR_LAB_14b97b250;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_78[2] = lVar4;
    *local_78 = &PTR_FUN_14b97c640;
    local_78[3] = 0;
    FUN_14485c47a(local_78 + 3,param_2);
    puVar1[4] = param_1;
    local_80 = DAT_14cbcdd40;
    local_88 = DAT_14cbcdd38;
    FUN_1488ec3e0(param_1,&local_88,&local_78);
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar1 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14b97b250;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_98[2] = lVar4;
    *local_98 = &PTR_FUN_14b97c6b0;
    local_98[3] = 0;
    FUN_14485c47a(local_98 + 3,param_2);
    puVar1[4] = param_1;
    local_a0 = DAT_14cbcdd58;
    local_a8 = DAT_14cbcdd50;
    FUN_1488ec3e0(param_1,&local_a8,&local_98);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7a9ac FUN_148d7a9ac body=131 status=ok
// SIG undefined FUN_148d7a9ac(void)

void FUN_148d7a9ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b97b3b0;
  FUN_148d7aa30();
  FUN_1441a1100(param_1);
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_148d82ef1(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_148d82ebe(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1488ec0c8(param_1);
  return;
}



// FUNCTION 148d7aa30 FUN_148d7aa30 body=147 status=ok
// SIG undefined FUN_148d7aa30(void)

void FUN_148d7aa30(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x110);
  lVar3 = FUN_14040226a(uVar2,0);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1401499e8(lVar3);
    if ((plVar4 != (longlong *)0x0) && (iVar1 = *(int *)(param_1 + 0x110), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x108);
      lVar5 = 0;
      do {
        (**(code **)(*plVar4 + 0x78))
                  (plVar4,*(longlong *)(param_1 + 0xf8) + (longlong)*(int *)(lVar3 + lVar5) * 0x60 +
                          0x28,*(undefined8 *)(lVar3 + 8 + lVar5));
        lVar5 = lVar5 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar5);
    }
  }
  return;
}



// FUNCTION 148d7aac4 FUN_148d7aac4 body=26 status=ok
// SIG undefined FUN_148d7aac4(void)

void FUN_148d7aac4(undefined8 param_1)

{
  FUN_1488ec6b6();
  FUN_148d7aade(param_1);
  return;
}



// FUNCTION 148d7aade FUN_148d7aade body=92 status=ok
// SIG undefined FUN_148d7aade(void)

void FUN_148d7aade(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x125) == '\0') {
    FUN_1441a18ce(param_1);
  }
  cVar1 = FUN_14883d960(param_1 + 8,L"Finished");
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x124) != '\0')) {
    cVar1 = FUN_1441a1e5c(param_1);
    if (cVar1 == '\0') {
      FUN_1441a1790(param_1);
      return;
    }
  }
  FUN_1441a1100(param_1);
  return;
}



// FUNCTION 148d7ab3a FUN_148d7ab3a body=26 status=ok
// SIG undefined FUN_148d7ab3a(void)

void FUN_148d7ab3a(undefined8 param_1)

{
  FUN_143dd99e6();
  FUN_148d7aade(param_1);
  return;
}



// FUNCTION 148d7ab5a FUN_148d7ab5a body=115 status=ok
// SIG undefined FUN_148d7ab5a(void)

undefined8 FUN_148d7ab5a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148d83242(*(longlong *)(param_1 + 0x38) + 0x18,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7abce FUN_148d7abce body=63 status=ok
// SIG undefined FUN_148d7abce(void)

longlong FUN_148d7abce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d82fe2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  FUN_148d82faa(lVar2);
  return lVar2;
}



// FUNCTION 148d7ac0e FUN_148d7ac0e body=59 status=ok
// SIG undefined FUN_148d7ac0e(void)

longlong FUN_148d7ac0e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d830ec(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_148d830d5(lVar2);
  return lVar2;
}



// FUNCTION 148d7ac4a FUN_148d7ac4a body=203 status=ok
// SIG undefined FUN_148d7ac4a(void)

void FUN_148d7ac4a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar4 = *param_2;
    plVar1 = param_1 + 0x25;
    lVar9 = 0;
    do {
      uVar3 = *(uint *)(lVar4 + lVar9);
      if (-1 < (int)uVar3) {
        if (((int)param_1[0x28] <= (int)uVar3) && (iVar8 = uVar3 - (int)param_1[0x28], -2 < iVar8))
        {
          iVar8 = iVar8 + 1;
          uVar6 = FUN_144a54ea4(plVar1,iVar8);
          FUN_1447c6044(plVar1,uVar6,iVar8,0);
        }
        plVar7 = (longlong *)param_1[0x27];
        if ((longlong *)param_1[0x27] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar2 = (uint *)((longlong)plVar7 + (ulonglong)(uVar3 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar9);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148d7ad16 FUN_148d7ad16 body=53 status=ok
// SIG undefined FUN_148d7ad16(void)

void FUN_148d7ad16(longlong param_1,int *param_2,longlong param_3)

{
  if (param_3 != 0) {
    FUN_14106c8ae(*(undefined8 *)(param_2 + 4),param_3,DAT_14cbcd400);
    return;
  }
  FUN_141059214(*(undefined8 *)(param_2 + 4),
                (longlong)*param_2 * 0x60 + *(longlong *)(param_1 + 0xf8));
  return;
}



// FUNCTION 148d7ad4c FUN_148d7ad4c body=203 status=ok
// SIG undefined FUN_148d7ad4c(void)

void FUN_148d7ad4c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011750a(param_1 + 0x118);
  FUN_148d83296(param_2,param_1 + 0xf8);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x124);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x124) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x124) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146897be2(param_1 + 0x128,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7ae1c FUN_148d7ae1c body=150 status=ok
// SIG undefined FUN_148d7ae1c(void)

undefined8 *
FUN_148d7ae1c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14001cc68(0x148,0x10);
  local_48 = *param_4;
  local_40 = *(undefined4 *)(param_4 + 1);
  local_58 = param_6;
  FUN_148d7a6ae(uVar1,param_3,&local_48,param_5);
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7aeca FUN_148d7aeca body=234 status=ok
// SIG undefined FUN_148d7aeca(void)

longlong * FUN_148d7aeca(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97c7b0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97c7d0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d843ec(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7afbc FUN_148d7afbc body=234 status=ok
// SIG undefined FUN_148d7afbc(void)

longlong * FUN_148d7afbc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97c8e0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_LAB_14b97c900;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d84fc0(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b0aa FUN_148d7b0aa body=230 status=ok
// SIG undefined FUN_148d7b0aa(void)

longlong * FUN_148d7b0aa(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97c9c0;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97c9e0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d850b6(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b194 FUN_148d7b194 body=233 status=ok
// SIG undefined FUN_148d7b194(void)

void FUN_148d7b194(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_144a8232a(&DAT_14cbcd498);
  if (*(longlong *)(param_2 + 0x68) == *plVar2) {
    puVar3 = (undefined8 *)FUN_144a8232a(&DAT_14cbcd4b0);
    local_28 = *puVar3;
    local_20 = 0xffffffff;
    cVar1 = FUN_1470d64a2(param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_143dfb272(param_1,&DAT_14cbcd488);
      if (cVar1 != '\0') {
        FUN_140170a76(param_1,&DAT_14cbcd488);
      }
    }
    puVar3 = (undefined8 *)FUN_144a8232a(&DAT_14cbcd4c8);
    local_28 = *puVar3;
    local_20 = 0xffffffff;
    cVar1 = FUN_1470d64a2(param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_143dfb272(param_1,&DAT_14cbcd490);
      if (cVar1 != '\0') {
        FUN_140170a76(param_1,&DAT_14cbcd490);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b27e FUN_148d7b27e body=218 status=ok
// SIG undefined FUN_148d7b27e(void)

void FUN_148d7b27e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_148d7b35a();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar1 = FUN_140aed286();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30 &&
        (*(longlong *)(param_1 + 0x60) == 0)))) {
      lVar1 = (**(code **)(*(longlong *)(param_2 + 0x398) + 0x18))(param_2 + 0x398);
      local_48 = FUN_148d7b194;
      local_40 = 0;
      FUN_148d8515e(local_38,param_1);
      FUN_148d852e0(lVar1 + 0x40,&local_48,local_38);
      FUN_1449db362(local_38);
      *(code **)(param_1 + 0x60) = local_48;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b35a FUN_148d7b35a body=78 status=ok
// SIG undefined FUN_148d7b35a(void)

longlong * FUN_148d7b35a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a3610();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d7b3a8 FUN_148d7b3a8 body=131 status=ok
// SIG undefined FUN_148d7b3a8(void)

void FUN_148d7b3a8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_140aed286();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar3 = (**(code **)(*(longlong *)(param_2 + 0x398) + 0x18))(param_2 + 0x398);
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (lVar2 != 0) {
        cVar1 = FUN_14480f766(lVar3 + 0x40,lVar2);
        if (cVar1 == '\0') {
          FUN_14480f766(lVar3 + 0x58,lVar2);
        }
      }
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 148d7b43c FUN_148d7b43c body=653 status=ok
// SIG undefined FUN_148d7b43c(void)

void FUN_148d7b43c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_ec [12];
  undefined8 local_e0 [3];
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a0;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  undefined1 local_78;
  float local_74;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    lVar4 = FUN_140fc6ae8();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (lVar4 = FUN_148d7b6ca(param_1), lVar4 != 0)) {
      FUN_14891f39a(param_1,&local_c8);
      lVar5 = FUN_1410cfc16(param_1);
      if ((lVar5 != 0) && (local_c8 != 0)) {
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_68 = 0;
        local_78 = *(undefined1 *)(lVar4 + 0x48);
        FUN_141068c44(param_1,local_ec);
        uVar6 = FUN_141068cca(param_1);
        FUN_140f4ea62(lVar4 + 0x18,local_e0,uVar6,local_ec);
        FUN_1411f1bdc(&local_b8,local_e0);
        if (local_b8 != 0 || local_b0 != 0) {
          local_90 = local_b8;
          local_88 = local_b0;
          local_80 = 0;
        }
        if (*(char *)(lVar4 + 0x49) == '\x01') {
          local_68 = 1;
          FUN_1410d9770(param_1,&local_b8);
          FUN_1447325ac(&local_b8,local_e0,1);
          local_70 = local_e0[0];
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          fVar3 = *(float *)(local_c8 + 0x48);
          fVar7 = 0.0;
          if (0.0 <= fVar3) {
            fVar7 = (float)FUN_143de85f8(*(undefined8 *)(lVar5 + 8));
            fVar7 = (10.0 - fVar7) - fVar3;
          }
          local_74 = 0.0;
          if (0.0 <= fVar7) {
            local_74 = fVar7;
          }
        }
        FUN_1410d9770(param_1,&local_b8);
        FUN_1447325ac(&local_b8,&local_f8,1);
        FUN_148cf74f6(param_2,local_f8,&local_90);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)local_c0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_c0 + 0x10))(local_c0);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d7b6ca FUN_148d7b6ca body=78 status=ok
// SIG undefined FUN_148d7b6ca(void)

longlong * FUN_148d7b6ca(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a379c();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d7b718 FUN_148d7b718 body=157 status=ok
// SIG undefined FUN_148d7b718(void)

void FUN_148d7b718(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_140fc6ae8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1410d9770(param_1,local_48);
      FUN_1447325ac(local_48,&local_50,1);
      FUN_148cf788c(param_2,local_50);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b7ba FUN_148d7b7ba body=234 status=ok
// SIG undefined FUN_148d7b7ba(void)

longlong * FUN_148d7b7ba(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97cc20;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97cc40;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d85b06(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b8a8 FUN_148d7b8a8 body=221 status=ok
// SIG undefined FUN_148d7b8a8(void)

void FUN_148d7b8a8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4c [12];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = FUN_148d7b986(param_1);
      if (lVar1 != 0) {
        FUN_141068c44(param_1,local_4c);
        uVar2 = FUN_141068cca(param_1);
        FUN_140f4ea62(lVar1 + 0x18,&local_40,uVar2,local_4c);
        local_68 = local_40;
        uVar2 = FUN_14477b664(local_38);
        local_60 = FUN_14477b664(uVar2);
        local_58 = local_30;
        FUN_146210ace(param_2,&local_68);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7b986 FUN_148d7b986 body=78 status=ok
// SIG undefined FUN_148d7b986(void)

longlong * FUN_148d7b986(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1465a3832();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 148d7b9d4 FUN_148d7b9d4 body=115 status=ok
// SIG undefined FUN_148d7b9d4(void)

void FUN_148d7b9d4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      FUN_146210ace(param_2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7ba4c FUN_148d7ba4c body=234 status=ok
// SIG undefined FUN_148d7ba4c(void)

longlong * FUN_148d7ba4c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b97cc70;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b97cc90;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_148d85bfc(&local_30,plVar1);
  plVar3 = local_28;
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7bb3a FUN_148d7bb3a body=381 status=ok
// SIG undefined FUN_148d7bb3a(void)

longlong * FUN_148d7bb3a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_148d7bc45:
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b97ccc0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_148d7bcb8;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_148d7bc45;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b97ccc0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_148d7bcb8;
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
  return param_1;
}



// FUNCTION 148d7bcb8 FUN_148d7bcb8 body=69 status=ok
// SIG undefined FUN_148d7bcb8(void)

void FUN_148d7bcb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = *(undefined4 *)(param_3 + 1);
  FUN_148d7bcfe();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d7bcfe FUN_148d7bcfe body=539 status=ok
// SIG undefined FUN_148d7bcfe(void)

void FUN_148d7bcfe(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  longlong local_78;
  int local_70;
  longlong local_68 [4];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = (longlong *)0x0;
  local_40 = 0x400000000;
  if ((longlong)(int)param_2[1] != 0) {
    lVar7 = *param_2;
    lVar8 = (longlong)(int)param_2[1] << 3;
    do {
      lVar6 = FUN_14479d2ce(lVar7);
      if (lVar6 != 0) {
        lVar4 = FUN_144a6c4d8();
        uVar1 = local_40;
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          lVar4 = (longlong)(int)local_40;
          uVar3 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,uVar3);
          if (local_40._4_4_ < uVar3) {
            FUN_14885072a(local_68,uVar1 & 0xffffffff);
          }
          plVar5 = local_48;
          if (local_48 == (longlong *)0x0) {
            plVar5 = local_68;
          }
          plVar5[lVar4] = lVar6;
        }
      }
      lVar7 = lVar7 + 8;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    if (0 < (int)local_40) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      lVar7 = *plVar5;
      if (lVar7 != 0) {
        lVar8 = FUN_141118888();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_148d7bd40;
      }
    }
  }
  lVar7 = 0;
LAB_148d7bd40:
  lVar8 = param_1 + 0x78;
  cVar2 = FUN_148d7bff6(lVar8,lVar7);
  if (cVar2 == '\0') {
    cVar2 = FUN_144729dda(lVar8);
    if (cVar2 != '\0') {
      lVar6 = FUN_14479d2ce(lVar8);
      FUN_140457ffc(lVar6 + 0x6d8,param_1);
    }
    FUN_14485c47a(lVar8,lVar7);
    if (lVar7 != 0) {
      FUN_148d86070(&local_78,param_1);
      FUN_14490d954(lVar7 + 0x6d8,local_80,&local_78);
      FUN_1449db362(&local_78);
      FUN_148d2146e(lVar7,&local_78);
      lVar7 = local_78;
      if ((longlong)local_70 != 0) {
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar7 + lVar8) != 0) {
            FUN_140ec4382(param_1);
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)local_70 * 8 != lVar8);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d7bf1a FUN_148d7bf1a body=144 status=ok
// SIG undefined FUN_148d7bf1a(void)

void FUN_148d7bf1a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    uVar1 = FUN_140ec3c88(param_1);
    plVar2 = (longlong *)FUN_140ec3c65(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x80,*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  local_20 = 0;
  local_18 = 0;
  FUN_148d7bcfe(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


