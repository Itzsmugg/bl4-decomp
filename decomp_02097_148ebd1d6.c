// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148ebd1d6 FUN_148ebd1d6 body=118 status=ok
// SIG undefined FUN_148ebd1d6(void)

void FUN_148ebd1d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9cd130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 148ebd24c FUN_148ebd24c body=156 status=ok
// SIG undefined FUN_148ebd24c(void)

void FUN_148ebd24c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9cd130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ebd2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ebd2e8 FUN_148ebd2e8 body=100 status=ok
// SIG undefined FUN_148ebd2e8(void)

void FUN_148ebd2e8(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148ebd334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ebd341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148ebd34c FUN_148ebd34c body=100 status=ok
// SIG undefined FUN_148ebd34c(void)

ulonglong FUN_148ebd34c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148ebd3a5:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ebd3a5;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 148ebd3b0 FUN_148ebd3b0 body=30 status=ok
// SIG undefined FUN_148ebd3b0(void)

void * FUN_148ebd3b0(void *param_1,int param_2)

{
  if (param_2 != 0) {
    cohtml::IEventHandler::operator_delete(param_1);
  }
  return param_1;
}



// FUNCTION 148ebd3da FUN_148ebd3da body=130 status=ok
// SIG undefined FUN_148ebd3da(void)

void FUN_148ebd3da(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,0);
  FUN_140f67fee(uVar2,&local_28);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),&local_28);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ebd45e FUN_148ebd45e body=733 status=ok
// SIG undefined FUN_148ebd45e(void)

void FUN_148ebd45e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x300) == '\0') && (lVar7 = FUN_14479d2ce(param_1 + 0x30), lVar7 != 0))
     && (lVar7 = FUN_1407f492e(lVar7), lVar7 != 0)) {
    lVar8 = FUN_144a5dd5e();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
         == lVar8 + 0x30)) && (lVar7 = FUN_144a7ba4c(lVar7), lVar7 != 0)) {
      FUN_144a5dc74(local_38);
      FUN_144a5dc74(local_48);
      FUN_140ac6c96(&DAT_14cbe0320,local_38);
      FUN_140ac6c96(&DAT_14cbe0348,local_48);
      lVar7 = FUN_145da44aa(lVar7);
      if (lVar7 != 0) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,3,0x10);
        local_50 = 3;
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 == (longlong *)0x0) {
LAB_148ebd640:
          *local_58 = &PTR_LAB_14b972ed0;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          local_58[2] = lVar10;
          *local_58 = &PTR_FUN_14b9d2830;
          local_58[3] = 0;
          local_58[4] = 0;
          local_58[5] = param_1;
        }
        else {
          iVar6 = (int)plVar3[1];
          do {
            if (iVar6 == 0) goto LAB_148ebd640;
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar11 = iVar6 == iVar5;
            if (bVar11) {
              *(int *)(plVar3 + 1) = iVar6 + 1;
              iVar5 = iVar6;
            }
            iVar6 = iVar5;
            UNLOCK();
          } while (!bVar11);
          uVar9 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          *local_58 = &PTR_LAB_14b972ed0;
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 1;
          lVar8 = DAT_14c758608 + 1;
          if (lVar10 == 0) {
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 2;
            lVar8 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar8;
          local_58[2] = lVar10;
          *local_58 = &PTR_FUN_14b9d2830;
          local_58[3] = uVar9;
          local_58[4] = plVar3;
          LOCK();
          *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
          UNLOCK();
          local_58[5] = param_1;
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
        uVar9 = FUN_140e82300();
        local_68 = FUN_140e82300();
        local_60 = uVar9;
        FUN_14615e246(lVar7,local_38,local_48,&local_58);
        *(undefined1 *)(param_1 + 0x300) = 1;
        lVar7 = *(longlong *)(param_1 + 0x288);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0xb1) = 1;
          puVar4 = *(ushort **)(lVar7 + 0x80);
          if (puVar4 != (ushort *)0x0) {
            *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
          }
        }
        FUN_1449db362(&local_58);
      }
      if (local_48[0] != (longlong *)0x0) {
        (**(code **)(*local_48[0] + 0x10))();
      }
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebd73c FUN_148ebd73c body=599 status=ok
// SIG undefined FUN_148ebd73c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ebd73c(longlong param_1,longlong param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined1 auStack_308 [32];
  byte *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  double *local_2d0;
  undefined1 local_2c0 [32];
  undefined1 local_2a0;
  double local_298 [4];
  byte local_278 [32];
  byte abStack_258 [120];
  undefined1 local_1e0 [32];
  undefined1 local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  undefined1 local_198 [32];
  byte local_178;
  LARGE_INTEGER local_170 [18];
  undefined1 local_e0 [152];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (param_2 != 0 && param_1 != 0) {
    local_1c0 = 0;
    FUN_14101bd16(local_1e0,&DAT_149dfb77a);
    local_2e8 = local_1e0;
    FUN_140d767d6(local_1b8,&DAT_14cbe03c0,3,param_1);
    cVar1 = FUN_140e27f2c(local_1b8);
    if (cVar1 == '\0') {
      local_2a0 = 0;
      FUN_14101bd16(local_2c0,&DAT_149dfb77a);
      local_2e8 = local_2c0;
      FUN_140d767d6(local_298,&DAT_14cbe03c0,3,param_1);
      FUN_140d76846(local_170,local_298);
    }
    else {
      QueryPerformanceCounter(local_170);
      local_298[0] = ((double)local_170[0].QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14cbe0578;
      abStack_258[0x28] = 0;
      FUN_14101bd16(abStack_258 + 8,&DAT_149dfb77a);
      local_2e8 = abStack_258 + 8;
      FUN_140d767d6(abStack_258 + 0x30,&DAT_14cbe03c0,3,param_1);
      local_2d0 = local_298;
      local_2e8 = (undefined1 *)(param_2 + 0x200);
      local_2e0 = param_2 + 0xf8;
      local_2d8 = param_2 + 0xb8;
      FUN_148ebd994(local_170,abStack_258 + 0x30,param_2 + 0x218,param_2 + 0x230);
    }
    FUN_14027c224(local_e0,local_170);
    FUN_14027c198(local_e0);
    FUN_1404eeb8e(local_170);
    if (cVar1 == '\0') {
      pbVar2 = local_278;
    }
    else {
      pbVar2 = abStack_258 + 0x50;
    }
    (*(code *)(&PTR_FUN_14a1842f0)[pbVar2[0x20]])(pbVar2);
    if (*(longlong *)(pbVar2 + -0x10) != 0) {
      FUN_1400020a8();
    }
    (*(code *)(&PTR_FUN_14a1842f0)[local_178])(local_198);
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ebd994 FUN_148ebd994 body=107 status=ok
// SIG undefined FUN_148ebd994(void)

undefined8
FUN_148ebd994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  
  FUN_14027c0e6();
  cVar1 = FUN_1411b2f98(param_1);
  if (cVar1 != '\0') {
    FUN_148ed32ba(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return param_1;
}



// FUNCTION 148ebda00 FUN_148ebda00 body=202 status=ok
// SIG undefined FUN_148ebda00(void)

void FUN_148ebda00(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0xe8) < 2) {
    return;
  }
  if (*(char *)(lVar3 + 0xc0) == '\0') {
    if (*(int *)(lVar3 + 0xc4) != 0) goto LAB_148ebda47;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0xc4) + 1;
  }
  *(undefined1 *)(lVar3 + 0xc0) = 0;
  *(int *)(lVar3 + 0xc4) = iVar4;
LAB_148ebda47:
  do {
    iVar1 = *(int *)(lVar3 + 0xf8);
    iVar2 = *(int *)(lVar3 + 0xfc);
    iVar4 = iVar2 + 1;
    *(int *)(lVar3 + 0xfc) = iVar4;
    iVar5 = iVar1 + -1;
    *(int *)(lVar3 + 0xf8) = iVar5;
    if ((iVar1 < 1) && (iVar4 == 0 || *(int *)(lVar3 + 0xe8) != iVar1)) {
      iVar5 = *(int *)(lVar3 + 0xe8) + -1;
      *(int *)(lVar3 + 0xf8) = iVar5;
      *(int *)(lVar3 + 0xfc) = iVar2 + 2;
    }
    FUN_141223910(param_1,iVar5);
  } while ((*(char *)(lVar3 + 0xe0) == '\0') && (*(char *)(lVar3 + 0xb8) != '\0'));
  return;
}



// FUNCTION 148ebdaca FUN_148ebdaca body=39 status=ok
// SIG undefined FUN_148ebdaca(void)

void FUN_148ebdaca(longlong param_1)

{
  FUN_145c27b9a(param_1,1);
  FUN_148ebd73c(L"ViewNews",*(undefined8 *)(param_1 + 0x288));
  return;
}



// FUNCTION 148ebdaf2 FUN_148ebdaf2 body=378 status=ok
// SIG undefined FUN_148ebdaf2(void)

void FUN_148ebdaf2(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x29c) == '\0') && (lVar3 = FUN_1407f4ede(), lVar3 != 0)) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30 && (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c))))) {
      uVar2 = (uint)((ulonglong)DAT_14cbe05e0 >> 0x10);
      uVar5 = (uint)DAT_14cbe05e0 & 0xffff;
      lVar3 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x118);
      }
      iVar6 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x120) - 1U &
                               (int)((ulonglong)DAT_14cbe05e0 >> 0x20) +
                               ((uint)DAT_14cbe05e0 << 0x10 | uVar5) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar6 * 0x18);
          if (*plVar1 == DAT_14cbe05e0) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              local_20 = 0;
              FUN_14485c47a(&local_20,plVar1[1]);
              FUN_14143058a(param_1,local_20,0xb);
              *(undefined1 *)(param_1 + 0x29c) = 1;
              *(undefined4 *)(param_1 + 0x148) = 0xb;
              lVar3 = FUN_14479d2ce(param_1 + 0x30);
              if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
              }
            }
            break;
          }
          iVar6 = (int)plVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebdc7c FUN_148ebdc7c body=98 status=ok
// SIG undefined FUN_148ebdc7c(void)

void FUN_148ebdc7c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar2 = &PTR_FUN_14b9c6d90;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined8 *)((longlong)puVar2 + 0xc) = DAT_14caa8578;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ebdcde FUN_148ebdcde body=78 status=ok
// SIG undefined FUN_148ebdcde(void)

void FUN_148ebdcde(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x300) == '\x01') {
    lVar1 = FUN_140391a3c(param_2);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0378;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ebdd2c FUN_148ebdd2c body=298 status=ok
// SIG undefined FUN_148ebdd2c(void)

void FUN_148ebdd2c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  short local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1407f492e(param_2);
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_148ebdd7e;
  }
  lVar1 = 0;
LAB_148ebdd7e:
  lVar2 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_1403ca142();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) && (lVar1 != 0))
       && (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      lVar3 = FUN_1414cf3d2(lVar2);
      lVar2 = FUN_141285870(lVar2);
      if (lVar2 != 0 && lVar3 != 0) {
        FUN_140d27df6(lVar3,local_34,lVar1);
        if (-1 < local_34[0]) {
          if (*(int *)(param_3 + 1) == 0) {
            puVar4 = &DAT_149dfb77a;
          }
          else {
            puVar4 = (undefined2 *)*param_3;
          }
          FUN_1446f470e(&local_40,puVar4,1);
          FUN_146242444(lVar2,local_34,local_40,0);
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



// FUNCTION 148ebde58 FUN_148ebde58 body=66 status=ok
// SIG undefined FUN_148ebde58(void)

void FUN_148ebde58(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391a3c();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
    *puVar2 = &PTR_FUN_14b98d1e0;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 148ebded0 FUN_148ebded0 body=108 status=ok
// SIG undefined FUN_148ebded0(void)

void FUN_148ebded0(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"MENU_OPTIONS_FRONTEND");
  (**(code **)(*param_1 + 0x100))(param_1,&DAT_14cbdfee8,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ebdf3e FUN_148ebdf3e body=91 status=ok
// SIG undefined FUN_148ebdf3e(void)

void FUN_148ebdf3e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = &PTR_FUN_14b9d11d0;
      *(undefined4 *)(puVar2 + 1) = param_2;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ebdf9a FUN_148ebdf9a body=70 status=ok
// SIG undefined FUN_148ebdf9a(void)

void FUN_148ebdf9a(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_140391a3c();
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar2 = &PTR_FUN_14b98d208;
    *(undefined1 *)(puVar2 + 1) = 1;
    FUN_14039144e(lVar1,puVar2);
    return;
  }
  return;
}



// FUNCTION 148ebdfe0 FUN_148ebdfe0 body=554 status=ok
// SIG undefined FUN_148ebdfe0(void)

void FUN_148ebdfe0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  undefined8 uVar6;
  wchar_t *_Str;
  size_t sVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined8 uStack_1f8;
  longlong local_1f0;
  int local_1e8;
  undefined4 local_1e4;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x288);
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(param_2 + 8);
      lVar8 = 0x118;
      if (((lVar3 == DAT_14cbe0cb0) || (lVar8 = 0x138, lVar3 == DAT_14cbe0cb8)) ||
         (lVar8 = 0x100, lVar3 == DAT_14cbe0cc0)) {
        FUN_140775496(lVar8 + lVar2,param_2 + 0x10);
      }
      puVar4 = *(ushort **)(lVar2 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
    cVar5 = FUN_144729dda(param_1 + 0x30);
    if (cVar5 != '\0') {
      uVar6 = FUN_14479d2ce(param_1 + 0x30);
      FUN_1400021e4(param_2 + 8,&local_200);
      local_1e8 = (int)uStack_1f8;
      uVar9 = (int)uStack_1f8 - 1;
      if ((int)uStack_1f8 == 0) {
        uVar9 = 0;
      }
      if (0 < (int)uVar9) {
        uVar10 = 0;
        do {
          uVar1 = *(ushort *)(local_200 + uVar10 * 2);
          *(ushort *)(local_200 + uVar10 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      local_1f0 = local_200;
      local_1e4 = uStack_1f8._4_4_;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1e0 = local_1c0;
      local_1c8 = '\0';
      local_1d0 = local_c0;
      local_1d8 = local_1e0;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"ColorValueUpdate",&local_1e0);
      local_40 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_38 = 0;
        local_30 = 0;
      }
      else {
        sVar7 = wcslen(_Str);
        FUN_1446fe5a4(local_c0,_Str,sVar7 & 0xffffffff,1);
      }
      FUN_148ebefce(uVar6,local_38,&local_1f0,param_2 + 0x10);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_1c8 == '\x01') {
        FUN_1400020a8(local_1e0);
      }
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if (local_200 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebe20c FUN_148ebe20c body=817 status=ok
// SIG undefined FUN_148ebe20c(void)

void FUN_148ebe20c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort *puVar6;
  char cVar7;
  undefined8 uVar8;
  wchar_t *_Str;
  size_t sVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_248 [40];
  undefined8 *local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  longlong **local_1f0;
  char local_1e8;
  undefined1 local_1e0 [104];
  byte local_178;
  byte local_177;
  longlong *local_e0;
  undefined4 local_d8;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (((param_2 != 0) && (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 != 0)) &&
     (0 < (longlong)*(int *)(lVar3 + 0xd8))) {
    lVar4 = *(longlong *)(lVar3 + 0xd0);
    lVar13 = 0;
    do {
      if (*(longlong *)(lVar4 + 0xd0 + lVar13) == *(longlong *)(param_2 + 8)) {
        lVar1 = lVar4 + lVar13;
        puVar10 = (undefined8 *)(lVar1 + 0x128);
        *(undefined4 *)(lVar1 + 0xd8) = *(undefined4 *)(param_2 + 0x14);
        iVar2 = *(int *)(lVar1 + 0x134);
        local_218 = param_1;
        local_210 = lVar3;
        FUN_140d47191(*puVar10,*(undefined4 *)(lVar1 + 0x130));
        *(undefined4 *)(lVar1 + 0x130) = 0;
        local_220 = puVar10;
        if ((iVar2 < 0) && (*(int *)(lVar4 + 0x134 + lVar13) != 0)) {
          FUN_148e6b6d0(puVar10,0);
        }
        if ((longlong)*(int *)(param_2 + 0x20) != 0) {
          plVar12 = *(longlong **)(param_2 + 0x18);
          plVar11 = plVar12 + (longlong)*(int *)(param_2 + 0x20) * 2;
          local_208 = lVar4 + lVar13 + 0xe8;
          do {
            plVar5 = (longlong *)*plVar12;
            local_e0 = plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            local_d8 = (undefined4)plVar12[1];
            FUN_1410d1d82(&local_200);
            uVar8 = FUN_1447a1f4a(&local_e0);
            FUN_144a787a6(&local_1f0,uVar8);
            local_177 = local_177 & 0xfe;
            local_178 = local_178 | 0x20;
            iVar2 = *(int *)(lVar4 + 0x130 + lVar13);
            *(uint *)(lVar4 + 0x130 + lVar13) = iVar2 + 1U;
            if (*(uint *)(lVar4 + 0x134 + lVar13) < iVar2 + 1U) {
              FUN_1410d2002(local_220,iVar2);
            }
            FUN_1410d0c56((longlong)iVar2 * 0x90 + *(longlong *)(lVar4 + 0x128 + lVar13),&local_200)
            ;
            if (*(int *)(param_2 + 0x10) == *(int *)(lVar4 + 0x130 + lVar13) + -1) {
              uVar8 = FUN_1447a1f4a(&local_e0);
              FUN_144a787a6(local_208,uVar8);
              *(int *)(lVar4 + 0xdc + lVar13) = *(int *)(lVar4 + 0x130 + lVar13) + -1;
            }
            FUN_140d471ba(&local_200);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
            plVar12 = plVar12 + 2;
          } while (plVar12 != plVar11);
        }
        lVar4 = local_218;
        lVar3 = local_218 + 0x30;
        cVar7 = FUN_144729dda(lVar3);
        if (cVar7 != '\0') {
          uVar8 = FUN_14479d2ce(lVar3);
          local_200 = local_1e0;
          local_1e8 = '\0';
          local_1f0 = &local_e0;
          local_1f8 = local_200;
          _Str = (wchar_t *)FUN_140c7f682(lVar4,L"SetWantDropdownRefresh",&local_200);
          local_60 = 0;
          if (_Str == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar9 = wcslen(_Str);
            FUN_1446fe5a4(&local_e0,_Str,sVar9 & 0xffffffff,1);
          }
          FUN_1412a486e(uVar8,local_58);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_1e8 == '\x01') {
            FUN_1400020a8(local_200);
          }
        }
        puVar6 = *(ushort **)(local_210 + 0x80);
        if (puVar6 != (ushort *)0x0) {
          *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(local_210 + 0x78) & 0x3f));
        }
        break;
      }
      lVar13 = lVar13 + 0x1e8;
    } while ((longlong)*(int *)(lVar3 + 0xd8) * 0x1e8 - lVar13 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebe53e FUN_148ebe53e body=832 status=ok
// SIG undefined FUN_148ebe53e(void)

void FUN_148ebe53e(longlong param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_298 [32];
  longlong *local_278;
  byte *local_270;
  longlong local_260;
  undefined8 uStack_258;
  longlong local_250;
  int local_248;
  undefined4 local_244;
  longlong local_240;
  undefined8 uStack_238;
  longlong local_230;
  int local_228;
  undefined4 local_224;
  longlong local_220;
  undefined8 uStack_218;
  longlong local_210;
  int local_208;
  undefined4 local_204;
  byte local_1f9;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (param_2 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      local_1f9 = *(byte *)(param_2 + 0x20) ^ 1;
      FUN_1400021e4(param_2 + 0x18,&local_220);
      local_208 = (int)uStack_218;
      uVar5 = (int)uStack_218 - 1;
      if ((int)uStack_218 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(local_220 + uVar6 * 2);
          *(ushort *)(local_220 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      local_210 = local_220;
      local_204 = uStack_218._4_4_;
      local_220 = 0;
      uStack_218 = 0;
      FUN_1400021e4(param_2 + 0x10,&local_240);
      local_228 = (int)uStack_238;
      uVar5 = (int)uStack_238 - 1;
      if ((int)uStack_238 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(local_240 + uVar6 * 2);
          *(ushort *)(local_240 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      local_230 = local_240;
      local_224 = uStack_238._4_4_;
      local_240 = 0;
      uStack_238 = 0;
      FUN_1400021e4(param_2 + 8,&local_260);
      local_248 = (int)uStack_258;
      uVar5 = (int)uStack_258 - 1;
      if ((int)uStack_258 == 0) {
        uVar5 = 0;
      }
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          uVar1 = *(ushort *)(local_260 + uVar6 * 2);
          *(ushort *)(local_260 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
      local_250 = local_260;
      local_244 = uStack_258._4_4_;
      local_260 = 0;
      uStack_258 = 0;
      local_1f8 = local_1d8;
      local_1e0 = '\0';
      local_1e8 = local_d8;
      local_1f0 = local_1f8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"RebindingUpdate",&local_1f8);
      local_58 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_50 = 0;
        local_48 = 0;
      }
      else {
        sVar4 = wcslen(_Str);
        FUN_1446fe5a4(local_d8,_Str,sVar4 & 0xffffffff,1);
      }
      local_270 = &local_1f9;
      local_278 = &local_210;
      FUN_148ebf200(uVar3,local_50,&local_250,&local_230);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_1e0 == '\x01') {
        FUN_1400020a8(local_1f8);
      }
      if (local_250 != 0) {
        FUN_1400020a8();
      }
      if (local_260 != 0) {
        FUN_1400020a8();
      }
      if (local_230 != 0) {
        FUN_1400020a8();
      }
      if (local_240 != 0) {
        FUN_1400020a8();
      }
      if (local_210 != 0) {
        FUN_1400020a8();
      }
      if (local_220 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebe886 FUN_148ebe886 body=155 status=ok
// SIG undefined FUN_148ebe886(void)

void FUN_148ebe886(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    *puVar3 = &PTR_FUN_14b9c6ed8;
    puVar3[1] = *param_2;
    lVar4 = 0x14;
    do {
      *(undefined1 *)((longlong)puVar3 + lVar4 + -4) = 0;
      *(undefined8 *)((longlong)puVar3 + lVar4) = 0;
      ((undefined8 *)((longlong)puVar3 + lVar4))[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)puVar3 + lVar4 + 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((longlong)puVar3 + lVar4 + 0x30) = 0;
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != 0xbc);
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_3;
    FUN_14039144e(lVar2,puVar3);
  }
  FUN_140de1078(param_1,&DAT_14cbe0c70,0,0);
  return;
}



// FUNCTION 148ebe922 FUN_148ebe922 body=100 status=ok
// SIG undefined FUN_148ebe922(void)

void FUN_148ebe922(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    uVar1 = *param_2;
    *puVar3 = &PTR_FUN_14b9d0510;
    puVar3[1] = uVar1;
    *(undefined4 *)(puVar3 + 2) = param_3;
    *(undefined1 *)((longlong)puVar3 + 0x14) = param_4;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 148ebe986 FUN_148ebe986 body=79 status=ok
// SIG undefined FUN_148ebe986(void)

void FUN_148ebe986(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    uVar1 = *param_2;
    *puVar3 = &PTR_FUN_14b9d0520;
    puVar3[1] = uVar1;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 148ebe9d6 FUN_148ebe9d6 body=79 status=ok
// SIG undefined FUN_148ebe9d6(void)

void FUN_148ebe9d6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_140391552();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    uVar1 = *param_2;
    *puVar3 = &PTR_FUN_14b9d0530;
    puVar3[1] = uVar1;
    FUN_14039144e(lVar2,puVar3);
    return;
  }
  return;
}



// FUNCTION 148ebea2c FUN_148ebea2c body=131 status=ok
// SIG undefined FUN_148ebea2c(void)

void FUN_148ebea2c(longlong param_1,char param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*(longlong *)(param_1 + 0x288) != 0 && param_2 == '\x01') {
    lVar2 = FUN_140391552();
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar1 = *(undefined1 *)(param_1 + 0x661);
      *puVar3 = &PTR_FUN_14b9d0540;
      puVar3[1] = param_4;
      *(undefined1 *)(puVar3 + 2) = uVar1;
      FUN_14039144e(lVar2,puVar3);
    }
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148ebeab0 FUN_148ebeab0 body=102 status=ok
// SIG undefined FUN_148ebeab0(void)

void FUN_148ebeab0(longlong param_1,char param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x660) != param_2)) {
    *(char *)(param_1 + 0x660) = param_2;
    lVar3 = param_1 + 0x4b0;
    if (param_2 == '\0') {
      lVar3 = param_1 + 0x300;
    }
    FUN_145aa24d2(lVar1 + 0x178,lVar3);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ebeb16 FUN_148ebeb16 body=295 status=ok
// SIG undefined FUN_148ebeb16(void)

void FUN_148ebeb16(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1e0 = local_1c0;
    local_1c8 = '\0';
    local_1d0 = local_c0;
    local_1d8 = local_1e0;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SetWantSettingsRefresh",&local_1e0);
    local_40 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 == '\x01') {
      FUN_1400020a8(local_1e0);
    }
  }
  FUN_14600c77c(param_1);
  if ((local_28 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ebec3e FUN_148ebec3e body=108 status=ok
// SIG undefined FUN_148ebec3e(void)

void FUN_148ebec3e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 0x288) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xe0) == '\x01')) {
    FUN_140afad18(param_1,&DAT_14cbe0c60);
    lVar1 = FUN_140391552(param_1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9c6dd8;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ebecaa FUN_148ebecaa body=283 status=ok
// SIG undefined FUN_148ebecaa(void)

void FUN_148ebecaa(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsLeftInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ebedc6 FUN_148ebedc6 body=283 status=ok
// SIG undefined FUN_148ebedc6(void)

void FUN_148ebedc6(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"SettingsRightInput",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar2,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ebeee2 FUN_148ebeee2 body=87 status=ok
// SIG undefined FUN_148ebeee2(void)

void FUN_148ebeee2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xf5) == '\x01')) {
    lVar1 = FUN_140391552();
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d0560;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ebef72 FUN_148ebef72 body=91 status=ok
// SIG undefined FUN_148ebef72(void)

void FUN_148ebef72(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((*(longlong *)(param_1 + 0x288) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xf4) == '\x01')) {
    lVar1 = FUN_140391552();
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = &PTR_FUN_14b9c6da0;
      *(undefined1 *)(puVar2 + 1) = 1;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ebefce FUN_148ebefce body=560 status=ok
// SIG undefined FUN_148ebefce(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000148ebf1b4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_148ebefce(longlong param_1,char *param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_1e8 [40];
  undefined1 local_1c0 [16];
  void *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_1c0,local_88);
  local_1b0 = (void *)0x0;
  local_1a8 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_1a8;
  pvVar1 = (void *)*param_3;
  if (lVar5 == 0) {
    local_1a4 = 0;
  }
  else {
    FUN_1446dd670(&local_1b0,local_1a8,0);
    memcpy(local_1b0,pvVar1,lVar5 * 2);
  }
  local_1a0 = (void *)0x0;
  local_198 = *(int *)(param_4 + 1);
  lVar5 = (longlong)local_198;
  pvVar1 = (void *)*param_4;
  if (lVar5 == 0) {
    local_194 = 0;
  }
  else {
    FUN_1446dd670(&local_1a0,local_198,0);
    memcpy(local_1a0,pvVar1,lVar5 * 2);
  }
  local_78 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,8);
  *puVar3 = &PTR_FUN_14b9d2c10;
  FUN_148ed487e(puVar3 + 1,local_1c0);
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_148ed4876;
    local_78 = &LAB_148ed4876;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_148ed4838(local_1c0);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebf200 FUN_148ebf200 body=660 status=ok
// SIG undefined FUN_148ebf200(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000148ebf448 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_148ebf200(longlong param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 *param_6)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [16];
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(local_1d8,local_88);
  local_1c8 = (void *)0x0;
  local_1c0 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_1c0;
  pvVar1 = (void *)*param_3;
  if (lVar5 == 0) {
    local_1bc = 0;
  }
  else {
    FUN_1446dd670(&local_1c8,local_1c0,0);
    memcpy(local_1c8,pvVar1,lVar5 * 2);
  }
  local_1b8 = (void *)0x0;
  local_1b0 = *(int *)(param_4 + 1);
  lVar5 = (longlong)local_1b0;
  pvVar1 = (void *)*param_4;
  if (lVar5 == 0) {
    local_1ac = 0;
  }
  else {
    FUN_1446dd670(&local_1b8,local_1b0,0);
    memcpy(local_1b8,pvVar1,lVar5 * 2);
  }
  local_1a8 = (void *)0x0;
  local_1a0 = *(int *)(param_5 + 1);
  lVar5 = (longlong)local_1a0;
  pvVar1 = (void *)*param_5;
  if (lVar5 == 0) {
    local_19c = 0;
  }
  else {
    FUN_1446dd670(&local_1a8,local_1a0,0);
    memcpy(local_1a8,pvVar1,lVar5 * 2);
  }
  local_198 = *param_6;
  local_78 = (undefined1 *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x50,8);
  *puVar3 = &PTR_FUN_14b9d2c50;
  FUN_148ed4d48(puVar3 + 1,local_1d8);
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = &LAB_148ed4d40;
    local_78 = &LAB_148ed4d40;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = puVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (undefined1 *)0x0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (undefined1 *)0x0) {
      (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  FUN_148ed4cf4(local_1d8);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebf496 FUN_148ebf496 body=440 status=ok
// SIG undefined FUN_148ebf496(void)

void FUN_148ebf496(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_148ebf5ad:
    *local_28 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_28[2] = lVar8;
    *local_28 = &PTR_FUN_14b9d2c70;
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[5] = param_1;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ebf5ad;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar7 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_28 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_28[2] = lVar8;
    *local_28 = &PTR_FUN_14b9d2c70;
    local_28[3] = uVar7;
    local_28[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_28[5] = param_1;
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
  uVar7 = FUN_14479d2ce(param_1 + 0x30);
  FUN_14615df74(uVar7,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ebf660 FUN_148ebf660 body=188 status=ok
// SIG undefined FUN_148ebf660(void)

void FUN_148ebf660(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x35c);
  if (lVar1 == DAT_14cbe0d50) {
    FUN_148eb07bc(param_1);
  }
  else if (lVar1 == DAT_14cbe0d58) {
    FUN_148eb0958(param_1);
  }
  else if (lVar1 == DAT_14cbe0d60) {
    FUN_148eb0ae8(param_1);
  }
  else if (lVar1 == DAT_14cbe0d68) {
    FUN_148eb0d1a(param_1);
  }
  else if (lVar1 == DAT_14cbe0d70) {
    if (*(int *)(param_1 + 0x364) != -1) {
      FUN_14607679c(param_1);
    }
  }
  else if ((lVar1 == DAT_14cbe0d78) && (*(int *)(param_1 + 0x364) != -1)) {
    FUN_14615de26(param_1,param_1 + 0x364);
  }
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0xffffffff;
  return;
}



// FUNCTION 148ebf71c FUN_148ebf71c body=61 status=ok
// SIG undefined FUN_148ebf71c(void)

void FUN_148ebf71c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar1 == '\0') {
    FUN_148eb07bc(param_1);
    return;
  }
  *(undefined8 *)((longlong)param_1 + 0x35c) = DAT_14cbe0d50;
  FUN_14615d7d6(param_1);
  return;
}



// FUNCTION 148ebf75a FUN_148ebf75a body=61 status=ok
// SIG undefined FUN_148ebf75a(void)

void FUN_148ebf75a(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar1 == '\0') {
    FUN_148eb0958(param_1);
    return;
  }
  *(undefined8 *)((longlong)param_1 + 0x35c) = DAT_14cbe0d58;
  FUN_14615d7d6(param_1);
  return;
}



// FUNCTION 148ebf798 FUN_148ebf798 body=61 status=ok
// SIG undefined FUN_148ebf798(void)

void FUN_148ebf798(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar1 == '\0') {
    FUN_148eb0ae8(param_1);
    return;
  }
  *(undefined8 *)((longlong)param_1 + 0x35c) = DAT_14cbe0d60;
  FUN_14615d7d6(param_1);
  return;
}



// FUNCTION 148ebf7d6 FUN_148ebf7d6 body=61 status=ok
// SIG undefined FUN_148ebf7d6(void)

void FUN_148ebf7d6(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1e0))();
  if (cVar1 == '\0') {
    FUN_148eb0d1a(param_1);
    return;
  }
  *(undefined8 *)((longlong)param_1 + 0x35c) = DAT_14cbe0d68;
  FUN_14615d7d6(param_1);
  return;
}



// FUNCTION 148ebf814 FUN_148ebf814 body=2140 status=ok
// SIG undefined FUN_148ebf814(void)

void FUN_148ebf814(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  PSRWLOCK SRWLock;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_298 [43];
  undefined1 local_26d;
  undefined4 local_26c;
  longlong local_268;
  PSRWLOCK local_260;
  longlong local_258;
  int local_250;
  undefined4 uStack_24c;
  undefined8 local_248 [2];
  undefined8 local_238;
  undefined **local_228;
  longlong local_220;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208 [2];
  undefined8 local_1f8;
  undefined **local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8 [2];
  undefined8 local_1b8;
  undefined **local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  undefined8 local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar3 = *(longlong *)(param_1 + 0x288);
  local_26d = param_3;
  if (lVar3 == 0) goto LAB_148ebfe25;
  local_268 = param_1;
  if (*(int *)(lVar3 + 200) < 1) {
    lVar10 = 0;
  }
  else {
    lVar17 = 0;
    lVar10 = 0;
    do {
      FUN_1400021e4(*(longlong *)(lVar3 + 0xc0) + lVar17 * 0x38,&local_258);
      if (local_250 == (int)param_2[1]) {
        bVar18 = true;
        if (1 < local_250) {
          lVar11 = 0;
          while( true ) {
            uVar14 = *(ushort *)(local_258 + lVar11);
            uVar5 = (uint)uVar14;
            uVar16 = *(ushort *)(*param_2 + lVar11);
            uVar12 = (uint)uVar16;
            if (uVar14 != uVar16) {
              if ((uVar16 | uVar14) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar14];
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar16];
                if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_148ebf8bd;
              }
              iVar6 = uVar5 - uVar12;
              goto LAB_148ebf929;
            }
            if (uVar14 == 0) break;
LAB_148ebf8bd:
            lVar11 = lVar11 + 2;
          }
          iVar6 = 0;
LAB_148ebf929:
          bVar18 = iVar6 == 0;
        }
      }
      else {
        bVar18 = (int)param_2[1] + local_250 == 1;
      }
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      if (bVar18) {
        lVar10 = lVar17 * 0x38 + *(longlong *)(lVar3 + 0xc0);
        local_26c = (undefined4)lVar17;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar3 + 200));
  }
  lVar11 = local_268;
  FUN_1448d5e3c(&local_258);
  lVar17 = *(longlong *)(local_258 + 0x660);
  SRWLock = (PSRWLOCK)(lVar17 + 0x10);
  AcquireSRWLockShared(SRWLock);
  plVar4 = (longlong *)CONCAT44(uStack_24c,local_250);
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
  lVar17 = FUN_14479d2ce(lVar17);
  if ((lVar17 != 0) && (lVar10 != 0)) {
    *(undefined1 *)(lVar10 + 8) = local_26d;
    iVar6 = *(int *)(lVar10 + 0x28);
    local_260 = SRWLock;
    if ((longlong)iVar6 != 0) {
      lVar10 = 0;
      do {
        FUN_14153c660(lVar11);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar6 * 8 != lVar10);
    }
    lVar10 = local_268;
    uVar9 = local_26c;
    iVar6 = (int)param_2[1];
    if (DAT_14cbe0e08 == iVar6) {
      if (1 < DAT_14cbe0e08) {
        lVar11 = 0;
        while( true ) {
          uVar14 = *(ushort *)(DAT_14cbe0e00 + lVar11);
          uVar13 = (ulonglong)uVar14;
          uVar16 = *(ushort *)(*param_2 + lVar11);
          if (uVar14 != uVar16) break;
          if (uVar14 == 0) goto LAB_148ebfdd3;
LAB_148ebfa3e:
          lVar11 = lVar11 + 2;
        }
        if ((uVar16 | uVar14) < 0x80) {
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          uVar15 = (ulonglong)uVar16;
          uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfa3e;
        }
        if (uVar14 != uVar16) goto LAB_148ebfa6d;
      }
LAB_148ebfdd3:
      FUN_143ff1530(lVar17,local_26d);
      puVar8 = local_88;
      local_78 = 0;
      local_68 = &PTR_LAB_14b9d3030;
      local_60 = lVar10;
      local_50 = uVar9;
      pcVar7 = FUN_1443045b4;
      local_58 = lVar3;
    }
    else {
      if (DAT_14cbe0e08 + iVar6 == 1) goto LAB_148ebfdd3;
LAB_148ebfa6d:
      if (DAT_14cbe0e98 == iVar6) {
        if (1 < iVar6) {
          lVar11 = 0;
          while( true ) {
            uVar14 = *(ushort *)(DAT_14cbe0e90 + lVar11);
            uVar13 = (ulonglong)uVar14;
            uVar16 = *(ushort *)(*param_2 + lVar11);
            if (uVar14 != uVar16) break;
            if (uVar14 == 0) goto LAB_148ebfe6b;
LAB_148ebfab1:
            lVar11 = lVar11 + 2;
          }
          if ((uVar16 | uVar14) < 0x80) {
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            uVar15 = (ulonglong)uVar16;
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfab1;
          }
          if (uVar14 != uVar16) goto LAB_148ebfae0;
        }
LAB_148ebfe6b:
        FUN_143ff95c6(lVar17,local_26d);
        puVar8 = local_c8;
        local_b8 = 0;
        local_a8 = &PTR_LAB_14b9d3050;
        pcVar7 = FUN_144304754;
        local_a0 = lVar10;
        local_98 = lVar3;
        local_90 = uVar9;
      }
      else {
        if (DAT_14cbe0e98 + iVar6 == 1) goto LAB_148ebfe6b;
LAB_148ebfae0:
        if (DAT_14cbe0ea8 == iVar6) {
          if (1 < iVar6) {
            lVar11 = 0;
            while( true ) {
              uVar14 = *(ushort *)(DAT_14cbe0ea0 + lVar11);
              uVar13 = (ulonglong)uVar14;
              uVar16 = *(ushort *)(*param_2 + lVar11);
              if (uVar14 != uVar16) break;
              if (uVar14 == 0) goto LAB_148ebfeb4;
LAB_148ebfb24:
              lVar11 = lVar11 + 2;
            }
            if ((uVar16 | uVar14) < 0x80) {
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar15 = (ulonglong)uVar16;
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfb24;
            }
            if (uVar14 != uVar16) goto LAB_148ebfb53;
          }
LAB_148ebfeb4:
          FUN_143ff5ed2(lVar17,local_26d);
          puVar8 = local_108;
          local_f8 = 0;
          local_e8 = &PTR_LAB_14b9d3070;
          pcVar7 = FUN_1443048f4;
          local_e0 = lVar10;
          local_d8 = lVar3;
          local_d0 = uVar9;
        }
        else {
          if (DAT_14cbe0ea8 + iVar6 == 1) goto LAB_148ebfeb4;
LAB_148ebfb53:
          if (DAT_14cbe0eb8 == iVar6) {
            if (1 < iVar6) {
              lVar11 = 0;
              while( true ) {
                uVar14 = *(ushort *)(DAT_14cbe0eb0 + lVar11);
                uVar13 = (ulonglong)uVar14;
                uVar16 = *(ushort *)(*param_2 + lVar11);
                if (uVar14 != uVar16) break;
                if (uVar14 == 0) goto LAB_148ebfefd;
LAB_148ebfb97:
                lVar11 = lVar11 + 2;
              }
              if ((uVar16 | uVar14) < 0x80) {
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                uVar15 = (ulonglong)uVar16;
                uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfb97;
              }
              if (uVar14 != uVar16) goto LAB_148ebfbcf;
            }
LAB_148ebfefd:
            FUN_143ffab78(lVar17,local_26d);
            puVar8 = local_148;
            local_138 = 0;
            local_128 = &PTR_LAB_14b9d3090;
            pcVar7 = FUN_144304a94;
            local_120 = lVar10;
            local_118 = lVar3;
            local_110 = uVar9;
          }
          else {
            if (DAT_14cbe0eb8 + iVar6 == 1) goto LAB_148ebfefd;
LAB_148ebfbcf:
            if (DAT_14cbe0ec8 == iVar6) {
              if (1 < iVar6) {
                lVar11 = 0;
                while( true ) {
                  uVar14 = *(ushort *)(DAT_14cbe0ec0 + lVar11);
                  uVar13 = (ulonglong)uVar14;
                  uVar16 = *(ushort *)(*param_2 + lVar11);
                  if (uVar14 != uVar16) break;
                  if (uVar14 == 0) goto LAB_148ebff46;
LAB_148ebfc13:
                  lVar11 = lVar11 + 2;
                }
                if ((uVar16 | uVar14) < 0x80) {
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  uVar15 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfc13;
                }
                if (uVar14 != uVar16) goto LAB_148ebfc4b;
              }
LAB_148ebff46:
              FUN_143ff7fae(lVar17,local_26d);
              puVar8 = local_188;
              local_178 = 0;
              local_168 = &PTR_LAB_14b9d30b0;
              pcVar7 = FUN_144304c34;
              local_160 = lVar10;
              local_158 = lVar3;
              local_150 = uVar9;
            }
            else {
              if (DAT_14cbe0ec8 + iVar6 == 1) goto LAB_148ebff46;
LAB_148ebfc4b:
              if (DAT_14cbe0ed8 == iVar6) {
                if (1 < iVar6) {
                  lVar11 = 0;
                  while( true ) {
                    uVar14 = *(ushort *)(DAT_14cbe0ed0 + lVar11);
                    uVar13 = (ulonglong)uVar14;
                    uVar16 = *(ushort *)(*param_2 + lVar11);
                    if (uVar14 != uVar16) break;
                    if (uVar14 == 0) goto LAB_148ebff8f;
LAB_148ebfc8f:
                    lVar11 = lVar11 + 2;
                  }
                  if ((uVar16 | uVar14) < 0x80) {
                    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                    uVar15 = (ulonglong)uVar16;
                    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfc8f;
                  }
                  if (uVar14 != uVar16) goto LAB_148ebfcd0;
                }
LAB_148ebff8f:
                FUN_143ff5ede(lVar17,local_26d);
                puVar8 = local_1c8;
                local_1b8 = 0;
                local_1a8 = &PTR_LAB_14b9d30d0;
                pcVar7 = FUN_144304dd4;
                local_1a0 = lVar10;
                local_198 = lVar3;
                local_190 = uVar9;
              }
              else {
                if (DAT_14cbe0ed8 + iVar6 == 1) goto LAB_148ebff8f;
LAB_148ebfcd0:
                if (DAT_14cbe0ef8 == iVar6) {
                  if (1 < iVar6) {
                    lVar17 = 0;
                    while( true ) {
                      uVar14 = *(ushort *)(DAT_14cbe0ef0 + lVar17);
                      uVar13 = (ulonglong)uVar14;
                      uVar16 = *(ushort *)(*param_2 + lVar17);
                      if (uVar14 != uVar16) break;
                      if (uVar14 == 0) goto LAB_148ebffd8;
LAB_148ebfd14:
                      lVar17 = lVar17 + 2;
                    }
                    if ((uVar16 | uVar14) < 0x80) {
                      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                      uVar15 = (ulonglong)uVar16;
                      uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15]) goto LAB_148ebfd14;
                    }
                    if (uVar14 != uVar16) goto LAB_148ebfd43;
                  }
LAB_148ebffd8:
                  *(undefined1 *)(lVar3 + 0x109) = local_26d;
                  puVar8 = local_208;
                  local_1f8 = 0;
                  local_1e8 = &PTR_LAB_14b9d30f0;
                  local_1e0 = local_268;
                  local_1d0 = local_26c;
                  pcVar7 = FUN_144304f74;
                  local_1d8 = lVar3;
                }
                else {
                  if (DAT_14cbe0ef8 + iVar6 == 1) goto LAB_148ebffd8;
LAB_148ebfd43:
                  if (DAT_14cbe0f28 == iVar6) {
                    if (1 < iVar6) {
                      lVar17 = 0;
                      while( true ) {
                        uVar14 = *(ushort *)(DAT_14cbe0f20 + lVar17);
                        uVar13 = (ulonglong)uVar14;
                        uVar16 = *(ushort *)(*param_2 + lVar17);
                        if (uVar14 != uVar16) {
                          if ((uVar16 | uVar14) < 0x80) {
                            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                            uVar15 = (ulonglong)uVar16;
                            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar15])
                            goto LAB_148ebfd90;
                          }
                          bVar18 = uVar14 == uVar16;
                          goto LAB_148ec0023;
                        }
                        if (uVar14 == 0) break;
LAB_148ebfd90:
                        lVar17 = lVar17 + 2;
                      }
                    }
                  }
                  else {
                    bVar18 = DAT_14cbe0f28 + iVar6 == 1;
LAB_148ec0023:
                    SRWLock = local_260;
                    if (!bVar18) goto LAB_148ebfe1c;
                  }
                  local_220 = local_268;
                  *(undefined1 *)(lVar3 + 0x148) = local_26d;
                  puVar8 = local_248;
                  local_238 = 0;
                  local_228 = &PTR_LAB_14b9d3110;
                  local_210 = local_26c;
                  pcVar7 = FUN_14430527c;
                  local_218 = lVar3;
                }
              }
            }
          }
        }
      }
    }
    *puVar8 = pcVar7;
    FUN_1403911de(lVar10);
    SRWLock = local_260;
  }
LAB_148ebfe1c:
  ReleaseSRWLockShared(SRWLock);
LAB_148ebfe25:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec0072 FUN_148ec0072 body=2822 status=ok
// SIG undefined FUN_148ec0072(void)

void FUN_148ec0072(longlong param_1,longlong *param_2,uint param_3)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  ushort uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  uint local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8;
  int local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148 [2];
  undefined8 local_138;
  undefined **local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 local_108 [2];
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_148ec05be;
  local_1d4 = param_3;
  local_1d0 = param_1;
  if (*(int *)(lVar3 + 0xf8) < 1) {
    lVar18 = 0;
  }
  else {
    lVar19 = 0;
    lVar18 = 0;
    do {
      FUN_1400021e4(*(longlong *)(lVar3 + 0xf0) + lVar19 * 0x50,&local_198);
      if ((int)uStack_190 == (int)param_2[1]) {
        bVar20 = true;
        if (1 < (int)uStack_190) {
          lVar11 = 0;
          while( true ) {
            uVar14 = *(ushort *)(local_198 + lVar11);
            uVar8 = (uint)uVar14;
            uVar17 = *(ushort *)(*param_2 + lVar11);
            uVar13 = (uint)uVar17;
            if (uVar14 != uVar17) {
              if ((uVar17 | uVar14) < 0x80) {
                uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar14];
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar17];
                if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar17]) goto LAB_148ec011f;
              }
              iVar6 = uVar8 - uVar13;
              goto LAB_148ec018b;
            }
            if (uVar14 == 0) break;
LAB_148ec011f:
            lVar11 = lVar11 + 2;
          }
          iVar6 = 0;
LAB_148ec018b:
          bVar20 = iVar6 == 0;
        }
      }
      else {
        bVar20 = (int)param_2[1] + (int)uStack_190 == 1;
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (bVar20) {
        lVar18 = lVar19 * 0x50 + *(longlong *)(lVar3 + 0xf0);
        local_1d8 = (undefined4)lVar19;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(lVar3 + 0xf8));
  }
  lVar19 = local_1d0;
  FUN_1448d5e3c(&local_198);
  lVar11 = *(longlong *)(local_198 + 0x660);
  SRWLock = (PSRWLOCK)(lVar11 + 0x10);
  AcquireSRWLockShared(SRWLock);
  plVar5 = uStack_190;
  if (uStack_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_190)(uStack_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar11 = FUN_14479d2ce(lVar11);
  if ((lVar11 != 0) && (lVar18 != 0)) {
    *(uint *)(lVar18 + 8) = local_1d4;
    iVar6 = (int)param_2[1];
    if (DAT_14cbe0ee8 == iVar6) {
      if (1 < DAT_14cbe0ee8) {
        lVar12 = 0;
        while( true ) {
          uVar14 = *(ushort *)(DAT_14cbe0ee0 + lVar12);
          uVar17 = *(ushort *)(*param_2 + lVar12);
          if (uVar14 != uVar17) break;
          if (uVar14 == 0) goto LAB_148ec04a4;
LAB_148ec025e:
          lVar12 = lVar12 + 2;
        }
        if ((uVar17 | uVar14) < 0x80) {
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[(uint)uVar17]) goto LAB_148ec025e;
          iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar14] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar17]
          ;
        }
        else {
          iVar15 = (uint)uVar14 - (uint)uVar17;
        }
        if (iVar15 != 0) goto LAB_148ec029c;
      }
LAB_148ec04a4:
      if (((int)local_1d4 < 0) || (*(int *)(lVar18 + 0x18) <= (int)local_1d4)) {
        FUN_1400b22c2(&local_1a8,&DAT_149e3cc88);
        FUN_143ff9202(lVar11,&local_1a8);
        lVar19 = local_1d0;
      }
      else {
        FUN_1400021e4((ulonglong)local_1d4 * 0x20 + *(longlong *)(lVar18 + 0x10),&local_198);
        lVar19 = local_1d0;
        local_1a0 = (int)uStack_190;
        uVar8 = (int)uStack_190 - 1;
        if ((int)uStack_190 == 0) {
          uVar8 = 0;
        }
        if (0 < (int)uVar8) {
          uVar9 = 0;
          do {
            uVar14 = *(ushort *)(local_198 + uVar9 * 2);
            *(ushort *)(local_198 + uVar9 * 2) = (ushort)(uVar14 - 0x41 < 0x1a) * 0x20 + uVar14;
            uVar9 = uVar9 + 1;
          } while (uVar8 != uVar9);
        }
        local_1a8 = local_198;
        local_19c = uStack_190._4_4_;
        local_198 = 0;
        uStack_190 = (longlong *)0x0;
        FUN_143ff9202(lVar11);
        if (local_198 != 0) {
          FUN_1400020a8();
        }
      }
      puVar10 = local_88;
      local_78 = 0;
      local_68 = &PTR_LAB_14b9d3130;
      local_50 = local_1d8;
      pcVar7 = FUN_144305584;
      local_60 = lVar19;
      local_58 = lVar3;
LAB_148ec05aa:
      *puVar10 = pcVar7;
    }
    else {
      if (DAT_14cbe0ee8 + iVar6 == 1) goto LAB_148ec04a4;
LAB_148ec029c:
      if (DAT_14cbe0f08 != iVar6) {
        if (DAT_14cbe0f08 + iVar6 == 1) goto LAB_148ec0604;
LAB_148ec031e:
        if (DAT_14cbe0f18 == iVar6) {
          if (1 < iVar6) {
            lVar12 = 0;
            while( true ) {
              uVar14 = *(ushort *)(DAT_14cbe0f10 + lVar12);
              uVar17 = *(ushort *)(*param_2 + lVar12);
              if (uVar14 != uVar17) break;
              if (uVar14 == 0) goto LAB_148ec076f;
LAB_148ec0362:
              lVar12 = lVar12 + 2;
            }
            if ((uVar17 | uVar14) < 0x80) {
              if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[(uint)uVar17]) goto LAB_148ec0362;
              iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar14] -
                       (uint)(byte)(&DAT_149e05da0)[(uint)uVar17];
            }
            else {
              iVar15 = (uint)uVar14 - (uint)uVar17;
            }
            if (iVar15 != 0) goto LAB_148ec03a0;
          }
LAB_148ec076f:
          if (((int)local_1d4 < 0) || (*(int *)(lVar18 + 0x18) <= (int)local_1d4)) {
            FUN_1400b22c2(&local_198,"botleft");
            bVar20 = false;
          }
          else {
            FUN_1400021e4((ulonglong)local_1d4 * 0x20 + *(longlong *)(lVar18 + 0x10),&local_1b8);
            uStack_190 = plStack_1b0;
            uVar8 = (int)plStack_1b0 - 1;
            if ((int)plStack_1b0 == 0) {
              uVar8 = 0;
            }
            if (0 < (int)uVar8) {
              uVar9 = 0;
              do {
                uVar14 = *(ushort *)(local_1b8 + uVar9 * 2);
                *(ushort *)(local_1b8 + uVar9 * 2) = (ushort)(uVar14 - 0x41 < 0x1a) * 0x20 + uVar14;
                uVar9 = uVar9 + 1;
              } while (uVar8 != uVar9);
            }
            local_198 = local_1b8;
            local_1b8 = 0;
            plStack_1b0 = (longlong *)0x0;
            bVar20 = true;
          }
          uVar4 = local_1d8;
          if ((longlong *)(lVar3 + 0x130) == &local_198) {
            if (local_198 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar3 + 0x130) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x130) = local_198;
            local_198 = 0;
            *(int *)(lVar3 + 0x138) = (int)uStack_190;
            *(undefined4 *)(lVar3 + 0x13c) = uStack_190._4_4_;
            uStack_190 = (longlong *)0x0;
          }
          if ((bVar20) && (local_1b8 != 0)) {
            FUN_1400020a8();
          }
          puVar10 = local_108;
          local_f8 = 0;
          local_e8 = &PTR_LAB_14b9d3170;
          pcVar7 = FUN_144305a2c;
          local_e0 = lVar19;
          local_d8 = lVar3;
          local_d0 = uVar4;
          goto LAB_148ec0748;
        }
        if (DAT_14cbe0f18 + iVar6 == 1) goto LAB_148ec076f;
LAB_148ec03a0:
        if (DAT_14cbe0f38 == iVar6) {
          if (1 < iVar6) {
            lVar12 = 0;
            while( true ) {
              uVar14 = *(ushort *)(DAT_14cbe0f30 + lVar12);
              uVar9 = (ulonglong)uVar14;
              uVar17 = *(ushort *)(*param_2 + lVar12);
              if (uVar14 != uVar17) break;
              if (uVar14 == 0) goto LAB_148ec08d4;
LAB_148ec03e4:
              lVar12 = lVar12 + 2;
            }
            if ((uVar17 | uVar14) < 0x80) {
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar16 = (ulonglong)uVar17;
              uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar16]) goto LAB_148ec03e4;
            }
            lVar19 = local_1d0;
            if (uVar14 != uVar17) goto LAB_148ec0421;
          }
LAB_148ec08d4:
          if (((int)local_1d4 < 0) || (*(int *)(lVar18 + 0x18) <= (int)local_1d4)) {
            FUN_1400b22c2(&local_198,"black");
            bVar20 = false;
          }
          else {
            FUN_1400021e4((ulonglong)local_1d4 * 0x20 + *(longlong *)(lVar18 + 0x10),&local_1b8);
            uStack_190 = plStack_1b0;
            uVar8 = (int)plStack_1b0 - 1;
            if ((int)plStack_1b0 == 0) {
              uVar8 = 0;
            }
            if (0 < (int)uVar8) {
              uVar9 = 0;
              do {
                uVar14 = *(ushort *)(local_1b8 + uVar9 * 2);
                *(ushort *)(local_1b8 + uVar9 * 2) = (ushort)(uVar14 - 0x41 < 0x1a) * 0x20 + uVar14;
                uVar9 = uVar9 + 1;
              } while (uVar8 != uVar9);
            }
            local_198 = local_1b8;
            local_1b8 = 0;
            plStack_1b0 = (longlong *)0x0;
            bVar20 = true;
          }
          uVar4 = local_1d8;
          if ((longlong *)(lVar3 + 0x158) == &local_198) {
            if (local_198 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar3 + 0x158) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar3 + 0x158) = local_198;
            local_198 = 0;
            *(int *)(lVar3 + 0x160) = (int)uStack_190;
            *(undefined4 *)(lVar3 + 0x164) = uStack_190._4_4_;
            uStack_190 = (longlong *)0x0;
          }
          if ((bVar20) && (local_1b8 != 0)) {
            FUN_1400020a8();
          }
          puVar10 = local_148;
          local_138 = 0;
          local_128 = &PTR_LAB_14b9d3190;
          pcVar7 = FUN_144305d34;
          local_120 = lVar19;
          local_118 = lVar3;
          local_110 = uVar4;
          goto LAB_148ec0748;
        }
        if (DAT_14cbe0f38 + iVar6 == 1) goto LAB_148ec08d4;
LAB_148ec0421:
        if (DAT_14cbe0f58 == iVar6) {
          if (1 < iVar6) {
            lVar19 = 0;
            while( true ) {
              uVar14 = *(ushort *)(DAT_14cbe0f50 + lVar19);
              uVar9 = (ulonglong)uVar14;
              uVar17 = *(ushort *)(*param_2 + lVar19);
              if (uVar14 != uVar17) break;
              if (uVar14 == 0) goto LAB_148ec0a3a;
LAB_148ec0464:
              lVar19 = lVar19 + 2;
            }
            if ((uVar17 | uVar14) < 0x80) {
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar16 = (ulonglong)uVar17;
              uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar16]) goto LAB_148ec0464;
            }
            if (uVar14 != uVar17) goto LAB_148ec05b5;
          }
        }
        else if (DAT_14cbe0f58 + iVar6 != 1) goto LAB_148ec05b5;
LAB_148ec0a3a:
        if (((int)local_1d4 < 0) || (*(int *)(lVar18 + 0x18) <= (int)local_1d4)) {
          FUN_1400b22c2(&local_1c8,"Hashtagnofilter");
          FUN_143ff7144(lVar11,&local_1c8);
          lVar19 = local_1d0;
        }
        else {
          FUN_1400021e4((ulonglong)local_1d4 * 0x20 + *(longlong *)(lVar18 + 0x10),&local_198);
          lVar19 = local_1d0;
          local_1c0 = (int)uStack_190;
          uVar8 = (int)uStack_190 - 1;
          if ((int)uStack_190 == 0) {
            uVar8 = 0;
          }
          if (0 < (int)uVar8) {
            uVar9 = 0;
            do {
              uVar14 = *(ushort *)(local_198 + uVar9 * 2);
              *(ushort *)(local_198 + uVar9 * 2) = (ushort)(uVar14 - 0x41 < 0x1a) * 0x20 + uVar14;
              uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
          }
          local_1c8 = local_198;
          local_1bc = uStack_190._4_4_;
          local_198 = 0;
          uStack_190 = (longlong *)0x0;
          FUN_143ff7144(lVar11);
          if (local_198 != 0) {
            FUN_1400020a8();
          }
        }
        local_150 = local_1d8;
        puVar10 = local_188;
        local_178 = 0;
        local_168 = &PTR_LAB_14b9d31b0;
        pcVar7 = FUN_14430603c;
        local_160 = lVar19;
        local_158 = lVar3;
        goto LAB_148ec05aa;
      }
      if (1 < iVar6) {
        lVar12 = 0;
        while( true ) {
          uVar14 = *(ushort *)(DAT_14cbe0f00 + lVar12);
          uVar17 = *(ushort *)(*param_2 + lVar12);
          if (uVar14 != uVar17) break;
          if (uVar14 == 0) goto LAB_148ec0604;
LAB_148ec02e0:
          lVar12 = lVar12 + 2;
        }
        if ((uVar17 | uVar14) < 0x80) {
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[(uint)uVar17]) goto LAB_148ec02e0;
          iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar14] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar17]
          ;
        }
        else {
          iVar15 = (uint)uVar14 - (uint)uVar17;
        }
        if (iVar15 != 0) goto LAB_148ec031e;
      }
LAB_148ec0604:
      if (((int)local_1d4 < 0) || (*(int *)(lVar18 + 0x18) <= (int)local_1d4)) {
        FUN_1400b22c2(&local_198,"pm_frame_logo");
        bVar20 = false;
      }
      else {
        FUN_1400021e4((ulonglong)local_1d4 * 0x20 + *(longlong *)(lVar18 + 0x10),&local_1b8);
        uStack_190 = plStack_1b0;
        uVar8 = (int)plStack_1b0 - 1;
        if ((int)plStack_1b0 == 0) {
          uVar8 = 0;
        }
        if (0 < (int)uVar8) {
          uVar9 = 0;
          do {
            uVar14 = *(ushort *)(local_1b8 + uVar9 * 2);
            *(ushort *)(local_1b8 + uVar9 * 2) = (ushort)(uVar14 - 0x41 < 0x1a) * 0x20 + uVar14;
            uVar9 = uVar9 + 1;
          } while (uVar8 != uVar9);
        }
        local_198 = local_1b8;
        local_1b8 = 0;
        plStack_1b0 = (longlong *)0x0;
        bVar20 = true;
      }
      uVar4 = local_1d8;
      if ((longlong *)(lVar3 + 0x118) == &local_198) {
        if (local_198 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar3 + 0x118) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar3 + 0x118) = local_198;
        local_198 = 0;
        *(int *)(lVar3 + 0x120) = (int)uStack_190;
        *(undefined4 *)(lVar3 + 0x124) = uStack_190._4_4_;
        uStack_190 = (longlong *)0x0;
      }
      if ((bVar20) && (local_1b8 != 0)) {
        FUN_1400020a8();
      }
      puVar10 = local_c8;
      local_b8 = 0;
      local_a8 = &PTR_LAB_14b9d3150;
      local_a0 = lVar19;
      local_90 = uVar4;
      pcVar7 = FUN_144305724;
      local_98 = lVar3;
LAB_148ec0748:
      *puVar10 = pcVar7;
    }
    FUN_1403911de(lVar19);
  }
LAB_148ec05b5:
  ReleaseSRWLockShared(SRWLock);
LAB_148ec05be:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec0b7a FUN_148ec0b7a body=547 status=ok
// SIG undefined FUN_148ec0b7a(void)

void FUN_148ec0b7a(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  size_t sVar4;
  ulonglong unaff_RBP;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_258 [32];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  char local_1f0;
  undefined1 local_1e8 [256];
  undefined1 local_e8 [128];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 != 0) {
    if ((longlong)*(int *)(lVar6 + 200) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0xc0);
      lVar7 = (longlong)*(int *)(lVar6 + 200) * 0x38;
      do {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(undefined1 *)(lVar5 + 9));
        FUN_1400021e4(lVar5,local_218);
        FUN_148ebf814(param_1,local_218,unaff_RBP & 0xffffffff);
        lVar5 = lVar5 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    if ((longlong)*(int *)(lVar6 + 0xe0) != 0) {
      lVar7 = (longlong)*(int *)(lVar6 + 0xe0) * 0x58;
      lVar5 = *(longlong *)(lVar6 + 0xd8) + 0x10;
      do {
        uVar1 = *(undefined4 *)(lVar5 + -0xc);
        FUN_1400021e4(lVar5,local_228);
        FUN_1442f6752(param_1,local_228,uVar1);
        lVar5 = lVar5 + 0x58;
        lVar7 = lVar7 + -0x58;
      } while (lVar7 != 0);
    }
    if ((longlong)*(int *)(lVar6 + 0xf8) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0xf0);
      lVar6 = (longlong)*(int *)(lVar6 + 0xf8) * 0x50;
      do {
        uVar1 = *(undefined4 *)(lVar5 + 0xc);
        FUN_1400021e4(lVar5,local_238);
        FUN_148ec0072(param_1,local_238,uVar1);
        lVar5 = lVar5 + 0x50;
        lVar6 = lVar6 + -0x50;
      } while (lVar6 != 0);
    }
    FUN_148ec1204(param_1,1);
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if (cVar2 != '\0') {
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      local_208 = local_1e8;
      local_1f0 = '\0';
      local_1f8 = local_e8;
      local_200 = local_208;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"Event_RefreshGroup",&local_208);
      local_68 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_60 = 0;
        local_58 = 0;
      }
      else {
        sVar4 = wcslen(_Str);
        FUN_1446fe5a4(local_e8,_Str,sVar4 & 0xffffffff,1);
      }
      FUN_1412a486e(uVar3,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_1f0 == '\x01') {
        FUN_1400020a8(local_208);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec0d9e FUN_148ec0d9e body=244 status=ok
// SIG undefined FUN_148ec0d9e(void)

undefined8 *
FUN_148ec0d9e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 2;
  *puVar4 = &PTR_FUN_14b47b0e0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063ee94(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148ed590c(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec0e9c FUN_148ec0e9c body=93 status=ok
// SIG undefined FUN_148ec0e9c(void)

void FUN_148ec0e9c(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_140de1078(param_1,&DAT_14cbe0dd0,0,0);
    *(char *)(lVar1 + 0x108) =
         (char)((int)((uint)*(byte *)(lVar1 + 0x108) + *(int *)(lVar1 + 0xb8) + -1) %
               *(int *)(lVar1 + 0xb8));
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec0efa FUN_148ec0efa body=90 status=ok
// SIG undefined FUN_148ec0efa(void)

void FUN_148ec0efa(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_140de1078((char)param_1,&DAT_14cbe0dd0,0,0);
    *(char *)(lVar1 + 0x108) =
         (char)((longlong)(ulonglong)(*(byte *)(lVar1 + 0x108) + 1) %
               (longlong)*(int *)(lVar1 + 0xb8));
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec0f54 FUN_148ec0f54 body=244 status=ok
// SIG undefined FUN_148ec0f54(void)

undefined8 *
FUN_148ec0f54(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = 1;
  *puVar4 = &PTR_FUN_14b5afc70;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_145f8a6a4(puVar4 + 4);
  local_48 = uVar3;
  local_40 = uVar1;
  FUN_148ed5dee(uVar5,param_3);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec104a FUN_148ec104a body=350 status=ok
// SIG undefined FUN_148ec104a(void)

void FUN_148ec104a(longlong param_1,double *param_2)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  wchar_t *pwVar5;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    dVar1 = *param_2;
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    local_1e8 = local_1c8;
    if ((float)dVar1 <= 0.0) {
      pwVar5 = L"Event_InputLeft";
    }
    else {
      pwVar5 = L"Event_InputRight";
    }
    local_1d8 = local_c8;
    local_1d0 = '\0';
    local_1e0 = local_1e8;
    pwVar5 = (wchar_t *)FUN_140c7f682(param_1,pwVar5,&local_1e8);
    local_48 = 0;
    if (pwVar5 == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar4 = wcslen(pwVar5);
      FUN_1446fe5a4(local_c8,pwVar5,sVar4 & 0xffffffff,1);
    }
    FUN_1412a486e(uVar3,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_1d0 == '\x01') {
      FUN_1400020a8(local_1e8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec11aa FUN_148ec11aa body=90 status=ok
// SIG undefined FUN_148ec11aa(void)

void FUN_148ec11aa(longlong param_1,int param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_140de1078((char)param_1,&DAT_14cbe0dd0,0,0);
    if ((-1 < param_2) && (param_2 < *(int *)(lVar1 + 0xb8))) {
      *(char *)(lVar1 + 0x108) = (char)param_2;
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
    }
  }
  return;
}



// FUNCTION 148ec1204 FUN_148ec1204 body=301 status=ok
// SIG undefined FUN_148ec1204(void)

void FUN_148ec1204(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ushort *puVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  lVar7 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar7 != 0) {
    lVar7 = lVar7 + 900;
    cVar4 = FUN_14129c520(lVar7,0);
    if ((cVar4 == '\0') && (lVar2 = *(longlong *)(param_1 + 0x288), lVar2 != 0)) {
      puVar1 = (undefined8 *)(param_1 + 700);
      bVar5 = FUN_14021d296(param_1 + 0x170,puVar1);
      uVar8 = FUN_14479d2ce(lVar7);
      if ((bVar5 | param_2) == 1) {
        FUN_14129c566(uVar8,puVar1);
        uVar8 = FUN_14479d2ce(lVar7);
        FUN_14129c610(uVar8,(undefined8 *)(param_1 + 0x2b4));
        puVar9 = (undefined8 *)(param_1 + 0x2b4);
      }
      else {
        FUN_14129c566(uVar8,param_1 + 0x2b4);
        uVar8 = FUN_14479d2ce(lVar7);
        FUN_14129c610(uVar8,puVar1);
        puVar9 = puVar1;
      }
      *(undefined8 *)(param_1 + 0x170) = *puVar9;
      FUN_1442f79d2(param_1,bVar5 | param_2);
      uVar8 = FUN_14479d2ce(lVar7);
      FUN_143eb1c12(uVar8);
      uVar6 = FUN_14021d296(param_1 + 0x170,puVar1);
      *(undefined1 *)(lVar2 + 0x170) = uVar6;
      puVar3 = *(ushort **)(lVar2 + 0x80);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
  }
  return;
}



// FUNCTION 148ec1332 FUN_148ec1332 body=26 status=ok
// SIG undefined FUN_148ec1332(void)

void FUN_148ec1332(undefined8 param_1)

{
  FUN_14588cd9e();
  FUN_146657e6a(param_1);
  return;
}



// FUNCTION 148ec134c FUN_148ec134c body=106 status=ok
// SIG undefined FUN_148ec134c(void)

void FUN_148ec134c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_148e82344();
  plVar2 = (longlong *)FUN_148e87c72(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
  FUN_148e1d52e(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_148a00e68(*(longlong *)(param_1 + 0x288),4,0);
    return;
  }
  return;
}



// FUNCTION 148ec13b6 FUN_148ec13b6 body=120 status=ok
// SIG undefined FUN_148ec13b6(void)

void FUN_148ec13b6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)FUN_148e87c72();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
  FUN_148e1d5aa(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  iVar3 = FUN_148e82584(param_1);
  if (iVar3 == 5) {
    FUN_148e84220(param_1,0);
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_148a00e68(*(longlong *)(param_1 + 0x288),4,0);
  }
  FUN_148e82806(param_1);
  return;
}



// FUNCTION 148ec142e FUN_148ec142e body=342 status=ok
// SIG undefined FUN_148ec142e(void)

void FUN_148ec142e(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e8378e();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0x331) & 4) != 0) && (*(int *)(lVar1 + 0x328) != param_2)) {
      if (param_2 == -1) {
        pcVar5 = "BackpackSlotUnfocused";
      }
      else {
        pcVar5 = "BackpackSlotFocused";
      }
      FUN_1400b22c2(local_38,pcVar5);
      FUN_140de1078(param_1,local_38,0,0);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_148ee8984(lVar1,param_2);
    lVar2 = FUN_148ee8f2e(lVar1,param_2);
    if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd8) != 0)) &&
        ((*(byte *)(lVar2 + 0x48) & 1) == 0)) && ((longlong)*(int *)(lVar1 + 0x4e8) != 0)) {
      lVar6 = 0xb0;
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x4e0) + lVar6) == *(longlong *)(lVar2 + 0xd8)) {
          lVar3 = *(longlong *)(lVar1 + 0x4e0) - lVar3;
          if (lVar3 != 0) {
            uVar4 = FUN_14001cc68(0x48,0x10);
            FUN_148ec1586(uVar4,*(undefined8 *)(param_1 + 0x30),lVar3 + 0x40);
            FUN_140391314(param_1,uVar4);
          }
          break;
        }
        lVar3 = lVar3 + -0xe8;
        lVar6 = lVar6 + 0xe8;
      } while ((longlong)*(int *)(lVar1 + 0x4e8) * -0xe8 - lVar3 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec1586 FUN_148ec1586 body=194 status=ok
// SIG undefined FUN_148ec1586(void)

undefined8 * FUN_148ec1586(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9d0fa0;
  FUN_1446ddc76(&local_38,"MarkAsSeen",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9d0fa0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec164a FUN_148ec164a body=448 status=ok
// SIG undefined FUN_148ec164a(void)

void FUN_148ec164a(longlong param_1,undefined4 param_2)

{
  PSRWLOCK SRWLock;
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_148e83ea8();
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 != 0) {
    FUN_148ee4cc0(lVar7,param_2);
    lVar5 = FUN_148ee8f2e(lVar7,param_2);
    if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0xd8) != 0)) &&
        ((*(byte *)(lVar5 + 0x48) & 1) == 0)) && ((longlong)*(int *)(lVar7 + 0x4e8) != 0)) {
      lVar9 = *(longlong *)(lVar7 + 0x4e0);
      lVar7 = (longlong)*(int *)(lVar7 + 0x4e8) * 0xe8;
      do {
        if (*(longlong *)(lVar9 + 0xb0) == *(longlong *)(lVar5 + 0xd8)) {
          if (lVar9 != 0) {
            FUN_1446ddc76(&local_40,&DAT_14b826fa2,1);
            iVar4 = FUN_148e1d4d2(lVar9,&local_40);
            if (iVar4 < 1) {
LAB_148ec1776:
              puVar8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
              uVar1 = *(undefined8 *)(lVar5 + 0xd8);
              uVar2 = *(undefined8 *)(param_1 + 0x30);
              *puVar8 = &PTR_FUN_14b9d0fc0;
              FUN_1446ddc76(&local_40,"OpenPackage",1);
              FUN_14039176c(puVar8,uVar2,local_40,1);
              *puVar8 = &PTR_FUN_14b9d0fc0;
              puVar8[7] = uVar1;
              *(undefined1 *)(puVar8 + 8) = 0;
              FUN_140391314(param_1,puVar8);
              lVar7 = 0x378;
              puVar8 = &DAT_14cbe1608;
            }
            else {
              plVar6 = (longlong *)FUN_148e8625c(param_1);
              lVar7 = *plVar6;
              SRWLock = (PSRWLOCK)(lVar7 + 0x1c0);
              AcquireSRWLockShared(SRWLock);
              cVar3 = FUN_148e1abee(lVar7 + 0x50);
              ReleaseSRWLockShared(SRWLock);
              if (cVar3 == '\0') goto LAB_148ec1776;
              lVar7 = 0x370;
              puVar8 = &DAT_14cbe15d8;
            }
            FUN_140de1078(param_1,puVar8,0,0);
            FUN_1457d7894(param_1,lVar7 + param_1);
          }
          break;
        }
        lVar9 = lVar9 + 0xe8;
        lVar7 = lVar7 + -0xe8;
      } while (lVar7 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec180c FUN_148ec180c body=77 status=ok
// SIG undefined FUN_148ec180c(void)

void FUN_148ec180c(undefined8 param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_1408cbae2();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xb0);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(lVar2 + 0x10);
  ReleaseSRWLockShared(SRWLock);
  if (iVar1 == 5) {
    FUN_148e84220(param_1,0);
    return;
  }
  return;
}



// FUNCTION 148ec189e FUN_148ec189e body=1071 status=ok
// SIG undefined FUN_148ec189e(void)

void FUN_148ec189e(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar14;
  bool bVar15;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1a8) == 0) goto LAB_148ec1a34;
  puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
  puVar5 = &DAT_14c9485f0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar5 = puVar1;
  }
  local_48 = 0;
  uStack_40 = 0;
  bVar15 = true;
  FUN_1400b2348(puVar5,&local_48);
  if ((int)uStack_40 == (int)param_2[1]) {
    if (1 < (int)uStack_40) {
      lVar8 = 0;
      while( true ) {
        uVar13 = *(ushort *)(local_48 + lVar8);
        uVar2 = (uint)uVar13;
        uVar14 = *(ushort *)(*param_2 + lVar8);
        uVar11 = (uint)uVar14;
        if (uVar13 != uVar14) {
          if ((uVar14 | uVar13) < 0x80) {
            uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar13];
            uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar14];
            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar14]) goto LAB_148ec193c;
          }
          iVar3 = uVar2 - uVar11;
          goto LAB_148ec1a5a;
        }
        if (uVar13 == 0) break;
LAB_148ec193c:
        lVar8 = lVar8 + 2;
      }
      iVar3 = 0;
LAB_148ec1a5a:
      bVar15 = iVar3 == 0;
    }
  }
  else {
    bVar15 = (int)param_2[1] + (int)uStack_40 == 1;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((!bVar15) || (lVar8 = *(longlong *)(param_1 + 0x288), lVar8 == 0)) goto LAB_148ec1a34;
  iVar3 = (int)param_3[1];
  if (iVar3 == DAT_14cbe1038) {
    if (1 < iVar3) {
      lVar10 = 0;
      while( true ) {
        uVar13 = *(ushort *)(*param_3 + lVar10);
        uVar12 = (ulonglong)uVar13;
        uVar14 = *(ushort *)(DAT_14cbe1030 + lVar10);
        if (uVar13 != uVar14) break;
        if (uVar13 == 0) goto LAB_148ec1a04;
LAB_148ec19d8:
        lVar10 = lVar10 + 2;
      }
      if ((uVar14 | uVar13) < 0x80) {
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar7 = (ulonglong)uVar14;
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_148ec19d8;
      }
      if (uVar13 != uVar14) goto LAB_148ec1a6c;
    }
LAB_148ec1a04:
    FUN_148ec142e(param_1,param_4);
    lVar8 = *(longlong *)(param_1 + 0x288);
    if (lVar8 == 0) goto LAB_148ec1a34;
    bVar4 = *(byte *)(lVar8 + 0x330) & 0xcf | ((*(byte *)(lVar8 + 0x330) & 0x30) != 0) << 5;
  }
  else {
    if (DAT_14cbe1038 + iVar3 == 1) goto LAB_148ec1a04;
LAB_148ec1a6c:
    if (iVar3 == DAT_14cbe10d0) {
      if (1 < iVar3) {
        lVar10 = 0;
        while( true ) {
          uVar13 = *(ushort *)(*param_3 + lVar10);
          uVar12 = (ulonglong)uVar13;
          uVar14 = *(ushort *)(DAT_14cbe10c8 + lVar10);
          if (uVar13 != uVar14) break;
          if (uVar13 == 0) goto LAB_148ec1bd4;
LAB_148ec1ab0:
          lVar10 = lVar10 + 2;
        }
        if ((uVar14 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar7 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_148ec1ab0;
        }
        if (uVar13 != uVar14) goto LAB_148ec1ae0;
      }
    }
    else if (DAT_14cbe10d0 + iVar3 != 1) {
LAB_148ec1ae0:
      if (iVar3 == DAT_14cbe1058) {
        if (1 < iVar3) {
          lVar10 = 0;
          while( true ) {
            uVar13 = *(ushort *)(*param_3 + lVar10);
            uVar12 = (ulonglong)uVar13;
            uVar14 = *(ushort *)(DAT_14cbe1050 + lVar10);
            if (uVar13 != uVar14) break;
            if (uVar13 == 0) goto LAB_148ec1c35;
LAB_148ec1b24:
            lVar10 = lVar10 + 2;
          }
          if ((uVar14 | uVar13) < 0x80) {
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar7 = (ulonglong)uVar14;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_148ec1b24;
          }
          if (uVar13 != uVar14) goto LAB_148ec1b51;
        }
LAB_148ec1c35:
        bVar4 = *(byte *)(lVar8 + 0x330);
        bVar6 = (*(byte *)(lVar8 + 0x218) ^ 1) & param_4 != -1;
        bVar9 = (bVar4 & 0x20) >> 5 | (bVar4 & 0x10) >> 4 ^ bVar6;
        bVar4 = bVar6 << 4 | bVar4 & 0xcf;
      }
      else {
        if (DAT_14cbe1058 + iVar3 == 1) goto LAB_148ec1c35;
LAB_148ec1b51:
        if (iVar3 == DAT_14cbe1068) {
          if (1 < iVar3) {
            lVar10 = 0;
            while( true ) {
              uVar13 = *(ushort *)(*param_3 + lVar10);
              uVar12 = (ulonglong)uVar13;
              uVar14 = *(ushort *)(DAT_14cbe1060 + lVar10);
              if (uVar13 != uVar14) break;
              if (uVar13 == 0) goto LAB_148ec1c8d;
LAB_148ec1b95:
              lVar10 = lVar10 + 2;
            }
            if ((uVar14 | uVar13) < 0x80) {
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar7 = (ulonglong)uVar14;
              uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_148ec1b95;
            }
            if (uVar13 != uVar14) goto LAB_148ec1a34;
          }
        }
        else if (DAT_14cbe1068 + iVar3 != 1) goto LAB_148ec1a34;
LAB_148ec1c8d:
        bVar6 = (*(byte *)(lVar8 + 0x118) ^ 1) & param_4 != -1;
        bVar4 = *(byte *)(lVar8 + 0x330);
        bVar9 = (bVar4 & 0x20) >> 5 | (bVar4 & 0x10) >> 4 ^ bVar6;
        bVar4 = bVar6 << 4 | bVar4 & 0xcf;
      }
      *(byte *)(lVar8 + 0x330) = bVar4 | bVar9 << 5;
      goto LAB_148ec1a34;
    }
LAB_148ec1bd4:
    FUN_148e8660c(param_1,param_4);
    lVar8 = *(longlong *)(param_1 + 0x288);
    if (lVar8 == 0) goto LAB_148ec1a34;
    bVar4 = *(byte *)(lVar8 + 0x330);
    bVar4 = (param_4 != -1) << 4 | bVar4 & 0xcf |
            ((bVar4 & 0x20) >> 5 | (bVar4 & 0x10) >> 4 ^ param_4 != -1) << 5;
  }
  *(byte *)(lVar8 + 0x330) = bVar4;
LAB_148ec1a34:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec1cce FUN_148ec1cce body=334 status=ok
// SIG undefined FUN_148ec1cce(void)

void FUN_148ec1cce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  if ((lVar1 != DAT_14cbe1a70) && (lVar1 != DAT_14cbe1a78)) {
    if (lVar1 == DAT_14cbe1a80) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    goto LAB_148ec1e16;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9d0ff0;
  FUN_1446ddc76(&local_40,"OpenAllPackages",1);
  FUN_14039176c(puVar3,uVar2,local_40,1);
  *puVar3 = &PTR_FUN_14b9d0ff0;
  FUN_140391314(param_1,puVar3);
  if (*param_2 == DAT_14cbe1a78) {
    plVar4 = (longlong *)FUN_148e87c72(param_1);
    lVar1 = *plVar4;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
    *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
    if (*(char *)(lVar1 + 0x58) == '\0') {
      iVar5 = 1;
      if (*(int *)(lVar1 + 0x5c) == 0) goto LAB_148ec1de2;
    }
    else {
      iVar5 = *(int *)(lVar1 + 0x5c) + 1;
LAB_148ec1de2:
      *(undefined1 *)(lVar1 + 0x58) = 0;
      *(int *)(lVar1 + 0x5c) = iVar5;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  }
  FUN_140de1078(param_1,&DAT_14cbe1a40,0,0);
  FUN_1457d7894(param_1,param_1 + 0x378);
LAB_148ec1e16:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec22d2 FUN_148ec22d2 body=386 status=ok
// SIG undefined FUN_148ec22d2(void)

longlong * FUN_148ec22d2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148ec23e3:
    *puVar5 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d31d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ec23e3;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d31d0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ec2454 FUN_148ec2454 body=342 status=ok
// SIG undefined FUN_148ec2454(void)

void FUN_148ec2454(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x4e8) != 0)) {
    uVar4 = FUN_148ee90d2(lVar2);
    uVar5 = FUN_148ee9052(lVar2);
    if (uVar4 < uVar5) {
      if (uVar4 == 0) {
        FUN_140de1078(param_1,&DAT_14cbe15d8,0,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
      plVar6 = (longlong *)FUN_148e87c72(param_1);
      lVar2 = *plVar6;
      SRWLock = (PSRWLOCK)(lVar2 + 0x88);
      AcquireSRWLockShared(SRWLock);
      cVar1 = *(char *)(lVar2 + 0x58);
      ReleaseSRWLockShared(SRWLock);
      if (cVar1 == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
    }
    FUN_140de1078(param_1,&DAT_14cbe1608,0,0);
    puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *puVar7 = &PTR_FUN_14b9d0ff0;
    FUN_1446ddc76(&local_38,"OpenAllPackages",1);
    FUN_14039176c(puVar7,uVar3,local_38,1);
    *puVar7 = &PTR_FUN_14b9d0ff0;
    FUN_140391314(param_1,puVar7);
    FUN_1457d7894(param_1,param_1 + 0x378);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec25d4 FUN_148ec25d4 body=80 status=ok
// SIG undefined FUN_148ec25d4(void)

void FUN_148ec25d4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_148e82344();
  plVar2 = (longlong *)FUN_148e87c72(param_1);
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
  FUN_148e1d5ac(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) | 2;
  return;
}



// FUNCTION 148ec2624 FUN_148ec2624 body=79 status=ok
// SIG undefined FUN_148ec2624(void)

void FUN_148ec2624(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
  plVar2 = (longlong *)FUN_148e87c72();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
  FUN_148e1d5cc(lVar1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x88));
  FUN_148e82806(param_1);
  return;
}



// FUNCTION 148ec2674 FUN_148ec2674 body=952 status=ok
// SIG undefined FUN_148ec2674(void)

void FUN_148ec2674(longlong param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined1 auStack_698 [32];
  undefined1 local_678;
  undefined7 uStack_677;
  longlong local_670 [5];
  int local_644;
  int local_640;
  undefined1 local_5b8 [104];
  undefined1 local_550 [784];
  byte local_240;
  int local_23c;
  undefined1 local_208 [152];
  undefined1 local_170 [304];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_698;
  plVar1 = *(longlong **)(param_1 + 0x288);
  if (plVar1 != (longlong *)0x0) {
    if ((((int)param_2 < 0) || ((int)plVar1[0x7f] <= (int)param_2)) ||
       ((*(byte *)(plVar1[0x7e] + 0x9f + (ulonglong)param_2 * 0x268) & 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_698);
    }
    if (((*(byte *)((longlong)plVar1 + 0x331) & 4) != 0) && (*(uint *)(plVar1 + 0x65) != param_2)) {
      FUN_1400b22c2(local_670,"BackpackSlotFocused");
      FUN_140de1078(param_1,local_670,0,0);
      if (local_670[0] != 0) {
        FUN_1400020a8();
      }
    }
    cVar2 = FUN_148e83492(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x90))(plVar1,param_2);
      lVar3 = FUN_148e84d1e(param_1);
      if (lVar3 == 0) {
        bVar8 = 0;
      }
      else {
        bVar8 = *(byte *)(lVar3 + 0x9f) >> 5 & 1;
      }
      FUN_1456e051c(local_670);
      if (local_23c == 0 || bVar8 != local_240) {
        local_23c = local_23c + 1;
        local_240 = bVar8;
      }
      if ((lVar3 != 0) && (bVar8 != 0)) {
        uVar4 = FUN_1447a1f4a(lVar3 + 0x1e8);
        FUN_1449a0272(local_5b8,uVar4);
        FUN_1449a0272(local_208,lVar3 + 0x40);
        if (local_640 == 0 || *(int *)(lVar3 + 0x1e0) != local_644) {
          local_640 = local_640 + 1;
          local_644 = *(int *)(lVar3 + 0x1e0);
        }
        FUN_1449a0272(local_550,lVar3 + 0x20);
        local_678 = 5;
        lVar5 = FUN_148ed6bca(local_170,5);
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
        lVar5 = FUN_146208712(lVar5);
        uVar4 = FUN_1447a1f4a(lVar3 + 0x208);
        FUN_1449a0272(lVar5 + 0x38,uVar4);
        lVar6 = FUN_14090ae24(lVar3 + 0x228);
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
          FUN_140390f7a(lVar3 + 0x228,lVar5 + 0x20);
        }
        local_678 = 9;
        lVar5 = FUN_148ed6bca(local_170,9);
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
        lVar5 = FUN_146208712(lVar5);
        uVar4 = FUN_1447a1f4a(lVar3 + 0x1f8);
        FUN_1449a0272(lVar5 + 8,uVar4);
        puVar7 = (undefined8 *)FUN_14001cc68(0x668,0x10);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        *puVar7 = &PTR_FUN_14b9d1020;
        FUN_1446ddc76(&local_678,"SetCustomData",1);
        FUN_14039176c(puVar7,uVar4,CONCAT71(uStack_677,local_678),1);
        *puVar7 = &PTR_FUN_14b9d1020;
        FUN_148ed203e(puVar7 + 7,local_670);
        FUN_140391314(param_1,puVar7);
        puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        *puVar7 = &PTR_FUN_14b9c7290;
        FUN_1446ddc76(&local_678,"SetGlyphs",1);
        FUN_14039176c(puVar7,uVar4,CONCAT71(uStack_677,local_678),1);
        *puVar7 = &PTR_FUN_14b9c7290;
        *(undefined4 *)(puVar7 + 7) = 0;
        FUN_140391314(param_1,puVar7);
        puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        *puVar7 = &PTR_FUN_14b9c7210;
        FUN_1446ddc76(&local_678,"SetVisible",1);
        FUN_14039176c(puVar7,uVar4,CONCAT71(uStack_677,local_678),1);
        *puVar7 = &PTR_FUN_14b9c7210;
        *(byte *)(puVar7 + 7) = bVar8;
        *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
        FUN_140391314(param_1,puVar7);
      }
      FUN_145abb798(local_670);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec2a4e FUN_148ec2a4e body=214 status=ok
// SIG undefined FUN_148ec2a4e(void)

void FUN_148ec2a4e(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x288);
  plVar5 = (longlong *)FUN_1408cbae2();
  lVar3 = *plVar5;
  pRVar1 = (PSRWLOCK)(lVar3 + 0xb0);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar3 + 0x10);
  ReleaseSRWLockShared(pRVar1);
  if (iVar2 == 6) {
    if ((plVar6 == (longlong *)0x0) || ((char)plVar6[0x125] != '\x01')) {
      plVar6 = (longlong *)FUN_148e87c72(param_1);
      lVar3 = *plVar6;
      pRVar1 = (PSRWLOCK)(lVar3 + 0x88);
      AcquireSRWLockShared(pRVar1);
      iVar2 = *(int *)(lVar3 + 8);
      ReleaseSRWLockShared(pRVar1);
      if (iVar2 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 5;
      }
      FUN_148e84220(param_1,uVar7);
      return;
    }
    *(undefined1 *)(plVar6 + 0x125) = 0;
    (**(code **)(*plVar6 + 0x88))(plVar6,0xffffffff);
    *(byte *)(plVar6 + 0x66) = *(byte *)(plVar6 + 0x66) | 0x20;
    puVar4 = (ushort *)plVar6[0x10];
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(plVar6 + 0xf) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec2b24 FUN_148ec2b24 body=52 status=ok
// SIG undefined FUN_148ec2b24(void)

void FUN_148ec2b24(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x360);
  memset(_Dst,0,0x360);
  FUN_145f989c6(_Dst);
  return;
}



// FUNCTION 148ec2b58 FUN_148ec2b58 body=527 status=ok
// SIG undefined FUN_148ec2b58(void)

void FUN_148ec2b58(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  ulonglong *local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_68 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1407cbc56();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if (*(longlong *)(param_1 + 0x160) == 0) {
      plVar5 = &DAT_14c9a1308;
    }
    else {
      plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe1ab0);
    }
    if (*plVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_14000584e(*plVar5,0);
    }
    *(undefined1 *)(param_1 + 0x340) = uVar4;
    local_68[0] = 0;
    local_68[1] = 0;
    local_58 = (longlong *)((ulonglong)local_58._4_4_ << 0x20);
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(local_68,"StorePromptText",0);
    FUN_1410d1eba(local_a8,local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    FUN_14023409e(&local_c8,local_a8,1);
    local_80 = &uStack_48;
    local_68[0] = local_68[0] & 0xffffffff00000000;
    local_68[1] = 0;
    local_58 = (longlong *)0x0;
    local_50 = local_50 & 0xffffffff00000000;
    local_88 = local_68;
    FUN_14010d304(&local_78);
    local_98 = local_c8;
    local_90 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b8,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_c0 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    FUN_140008f88(lVar2 + 0x2b8,local_b8);
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    puVar3 = *(ushort **)(lVar2 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec2d68 FUN_148ec2d68 body=26 status=ok
// SIG undefined FUN_148ec2d68(void)

void FUN_148ec2d68(longlong param_1)

{
  FUN_1410c2540();
  *(byte *)(param_1 + 0x8d) = *(byte *)(param_1 + 0x8d) | 0x40;
  return;
}



// FUNCTION 148ec2d82 FUN_148ec2d82 body=252 status=ok
// SIG undefined FUN_148ec2d82(void)

void FUN_148ec2d82(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x298) & 0x40) != 0) {
    FUN_1400b22c2(local_38,"LineupIntro");
    FUN_140afad18(param_1,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x2a1) = 0;
    puVar1 = *(ushort **)(lVar2 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  FUN_14588cd9e(param_1);
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar3 = FUN_140391a3c(lVar2);
    if (lVar3 != 0) {
      uVar4 = FUN_14001cc68(0x28,0x10);
      FUN_148ec2e80(uVar4,1,param_1,lVar2 + 0x3c0);
      FUN_14039144e(lVar3,uVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec2e80 FUN_148ec2e80 body=131 status=ok
// SIG undefined FUN_148ec2e80(void)

undefined8 *
FUN_148ec2e80(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[0] = *param_4;
  local_28 = *(longlong *)(param_4 + 2);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14617404a(param_1,param_3,local_30);
  *param_1 = &PTR_FUN_14b9d11b0;
  *(undefined1 *)(param_1 + 4) = param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec2f04 FUN_148ec2f04 body=26 status=ok
// SIG undefined FUN_148ec2f04(void)

void FUN_148ec2f04(undefined8 param_1)

{
  FUN_148ec2f1e();
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148ec2f1e FUN_148ec2f1e body=116 status=ok
// SIG undefined FUN_148ec2f1e(void)

void FUN_148ec2f1e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_140391a3c(lVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14001cc68(0x28,0x10);
      FUN_148ec2e80(uVar3,0,param_1,lVar1 + 0x3c0);
      FUN_14039144e(lVar2,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148ec2f92 FUN_148ec2f92 body=190 status=ok
// SIG undefined FUN_148ec2f92(void)

void FUN_148ec2f92(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    local_38 = &LAB_148ec3052;
    local_30 = 0;
    FUN_148ed6d90(local_48,param_1);
    FUN_1446ddc76(&local_50,"FOakUIEvent_PrepareForCutscene",1);
    FUN_140391af6(lVar1,&local_38,local_50,local_48);
    *(undefined1 **)(param_1 + 0x358) = local_38;
    FUN_1449db362(local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec3080 FUN_148ec3080 body=135 status=ok
// SIG undefined FUN_148ec3080(void)

void FUN_148ec3080(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148ec2f1e();
  lVar1 = FUN_140391552(param_1);
  if (lVar1 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_PrepareForCutscene",1);
    FUN_1401cd85c(lVar1,local_30,param_1 + 0x358);
  }
  FUN_1401cd71c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec3108 FUN_148ec3108 body=309 status=ok
// SIG undefined FUN_148ec3108(void)

void FUN_148ec3108(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_148ec335a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ec323e(param_1,param_2,&DAT_14cb92be8,param_1);
      local_38 = (code *)&LAB_148ec33e4;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ec323e(param_1,param_2,&DAT_14cbc9d30,param_1);
      local_38 = FUN_148ec342c;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ec323e(param_1,param_2,&DAT_14cbc9d38,param_1);
      local_38 = FUN_1442f9a0e;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ec323e(param_1,param_2,&DAT_14cb92bc0,param_1);
      local_38 = FUN_1442f9b06;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ec323e(param_1,param_2,&DAT_14cb92bc8,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec323e FUN_148ec323e body=282 status=ok
// SIG undefined FUN_148ec323e(void)

void FUN_148ec323e(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_1443061dc(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec335a FUN_148ec335a body=137 status=ok
// SIG undefined FUN_148ec335a(void)

void FUN_148ec335a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((char)param_1[0x61] == '\x02') {
    lVar1 = FUN_14479d2ce(param_1 + 6);
    if (lVar1 != 0) {
      lVar1 = FUN_1407f492e(lVar1);
      if (lVar1 != 0) {
        lVar2 = FUN_144a5dd5e();
        if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
           ((*(char *)(lVar1 + 0xa99) != '\x01' || (*(char *)(lVar1 + 0xa98) == '\0')))) {
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148ec33c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,&DAT_14cbd9318,0);
  return;
}



// FUNCTION 148ec342c FUN_148ec342c body=184 status=ok
// SIG undefined FUN_148ec342c(void)

void FUN_148ec342c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (((*(longlong *)(param_1 + 0x288) != 0) && (*(char *)(param_1 + 0x308) == '\x03')) &&
     (*(char *)(*(longlong *)(param_1 + 0x288) + 0xd0) == '\0')) {
    lVar1 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_1407f492e(lVar1);
      if (lVar2 != 0) {
        lVar3 = FUN_144a5dd5e();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((*(char *)(lVar2 + 0xa99) != '\x01' || (*(char *)(lVar2 + 0xa98) == '\0')))) {
          lVar1 = FUN_140391a3c(lVar1);
          if (lVar1 != 0) {
            puVar4 = (undefined8 *)FUN_14001cc68(8,0x10);
            *puVar4 = &PTR_FUN_14b9d11c0;
            FUN_14039144e(lVar1,puVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148ec34e4 FUN_148ec34e4 body=42 status=ok
// SIG undefined FUN_148ec34e4(void)

void FUN_148ec34e4(undefined8 param_1)

{
  FUN_148ec350e();
  FUN_148ec35e0(param_1);
  FUN_1442f9bfe(param_1);
  FUN_148ec3736(param_1);
  return;
}



// FUNCTION 148ec350e FUN_148ec350e body=209 status=ok
// SIG undefined FUN_148ec350e(void)

void FUN_148ec350e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    pcVar4 = *(char **)(local_40 + 0x450);
    AcquireSRWLockShared((PSRWLOCK)(pcVar4 + 0x10));
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (*(int *)(lVar3 + 0xac) != *(int *)(pcVar4 + 8)) {
      *(int *)(lVar3 + 0xac) = *(int *)(pcVar4 + 8);
      *(bool *)(param_1 + 0x318) = *pcVar4 == '\x05';
    }
    ReleaseSRWLockShared((PSRWLOCK)(pcVar4 + 0x10));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec35e0 FUN_148ec35e0 body=341 status=ok
// SIG undefined FUN_148ec35e0(void)

void FUN_148ec35e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  byte bVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    puVar4 = *(undefined1 **)(local_40 + 0x380);
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 0x6e0));
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (*(int *)(param_1 + 0x2b0) != *(int *)(puVar4 + 0x6d8)) {
      *(int *)(param_1 + 0x2b0) = *(int *)(puVar4 + 0x6d8);
      if (puVar4[0x60] == '\x01') {
        bVar6 = puVar4[8] ^ 1;
      }
      else {
        bVar6 = 0;
      }
      *(byte *)(param_1 + 0x348) = bVar6;
      *(undefined1 *)(param_1 + 0x349) = *puVar4;
      if (*(int *)(param_1 + 0x350) != *(int *)(puVar4 + 0x24)) {
        *(undefined1 *)(param_1 + 0x34c) = puVar4[0x20];
        *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(puVar4 + 0x24);
      }
      if (*(int *)(lVar3 + 0xcc) != *(int *)(puVar4 + 0x6c)) {
        *(undefined1 *)(lVar3 + 200) = puVar4[0x68];
        *(undefined4 *)(lVar3 + 0xcc) = *(undefined4 *)(puVar4 + 0x6c);
      }
      FUN_148ec3828(param_1);
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar4 + 0x6e0));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec3736 FUN_148ec3736 body=241 status=ok
// SIG undefined FUN_148ec3736(void)

void FUN_148ec3736(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_38,param_1 + 0x208);
    lVar5 = *(longlong *)(local_38 + 0x640);
    SRWLock = (PSRWLOCK)(lVar5 + 0x28);
    AcquireSRWLockShared(SRWLock);
    iVar3 = *(int *)(lVar5 + 0x20);
    if (*(int *)(param_1 + 0x2b8) != iVar3) {
      *(int *)(param_1 + 0x2b8) = iVar3;
      FUN_140714c1e(lVar4 + 0x2c8,*(undefined4 *)(param_1 + 0x208));
      puVar6 = *(ushort **)(lVar4 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared(SRWLock);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec3828 FUN_148ec3828 body=85 status=ok
// SIG undefined FUN_148ec3828(void)

void FUN_148ec3828(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  FUN_148ec4c8e();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(bool *)(lVar1 + 0xd9) = *(char *)(param_1 + 0x308) == '\x01';
    *(bool *)(lVar1 + 0xdb) = *(char *)(param_1 + 0x308) == '\x03';
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec387e FUN_148ec387e body=435 status=ok
// SIG undefined FUN_148ec387e(void)

void FUN_148ec387e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  double dVar4;
  longlong lVar5;
  int iVar6;
  undefined8 unaff_RBX;
  double dVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_148ec38b2;
  lVar2 = *param_2;
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  if ((lVar5 == 0) || (lVar5 = FUN_1415bd340(lVar5), lVar5 == 0 || lVar2 == 0)) {
    if (lVar2 != 0) goto LAB_148ec3957;
  }
  else {
    local_78 = *(undefined4 *)(param_1 + 800);
    uStack_74 = *(undefined4 *)(param_1 + 0x324);
    uStack_70 = *(undefined4 *)(param_1 + 0x328);
    uStack_6c = *(undefined4 *)(param_1 + 0x32c);
    local_68 = *(undefined8 *)(param_1 + 0x330);
    local_98 = 1;
    FUN_148a0047a(lVar5,&local_78,lVar1 + 0xb0,local_88);
LAB_148ec3957:
    dVar4 = *(double *)(lVar1 + 0xb0) / 100.0 + -0.5;
    dVar7 = *(double *)(lVar1 + 0xb8) / 100.0 + -0.5;
    FUN_1400b22c2(local_88,"LineupCharacterHover");
    FUN_140de1078(param_1,local_88,(float)(dVar4 + dVar4),(float)(dVar7 + dVar7));
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_148ec46dc(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar2 != 0) & 0xffffffff,
                lVar1 + 0x120);
  puVar3 = *(ushort **)(lVar1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  if (*param_2 == *(longlong *)(param_1 + 0x2f0)) {
    if (*(int *)(param_1 + 0x2f8) != 0) goto LAB_148ec38b2;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x2f8) + 1;
  }
  *(longlong *)(param_1 + 0x2f0) = *param_2;
  *(int *)(param_1 + 0x2f8) = iVar6;
LAB_148ec38b2:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec3a32 FUN_148ec3a32 body=1370 status=ok
// SIG undefined FUN_148ec3a32(void)

void FUN_148ec3a32(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_148ec3a5d;
  FUN_148ec46dc(param_2,*param_2 != 0,lVar2 + 0x1b0);
  lVar7 = FUN_145825ec4();
  if (lVar7 != 0) {
    FUN_1446dcdd4(&local_78,param_2);
    lVar7 = thunk_FUN_144837462(lVar7,&local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      FUN_14000bbd8(&local_78,lVar7 + 0x38,0);
      lVar8 = FUN_1461a740c(&local_78);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (lVar8 != 0) {
        lVar10 = *(longlong *)(lVar8 + 0x88);
        if (lVar10 == 0) {
          uVar9 = FUN_1418d0e68();
          lVar10 = FUN_14477b664(uVar9);
          *(longlong *)(lVar8 + 0x88) = lVar10;
        }
        lVar11 = *(longlong *)(lVar8 + 0x90);
        if (lVar11 == 0) {
          if ((lVar10 != 0) && (*(longlong *)(lVar8 + 0x80) != 0)) {
            plVar14 = *(longlong **)(lVar10 + 0xb8);
            if ((plVar14 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar6 == '\0')) {
              *(undefined8 *)(lVar8 + 0x90) = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar14 + 0x110))(plVar14);
              lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar8 + 0x80));
              *(longlong *)(lVar8 + 0x90) = lVar11;
              if (lVar11 != 0) goto LAB_148ec3ca7;
            }
          }
        }
        else {
LAB_148ec3ca7:
          plVar14 = *(longlong **)(lVar11 + 0x30);
          plVar4 = *(longlong **)(lVar2 + 0xe0);
          if (plVar4 != plVar14) {
            *(longlong **)(lVar2 + 0xe0) = plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)(lVar11 + 0x38);
          plVar14 = *(longlong **)(lVar11 + 0x40);
          plVar4 = *(longlong **)(lVar2 + 0xf0);
          if (plVar4 != plVar14) {
            *(longlong **)(lVar2 + 0xf0) = plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(undefined4 *)(lVar2 + 0xf8) = *(undefined4 *)(lVar11 + 0x48);
          plVar14 = *(longlong **)(lVar11 + 0x50);
          plVar4 = *(longlong **)(lVar2 + 0x100);
          if (plVar4 != plVar14) {
            *(longlong **)(lVar2 + 0x100) = plVar14;
            if (plVar14 != (longlong *)0x0) {
              (**(code **)(*plVar14 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)(lVar11 + 0x58);
          if (*(longlong *)(lVar8 + 0x60) != 0) {
            FUN_140390f7a(lVar8 + 0x58,lVar2 + 0x110);
          }
          lVar10 = lVar2 + 0x228;
          iVar1 = *(int *)(lVar2 + 0x234);
          FUN_148c8f8dd(*(undefined8 *)(lVar2 + 0x228),*(undefined4 *)(lVar2 + 0x230));
          *(undefined4 *)(lVar2 + 0x230) = 0;
          if ((iVar1 < 0) && (*(int *)(lVar2 + 0x234) != 0)) {
            FUN_148ed7c8c(lVar10);
          }
          if ((longlong)*(int *)(lVar8 + 0xa0) != 0) {
            lVar11 = (longlong)*(int *)(lVar8 + 0xa0) * 0xe8;
            plVar14 = (longlong *)(*(longlong *)(lVar8 + 0x98) + 0x60);
            local_90 = lVar10;
            do {
              lVar8 = FUN_148ec4c12(lVar10);
              if (plVar14[-7] != 0) {
                FUN_140390f7a(plVar14 + -8,lVar8);
              }
              lVar12 = plVar14[1];
              if (lVar12 == 0) {
                uVar9 = FUN_1418d0e68();
                lVar12 = FUN_14477b664(uVar9);
                plVar14[1] = lVar12;
              }
              lVar13 = plVar14[2];
              if (lVar13 == 0) {
                if ((lVar12 != 0) && (*plVar14 != 0)) {
                  plVar4 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
                    plVar14[2] = 0;
                  }
                  else {
                    uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar13 = FUN_144aff482(uVar9,plVar14);
                    plVar14[2] = lVar13;
                    if (lVar13 != 0) goto LAB_148ec3dbe;
                  }
                }
              }
              else {
LAB_148ec3dbe:
                plVar4 = *(longlong **)(lVar13 + 0x30);
                plVar5 = *(longlong **)(lVar8 + 0x20);
                if (plVar5 != plVar4) {
                  *(longlong **)(lVar8 + 0x20) = plVar4;
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 8))();
                  }
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
                *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar13 + 0x38);
                plVar4 = *(longlong **)(lVar13 + 0x40);
                plVar5 = *(longlong **)(lVar8 + 0x30);
                if (plVar5 != plVar4) {
                  *(longlong **)(lVar8 + 0x30) = plVar4;
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 8))();
                  }
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
                *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar13 + 0x48);
                plVar4 = *(longlong **)(lVar13 + 0x50);
                plVar5 = *(longlong **)(lVar8 + 0x40);
                if (plVar5 != plVar4) {
                  *(longlong **)(lVar8 + 0x40) = plVar4;
                  if (plVar4 != (longlong *)0x0) {
                    (**(code **)(*plVar4 + 8))();
                  }
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
                *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(lVar13 + 0x58);
                FUN_140390f7a(lVar13 + 0x60,lVar8 + 0x10);
                lVar10 = local_90;
              }
              plVar14 = plVar14 + 0x1d;
              lVar11 = lVar11 + -0xe8;
            } while (lVar11 != 0);
          }
        }
      }
      if ((*(char *)(lVar7 + 0xac) == '\x01') && (lVar7 = FUN_141563480(lVar7 + 0xb0), lVar7 != 0))
      {
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1446ddda2(&local_78,&DAT_14b9b09b2,0);
        FUN_1402b5374(&local_78,1,*(undefined8 *)(lVar7 + 0x38));
        uVar9 = FUN_14001cc68(0x48,0x10);
        local_88 = DAT_14cbdff04;
        local_80 = DAT_14cbdff0c;
        FUN_148e949f4(uVar9,&local_88,&local_78);
        FUN_140391314(param_1,uVar9);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x344) != -1) {
    FUN_148ec3f8e(param_1);
  }
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_148ec3a5d:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec3f8e FUN_148ec3f8e body=331 status=ok
// SIG undefined FUN_148ec3f8e(void)

void FUN_148ec3f8e(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort *puVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (((int)param_2 < 0) || (*(int *)(lVar1 + 0x230) <= (int)param_2)) {
      *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
      FUN_14020fad6(lVar1 + 0x240,&DAT_149dfb77a);
      plVar5 = (longlong *)FUN_140e82300();
      plVar2 = (longlong *)*plVar5;
      plVar3 = *(longlong **)(lVar1 + 0x260);
      if (plVar3 != plVar2) {
        *(longlong **)(lVar1 + 0x260) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(int *)(lVar1 + 0x268) = (int)plVar5[1];
      plVar5 = (longlong *)FUN_140e82300();
      plVar2 = (longlong *)*plVar5;
      plVar3 = *(longlong **)(lVar1 + 0x270);
      if (plVar3 != plVar2) {
        *(longlong **)(lVar1 + 0x270) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(int *)(lVar1 + 0x278) = (int)plVar5[1];
      plVar5 = (longlong *)FUN_140e82300();
      plVar2 = (longlong *)*plVar5;
      plVar3 = *(longlong **)(lVar1 + 0x280);
      if (plVar3 != plVar2) {
        *(longlong **)(lVar1 + 0x280) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(int *)(lVar1 + 0x288) = (int)plVar5[1];
    }
    else {
      *(uint *)(param_1 + 0x344) = param_2;
      FUN_148c8f170(lVar1 + 0x240,(ulonglong)param_2 * 0x50 + *(longlong *)(lVar1 + 0x228));
    }
    puVar4 = *(ushort **)(lVar1 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec40da FUN_148ec40da body=102 status=ok
// SIG undefined FUN_148ec40da(void)

void FUN_148ec40da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x1c0) != 0) &&
       (iVar1 = *(int *)(lVar2 + 0x298), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(lVar2 + 0x290);
      lVar5 = 0;
      do {
        *(bool *)(lVar3 + 0x10 + lVar5) =
             *(longlong *)(lVar3 + 0x14 + lVar5) == *(longlong *)(lVar2 + 0x1c0);
        lVar5 = lVar5 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar5);
    }
    puVar4 = *(ushort **)(lVar2 + 0x80);
    if (puVar4 != (ushort *)0x0) {
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec4140 FUN_148ec4140 body=59 status=ok
// SIG undefined FUN_148ec4140(void)

longlong FUN_148ec4140(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148ed79aa(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_148ed7984(lVar2);
  return lVar2;
}



// FUNCTION 148ec417c FUN_148ec417c body=243 status=ok
// SIG undefined FUN_148ec417c(void)

void FUN_148ec417c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db10ee();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3330;
  puVar1[2] = FUN_148ec3f8e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnActionSkillFocused",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3350;
  puVar1[2] = FUN_148ec4270;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnCharPipSelected",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3370;
  puVar1[2] = &LAB_148ec431e;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnPageChangeSelected",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d3390;
  puVar1[2] = &LAB_148ec33e4;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"OnSpecialSelect",puVar1);
  return;
}



// FUNCTION 148ec4270 FUN_148ec4270 body=172 status=ok
// SIG undefined FUN_148ec4270(void)

void FUN_148ec4270(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar2 = &PTR_FUN_14b9d1210;
      puVar2[1] = param_2;
      FUN_14039144e(lVar1,puVar2);
    }
  }
  FUN_1400b22c2(local_30,"CycleRapSheetCharacter");
  FUN_140afad18(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec432c FUN_148ec432c body=515 status=ok
// SIG undefined FUN_148ec432c(void)

void FUN_148ec432c(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  cVar1 = (char)param_1[0x61];
  if (cVar1 == '\x01') {
    lVar4 = FUN_14479d2ce(param_1 + 6);
    if ((lVar4 != 0) && (lVar4 = FUN_1407f492e(lVar4), lVar4 != 0)) {
      lVar3 = FUN_144a5dd5e();
      if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
         ((*(char *)(lVar4 + 0xa99) != '\x01' || (*(char *)(lVar4 + 0xa98) == '\0')))) {
        FUN_148ec335a(param_1);
        return;
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      lVar4 = FUN_14479d2ce(param_1 + 6);
      if (lVar4 == 0) {
        return;
      }
      lVar3 = FUN_1407f492e(lVar4);
      if (lVar3 != 0) {
        lVar6 = FUN_144a5dd5e();
        if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
           ((*(char *)(lVar3 + 0xa99) != '\x01' || (*(char *)(lVar3 + 0xa98) == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x000148ec451d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x108))(param_1,&DAT_14cbd9318,0);
          return;
        }
      }
      if ((param_1[0x51] != 0) && (*(char *)(param_1[0x51] + 0xd0) != '\0')) {
        return;
      }
      lVar4 = FUN_140391a3c(lVar4);
      if (lVar4 == 0) {
        return;
      }
      puVar5 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar5 = &PTR_FUN_14b9d11c0;
      goto LAB_148ec44c2;
    }
    if (cVar1 == '\x02') {
      FUN_148ec4530(param_1);
      return;
    }
  }
  if ((((char)param_1[0x68] != '\x01') || (lVar3 = FUN_14479d2ce(param_1 + 6), lVar3 == 0)) ||
     (lVar4 = FUN_140391a3c(lVar3), lVar4 == 0)) {
    return;
  }
  iVar2 = FUN_1415267f2(lVar3 + 0x3c0);
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  if (iVar2 == -1) {
    *puVar5 = &PTR_FUN_14b98d208;
    *(undefined1 *)(puVar5 + 1) = 0;
  }
  else {
    *puVar5 = &PTR_FUN_14b9d11d0;
    *(int *)(puVar5 + 1) = iVar2;
  }
LAB_148ec44c2:
  FUN_14039144e(lVar4,puVar5);
  return;
}



// FUNCTION 148ec4530 FUN_148ec4530 body=165 status=ok
// SIG undefined FUN_148ec4530(void)

void FUN_148ec4530(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      FUN_1400b22c2(local_30,"TransitionBackToLineup");
      FUN_140afad18(param_1,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d11e0;
      FUN_14039144e(lVar1,puVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec45d6 FUN_148ec45d6 body=83 status=ok
// SIG undefined FUN_148ec45d6(void)

void FUN_148ec45d6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d1200;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ec462a FUN_148ec462a body=177 status=ok
// SIG undefined FUN_148ec462a(void)

void FUN_148ec462a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      FUN_1400b22c2(local_30,"MakeCharacterChoice");
      FUN_140afad18(param_1,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar2 = &PTR_FUN_14b9accc0;
      *(undefined1 *)(puVar2 + 1) = 1;
      *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
      FUN_14039144e(lVar1,puVar2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec46dc FUN_148ec46dc body=1310 status=ok
// SIG undefined FUN_148ec46dc(void)

void FUN_148ec46dc(longlong *param_1,char param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong *local_78 [2];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    FUN_14020fad6(param_3,&DAT_149dfb77a);
    param_3[2] = 0;
    plVar8 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar8;
    plVar4 = (longlong *)param_3[3];
    if (plVar4 != plVar3) {
      param_3[3] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(int *)(param_3 + 4) = (int)plVar8[1];
    plVar8 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar8;
    plVar4 = (longlong *)param_3[5];
    if (plVar4 != plVar3) {
      param_3[5] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(int *)(param_3 + 6) = (int)plVar8[1];
    plVar8 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar8;
    plVar4 = (longlong *)param_3[9];
    if (plVar4 != plVar3) {
      param_3[9] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(int *)(param_3 + 10) = (int)plVar8[1];
    plVar8 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar8;
    plVar4 = (longlong *)param_3[7];
    if (plVar4 != plVar3) {
      param_3[7] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(int *)(param_3 + 8) = (int)plVar8[1];
    plVar8 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar8;
    plVar4 = (longlong *)param_3[0xb];
    if (plVar4 != plVar3) {
      param_3[0xb] = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(int *)(param_3 + 0xc) = (int)plVar8[1];
    iVar2 = *(int *)((longlong)param_3 + 0x74);
    FUN_148c8f903(param_3[0xd],(int)param_3[0xe]);
    *(undefined4 *)(param_3 + 0xe) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_3 + 0x74) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
    }
  }
  else {
    lVar7 = FUN_145825ec4();
    if (lVar7 != 0) {
      FUN_1446dcdd4(&local_68,param_1);
      lVar7 = thunk_FUN_144837462(lVar7,&local_68);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0) {
        FUN_1400021e4(param_1,&local_68);
        lVar11 = local_68;
        iVar2 = (int)uStack_60;
        uVar6 = (int)uStack_60 - 1;
        if ((int)uStack_60 == 0) {
          uVar6 = 0;
        }
        if (0 < (int)uVar6) {
          uVar10 = 0;
          do {
            uVar1 = *(ushort *)(local_68 + uVar10 * 2);
            *(ushort *)(local_68 + uVar10 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
            uVar10 = uVar10 + 1;
          } while (uVar6 != uVar10);
        }
        uVar5 = uStack_60._4_4_;
        local_68 = 0;
        uStack_60 = 0;
        if (*param_3 == 0) {
          *param_3 = lVar11;
          *(int *)(param_3 + 1) = iVar2;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
        }
        else {
          FUN_1400020a8();
          *param_3 = lVar11;
          *(int *)(param_3 + 1) = iVar2;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        param_3[2] = *param_1;
        FUN_14000bbd8(&local_68,lVar7 + 0x18,0);
        FUN_1410d1eba(local_78,&local_68);
        FUN_140008f88(param_3 + 3,local_78);
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        FUN_14000bbd8(&local_68,lVar7 + 0x28,0);
        FUN_1410d1eba(local_78,&local_68);
        FUN_140008f88(param_3 + 5,local_78);
        if (local_78[0] != (longlong *)0x0) {
          (**(code **)(*local_78[0] + 0x10))();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        plVar3 = *(longlong **)(lVar7 + 0x48);
        plVar4 = (longlong *)param_3[9];
        if (plVar4 != plVar3) {
          param_3[9] = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        *(undefined4 *)(param_3 + 10) = *(undefined4 *)(lVar7 + 0x50);
        plVar3 = *(longlong **)(lVar7 + 0x68);
        plVar4 = (longlong *)param_3[7];
        if (plVar4 != plVar3) {
          param_3[7] = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(lVar7 + 0x70);
        plVar3 = *(longlong **)(lVar7 + 0x88);
        plVar4 = (longlong *)param_3[0xb];
        if (plVar4 != plVar3) {
          param_3[0xb] = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar7 + 0x90);
        iVar2 = *(int *)((longlong)param_3 + 0x74);
        FUN_148c8f903(param_3[0xd],(int)param_3[0xe]);
        *(undefined4 *)(param_3 + 0xe) = 0;
        if ((iVar2 < 0) && (*(int *)((longlong)param_3 + 0x74) != 0)) {
          FUN_148ed7d56(param_3 + 0xd);
        }
        if ((longlong)*(int *)(lVar7 + 0xa0) != 0) {
          lVar11 = *(longlong *)(lVar7 + 0x98);
          lVar7 = (longlong)*(int *)(lVar7 + 0xa0) * 0x20 + lVar11;
          do {
            lVar9 = FUN_148ec4c52(param_3 + 0xd);
            FUN_14000bbd8(&local_68,lVar11,0);
            FUN_1410d1eba(local_78,&local_68);
            FUN_140008f88(lVar9 + 0x10,local_78);
            if (local_78[0] != (longlong *)0x0) {
              (**(code **)(*local_78[0] + 0x10))();
            }
            if (local_50 != 0) {
              FUN_1400020a8();
            }
            FUN_144a787a6(lVar9,lVar11 + 0x10);
            lVar11 = lVar11 + 0x20;
          } while (lVar11 != lVar7);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec4c12 FUN_148ec4c12 body=63 status=ok
// SIG undefined FUN_148ec4c12(void)

longlong FUN_148ec4c12(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148ed7cc2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  thunk_FUN_148c8f086(lVar2);
  return lVar2;
}



// FUNCTION 148ec4c52 FUN_148ec4c52 body=59 status=ok
// SIG undefined FUN_148ec4c52(void)

longlong FUN_148ec4c52(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148ed7d8c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  thunk_FUN_148c8f3b2(lVar2);
  return lVar2;
}



// FUNCTION 148ec4c8e FUN_148ec4c8e body=90 status=ok
// SIG undefined FUN_148ec4c8e(void)

void FUN_148ec4c8e(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (((*(char *)(param_1 + 0x348) == '\0') && (*(char *)(param_1 + 0x349) != '\0')) ||
       (*(char *)(param_1 + 0x308) != '\x01')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = *(char *)(param_1 + 0x34c);
    }
    if (*(char *)(lVar1 + 0xda) != cVar3) {
      *(char *)(lVar1 + 0xda) = cVar3;
      puVar2 = *(ushort **)(lVar1 + 0x80);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
      }
    }
  }
  return;
}



// FUNCTION 148ec4d40 FUN_148ec4d40 body=55 status=ok
// SIG undefined FUN_148ec4d40(void)

void FUN_148ec4d40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  if (param_6 == '\x04') {
    FUN_14625ec6a();
    return;
  }
  FUN_1459bbdec(param_1,0,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 148ec4d78 FUN_148ec4d78 body=274 status=ok
// SIG undefined FUN_148ec4d78(void)

void FUN_148ec4d78(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,char param_6)

{
  longlong lVar1;
  
  *(uint *)(param_1 + 0x2c8) = param_2;
  FUN_140de1078(param_1,&DAT_14cbe20a0,0,0);
  if (param_6 != '\0') {
    if (param_6 == '\x04') {
      lVar1 = *(longlong *)(param_1 + 0x288);
      if (((lVar1 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar1 + 0x1c0) <= (int)param_2))
      goto LAB_148ec4e57;
      *(int *)(lVar1 + 0x1c8) = *(int *)(lVar1 + 0x1c8) + 1;
      lVar1 = *(longlong *)(lVar1 + 0x1b8) + (ulonglong)param_2 * 0x1e8 + 0x28;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x288);
      if (((lVar1 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar1 + 0x1c0) <= (int)param_2))
      goto LAB_148ec4e57;
      lVar1 = FUN_140f9b9fa((ulonglong)param_2 * 0x1e8 + *(longlong *)(lVar1 + 0x1b8),param_3,
                            param_4,param_5);
    }
    if (lVar1 != 0) {
      FUN_140f9ba4c(param_1,lVar1,1);
      return;
    }
  }
LAB_148ec4e57:
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    FUN_140f9bb7c(lVar1 + 0x1d0);
    *(undefined1 *)(lVar1 + 0x1dd) = 1;
    *(char *)(lVar1 + 0x1d8) = param_6;
  }
  return;
}



// FUNCTION 148ec4e8a FUN_148ec4e8a body=641 status=ok
// SIG undefined FUN_148ec4e8a(void)

void FUN_148ec4e8a(longlong param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *_Str;
  size_t sVar6;
  undefined2 *puVar7;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    iVar4 = *(int *)(param_1 + 0x2cc) + ((*(int *)(param_1 + 0x2cc) + 1) / 3) * -3 + 1;
    *(int *)(param_1 + 0x2cc) = iVar4;
    *(int *)(lVar5 + 0x2b8) = iVar4;
    FUN_140f9b5a6(param_1,&local_1d8);
    if ((undefined8 *)(lVar5 + 0x2c0) == &local_1d8) {
      if (local_1d8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x2c0) != 0) {
        FUN_1400020a8();
      }
      *(undefined1 **)(lVar5 + 0x2c0) = local_1d8;
      local_1d8 = (undefined1 *)0x0;
      *(undefined4 *)(lVar5 + 0x2c8) = (undefined4)local_1d0;
      *(undefined4 *)(lVar5 + 0x2cc) = local_1d0._4_4_;
    }
    uVar3 = FUN_140f9a51a(param_1);
    *(undefined1 *)(lVar5 + 0x2f2) = uVar3;
    puVar2 = *(ushort **)(lVar5 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
    }
    FUN_14623ce4a(param_1);
    if (*(char *)(lVar5 + 0x1d8) == '\x04') {
      iVar4 = *(int *)(param_1 + 0x2cc);
      local_1d8 = (undefined1 *)CONCAT44(iVar4,((iVar4 + 2) / 3) * -3 + iVar4 + 2);
      local_1d0 = (undefined1 *)CONCAT44(local_1d0._4_4_,iVar4 + ((iVar4 + 1) / 3) * -3 + 1);
      uVar1 = *(undefined4 *)((longlong)&local_1d8 + (longlong)*(int *)(param_1 + 0x2c8) * 4);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x2cc);
    }
    FUN_140f9b7a8(param_1,uVar1);
    lVar5 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar5 != 0) {
      local_1d8 = local_1b8;
      local_1c0 = '\0';
      local_1c8 = local_b8;
      puVar7 = DAT_14cbe2108;
      if (DAT_14cbe2110 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      local_1d0 = local_1d8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,puVar7,&local_1d8);
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar6 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar6 & 0xffffffff,1);
      }
      FUN_1412a486e(lVar5,local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_1c0 == '\x01') {
        FUN_1400020a8(local_1d8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec5200 FUN_148ec5200 body=487 status=ok
// SIG undefined FUN_148ec5200(void)

void FUN_148ec5200(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x330) != *(int *)(param_1 + 0x35c)) {
    uVar1 = *(uint *)(param_1 + 0x2cc);
    lVar2 = *(longlong *)(param_1 + 0x368);
    if (*(longlong *)(param_1 + 0x368) == 0) {
      lVar2 = param_1 + 0x360;
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x370) - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x328);
      iVar8 = iVar3;
      do {
        iVar7 = iVar3;
        if (*(uint *)(lVar2 + (longlong)iVar8 * 0x20) == uVar1) goto LAB_148ec529c;
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + lVar2 + 0x18);
      } while (iVar8 != -1);
    }
  }
  goto LAB_148ec5224;
  while (iVar7 = *(int *)(lVar4 + 0x18), *(int *)(lVar4 + 0x18) != -1) {
LAB_148ec529c:
    lVar4 = lVar2 + (longlong)iVar7 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar7 * 0x20) == uVar1) goto LAB_148ec52ba;
  }
  lVar4 = 0;
LAB_148ec52ba:
  if (*(int *)(lVar4 + 0x10) < 1) goto LAB_148ec5224;
  do {
    lVar4 = lVar2 + (longlong)iVar3 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar3 * 0x20) == uVar1) goto LAB_148ec52e4;
    iVar3 = *(int *)(lVar4 + 0x18);
  } while (iVar3 != -1);
  lVar4 = 0;
LAB_148ec52e4:
  (**(code **)(**(longlong **)
                 (*(longlong *)(lVar4 + 8) + (longlong)(*(int *)(lVar4 + 0x10) + -1) * 8) + 0x18))()
  ;
  plVar6 = (longlong *)&DAT_00000008;
  if (*(int *)(param_1 + 0x330) == *(int *)(param_1 + 0x35c)) {
LAB_148ec5337:
    lVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2cc);
    lVar2 = param_1 + 0x360;
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x368);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x370) - 1U & uVar1) * 4);
    if (iVar3 == -1) goto LAB_148ec5337;
    lVar4 = *(longlong *)(param_1 + 0x328);
    iVar8 = iVar3;
    do {
      lVar2 = lVar4 + (longlong)iVar8 * 0x20;
      if (*(uint *)(lVar4 + (longlong)iVar8 * 0x20) == uVar1) goto LAB_148ec53c2;
      iVar8 = *(int *)(lVar2 + 0x18);
    } while (iVar8 != -1);
    lVar2 = 0;
LAB_148ec53c2:
    plVar6 = (longlong *)(lVar2 + 8);
    do {
      lVar5 = lVar4 + (longlong)iVar3 * 0x20;
      if (*(uint *)(lVar4 + (longlong)iVar3 * 0x20) == uVar1) goto LAB_148ec533b;
      iVar3 = *(int *)(lVar5 + 0x18);
    } while (iVar3 != -1);
  }
  lVar5 = 0;
LAB_148ec533b:
  iVar3 = *(int *)(lVar5 + 0x10);
  iVar8 = *(int *)(lVar2 + 0x10) - iVar3;
  if (iVar8 != 0) {
    memmove((void *)(*plVar6 + (longlong)iVar3 * 8 + -8),(void *)(*plVar6 + (longlong)iVar3 * 8),
            (longlong)iVar8 << 3);
    iVar3 = *(int *)(lVar2 + 0x10);
  }
  *(int *)(lVar2 + 0x10) = iVar3 + -1;
  FUN_148ed872e(plVar6);
  FUN_140de1078(param_1,&DAT_14cbe2060,0,0);
  FUN_1457d7894(param_1,local_28);
LAB_148ec5224:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec54be FUN_148ec54be body=579 status=ok
// SIG undefined FUN_148ec54be(void)

void FUN_148ec54be(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  wchar_t *_Str;
  size_t sVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_FUN_14b9d1438;
  *(undefined1 *)(puVar1 + 4) = 1;
  *(uint *)((longlong)puVar1 + 0x24) = param_2;
  FUN_140391314(param_1,puVar1);
  FUN_140de1078(param_1,&DAT_14cbe2070,0,0);
  FUN_1457d7894(param_1,&DAT_14cbe22f8);
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 != 0) {
    local_1e8 = local_1c8;
    local_1d0 = '\0';
    local_1d8 = local_c8;
    puVar7 = DAT_14cbe20e8;
    if (DAT_14cbe20f0 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    local_1e0 = local_1e8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,puVar7,&local_1e8);
    local_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_c8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_1412a486e(lVar2,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_1d0 == '\x01') {
      FUN_1400020a8(local_1e8);
    }
  }
  if (param_2 == 0xffffffff) {
    FUN_1462436a0();
  }
  else if (*(int *)(param_1 + 0x330) != *(int *)(param_1 + 0x35c)) {
    lVar2 = param_1 + 0x360;
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x368);
    }
    iVar6 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x370) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x328);
      iVar4 = iVar6;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == param_2) goto LAB_148ec5698;
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + lVar2 + 0x18);
      } while (iVar4 != -1);
    }
  }
  goto LAB_148ec5622;
  while (iVar6 = *(int *)(lVar5 + 0x18), iVar6 != -1) {
LAB_148ec5698:
    lVar5 = lVar2 + (longlong)iVar6 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar6 * 0x20) == param_2) goto LAB_148ec56ca;
  }
  lVar5 = 0;
LAB_148ec56ca:
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if (*(int *)(lVar5 + 0x14) != 0) {
    FUN_148ed87fa(lVar5 + 8);
  }
LAB_148ec5622:
  if ((local_30 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec5702 FUN_148ec5702 body=473 status=ok
// SIG undefined FUN_148ec5702(void)

void FUN_148ec5702(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_148ec581a:
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b9d3660;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = param_1;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ec581a;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar7 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b9d3660;
    local_30[3] = uVar7;
    local_30[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30[5] = param_1;
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
  uVar7 = FUN_14001cc68(0x100,0x10);
  FUN_148e6c1f6(uVar7,param_1 + 0x30,&DAT_14cbe20e0,&local_30);
  FUN_140391314(param_1,uVar7);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec5b50 FUN_148ec5b50 body=271 status=ok
// SIG undefined FUN_148ec5b50(void)

void FUN_148ec5b50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146245af8();
  FUN_148ec5c60(param_1);
  QueryPerformanceCounter(&local_28);
  *(double *)(param_1 + 0x2f8) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  plVar3 = (longlong *)FUN_140f9a2c8(param_1);
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  lVar4 = FUN_14479d2ce(param_1 + 0x30);
  cVar2 = FUN_140426394(lVar4 + 0x3c0,&DAT_14cbd9380);
  if (*(char *)(lVar1 + 0x10) == cVar2) {
    iVar6 = 1;
    if (*(int *)(lVar1 + 0x14) != 0) goto LAB_148ec5bfb;
  }
  else {
    iVar6 = *(int *)(lVar1 + 0x14) + 1;
  }
  *(char *)(lVar1 + 0x10) = cVar2;
  *(int *)(lVar1 + 0x14) = iVar6;
LAB_148ec5bfb:
  FUN_148ec5d14(param_1);
  puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 2) = 0;
  puVar5[3] = 0;
  *puVar5 = &PTR_FUN_14b9d1638;
  FUN_140391314(param_1,puVar5);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec5c60 FUN_148ec5c60 body=179 status=ok
// SIG undefined FUN_148ec5c60(void)

void FUN_148ec5c60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x2d0);
  SRWLock = (PSRWLOCK)(lVar3 + 0x230);
  AcquireSRWLockShared(SRWLock);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  FUN_145e28436(param_1 + 0x2c8,lVar3 + 0xb0);
  ReleaseSRWLockShared(SRWLock);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec5d14 FUN_148ec5d14 body=69 status=ok
// SIG undefined FUN_148ec5d14(void)

void FUN_148ec5d14(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  cVar2 = FUN_140426394(lVar1 + 0x3c0,&DAT_14cbd9380);
  puVar3 = &DAT_14cbe24a8;
  if (cVar2 != '\0') {
    puVar3 = &DAT_14cbe24b8;
  }
  FUN_140afad18(param_1,puVar3);
  return;
}



// FUNCTION 148ec5d5a FUN_148ec5d5a body=332 status=ok
// SIG undefined FUN_148ec5d5a(void)

void FUN_148ec5d5a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x188))();
  FUN_145eea7ba(param_1);
  FUN_1459249be(param_1);
  if ((int)param_1[0x62] != 0) {
    QueryPerformanceCounter(&local_38);
    dVar2 = (double)local_38.QuadPart * DAT_14c83f420;
    dVar1 = (double)param_1[0x5f];
    puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_14b9d13c8;
    FUN_1447a97f4(puVar3 + 4,&DAT_14cb790d0);
    puVar3[9] = (dVar2 + 16777216.0) - dVar1;
    FUN_140391314(param_1,puVar3);
    *(undefined4 *)(param_1 + 0x62) = 0;
    if (*(int *)((longlong)param_1 + 0x314) != 0) {
      FUN_148ed87fa(param_1 + 0x61);
    }
  }
  if (param_1[0x51] != 0) {
    *(undefined2 *)(param_1[0x51] + 0x218) = 0;
  }
  FUN_14129c41e(param_1,&DAT_14cbd93f0,1);
  uVar4 = FUN_14001cc68(0x40,0x10);
  FUN_148ec8d4a(uVar4,param_1 + 0x59);
  FUN_140391314(param_1,uVar4);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec5ea8 FUN_148ec5ea8 body=666 status=ok
// SIG undefined FUN_148ec5ea8(void)

void FUN_148ec5ea8(longlong param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined4 *local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_148ec601f;
  *(undefined1 *)(lVar6 + 0x21d) = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((((lVar5 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar5 + 0x1c8) <= (int)param_2)) ||
     (*(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1, (int)param_3 < 1)) {
LAB_148ec5f9a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  lVar4 = (ulonglong)param_2 * 0xa8;
  lVar5 = *(longlong *)(lVar5 + 0x1c0) + lVar4;
  if ((*(int *)(lVar5 + 0x80) < (int)param_3) ||
     (*(char *)(*(longlong *)(lVar5 + 0x78) + -0x54 + (ulonglong)param_3 * 0x60) != '\x01'))
  goto LAB_148ec5f9a;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x1c8) <= (int)param_2)) {
LAB_148ec5ff6:
    bVar2 = 1;
    if (*(char *)(lVar6 + 0x219) != '\x01') {
      cVar3 = FUN_148e1da52(lVar6);
      if ((cVar3 == '\0') || (*(int *)(lVar6 + 0x208) < 2)) {
        cVar3 = FUN_148e1da52(lVar6);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
        }
        local_60 = (undefined4 *)0x0;
        local_58 = 4;
        FUN_144a06ca8(&local_60,4,0);
        *local_60 = 0;
        local_60[1] = 1;
        local_60[2] = 2;
        local_60[3] = 3;
        *(int *)(lVar6 + 0x1e8) = *(int *)(lVar6 + 0x1e8) + 2;
        if ((longlong)*(int *)(lVar6 + 0x1e0) != 0) {
          lVar5 = (longlong)*(int *)(lVar6 + 0x1e0) * 0x60;
          lVar6 = *(longlong *)(lVar6 + 0x1d8) + 0x1c;
          do {
            local_50 = lVar6;
            FUN_144a9d2f8(&local_60,&local_50);
            lVar6 = lVar6 + 0x60;
            lVar5 = lVar5 + -0x60;
          } while (lVar5 != 0);
        }
        if (local_58 != 0) {
          FUN_148ec8872(param_1,param_2,param_3,*local_60);
        }
        if (local_60 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        *(undefined1 *)(lVar6 + 0x219) = 1;
        puVar1 = *(ushort **)(lVar6 + 0x80);
        if (puVar1 != (ushort *)0x0) {
          *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
        }
      }
      goto LAB_148ec601f;
    }
  }
  else {
    *(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1;
    if ((*(int *)(*(longlong *)(lVar5 + 0x1c0) + 0x80 + lVar4) < (int)param_3) ||
       (*(char *)(*(longlong *)(lVar4 + *(longlong *)(lVar5 + 0x1c0) + 0x78) + -0x4c +
                 (ulonglong)param_3 * 0x60) != '\x01')) goto LAB_148ec5ff6;
    bVar2 = *(byte *)(lVar6 + 0x219);
  }
  if (((bVar2 & 1) == 0) ||
     ((*(uint *)(lVar6 + 0x100) == param_2 && (*(uint *)(lVar6 + 0x104) == param_3)))) {
    *(undefined1 *)(lVar6 + 0x219) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
LAB_148ec601f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec61ae FUN_148ec61ae body=94 status=ok
// SIG undefined FUN_148ec61ae(void)

void FUN_148ec61ae(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x21d) = 1;
    if (*(char *)(lVar1 + 0x219) == '\0') {
      *(undefined4 *)(lVar1 + 0x100) = param_2;
      *(undefined4 *)(lVar1 + 0x104) = param_3;
    }
    FUN_148ec7a92(param_1);
    *(undefined1 *)(lVar1 + 0x109) = 0;
  }
  FUN_140de1078(param_1,&DAT_14cbe2420,0,0);
  return;
}



// FUNCTION 148ec620c FUN_148ec620c body=97 status=ok
// SIG undefined FUN_148ec620c(void)

void FUN_148ec620c(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x219) == '\0')) {
    FUN_148ec7834(lVar1 + 0xf8);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  FUN_140de1078(param_1,&DAT_14cbe2430,0,0);
  return;
}



// FUNCTION 148ec626e FUN_148ec626e body=100 status=ok
// SIG undefined FUN_148ec626e(void)

void FUN_148ec626e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x219) == '\x01') {
      FUN_148ec8a58(param_1,param_4);
    }
    else {
      FUN_148ec8872();
    }
    *(undefined1 *)(lVar1 + 0x219) = 0;
    FUN_148ec7834(lVar1 + 0xf8);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec62d2 FUN_148ec62d2 body=276 status=ok
// SIG undefined FUN_148ec62d2(void)

void FUN_148ec62d2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x21d) = 1;
    iVar1 = *(int *)(lVar2 + 0x1a4);
    FUN_145887f85(*(undefined8 *)(lVar2 + 0x198),*(undefined4 *)(lVar2 + 0x1a0));
    *(undefined4 *)(lVar2 + 0x1a0) = 0;
    if ((iVar1 < 0) && (*(int *)(lVar2 + 0x1a4) != 0)) {
      FUN_148ed9998(lVar2 + 0x198,0);
    }
    plVar5 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar5;
    plVar4 = *(longlong **)(lVar2 + 0x138);
    if (plVar4 != plVar3) {
      *(longlong **)(lVar2 + 0x138) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *(int *)(lVar2 + 0x140) = (int)plVar5[1];
    if (*(char *)(lVar2 + 0x219) == '\0') {
      *(undefined4 *)(lVar2 + 0x100) = param_2;
      *(undefined4 *)(lVar2 + 0x104) = param_3;
    }
    *(undefined1 *)(lVar2 + 0x109) = 1;
    *(undefined1 *)(lVar2 + 0x10a) = param_4;
  }
  FUN_140de1078(param_1,&DAT_14cbe2420,0,0);
  return;
}



// FUNCTION 148ec63e6 FUN_148ec63e6 body=394 status=ok
// SIG undefined FUN_148ec63e6(void)

void FUN_148ec63e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = (code *)&LAB_148ec668e;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6572(param_1,param_2,&DAT_14cb92ad8,param_1);
      local_48 = FUN_148ec66ea;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6572(param_1,param_2,&DAT_14cb92cd8,param_1);
      local_48 = FUN_148ec6a40;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6572(param_1,param_2,&DAT_14cb92ce8,param_1);
      local_48 = FUN_148ec6c40;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6572(param_1,param_2,&DAT_14cb92cf8,param_1);
      local_48 = FUN_148ec6cf0;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6572(param_1,param_2,&DAT_14cbc9c28,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6e24(param_1,param_2,&DAT_14cb92ce0,param_1);
      local_48 = FUN_140de0f20;
      local_40 = 0;
      local_58 = &local_48;
      FUN_148ec6e24(param_1,param_2,&DAT_14cbc9c28,param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec6572 FUN_148ec6572 body=282 status=ok
// SIG undefined FUN_148ec6572(void)

void FUN_148ec6572(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_144308030(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec66ea FUN_148ec66ea body=852 status=ok
// SIG undefined FUN_148ec66ea(void)

void FUN_148ec66ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined8 *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = *(longlong *)(param_1 + 0x288);
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x21b) != '\x01')) goto LAB_148ec69ea;
  uVar3 = *(uint *)(lVar8 + 0x100);
  uVar9 = (ulonglong)uVar3;
  if ((uVar9 == 0xffffffff) || (0 < *(int *)(lVar8 + 0x104))) goto LAB_148ec69ea;
  local_58 = 0;
  uStack_50 = 0;
  if (((int)uVar3 < 0) || (*(int *)(lVar8 + 0x1c8) <= (int)uVar3)) {
LAB_148ec67e3:
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      plVar6 = (longlong *)FUN_140f9a2c8(param_1);
      lVar8 = *plVar6;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0xa0));
      *(int *)(lVar8 + 0x98) = *(int *)(lVar8 + 0x98) + 1;
      if (*(char *)(lVar8 + 0x10) == '\0') {
        iVar5 = *(int *)(lVar8 + 0x14) + 1;
LAB_148ec682a:
        *(undefined1 *)(lVar8 + 0x10) = 1;
        *(int *)(lVar8 + 0x14) = iVar5;
      }
      else if (*(int *)(lVar8 + 0x14) == 0) {
        iVar5 = 1;
        goto LAB_148ec682a;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0xa0));
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,4,0x10);
      local_40 = 4;
      plVar6 = *(longlong **)(param_1 + 0x10);
      if (plVar6 == (longlong *)0x0) {
LAB_148ec6949:
        *local_48 = &PTR_LAB_14b972ed0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_48[2] = lVar10;
        *local_48 = &PTR_FUN_14b9d39e0;
        local_48[3] = 0;
        local_48[4] = 0;
        local_48[5] = param_1;
        *(uint *)(local_48 + 6) = uVar3;
      }
      else {
        iVar5 = (int)plVar6[1];
        do {
          if (iVar5 == 0) goto LAB_148ec6949;
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar11 = iVar5 == iVar4;
          if (bVar11) {
            *(int *)(plVar6 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar11);
        uVar7 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *local_48 = &PTR_LAB_14b972ed0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_48[2] = lVar10;
        *local_48 = &PTR_FUN_14b9d39e0;
        local_48[3] = uVar7;
        local_48[4] = plVar6;
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        local_48[5] = param_1;
        *(uint *)(local_48 + 6) = uVar3;
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar7 = FUN_14001cc68(0x100,0x10);
      local_78 = &local_48;
      FUN_148e6c49c(uVar7,param_1 + 0x30,&DAT_14cbe2450,&local_58);
      FUN_140391314(param_1,uVar7);
      FUN_1449db362(&local_48);
    }
    else {
      FUN_148ec85f8(param_1,uVar9);
    }
  }
  else if (0 < *(int *)(*(longlong *)(lVar8 + 0x1c0) + 0x30 + uVar9 * 0xa8)) {
    lVar8 = *(longlong *)(lVar8 + 0x1c0) + uVar9 * 0xa8;
    local_48 = (undefined8 *)CONCAT44(local_48._4_4_,4);
    local_38 = *(longlong **)(lVar8 + 0x10);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
    local_30 = *(undefined4 *)(lVar8 + 0x18);
    FUN_140056680(local_68,&DAT_149e25dfc);
    FUN_140233eec(&local_58,local_68,&local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    goto LAB_148ec67e3;
  }
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148ec69ea:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec6a40 FUN_148ec6a40 body=511 status=ok
// SIG undefined FUN_148ec6a40(void)

void FUN_148ec6a40(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined2 *puVar4;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x219) == '\0')) && (*(char *)(lVar2 + 0x21b) == '\x01'))
     && (0 < *(int *)(lVar2 + 0x1b8))) {
    *(undefined1 *)(lVar2 + 0x21d) = 0;
    if (*(char *)(param_1 + 0x2f0) == '\x01') {
      FUN_1457d7894(param_1,&DAT_14cbe2470);
    }
    FUN_140de1078(param_1,&DAT_14cbe2410,0,0);
    puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_14b9d1658;
    *(undefined1 *)(puVar1 + 4) = 1;
    FUN_140391314(param_1,puVar1);
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar2 != 0) {
      local_1e0 = local_1c0;
      local_1c8 = '\0';
      local_1d0 = local_c0;
      puVar4 = DAT_14cbe2460;
      if (DAT_14cbe2468 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      local_1d8 = local_1e0;
      _Str = (wchar_t *)FUN_140c7f682(param_1,puVar4,&local_1e0);
      local_40 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_38 = 0;
        local_30 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_c0,_Str,sVar3 & 0xffffffff,1);
      }
      FUN_1412a486e(lVar2,local_38);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_1c8 == '\x01') {
        FUN_1400020a8(local_1e0);
      }
    }
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (*(int *)(param_1 + 0x314) != 0) {
      FUN_148ed87fa(param_1 + 0x308);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec6c40 FUN_148ec6c40 body=175 status=ok
// SIG undefined FUN_148ec6c40(void)

void FUN_148ec6c40(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x288) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x288) + 0x219) == '\0')) &&
     (0 < (longlong)*(int *)(param_1 + 0x310))) {
    plVar1 = *(longlong **)
              (*(longlong *)(param_1 + 0x308) + -8 + (longlong)*(int *)(param_1 + 0x310) * 8);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20);
    *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + -1;
    FUN_148ed872e(param_1 + 0x308);
    FUN_140de1078(param_1,&DAT_14cbe2400,0,0);
    if (*(char *)(param_1 + 0x2f0) == '\x01') {
      FUN_1457d7894(param_1,local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec6cf0 FUN_148ec6cf0 body=308 status=ok
// SIG undefined FUN_148ec6cf0(void)

void FUN_148ec6cf0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x219) == '\0')) {
    uVar1 = *(uint *)(lVar3 + 0x100);
    if ((((ulonglong)uVar1 != 0xffffffff) &&
        (((*(int *)(lVar3 + 0x104) == 0 && (-1 < (int)uVar1)) &&
         ((int)uVar1 < *(int *)(lVar3 + 0x1c8))))) && (4 < *(int *)(lVar3 + 0x1f0))) {
      lVar4 = *(longlong *)(lVar3 + 0x1c0);
      plVar5 = (longlong *)FUN_14001cc68(0x30,0x10);
      uVar6 = FUN_14479d2ce(param_1 + 0x30);
      *plVar5 = (longlong)&PTR_FUN_14b9d1450;
      plVar5[1] = 0;
      FUN_14485c47a(plVar5 + 1,uVar6);
      plVar5[2] = *(longlong *)(lVar3 + 0xd0);
      plVar5[3] = *(longlong *)(lVar4 + (ulonglong)uVar1 * 0xa8);
      *(undefined4 *)(plVar5 + 4) = 5;
      *(undefined1 *)((longlong)plVar5 + 0x24) = 0;
      FUN_1446ddc76(plVar5 + 5,"ui_message_undo_passive",1);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      iVar2 = *(int *)(param_1 + 0x310);
      *(uint *)(param_1 + 0x310) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x314) < iVar2 + 1U) {
        FUN_1459bc4c4(param_1 + 0x308,iVar2);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x308) + (longlong)iVar2 * 8) = plVar5;
      FUN_140de1078(param_1,&DAT_14cbe23e0,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 148ec6e24 FUN_148ec6e24 body=382 status=ok
// SIG undefined FUN_148ec6e24(void)

void FUN_148ec6e24(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_60 = param_1 + 0x138;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1443080b4(param_2,param_3,2);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar3 = FUN_1443080b4(param_2,param_3,8,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar3;
  local_68 = &local_58;
  local_58 = uVar2;
  local_50 = uVar4;
  uVar4 = FUN_1443080b4(param_2,param_3,0x10,param_4);
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_1447808da(local_60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar1 * 4) = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec6fa4 FUN_148ec6fa4 body=1236 status=ok
// SIG undefined FUN_148ec6fa4(void)

void FUN_148ec6fa4(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort *puVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_148a01bba();
  lVar8 = 0;
  FUN_14000bbd8(&local_70,param_2,0);
  if (DAT_14cb93020 != 0) {
    lVar8 = FUN_144837462(DAT_14cb93020,&local_70);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 != 0) {
    uVar9 = FUN_140f9d1b4();
    cVar7 = FUN_1448093f4(lVar8,uVar9);
    if ((cVar7 != '\0') && (lVar3 = *(longlong *)(param_1 + 0x288), lVar3 != 0)) {
      plVar10 = *(longlong **)(lVar8 + 0x98);
      plVar4 = *(longlong **)(lVar3 + 0x138);
      if (plVar4 != plVar10) {
        *(longlong **)(lVar3 + 0x138) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(lVar3 + 0x140) = *(undefined4 *)(lVar8 + 0xa0);
      plVar10 = *(longlong **)(lVar8 + 0x30);
      plVar4 = *(longlong **)(lVar3 + 0x148);
      if (plVar4 != plVar10) {
        *(longlong **)(lVar3 + 0x148) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(lVar3 + 0x150) = *(undefined4 *)(lVar8 + 0x38);
      plVar10 = *(longlong **)(lVar8 + 0x40);
      plVar4 = *(longlong **)(lVar3 + 0x158);
      if (plVar4 != plVar10) {
        *(longlong **)(lVar3 + 0x158) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(lVar3 + 0x160) = *(undefined4 *)(lVar8 + 0x48);
      plVar10 = *(longlong **)(lVar8 + 0x50);
      plVar4 = *(longlong **)(lVar3 + 0x178);
      if (plVar4 != plVar10) {
        *(longlong **)(lVar3 + 0x178) = plVar10;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(lVar3 + 0x180) = *(undefined4 *)(lVar8 + 0x58);
      iVar2 = *(int *)(lVar3 + 0x1b4);
      FUN_140f9c02e(*(undefined8 *)(lVar3 + 0x1a8),*(undefined4 *)(lVar3 + 0x1b0));
      *(undefined4 *)(lVar3 + 0x1b0) = 0;
      if ((iVar2 < 0) && (*(int *)(lVar3 + 0x1b4) != 0)) {
        FUN_148a07b08(lVar3 + 0x1a8,0);
      }
      *(undefined1 *)(lVar3 + 0x108) = 1;
      if (*(char *)(lVar3 + 0x219) == '\0') {
        FUN_144a787a6(lVar3 + 0x118,param_2);
        plVar10 = *(longlong **)(lVar8 + 0x20);
        plVar4 = *(longlong **)(lVar3 + 0x168);
        if (plVar4 != plVar10) {
          *(longlong **)(lVar3 + 0x168) = plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        plVar10 = (longlong *)(lVar8 + 0x28);
      }
      else {
        plVar10 = (longlong *)FUN_140e82300();
        plVar4 = (longlong *)*plVar10;
        plVar11 = *(longlong **)(lVar3 + 0x168);
        if (plVar11 != plVar4) {
          *(longlong **)(lVar3 + 0x168) = plVar4;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))();
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        plVar10 = plVar10 + 1;
      }
      *(int *)(lVar3 + 0x170) = (int)*plVar10;
      if (*(char *)(lVar3 + 0x109) == '\x01') {
        if (*(char *)(lVar3 + 0x10a) == '\x01') {
          FUN_145887f85(*(undefined8 *)(lVar3 + 0x198),*(undefined4 *)(lVar3 + 0x1a0));
          *(undefined4 *)(lVar3 + 0x1a0) = 0;
          if (*(int *)(lVar3 + 0x1a4) != 1) {
            FUN_148ed9998(lVar3 + 0x198,1);
          }
          plVar11 = (longlong *)FUN_148ec747a(lVar3 + 0x198);
          plVar10 = *(longlong **)(lVar8 + 0x98);
          plVar4 = (longlong *)*plVar11;
          if (plVar4 != plVar10) {
            *plVar11 = (longlong)plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(undefined4 *)(plVar11 + 1) = *(undefined4 *)(lVar8 + 0xa0);
        }
        else if (*(int *)(lVar3 + 0x104) == -1) {
          plVar11 = (longlong *)FUN_140e82300();
          plVar10 = (longlong *)*plVar11;
          plVar4 = *(longlong **)(lVar3 + 0x178);
          if (plVar4 != plVar10) {
            *(longlong **)(lVar3 + 0x178) = plVar10;
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
          *(int *)(lVar3 + 0x180) = (int)plVar11[1];
        }
      }
      FUN_1448d5e3c(&local_70,param_1 + 0x208);
      lVar5 = *(longlong *)(local_70 + 0x2d0);
      AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x230));
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_68 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      iVar2 = *(int *)(lVar3 + 0x100);
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar5 + 0x1c8))) {
        lVar12 = (longlong)iVar2 * 0xa8;
        *(undefined4 *)(lVar3 + 0x110) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x1c0) + 0x30 + lVar12);
        *(undefined4 *)(lVar3 + 0x114) =
             *(undefined4 *)(*(longlong *)(lVar5 + 0x1c0) + 0x28 + lVar12);
      }
      FUN_148ec74b6(param_1,lVar3 + 0xf8,lVar8);
      FUN_148ec75be(param_1,lVar8,param_2);
      puVar6 = *(ushort **)(lVar3 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
      ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x230));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec747a FUN_148ec747a body=59 status=ok
// SIG undefined FUN_148ec747a(void)

longlong FUN_148ec747a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148ed9a36(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  thunk_FUN_144a5dc74(lVar2);
  return lVar2;
}



// FUNCTION 148ec74b6 FUN_148ec74b6 body=263 status=ok
// SIG undefined FUN_148ec74b6(void)

void FUN_148ec74b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_148ec750b;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar7 = *(undefined8 *)(param_1 + 8);
    bVar3 = false;
  }
LAB_148ec750b:
  local_78[0] = (code *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_68 = &PTR_FUN_14b9d3910;
  local_68[1] = param_1;
  local_68[2] = uVar7;
  local_68[3] = plVar6;
  if (!bVar3) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_68[4] = param_2;
  local_68[5] = param_3;
  if (local_68 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78[0] = FUN_14430815a;
  }
  FUN_1403911de(param_1,local_78);
  if (!bVar3) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec75be FUN_148ec75be body=595 status=ok
// SIG undefined FUN_148ec75be(void)

void FUN_148ec75be(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) {
    return;
  }
  iVar9 = *(int *)(lVar4 + 0x100);
  if ((longlong)iVar9 < 0) {
    return;
  }
  if (*(int *)(lVar4 + 0x1c8) <= iVar9) {
    return;
  }
  lVar1 = lVar4 + 0xf8;
  uVar3 = *(uint *)(lVar4 + 0x104);
  *(int *)(lVar4 + 0x1d0) = *(int *)(lVar4 + 0x1d0) + 1;
  lVar14 = (longlong)iVar9 * 0xa8 + *(longlong *)(lVar4 + 0x1c0);
  if ((ulonglong)uVar3 == 0) {
    if (*(char *)(lVar4 + 0x219) != '\0') {
      return;
    }
    if (*(char *)(lVar14 + 0x38) != '\x01') {
      return;
    }
    if (*(int *)(lVar14 + 0x28) <= *(int *)(lVar14 + 0x30)) {
      return;
    }
    if ((0 < *(int *)(lVar4 + 0x1f0)) &&
       (FUN_148ec7f18(lVar1,param_2,0), 4 < *(int *)(lVar4 + 0x1f0))) {
      FUN_148ec7f18(lVar1,param_2,1);
    }
    if (*(char *)(lVar4 + 0x21b) != '\x01') {
      return;
    }
    if (*(int *)(lVar14 + 0x30) < 1) {
      return;
    }
  }
  else {
    if ((int)uVar3 < 1) {
      return;
    }
    if (*(int *)(lVar14 + 0x80) < (int)uVar3) {
      return;
    }
    lVar14 = *(longlong *)(lVar14 + 0x78);
    lVar8 = (ulonglong)uVar3 * 0x60;
    *(undefined1 *)(lVar4 + 0x10c) = *(undefined1 *)(lVar14 + -0x54 + lVar8);
    cVar2 = *(char *)(lVar14 + -0x4c + lVar8);
    *(char *)(lVar4 + 0x10b) = cVar2;
    if (*(char *)(lVar14 + -0x54 + lVar8) != '\x01') {
      return;
    }
    if (cVar2 != '\0') {
      iVar9 = 1;
      goto LAB_148ec7763;
    }
    if (*(char *)(lVar4 + 0x219) == '\0') {
      if (*(char *)(lVar4 + 0x109) != '\0') {
        FUN_148ec7834(lVar1);
        return;
      }
      bVar7 = FUN_148e1da52(lVar4);
      iVar9 = (uint)bVar7 * 2;
      goto LAB_148ec7763;
    }
    if (*(char *)(lVar4 + 0x109) == '\0') {
      iVar9 = *(int *)(lVar4 + 0x120);
      if (iVar9 == (int)param_3[1]) {
        if (1 < iVar9) {
          lVar14 = 0;
          while( true ) {
            uVar10 = *(ushort *)(*(longlong *)(lVar4 + 0x118) + lVar14);
            uVar11 = (ulonglong)uVar10;
            uVar12 = *(ushort *)(*param_3 + lVar14);
            if (uVar10 != uVar12) break;
            if (uVar10 == 0) goto LAB_148ec773e;
LAB_148ec76c6:
            lVar14 = lVar14 + 2;
          }
          if ((uVar12 | uVar10) < 0x80) {
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            uVar13 = (ulonglong)uVar12;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_148ec76c6;
          }
          if (uVar10 != uVar12) {
            return;
          }
        }
      }
      else if ((int)param_3[1] + iVar9 != 1) {
        return;
      }
LAB_148ec773e:
      plVar5 = *(longlong **)(param_2 + 0x20);
      plVar6 = *(longlong **)(lVar4 + 0x168);
      if (plVar6 != plVar5) {
        *(longlong **)(lVar4 + 0x168) = plVar5;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      *(undefined4 *)(lVar4 + 0x170) = *(undefined4 *)(param_2 + 0x28);
    }
    else {
      *(byte *)(lVar4 + 0x10b) = *(byte *)(lVar4 + 0x10a) ^ 1;
    }
  }
  iVar9 = 2;
LAB_148ec7763:
  FUN_148ec7f18(lVar1,param_2,iVar9);
  return;
}



// FUNCTION 148ec7834 FUN_148ec7834 body=605 status=ok
// SIG undefined FUN_148ec7834(void)

void FUN_148ec7834(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_1446f8c06(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1446f8c06(param_1 + 6,0);
  }
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[8];
  if (plVar3 != plVar2) {
    param_1[8] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 9) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[10];
  if (plVar3 != plVar2) {
    param_1[10] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0xb) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != plVar2) {
    param_1[0xc] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0xd) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != plVar2) {
    param_1[0xe] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0xf) = (int)plVar4[1];
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[0x10];
  if (plVar3 != plVar2) {
    param_1[0x10] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0x11) = (int)plVar4[1];
  iVar1 = *(int *)((longlong)param_1 + 0xac);
  FUN_145887f85(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xac) != 0)) {
    FUN_148ed9998(param_1 + 0x14,0);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xbc);
  FUN_140f9c02e(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xbc) != 0)) {
    FUN_148a07b08(param_1 + 0x16,0);
    return;
  }
  return;
}



// FUNCTION 148ec7a92 FUN_148ec7a92 body=1157 status=ok
// SIG undefined FUN_148ec7a92(void)

void FUN_148ec7a92(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8 [2];
  longlong *local_a8 [2];
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 *local_80;
  undefined1 *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_60 [4];
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = *(longlong *)(param_1 + 0x288);
  local_98 = lVar11;
  if (lVar11 != 0) {
    FUN_145887f85(*(undefined8 *)(lVar11 + 0x198),*(undefined4 *)(lVar11 + 0x1a0));
    *(undefined4 *)(lVar11 + 0x1a0) = 0;
    if (*(int *)(lVar11 + 0x1a4) != 0) {
      FUN_148ed9998(lVar11 + 0x198,0);
    }
    if ((-1 < (int)param_2) && (uVar4 = *(uint *)(lVar11 + 0x1c8), (int)param_2 < (int)uVar4)) {
      iVar5 = *(int *)(lVar11 + 0x1d0);
      *(int *)(lVar11 + 0x1d0) = iVar5 + 1;
      lVar8 = *(longlong *)(lVar11 + 0x1c0);
      lVar12 = lVar8 + (ulonglong)param_2 * 0xa8;
      *(undefined4 *)(lVar11 + 0x110) = *(undefined4 *)(lVar8 + 0x30 + (ulonglong)param_2 * 0xa8);
      if ((int)param_3 < 1) {
        if (((*(char *)(lVar12 + 0x38) == '\0') && (param_2 - 1 < uVar4)) &&
           (1 < *(int *)(lVar12 + 0x98) && param_2 + 1 < uVar4)) {
          local_70 = &local_98;
          *(int *)(lVar11 + 0x1d0) = iVar5 + 3;
          lVar11 = (ulonglong)(param_2 + 1) * 0xa8;
          iVar5 = (*(int **)(lVar12 + 0x90))[1];
          iVar6 = *(int *)(lVar8 + 0x30 + lVar11);
          if (*(int *)(lVar12 + -0x78) < **(int **)(lVar12 + 0x90)) {
            lVar10 = 0;
            FUN_14000bbd8(local_60,lVar12 + -0x48,0);
            if (DAT_14cb93020 != 0) {
              lVar10 = FUN_144837462(DAT_14cb93020,local_60);
            }
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            if (lVar10 != 0) {
              uVar9 = FUN_140f9d1b4();
              cVar7 = FUN_1448093f4(lVar10,uVar9);
              if (cVar7 != '\0') {
                FUN_1442faa3e(&local_70,**(undefined4 **)(lVar12 + 0x90),lVar10 + 0x98);
              }
            }
          }
          if (iVar6 < iVar5) {
            lVar10 = 0;
            FUN_14000bbd8(local_60,lVar8 + lVar11 + 0x60,0);
            if (DAT_14cb93020 != 0) {
              lVar10 = FUN_144837462(DAT_14cb93020,local_60);
            }
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            if (lVar10 != 0) {
              uVar9 = FUN_140f9d1b4();
              cVar7 = FUN_1448093f4(lVar10,uVar9);
              if (cVar7 != '\0') {
                FUN_1442faa3e(&local_70,*(undefined4 *)(*(longlong *)(lVar12 + 0x90) + 4),
                              lVar10 + 0x98);
              }
            }
          }
        }
      }
      else if ((int)param_3 <= *(int *)(lVar12 + 0x80)) {
        lVar12 = *(longlong *)(lVar12 + 0x78);
        lVar8 = 0;
        FUN_14000bbd8(local_60,lVar12 + (ulonglong)param_3 * 0x60 + -0x20,0);
        if (DAT_14cb93020 != 0) {
          lVar8 = FUN_144837462(DAT_14cb93020,local_60);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (lVar8 != 0) {
          uVar9 = FUN_140f9d1b4();
          cVar7 = FUN_1448093f4(lVar8,uVar9);
          if (((cVar7 != '\0') &&
              (lVar12 = lVar12 + (ulonglong)param_3 * 0x60, *(char *)(lVar12 + -0x54) == '\0')) &&
             (iVar5 = *(int *)(lVar12 + -8), 0 < iVar5)) {
            uVar9 = FUN_148ec747a(lVar11 + 0x198);
            local_c8 = 0;
            plStack_c0 = (longlong *)0x0;
            FUN_1413a454c(local_b8,iVar5,0);
            FUN_14023409e(&local_d8,lVar8 + 0x98,1);
            local_60[0] = 4;
            FUN_14023423e(&local_50,local_b8);
            local_78 = local_40;
            local_80 = local_60;
            FUN_14010d304(&local_70);
            local_90 = local_d8;
            local_88 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_a8,&local_90,&local_70);
            FUN_14007f2db(local_70,local_68);
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_50 != (longlong *)0x0) {
              (**(code **)(*local_50 + 0x10))();
            }
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_d0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)local_d0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_d0 + 0x10))(local_d0);
                }
              }
            }
            if (local_b8[0] != (longlong *)0x0) {
              (**(code **)(*local_b8[0] + 0x10))();
            }
            FUN_140008f88(uVar9,local_a8);
            if (local_a8[0] != (longlong *)0x0) {
              (**(code **)(*local_a8[0] + 0x10))();
            }
            plVar1 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_c0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_c0)(plStack_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec7f18 FUN_148ec7f18 body=363 status=ok
// SIG undefined FUN_148ec7f18(void)

void FUN_148ec7f18(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 0x90) <= (int)param_3) goto LAB_148ec7fee;
  lVar5 = FUN_140f9d3ac(param_1 + 0xb0);
  lVar2 = *(longlong *)(param_2 + 0x88);
  lVar1 = lVar2 + (ulonglong)param_3 * 0x28;
  FUN_144a787a6(lVar5,lVar1);
  lVar7 = *(longlong *)(lVar1 + 0x18);
  if (lVar7 == 0) {
    uVar6 = FUN_14036a63e();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar1 + 0x18) = lVar7;
  }
  lVar8 = *(longlong *)(lVar1 + 0x20);
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) &&
     (plVar10 = (longlong *)(lVar2 + (ulonglong)param_3 * 0x28 + 0x10), *plVar10 != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148ec8080:
      lVar8 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_148ec8080;
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar8 = FUN_144aff482(uVar6,plVar10);
    }
    *(longlong *)(lVar1 + 0x20) = lVar8;
  }
  puVar9 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(lVar8 + 8);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1400b2348(puVar9,&local_38,1);
  if ((longlong *)(lVar5 + 0x10) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar5 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar5 + 0x10) = local_38;
    *(undefined4 *)(lVar5 + 0x18) = (undefined4)uStack_30;
    *(undefined4 *)(lVar5 + 0x1c) = uStack_30._4_4_;
  }
LAB_148ec7fee:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec8092 FUN_148ec8092 body=179 status=ok
// SIG undefined FUN_148ec8092(void)

byte FUN_148ec8092(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte unaff_BPL;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_148ec8131;
  cVar2 = FUN_148e1da52(lVar1);
  if (cVar2 == '\0') {
    unaff_BPL = 1;
    cVar2 = '\x01';
    if (*(char *)(param_1 + 0x2d0) == '\x01') goto LAB_148ec80c5;
  }
  else {
LAB_148ec80c5:
    lVar4 = FUN_14479d2ce(param_1 + 0x30);
    cVar2 = FUN_140426394(lVar4 + 0x3c0,&DAT_14cbd9380);
    unaff_BPL = 0;
  }
  plVar5 = (longlong *)FUN_140f9a2c8(param_1);
  lVar4 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
  *(int *)(lVar4 + 0x98) = *(int *)(lVar4 + 0x98) + 1;
  if (cVar2 == *(char *)(lVar4 + 0x10)) {
    if (*(int *)(lVar4 + 0x14) == 0) {
      iVar3 = 1;
      goto LAB_148ec8120;
    }
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x14) + 1;
LAB_148ec8120:
    *(char *)(lVar4 + 0x10) = cVar2;
    *(int *)(lVar4 + 0x14) = iVar3;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0xa0));
LAB_148ec8131:
  return lVar1 != 0 & unaff_BPL;
}



// FUNCTION 148ec8146 FUN_148ec8146 body=166 status=ok
// SIG undefined FUN_148ec8146(void)

void FUN_148ec8146(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    plVar2 = (longlong *)FUN_140f9a2c8();
    lVar3 = *plVar2;
    SRWLock = (PSRWLOCK)(lVar3 + 0xa0);
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(param_1 + 0x304) == *(int *)(lVar3 + 0xc)) {
                    /* WARNING: Could not recover jumptable at 0x000148ec818e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
    *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(lVar3 + 8);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(lVar3 + 0xc);
    ReleaseSRWLockShared(SRWLock);
    if (*(char *)(param_1 + 0x300) == '\x01') {
      lVar3 = FUN_14479d2ce(param_1 + 0x30);
      cVar1 = FUN_140426394(lVar3 + 0x3c0,&DAT_14cbd9380);
      if (cVar1 == '\0') {
        FUN_148ec8aca(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ec81ec FUN_148ec81ec body=293 status=ok
// SIG undefined FUN_148ec81ec(void)

void FUN_148ec81ec(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(lVar1 + 0x218) == '\x01') {
    *(undefined1 *)(lVar1 + 0x218) = 0;
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    FUN_14129c41e(param_1,&DAT_14cbd93f0,1);
    return;
  }
  lVar5 = FUN_14479d2ce(param_1 + 0x30);
  cVar3 = FUN_140426394(lVar5 + 0x3c0,&DAT_14cbd9380);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0x2e0) == '\0')) {
    FUN_148ec8312(param_1);
    return;
  }
  cVar3 = FUN_148ec8092(param_1);
  if (cVar3 == '\0') {
    *(undefined1 *)(lVar1 + 0x218) = 0;
    FUN_148ec84ec(param_1);
    return;
  }
  plVar6 = (longlong *)FUN_140f9a2c8(param_1);
  lVar1 = *plVar6;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  *(int *)(lVar1 + 0x98) = *(int *)(lVar1 + 0x98) + 1;
  if (*(char *)(lVar1 + 8) == '\0') {
    iVar4 = *(int *)(lVar1 + 0xc) + 1;
LAB_148ec82b7:
    *(undefined1 *)(lVar1 + 8) = 1;
    *(int *)(lVar1 + 0xc) = iVar4;
  }
  else if (*(int *)(lVar1 + 0xc) == 0) {
    iVar4 = 1;
    goto LAB_148ec82b7;
  }
  if (*(int *)(lVar1 + 0x60) == -1) {
    if (*(int *)(lVar1 + 100) != 0) goto LAB_148ec82d3;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar1 + 100) + 1;
  }
  *(undefined4 *)(lVar1 + 0x60) = 0xffffffff;
  *(int *)(lVar1 + 100) = iVar4;
LAB_148ec82d3:
                    /* WARNING: Could not recover jumptable at 0x000148ec82dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa0));
  return;
}



// FUNCTION 148ec8312 FUN_148ec8312 body=473 status=ok
// SIG undefined FUN_148ec8312(void)

void FUN_148ec8312(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_148ec842a:
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b9d3a50;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = param_1;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148ec842a;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar7 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_30[2] = lVar8;
    *local_30 = &PTR_FUN_14b9d3a50;
    local_30[3] = uVar7;
    local_30[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30[5] = param_1;
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
  uVar7 = FUN_14001cc68(0x100,0x10);
  FUN_148e6c1f6(uVar7,param_1 + 0x30,&DAT_14cbe2458,&local_30);
  FUN_140391314(param_1,uVar7);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec84ec FUN_148ec84ec body=199 status=ok
// SIG undefined FUN_148ec84ec(void)

void FUN_148ec84ec(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    (**(code **)(*param_1 + 0x130))(param_1);
  }
  FUN_1462349ca(param_1);
  FUN_14129c41e(param_1,&DAT_14cbd9380,1);
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  lVar1 = param_1[6];
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_1446ddc76(&local_38,"ClearStructureredInteractable",1);
  FUN_14039176c(puVar2,lVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c13a0;
  FUN_140391314(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec85f8 FUN_148ec85f8 body=262 status=ok
// SIG undefined FUN_148ec85f8(void)

void FUN_148ec85f8(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x1b8))) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(lVar2 + 0x1c8))) {
    if (*(char *)(*(longlong *)(lVar2 + 0x1c0) + 0x38 + (ulonglong)param_2 * 0xa8) == '\x01') {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1c0) + (ulonglong)param_2 * 0xa8);
      if (*(char *)(param_1 + 0x2f0) == '\x01') {
        FUN_1457d7894(param_1,&DAT_14cbe2478);
      }
      FUN_140de1078(param_1,&DAT_14cbe2410,0,0);
      puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      uVar1 = *(undefined4 *)(puVar4 + 6);
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      *puVar3 = &PTR_FUN_14b9d1648;
      puVar3[4] = *(undefined8 *)(lVar2 + 0xd0);
      puVar3[5] = *puVar4;
      *(undefined4 *)(puVar3 + 6) = uVar1;
      FUN_140391314(param_1,puVar3);
      *(undefined4 *)(param_1 + 0x310) = 0;
      if (*(int *)(param_1 + 0x314) != 0) {
        FUN_148ed87fa(param_1 + 0x308);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ec8872 FUN_148ec8872 body=485 status=ok
// SIG undefined FUN_148ec8872(void)

void FUN_148ec8872(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x208) <= (int)param_4) {
    return;
  }
  *(undefined1 *)(lVar3 + 0x21d) = 0;
  if ((int)param_2 < 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x1c8) <= (int)param_2) {
    return;
  }
  *(int *)(lVar3 + 0x1d0) = *(int *)(lVar3 + 0x1d0) + 2;
  if ((int)param_3 < 1) {
    return;
  }
  if (*(int *)(*(longlong *)(lVar3 + 0x1c0) + 0x80 + (ulonglong)param_2 * 0xa8) < (int)param_3) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1c0) + 0x78 + (ulonglong)param_2 * 0xa8);
  lVar1 = lVar4 + (ulonglong)param_3 * 0x60;
  if (*(char *)(lVar4 + -0x54 + (ulonglong)param_3 * 0x60) != '\x01') goto LAB_148ec893c;
  if (*(char *)(lVar1 + -0x4c) == '\x01') {
    puVar8 = &DAT_14cbe23d0;
    if (*(char *)(param_1 + 0x2f0) != '\0') {
      puVar7 = &DAT_14cbe2490;
LAB_148ec8a4a:
      FUN_1457d7894(param_1,puVar7);
    }
  }
  else {
    if (*(int *)(lVar3 + 0x208) < 1) goto LAB_148ec893c;
    puVar8 = &DAT_14cbe23c0;
    if (*(char *)(param_1 + 0x2f0) == '\x01') {
      puVar7 = &DAT_14cbe2488;
      goto LAB_148ec8a4a;
    }
  }
  FUN_140de1078(param_1,puVar8,0,0);
LAB_148ec893c:
  if (((int)param_4 < 0) || (*(int *)(lVar3 + 0x1e0) <= (int)param_4)) {
    uVar9 = 0;
  }
  else {
    *(int *)(lVar3 + 0x1e8) = *(int *)(lVar3 + 0x1e8) + 1;
    uVar9 = *(undefined8 *)(*(longlong *)(lVar3 + 0x1d8) + (ulonglong)param_4 * 0x60);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  uVar6 = FUN_14479d2ce(param_1 + 0x30);
  *plVar5 = (longlong)&PTR_FUN_14b9d1670;
  plVar5[1] = 0;
  FUN_14485c47a(plVar5 + 1,uVar6);
  plVar5[2] = *(longlong *)(lVar3 + 0xd8);
  plVar5[3] = *(longlong *)(lVar1 + -0x60);
  *(uint *)(plVar5 + 4) = param_4;
  *(undefined8 *)((longlong)plVar5 + 0x24) = uVar9;
  FUN_1446ddc76((longlong)plVar5 + 0x2c,"ui_message_undo_passive",1);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  iVar2 = *(int *)(param_1 + 0x310);
  *(uint *)(param_1 + 0x310) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x314) < iVar2 + 1U) {
    FUN_1459bc4c4((longlong *)(param_1 + 0x308),iVar2);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x308) + (longlong)iVar2 * 8) = plVar5;
  return;
}



// FUNCTION 148ec8a58 FUN_148ec8a58 body=113 status=ok
// SIG undefined FUN_148ec8a58(void)

void FUN_148ec8a58(longlong param_1,int param_2)

{
  longlong lVar1;
  ushort *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((lVar1 != 0) && (param_2 < *(int *)(lVar1 + 0x208))) && (*(char *)(lVar1 + 0x219) == '\x01'))
  {
    FUN_148ec8872(param_1,*(undefined4 *)(lVar1 + 0x100),*(undefined4 *)(lVar1 + 0x104),param_2);
    *(undefined1 *)(lVar1 + 0x219) = 0;
    FUN_148ec7834(lVar1 + 0xf8);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148ec8aca FUN_148ec8aca body=514 status=ok
// SIG undefined FUN_148ec8aca(void)

void FUN_148ec8aca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_148ec8be2:
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_30[2] = lVar9;
    *local_30 = &PTR_FUN_14b9d3970;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = param_1;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_148ec8be2;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar11 = iVar7 == iVar5;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar11);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_30 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_30[2] = lVar9;
    *local_30 = &PTR_FUN_14b9d3970;
    local_30[3] = uVar8;
    local_30[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30[5] = param_1;
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
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    uVar8 = FUN_14001cc68(0x100,0x10);
    cVar6 = FUN_148e1da6e(lVar4,2);
    puVar10 = &DAT_14cbe2440;
    if (cVar6 != '\0') {
      puVar10 = &DAT_14cbe2448;
    }
    FUN_148e6c1f6(uVar8,param_1 + 0x30,puVar10,&local_30);
    FUN_140391314(param_1,uVar8);
  }
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ec8cce FUN_148ec8cce body=28 status=ok
// SIG undefined FUN_148ec8cce(void)

void FUN_148ec8cce(undefined8 param_1)

{
  FUN_145c19e38();
  FUN_148ec8a58(param_1,0);
  return;
}



// FUNCTION 148ec8cea FUN_148ec8cea body=31 status=ok
// SIG undefined FUN_148ec8cea(void)

void FUN_148ec8cea(undefined8 param_1)

{
  FUN_1458343d0();
  FUN_148ec8a58(param_1,1);
  return;
}



// FUNCTION 148ec8d0a FUN_148ec8d0a body=31 status=ok
// SIG undefined FUN_148ec8d0a(void)

void FUN_148ec8d0a(undefined8 param_1)

{
  FUN_145c19e20();
  FUN_148ec8a58(param_1,2);
  return;
}



// FUNCTION 148ec8d2a FUN_148ec8d2a body=31 status=ok
// SIG undefined FUN_148ec8d2a(void)

void FUN_148ec8d2a(undefined8 param_1)

{
  FUN_148a01bbc();
  FUN_148ec8a58(param_1,3);
  return;
}



// FUNCTION 148ec8d4a FUN_148ec8d4a body=111 status=ok
// SIG undefined FUN_148ec8d4a(void)

void FUN_148ec8d4a(undefined8 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14b9d1690;
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2[1];
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_2[3];
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2[5];
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_2[7];
  return;
}



// FUNCTION 148ec8dba FUN_148ec8dba body=137 status=ok
// SIG undefined FUN_148ec8dba(void)

void FUN_148ec8dba(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14123bd7e();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_28 = FUN_148ec8f52;
      local_20 = 0;
      FUN_148ec8e44(param_1,param_2,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec8e44 FUN_148ec8e44 body=269 status=ok
// SIG undefined FUN_148ec8e44(void)

void FUN_148ec8e44(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14430995a(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cbd9738;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec8f52 FUN_148ec8f52 body=83 status=ok
// SIG undefined FUN_148ec8f52(void)

void FUN_148ec8f52(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d17a0;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ec8fa6 FUN_148ec8fa6 body=110 status=ok
// SIG undefined FUN_148ec8fa6(void)

void FUN_148ec8fa6(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x178))();
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 6);
    if (lVar2 != 0) {
      lVar2 = FUN_140391a3c(lVar2);
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar3 = &PTR_FUN_14b9b44f8;
        *(undefined1 *)(puVar3 + 1) = param_2;
        FUN_14039144e(lVar2,puVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ec9014 FUN_148ec9014 body=83 status=ok
// SIG undefined FUN_148ec9014(void)

void FUN_148ec9014(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar1 = FUN_140391a3c(lVar1);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = &PTR_FUN_14b9d17d0;
      FUN_14039144e(lVar1,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148ec907a FUN_148ec907a body=86 status=ok
// SIG undefined FUN_148ec907a(void)

undefined8 * FUN_148ec907a(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2c8);
  memset(_Dst,0,0x2c8);
  FUN_140e8cfb8(_Dst);
  *(undefined4 *)(_Dst + 0x56) = 0xffffffff;
  *_Dst = &PTR_FUN_14b9d1810;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  return _Dst;
}



// FUNCTION 148ec90d0 FUN_148ec90d0 body=173 status=ok
// SIG undefined FUN_148ec90d0(void)

void FUN_148ec90d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_14b9d19c0;
  FUN_1446ddc76(&local_40,"PlayStandInTrick",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_40,1);
  *puVar1 = &PTR_FUN_14b9d19c0;
  puVar1[7] = *param_2;
  puVar1[8] = *param_3;
  FUN_140391314(param_1,puVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec917e FUN_148ec917e body=79 status=ok
// SIG undefined FUN_148ec917e(void)

void FUN_148ec917e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x50,0x10);
  FUN_148ec91ce(uVar1,param_1 + 0x30,param_2,param_3,1);
  FUN_140391314(param_1,uVar1);
  return;
}



// FUNCTION 148ec91ce FUN_148ec91ce body=218 status=ok
// SIG undefined FUN_148ec91ce(void)

undefined8 *
FUN_148ec91ce(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5)

{
  int iVar1;
  void *_Src;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b9d19e0;
  FUN_1446ddc76(&local_48,"SetStandInCosmetic",1);
  FUN_14039176c(param_1,*param_2,local_48,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  *param_1 = &PTR_FUN_14b9d19e0;
  param_1[7] = *param_3;
  param_1[8] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 * 2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec92aa FUN_148ec92aa body=178 status=ok
// SIG undefined FUN_148ec92aa(void)

void FUN_148ec92aa(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *puVar1 = &PTR_FUN_14b9cd3f0;
  FUN_1446ddc76(&local_40,"AddStandInTransform",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_40,1);
  *puVar1 = &PTR_FUN_14b9cd3f0;
  puVar1[7] = *param_2;
  puVar3 = puVar1 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140391314(param_1,puVar1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec935e FUN_148ec935e body=164 status=ok
// SIG undefined FUN_148ec935e(void)

void FUN_148ec935e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *puVar1 = &PTR_FUN_14b9cd420;
  FUN_1446ddc76(&local_38,"AddStandInCameraTransform",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_38,1);
  *puVar1 = &PTR_FUN_14b9cd420;
  puVar3 = puVar1 + 8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140391314(param_1,puVar1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec9404 FUN_148ec9404 body=163 status=ok
// SIG undefined FUN_148ec9404(void)

void FUN_148ec9404(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9cd460;
  FUN_1446ddc76(&local_48,"AddStandInCameraFOV",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_48,1);
  *puVar1 = &PTR_FUN_14b9cd460;
  *(undefined4 *)(puVar1 + 7) = param_2;
  FUN_140391314(param_1,puVar1);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec94a8 FUN_148ec94a8 body=152 status=ok
// SIG undefined FUN_148ec94a8(void)

void FUN_148ec94a8(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9cd490;
  FUN_1446ddc76(&local_30,"ResetStandInCamera",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9cd490;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec9542 FUN_148ec9542 body=145 status=ok
// SIG undefined FUN_148ec9542(void)

void FUN_148ec9542(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = &PTR_FUN_14b9cd4c0;
  FUN_1446ddc76(&local_30,"EnterStandInCameraMode",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9cd4c0;
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec95d4 FUN_148ec95d4 body=164 status=ok
// SIG undefined FUN_148ec95d4(void)

void FUN_148ec95d4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x110,0x10);
  *puVar1 = &PTR_FUN_14b9cd4f0;
  FUN_1446ddc76(&local_38,"SetStandInInventoryIdentity",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_38,1);
  *puVar1 = &PTR_FUN_14b9cd4f0;
  FUN_1406fd608(puVar1 + 7,param_2);
  FUN_140391314(param_1,puVar1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec967a FUN_148ec967a body=159 status=ok
// SIG undefined FUN_148ec967a(void)

void FUN_148ec967a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9cd530;
  FUN_1446ddc76(&local_38,"SetStandInCameraIdentity",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_38,1);
  *puVar1 = &PTR_FUN_14b9cd530;
  puVar1[7] = *param_2;
  FUN_140391314(param_1,puVar1);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec971a FUN_148ec971a body=193 status=ok
// SIG undefined FUN_148ec971a(void)

void FUN_148ec971a(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  FUN_148eb07bc();
  plVar4 = (longlong *)FUN_140714ba2(param_1);
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar2 + 0x10);
  ReleaseSRWLockShared(SRWLock);
  if ((cVar1 != '\x01') || (*(int *)(param_1 + 0x2f8) == *(int *)(param_1 + 800))) {
    return;
  }
  plVar4 = (longlong *)FUN_140714ba2(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(int *)(lVar2 + 0x60) == *(int *)(param_1 + 800)) {
    if (*(int *)(lVar2 + 100) == 0) {
      iVar3 = 1;
      goto LAB_148ec97a7;
    }
  }
  else {
    iVar3 = *(int *)(lVar2 + 100) + 1;
LAB_148ec97a7:
    *(int *)(lVar2 + 0x60) = *(int *)(param_1 + 800);
    *(int *)(lVar2 + 100) = iVar3;
  }
  if (*(char *)(lVar2 + 8) == '\0') {
    iVar3 = *(int *)(lVar2 + 0xc) + 1;
  }
  else {
    if (*(int *)(lVar2 + 0xc) != 0) goto LAB_148ec97ca;
    iVar3 = 1;
  }
  *(undefined1 *)(lVar2 + 8) = 1;
  *(int *)(lVar2 + 0xc) = iVar3;
LAB_148ec97ca:
                    /* WARNING: Could not recover jumptable at 0x000148ec97d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  return;
}



// FUNCTION 148ec97dc FUN_148ec97dc body=193 status=ok
// SIG undefined FUN_148ec97dc(void)

void FUN_148ec97dc(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  FUN_148eb0958();
  plVar4 = (longlong *)FUN_140714ba2(param_1);
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar2 + 0x10);
  ReleaseSRWLockShared(SRWLock);
  if ((cVar1 != '\x01') || (*(int *)(param_1 + 0x2f8) == *(int *)(param_1 + 800))) {
    return;
  }
  plVar4 = (longlong *)FUN_140714ba2(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + 1;
  if (*(int *)(lVar2 + 0x60) == *(int *)(param_1 + 800)) {
    if (*(int *)(lVar2 + 100) == 0) {
      iVar3 = 1;
      goto LAB_148ec9869;
    }
  }
  else {
    iVar3 = *(int *)(lVar2 + 100) + 1;
LAB_148ec9869:
    *(int *)(lVar2 + 0x60) = *(int *)(param_1 + 800);
    *(int *)(lVar2 + 100) = iVar3;
  }
  if (*(char *)(lVar2 + 8) == '\0') {
    iVar3 = *(int *)(lVar2 + 0xc) + 1;
  }
  else {
    if (*(int *)(lVar2 + 0xc) != 0) goto LAB_148ec988c;
    iVar3 = 1;
  }
  *(undefined1 *)(lVar2 + 8) = 1;
  *(int *)(lVar2 + 0xc) = iVar3;
LAB_148ec988c:
                    /* WARNING: Could not recover jumptable at 0x000148ec9896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa0));
  return;
}



// FUNCTION 148ec989e FUN_148ec989e body=180 status=ok
// SIG undefined FUN_148ec989e(void)

void FUN_148ec989e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x2a8) == '\x01') {
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar2 != 0) {
      lVar2 = FUN_14101baae(lVar2);
      if (lVar2 != 0) {
        lVar3 = FUN_14030d4a0();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (iVar1 = *(int *)(lVar2 + 0xe0), iVar1 != -1)) {
          lVar3 = FUN_140391552(param_1);
          if (lVar3 != 0) {
            puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
            puVar4[1] = 0;
            *(undefined4 *)(puVar4 + 2) = 0;
            puVar4[3] = 0;
            *puVar4 = &PTR_FUN_14b970e70;
            *(int *)(puVar4 + 4) = iVar1;
            *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
            FUN_14113cb0e(lVar2,puVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148ec9952 FUN_148ec9952 body=296 status=ok
// SIG undefined FUN_148ec9952(void)

void FUN_148ec9952(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    cVar1 = FUN_144729dda(param_1 + 0x30);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1 + 0x30);
      local_1d8 = local_1b8;
      local_1c0 = '\0';
      local_1c8 = local_b8;
      local_1d0 = local_1d8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"SkipActivateAnim",&local_1d8);
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
      }
      FUN_1412a486e(uVar2,local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_1c0 == '\x01') {
        FUN_1400020a8(local_1d8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec9a7c FUN_148ec9a7c body=90 status=ok
// SIG undefined FUN_148ec9a7c(void)

undefined8 * FUN_148ec9a7c(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x2e0);
  memset(_Dst,0,0x2e0);
  FUN_140e8cfb8(_Dst);
  *_Dst = &PTR_FUN_14b9d1eb0;
  _Dst[0x56] = 0;
  _Dst[0x57] = 0;
  _Dst[0x58] = 0;
  _Dst[0x59] = 0;
  *(undefined8 *)((longlong)_Dst + 0x2cc) = 0;
  *(undefined8 *)((longlong)_Dst + 0x2d4) = 0;
  return _Dst;
}



// FUNCTION 148ec9ad6 FUN_148ec9ad6 body=832 status=ok
// SIG undefined FUN_148ec9ad6(void)

void FUN_148ec9ad6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  PSRWLOCK local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 *local_88;
  int local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_148ec9e18();
  lVar2 = *plVar4;
  local_a0 = (PSRWLOCK)(lVar2 + 0xa28);
  AcquireSRWLockExclusive(local_a0);
  *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
  *(ushort *)(param_1 + 0x298) =
       (ushort)*(undefined4 *)(param_1 + 0x298) & 0xffdf |
       (ushort)*(byte *)(lVar2 + 0xa19) << 5 ^ 0x20;
  local_a8 = lVar2;
  FUN_148a00e68(lVar2,0,0);
  FUN_14588cd9e(param_1);
  uVar5 = FUN_14001cc68(0x80,0x10);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d3e70;
  local_60 = &LAB_14430ad0c;
  local_88 = &LAB_148edaef8;
  FUN_148ec9e92(uVar5,*(undefined8 *)(param_1 + 0x30),&local_88);
  FUN_140391314(param_1,uVar5);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar7 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar7 = &local_68;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  iVar1 = *(int *)(param_1 + 0x2b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2b0);
    lVar8 = 0;
    do {
      puVar9 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar8) != 0) {
        puVar9 = *(undefined2 **)(lVar2 + lVar8);
      }
      FUN_140002266(&local_88,L"UI.State.%s",puVar9);
      iVar3 = local_80 + -1;
      if (local_80 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(local_98,iVar3,local_88,1);
      FUN_1447683ea(&local_90,local_98,1);
      if (local_88 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      *puVar6 = &PTR_FUN_14b9c13e0;
      FUN_1446ddc76(&local_88,"AddState",1);
      FUN_14039176c(puVar6,*(undefined8 *)(param_1 + 0x30),local_88,1);
      *puVar6 = &PTR_FUN_14b9c13e0;
      puVar6[7] = local_90;
      *(undefined1 *)(puVar6 + 8) = 0;
      FUN_140391314(param_1,puVar6);
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar8);
  }
  lVar2 = local_a8;
  if (*(char *)(local_a8 + 0xa19) == '\0') {
    FUN_148e1e4a6(local_a8);
    *(undefined1 *)(lVar2 + 0xa19) = 1;
  }
  FUN_148ec9f48(param_1);
  FUN_148e1e038(lVar2);
  FUN_1400b22c2(&local_88,"StartFirmwareTransferTutorial");
  FUN_140afad18(param_1,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *puVar6 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_88,"SetVisible",1);
  FUN_14039176c(puVar6,uVar5,local_88,1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
  FUN_140391314(param_1,puVar6);
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *puVar6 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_88,"SetVisible",1);
  FUN_14039176c(puVar6,uVar5,local_88,1);
  *puVar6 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
  FUN_140391314(param_1,puVar6);
  ReleaseSRWLockExclusive(local_a0);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec9e18 FUN_148ec9e18 body=121 status=ok
// SIG undefined FUN_148ec9e18(void)

longlong FUN_148ec9e18(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec9e92 FUN_148ec9e92 body=181 status=ok
// SIG undefined FUN_148ec9e92(void)

undefined8 * FUN_148ec9e92(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9d3e90;
  FUN_1446ddc76(&local_38,"PlayerController",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9d3e90;
  param_1[8] = *param_3;
  param_1[10] = param_3[2];
  param_3[2] = 0;
  uVar1 = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar3 = *(undefined4 *)(param_3 + 5);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar6 = *(undefined4 *)(param_3 + 7);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0xf) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  if (param_1[8] != 0) {
    *param_3 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ec9f48 FUN_148ec9f48 body=271 status=ok
// SIG undefined FUN_148ec9f48(void)

void FUN_148ec9f48(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar1 = &PTR_FUN_14b9d2060;
    FUN_1446ddc76(&local_30,"MenuOpened",1);
    FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar1 = &PTR_FUN_14b9d2060;
    puVar1[7] = *(undefined8 *)(param_1 + 0x18);
    FUN_140391314(param_1,puVar1);
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar1 = &PTR_FUN_14b9c6e60;
    FUN_1446ddc76(&local_30,"InitStandIn",1);
    FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar1 = &PTR_FUN_14b9c6e60;
    puVar1[7] = *(undefined8 *)(param_1 + 0x18);
    puVar1[8] = *(undefined8 *)(param_1 + 0x2d0);
    FUN_140391314(param_1,puVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eca058 FUN_148eca058 body=442 status=ok
// SIG undefined FUN_148eca058(void)

void FUN_148eca058(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (longlong)*(int *)(param_1 + 0x2c8);
  if (local_70 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2c0);
    local_70 = local_70 << 4;
    lVar5 = 0;
    do {
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar5) != 0) {
        puVar6 = *(undefined2 **)(lVar1 + lVar5);
      }
      FUN_140002266(&local_68,L"UI.State.%s",puVar6);
      iVar3 = local_60 + -1;
      if (local_60 == 0) {
        iVar3 = 0;
      }
      FUN_1446f82e2(local_58,iVar3,local_68,1);
      FUN_1447683ea(&local_50,local_58,1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar4 = &PTR_FUN_14b9c1410;
      FUN_1446ddc76(&local_68,"RemoveState",1);
      FUN_14039176c(puVar4,uVar2,local_68,1);
      *puVar4 = &PTR_FUN_14b9c1410;
      puVar4[7] = local_50;
      FUN_140391314(param_1,puVar4);
      lVar5 = lVar5 + 0x10;
    } while (local_70 != lVar5);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c13a0;
  FUN_1446ddc76(&local_68,"ClearStructureredInteractable",1);
  FUN_14039176c(puVar4,uVar2,local_68,1);
  *puVar4 = &PTR_FUN_14b9c13a0;
  FUN_140391314(param_1,puVar4);
  FUN_148eca214(param_1);
  FUN_148eca304(param_1);
  FUN_1459249be(param_1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eca214 FUN_148eca214 body=239 status=ok
// SIG undefined FUN_148eca214(void)

void FUN_148eca214(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14b9c6e30;
  FUN_1446ddc76(&local_30,"DeinitStandIn",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9c6e30;
  puVar1[7] = *(undefined8 *)(param_1 + 0x18);
  FUN_140391314(param_1,puVar1);
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = &PTR_FUN_14b9d2080;
  FUN_1446ddc76(&local_30,"MenuClosed",1);
  FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
  *puVar1 = &PTR_FUN_14b9d2080;
  FUN_140391314(param_1,puVar1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eca304 FUN_148eca304 body=93 status=ok
// SIG undefined FUN_148eca304(void)

void FUN_148eca304(void)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_148ec9e18();
  lVar1 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  *(int *)(lVar1 + 0xa20) = *(int *)(lVar1 + 0xa20) + 1;
  if (*(char *)(lVar1 + 0x9c8) == '\0') {
    if (*(int *)(lVar1 + 0x9cc) != 0) goto LAB_148eca346;
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x9cc) + 1;
  }
  *(undefined1 *)(lVar1 + 0x9c8) = 0;
  *(int *)(lVar1 + 0x9cc) = iVar2;
LAB_148eca346:
                    /* WARNING: Could not recover jumptable at 0x000148eca34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  return;
}



// FUNCTION 148eca362 FUN_148eca362 body=103 status=ok
// SIG undefined FUN_148eca362(void)

void FUN_148eca362(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    cVar3 = FUN_148eca3ca();
    if ((cVar3 != '\0') && (puVar2 = *(ushort **)(lVar1 + 0x80), puVar2 != (ushort *)0x0)) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    cVar3 = FUN_148eca4a6(param_1);
    if ((cVar3 != '\0') && (puVar2 = *(ushort **)(lVar1 + 0x80), puVar2 != (ushort *)0x0)) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 148eca3ca FUN_148eca3ca body=220 status=ok
// SIG undefined FUN_148eca3ca(void)

undefined8 FUN_148eca3ca(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x9f8);
    plVar6 = (longlong *)FUN_148ec9e18();
    lVar3 = *plVar6;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0xa28));
    if (*(int *)(lVar2 + 0xac) != *(int *)(lVar3 + 0xa20)) {
      *(uint *)(param_1 + 0x8c) =
           *(uint *)(param_1 + 0x8c) & 0xfffdffff | (uint)*(byte *)(lVar3 + 0xa18) << 0x11;
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0xa28));
    uVar7 = FUN_148ec9e18(param_1);
    cVar5 = FUN_148e1db16(lVar2,uVar7);
    if (cVar5 != '\0') {
      if (iVar1 != *(int *)(lVar2 + 0x9f8)) {
        FUN_148ecb6d8(param_1,iVar1);
        FUN_148ecb84a(param_1,*(undefined4 *)(lVar2 + 0x9f8));
      }
      puVar4 = *(ushort **)(lVar2 + 0x80);
      if (puVar4 == (ushort *)0x0) {
        return 1;
      }
      *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148eca4a6 FUN_148eca4a6 body=956 status=ok
// SIG undefined FUN_148eca4a6(void)

ulonglong FUN_148eca4a6(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  char cVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong unaff_RBX;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  PSRWLOCK pRVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong *local_90;
  longlong local_88;
  PSRWLOCK local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)FUN_148ecb962();
  plVar5 = (longlong *)*plVar5;
  pRVar16 = (PSRWLOCK)(plVar5 + 4);
  AcquireSRWLockShared(pRVar16);
  iVar14 = *(int *)(param_1 + 0x2d8);
  iVar15 = (int)plVar5[3];
  if (iVar14 == iVar15) goto LAB_148eca4f1;
  *(int *)(param_1 + 0x2d8) = iVar15;
  unaff_RBX = 0;
  local_98 = iVar15;
  if ((longlong)(int)plVar5[1] == 0) {
    uVar8 = 0;
  }
  else {
    lVar18 = *plVar5;
    lVar17 = (longlong)(int)plVar5[1] * 0x40 + lVar18;
    local_94 = iVar14;
    local_90 = plVar5;
    local_88 = param_1;
    local_80 = pRVar16;
    do {
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      FUN_1400b2348(lVar18,&local_78,1);
      puVar3 = local_78;
      uVar8 = (ulonglong)((int)uStack_70 - 1);
      if ((int)uStack_70 == 0) {
        uVar8 = unaff_RBX;
      }
      if (0 < (int)uVar8) {
        uVar9 = 0;
        do {
          local_78[uVar9] = (ushort)((ushort)local_78[uVar9] - 0x41 < 0x1a) * 0x20 + local_78[uVar9]
          ;
          uVar9 = uVar9 + 1;
        } while (uVar8 != uVar9);
      }
      puVar6 = local_78;
      if ((int)uStack_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      lVar10 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)puVar6 + lVar10);
        uVar13 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)L"eridium" + lVar10);
        uVar12 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148eca678;
          }
          iVar14 = uVar13 - uVar12;
          goto LAB_148eca6a4;
        }
        if (uVar1 == 0) break;
LAB_148eca678:
        lVar10 = lVar10 + 2;
      }
      iVar14 = 0;
LAB_148eca6a4:
      if ((puVar3 != (undefined2 *)0x0) && (FUN_1400020a8(), local_78 != (undefined2 *)0x0)) {
        FUN_1400020a8();
      }
      if (iVar14 == 0) {
        if (lVar18 == 0) {
          unaff_RBX = 0;
        }
        else {
          unaff_RBX = *(ulonglong *)(lVar18 + 0x30);
        }
        break;
      }
      lVar18 = lVar18 + 0x40;
    } while (lVar18 != lVar17);
    uVar8 = 0;
    param_1 = local_88;
    pRVar16 = local_80;
    iVar14 = local_94;
    if ((longlong)(int)local_90[1] != 0) {
      lVar18 = *local_90;
      lVar17 = (longlong)(int)local_90[1] * 0x40 + lVar18;
      do {
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        FUN_1400b2348(lVar18,&local_78,1);
        puVar3 = local_78;
        uVar9 = (ulonglong)((int)uStack_70 - 1);
        if ((int)uStack_70 == 0) {
          uVar9 = uVar8;
        }
        if (0 < (int)uVar9) {
          uVar11 = 0;
          do {
            local_78[uVar11] =
                 (ushort)((ushort)local_78[uVar11] - 0x41 < 0x1a) * 0x20 + local_78[uVar11];
            uVar11 = uVar11 + 1;
          } while (uVar9 != uVar11);
        }
        puVar6 = local_78;
        if ((int)uStack_70 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        local_78 = (undefined2 *)0x0;
        uStack_70 = 0;
        lVar10 = 0;
        while( true ) {
          uVar1 = *(ushort *)((longlong)puVar6 + lVar10);
          uVar13 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)&DAT_14ae66bec + lVar10);
          uVar12 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_148eca7d5;
            }
            iVar15 = uVar13 - uVar12;
            goto LAB_148eca801;
          }
          if (uVar1 == 0) break;
LAB_148eca7d5:
          lVar10 = lVar10 + 2;
        }
        iVar15 = 0;
LAB_148eca801:
        if ((puVar3 != (undefined2 *)0x0) && (FUN_1400020a8(), local_78 != (undefined2 *)0x0)) {
          FUN_1400020a8();
        }
        param_1 = local_88;
        pRVar16 = local_80;
        iVar14 = local_94;
        if (iVar15 == 0) {
          if (lVar18 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(ulonglong *)(lVar18 + 0x30);
          }
          break;
        }
        lVar18 = lVar18 + 0x40;
      } while (lVar18 != lVar17);
    }
  }
  iVar15 = local_98;
  plVar5 = (longlong *)FUN_148ec9e18(param_1);
  lVar18 = *plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar18 + 0xa28));
  *(int *)(lVar18 + 0xa20) = *(int *)(lVar18 + 0xa20) + 1;
  *(int *)(lVar18 + 0x8b8) = *(int *)(lVar18 + 0x8b8) + 1;
  FUN_148e1daa6(lVar18 + 0x870,uVar8);
  *(int *)(lVar18 + 0x908) = *(int *)(lVar18 + 0x908) + 1;
  FUN_148e1daa6(lVar18 + 0x8c0,unaff_RBX);
  cVar4 = FUN_148e1db0a(lVar18 + 0x870);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    cVar4 = FUN_148e1db0a(lVar18 + 0x8c0);
  }
  if (cVar4 == *(char *)(lVar18 + 0x9c0)) {
    if (*(int *)(lVar18 + 0x9c4) == 0) {
      iVar7 = 1;
      goto LAB_148eca715;
    }
  }
  else {
    iVar7 = *(int *)(lVar18 + 0x9c4) + 1;
LAB_148eca715:
    *(char *)(lVar18 + 0x9c0) = cVar4;
    *(int *)(lVar18 + 0x9c4) = iVar7;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar18 + 0xa28));
LAB_148eca4f1:
  ReleaseSRWLockShared(pRVar16);
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(unaff_RBX >> 8),iVar14 != iVar15) & 0xffffffff;
}



// FUNCTION 148eca864 FUN_148eca864 body=806 status=ok
// SIG undefined FUN_148eca864(void)

void FUN_148eca864(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140db10ee();
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9d3eb0;
  puVar2[2] = FUN_148ecab8c;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputSelectionChanged",puVar2);
  lVar1 = param_1 + 0x38;
  FUN_1446ddc76(local_50,"OnInputSelectionChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9d3eb0;
  puVar2[2] = FUN_148ecad36;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInputFocusChanged",puVar2);
  FUN_1446ddc76(local_50,"OnInputFocusChanged",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9d3ed0;
  puVar2[2] = FUN_1442ffd14;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnTransferButtonClicked",puVar2);
  FUN_1446ddc76(local_50,"OnTransferButtonClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9d3ed0;
  puVar2[2] = FUN_148eca304;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnHideSuccessBanner",puVar2);
  FUN_1446ddc76(local_50,"OnHideSuccessBanner",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  puVar2 = cohtml::IEventHandler::operator_new(0x20);
  *puVar2 = &PTR_FUN_14b9d3ed0;
  puVar2[2] = FUN_148ecaf66;
  *(undefined4 *)(puVar2 + 3) = 0;
  puVar2[1] = param_1;
  uVar3 = FUN_140db1ba0(param_1,L"OnInspectButtonClicked",puVar2);
  FUN_1446ddc76(local_50,"OnInspectButtonClicked",1);
  uVar4 = local_50._0_4_ & 0xffff;
  puVar2 = (undefined8 *)
           FUN_140db173c(lVar1,(local_50._0_4_ << 0x10 | uVar4) + local_50._4_4_ +
                               (local_50._2_4_ << 0x13 | local_50._2_4_ & 0xffff) + (uVar4 >> 4),
                         local_50);
  *puVar2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecab8c FUN_148ecab8c body=425 status=ok
// SIG undefined FUN_148ecab8c(void)

void FUN_148ecab8c(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_48 = 0;
    uStack_40 = 0;
    bVar11 = true;
    FUN_1400b2348(puVar4);
    iVar3 = (int)param_2[1];
    if (iVar3 == (int)uStack_40) {
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*param_2 + lVar5);
          uVar2 = (uint)uVar6;
          uVar8 = *(ushort *)(local_48 + lVar5);
          uVar9 = (uint)uVar8;
          if (uVar6 != uVar8) {
            if ((uVar8 | uVar6) < 0x80) {
              uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_148ecac29;
            }
            iVar3 = uVar2 - uVar9;
            goto LAB_148ecad2b;
          }
          if (uVar6 == 0) break;
LAB_148ecac29:
          lVar5 = lVar5 + 2;
        }
        iVar3 = 0;
LAB_148ecad2b:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = (int)uStack_40 + iVar3 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      iVar3 = (int)param_3[1];
      if (iVar3 == DAT_14cbe2968) {
        if (1 < iVar3) {
          lVar5 = 0;
          while( true ) {
            uVar6 = *(ushort *)(*param_3 + lVar5);
            uVar7 = (ulonglong)uVar6;
            uVar8 = *(ushort *)(DAT_14cbe2960 + lVar5);
            if (uVar6 != uVar8) break;
            if (uVar6 == 0) goto LAB_148ecace1;
LAB_148ecacac:
            lVar5 = lVar5 + 2;
          }
          if ((uVar8 | uVar6) < 0x80) {
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_148ecacac;
          }
          if (uVar6 != uVar8) goto LAB_148ecaceb;
        }
      }
      else if (DAT_14cbe2968 + iVar3 != 1) goto LAB_148ecaceb;
LAB_148ecace1:
      FUN_148ecb9da(param_1,param_4);
    }
  }
LAB_148ecaceb:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecad36 FUN_148ecad36 body=558 status=ok
// SIG undefined FUN_148ecad36(void)

void FUN_148ecad36(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_48 = 0;
    uStack_40 = 0;
    bVar11 = true;
    FUN_1400b2348(puVar4);
    iVar3 = (int)param_2[1];
    if (iVar3 == (int)uStack_40) {
      if (1 < iVar3) {
        lVar5 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar5);
          uVar2 = (uint)uVar7;
          uVar10 = *(ushort *)(local_48 + lVar5);
          uVar8 = (uint)uVar10;
          if (uVar7 != uVar10) {
            if ((uVar10 | uVar7) < 0x80) {
              uVar2 = (uint)(byte)(&DAT_149e05da0)[uVar7];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_148ecadd3;
            }
            iVar3 = uVar2 - uVar8;
            goto LAB_148ecaf40;
          }
          if (uVar7 == 0) break;
LAB_148ecadd3:
          lVar5 = lVar5 + 2;
        }
        iVar3 = 0;
LAB_148ecaf40:
        bVar11 = iVar3 == 0;
      }
    }
    else {
      bVar11 = (int)uStack_40 + iVar3 == 1;
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      iVar3 = (int)param_3[1];
      if (iVar3 == DAT_14cbe2968) {
        if (1 < iVar3) {
          lVar5 = 0;
          while( true ) {
            uVar7 = *(ushort *)(*param_3 + lVar5);
            uVar6 = (ulonglong)uVar7;
            uVar10 = *(ushort *)(DAT_14cbe2960 + lVar5);
            if (uVar7 != uVar10) break;
            if (uVar7 == 0) goto LAB_148ecae86;
LAB_148ecae5b:
            lVar5 = lVar5 + 2;
          }
          if ((uVar10 | uVar7) < 0x80) {
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar9 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ecae5b;
          }
          if (uVar7 != uVar10) goto LAB_148ecaed5;
        }
      }
      else if (DAT_14cbe2968 + iVar3 != 1) {
LAB_148ecaed5:
        if (iVar3 == DAT_14cbe2978) {
          if (1 < iVar3) {
            lVar5 = 0;
            while( true ) {
              uVar7 = *(ushort *)(*param_3 + lVar5);
              uVar6 = (ulonglong)uVar7;
              uVar10 = *(ushort *)(DAT_14cbe2970 + lVar5);
              if (uVar7 != uVar10) break;
              if (uVar7 == 0) goto LAB_148ecaf56;
LAB_148ecaf0c:
              lVar5 = lVar5 + 2;
            }
            if ((uVar10 | uVar7) < 0x80) {
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar9]) goto LAB_148ecaf0c;
            }
            if (uVar7 != uVar10) goto LAB_148ecae90;
          }
        }
        else if (DAT_14cbe2978 + iVar3 != 1) goto LAB_148ecae90;
LAB_148ecaf56:
        FUN_148ecbcfa(param_1,param_4);
        goto LAB_148ecae90;
      }
LAB_148ecae86:
      FUN_148ecba90(param_1,param_4);
    }
  }
LAB_148ecae90:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecaf66 FUN_148ecaf66 body=204 status=ok
// SIG undefined FUN_148ecaf66(void)

void FUN_148ecaf66(longlong param_1)

{
  PSRWLOCK SRWLock;
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_148ec9e18();
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa28);
  AcquireSRWLockShared(SRWLock);
  cVar1 = *(char *)(lVar2 + 0x9c8);
  ReleaseSRWLockShared(SRWLock);
  if (cVar1 == '\x01') {
    puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar4 = &PTR_FUN_14b9c13e0;
    FUN_1446ddc76(&local_30,"AddState",1);
    FUN_14039176c(puVar4,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar4 = &PTR_FUN_14b9c13e0;
    puVar4[7] = DAT_14cbd9610;
    *(undefined1 *)(puVar4 + 8) = 0;
    FUN_140391314(param_1,puVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecb034 FUN_148ecb034 body=935 status=ok
// SIG undefined FUN_148ecb034(void)

/* WARNING: Removing unreachable block (ram,0x000148ecb1ba) */
/* WARNING: Removing unreachable block (ram,0x000148ecb2dc) */

void FUN_148ecb034(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined ***pppuVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined1 local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1407cbc56();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe29d8);
  }
  if (*plVar5 == 0) {
    puVar6 = &DAT_14c9a12e0;
  }
  else {
    puVar6 = (undefined4 *)FUN_140625092(*plVar5,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar6,&local_88,1);
  *(undefined1 **)(param_1 + 0x2d0) = local_88;
  plVar5 = (longlong *)(param_1 + 0x2b0);
  iVar1 = *(int *)(param_1 + 700);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b8));
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 700) != 0)) {
    FUN_1408be2c4(plVar5,0);
  }
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar7 = &DAT_14c9a1308;
  }
  else {
    puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe1158);
  }
  plVar8 = (longlong *)FUN_1407cbaec(puVar7);
  if ((longlong)(int)plVar8[2] != 0) {
    lVar10 = *plVar8;
    lVar11 = (longlong)(int)plVar8[2] << 4;
    do {
      cVar3 = FUN_144a8220c(lVar10);
      if ((cVar3 != '\0') && (cVar3 = FUN_144a8ab0e(lVar10), cVar3 != '\0')) {
        FUN_144a7cdd6(lVar10,0);
        FUN_1400b22c2(&local_88);
        iVar1 = *(int *)(param_1 + 0x2b8);
        uVar4 = iVar1 + 1;
        *(uint *)(param_1 + 0x2b8) = uVar4;
        if (*(uint *)(param_1 + 700) < uVar4) {
          FUN_1447a1bd6(plVar5);
        }
        lVar2 = *plVar5;
        lVar12 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar12) = 0;
        *(undefined1 **)(lVar2 + lVar12) = local_88;
        local_88 = (undefined1 *)0x0;
        *(undefined4 *)(lVar2 + 8 + lVar12) = (undefined4)local_80;
        *(undefined4 *)(lVar2 + 0xc + lVar12) = local_80._4_4_;
        local_80 = 0;
      }
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  plVar5 = (longlong *)(param_1 + 0x2c0);
  iVar1 = *(int *)(param_1 + 0x2cc);
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c8));
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x2cc) != 0)) {
    FUN_1408be2c4(plVar5,0);
  }
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar7 = &DAT_14c9a1308;
  }
  else {
    puVar7 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe1160);
  }
  plVar8 = (longlong *)FUN_1407cbaec(puVar7);
  if ((longlong)(int)plVar8[2] != 0) {
    lVar10 = *plVar8;
    lVar11 = (longlong)(int)plVar8[2] << 4;
    do {
      cVar3 = FUN_144a8220c(lVar10);
      if ((cVar3 != '\0') && (cVar3 = FUN_144a8ab0e(lVar10), cVar3 != '\0')) {
        FUN_144a7cdd6(lVar10,0);
        FUN_1400b22c2(&local_88);
        iVar1 = *(int *)(param_1 + 0x2c8);
        uVar4 = iVar1 + 1;
        *(uint *)(param_1 + 0x2c8) = uVar4;
        if (*(uint *)(param_1 + 0x2cc) < uVar4) {
          FUN_1447a1bd6(plVar5);
        }
        lVar2 = *plVar5;
        lVar12 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar2 + lVar12) = 0;
        *(undefined1 **)(lVar2 + lVar12) = local_88;
        local_88 = (undefined1 *)0x0;
        *(undefined4 *)(lVar2 + 8 + lVar12) = (undefined4)local_80;
        *(undefined4 *)(lVar2 + 0xc + lVar12) = local_80._4_4_;
        local_80 = 0;
      }
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar5 = &DAT_14c9a1308;
  }
  else {
    plVar5 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe29e0);
  }
  if (*plVar5 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = FUN_14000584e(*plVar5,0);
  }
  puVar7 = (undefined8 *)FUN_148ec9e18(param_1);
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b9d3ef0;
  local_88 = &LAB_14430ad12;
  FUN_148ecb3dc(*puVar7,&local_88);
  if (local_88 != (undefined1 *)0x0) {
    pppuVar9 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar9 = &local_68;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecb3dc FUN_148ecb3dc body=113 status=ok
// SIG undefined FUN_148ecb3dc(void)

void FUN_148ecb3dc(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xa28));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    cVar2 = (*pcVar1)(uVar3,param_1);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0xa20) = *(int *)(param_1 + 0xa20) + 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000148ecb43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xa28));
    return;
  }
  return;
}



// FUNCTION 148ecb44e FUN_148ecb44e body=133 status=ok
// SIG undefined FUN_148ecb44e(void)

void FUN_148ecb44e(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  
  plVar3 = (longlong *)FUN_148ec9e18();
  lVar2 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa28));
  *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
  FUN_148e1e4a6(lVar2);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa28));
  plVar3 = (longlong *)FUN_148ec9e18(param_1);
  lVar2 = *plVar3;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa28);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(lVar2 + 0x9f8);
  ReleaseSRWLockShared(SRWLock);
  if (iVar1 - 1U < 2) {
    return;
  }
  FUN_1458343da(param_1);
  return;
}



// FUNCTION 148ecb4d4 FUN_148ecb4d4 body=231 status=ok
// SIG undefined FUN_148ecb4d4(void)

void FUN_148ecb4d4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_1442ffd14;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecb5bc(param_1,param_2,&DAT_14cb92b28,param_1);
      local_38 = FUN_1443003b2;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecb5bc(param_1,param_2,&DAT_14cb92b30,param_1);
      local_38 = FUN_148ecaf66;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecb5bc(param_1,param_2,&DAT_14cb92b08,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecb5bc FUN_148ecb5bc body=282 status=ok
// SIG undefined FUN_148ecb5bc(void)

void FUN_148ecb5bc(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14430ad8a(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecb6d8 FUN_148ecb6d8 body=368 status=ok
// SIG undefined FUN_148ecb6d8(void)

void FUN_148ecb6d8(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 2) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar3,uVar1,local_38,1);
    *puVar3 = &PTR_FUN_14b9c1410;
    puVar3[7] = DAT_14cbd9570;
    lVar5 = 0x3be;
    lVar6 = 0x588;
  }
  else {
    if (param_2 != 1) goto LAB_148ecb703;
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c1410;
    FUN_1446ddc76(&local_38,"RemoveState",1);
    FUN_14039176c(puVar3,uVar1,local_38,1);
    *puVar3 = &PTR_FUN_14b9c1410;
    puVar3[7] = DAT_14cbd9568;
    lVar5 = 0x14e;
    lVar6 = 0x318;
  }
  FUN_140391314(param_1,puVar3);
  plVar4 = (longlong *)FUN_148ec9e18(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa28));
  *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
  *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + 1;
  *(byte *)(lVar2 + lVar5) = *(byte *)(lVar2 + lVar5) & 0xfd;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa28));
  FUN_140de1078(param_1,&DAT_14cbe1528,0,0);
LAB_148ecb703:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecb84a FUN_148ecb84a body=279 status=ok
// SIG undefined FUN_148ecb84a(void)

void FUN_148ecb84a(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 2) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar1 = &PTR_FUN_14b9c13e0;
    FUN_1446ddc76(&local_30,"AddState",1);
    FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar1 = &PTR_FUN_14b9c13e0;
    uVar2 = DAT_14cbd9570;
  }
  else {
    if (param_2 != 1) goto LAB_148ecb941;
    puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
    *puVar1 = &PTR_FUN_14b9c13e0;
    FUN_1446ddc76(&local_30,"AddState",1);
    FUN_14039176c(puVar1,*(undefined8 *)(param_1 + 0x30),local_30,1);
    *puVar1 = &PTR_FUN_14b9c13e0;
    uVar2 = DAT_14cbd9568;
  }
  puVar1[7] = uVar2;
  *(undefined1 *)(puVar1 + 8) = 0;
  FUN_140391314(param_1,puVar1);
  FUN_140de1078(param_1,&DAT_14cbe1518,0,0);
LAB_148ecb941:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecb962 FUN_148ecb962 body=118 status=ok
// SIG undefined FUN_148ecb962(void)

longlong FUN_148ecb962(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecb9da FUN_148ecb9da body=181 status=ok
// SIG undefined FUN_148ecb9da(void)

void FUN_148ecb9da(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 1) {
    puVar1 = (undefined8 *)FUN_148ec9e18();
    uVar2 = *puVar1;
    local_38[0] = &PTR_LAB_14b9d3fa0;
    local_58[0] = &LAB_14430ae56;
  }
  else {
    if (param_2 != 0) goto LAB_148ecb9f7;
    puVar1 = (undefined8 *)FUN_148ec9e18();
    uVar2 = *puVar1;
    local_38[0] = &PTR_LAB_14b9d3f80;
    local_58[0] = &LAB_14430ae0e;
  }
  local_48 = (undefined ***)0x0;
  FUN_148ecb3dc(uVar2,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar3 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar3 = local_38;
    }
    (*(code *)(*pppuVar3)[2])();
  }
LAB_148ecb9f7:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecba90 FUN_148ecba90 body=617 status=ok
// SIG undefined FUN_148ecba90(void)

void FUN_148ecba90(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 *local_a0;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar5 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar2 = (longlong *)FUN_148ec9e18();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  *(int *)(lVar1 + 0xa20) = *(int *)(lVar1 + 0xa20) + 1;
  local_90 = uVar5;
  switch(param_2) {
  case 0:
    puVar3 = (undefined8 *)FUN_14001cc68(0x148,0x10);
    local_a0 = &local_68;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
    local_58 = DAT_14c8464f0;
    local_a8 = *(undefined4 *)(lVar1 + 0x304);
    uVar6 = *(undefined8 *)(lVar1 + 0x30c);
    goto LAB_148ecbcd8;
  case 1:
    puVar3 = (undefined8 *)FUN_14001cc68(0x148,0x10);
    local_a0 = &local_88;
    local_88 = (undefined4)DAT_14c8464e0;
    uStack_84 = DAT_14c8464e0._4_4_;
    uStack_80 = (undefined4)DAT_14c8464e8;
    uStack_7c = DAT_14c8464e8._4_4_;
    local_78 = DAT_14c8464f0;
    local_a8 = *(undefined4 *)(lVar1 + 0x574);
    uVar6 = *(undefined8 *)(lVar1 + 0x57c);
LAB_148ecbcd8:
    FUN_14664e342(puVar3,*(undefined8 *)(param_1 + 0x30),0,uVar6);
    uVar4 = 5;
    break;
  case 2:
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9d2020;
    uVar4 = 1;
    FUN_1446ddc76(&local_50,"SetFirmwareTransferOutputAsItem",1);
    FUN_14039176c(puVar3,uVar6,local_50,1);
    *puVar3 = &PTR_FUN_14b9d2020;
    break;
  case 0xffffffff:
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(&local_50,"SetVisible",1);
    FUN_14039176c(puVar3,uVar6,local_50,1);
    *puVar3 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar3 + 7) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
    uVar4 = 0;
    break;
  default:
    uVar4 = 0;
    goto LAB_148ecbbb9;
  }
  FUN_140391314(param_1,puVar3);
LAB_148ecbbb9:
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_50,"SetGlyphs",1);
  FUN_14039176c(puVar3,uVar6,local_50,1);
  *puVar3 = &PTR_FUN_14b9c7290;
  *(undefined4 *)(puVar3 + 7) = uVar4;
  FUN_140391314(param_1,puVar3);
  FUN_148e1e24a(lVar1,local_90);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecbcfa FUN_148ecbcfa body=358 status=ok
// SIG undefined FUN_148ecbcfa(void)

void FUN_148ecbcfa(undefined8 param_1,int param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [20];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 2) {
    plVar4 = (longlong *)FUN_148ec9e18(param_1);
    lVar1 = *plVar4;
    SRWLock = (PSRWLOCK)(lVar1 + 0xa28);
    AcquireSRWLockShared(SRWLock);
    param_2 = (*(byte *)(lVar1 + 0x9e0) ^ 1) * 2;
    ReleaseSRWLockShared(SRWLock);
  }
  plVar4 = (longlong *)FUN_148ecbe62(param_1);
  lVar1 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x1c0));
  plVar4 = (longlong *)FUN_148ec9e18(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa28));
  *(int *)(lVar2 + 0xa20) = *(int *)(lVar2 + 0xa20) + 1;
  FUN_148e1e016(lVar2,&local_44,param_2);
  if ((longlong)*(int *)(lVar1 + 0x88) != 0) {
    lVar7 = *(longlong *)(lVar1 + 0x80);
    lVar6 = (longlong)*(int *)(lVar1 + 0x88) * 0x430;
    do {
      if (*(int *)(lVar7 + 8) == local_44) {
        if (lVar7 != 0) {
          lVar6 = FUN_148e1d1b6(lVar7,4);
          cVar3 = FUN_1413536d2(lVar7);
          if ((cVar3 != '\0') && (lVar6 != 0)) {
            FUN_14135375c(lVar7,local_58);
            uVar5 = FUN_148e1b48e(lVar1,local_58);
            FUN_148e1e31c(lVar2,uVar5);
            goto LAB_148ecbddb;
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x430;
      lVar6 = lVar6 + -0x430;
    } while (lVar6 != 0);
  }
  FUN_148e1e352(lVar2,0);
LAB_148ecbddb:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xa28));
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x1c0));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecbe62 FUN_148ecbe62 body=121 status=ok
// SIG undefined FUN_148ecbe62(void)

longlong FUN_148ecbe62(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecbedc FUN_148ecbedc body=257 status=ok
// SIG undefined FUN_148ecbedc(void)

undefined8
FUN_148ecbedc(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14598e1ac(&local_58,4);
  FUN_148edb8be(&local_58,param_3);
  FUN_148259968(&local_58,L"item_name",param_4);
  FUN_148259968(&local_58,L"cash_cost",param_5);
  FUN_148edbaa6(&local_58,param_6);
  FUN_14582acda(param_1,param_2,&local_58);
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecbfde FUN_148ecbfde body=386 status=ok
// SIG undefined FUN_148ecbfde(void)

longlong * FUN_148ecbfde(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148ecc0ef:
    *puVar5 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3fc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ecc0ef;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d3fc0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ecc160 FUN_148ecc160 body=83 status=ok
// SIG undefined FUN_148ecc160(void)

undefined8 * FUN_148ecc160(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x380);
  memset(_Dst,0,0x380);
  FUN_1457bb3a4(_Dst);
  *_Dst = &PTR_FUN_14b9d20d0;
  _Dst[0x6c] = 0;
  _Dst[0x6d] = 0;
  *(undefined8 *)((longlong)_Dst + 0x36c) = 0;
  *(undefined8 *)((longlong)_Dst + 0x374) = 0;
  return _Dst;
}



// FUNCTION 148ecc1b4 FUN_148ecc1b4 body=71 status=ok
// SIG undefined FUN_148ecc1b4(void)

void FUN_148ecc1b4(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_148ecc1fc();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  *(int *)(lVar1 + 0xa20) = *(int *)(lVar1 + 0xa20) + 1;
  *(undefined1 *)(lVar1 + 0xa18) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  FUN_148e82344(param_1);
  return;
}



// FUNCTION 148ecc1fc FUN_148ecc1fc body=121 status=ok
// SIG undefined FUN_148ecc1fc(void)

longlong FUN_148ecc1fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x610;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecc276 FUN_148ecc276 body=71 status=ok
// SIG undefined FUN_148ecc276(void)

void FUN_148ecc276(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_148ecc1fc();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  *(int *)(lVar1 + 0xa20) = *(int *)(lVar1 + 0xa20) + 1;
  *(undefined1 *)(lVar1 + 0xa18) = 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  FUN_148e82806(param_1);
  return;
}



// FUNCTION 148ecc2be FUN_148ecc2be body=790 status=ok
// SIG undefined FUN_148ecc2be(void)

void FUN_148ecc2be(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  longlong *plVar12;
  code *pcVar13;
  undefined ***pppuVar14;
  longlong lVar15;
  PSRWLOCK pRVar16;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined ***local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined **local_98;
  void *pvStack_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined ***local_68;
  undefined8 uStack_60;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar9 = FUN_148e829b8();
  bVar10 = FUN_148e82c06(param_1);
  bVar11 = FUN_148ecc5d6(param_1);
  lVar2 = *(longlong *)(param_1 + 0x288);
  if ((byte)(bVar10 | bVar9 | bVar11) == 1 && lVar2 != 0) {
    FUN_14431989c(lVar2);
    *(byte *)(lVar2 + 0x331) = *(byte *)(lVar2 + 0x331) | 2;
    *(undefined1 *)(lVar2 + 0x398) = 1;
    plVar12 = (longlong *)FUN_148ecc1fc(param_1);
    lVar3 = *plVar12;
    pRVar16 = (PSRWLOCK)(lVar3 + 0xa28);
    AcquireSRWLockShared(pRVar16);
    iVar1 = *(int *)(lVar3 + 0x9f8);
    ReleaseSRWLockShared(pRVar16);
    if (iVar1 == 2) {
      plVar12 = (longlong *)FUN_148ecc1fc(param_1);
      lVar3 = *plVar12;
      pRVar16 = (PSRWLOCK)(lVar3 + 0xa28);
      AcquireSRWLockShared(pRVar16);
      local_c8 = (void *)0x0;
      uStack_c0._0_4_ = *(int *)(lVar3 + 0x1b0);
      lVar15 = (longlong)(int)uStack_c0;
      pvVar4 = *(void **)(lVar3 + 0x1a8);
      if (lVar15 == 0) {
        uStack_c0._4_4_ = 0;
        uStack_c0._0_4_ = 0;
        local_c8 = (void *)0x0;
      }
      else {
        FUN_1446dd670(&local_c8,(int)uStack_c0,0);
        memcpy(local_c8,pvVar4,lVar15 * 2);
      }
      local_98 = &PTR_FUN_14b9d4050;
      pcVar13 = FUN_14430b0a2;
      pvStack_90 = local_c8;
      local_88 = (int)uStack_c0;
      uStack_84 = uStack_c0._4_4_;
    }
    else {
      if (iVar1 != 1) goto LAB_148ecc317;
      plVar12 = (longlong *)FUN_148ecc1fc(param_1);
      lVar3 = *plVar12;
      pRVar16 = (PSRWLOCK)(lVar3 + 0xa28);
      AcquireSRWLockShared(pRVar16);
      local_c8 = (void *)0x0;
      uStack_c0._0_4_ = *(int *)(lVar3 + 0x420);
      lVar15 = (longlong)(int)uStack_c0;
      pvVar4 = *(void **)(lVar3 + 0x418);
      if (lVar15 == 0) {
        uStack_c0._4_4_ = 0;
        uStack_c0._0_4_ = 0;
        local_c8 = (void *)0x0;
      }
      else {
        FUN_1446dd670(&local_c8,(int)uStack_c0,0);
        memcpy(local_c8,pvVar4,lVar15 * 2);
      }
      local_98 = &PTR_FUN_14b9d4030;
      pcVar13 = FUN_14430ae9e;
      pvStack_90 = local_c8;
      local_88 = (int)uStack_c0;
      uStack_84 = uStack_c0._4_4_;
    }
    uStack_c0 = 0;
    local_c8 = (void *)0x0;
    local_b8 = *(longlong *)(lVar2 + 0xb10);
    uStack_70 = *(undefined8 *)(lVar2 + 0xb18);
    local_a8 = *(undefined ****)(lVar2 + 0xb20);
    uStack_60 = *(undefined8 *)(lVar2 + 0xb28);
    local_58 = *(undefined ***)(lVar2 + 0xb30);
    uStack_50 = *(undefined8 *)(lVar2 + 0xb38);
    local_48 = *(undefined8 *)(lVar2 + 0xb40);
    uStack_40 = *(undefined8 *)(lVar2 + 0xb48);
    uVar7 = local_48;
    uVar8 = uStack_40;
    local_68 = local_a8;
    uVar6 = uStack_60;
    local_78 = local_b8;
    uVar5 = uStack_70;
    *(int *)(lVar2 + 0xb40) = local_88;
    *(undefined4 *)(lVar2 + 0xb44) = uStack_84;
    *(ulonglong *)(lVar2 + 0xb48) = CONCAT44(uStack_7c,uStack_80);
    *(undefined ***)(lVar2 + 0xb30) = local_98;
    *(void **)(lVar2 + 0xb38) = pvStack_90;
    *(undefined8 *)(lVar2 + 0xb20) = 0;
    *(ulonglong *)(lVar2 + 0xb28) = CONCAT44(uStack_9c,uStack_a0);
    *(code **)(lVar2 + 0xb10) = pcVar13;
    *(ulonglong *)(lVar2 + 0xb18) = CONCAT44(uStack_ac,uStack_b0);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    pvStack_90 = (void *)uStack_50;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_70 = uVar5;
    uStack_60 = uVar6;
    local_48 = uVar7;
    uStack_40 = uVar8;
    if (local_b8 != 0) {
      pppuVar14 = local_a8;
      if (local_a8 == (undefined ***)0x0) {
        pppuVar14 = &local_98;
      }
      (*(code *)(*pppuVar14)[2])();
      if (local_c8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    ReleaseSRWLockShared(pRVar16);
  }
LAB_148ecc317:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecc5d6 FUN_148ecc5d6 body=696 status=ok
// SIG undefined FUN_148ecc5d6(void)

undefined8 FUN_148ecc5d6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  void *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_148ecc1fc();
  lVar2 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xa28));
  if ((*(int *)(lVar2 + 0x9f8) != 0) && (*(int *)(param_1 + 0x360) != *(int *)(lVar2 + 0xa20))) {
    *(int *)(param_1 + 0x360) = *(int *)(lVar2 + 0xa20);
    lVar3 = *(longlong *)(param_1 + 0x288);
    if (lVar3 != 0) {
      if (*(int *)(param_1 + 0x2f0) != *(int *)(lVar2 + 0xa10)) {
        FUN_144a787a6(param_1 + 0x2e0,lVar2 + 0xa00);
        *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(lVar2 + 0xa10);
        *(undefined1 *)(param_1 + 0x35a) = 1;
      }
      plVar4 = (longlong *)(lVar3 + 0xad8);
      iVar1 = *(int *)(lVar3 + 0xae4);
      FUN_1457fcfbf(*(undefined8 *)(lVar3 + 0xad8),*(undefined4 *)(lVar3 + 0xae0));
      *(undefined4 *)(lVar3 + 0xae0) = 0;
      if ((iVar1 < 0) && (*(int *)(lVar3 + 0xae4) != 0)) {
        FUN_148e9a6b4(plVar4,0);
      }
      uVar6 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      if (*(int *)(lVar2 + 0x9f8) == 2) {
        local_58 = *(undefined4 *)(lVar2 + 0x304);
        local_50 = (void *)0x0;
        iVar1 = *(int *)(lVar2 + 0x1b0);
        _Src = *(void **)(lVar2 + 0x1a8);
        local_60 = param_1;
        local_48._0_4_ = iVar1;
        if ((longlong)iVar1 == 0) {
          local_48._4_4_ = 0;
        }
        else {
          FUN_1446dd670(&local_50,iVar1,0);
          memcpy(local_50,_Src,(longlong)iVar1 * 2);
        }
        puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
        *puVar5 = &PTR_FUN_14b9d4090;
        puVar5[1] = local_60;
        *(undefined4 *)(puVar5 + 2) = local_58;
        puVar5[3] = local_50;
        local_50 = (void *)0x0;
        *(int *)(puVar5 + 4) = (int)local_48;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_48._4_4_;
        local_48 = 0;
        pcVar7 = FUN_14430b2d0;
        if (puVar5 + 1 == (longlong *)0x0) {
          pcVar7 = (code *)0x0;
        }
        iVar1 = *(int *)(lVar3 + 0xae0);
        *(uint *)(lVar3 + 0xae0) = iVar1 + 1U;
        if (*(uint *)(lVar3 + 0xae4) < iVar1 + 1U) {
          FUN_1457fc94e(plVar4,iVar1);
        }
        lVar3 = *plVar4;
        *(code **)(lVar3 + (longlong)iVar1 * 0x40) = pcVar7;
        *(undefined8 **)(lVar3 + 0x10 + (longlong)iVar1 * 0x40) = puVar5;
        if (local_50 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (*(int *)(lVar2 + 0x9f8) == 1) {
        iVar1 = *(int *)(lVar3 + 0xae0);
        *(uint *)(lVar3 + 0xae0) = iVar1 + 1U;
        if (*(uint *)(lVar3 + 0xae4) < iVar1 + 1U) {
          FUN_1457fc94e(plVar4,iVar1);
        }
        lVar3 = *plVar4;
        lVar8 = (longlong)iVar1 * 0x40;
        *(undefined1 **)(lVar3 + lVar8) = &LAB_148edbff6;
        *(undefined8 *)(lVar3 + 0x10 + lVar8) = 0;
        *(undefined ***)(lVar3 + 0x20 + lVar8) = &PTR_LAB_14b9d4070;
        *(code **)(lVar3 + 0x28 + lVar8) = FUN_14430b248;
      }
      goto LAB_148ecc63e;
    }
  }
  uVar6 = 0;
LAB_148ecc63e:
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xa28));
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecc890 FUN_148ecc890 body=376 status=ok
// SIG undefined FUN_148ecc890(void)

void FUN_148ecc890(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457fc042();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar1 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe29c0);
  }
  if (*plVar1 == 0) {
    puVar2 = &DAT_14c9a12e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_140625092(*plVar1,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar2,&local_20,1);
  *(undefined8 *)(param_1 + 0x364) = local_20;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar1 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe29c8);
  }
  if (*plVar1 == 0) {
    puVar2 = &DAT_14c9a12e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_140625092(*plVar1,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar2,&local_20,1);
  *(undefined8 *)(param_1 + 0x36c) = local_20;
  if (*(longlong *)(param_1 + 0x160) == 0) {
    plVar1 = &DAT_14c9a1308;
  }
  else {
    plVar1 = (longlong *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbe29d0);
  }
  if (*plVar1 == 0) {
    puVar2 = &DAT_14c9a12e0;
  }
  else {
    puVar2 = (undefined4 *)FUN_140625092(*plVar1,&DAT_14c9a12e0);
  }
  FUN_1447325ac(puVar2,&local_20,1);
  *(undefined8 *)(param_1 + 0x374) = local_20;
  *(undefined4 *)(param_1 + 0x360) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecca0a FUN_148ecca0a body=412 status=ok
// SIG undefined FUN_148ecca0a(void)

void FUN_148ecca0a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1442c9108();
  plVar4 = (longlong *)FUN_148ecc1fc(param_1);
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  *(int *)(lVar1 + 0xa20) = *(int *)(lVar1 + 0xa20) + 1;
  *(int *)(lVar1 + 0x318) = *(int *)(lVar1 + 0x318) + 1;
  *(byte *)(lVar1 + 0x14e) = *(byte *)(lVar1 + 0x14e) & 0xfd;
  *(int *)(lVar1 + 0x588) = *(int *)(lVar1 + 0x588) + 1;
  *(byte *)(lVar1 + 0x3be) = *(byte *)(lVar1 + 0x3be) & 0xfd;
  *(int *)(lVar1 + 0x7f8) = *(int *)(lVar1 + 0x7f8) + 1;
  *(byte *)(lVar1 + 0x62e) = *(byte *)(lVar1 + 0x62e) & 0xfd;
  if (*(int *)(lVar1 + 0x9f8) == 0) {
    if (*(int *)(lVar1 + 0x9fc) != 0) goto LAB_148ecca9e;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar1 + 0x9fc) + 1;
  }
  *(undefined4 *)(lVar1 + 0x9f8) = 0;
  *(int *)(lVar1 + 0x9fc) = iVar3;
LAB_148ecca9e:
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar5 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_50,"SetVisible",1);
  FUN_14039176c(puVar5,uVar2,local_50,1);
  *puVar5 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  FUN_140391314(param_1,puVar5);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar5 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_50,"SetVisible",1);
  FUN_14039176c(puVar5,uVar2,local_50,1);
  *puVar5 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 1;
  FUN_140391314(param_1,puVar5);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0xa28));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eccba8 FUN_148eccba8 body=765 status=ok
// SIG undefined FUN_148eccba8(void)

void FUN_148eccba8(longlong param_1)

{
  PSRWLOCK pRVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)FUN_148ecc1fc();
  lVar6 = *plVar5;
  pRVar1 = (PSRWLOCK)(lVar6 + 0xa28);
  AcquireSRWLockShared(pRVar1);
  iVar2 = *(int *)(lVar6 + 0x9f8);
  ReleaseSRWLockShared(pRVar1);
  lVar6 = FUN_148e8413e(param_1);
  if (lVar6 == 0) goto LAB_148ecccf1;
  if (iVar2 == 2) {
    plVar5 = (longlong *)FUN_148ecc1fc(param_1);
    lVar4 = *plVar5;
    pRVar1 = (PSRWLOCK)(lVar4 + 0xa28);
    AcquireSRWLockShared(pRVar1);
    iVar2 = *(int *)(lVar6 + 0x100);
    iVar3 = *(int *)(lVar4 + 0x1b0);
    if (iVar2 == iVar3) {
      if (1 < iVar2) {
        lVar9 = 0;
        while( true ) {
          uVar12 = *(ushort *)(*(longlong *)(lVar6 + 0xf8) + lVar9);
          uVar13 = (ulonglong)uVar12;
          uVar10 = *(ushort *)(*(longlong *)(lVar4 + 0x1a8) + lVar9);
          if (uVar12 != uVar10) {
            if ((uVar10 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar11]) goto LAB_148eccdc0;
            }
            ReleaseSRWLockShared(pRVar1);
            if (uVar12 == uVar10) goto LAB_148ecce5f;
            goto LAB_148ecce25;
          }
          if (uVar12 == 0) break;
LAB_148eccdc0:
          lVar9 = lVar9 + 2;
        }
      }
      ReleaseSRWLockShared(pRVar1);
    }
    else {
      ReleaseSRWLockShared(pRVar1);
      if (iVar3 + iVar2 != 1) {
LAB_148ecce25:
        uVar8 = FUN_14001cc68(0x2a0,0x10);
        FUN_148eccf4e(uVar8,*(undefined8 *)(param_1 + 0x30),lVar6);
        goto LAB_148ecce46;
      }
    }
LAB_148ecce5f:
    FUN_140de1078(param_1,&DAT_14cbe15d8,0,0);
LAB_148ecce7b:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if (iVar2 == 1) {
    if ((*(byte *)(lVar6 + 0x9f) & 0x10) != 0) {
      FUN_140de1078(param_1,&DAT_14cbe15d8,0,0);
      goto LAB_148ecce7b;
    }
    if ((*(byte *)(lVar6 + 0x9c) & 0x20) != 0) {
      FUN_140de1078(param_1,&DAT_14cbe15d8,0,0);
      goto LAB_148ecce7b;
    }
    uVar8 = FUN_14001cc68(0x2a0,0x10);
    FUN_148eccec0(uVar8,*(undefined8 *)(param_1 + 0x30),lVar6);
LAB_148ecce46:
    FUN_140391314(param_1,uVar8);
  }
  FUN_140de1078(param_1,&DAT_14cbe2930,0,0);
  puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *puVar7 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar7,uVar8,local_48,1);
  *puVar7 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  FUN_140391314(param_1,puVar7);
  puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *puVar7 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar7,uVar8,local_48,1);
  *puVar7 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar7 + 7) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
  FUN_140391314(param_1,puVar7);
LAB_148ecccf1:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eccec0 FUN_148eccec0 body=140 status=ok
// SIG undefined FUN_148eccec0(void)

undefined8 * FUN_148eccec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9d2340;
  FUN_1446ddc76(&local_38,"SetTransferInput",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9d2340;
  FUN_148c6b498(param_1 + 7,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eccf4e FUN_148eccf4e body=140 status=ok
// SIG undefined FUN_148eccf4e(void)

undefined8 * FUN_148eccf4e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9d2370;
  FUN_1446ddc76(&local_38,"SetTransferTarget",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9d2370;
  FUN_148c6b498(param_1 + 7,param_3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148eccfdc FUN_148eccfdc body=164 status=ok
// SIG undefined FUN_148eccfdc(void)

void FUN_148eccfdc(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e8378e();
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_38,"SetGlyphs",1);
  FUN_14039176c(puVar2,uVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c7290;
  *(undefined4 *)(puVar2 + 7) = 5;
  FUN_140391314(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecd082 FUN_148ecd082 body=66 status=ok
// SIG undefined FUN_148ecd082(void)

undefined8 * FUN_148ecd082(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x298);
  memset(_Dst,0,0x298);
  FUN_140e8cffc(_Dst);
  *_Dst = &PTR_FUN_14b9d23a0;
  return _Dst;
}



// FUNCTION 148ecd0ca FUN_148ecd0ca body=2910 status=ok
// SIG undefined FUN_148ecd0ca(void)

void FUN_148ecd0ca(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 local_578;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 local_4d0;
  longlong local_4c8;
  ulonglong uStack_4c0;
  undefined4 local_4b8;
  undefined1 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 local_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined1 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined1 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  FUN_1407cbe30();
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) goto LAB_148ecd0ff;
  uVar4 = FUN_14660a620();
  FUN_144a2e342(lVar1,param_1 + 0x160,uVar4);
  FUN_1400b22c2(&local_208,"Guardian Vault 1");
  local_128 = local_208;
  uStack_124 = uStack_204;
  uStack_120 = uStack_200;
  uStack_11c = uStack_1fc;
  local_118 = 0;
  FUN_1400b22c2(&local_208,"Vault 1, Artifact 1");
  local_110 = local_208;
  uStack_10c = uStack_204;
  uStack_108 = uStack_200;
  uStack_104 = uStack_1fc;
  local_100 = 0;
  FUN_1400b22c2(&local_208,"Artifact 1-1");
  local_f8 = local_208;
  uStack_f4 = uStack_204;
  uStack_f0 = uStack_200;
  uStack_ec = uStack_1fc;
  local_e8 = 0;
  FUN_1400b22c2(&local_208,"Artifact 1-2");
  local_e0 = local_208;
  uStack_dc = uStack_204;
  uStack_d8 = uStack_200;
  uStack_d4 = uStack_1fc;
  local_d0 = 0;
  FUN_1400b22c2(&local_208,"Artifact 1-3");
  local_c8 = local_208;
  uStack_c4 = uStack_204;
  uStack_c0 = uStack_200;
  uStack_bc = uStack_1fc;
  local_b8 = 0;
  FUN_1400b22c2(&local_208,"Vault 1, Fragment 1");
  local_b0 = local_208;
  uStack_ac = uStack_204;
  uStack_a8 = uStack_200;
  uStack_a4 = uStack_1fc;
  local_a0 = 0;
  FUN_1400b22c2(&local_208,"Fragment 1-1");
  local_98 = local_208;
  uStack_94 = uStack_204;
  uStack_90 = uStack_200;
  uStack_8c = uStack_1fc;
  local_88 = 0;
  FUN_1400b22c2(&local_208,"Fragment 1-1");
  local_80 = local_208;
  uStack_7c = uStack_204;
  uStack_78 = uStack_200;
  uStack_74 = uStack_1fc;
  local_70 = 0;
  FUN_1400b22c2(&local_208,"Fragment 1-1");
  local_68 = local_208;
  uStack_64 = uStack_204;
  uStack_60 = uStack_200;
  uStack_5c = uStack_1fc;
  local_58 = 0;
  local_50 = 1;
  local_4c = 0;
  FUN_1400b22c2(&local_2e8,"Guardian Vault 2");
  local_208 = local_2e8;
  uStack_204 = uStack_2e4;
  uStack_200 = uStack_2e0;
  uStack_1fc = uStack_2dc;
  local_1f8 = 0;
  FUN_1400b22c2(&local_2e8,"Vault 2, Artifact 1");
  local_1f0 = local_2e8;
  uStack_1ec = uStack_2e4;
  uStack_1e8 = uStack_2e0;
  uStack_1e4 = uStack_2dc;
  local_1e0 = 0;
  FUN_1400b22c2(&local_2e8,"Artifact 2-1");
  local_1d8 = local_2e8;
  uStack_1d4 = uStack_2e4;
  uStack_1d0 = uStack_2e0;
  uStack_1cc = uStack_2dc;
  local_1c8 = 0;
  FUN_1400b22c2(&local_2e8,"Artifact 2-2");
  local_1c0 = local_2e8;
  uStack_1bc = uStack_2e4;
  uStack_1b8 = uStack_2e0;
  uStack_1b4 = uStack_2dc;
  local_1b0 = 0;
  FUN_1400b22c2(&local_2e8,"Artifact 2-3");
  local_1a8 = local_2e8;
  uStack_1a4 = uStack_2e4;
  uStack_1a0 = uStack_2e0;
  uStack_19c = uStack_2dc;
  local_198 = 0;
  FUN_1400b22c2(&local_2e8,"Vault 2, Fragment 1");
  local_190 = local_2e8;
  uStack_18c = uStack_2e4;
  uStack_188 = uStack_2e0;
  uStack_184 = uStack_2dc;
  local_180 = 0;
  FUN_1400b22c2(&local_2e8,"Fragment 2-1");
  local_178 = local_2e8;
  uStack_174 = uStack_2e4;
  uStack_170 = uStack_2e0;
  uStack_16c = uStack_2dc;
  local_168 = 0;
  FUN_1400b22c2(&local_2e8,"Fragment 2-1");
  local_160 = local_2e8;
  uStack_15c = uStack_2e4;
  uStack_158 = uStack_2e0;
  uStack_154 = uStack_2dc;
  local_150 = 0;
  FUN_1400b22c2(&local_2e8,"Fragment 2-1");
  local_148 = local_2e8;
  uStack_144 = uStack_2e4;
  uStack_140 = uStack_2e0;
  uStack_13c = uStack_2dc;
  local_138 = 0;
  local_130 = 1;
  local_12c = 0;
  FUN_1400b22c2(&local_3c8,"Guardian Vault 3");
  local_2e8 = local_3c8;
  uStack_2e4 = uStack_3c4;
  uStack_2e0 = uStack_3c0;
  uStack_2dc = uStack_3bc;
  local_2d8 = 0;
  FUN_1400b22c2(&local_3c8,"Vault 3, Artifact 1");
  local_2d0 = local_3c8;
  uStack_2cc = uStack_3c4;
  uStack_2c8 = uStack_3c0;
  uStack_2c4 = uStack_3bc;
  local_2c0 = 0;
  FUN_1400b22c2(&local_3c8,"Artifact 3-1");
  local_2b8 = local_3c8;
  uStack_2b4 = uStack_3c4;
  uStack_2b0 = uStack_3c0;
  uStack_2ac = uStack_3bc;
  local_2a8 = 0;
  FUN_1400b22c2(&local_3c8,"Artifact 3-2");
  local_2a0 = local_3c8;
  uStack_29c = uStack_3c4;
  uStack_298 = uStack_3c0;
  uStack_294 = uStack_3bc;
  local_290 = 0;
  FUN_1400b22c2(&local_3c8,"Artifact 3-3");
  local_288 = local_3c8;
  uStack_284 = uStack_3c4;
  uStack_280 = uStack_3c0;
  uStack_27c = uStack_3bc;
  local_278 = 0;
  FUN_1400b22c2(&local_3c8,"Vault 3, Fragment 1");
  local_270 = local_3c8;
  uStack_26c = uStack_3c4;
  uStack_268 = uStack_3c0;
  uStack_264 = uStack_3bc;
  local_260 = 0;
  FUN_1400b22c2(&local_3c8,"Fragment 3-1");
  local_258 = local_3c8;
  uStack_254 = uStack_3c4;
  uStack_250 = uStack_3c0;
  uStack_24c = uStack_3bc;
  local_248 = 0;
  FUN_1400b22c2(&local_3c8,"Fragment 3-1");
  local_240 = local_3c8;
  uStack_23c = uStack_3c4;
  uStack_238 = uStack_3c0;
  uStack_234 = uStack_3bc;
  local_230 = 0;
  FUN_1400b22c2(&local_3c8,"Fragment 3-1");
  local_228 = local_3c8;
  uStack_224 = uStack_3c4;
  uStack_220 = uStack_3c0;
  uStack_21c = uStack_3bc;
  local_218 = 0;
  local_210 = 1;
  local_20c = 0;
  FUN_1400b22c2(&local_4a8,"Guardian Vault 4");
  local_3c8 = local_4a8;
  uStack_3c4 = uStack_4a4;
  uStack_3c0 = uStack_4a0;
  uStack_3bc = uStack_49c;
  local_3b8 = 0;
  FUN_1400b22c2(&local_4a8,"Vault 4, Artifact 1");
  local_3b0 = local_4a8;
  uStack_3ac = uStack_4a4;
  uStack_3a8 = uStack_4a0;
  uStack_3a4 = uStack_49c;
  local_3a0 = 0;
  FUN_1400b22c2(&local_4a8,"Artifact 4-1");
  local_398 = local_4a8;
  uStack_394 = uStack_4a4;
  uStack_390 = uStack_4a0;
  uStack_38c = uStack_49c;
  local_388 = 0;
  FUN_1400b22c2(&local_4a8,"Artifact 4-2");
  local_380 = local_4a8;
  uStack_37c = uStack_4a4;
  uStack_378 = uStack_4a0;
  uStack_374 = uStack_49c;
  local_370 = 0;
  FUN_1400b22c2(&local_4a8,"Artifact 4-3");
  local_368 = local_4a8;
  uStack_364 = uStack_4a4;
  uStack_360 = uStack_4a0;
  uStack_35c = uStack_49c;
  local_358 = 0;
  FUN_1400b22c2(&local_4a8,"Vault 4, Fragment 1");
  local_350 = local_4a8;
  uStack_34c = uStack_4a4;
  uStack_348 = uStack_4a0;
  uStack_344 = uStack_49c;
  local_340 = 0;
  FUN_1400b22c2(&local_4a8,"Fragment 4-1");
  local_338 = local_4a8;
  uStack_334 = uStack_4a4;
  uStack_330 = uStack_4a0;
  uStack_32c = uStack_49c;
  local_328 = 0;
  FUN_1400b22c2(&local_4a8,"Fragment 4-1");
  local_320 = local_4a8;
  uStack_31c = uStack_4a4;
  uStack_318 = uStack_4a0;
  uStack_314 = uStack_49c;
  local_310 = 0;
  FUN_1400b22c2(&local_4a8,"Fragment 4-1");
  local_308 = local_4a8;
  uStack_304 = uStack_4a4;
  uStack_300 = uStack_4a0;
  uStack_2fc = uStack_49c;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 0;
  FUN_1400b22c2(&local_588,"Guardian Vault 5");
  local_4a8 = local_588;
  uStack_4a4 = uStack_584;
  uStack_4a0 = uStack_580;
  uStack_49c = uStack_57c;
  local_498 = 0;
  FUN_1400b22c2(&local_588,"Vault 5, Artifact 1");
  local_490 = local_588;
  uStack_48c = uStack_584;
  uStack_488 = uStack_580;
  uStack_484 = uStack_57c;
  local_480 = 0;
  FUN_1400b22c2(&local_588,"Artifact 5-1");
  local_478 = local_588;
  uStack_474 = uStack_584;
  uStack_470 = uStack_580;
  uStack_46c = uStack_57c;
  local_468 = 0;
  FUN_1400b22c2(&local_588,"Artifact 5-2");
  local_460 = local_588;
  uStack_45c = uStack_584;
  uStack_458 = uStack_580;
  uStack_454 = uStack_57c;
  local_450 = 0;
  FUN_1400b22c2(&local_588,"Artifact 5-3");
  local_448 = local_588;
  uStack_444 = uStack_584;
  uStack_440 = uStack_580;
  uStack_43c = uStack_57c;
  local_438 = 0;
  FUN_1400b22c2(&local_588,"Vault 5, Fragment 1");
  local_430 = local_588;
  uStack_42c = uStack_584;
  uStack_428 = uStack_580;
  uStack_424 = uStack_57c;
  local_420 = 0;
  FUN_1400b22c2(&local_588,"Fragment 5-1");
  local_418 = local_588;
  uStack_414 = uStack_584;
  uStack_410 = uStack_580;
  uStack_40c = uStack_57c;
  local_408 = 0;
  FUN_1400b22c2(&local_588,"Fragment 5-1");
  local_400 = local_588;
  uStack_3fc = uStack_584;
  uStack_3f8 = uStack_580;
  uStack_3f4 = uStack_57c;
  local_3f0 = 0;
  FUN_1400b22c2(&local_588,"Fragment 5-1");
  local_3e8 = local_588;
  uStack_3e4 = uStack_584;
  uStack_3e0 = uStack_580;
  uStack_3dc = uStack_57c;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  FUN_1400b22c2(&local_48,"Guardian Vault 6");
  local_588 = (undefined4)local_48;
  uStack_584 = local_48._4_4_;
  uStack_580 = (uint)uStack_40;
  uStack_57c = uStack_40._4_4_;
  local_578 = 0;
  FUN_1400b22c2(&local_48,"Vault 6, Artifact 1");
  local_570 = (undefined4)local_48;
  uStack_56c = local_48._4_4_;
  uStack_568 = (uint)uStack_40;
  uStack_564 = uStack_40._4_4_;
  local_560 = 0;
  FUN_1400b22c2(&local_48,"Artifact 6-1");
  local_558 = (undefined4)local_48;
  uStack_554 = local_48._4_4_;
  uStack_550 = (uint)uStack_40;
  uStack_54c = uStack_40._4_4_;
  local_548 = 0;
  FUN_1400b22c2(&local_48,"Artifact 6-2");
  local_540 = (undefined4)local_48;
  uStack_53c = local_48._4_4_;
  uStack_538 = (uint)uStack_40;
  uStack_534 = uStack_40._4_4_;
  local_530 = 0;
  FUN_1400b22c2(&local_48,"Artifact 6-3");
  local_528 = (undefined4)local_48;
  uStack_524 = local_48._4_4_;
  uStack_520 = (uint)uStack_40;
  uStack_51c = uStack_40._4_4_;
  local_518 = 0;
  FUN_1400b22c2(&local_48,"Vault 6, Fragment 1");
  local_510 = (undefined4)local_48;
  uStack_50c = local_48._4_4_;
  uStack_508 = (uint)uStack_40;
  uStack_504 = uStack_40._4_4_;
  local_500 = 0;
  FUN_1400b22c2(&local_48,"Fragment 6-1");
  local_4f8 = (undefined4)local_48;
  uStack_4f4 = local_48._4_4_;
  uStack_4f0 = (uint)uStack_40;
  uStack_4ec = uStack_40._4_4_;
  local_4e8 = 0;
  FUN_1400b22c2(&local_48,"Fragment 6-1");
  local_4e0 = (undefined4)local_48;
  uStack_4dc = local_48._4_4_;
  uStack_4d8 = (uint)uStack_40;
  uStack_4d4 = uStack_40._4_4_;
  local_4d0 = 0;
  FUN_1400b22c2(&local_48,"Fragment 6-1");
  local_4c8 = local_48;
  uStack_4c0 = uStack_40;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4ac = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_148c94606(0,0);
  uStack_40._0_4_ = 1;
  if (uStack_40._4_4_ == 0) {
    FUN_148edc048(&local_48,0);
  }
  FUN_148c9473e(local_48,&local_128);
  iVar5 = (uint)uStack_40;
  lVar6 = (longlong)(int)(uint)uStack_40;
  uStack_40._0_4_ = (uint)uStack_40 + 1;
  if (uStack_40._4_4_ < (uint)uStack_40) {
    FUN_148edc048(&local_48,iVar5);
  }
  FUN_148c9473e(lVar6 * 0xe0 + local_48,&local_208);
  uVar3 = (uint)uStack_40;
  lVar6 = (longlong)(int)(uint)uStack_40;
  uStack_40._0_4_ = (uint)uStack_40 + 1;
  if (uStack_40._4_4_ < (uint)uStack_40) {
    FUN_148edc048(&local_48,uVar3);
  }
  FUN_148c9473e(lVar6 * 0xe0 + local_48,&local_2e8);
  local_598 = 0;
  uStack_590 = 0;
  FUN_148c94606(0,0);
  uStack_590._0_4_ = 1;
  if (uStack_590._4_4_ == 0) {
    FUN_148edc048(&local_598,0);
  }
  FUN_148c9473e(local_598,&local_3c8);
  iVar5 = (uint)uStack_590;
  lVar6 = (longlong)(int)(uint)uStack_590;
  uStack_590._0_4_ = (uint)uStack_590 + 1;
  if (uStack_590._4_4_ < (uint)uStack_590) {
    FUN_148edc048(&local_598,iVar5);
  }
  FUN_148c9473e(lVar6 * 0xe0 + local_598,&local_4a8);
  uVar3 = (uint)uStack_590;
  lVar6 = (longlong)(int)(uint)uStack_590;
  uStack_590._0_4_ = (uint)uStack_590 + 1;
  if (uStack_590._4_4_ < (uint)uStack_590) {
    FUN_148edc048(&local_598,uVar3);
  }
  FUN_148c9473e(lVar6 * 0xe0 + local_598,&local_588);
  iVar5 = *(int *)(lVar1 + 0xf0);
  *(uint *)(lVar1 + 0xf0) = iVar5 + 1U;
  if (*(uint *)(lVar1 + 0xf4) < iVar5 + 1U) {
    FUN_148edc0dc(lVar1 + 0xe8,iVar5);
  }
  FUN_148c94d30((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 0xe8),&local_48);
  iVar5 = *(int *)(lVar1 + 0xf0);
  *(uint *)(lVar1 + 0xf0) = iVar5 + 1U;
  if (*(uint *)(lVar1 + 0xf4) < iVar5 + 1U) {
    FUN_148edc0dc(lVar1 + 0xe8,iVar5);
  }
  FUN_148c94d30((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 0xe8),&local_598);
  FUN_148ecdc2a(lVar1 + 0xb0);
  FUN_148ecdc90(lVar1 + 200);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    iVar5 = 1;
    if (*(int *)(lVar1 + 0xe4) == 0) goto LAB_148ecdb6c;
  }
  else {
    iVar5 = *(int *)(lVar1 + 0xe4) + 1;
LAB_148ecdb6c:
    *(undefined4 *)(lVar1 + 0xe0) = 0;
    *(int *)(lVar1 + 0xe4) = iVar5;
  }
  puVar2 = *(ushort **)(lVar1 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
  }
  FUN_148c94606(local_598,uStack_590 & 0xffffffff);
  if (local_598 != 0) {
    FUN_1400020a8();
  }
  FUN_148c94606(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_148c942b6(&local_588);
  FUN_148c942b6(&local_4a8);
  FUN_148c942b6(&local_3c8);
  FUN_148c942b6(&local_2e8);
  FUN_148c942b6(&local_208);
  FUN_148c942b6(&local_128);
LAB_148ecd0ff:
  if ((local_38 ^ (ulonglong)auStack_5b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecdc2a FUN_148ecdc2a body=100 status=ok
// SIG undefined FUN_148ecdc2a(void)

undefined8 FUN_148ecdc2a(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"Tooltip Title");
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecdc90 FUN_148ecdc90 body=100 status=ok
// SIG undefined FUN_148ecdc90(void)

undefined8 FUN_148ecdc90(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,
                "Here are some tool tip details. Wowzers. Super cool, very fun, much detail. Very long and many sentences, but not too many."
               );
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecdcf6 FUN_148ecdcf6 body=132 status=ok
// SIG undefined FUN_148ecdcf6(void)

void FUN_148ecdcf6(undefined8 param_1)

{
  undefined8 *puVar1;
  
  FUN_140db1448();
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40b0;
  puVar1[2] = &LAB_148ecdd7a;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"NextPageClicked",puVar1);
  puVar1 = cohtml::IEventHandler::operator_new(0x20);
  *puVar1 = &PTR_FUN_14b9d40b0;
  puVar1[2] = &LAB_148ecddc8;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[1] = param_1;
  FUN_140db1ba0(param_1,L"PrevPageClicked",puVar1);
  return;
}



// FUNCTION 148ecde1c FUN_148ecde1c body=211 status=ok
// SIG undefined FUN_148ecde1c(void)

void FUN_148ecde1c(longlong param_1)

{
  ushort *puVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_146245af8();
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar3[3] = 0;
  *puVar3 = &PTR_FUN_14b9d27c0;
  FUN_140391314(param_1,puVar3);
  FUN_148ecdef0();
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x658) = 0xffffffffffffffff;
    *(undefined1 *)(lVar4 + 0x650) = 0;
    *(undefined1 *)(lVar4 + 0x661) = 0;
    *(undefined1 *)(lVar4 + 0x678) = 0;
    *(undefined1 *)(lVar4 + 0x663) = 0;
    puVar1 = *(ushort **)(lVar4 + 0x80);
    if (puVar1 != (ushort *)0x0) {
      *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 != '\0') {
    lVar4 = FUN_14479d2ce(param_1 + 0x30);
    if (*(int *)(lVar4 + 0x380) != 2) {
      FUN_140afad18(param_1,&DAT_14cbe2b00);
      return;
    }
  }
  return;
}



// FUNCTION 148ecdef0 FUN_148ecdef0 body=347 status=ok
// SIG undefined FUN_148ecdef0(void)

void FUN_148ecdef0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(&local_48,"ClearItem",1);
  FUN_14039176c(puVar2,uVar1,local_48,1);
  *puVar2 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(&local_48,"ClearItem",1);
  FUN_14039176c(puVar2,uVar1,local_48,1);
  *puVar2 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar2 + 7) = 1;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_48,"SetVisible",1);
  FUN_14039176c(puVar2,uVar1,local_48,1);
  *puVar2 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  FUN_140391314(param_1,puVar2);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ece04c FUN_148ece04c body=38 status=ok
// SIG undefined FUN_148ece04c(void)

void FUN_148ece04c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x188))();
  FUN_145eea7ba(param_1);
  FUN_1459249be(param_1);
  return;
}



// FUNCTION 148ece072 FUN_148ece072 body=39 status=ok
// SIG undefined FUN_148ece072(void)

void FUN_148ece072(undefined8 param_1)

{
  FUN_148ed091a();
  FUN_140de1078(param_1,&DAT_14cbe2a98,0,0);
  return;
}



// FUNCTION 148ece09a FUN_148ece09a body=959 status=ok
// SIG undefined FUN_148ece09a(void)

void FUN_148ece09a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_788 [32];
  longlong local_768;
  longlong local_760;
  undefined8 local_758;
  undefined1 local_750 [216];
  undefined8 local_678 [8];
  int local_634;
  int local_630;
  undefined1 local_4e8 [24];
  undefined1 local_4d0 [1160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_788;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((lVar2 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar2 + 0x2e8))) {
    *(uint *)(lVar2 + 0x658) = param_2;
    *(undefined1 *)(lVar2 + 0x651) = 1;
    local_768 = *(longlong *)(lVar2 + 0x2e0);
    local_760 = (ulonglong)param_2 * 0x208;
    lVar1 = local_768 + local_760;
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(local_678,"ClearItem",1);
    FUN_14039176c(puVar3,uVar4,local_678[0],1);
    *puVar3 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar3 + 7) = 0;
    FUN_140391314(param_1,puVar3);
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(local_678,"ClearItem",1);
    FUN_14039176c(puVar3,uVar4,local_678[0],1);
    *puVar3 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar3 + 7) = 1;
    FUN_140391314(param_1);
    if (*(char *)(local_768 + 0x50 + local_760) == '\x01') {
      FUN_144301c32(local_678,lVar1);
      if (local_630 == 0 || local_634 != 0) {
        local_634 = 0;
        local_630 = local_630 + 1;
      }
      FUN_140c12dec(local_4e8,&DAT_149e02088);
      FUN_140c12dec(local_4d0,&DAT_149e02088);
      puVar3 = (undefined8 *)FUN_14001cc68(0x668,0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9d1020;
      FUN_1446ddc76(&local_758,"SetCustomData",1);
      FUN_14039176c(puVar3,uVar4,local_758,1);
      *puVar3 = &PTR_FUN_14b9d1020;
      FUN_148ed203e(puVar3 + 7,local_678);
      FUN_140391314(param_1,puVar3);
      FUN_145abb798(local_678);
    }
    else if (*(longlong *)(lVar1 + 0x130) != 0) {
      if ((longlong)*(int *)(lVar1 + 0x148) != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x140) + lVar5) == 0) goto LAB_148ece265;
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(lVar1 + 0x148) * 8 != lVar5);
      }
      uVar4 = FUN_14001cc68(0x148,0x10);
      FUN_1406fd608(local_750,lVar1 + 0x130);
      FUN_148ed0a00(uVar4,*(undefined8 *)(param_1 + 0x30),local_750);
      FUN_140391314(param_1,uVar4);
    }
LAB_148ece265:
    iVar6 = 4;
    if (*(uint *)(lVar2 + 0x65c) == param_2) {
      iVar6 = (uint)(*(char *)(lVar2 + 0x650) != '\x01') << 2;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c7290;
    FUN_1446ddc76(local_678,"SetGlyphs",1);
    FUN_14039176c(puVar3,uVar4,local_678[0],1);
    *puVar3 = &PTR_FUN_14b9c7290;
    *(int *)(puVar3 + 7) = iVar6;
    FUN_140391314(param_1,puVar3);
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(local_678,"SetVisible",1);
    FUN_14039176c(puVar3,uVar4,local_678[0],1);
    *puVar3 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar3 + 7) = 1;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
    FUN_140391314(param_1,puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ece45a FUN_148ece45a body=192 status=ok
// SIG undefined FUN_148ece45a(void)

void FUN_148ece45a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x658) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x651) = 0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_38,"SetVisible",1);
  FUN_14039176c(puVar3,uVar2,local_38,1);
  *puVar3 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  FUN_140391314(param_1,puVar3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ece51c FUN_148ece51c body=324 status=ok
// SIG undefined FUN_148ece51c(void)

void FUN_148ece51c(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0x650) != '\x01') || (*(uint *)(lVar1 + 0x65c) != param_2)) {
      FUN_148ed0ac0(param_1,(ulonglong)param_2);
    }
    *(undefined1 *)(lVar1 + 0x650) = 1;
    *(uint *)(lVar1 + 0x65c) = param_2;
    lVar2 = *(longlong *)(param_1 + 0x288);
    if (((lVar2 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar2 + 0x2e8) <= (int)param_2)) {
      bVar6 = false;
    }
    else {
      bVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x2e0) + 0x48 + (ulonglong)param_2 * 0x208)
              <= *(ulonglong *)(lVar2 + 0x2a8);
    }
    *(bool *)(lVar1 + 0x660) = bVar6;
    puVar3 = *(ushort **)(lVar1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *puVar5 = &PTR_FUN_14b9c7290;
    FUN_1446ddc76(&local_38,"SetGlyphs",1);
    FUN_14039176c(puVar5,uVar4,local_38,1);
    *puVar5 = &PTR_FUN_14b9c7290;
    *(undefined4 *)(puVar5 + 7) = 0;
    FUN_140391314(param_1,puVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ece662 FUN_148ece662 body=603 status=ok
// SIG undefined FUN_148ece662(void)

void FUN_148ece662(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_698 [32];
  undefined8 local_678;
  undefined1 local_670 [1584];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_698;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 0x300))) {
    *(uint *)(lVar1 + 0x658) = param_2;
    *(undefined1 *)(lVar1 + 0x651) = 2;
    lVar5 = (ulonglong)param_2 * 0x208 + *(longlong *)(lVar1 + 0x2f8);
    FUN_144301c32(local_670,lVar5);
    iVar4 = 4;
    if (*(uint *)(lVar1 + 0x65c) == param_2) {
      iVar4 = (uint)(*(char *)(lVar1 + 0x650) != '\x02') << 2;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(&local_678,"ClearItem",1);
    FUN_14039176c(puVar3,uVar2,local_678,1);
    *puVar3 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar3 + 7) = 0;
    FUN_140391314(param_1,puVar3);
    if (*(char *)(lVar5 + 0x50) == '\0') {
      puVar3 = (undefined8 *)FUN_14001cc68(0x668,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9d1020;
      FUN_1446ddc76(&local_678,"SetCustomData",1);
      FUN_14039176c(puVar3,uVar2,local_678,1);
      *puVar3 = &PTR_FUN_14b9d1020;
      FUN_148ed203e(puVar3 + 7,local_670);
      FUN_140391314(param_1,puVar3);
      puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9c7290;
      FUN_1446ddc76(&local_678,"SetGlyphs",1);
      FUN_14039176c(puVar3,uVar2,local_678,1);
      *puVar3 = &PTR_FUN_14b9c7290;
      *(int *)(puVar3 + 7) = iVar4;
      FUN_140391314(param_1,puVar3);
      puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      *puVar3 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(&local_678,"SetVisible",1);
      FUN_14039176c(puVar3,uVar2,local_678,1);
      *puVar3 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar3 + 7) = 1;
      *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
      FUN_140391314(param_1,puVar3);
    }
    FUN_145abb798(local_670);
  }
  if ((local_40 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ece8be FUN_148ece8be body=192 status=ok
// SIG undefined FUN_148ece8be(void)

void FUN_148ece8be(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x658) = 0xffffffff;
    *(undefined1 *)(lVar1 + 0x651) = 0;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *puVar3 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_38,"SetVisible",1);
  FUN_14039176c(puVar3,uVar2,local_38,1);
  *puVar3 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
  FUN_140391314(param_1,puVar3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ece980 FUN_148ece980 body=515 status=ok
// SIG undefined FUN_148ece980(void)

void FUN_148ece980(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_148eceb18;
  *(undefined1 *)(lVar6 + 0x650) = 2;
  iVar5 = (int)param_2;
  *(int *)(lVar6 + 0x65c) = iVar5;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    *(undefined1 *)(lVar6 + 0x660) = 0;
    puVar2 = *(ushort **)(lVar6 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
    if (-1 < iVar5) goto LAB_148ecea1f;
    goto switchD_148ecea59_default;
  }
  if (iVar5 < 0) {
    *(undefined1 *)(lVar6 + 0x660) = 0;
    puVar2 = *(ushort **)(lVar6 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
    }
    goto switchD_148ecea59_default;
  }
  if (iVar5 < *(int *)(lVar1 + 0x300)) {
    lVar3 = (param_2 & 0xffffffff) * 0x208;
    if (*(char *)(*(longlong *)(lVar1 + 0x2f8) + 0x50 + lVar3) != '\0') goto LAB_148ece9fb;
    bVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x2f8) + 0x48 + lVar3) <=
            *(ulonglong *)(lVar1 + 0x2a8);
  }
  else {
LAB_148ece9fb:
    bVar8 = false;
  }
  *(bool *)(lVar6 + 0x660) = bVar8;
  puVar2 = *(ushort **)(lVar6 + 0x80);
  if (puVar2 != (ushort *)0x0) {
    *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
  }
LAB_148ecea1f:
  if (*(int *)(lVar6 + 0x300) <= iVar5) goto switchD_148ecea59_default;
  switch(*(undefined1 *)(*(longlong *)(lVar6 + 0x2f8) + 0x10 + (param_2 & 0xffffffff) * 0x208)) {
  case 1:
    uVar7 = *(undefined8 *)(param_1 + 0x338);
    lVar6 = param_1 + 0x2d0;
    goto LAB_148eceb6a;
  case 2:
    uVar7 = *(undefined8 *)(param_1 + 0x340);
    lVar6 = param_1 + 0x2e0;
LAB_148eceb6a:
    FUN_144302068(param_1,param_2,lVar6,uVar7);
    break;
  case 3:
    FUN_144302426(param_1);
    break;
  case 4:
    FUN_148ed0c4c(param_1);
  }
switchD_148ecea59_default:
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *puVar4 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_38,"SetGlyphs",1);
  FUN_14039176c(puVar4,uVar7,local_38,1);
  *puVar4 = &PTR_FUN_14b9c7290;
  *(undefined4 *)(puVar4 + 7) = 0;
  FUN_140391314(param_1,puVar4);
LAB_148eceb18:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148eceb84 FUN_148eceb84 body=940 status=ok
// SIG undefined FUN_148eceb84(void)

void FUN_148eceb84(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_768 [32];
  undefined8 local_748;
  undefined8 local_740 [198];
  undefined1 local_110 [216];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_768;
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c71b0;
    FUN_1446ddc76(local_740,"ClearItem",1);
    FUN_14039176c(puVar4,uVar6,local_740[0],1);
    *puVar4 = &PTR_FUN_14b9c71b0;
    *(undefined4 *)(puVar4 + 7) = 0;
    FUN_140391314(param_1);
    if (*(char *)(lVar7 + 0x650) == '\x02') {
      iVar1 = *(int *)(lVar7 + 0x65c);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar7 + 0x300))) {
        FUN_144301c32(local_740,(longlong)iVar1 * 0x208 + *(longlong *)(lVar7 + 0x2f8));
        FUN_141352d9a(lVar7 + 1000,local_740);
        puVar2 = *(ushort **)(lVar7 + 0x80);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
        }
        puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        *puVar4 = &PTR_FUN_14b9c7290;
        FUN_1446ddc76(&local_748,"SetGlyphs",1);
        FUN_14039176c(puVar4,uVar6,local_748,1);
        *puVar4 = &PTR_FUN_14b9c7290;
        *(undefined4 *)(puVar4 + 7) = 0;
        FUN_140391314(param_1,puVar4);
        puVar4 = (undefined8 *)FUN_14001cc68(0x668,0x10);
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        *puVar4 = &PTR_FUN_14b9d1020;
        FUN_1446ddc76(&local_748,"SetCustomData",1);
        FUN_14039176c(puVar4,uVar6,local_748,1);
        *puVar4 = &PTR_FUN_14b9d1020;
        FUN_148ed203e(puVar4 + 7,local_740);
        FUN_140391314(param_1,puVar4);
        FUN_145abb798(local_740);
      }
    }
    else if (*(char *)(lVar7 + 0x650) == '\x01') {
      iVar1 = *(int *)(lVar7 + 0x65c);
      if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar7 + 0x2e8))) {
        lVar3 = (longlong)iVar1 * 0x208;
        if (*(char *)(*(longlong *)(lVar7 + 0x2e0) + 0x50 + lVar3) == '\0') {
          plVar5 = (longlong *)(*(longlong *)(lVar7 + 0x2e0) + lVar3 + 0x130);
        }
        else {
          plVar5 = (longlong *)FUN_1418fe2e4(param_1);
          lVar7 = *plVar5;
          SRWLock = (PSRWLOCK)(lVar7 + 0x130);
          AcquireSRWLockShared(SRWLock);
          plVar5 = (longlong *)(lVar7 + 0x50);
          ReleaseSRWLockShared(SRWLock);
        }
        if (*plVar5 != 0) {
          if ((longlong)(int)plVar5[3] != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(plVar5[2] + lVar7) == 0) goto LAB_148ececa3;
              lVar7 = lVar7 + 8;
            } while ((longlong)(int)plVar5[3] * 8 != lVar7);
          }
          puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
          uVar6 = *(undefined8 *)(param_1 + 0x30);
          *puVar4 = &PTR_FUN_14b9c7290;
          FUN_1446ddc76(local_740,"SetGlyphs",1);
          FUN_14039176c(puVar4,uVar6,local_740[0],1);
          *puVar4 = &PTR_FUN_14b9c7290;
          *(undefined4 *)(puVar4 + 7) = 8;
          FUN_140391314(param_1,puVar4);
          uVar6 = FUN_14001cc68(0x148,0x10);
          FUN_1406fd608(local_110,plVar5);
          FUN_148ed0a00(uVar6,*(undefined8 *)(param_1 + 0x30),local_110);
          FUN_140391314(param_1,uVar6);
        }
      }
    }
LAB_148ececa3:
    puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    *puVar4 = &PTR_FUN_14b9c7210;
    FUN_1446ddc76(local_740,"SetVisible",1);
    FUN_14039176c(puVar4,uVar6,local_740[0],1);
    *puVar4 = &PTR_FUN_14b9c7210;
    *(undefined1 *)(puVar4 + 7) = 1;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
    FUN_140391314(param_1,puVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_768) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecef32 FUN_148ecef32 body=163 status=ok
// SIG undefined FUN_148ecef32(void)

void FUN_148ecef32(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_38,"SetVisible",1);
  FUN_14039176c(puVar2,uVar1,local_38,1);
  *puVar2 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  FUN_140391314(param_1,puVar2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecefd6 FUN_148ecefd6 body=178 status=ok
// SIG undefined FUN_148ecefd6(void)

void FUN_148ecefd6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 == 0) {
    return;
  }
  ppuVar4 = &PTR_FUN_14b9d27e0;
  bVar5 = *(char *)(lVar1 + 0x241) != '\0';
  if (bVar5) {
    ppuVar4 = &PTR_FUN_14b9d27d0;
  }
  puVar3 = &DAT_14cbe2a78;
  if (bVar5) {
    puVar3 = &DAT_14cbe2a88;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  *puVar2 = ppuVar4;
  FUN_1457e3dd4(puVar2 + 4,lVar1 + 0x248);
  FUN_140391314(param_1,puVar2);
  FUN_140de1078(param_1,puVar3,0,0);
  return;
}



// FUNCTION 148ecf0c4 FUN_148ecf0c4 body=834 status=ok
// SIG undefined FUN_148ecf0c4(void)

void FUN_148ecf0c4(longlong param_1,int param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  wchar_t *_Str;
  longlong lVar6;
  undefined1 auStack_158 [40];
  wchar_t *local_130;
  int local_128;
  undefined1 local_120 [216];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c71b0;
  FUN_1446ddc76(&local_130,"ClearItem",1);
  FUN_14039176c(puVar2,uVar3,local_130,1);
  *puVar2 = &PTR_FUN_14b9c71b0;
  *(undefined4 *)(puVar2 + 7) = 0;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_130,"SetVisible",1);
  FUN_14039176c(puVar2,uVar3,local_130,1);
  *puVar2 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar2 + 7) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  FUN_140391314(param_1,puVar2);
  if ((param_2 < 0) || (*(longlong *)(param_1 + 0x288) == 0)) goto LAB_148ecf1bc;
  uVar3 = FUN_1442afe10(*(longlong *)(param_1 + 0x288) + 0x668,param_2);
  FUN_144a49bb4(uVar3,&local_130,5);
  _Str = local_130;
  if (local_128 == 0) {
    _Str = L"";
  }
  _wtoi(_Str);
  if (local_130 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_148ed0f5e(param_1);
  lVar1 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x1c0));
  plVar4 = (longlong *)FUN_148ed0fd8(param_1);
  lVar5 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar5 + 0x1478);
  AcquireSRWLockShared(SRWLock);
  lVar5 = FUN_140f99464(lVar5);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar1 + 0x88) != 0)) {
    plVar4 = (longlong *)(*(longlong *)(lVar1 + 0x80) + 0x218);
    lVar6 = (longlong)*(int *)(lVar1 + 0x88) * 0x430;
    do {
      if ((int)plVar4[-0x42] == *(int *)(lVar5 + 0x58)) {
        if ((plVar4 != (longlong *)&DAT_00000218) && (*plVar4 != 0)) {
          if ((longlong)(int)plVar4[3] == 0) goto LAB_148ecf304;
          lVar5 = 0;
          goto LAB_148ecf2f4;
        }
        break;
      }
      plVar4 = plVar4 + 0x86;
      lVar6 = lVar6 + -0x430;
    } while (lVar6 != 0);
  }
  goto LAB_148ecf2bc;
  while (lVar5 = lVar5 + 8, (longlong)(int)plVar4[3] * 8 != lVar5) {
LAB_148ecf2f4:
    if (*(longlong *)(plVar4[2] + lVar5) == 0) goto LAB_148ecf2bc;
  }
LAB_148ecf304:
  uVar3 = FUN_14001cc68(0x148,0x10);
  FUN_1406fd608(local_120,plVar4);
  FUN_148ed0a00(uVar3,*(undefined8 *)(param_1 + 0x30),local_120);
  FUN_140391314(param_1,uVar3);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c7290;
  FUN_1446ddc76(&local_130,"SetGlyphs",1);
  FUN_14039176c(puVar2,uVar3,local_130,1);
  *puVar2 = &PTR_FUN_14b9c7290;
  *(undefined4 *)(puVar2 + 7) = 8;
  FUN_140391314(param_1,puVar2);
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *puVar2 = &PTR_FUN_14b9c7210;
  FUN_1446ddc76(&local_130,"SetVisible",1);
  FUN_14039176c(puVar2,uVar3,local_130,1);
  *puVar2 = &PTR_FUN_14b9c7210;
  *(undefined1 *)(puVar2 + 7) = 1;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  FUN_140391314(param_1,puVar2);
LAB_148ecf2bc:
  ReleaseSRWLockShared(SRWLock);
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x1c0));
LAB_148ecf1bc:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecf408 FUN_148ecf408 body=488 status=ok
// SIG undefined FUN_148ecf408(void)

void FUN_148ecf408(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  PSRWLOCK SRWLock;
  PSRWLOCK SRWLock_00;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  wchar_t *_Str;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if ((lVar1 != 0) &&
     (lVar5 = FUN_1442afe10(lVar1 + 0x668,param_3), (*(byte *)(lVar5 + 0x88) & 0x10) == 0)) {
    FUN_144a49bb4(lVar5,&local_58,5);
    _Str = local_58;
    if (local_50 == 0) {
      _Str = L"";
    }
    iVar4 = _wtoi(_Str);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)FUN_1418fe2e4(param_1);
    lVar5 = *plVar6;
    SRWLock = (PSRWLOCK)(lVar5 + 0x130);
    AcquireSRWLockShared(SRWLock);
    plVar6 = (longlong *)FUN_148ed0f5e(param_1);
    lVar2 = *plVar6;
    SRWLock_00 = (PSRWLOCK)(lVar2 + 0x1c0);
    AcquireSRWLockShared(SRWLock_00);
    lVar5 = FUN_148e1aa3e(lVar2 + 0x50,lVar5 + 0x50);
    if (lVar5 != 0) {
      puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar7 = &PTR_FUN_14b9c6e90;
      FUN_1446ddc76(&local_58,"EquipItem",1);
      FUN_14039176c(puVar7,uVar3,local_58,1);
      *puVar7 = &PTR_FUN_14b9c6e90;
      *(char *)(puVar7 + 7) = (char)iVar4;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = *(undefined4 *)(lVar5 + 8);
      puVar7[8] = 0;
      FUN_140391314(param_1,puVar7);
      *(undefined1 *)(lVar1 + 0x678) = 0;
      FUN_148ed052a(param_1,0);
      FUN_1457d7894(param_1,&DAT_14cbe2b48);
      FUN_148ee4356(&local_58,lVar5 + 0x50);
      FUN_140de1078(param_1,&local_58,0,0);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    ReleaseSRWLockShared(SRWLock_00);
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ecf5f2 FUN_148ecf5f2 body=376 status=ok
// SIG undefined FUN_148ecf5f2(void)

void FUN_148ecf5f2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457307fc();
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_38 = FUN_14430118a;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecf76c(param_1,param_2,&DAT_14cb92bb0,param_1);
      local_38 = FUN_1443011f2;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecf76c(param_1,param_2,&DAT_14cb92bb8,param_1);
      local_38 = (code *)&LAB_148ecf996;
      local_30 = 0;
      FUN_148ecf888(param_1,param_2,param_1,&local_38);
      local_38 = (code *)&LAB_144301258;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecf76c(param_1,param_2,&DAT_14cbc9dc0,param_1);
      local_38 = (code *)&LAB_148ecf9c6;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecf76c(param_1,param_2,&DAT_14cbc9dc8,param_1);
      local_38 = FUN_148ecf9cc;
      local_30 = 0;
      local_48 = &local_38;
      FUN_148ecf76c(param_1,param_2,&DAT_14cbc9dd0,param_1);
      local_38 = FUN_140de0f20;
      local_30 = 0;
      FUN_148ecfb98(param_1,param_2,param_1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecf76c FUN_148ecf76c body=282 status=ok
// SIG undefined FUN_148ecf76c(void)

void FUN_148ecf76c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = (code *)*param_5;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14430b466(param_2,param_3,param_4);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_48 = (code *)*param_3;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  if (lVar4 != 0) {
    local_48 = FUN_140ed4b7e;
    local_40 = 0;
    local_58 = &local_48;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecf888 FUN_148ecf888 body=269 status=ok
// SIG undefined FUN_148ecf888(void)

void FUN_148ecf888(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  code **local_48;
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = (code *)*param_4;
  plVar1 = (longlong *)(param_1 + 0x138);
  uVar3 = FUN_14430b4ea(param_2,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(plVar1,iVar2);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  local_40 = DAT_14cbc9d40;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_40);
  if (lVar4 != 0) {
    local_40 = FUN_140ed4b7e;
    local_38 = 0;
    local_48 = &local_40;
    lVar4 = FUN_14063efbe(param_2,lVar4,1,param_1);
    uVar3 = *(undefined4 *)(lVar4 + 8);
    iVar2 = *(int *)(param_1 + 0x140);
    *(uint *)(param_1 + 0x140) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
      FUN_1447808da(plVar1,iVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar2 * 4) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecf9cc FUN_148ecf9cc body=458 status=ok
// SIG undefined FUN_148ecf9cc(void)

void FUN_148ecf9cc(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  wchar_t *_Str;
  size_t sVar4;
  undefined8 *puVar5;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  char local_1d0;
  undefined1 local_1c8 [256];
  undefined1 local_c8 [128];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x30);
    if ((cVar2 != '\0') && ((*(byte *)(lVar1 + 0x663) != 0 || (*(char *)(lVar1 + 0x661) == '\0'))))
    {
      *(byte *)(lVar1 + 0x663) = *(byte *)(lVar1 + 0x663) ^ 1;
      uVar3 = FUN_14479d2ce(param_1 + 0x30);
      local_1e8 = local_1c8;
      local_1d0 = '\0';
      local_1d8 = local_c8;
      local_1e0 = local_1e8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"ToggleSplitscreenView",&local_1e8);
      local_48 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_40 = 0;
        local_38 = 0;
      }
      else {
        sVar4 = wcslen(_Str);
        FUN_1446fe5a4(local_c8,_Str,sVar4 & 0xffffffff,1);
      }
      FUN_140755a72(uVar3,local_40,(byte *)(lVar1 + 0x663));
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if (local_1d0 == '\x01') {
        FUN_1400020a8(local_1e8);
      }
      puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      *puVar5 = &PTR_FUN_14b9c7210;
      FUN_1446ddc76(&local_1e8,"SetVisible",1);
      FUN_14039176c(puVar5,uVar3,local_1e8,1);
      *puVar5 = &PTR_FUN_14b9c7210;
      *(undefined1 *)(puVar5 + 7) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
      FUN_140391314(param_1,puVar5);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecfb98 FUN_148ecfb98 body=329 status=ok
// SIG undefined FUN_148ecfb98(void)

void FUN_148ecfb98(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  lVar1 = param_1 + 0x138;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_14430b572(param_2,2);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar4 = FUN_14430b572(param_2,8,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar4;
  local_58 = uVar3;
  local_50 = uVar5;
  uVar5 = FUN_14430b572(param_2,0x10,param_3);
  iVar2 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar2 + 1U) {
    FUN_1447808da(lVar1,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar2 * 4) = uVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1411a3386(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ecfce8 FUN_148ecfce8 body=1100 status=ok
// SIG undefined FUN_148ecfce8(void)

void FUN_148ecfce8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *plStack_180;
  longlong *local_178 [2];
  undefined8 local_168;
  longlong *plStack_160;
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *plStack_140;
  longlong *local_130 [2];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  ulonglong *local_f8;
  longlong local_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined4 auStack_d8 [2];
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [16];
  undefined4 local_a0;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    lVar9 = 0;
    FUN_14000bbd8(&local_e0,param_2,0);
    if (DAT_14cb93020 != 0) {
      lVar9 = FUN_144837462(DAT_14cb93020,&local_e0);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (lVar9 != 0) {
      *(undefined1 *)(lVar2 + 0xe0) = 1;
      plVar3 = *(longlong **)(lVar9 + 0x30);
      plVar4 = *(longlong **)(lVar2 + 0xb0);
      if (plVar4 != plVar3) {
        *(longlong **)(lVar2 + 0xb0) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(lVar9 + 0x38);
      plVar3 = *(longlong **)(lVar9 + 0x40);
      plVar4 = *(longlong **)(lVar2 + 0xc0);
      if (plVar4 != plVar3) {
        *(longlong **)(lVar2 + 0xc0) = plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(lVar2 + 200) = *(undefined4 *)(lVar9 + 0x48);
      uVar5 = *(undefined8 *)(lVar2 + 0x278);
      uVar6 = *(undefined8 *)(lVar2 + 0x298);
      uVar7 = *(undefined8 *)(lVar2 + 0x2a0);
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FUN_1413a454c(local_130,(int)*(float *)(lVar2 + 0x290),0);
      local_168 = 0;
      plStack_160 = (longlong *)0x0;
      FUN_140e6da52(local_158,uVar7,0);
      local_188 = 0;
      plStack_180 = (longlong *)0x0;
      FUN_140e6da52(local_178,uVar6,0);
      local_1a8 = 0;
      plStack_1a0 = (longlong *)0x0;
      FUN_140e6da52(local_198,uVar5,0);
      FUN_14023409e(&local_1b8,lVar9 + 0x50,1);
      local_e0._0_4_ = 4;
      FUN_14023423e(local_d0,local_198);
      local_c0 = 4;
      FUN_14023423e(local_b0,local_178);
      local_a0 = 4;
      FUN_14023423e(local_90,local_158);
      local_80 = 4;
      FUN_14023423e(local_70,local_130);
      local_100 = &local_e0;
      local_f8 = local_60;
      FUN_14010d304(&local_f0);
      local_110 = local_1b8;
      local_108 = local_1b0;
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_120,&local_110,&local_f0);
      FUN_14007f2db(local_f0,local_e8);
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      lVar9 = 0x70;
      do {
        if (*(longlong **)((longlong)&local_e0 + lVar9) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_e0 + lVar9) + 0x10))();
          *(undefined8 *)((longlong)&local_e0 + lVar9) = 0;
          *(undefined4 *)((longlong)auStack_d8 + lVar9) = 0;
        }
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x10);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1b0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_1b0 + 0x10))(local_1b0);
          }
        }
      }
      if (local_198[0] != (longlong *)0x0) {
        (**(code **)(*local_198[0] + 0x10))();
      }
      if (local_178[0] != (longlong *)0x0) {
        (**(code **)(*local_178[0] + 0x10))();
      }
      if (local_158[0] != (longlong *)0x0) {
        (**(code **)(*local_158[0] + 0x10))();
      }
      if (local_130[0] != (longlong *)0x0) {
        (**(code **)(*local_130[0] + 0x10))();
      }
      FUN_140008f88(lVar2 + 0xd0,local_120);
      if (local_120[0] != (longlong *)0x0) {
        (**(code **)(*local_120[0] + 0x10))();
      }
      plVar3 = plStack_1a0;
      if (plStack_1a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_1a0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_1a0)(plStack_1a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = plStack_180;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_180 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_180)(plStack_180);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_160 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_140 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_140)(plStack_140);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar8 = *(ushort **)(lVar2 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed0164 FUN_148ed0164 body=543 status=ok
// SIG undefined FUN_148ed0164(void)

void FUN_148ed0164(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x360))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x368)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x370)))) {
    local_28 = *(undefined8 *)(param_1 + 0x340);
    lVar3 = *(longlong *)(param_1 + 0x288);
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x65c);
      if (*(char *)(lVar3 + 0x650) == '\x01') {
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar3 + 0x2e8))) {
          local_28 = *(undefined8 *)
                      (param_1 + 0x350 +
                      (ulonglong)
                      *(byte *)(*(longlong *)(lVar3 + 0x2e0) + 0x50 + (ulonglong)uVar2 * 0x208) * 8)
          ;
        }
      }
      else if (((*(char *)(lVar3 + 0x650) == '\x02') && (-1 < (int)uVar2)) &&
              ((int)uVar2 < *(int *)(lVar3 + 0x300))) {
        cVar1 = *(char *)(*(longlong *)(lVar3 + 0x2f8) + 0x10 + (ulonglong)uVar2 * 0x208);
        if (cVar1 == '\x04') {
          local_28 = *(undefined8 *)(param_1 + 0x350);
        }
        else if (cVar1 == '\x03') {
          local_28 = *(undefined8 *)(param_1 + 0x348);
        }
        else if (cVar1 == '\x01') {
          local_28 = *(undefined8 *)(param_1 + 0x338);
        }
      }
    }
    local_38 = *(double *)(param_1 + 0x360) * (double)*(float *)(param_1 + 0x378);
    local_40 = 0;
    local_30 = 0;
    FUN_144a7484c(&local_40,&local_c8);
    local_a8 = local_c8;
    uStack_a0 = uStack_c0;
    local_98 = local_b8;
    uStack_90 = uStack_b0;
    local_88 = (undefined4)DAT_14c8464e0;
    uStack_84 = DAT_14c8464e0._4_4_;
    uStack_80 = (undefined4)DAT_14c8464e8;
    uStack_7c = DAT_14c8464e8._4_4_;
    uStack_60 = (undefined4)DAT_14c846518;
    uStack_5c = (undefined4)((ulonglong)DAT_14c846518 >> 0x20);
    local_78 = DAT_14c8464f0;
    uStack_70 = 0;
    local_68 = (undefined4)DAT_14c846510;
    uStack_64 = DAT_14c846510._4_4_;
    local_58 = DAT_14c846520;
    uStack_50 = 0;
    FUN_148ec92aa(param_1,&local_28);
    *(undefined8 *)(param_1 + 0x370) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x360) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x364) = uVar4;
    *(undefined4 *)(param_1 + 0x368) = uVar5;
    *(undefined4 *)(param_1 + 0x36c) = uVar6;
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ed0384 FUN_148ed0384 body=378 status=ok
// SIG undefined FUN_148ed0384(void)

void FUN_148ed0384(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x661) == '\x01') {
      if (*(char *)(lVar1 + 0x678) == '\x01') {
        *(undefined1 *)(lVar1 + 0x678) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1f8);
      }
      *(undefined1 *)(lVar1 + 0x661) = 0;
      uVar2 = FUN_14479d2ce(param_1 + 0x30);
      local_1d8 = local_1b8;
      local_1c0 = '\0';
      local_1c8 = local_b8;
      local_1d0 = local_1d8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"CloseCelebrationWindow",&local_1d8);
      local_38 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_30 = 0;
        local_28 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
      }
      FUN_1412a486e(uVar2,local_30);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_1c0 == '\x01') {
        FUN_1400020a8(local_1d8);
      }
    }
    else if ((*(byte *)(param_1 + 0x298) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1f8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed052a FUN_148ed052a body=292 status=ok
// SIG undefined FUN_148ed052a(void)

void FUN_148ed052a(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  size_t sVar3;
  undefined1 auStack_208 [47];
  undefined1 local_1d9;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  char local_1c0;
  undefined1 local_1b8 [256];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d9 = param_2;
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x30);
    local_1d8 = local_1b8;
    local_1c0 = '\0';
    local_1c8 = local_b8;
    local_1d0 = local_1d8;
    _Str = (wchar_t *)FUN_140c7f682(param_1,L"ToggleDropdownList",&local_1d8);
    local_38 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_30 = 0;
      local_28 = 0;
    }
    else {
      sVar3 = wcslen(_Str);
      FUN_1446fe5a4(local_b8,_Str,sVar3 & 0xffffffff,1);
    }
    FUN_140755a72(uVar2,local_30,&local_1d9);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_1c0 == '\x01') {
      FUN_1400020a8(local_1d8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed0650 FUN_148ed0650 body=713 status=ok
// SIG undefined FUN_148ed0650(void)

undefined8 * FUN_148ed0650(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1413505e4();
  *param_1 = &PTR_FUN_14b9a5ec0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  *(undefined1 *)(param_1 + 0x86) = *(undefined1 *)(param_2 + 0x430);
  *(undefined4 *)((longlong)param_1 + 0x434) = *(undefined4 *)(param_2 + 0x434);
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)(param_2 + 0x438);
  *(undefined4 *)((longlong)param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  param_1[0x8a] = *(undefined8 *)(param_2 + 0x450);
  uVar1 = *(undefined8 *)(param_2 + 0x448);
  param_1[0x88] = *(undefined8 *)(param_2 + 0x440);
  param_1[0x89] = uVar1;
  *(undefined4 *)(param_1 + 0x8b) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  FUN_14129a3f4(param_1 + 0x8d,param_2 + 0x468);
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_14129a3f4(param_1 + 0x90,param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  FUN_14129a3f4(param_1 + 0x93,param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  FUN_14129a3f4(param_1 + 0x96,param_2 + 0x4b0);
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x4c8);
  *(undefined4 *)((longlong)param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  *(undefined1 *)(param_1 + 0x9a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)(param_1 + 0x9a) = *(undefined1 *)(param_2 + 0x4d0);
  *(undefined4 *)((longlong)param_1 + 0x4d4) = *(undefined4 *)(param_2 + 0x4d4);
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined1 *)(param_1 + 0x9b) = *(undefined1 *)(param_2 + 0x4d8);
  *(undefined4 *)((longlong)param_1 + 0x4dc) = *(undefined4 *)(param_2 + 0x4dc);
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined1 *)(param_1 + 0x9c) = *(undefined1 *)(param_2 + 0x4e0);
  *(undefined4 *)((longlong)param_1 + 0x4e4) = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(param_2 + 0x4e8);
  *(undefined4 *)((longlong)param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined1 *)(param_1 + 0x9e) = *(undefined1 *)(param_2 + 0x4f0);
  *(undefined4 *)((longlong)param_1 + 0x4f4) = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x4f8);
  *(undefined4 *)((longlong)param_1 + 0x4fc) = *(undefined4 *)(param_2 + 0x4fc);
  FUN_148ed2c3e(param_1 + 0xa0,param_2 + 0x500);
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  FUN_14129a3f4(param_1 + 0xaa,param_2 + 0x550);
  *(undefined4 *)(param_1 + 0xaf) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  FUN_14129a3f4(param_1 + 0xad,param_2 + 0x568);
  FUN_148ed2e58(param_1 + 0xb0,param_2 + 0x580);
  FUN_148ed2f66(param_1 + 0xba,param_2 + 0x5d0);
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc4] = *(undefined8 *)(param_2 + 0x620);
  *(undefined4 *)(param_1 + 0xc5) = *(undefined4 *)(param_2 + 0x628);
  return param_1;
}



// FUNCTION 148ed091a FUN_148ed091a body=230 status=ok
// SIG undefined FUN_148ed091a(void)

void FUN_148ed091a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 0xf0))) {
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
    *(uint *)(lVar1 + 0x654) = param_2;
    *(int *)(lVar1 + 0xf8) = *(int *)(lVar1 + 0xf8) + 1;
    FUN_14596e30e(lVar1 + 0x210,(ulonglong)param_2 * 0x100 + *(longlong *)(lVar1 + 0xe8));
    if (*(char *)(lVar1 + 0x651) == '\x02') {
      FUN_148ece662(param_1,*(undefined4 *)(lVar1 + 0x658));
    }
    else if (*(char *)(lVar1 + 0x651) == '\x01') {
      FUN_148ece09a(param_1,*(undefined4 *)(lVar1 + 0x658));
    }
    FUN_145da3a42();
    lVar3 = *(longlong *)(param_1 + 0x288);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x65c) = 0xffffffff;
      *(undefined1 *)(lVar3 + 0x650) = 0;
      *(undefined1 *)(lVar3 + 0x660) = 0;
    }
    if (*(char *)(lVar1 + 0xe0) == '\x01') {
      FUN_148ecfce8(param_1,&DAT_14cbe2b50);
      return;
    }
  }
  return;
}



// FUNCTION 148ed0a00 FUN_148ed0a00 body=190 status=ok
// SIG undefined FUN_148ed0a00(void)

undefined8 * FUN_148ed0a00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b9c7240;
  FUN_1446ddc76(&local_38,"SetItem",1);
  FUN_14039176c(param_1,param_2,local_38,1);
  *param_1 = &PTR_FUN_14b9c7240;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  FUN_140d8ebf0(param_1 + 9,param_3);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  FUN_140368b56(param_3);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed0ac0 FUN_148ed0ac0 body=374 status=ok
// SIG undefined FUN_148ed0ac0(void)

void FUN_148ed0ac0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((lVar2 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar2 + 0x2e8) <= (int)param_2)) {
LAB_148ed0af4:
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar2 = *(longlong *)(lVar2 + 0x2e0);
  lVar3 = (ulonglong)param_2 * 0x208;
  if (*(longlong *)(lVar2 + 0x130 + lVar3) != 0) {
    lVar1 = lVar2 + lVar3;
    if ((longlong)*(int *)(lVar1 + 0x148) != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x140) + lVar6) == 0) goto LAB_148ed0b6f;
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(lVar1 + 0x148) * 8 != lVar6);
    }
    if (*(char *)(lVar1 + 0x50) != '\x01') {
      puVar4 = (undefined8 *)FUN_14001cc68(0x68,0x10);
      if (*(int *)(param_1 + 0x308) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(param_1 + 0x300);
      }
      FUN_1446f470e(&local_48,puVar5,1);
      *puVar4 = &PTR_FUN_14b9cd3a0;
      FUN_1446ddc76(&local_40,"UpdateStandIn",1);
      FUN_14039176c(puVar4,*(undefined8 *)(param_1 + 0x30),local_40,1);
      *puVar4 = &PTR_FUN_14b9cd3a0;
      puVar4[7] = DAT_14cbe0120;
      puVar4[8] = *(undefined8 *)(param_1 + 0x18);
      puVar4[9] = local_48;
      *(undefined1 *)(puVar4 + 0xc) = 0;
      FUN_140391314(param_1,puVar4);
      FUN_148ec95d4(param_1,lVar2 + lVar3 + 0x130);
      goto LAB_148ed0af4;
    }
  }
LAB_148ed0b6f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 148ed0c4c FUN_148ed0c4c body=785 status=ok
// SIG undefined FUN_148ed0c4c(void)

void FUN_148ed0c4c(longlong param_1,uint param_2)

{
  PSRWLOCK SRWLock;
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined2 *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined4 local_150;
  int local_14c;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138 [2];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar2 = (longlong *)FUN_140f9a2c8();
  lVar4 = *plVar2;
  SRWLock = (PSRWLOCK)(lVar4 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  FUN_1400021e4(lVar4 + 0x54,local_138);
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  if (*(int *)(param_1 + 0x308) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = *(undefined2 **)(param_1 + 0x300);
  }
  FUN_1446f470e(&local_168,puVar5,1);
  *puVar3 = &PTR_FUN_14b9cd3a0;
  FUN_1446ddc76(&local_128,"UpdateStandIn",1);
  FUN_14039176c(puVar3,*(undefined8 *)(param_1 + 0x30),local_128,1);
  *puVar3 = &PTR_FUN_14b9cd3a0;
  puVar3[7] = DAT_14cbe0120;
  puVar3[8] = *(undefined8 *)(param_1 + 0x18);
  puVar3[9] = local_168;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  FUN_140391314(param_1,puVar3);
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0x80;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0xf;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  FUN_14088c870(&local_128,param_1 + 0x328);
  lVar4 = FUN_143db4dce();
  if (lVar4 != 0) {
    local_148 = 0;
    uStack_140 = 0;
    FUN_140265ee0(&local_168);
    FUN_140f0c707(&local_128,&local_168);
    local_178 = 0;
    FUN_145903dca(lVar4,&local_128,&local_168,&local_148);
    lVar4 = *(longlong *)(param_1 + 0x288);
    if (((lVar4 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar4 + 0x300))) {
      if ((longlong)(int)uStack_140 != 0) {
        lVar6 = 0;
        do {
          uVar1 = *(undefined8 *)(*(longlong *)(local_148 + lVar6) + 0x38);
          if ((*(int *)(*(longlong *)(lVar4 + 0x2f8) + (ulonglong)param_2 * 0x208) == (int)uVar1) &&
             (*(int *)(*(longlong *)(lVar4 + 0x2f8) + (ulonglong)param_2 * 0x208 + 4) ==
              (int)((ulonglong)uVar1 >> 0x20))) {
            FUN_1488cb966(&local_128);
            break;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)uStack_140 * 8 != lVar6);
      }
    }
    local_168 = &DAT_14a171d50;
    local_150 = 0;
    if (local_14c != 0) {
      FUN_140115c12(&local_158,0);
    }
    local_160 = 0;
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_148ec95d4(param_1,&local_128);
  FUN_148ed0164(param_1);
  FUN_140368b56(&local_128);
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_50 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ed0f5e FUN_148ed0f5e body=121 status=ok
// SIG undefined FUN_148ed0f5e(void)

longlong FUN_148ed0f5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x1b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed0fd8 FUN_148ed0fd8 body=121 status=ok
// SIG undefined FUN_148ed0fd8(void)

longlong FUN_148ed0fd8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed1052 FUN_148ed1052 body=165 status=ok
// SIG undefined FUN_148ed1052(void)

undefined4 FUN_148ed1052(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_38,param_1 + 0x208);
  lVar3 = *(longlong *)(local_38 + 0x1b0);
  SRWLock = (PSRWLOCK)(lVar3 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  uVar4 = FUN_148e1abee(lVar3 + 0x50);
  ReleaseSRWLockShared(SRWLock);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed10f8 FUN_148ed10f8 body=161 status=ok
// SIG undefined FUN_148ed10f8(void)

undefined4 FUN_148ed10f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448d5e3c(&local_30,param_1 + 0x208);
  lVar3 = *(longlong *)(local_30 + 0x1b0);
  SRWLock = (PSRWLOCK)(lVar3 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  uVar4 = FUN_148e1abe8(lVar3 + 0x50);
  ReleaseSRWLockShared(SRWLock);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ed1844 FUN_148ed1844 body=133 status=ok
// SIG undefined FUN_148ed1844(void)

undefined8 *
FUN_148ed1844(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9d2800;
  FUN_1457e3dd4(param_1 + 4);
  *(undefined4 *)(param_1 + 7) = param_3;
  param_1[8] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148ed18ca FUN_148ed18ca body=366 status=ok
// SIG undefined FUN_148ed18ca(void)

void FUN_148ed18ca(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_140f9a2c8();
  lVar2 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar2 + 0xa0);
  AcquireSRWLockShared(SRWLock);
  FUN_1400021e4(lVar2 + 0x54,&local_58);
  pwVar7 = local_58;
  iVar1 = *(int *)(param_1 + 0x318);
  if (local_50 == iVar1) {
    if ((local_50 < 2) || (iVar3 = wcscmp(local_58,*(wchar_t **)(param_1 + 0x310)), iVar3 == 0))
    goto LAB_148ed19f1;
  }
  else if (local_50 + iVar1 == 1) goto LAB_148ed19f1;
  puVar5 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  if (iVar1 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 0x310);
  }
  FUN_1446f470e(&local_60,puVar6,1);
  *puVar5 = &PTR_FUN_14b9cd3a0;
  FUN_1446ddc76(&local_48,"UpdateStandIn",1);
  FUN_14039176c(puVar5,*(undefined8 *)(param_1 + 0x30),local_48,1);
  *puVar5 = &PTR_FUN_14b9cd3a0;
  puVar5[7] = DAT_14cbe0120;
  puVar5[8] = *(undefined8 *)(param_1 + 0x18);
  puVar5[9] = local_60;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  FUN_140391314(param_1,puVar5);
  pwVar7 = local_58;
LAB_148ed19f1:
  if (pwVar7 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar7);
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ed1a3a FUN_148ed1a3a body=149 status=ok
// SIG undefined FUN_148ed1a3a(void)

undefined8 * FUN_148ed1a3a(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((lVar2 == 0) || ((int)param_3 < 0)) || (*(int *)(lVar2 + 0x300) <= (int)param_3)) {
    FUN_1400b22c2(param_2,&DAT_149e02088);
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x2f8);
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x20 + (ulonglong)param_3 * 0x208);
    _Src = *(void **)(lVar2 + 0x18 + (ulonglong)param_3 * 0x208);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 148ed1ad0 FUN_148ed1ad0 body=386 status=ok
// SIG undefined FUN_148ed1ad0(void)

longlong * FUN_148ed1ad0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148ed1be1:
    *puVar5 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d4310;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_148ed1be1;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b972ed0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9d4310;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 148ed1cae FUN_148ed1cae body=68 status=ok
// SIG undefined FUN_148ed1cae(void)

void FUN_148ed1cae(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x288);
  memset(_Dst,0,0x288);
  FUN_1461650f0(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 148ed1cf4 FUN_148ed1cf4 body=29 status=ok
// SIG undefined FUN_148ed1cf4(void)

undefined8 FUN_148ed1cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ed1d12 FUN_148ed1d12 body=38 status=ok
// SIG undefined FUN_148ed1d12(void)

undefined8 FUN_148ed1d12(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"StartNewCharacter",1);
  return param_2;
}



// FUNCTION 148ed1d38 FUN_148ed1d38 body=38 status=ok
// SIG undefined FUN_148ed1d38(void)

undefined8 FUN_148ed1d38(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


