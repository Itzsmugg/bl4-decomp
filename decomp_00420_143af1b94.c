// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143af1b94 FUN_143af1b94 body=463 status=ok
// SIG undefined FUN_143af1b94(void)

void FUN_143af1b94(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  void *local_38;
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
       && ((plVar3 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar3 != (longlong *)0x0 && (*(uint *)(plVar3 + 2) == param_1[1])))) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
       ((lVar2 = *plVar3, lVar2 != 0 && (*(longlong *)(lVar2 + 0x238) == *(longlong *)(param_1 + 8))
        ))))) && (*(longlong *)(lVar2 + 0x240) == *(longlong *)(param_1 + 10))) {
    uVar1 = *(uint *)(lVar2 + 0x250);
    uVar5 = param_1[0xe];
    if (uVar1 == uVar5) {
      if (1 < (int)uVar1) {
        lVar4 = 0;
        while( true ) {
          uVar6 = *(ushort *)(*(longlong *)(lVar2 + 0x248) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(*(longlong *)(param_1 + 0xc) + lVar4);
          if (uVar6 != uVar8) break;
          if (uVar6 == 0) goto LAB_143af1c4b;
LAB_143af1d1f:
          lVar4 = lVar4 + 2;
        }
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_143af1d1f;
        }
        if (uVar6 != uVar8) goto LAB_143af1c02;
      }
    }
    else if (uVar1 + uVar5 != 1) goto LAB_143af1c02;
LAB_143af1c4b:
    if (*(longlong **)(param_1 + 2) != (longlong *)0x0 && param_1[4] != 0) {
      (**(code **)(**(longlong **)(param_1 + 2) + 0x60))();
      uVar5 = param_1[0xe];
    }
    local_50 = *(undefined8 *)(param_1 + 6);
    local_48 = param_1[8];
    uStack_44 = param_1[9];
    uStack_40 = param_1[10];
    uStack_3c = param_1[0xb];
    local_38 = (void *)0x0;
    _Src = *(void **)(param_1 + 0xc);
    local_30 = uVar5;
    if (uVar5 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,uVar5,0);
      memcpy(local_38,_Src,(longlong)(int)uVar5 * 2);
    }
    if (*(longlong *)(lVar2 + 0x268) != 0) {
      *(undefined1 *)(*(longlong *)(lVar2 + 0x268) + 0x2e0) = 0;
      FUN_14822e65a();
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143af1c02:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af1d64 FUN_143af1d64 body=48 status=ok
// SIG undefined FUN_143af1d64(void)

longlong FUN_143af1d64(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af1d94 FUN_143af1d94 body=48 status=ok
// SIG undefined FUN_143af1d94(void)

longlong FUN_143af1d94(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af1dc4 FUN_143af1dc4 body=48 status=ok
// SIG undefined FUN_143af1dc4(void)

longlong FUN_143af1dc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14776f3fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af1df4 FUN_143af1df4 body=132 status=ok
// SIG undefined FUN_143af1df4(void)

undefined8 * FUN_143af1df4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae69700;
  plVar3 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143af1e45;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143af1e45:
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af1e8c FUN_143af1e8c body=148 status=ok
// SIG undefined FUN_143af1e8c(void)

void FUN_143af1e8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_146229de2(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143af1f20 FUN_143af1f20 body=148 status=ok
// SIG undefined FUN_143af1f20(void)

void FUN_143af1f20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae69700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  FUN_146229de2(puVar1 + 6,param_1 + 0x30);
  return;
}



// FUNCTION 143af1fb4 FUN_143af1fb4 body=187 status=ok
// SIG undefined FUN_143af1fb4(void)

void FUN_143af1fb4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae69700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  *(undefined4 *)&p_Var1[1].CriticalSection = 0;
  FUN_146229de2(p_Var1 + 1,param_1 + 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143af205f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143af207a FUN_143af207a body=20 status=ok
// SIG undefined FUN_143af207a(void)

undefined1 FUN_143af207a(longlong param_1)

{
  FUN_143af208e(param_1 + 0x18);
  return 1;
}



// FUNCTION 143af208e FUN_143af208e body=193 status=ok
// SIG undefined FUN_143af208e(void)

void FUN_143af208e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (((param_1[1] != 0) && (param_1[2] != 0)) && (lVar3 = *param_1, 0 < *(int *)(param_1[2] + 8)))
  {
    lVar5 = FUN_1401fe4bc(lVar3 + 0x268);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar3 + 0x2d0) = 0;
      plVar4 = *(longlong **)(lVar3 + 0x2d8);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + 0x2d8) = 0;
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
      FUN_14822e65a(lVar3);
      uVar6 = FUN_1401fe4bc(lVar3 + 0x268);
      plVar4 = (longlong *)param_1[3];
      if (plVar4 != (longlong *)0x0 && (int)param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143af214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x60))(plVar4,uVar6,*(code **)(*plVar4 + 0x60));
        return;
      }
    }
  }
  return;
}



// FUNCTION 143af2192 FUN_143af2192 body=29 status=ok
// SIG undefined FUN_143af2192(void)

undefined8 FUN_143af2192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af21b0 FUN_143af21b0 body=48 status=ok
// SIG undefined FUN_143af21b0(void)

longlong FUN_143af21b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af21e0 FUN_143af21e0 body=48 status=ok
// SIG undefined FUN_143af21e0(void)

longlong FUN_143af21e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af2210 FUN_143af2210 body=48 status=ok
// SIG undefined FUN_143af2210(void)

longlong FUN_143af2210(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14777d418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af2240 FUN_143af2240 body=48 status=ok
// SIG undefined FUN_143af2240(void)

longlong FUN_143af2240(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14777d418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143af2270 FUN_143af2270 body=284 status=ok
// SIG undefined FUN_143af2270(void)

longlong FUN_143af2270(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    if (DAT_14cb459c8 == 0) {
      uVar3 = FUN_140ff4126();
      DAT_14cb459c8 = FUN_140002ddd(FUN_146482a5d,uVar3,L"CommonInputActionDataBase");
      if (DAT_14cb459c8 == 0) {
        return 0;
      }
    }
    if (((*(int *)(DAT_14cb459c8 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
        (param_2 != 0 &&
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb459c8 + 0x38) * 8)
         == DAT_14cb459c8 + 0x30)) &&
       (plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c0))(param_1),
       (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
      uVar2 = (uint)((ulonglong)param_2 >> 0x10);
      uVar6 = (uint)param_2 & 0xffff;
      plVar5 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar4[8];
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)plVar4[9] - 1U &
                      (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        while (plVar5 = (longlong *)(*plVar4 + (longlong)iVar7 * 0x18), *plVar5 != param_2) {
          iVar7 = (int)plVar5[2];
          if (iVar7 == -1) {
            return 0;
          }
        }
        if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
          return plVar5[1];
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143af238c FUN_143af238c body=306 status=ok
// SIG undefined FUN_143af238c(void)

ulonglong FUN_143af238c(uint param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar3 = (ulonglong)param_1;
    }
    else {
      uVar3 = (ulonglong)param_1 * 4;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_1 < 0x1ffd) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x3fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143af241e;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0x3fffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
        }
      }
LAB_143af241e:
      uVar3 = uVar3 >> 2;
    }
  }
  return uVar3;
}



// FUNCTION 143af2518 FUN_143af2518 body=288 status=ok
// SIG undefined FUN_143af2518(void)

void FUN_143af2518(longlong param_1,int *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_58 [40];
  uint local_30;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar6 = *(int **)(param_1 + 8);
  iVar9 = *piVar6;
  if (iVar9 <= **(int **)(param_1 + 0x10)) {
    cVar1 = *param_3;
    iVar2 = *param_2;
    if (iVar2 < **(int **)(param_1 + 0x10) + -1) {
      if (iVar2 < -1) goto LAB_143af2544;
      uVar7 = iVar2 + 1;
    }
    else {
      uVar7 = 0;
      if (cVar1 == '\0') goto LAB_143af2544;
    }
    if ((int)uVar7 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x150)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x148);
      iVar2 = *(int *)(lVar4 + 4 + (ulonglong)uVar7 * 8);
      if (((iVar2 != 0) && (uVar3 = *(uint *)(lVar4 + (ulonglong)uVar7 * 8), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == iVar2)) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
          cVar5 = FUN_14822193e();
          if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
          }
          piVar6 = *(int **)(param_1 + 8);
          iVar9 = *piVar6;
        }
      }
      *piVar6 = iVar9 + 1;
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
      local_30 = uVar7;
      local_29 = cVar1;
      if (plVar8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_30,&local_29);
    }
  }
LAB_143af2544:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af2658 FUN_143af2658 body=9 status=ok
// SIG undefined FUN_143af2658(void)

void FUN_143af2658(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 143af26a4 FUN_143af26a4 body=304 status=ok
// SIG undefined FUN_143af26a4(void)

void FUN_143af26a4(longlong param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_58 [40];
  uint local_30;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar6 = *(int **)(param_1 + 8);
  iVar10 = *piVar6;
  if (iVar10 <= **(int **)(param_1 + 0x10)) {
    bVar1 = *param_3;
    iVar2 = *param_2;
    if ((iVar2 < 1 & (bVar1 ^ 1)) == 0) {
      iVar7 = **(int **)(param_1 + 0x10);
      if (0 < iVar2) {
        iVar7 = iVar2;
      }
      if ((0 < iVar7) && (iVar7 <= *(int *)(*(longlong *)(param_1 + 0x18) + 0x150))) {
        uVar8 = iVar7 - 1;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x148);
        iVar2 = *(int *)(lVar4 + 4 + (ulonglong)uVar8 * 8);
        if ((iVar2 != 0) &&
           ((uVar3 = *(uint *)(lVar4 + (ulonglong)uVar8 * 8), -1 < (int)uVar3 &&
            ((int)uVar3 < DAT_14c9647dc)))) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar9 != (longlong *)0x0) &&
             ((((int)plVar9[2] == iVar2 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) &&
              (*plVar9 != 0)))) {
            cVar5 = FUN_14822193e();
            if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
            }
            piVar6 = *(int **)(param_1 + 8);
            iVar10 = *piVar6;
          }
        }
        *piVar6 = iVar10 + 1;
        plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
        local_30 = uVar8;
        local_29 = bVar1;
        if (plVar9 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar9 + 0x10))(plVar9,&local_30,&local_29);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af27f4 FUN_143af27f4 body=9 status=ok
// SIG undefined FUN_143af27f4(void)

void FUN_143af27f4(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 143af2804 FUN_143af2804 body=739 status=ok
// SIG undefined FUN_143af2804(void)

ulonglong FUN_143af2804(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_143af5e68(&local_58,*param_2);
  FUN_143af5e68(&local_68,*param_3);
  lVar13 = local_58;
  lVar11 = local_68;
  plVar6 = (longlong *)CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
  if (local_68 == 0 || local_58 == 0) goto LAB_143af2861;
  local_80 = *param_1;
  local_78 = *(undefined1 *)(param_1 + 1);
  local_74 = *(undefined8 *)((longlong)param_1 + 0xc);
  if (*(longlong *)(local_58 + 0xc0) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_143af2270(*(longlong *)(local_58 + 0xc0),*(undefined8 *)(local_58 + 200),
                          &DAT_149dfb77a,1);
  }
  if (*(longlong *)(lVar11 + 0xc0) == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)
             FUN_143af2270(*(longlong *)(lVar11 + 0xc0),*(undefined8 *)(lVar11 + 200),&DAT_149dfb77a
                           ,1);
  }
  cVar3 = FUN_14821c4a8();
  if (cVar3 == '\0') {
    lVar12 = 0;
    lVar8 = 0;
  }
  else {
    if (*(int *)(lVar13 + 0xd4) == 0) {
LAB_143af2a9f:
      lVar8 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar13 + 0xd0);
      lVar8 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != *(int *)(lVar13 + 0xd4) ||
            ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_143af2a9f;
        lVar8 = *plVar7;
      }
    }
    if (*(int *)(lVar11 + 0xd4) == 0) {
LAB_143af2aa6:
      lVar12 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar11 + 0xd0);
      lVar12 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != *(int *)(lVar11 + 0xd4) ||
            ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_143af2aa6;
        lVar12 = *plVar7;
      }
    }
  }
  if ((lVar5 != 0 || lVar8 != 0) && (plVar6 != (longlong *)0x0 || lVar12 != 0)) {
    cVar3 = FUN_143af2ae8(&local_80,lVar5,lVar8);
    cVar4 = FUN_143af2ae8(&local_80,plVar6,lVar12);
    if ((cVar4 == '\0') && (cVar3 != '\0')) {
      plVar6 = (longlong *)0x0;
      goto LAB_143af2861;
    }
    if (lVar5 == 0) {
      iVar9 = 0;
      if ((lVar8 != 0) && (FUN_1482376cc(&local_48,lVar8), local_48 != 0)) {
        iVar9 = *(int *)(local_48 + 0x28);
      }
    }
    else {
      iVar9 = *(int *)(lVar5 + 0x28);
    }
    if (plVar6 == (longlong *)0x0) {
      iVar10 = 0;
      if (lVar12 != 0) {
        plVar6 = &local_48;
        FUN_1482376cc(plVar6,lVar12);
        if (local_48 != 0) {
          iVar10 = *(int *)(local_48 + 0x28);
        }
      }
    }
    else {
      iVar10 = (int)plVar6[5];
    }
    plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),iVar9 < iVar10);
    lVar11 = local_68;
    lVar13 = local_58;
    if (iVar9 != iVar10) goto LAB_143af2861;
  }
  plVar6 = (longlong *)
           CONCAT71((int7)((ulonglong)plVar6 >> 8),
                    *(uint *)(lVar13 + 0x50) < *(uint *)(lVar11 + 0x50));
LAB_143af2861:
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar6 & 0xffffffff;
}



// FUNCTION 143af2ae8 FUN_143af2ae8 body=1106 status=ok
// SIG undefined FUN_143af2ae8(void)

ulonglong FUN_143af2ae8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 unaff_RBX;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  code *local_40;
  undefined8 uStack_38;
  longlong *local_30;
  ulonglong local_28;
  undefined7 uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      uVar8 = 0;
      goto LAB_143af2c5b;
    }
    lVar4 = param_1[1];
    lVar11 = *(longlong *)(*param_1 + 0x20);
    if (lVar11 == 0) {
LAB_143af2cbe:
      lVar11 = 0;
    }
    else {
      if (DAT_14cae9568 == 0) {
        local_70 = &local_40;
        local_40 = FUN_1417de738;
        local_60 = &LAB_145893408;
        local_68 = &LAB_1458cbbd2;
        local_78 = &LAB_147ba21f1;
        local_80 = &LAB_1463e9233;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x1000000c;
        local_a0 = 8;
        local_a8 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      }
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30))
      goto LAB_143af2cbe;
    }
    FUN_148237874(&local_40,lVar11,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),(char)lVar4) & 0xffffffff,param_3);
    plVar9 = param_3;
    if (((char)param_1[1] == '\x02') &&
       (cVar5 = FUN_1403e7f2a(&local_40), plVar9 = param_3, cVar5 == '\0')) {
      lVar11 = *(longlong *)(*param_1 + 0x20);
      if (lVar11 == 0) {
LAB_143af2d2d:
        lVar11 = 0;
      }
      else {
        if (DAT_14cae9568 == 0) {
          local_70 = &local_58;
          local_58 = FUN_1417de738;
          local_60 = &LAB_145893408;
          local_68 = &LAB_1458cbbd2;
          local_78 = &LAB_147ba21f1;
          local_80 = &LAB_1463e9233;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x1000000c;
          local_a0 = 8;
          local_a8 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        }
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30))
        goto LAB_143af2d2d;
      }
      FUN_148237874(&local_58,lVar11,0,param_3);
      plVar1 = local_30;
      plVar9 = local_48;
      local_40 = local_58;
      uStack_38 = uStack_50;
      uStack_50 = 0;
      plVar7 = local_30;
      if (local_48 != local_30) {
        local_48 = (longlong *)0x0;
        local_30 = plVar9;
        if (plVar1 == (longlong *)0x0) goto LAB_143af2c09;
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        plVar9 = local_48;
        plVar7 = local_30;
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar9 = local_48;
          plVar7 = local_30;
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            plVar9 = local_48;
            plVar7 = local_30;
          }
        }
      }
LAB_143af2d6d:
      local_30 = plVar7;
      plVar7 = plVar9;
      if (plVar9 != (longlong *)0x0) {
LAB_143af2d76:
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plVar9 = plVar7;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) goto LAB_143af2bcd;
        }
      }
    }
  }
  else {
    plVar9 = (longlong *)((longlong)param_1 + 0xc);
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,(char)param_1[1],plVar9);
    local_40 = (code *)*puVar6;
    uStack_38 = puVar6[1];
    local_30 = (longlong *)puVar6[2];
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    if (((char)param_1[1] != '\x02') || (cVar5 = FUN_1403e7f2a(&local_40), cVar5 != '\0'))
    goto LAB_143af2c09;
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,0,plVar9);
    plVar9 = local_30;
    local_40 = (code *)*puVar6;
    uStack_38 = puVar6[1];
    plVar7 = (longlong *)puVar6[2];
    if (plVar7 == (longlong *)0x0) {
      if (local_30 == (longlong *)0x0) goto LAB_143af2c09;
      local_30 = (longlong *)0x0;
      plVar7 = plVar9;
      goto LAB_143af2d76;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 != local_30) goto LAB_143af2d6d;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_143af2c09;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    plVar9 = plVar7;
    if (*piVar2 != 0) goto LAB_143af2c09;
LAB_143af2bcd:
    (**(code **)(*plVar7 + 0x10))(plVar7);
    plVar9 = plVar7;
  }
LAB_143af2c09:
  plVar7 = local_30;
  uVar10 = (undefined7)((ulonglong)plVar9 >> 8);
  uVar8 = CONCAT71(uVar10,1);
  if ((local_40 != DAT_14c966d80) && (local_40 != DAT_14c964dd0)) {
    uVar8 = CONCAT71(uVar10,local_40 == DAT_14c965d60);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_30 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143af2c5b:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143af2f3c FUN_143af2f3c body=78 status=ok
// SIG undefined FUN_143af2f3c(void)

undefined8 * FUN_143af2f3c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6bab0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 143af2f8a FUN_143af2f8a body=78 status=ok
// SIG undefined FUN_143af2f8a(void)

undefined8 * FUN_143af2f8a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ae6bab0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 143af2fd8 FUN_143af2fd8 body=103 status=ok
// SIG undefined FUN_143af2fd8(void)

ulonglong FUN_143af2fd8(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_143af3026;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14825432c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_143af3026:
  return uVar4 & 0xffffffff;
}



// FUNCTION 143af3040 FUN_143af3040 body=227 status=ok
// SIG undefined FUN_143af3040(void)

undefined8 * FUN_143af3040(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14825aeca(param_1 + 1,iVar1);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 2);
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14825c706(param_1 + 4,iVar1);
    FUN_14825c770(param_1[4],uVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_14825c7a2(param_1 + 6,iVar1);
    FUN_14825c80c(param_1[6],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 143af3123 FUN_143af3123 body=5944 status=ok
// SIG undefined FUN_143af3123(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143af3123(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_7c [4];
  undefined4 local_78;
  undefined4 uStack_74;
  wchar_t *local_68;
  int iStack_60;
  uint uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae3e550,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = (undefined4 *)0x2;
  FUN_14282b410(L"/Script/CommonUI",0,0,&PTR_FUN_14ae3ea80);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = (undefined4 *)0x2;
  FUN_14282b410(L"/Script/CommonUI",0,0,&PTR_FUN_14ae3eb80);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae3eff0,1,0);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = (undefined4 *)0x1;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae3f860,1,&PTR_FUN_14ae3f830);
  local_68 = L"WidgetPaletteCategory";
  iStack_60 = 0x15;
  FUN_1446e940c(&local_78,&local_68);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  FUN_1446e940c(local_7c,&local_68);
  local_68 = L"Common UI Plugin";
  iStack_60 = 0x10;
  FUN_140208c1e(&DAT_14cb44b28,local_7c,&local_78,&local_68);
  atexit((_func_5014 *)&LAB_143ae5828);
  FUN_1400b22c2(&local_68,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_68,&DAT_14cb44b38);
  if (cVar2 == '\0') {
    _DAT_14cb44b38 = 0;
    uRam000000014cb44b40 = 0;
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae40870,1,0);
  FUN_1446f470e(&DAT_14cb44bd0,L"BP_GetDesiredFocusTarget",1);
  FUN_1446f470e(&DAT_14cb44be0,L"BP_GetDesiredInputConfig",1);
  FUN_1446f470e(&DAT_14cb44bf0,L"BP_OnActivated",1);
  FUN_1446f470e(&DAT_14cb44c00,L"BP_OnDeactivated",1);
  FUN_1446f470e(&DAT_14cb44c10,L"BP_OnHandleBackAction",1);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae42370,1,0);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb44c68,L"CommonUI.Debug.WarnDesiredFocusNotImplemented",&DAT_14cb44c78,
                L"Warn when a widget is activated without GetDesiredFocus implemented.");
  atexit(FUN_143ae64f7);
  DAT_14cb44c80 = 0;
  _DAT_14cb44c88 = 0;
  _DAT_14cb44c90 = 2;
  atexit(FUN_143ae653c);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae42930,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae435a0,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae44000,2,0);
  FUN_1446f470e(&DAT_14cb44e10,L"BP_OnClicked",1);
  FUN_1446f470e(&DAT_14cb44e20,L"BP_OnDeselected",1);
  FUN_1446f470e(&DAT_14cb44e30,L"BP_OnDisabled",1);
  FUN_1446f470e(&DAT_14cb44e40,L"BP_OnDoubleClicked",1);
  FUN_1446f470e(&DAT_14cb44e50,L"BP_OnEnabled",1);
  FUN_1446f470e(&DAT_14cb44e60,L"BP_OnFocusLost",1);
  FUN_1446f470e(&DAT_14cb44e70,L"BP_OnFocusReceived",1);
  FUN_1446f470e(&DAT_14cb44e80,L"BP_OnHovered",1);
  FUN_1446f470e(&DAT_14cb44e90,L"BP_OnInputActionTriggered",1);
  FUN_1446f470e(&DAT_14cb44ea0,L"BP_OnInputMethodChanged",1);
  FUN_1446f470e(&DAT_14cb44eb0,L"BP_OnLockClicked",1);
  FUN_1446f470e(&DAT_14cb44ec0,L"BP_OnLockDoubleClicked",1);
  FUN_1446f470e(&DAT_14cb44ed0,L"BP_OnLockedChanged",1);
  FUN_1446f470e(&DAT_14cb44ee0,L"BP_OnPressed",1);
  FUN_1446f470e(&DAT_14cb44ef0,L"BP_OnReleased",1);
  FUN_1446f470e(&DAT_14cb44f00,L"BP_OnSelected",1);
  FUN_1446f470e(&DAT_14cb44f10,L"BP_OnUnhovered",1);
  FUN_1446f470e(&DAT_14cb45010,L"OnActionComplete",1);
  FUN_1446f470e(&DAT_14cb45020,L"OnActionProgress",1);
  FUN_1446f470e(&DAT_14cb45030,L"OnCurrentTextStyleChanged",1);
  FUN_1446f470e(&DAT_14cb45048,L"OnTriggeredInputActionChanged",1);
  FUN_1446f470e(&DAT_14cb45058,L"OnTriggeringEnhancedInputActionChanged",1);
  FUN_1446f470e(&DAT_14cb45068,L"OnTriggeringInputActionChanged",1);
  FUN_1446f470e(&local_68,L"ClickEvent",1);
  DAT_14cb45178 = local_68;
  DAT_14cb45180 = 3;
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = (undefined4 *)0x1;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4b8b0,4,&PTR_FUN_14ae4b880);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb451a0,L"CommonButton.EnableSimulateHoverOnTouch",&DAT_14c762a54,
                L"Allows buttons to simulate hovering on touch in accordance with the property SimulateHoverOnTouchInput.\n0: Disable, 1: Enable (default)"
               );
  atexit(FUN_143ae7492);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb451b0,L"UseTransparentButtonStyleAsDefault",&DAT_14cb451c0,
                L"If true, the default Button Style for the CommonButtonBase\'s SButton will be set to NoBorder, which has a transparent background and no padding"
               );
  atexit(FUN_143ae74d7);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4c310,1,0);
  local_68 = (wchar_t *)0x763d40010925477b;
  iStack_60 = 0x9d91d673;
  uStack_5c = 0xb75b411;
  _DAT_14cb451f8 = 0x925477b;
  uRam000000014cb451fc = 0x763d4001;
  uRam000000014cb45200 = 0x9d91d673;
  uRam000000014cb45204 = 0xb75b411;
  FUN_141005458(&local_68,1,L"CommonUIVer",0);
  atexit((_func_5014 *)&LAB_143ae8379);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4cca0,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4d470,1,0);
  FUN_1446f470e(&DAT_14cb45258,L"Typing",1);
  FUN_1446f470e(&DAT_14cb45260,L"Open",1);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4da40,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4de70,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4e940,1,0);
  local_68 = L"AssetRegistry";
  iStack_60 = 0xd;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_68,1);
  _DAT_14cb452d8 = (ulonglong)uVar3;
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4f090,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae4f690,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae507d0,2,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14ae51f90;
  local_98 = (undefined4 *)0x1;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae51fe0,1,&PTR_FUN_14ae51fb0);
  FUN_1446f470e(&DAT_14cb45438,L"OnAcquireFromPool",1);
  FUN_1446f470e(&DAT_14cb45448,L"OnReleaseToPool",1);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae52470,1,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14ae52db0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae52dd0,1,0);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb454b0,L"CommonRichTextBlock.CVarApplyMobileScaleOnTextRuns",&DAT_14cb454a8)
  ;
  atexit(FUN_143ae8e45);
  FUN_140056680(&DAT_14cb454c0,&DAT_149f0f4f8);
  atexit((_func_5014 *)&LAB_143ae8e8a);
  FUN_140056680(&DAT_14cb454d0,L"text");
  atexit((_func_5014 *)&LAB_143ae8e9b);
  FUN_140056680(&DAT_14cb454e0,L"case");
  atexit((_func_5014 *)&LAB_143ae8eac);
  FUN_140056680(&DAT_14cb454f0,L"upper");
  atexit((_func_5014 *)&LAB_143ae8ebd);
  FUN_140056680(&DAT_14cb45500,L"lower");
  atexit((_func_5014 *)&LAB_143ae8ece);
  FUN_140056680(&DAT_14cb45510,L"color");
  atexit((_func_5014 *)&LAB_143ae8edf);
  FUN_140056680(&DAT_14cb45520,L"opacity");
  atexit((_func_5014 *)&LAB_143ae8ef0);
  FUN_140056680(&DAT_14cb45530,L"fontface");
  atexit((_func_5014 *)&LAB_143ae8f01);
  FUN_140056680(&DAT_14cb45540,L"size");
  atexit((_func_5014 *)&LAB_143ae8f12);
  FUN_140056680(&DAT_14cb45550,&DAT_14ae5301e);
  atexit((_func_5014 *)&LAB_143ae8f23);
  FUN_140056680(&DAT_14cb45560,L"input");
  atexit((_func_5014 *)&LAB_143ae8f34);
  FUN_140056680(&DAT_14cb45570,L"action");
  atexit((_func_5014 *)&LAB_143ae8f45);
  FUN_140056680(&DAT_14cb45580,L"axis");
  atexit((_func_5014 *)&LAB_143ae8f56);
  FUN_140056680(&DAT_14cb45590,&DAT_14a8e6a32);
  atexit((_func_5014 *)&LAB_143ae8f67);
  FUN_140056680(&DAT_14cb455a0,L"borderless");
  atexit((_func_5014 *)&LAB_143ae8f78);
  DAT_14cb455d0 = 0;
  DAT_14cb455d8 = 0;
  DAT_14cb455b0 = 0;
  _DAT_14cb455b8 = 0;
  _DAT_14cb455dc = 0xffffffff00000080;
  DAT_14cb455e4 = 0;
  DAT_14cb455f0 = 0;
  DAT_14cb455f8 = 0;
  atexit(FUN_143ae8f89);
  FUN_1446f470e(&DAT_14cb45628,L"BP_OnOptionSelected",1);
  FUN_1446f470e(&DAT_14cb45638,L"BP_OnOptionsPopulated",1);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14ae54040;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae54060,1,0);
  FUN_1446f470e(&DAT_14cb45708,L"HandlePostLinkedSwitcherChanged_BP",1);
  FUN_1446f470e(&DAT_14cb45718,L"HandlePreLinkedSwitcherChanged_BP",1);
  FUN_1446f470e(&DAT_14cb45738,L"HandleTabCreation",1);
  FUN_1446f470e(&DAT_14cb45748,L"HandleTabRemoval",1);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x1;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae56760,1);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae58720,3);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae58cd0,1);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae591e0,1);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae59660,1);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae59b20,1);
  local_68 = (wchar_t *)0x800000014ae3f8d6;
  local_78 = 8;
  iStack_60 = FUN_14577453c(L"CommonUI",&local_78);
  uStack_5c = CONCAT31(uStack_5c._1_3_,1);
  FUN_146482680(&local_68);
  local_68 = (wchar_t *)0x454816c64288211b;
  iStack_60 = 0x1a7667b2;
  uStack_5c = 0x507a2a00;
  _DAT_14cb45904 = 0x4288211b;
  uRam000000014cb45908 = 0x454816c6;
  uRam000000014cb4590c = 0x1a7667b2;
  uRam000000014cb45910 = 0x507a2a00;
  FUN_141005458(&local_68,1,L"CommonUI",0);
  atexit((_func_5014 *)&LAB_143aea03a);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x1;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5a0b0,1,&PTR_FUN_14ae5a080);
  local_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  local_98 = (undefined4 *)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5a5e0,1,0);
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_68 = L"Platform.Trait.PlayInEditor";
  iStack_60 = 0x1b;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_68,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = &local_78;
  FUN_14125750c(&DAT_14cb45960,uVar6,uVar5,uVar4);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143aea046);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5af90,1,0);
  ppuStack_90 = &PTR_FUN_14ae5c430;
  local_88 = 1;
  local_98 = (undefined4 *)0x2;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5c4a0,3,&PTR_FUN_14ae5c450);
  FUN_1458d9e50(&DAT_14cb45a30);
  atexit((_func_5014 *)&LAB_143aea3f5);
  local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffff00000000);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cb45d28,L"Mobile.EnableUITextScaling",&local_68,
                L"Enables Mobile UI Text Scaling");
  atexit(FUN_143aea4da);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5cad0,1,0);
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_68 = L"Input.MouseAndKeyboard";
  iStack_60 = 0x16;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_68,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = &local_78;
  FUN_14125750c(&DAT_14cb45d60,uVar6,uVar5,uVar4);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143aea51f);
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_68 = L"Input.Gamepad";
  iStack_60 = 0xd;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_68,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = &local_78;
  FUN_14125750c(&DAT_14cb45d68,uVar6,uVar5,uVar4);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143aea52b);
  FUN_140056680(&local_78,&DAT_149dfb77a);
  local_68 = L"Input.Touch";
  iStack_60 = 0xb;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar4 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_68,1);
  local_68 = L"CommonUI";
  iStack_60 = 8;
  uStack_5c = uStack_5c & 0xffffff00;
  uVar6 = FUN_14001a6c0(&local_68,1);
  ppuStack_90 = (undefined **)((ulonglong)ppuStack_90 & 0xffffffff00000000);
  local_98 = &local_78;
  FUN_14125750c(&DAT_14cb45d70,uVar6,uVar5,uVar4);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_143aea537);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5d400,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5e550,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5f1a0,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5f530,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae5fdf0,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae60260,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae60f80,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae61900,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae63060,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae636a0,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae63f00,1,0);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb460e8,L"ActionBar.IgnoreOptOut",&DAT_14cb460e0,
                L"If true, the Bound Action Bar will display bindings whether or not they are configured bDisplayInReflector"
               );
  atexit(FUN_143aec79a);
  FUN_1446f470e(&DAT_14cb460f8,L"OnUpdateInputAction",1);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae647f0,1,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae64fc0,2,0);
  local_88 = 0;
  local_98 = (undefined4 *)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae653c0,1,0);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb46170,L"CommonUI.AlwaysShowCursor",&DAT_14cb46168,&DAT_149dfb77a);
  atexit(FUN_143aeda3e);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb46180,L"CommonUI.AutoFlushPressedKeys",&DAT_14c762a58,
                L"Causes the pressed keys to be flushed when the Input Mode is switched to Menu.");
  atexit(FUN_143aeda83);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb46190,L"CommonUI.ResetUIInputConfigOnActivatableTreeDeactivation",
                &DAT_14c762a59,
                L"Controls if input config is reset when root is changed via deactivation.");
  atexit(FUN_143aedac8);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb461a0,L"CommonUI.Debug.TraceConfigChanges",&DAT_14cb461b0,
                L"Trace Input Config transitions (Non-shipping). Suggest use with Slate.Debug.TraceNavigationConfig (Non-shipping)."
               );
  atexit(FUN_143aedb0d);
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cb461b8,L"CommonUI.Debug.TraceConfigOnScreen",&DAT_14cb461c8,
                L"Trace for input configs should be displayed on screen. Requires CommonUI.Debug.TraceConfigChanges."
               );
  atexit(FUN_143aedb52);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14cb461d0,L"CommonUI.Debug.TraceInputConfigNum",&DAT_14c762a5c,
                L"Number of Input config to keep in trace history.");
  atexit(FUN_143aedb97);
  local_98._0_4_ = 0;
  FUN_14153156c(&DAT_14cb461e0,L"CommonUI.Debug.WarnAllWidgetsDeactivated",&DAT_14cb461f0,
                L"Warn when all widgets are deactivated. A valid event, but may have leftover input configs."
               );
  atexit(FUN_143aedbdc);
  local_98._0_4_ = 0;
  FUN_14153156c(&DAT_14cb461f8,L"CommonUI.Debug.CheckGameViewportClientValid",&DAT_14c762a60,
                L"Log error when CommonUI is used without the current game viewport deriving from CommonGameViewportClient."
               );
  atexit(FUN_143aedc21);
  local_68 = (wchar_t *)CONCAT71(local_68._1_7_,1);
  local_98._0_4_ = 0;
  FUN_140bd5914(&DAT_14cb46208,L"CommonUI.Debug.EarlyOutRefreshActionDomainLeafNodeConfig",&local_68
                ,
                L"When true early out in RefreshActionDomainLeafNodeConfig if there is an active root node."
               );
  atexit(FUN_143aedc66);
  FUN_1458e052c(&DAT_14cb46220);
  _DAT_14cb46220 = &PTR_FUN_14ae67600;
  _DAT_14cb46228 = 0;
  uRam000000014cb46230 = 0;
  _DAT_14cb46238 = 0;
  uRam000000014cb46240 = 0;
  local_68 = (wchar_t *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 8) = lVar7;
  *(undefined ***)local_68 = &PTR_FUN_14a380e50;
  *(code **)(local_68 + 0xc) = FUN_143aef500;
  local_98 = (undefined4 *)((ulonglong)local_98._4_4_ << 0x20);
  FUN_14156bb10(&DAT_14cb46288,L"CommonUI.DumpActivatableTree",
                L"Outputs the current state of the activatable tree. 4 args: bIncludeActions, bIncludeChildren, bIncludeInactive, LocalPlayerId (optional, defaults to -1 or all)"
                ,&local_68);
  if (iStack_60 == 0) {
LAB_143af46f3:
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
    goto LAB_143af46f3;
  }
  atexit(FUN_143aef793);
  local_68 = (wchar_t *)0x0;
  iStack_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  iStack_60 = 2;
  *(undefined ***)local_68 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_68 + 8) = lVar7;
  *(undefined ***)local_68 = &PTR_FUN_14a1e19d0;
  *(code **)(local_68 + 0xc) = FUN_143aef7d8;
  local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_14156bb80(&DAT_14cb46298,L"CommonUI.DumpInputConfig",
                L"Outputs the current Input Config for each player",&local_68);
  if (iStack_60 != 0) {
    if (local_68 == (wchar_t *)0x0) goto LAB_143af47e9;
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    iStack_60 = 0;
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_143af47e9:
  atexit(FUN_143aefb2a);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af485c FUN_143af485c body=41 status=ok
// SIG undefined FUN_143af485c(void)

void FUN_143af485c(void)

{
  DAT_14cb46470 = 0;
  if (DAT_14cb46468 != 0) {
    FUN_1400020a8();
  }
  FUN_1461c5ec4();
  return;
}



// FUNCTION 143af4886 FUN_143af4886 body=5600 status=ok
// SIG undefined FUN_143af4886(void)

longlong * FUN_143af4886(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  bool bVar30;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  float local_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  float local_98;
  undefined4 uStack_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  float local_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  bVar5 = FUN_14821c4a8();
  FUN_14825d08e(param_3,&local_90);
  if (((local_90 != (longlong *)0x0) ||
      (((((bVar5 != 0 && (*(int *)((longlong)param_3 + 0x1c) != 0)) &&
         (uVar7 = *(uint *)(param_3 + 3), -1 < (int)uVar7)) &&
        (((int)uVar7 < DAT_14c9647dc &&
         (lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar12 != 0)))) &&
       ((*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_3 + 0x1c) &&
        ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))))) &&
     (((longlong *)param_3[8] != (longlong *)0x0 && (int)param_3[9] != 0 &&
      (cVar6 = (**(code **)(*(longlong *)param_3[8] + 0x30))(), cVar6 != '\0')))) {
    if (*param_3 == 0) {
      lVar23 = 0;
LAB_143af4913:
      lVar12 = param_3[1];
      if (lVar12 == 0 && param_3[2] == 0) {
LAB_143af4947:
        if (((lVar23 != 0) || ((bVar5 & (param_3[2] == 0 && param_3[1] == 0)) != 1)) ||
           (((*(int *)((longlong)param_3 + 0x1c) != 0 &&
             (((uVar7 = *(uint *)(param_3 + 3), -1 < (int)uVar7 && ((int)uVar7 < DAT_14c9647dc)) &&
              (lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar12 != 0))
             )) && ((*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_3 + 0x1c) &&
                    ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))))) {
          local_f8 = param_2;
          local_f0 = param_1;
          if (DAT_14cb46450 == 0) {
            uVar26 = 1;
            uVar25 = 0;
            iVar21 = 0;
            uVar7 = 0;
          }
          else {
            puVar24 = &DAT_14cb46438;
            if (DAT_14cb46448 != (uint *)0x0) {
              puVar24 = DAT_14cb46448;
            }
            uVar7 = *puVar24;
            if (uVar7 == 0) {
              iVar21 = DAT_14cb46450 + 0x1e;
              if (-1 < (int)(DAT_14cb46450 - 1)) {
                iVar21 = DAT_14cb46450 - 1;
              }
              uVar25 = 0;
              uVar26 = (ulonglong)(uint)(iVar21 >> 5);
              if (iVar21 >> 5 < 1) {
                uVar26 = uVar25;
              }
              iVar21 = 0;
              do {
                if (uVar26 == uVar25) goto LAB_143af4c80;
                iVar21 = iVar21 + 0x20;
                uVar7 = puVar24[uVar25 + 1];
                uVar25 = uVar25 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar25 = 0;
              iVar21 = 0;
            }
            uVar26 = (ulonglong)(-uVar7 & uVar7);
            uVar2 = uVar26 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            uVar7 = (iVar21 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
            if ((int)DAT_14cb46450 <= (int)uVar7) {
              uVar7 = DAT_14cb46450;
            }
          }
          if (uVar7 != DAT_14cb46450) {
            uVar22 = 0xffffffff;
            local_e8 = (ulonglong)DAT_14cb46450;
            do {
              lVar12 = DAT_14cb46428;
              plVar19 = *(longlong **)(DAT_14cb46428 + 8 + (longlong)(int)uVar7 * 0x20);
              FUN_14825d08e(param_3);
              if ((*plVar19 == local_e0) &&
                 (lVar12 = *(longlong *)(lVar12 + (longlong)(int)uVar7 * 0x20 + 8),
                 *(int *)(lVar12 + 8) == *(int *)((longlong)param_3 + 0x24))) {
                if ((*(int *)(lVar12 + 0x14) == 0) ||
                   (uVar7 = *(uint *)(lVar12 + 0x10), (int)uVar7 < 0)) {
LAB_143af4c2a:
                  plVar19 = (longlong *)0x0;
                }
                else {
                  plVar19 = (longlong *)0x0;
                  if ((int)uVar7 < DAT_14c9647dc) {
                    puVar20 = (undefined8 *)
                              ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                    if (((puVar20 == (undefined8 *)0x0) ||
                        (*(int *)(puVar20 + 2) != *(int *)(lVar12 + 0x14))) ||
                       ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)) goto LAB_143af4c2a;
                    plVar19 = (longlong *)*puVar20;
                  }
                }
                param_1 = local_f0;
                if (plVar19 == local_f8) goto LAB_143af4c41;
              }
              uVar22 = uVar22 & ~(uint)uVar26;
              puVar24 = DAT_14cb46448;
              if (DAT_14cb46448 == (uint *)0x0) {
                puVar24 = &DAT_14cb46438;
              }
              iVar8 = (int)uVar25;
              lVar12 = (longlong)iVar8;
              uVar7 = puVar24[lVar12] & uVar22;
              if (uVar7 == 0) {
                iVar17 = DAT_14cb46450 + 0x1e;
                if (-1 < (int)(DAT_14cb46450 - 1)) {
                  iVar17 = DAT_14cb46450 - 1;
                }
                iVar17 = iVar17 >> 5;
                iVar21 = iVar21 + 0x20;
                iVar18 = iVar17;
                if (iVar17 < iVar8) {
                  iVar18 = iVar8;
                }
                if (iVar8 < iVar17) {
                  lVar23 = 0;
                  do {
                    uVar7 = (puVar24 + lVar12 + 1)[lVar23];
                    if (uVar7 != 0) {
                      uVar25 = (ulonglong)(iVar8 + (int)lVar23 + 1);
                      uVar22 = 0xffffffff;
                      goto LAB_143af4bf4;
                    }
                    iVar21 = iVar21 + 0x20;
                    lVar23 = lVar23 + 1;
                  } while (iVar18 - lVar12 != lVar23);
                  uVar22 = 0xffffffff;
                  iVar8 = iVar18;
                }
                uVar25 = (ulonglong)(iVar8 + 1);
                uVar7 = DAT_14cb46450;
              }
              else {
LAB_143af4bf4:
                uVar26 = (ulonglong)(-uVar7 & uVar7);
                uVar2 = uVar26 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                uVar7 = (iVar21 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
                if ((int)DAT_14cb46450 <= (int)uVar7) {
                  uVar7 = DAT_14cb46450;
                }
              }
            } while (uVar7 != (uint)local_e8);
          }
LAB_143af4c80:
          lVar12 = FUN_14001cc68(0x110,0x10);
          FUN_14825d08e(param_3,lVar12);
          *(undefined4 *)(lVar12 + 8) = *(undefined4 *)((longlong)param_3 + 0x24);
          *(undefined1 *)(lVar12 + 0xc) = *(undefined1 *)((longlong)param_3 + 0x29);
          *(char *)(lVar12 + 0xd) = (char)param_3[5];
          *(undefined8 *)(lVar12 + 0x10) = 0;
          if (local_f8 == (longlong *)0x0) {
            iVar21 = 0;
          }
          else {
            uVar7 = *(uint *)((longlong)local_f8 + 0xc);
            *(uint *)(lVar12 + 0x10) = uVar7;
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar23 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar23 = 0;
            }
            iVar21 = *(int *)(lVar23 + 0x10);
            if (*(int *)(lVar23 + 0x10) == 0) {
              LOCK();
              iVar21 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar30 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar21;
              if (bVar30) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar21 = *(int *)(lVar23 + 0x10);
              bVar30 = iVar21 == 0;
              if (bVar30) {
                *(int *)(lVar23 + 0x10) = iVar8;
                iVar21 = 0;
              }
              UNLOCK();
              if (bVar30) {
                iVar21 = iVar8;
              }
            }
          }
          *(int *)(lVar12 + 0x14) = iVar21;
          *(char *)(lVar12 + 0x18) = (char)param_3[4];
          *(undefined1 *)(lVar12 + 0x19) = *(undefined1 *)((longlong)param_3 + 0x2a);
          plVar19 = (longlong *)param_3[6];
          *(longlong **)(lVar12 + 0x20) = plVar19;
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 8))();
          }
          *(int *)(lVar12 + 0x28) = (int)param_3[7];
          *(undefined8 *)(lVar12 + 0x30) = 0;
          *(undefined8 *)(lVar12 + 0x38) = 0;
          *(undefined8 *)(lVar12 + 0x3c) = 0;
          *(undefined8 *)(lVar12 + 0x44) = 0;
          FUN_14009d848(lVar12 + 0x40,param_3 + 8);
          iVar21 = DAT_14cb46420 + 1;
          *(int *)(lVar12 + 0x50) = DAT_14cb46420;
          DAT_14cb46420 = iVar21;
          *(undefined8 *)(lVar12 + 0x58) = 0;
          *(undefined8 *)(lVar12 + 0x60) = 0;
          *(undefined8 *)(lVar12 + 0x68) = 0;
          *(undefined8 *)(lVar12 + 0x70) = 0;
          *(undefined8 *)(lVar12 + 0x78) = 0;
          *(undefined8 *)(lVar12 + 0x80) = 0;
          *(undefined4 *)(lVar12 + 0x88) = 2;
          *(undefined8 *)(lVar12 + 0x8c) = 0;
          *(undefined8 *)(lVar12 + 0x94) = 0;
          *(undefined8 *)(lVar12 + 0x9c) = 0x200000000;
          *(undefined8 *)(lVar12 + 0xa4) = 0;
          *(undefined8 *)(lVar12 + 0xac) = 0;
          *(undefined4 *)(lVar12 + 0xb4) = 0;
          *(undefined8 *)(lVar12 + 0xb8) = 2;
          lVar23 = param_3[1];
          *(longlong *)(lVar12 + 0xc0) = lVar23;
          if ((lVar23 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(longlong *)(lVar12 + 200) = param_3[2];
          *(longlong *)(lVar12 + 0xd0) = param_3[3];
          *(undefined8 *)(lVar12 + 0xd8) = 0xbff0000000000000;
          *(undefined8 *)(lVar12 + 0xe0) = 0;
          *(undefined8 *)(lVar12 + 0xe8) = 0;
          *(undefined8 *)(lVar12 + 0xf0) = 0x3ff0000000000000;
          *(undefined8 *)(lVar12 + 0xf8) = 0;
          *(undefined8 *)(lVar12 + 0x100) = 0;
          *(undefined8 *)(lVar12 + 0x108) = 0;
          local_90 = (longlong *)0x0;
          local_88 = (longlong *)((ulonglong)local_88._4_4_ << 0x20);
          FUN_140328a42(&local_90,param_3 + 10);
          if (((int)local_88 == 0) || (local_90 == (longlong *)0x0)) {
LAB_143af5c3b:
            if ((int)local_88 == 0) goto LAB_143af4ff5;
            if (local_90 != (longlong *)0x0) {
              (**(code **)*local_90)(local_90,0);
              FUN_1446efa72(&local_90,0,0,0x10);
              goto LAB_143af4fe2;
            }
          }
          else {
            cVar6 = (**(code **)(*local_90 + 0x30))();
            if (cVar6 == '\0') {
              goto LAB_143af5c3b;
            }
            plVar19 = (longlong *)(lVar12 + 0x78);
            if (*(int *)(lVar12 + 0x8c) < 1) {
              iVar21 = *(int *)(lVar12 + 0x80);
              iVar8 = *(int *)(lVar12 + 0x88) + -1;
              *(int *)(lVar12 + 0x88) = iVar8;
              if (iVar8 <= iVar21) {
                iVar8 = iVar21;
                if (0 < iVar21) {
                  iVar17 = 0;
                  do {
                    if (((*(int *)(*plVar19 + 8 + (longlong)iVar17 * 0x10) == 0) ||
                        (plVar28 = *(longlong **)(*plVar19 + (longlong)iVar17 * 0x10),
                        plVar28 == (longlong *)0x0)) ||
                       (cVar6 = (**(code **)(*plVar28 + 0x28))(), cVar6 != '\0')) {
                      FUN_14005b288(plVar19,iVar17);
                      FUN_14005b248(plVar19);
                    }
                    else {
                      iVar17 = iVar17 + 1;
                    }
                    iVar8 = *(int *)(lVar12 + 0x80);
                  } while (iVar17 < iVar8);
                }
                iVar17 = 2;
                if (2 < iVar8 * 2) {
                  iVar17 = iVar8 * 2;
                }
                *(int *)(lVar12 + 0x88) = iVar17;
                if ((iVar17 < iVar21) && (*(int *)(lVar12 + 0x84) != iVar8)) {
                  FUN_14045812c();
                }
              }
            }
            if (((int)local_88 != 0) && (local_90 != (longlong *)0x0)) {
              (**(code **)(*local_90 + 0x38))(local_90,&local_b0);
            }
            iVar21 = *(int *)(lVar12 + 0x80);
            *(uint *)(lVar12 + 0x80) = iVar21 + 1U;
            if (*(uint *)(lVar12 + 0x84) < iVar21 + 1U) {
              FUN_1447a71f6(plVar19,iVar21);
            }
            lVar23 = *plVar19;
            lVar27 = (longlong)iVar21 * 0x10;
            *(undefined8 *)(lVar23 + lVar27) = 0;
            *(undefined4 *)(lVar23 + 8 + lVar27) = 0;
            *(longlong **)(lVar23 + lVar27) = local_90;
            local_90 = (longlong *)0x0;
            *(int *)(lVar23 + 8 + lVar27) = (int)local_88;
LAB_143af4fe2:
            local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
LAB_143af4ff5:
            if (local_90 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          local_90 = (longlong *)0x0;
          local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
          FUN_14009d848(&local_90,param_3 + 0xc);
          FUN_1448b6402(lVar12 + 0x90,&local_b0,&local_90);
          if ((int)local_88 == 0) {
LAB_143af5077:
            if (local_90 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_90 != (longlong *)0x0) {
            (**(code **)*local_90)(local_90,0);
            FUN_1446efa72(&local_90,0,0,0x10);
            local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
            goto LAB_143af5077;
          }
          local_90 = (longlong *)0x0;
          local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
          FUN_14009d848(&local_90,param_3 + 0xe);
          FUN_1448b6402(lVar12 + 0xa8,&local_b0,&local_90);
          if ((int)local_88 == 0) {
LAB_143af50fc:
            if (local_90 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_90 != (longlong *)0x0) {
            (**(code **)*local_90)(local_90,0);
            FUN_1446efa72(&local_90,0,0,0x10);
            local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
            goto LAB_143af50fc;
          }
          plVar19 = (longlong *)(lVar12 + 0x58);
          plVar28 = (longlong *)(lVar12 + 0x68);
          if (*param_3 == 0) {
            cVar6 = FUN_14821c4a8();
            if ((((((cVar6 == '\0') || (*(int *)((longlong)param_3 + 0x1c) == 0)) ||
                  (uVar7 = *(uint *)(param_3 + 3), (int)uVar7 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar7 ||
                  (lVar23 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8),
                  lVar23 == 0)))) || (*(int *)(lVar23 + 0x10) != *(int *)((longlong)param_3 + 0x1c))
                ) || ((*(uint *)(lVar23 + 8) & 0x10200000) != 0)) {
              if (*(longlong *)(lVar12 + 0xc0) == 0) {
                plVar14 = (longlong *)0x0;
              }
              else {
                plVar14 = (longlong *)
                          FUN_143af2270(*(longlong *)(lVar12 + 0xc0),*(undefined8 *)(lVar12 + 200),
                                        &DAT_149dfb77a,1);
              }
              plVar13 = *(longlong **)(lVar12 + 0x20);
              if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
                plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
              }
              FUN_1447a1fc0(plVar13);
              plVar13 = *(longlong **)(lVar12 + 0x20);
              pcVar4 = *(code **)(*plVar13 + 0x28);
              if (pcVar4 == FUN_14482841c) {
                plVar16 = plVar13 + 3;
                if (plVar13[5] != 0) {
                  plVar16 = (longlong *)(plVar13[5] + 8);
                }
              }
              else if (pcVar4 == (code *)&LAB_14010c34c) {
                plVar16 = plVar13 + 2;
              }
              else {
                plVar16 = (longlong *)(*pcVar4)(plVar13);
              }
              if ((int)plVar16[1] < 2) {
                plVar13 = (longlong *)plVar14[1];
                plVar16 = *(longlong **)(lVar12 + 0x20);
                if (plVar16 != plVar13) {
                  *(longlong **)(lVar12 + 0x20) = plVar13;
                  if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 8))();
                  }
                  if (plVar16 != (longlong *)0x0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                  }
                }
                *(int *)(lVar12 + 0x28) = (int)plVar14[2];
              }
              lVar23 = (**(code **)(*local_f8 + 0x2d0))();
              if (lVar23 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = FUN_1403f18c8(lVar23);
              }
              FUN_140e94dc2(*(undefined8 *)(lVar23 + 0x20));
              puVar20 = (undefined8 *)(**(code **)(*plVar14 + 0x20))(plVar14,0,&DAT_14cb449b0);
              local_78 = 0.0;
              if (*(char *)((longlong)puVar20 + 0x19) == '\0') {
                uStack_74 = 0;
              }
              else {
                uStack_74 = *(undefined4 *)(puVar20 + 4);
                local_78 = *(float *)((longlong)puVar20 + 0x1c);
              }
              local_90 = (longlong *)*puVar20;
              local_88 = (longlong *)puVar20[1];
              plVar13 = (longlong *)puVar20[2];
              if (plVar13 == (longlong *)0x0) {
                local_80 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar16 = plVar13 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                local_80 = plVar13;
                if ((int)*plVar16 == 0) {
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
              plVar13 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14,2,&DAT_14cb449b0);
              local_98 = 0.0;
              if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
                uStack_94 = 0;
              }
              else {
                uStack_94 = (undefined4)plVar13[4];
                local_98 = *(float *)((longlong)plVar13 + 0x1c);
              }
              local_b0 = *plVar13;
              local_a8 = (longlong *)plVar13[1];
              plVar13 = (longlong *)plVar13[2];
              if (plVar13 == (longlong *)0x0) {
                local_a0 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                UNLOCK();
                LOCK();
                plVar16 = plVar13 + 1;
                *(int *)plVar16 = (int)*plVar16 + -1;
                UNLOCK();
                local_a0 = plVar13;
                if ((int)*plVar16 == 0) {
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
              lVar23 = (**(code **)(*local_f8 + 0x2d0))();
              if (lVar23 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = FUN_1403f18c8(lVar23);
              }
              lVar23 = FUN_140e94dc2(*(undefined8 *)(lVar23 + 0x20));
              local_d0 = *(undefined8 *)(lVar23 + 0x94);
              puVar20 = (undefined8 *)(**(code **)(*plVar14 + 0x20))(plVar14,1);
              local_b8 = 0.0;
              if (*(char *)((longlong)puVar20 + 0x19) == '\0') {
                uStack_b4 = 0;
              }
              else {
                uStack_b4 = *(undefined4 *)(puVar20 + 4);
                local_b8 = *(float *)((longlong)puVar20 + 0x1c);
              }
              local_d0 = *puVar20;
              local_c8 = puVar20[1];
              plVar14 = (longlong *)puVar20[2];
              if (plVar14 == (longlong *)0x0) {
                local_c0 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
                LOCK();
                plVar13 = plVar14 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                local_c0 = plVar14;
                if ((int)*plVar13 == 0) {
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
              if (*(char *)((longlong)param_3 + 0x2b) == '\x01') {
                if ((DAT_14c86a9f8 == '\x01') &&
                   (iVar21 = *(int *)(*(longlong *)
                                       ((longlong)ThreadLocalStoragePointer +
                                       (ulonglong)_tls_index * 8) + 0xc60), iVar21 != 2)) {
                  if (iVar21 == 1) {
                    DVar10 = FUN_140ad26c0();
                    DVar11 = GetCurrentThreadId();
                    if (DVar10 == DVar11) goto LAB_143af5cbf;
                  }
                  local_70 = (longlong *)0x14ae3d854;
                  local_68 = 0xb;
                  local_64 = 0;
                  uVar9 = FUN_14001a6c0(&local_70,1);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c874a20) &&
                     (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
                    FUN_145762954(&DAT_14c874628);
                    DAT_14c874a18 = 1;
                    atexit(FUN_14278de47);
                    _Init_thread_footer(&DAT_14c874a20);
                  }
                  plVar14 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar9);
                }
                else {
LAB_143af5cbf:
                  local_70 = (longlong *)0x14ae3d854;
                  local_68 = 0xb;
                  local_64 = 0;
                  uVar9 = FUN_14001a6c0(&local_70,1);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c874a20) &&
                     (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
                    FUN_145762954(&DAT_14c874628);
                    DAT_14c874a18 = 1;
                    atexit(FUN_14278de47);
                    _Init_thread_footer(&DAT_14c874a20);
                  }
                  plVar14 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar9,&local_70,1);
                }
                uVar15 = (**(code **)(*plVar14 + 0x40))(plVar14);
                FUN_148217694(uVar15,&local_d8);
                if ((((local_d8 != 0) && (lVar23 = FUN_1459d6fd2(), lVar23 != 0)) &&
                    (*(int *)(lVar23 + 0x38) <= *(int *)(local_d8 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(local_d8 + 0x30) + (longlong)*(int *)(lVar23 + 0x38) * 8) ==
                    lVar23 + 0x30)) {
                  if ((DAT_14c86a9f8 == '\x01') &&
                     (iVar21 = *(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0xc60), iVar21 != 2)) {
                    if (iVar21 == 1) {
                      DVar10 = FUN_140ad26c0();
                      DVar11 = GetCurrentThreadId();
                      if (DVar10 == DVar11) goto LAB_143af5d96;
                    }
                    local_70 = (longlong *)0x14ae3d854;
                    local_68 = 0xb;
                    local_64 = 0;
                    uVar9 = FUN_14001a6c0(&local_70,1);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c874a20) &&
                       (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
                      FUN_145762954(&DAT_14c874628);
                      DAT_14c874a18 = 1;
                      atexit(FUN_14278de47);
                      _Init_thread_footer(&DAT_14c874a20);
                    }
                    plVar14 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar9);
                  }
                  else {
LAB_143af5d96:
                    local_70 = (longlong *)0x14ae3d854;
                    local_68 = 0xb;
                    local_64 = 0;
                    uVar9 = FUN_14001a6c0(&local_70,1);
                    if ((*(int *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x110) < DAT_14c874a20) &&
                       (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
                      FUN_145762954(&DAT_14c874628);
                      DAT_14c874a18 = 1;
                      atexit(FUN_14278de47);
                      _Init_thread_footer(&DAT_14c874a20);
                    }
                    plVar14 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar9,&local_70,1);
                  }
                  uVar15 = (**(code **)(*plVar14 + 0x40))(plVar14);
                  FUN_148217694(uVar15,&local_70);
                  plVar14 = local_70;
                  if (local_70 == (longlong *)0x0) {
                    lVar23 = 0;
                  }
                  else {
                    lVar23 = local_70[0x22];
                    if (lVar23 == 0) {
                      (**(code **)(*local_70 + 1000))(local_70);
                      lVar23 = plVar14[0x22];
                    }
                  }
                  if (local_78 <= 0.0) {
                    local_78 = *(float *)(lVar23 + 0x28);
                  }
                  if (local_98 <= 0.0) {
                    local_98 = *(float *)(lVar23 + 0x38);
                  }
                  if (local_b8 <= 0.0) {
                    local_b8 = *(float *)(lVar23 + 0x30);
                  }
                }
              }
              cVar6 = FUN_1403e7f2a(&local_90);
              if (cVar6 != '\0') {
                if (local_78 <= 0.0) {
                  iVar21 = *(int *)(lVar12 + 0x60);
                  *(uint *)(lVar12 + 0x60) = iVar21 + 1U;
                  if (*(uint *)(lVar12 + 100) < iVar21 + 1U) {
                    FUN_148262574(plVar19,iVar21);
                  }
                  lVar23 = *plVar19;
                }
                else {
                  iVar21 = *(int *)(lVar12 + 0x70);
                  *(uint *)(lVar12 + 0x70) = iVar21 + 1U;
                  if (*(uint *)(lVar12 + 0x74) < iVar21 + 1U) {
                    FUN_148262574(plVar28,iVar21);
                  }
                  lVar23 = *plVar28;
                }
                lVar27 = (longlong)iVar21 * 0x20;
                *(longlong **)(lVar23 + lVar27) = local_90;
                *(longlong **)(lVar23 + 8 + lVar27) = local_88;
                *(longlong **)(lVar23 + 0x10 + lVar27) = local_80;
                if (local_80 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_80 + 1) = (int)local_80[1] + 1;
                  UNLOCK();
                }
                *(ulonglong *)(lVar23 + lVar27 + 0x18) = CONCAT44(uStack_74,local_78);
              }
              cVar6 = FUN_1403e7f2a(&local_b0);
              if (cVar6 != '\0') {
                if (local_98 <= 0.0) {
                  iVar21 = *(int *)(lVar12 + 0x60);
                  *(uint *)(lVar12 + 0x60) = iVar21 + 1U;
                  if (*(uint *)(lVar12 + 100) < iVar21 + 1U) {
                    FUN_148262574(plVar19,iVar21);
                  }
                  lVar23 = *plVar19;
                }
                else {
                  iVar21 = *(int *)(lVar12 + 0x70);
                  *(uint *)(lVar12 + 0x70) = iVar21 + 1U;
                  if (*(uint *)(lVar12 + 0x74) < iVar21 + 1U) {
                    FUN_148262574(plVar28,iVar21);
                  }
                  lVar23 = *plVar28;
                }
                lVar27 = (longlong)iVar21 * 0x20;
                *(longlong *)(lVar23 + lVar27) = local_b0;
                *(longlong **)(lVar23 + 8 + lVar27) = local_a8;
                *(longlong **)(lVar23 + 0x10 + lVar27) = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                }
                *(ulonglong *)(lVar23 + lVar27 + 0x18) = CONCAT44(uStack_94,local_98);
              }
              cVar6 = FUN_1403e7f2a(&local_d0);
              if (cVar6 != '\0') {
                if (local_b8 <= 0.0) {
                  iVar21 = *(int *)(lVar12 + 0x60);
                  *(uint *)(lVar12 + 0x60) = iVar21 + 1U;
                  if (*(uint *)(lVar12 + 100) < iVar21 + 1U) {
                    FUN_148262574(plVar19,iVar21);
                  }
                  lVar23 = *plVar19;
                }
                else {
                  iVar21 = *(int *)(lVar12 + 0x70);
                  *(uint *)(lVar12 + 0x70) = iVar21 + 1U;
                  if (*(uint *)(lVar12 + 0x74) < iVar21 + 1U) {
                    FUN_148262574(plVar28,iVar21);
                  }
                  lVar23 = *plVar28;
                }
                lVar27 = (longlong)iVar21 * 0x20;
                *(undefined8 *)(lVar23 + lVar27) = local_d0;
                *(undefined8 *)(lVar23 + 8 + lVar27) = local_c8;
                *(longlong **)(lVar23 + 0x10 + lVar27) = local_c0;
                if (local_c0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
                  UNLOCK();
                }
                *(ulonglong *)(lVar23 + lVar27 + 0x18) = CONCAT44(uStack_b4,local_b8);
              }
              plVar19 = local_c0;
              if (local_c0 != (longlong *)0x0) {
                LOCK();
                plVar28 = local_c0 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*local_c0)(local_c0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar19 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar19 + 0x10))(plVar19);
                  }
                }
              }
              plVar19 = local_a0;
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar28 = local_a0 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*local_a0)(local_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar19 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar19 + 0x10))(plVar19);
                  }
                }
              }
              plVar19 = local_80;
              if (local_80 != (longlong *)0x0) {
                LOCK();
                plVar28 = local_80 + 1;
                *(int *)plVar28 = (int)*plVar28 + -1;
                UNLOCK();
                if ((int)*plVar28 == 0) {
                  (**(code **)*local_80)(local_80);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar19 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar19 + 0x10))(plVar19);
                  }
                }
              }
            }
          }
          else {
            plVar14 = (longlong *)FUN_145b1117c();
            lVar23 = plVar14[0x22];
            if (lVar23 == 0) {
              (**(code **)(*plVar14 + 1000))(plVar14);
              lVar23 = plVar14[0x22];
            }
            if ((longlong)*(int *)(lVar23 + 0x38) != 0) {
              plVar14 = *(longlong **)(lVar23 + 0x30);
              lVar23 = (longlong)*(int *)(lVar23 + 0x38) * 0x28;
              do {
                if (*plVar14 == *param_3) goto LAB_143af51d5;
                plVar14 = plVar14 + 5;
                lVar23 = lVar23 + -0x28;
              } while (lVar23 != 0);
            }
            plVar14 = (longlong *)0x0;
LAB_143af51d5:
            plVar13 = *(longlong **)(lVar12 + 0x20);
            if (*(code **)(*plVar13 + 0x50) != FUN_144828418) {
              plVar13 = (longlong *)(**(code **)(*plVar13 + 0x50))();
            }
            FUN_1447a1fc0(plVar13);
            plVar13 = *(longlong **)(lVar12 + 0x20);
            pcVar4 = *(code **)(*plVar13 + 0x28);
            if (pcVar4 == FUN_14482841c) {
              plVar16 = plVar13 + 3;
              if (plVar13[5] != 0) {
                plVar16 = (longlong *)(plVar13[5] + 8);
              }
            }
            else if (pcVar4 == (code *)&LAB_14010c34c) {
              plVar16 = plVar13 + 2;
            }
            else {
              plVar16 = (longlong *)(*pcVar4)(plVar13);
            }
            if ((int)plVar16[1] < 2) {
              plVar13 = (longlong *)plVar14[1];
              plVar16 = *(longlong **)(lVar12 + 0x20);
              if (plVar16 != plVar13) {
                *(longlong **)(lVar12 + 0x20) = plVar13;
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 8))();
                }
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
              *(int *)(lVar12 + 0x28) = (int)plVar14[2];
            }
            if ((longlong)(int)plVar14[4] != 0) {
              puVar20 = (undefined8 *)plVar14[3];
              lVar23 = (longlong)(int)plVar14[4] << 5;
              do {
                cVar6 = FUN_1403e7f2a(puVar20);
                if (cVar6 != '\0') {
                  if (*(float *)(puVar20 + 3) <= 0.0) {
                    iVar21 = *(int *)(lVar12 + 0x60);
                    *(uint *)(lVar12 + 0x60) = iVar21 + 1U;
                    if (*(uint *)(lVar12 + 100) < iVar21 + 1U) {
                      FUN_148262574(plVar19,iVar21);
                    }
                    lVar27 = *plVar19;
                  }
                  else {
                    iVar21 = *(int *)(lVar12 + 0x70);
                    *(uint *)(lVar12 + 0x70) = iVar21 + 1U;
                    if (*(uint *)(lVar12 + 0x74) < iVar21 + 1U) {
                      FUN_148262574(plVar28,iVar21);
                    }
                    lVar27 = *plVar28;
                  }
                  lVar29 = (longlong)iVar21 * 0x20;
                  *(undefined8 *)(lVar27 + lVar29) = *puVar20;
                  *(undefined8 *)(lVar27 + 8 + lVar29) = puVar20[1];
                  lVar3 = puVar20[2];
                  *(longlong *)(lVar27 + 0x10 + lVar29) = lVar3;
                  if (lVar3 != 0) {
                    LOCK();
                    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                    UNLOCK();
                  }
                  *(undefined8 *)(lVar27 + lVar29 + 0x18) = puVar20[3];
                }
                puVar20 = puVar20 + 4;
                lVar23 = lVar23 + -0x20;
              } while (lVar23 != 0);
            }
          }
          local_b0 = lVar12;
          local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
          param_1 = local_f0;
          local_a8[1] = (longlong)&DAT_100000001;
          *local_a8 = (longlong)&PTR_FUN_14ae6ef40;
          local_a8[2] = lVar12;
          *(undefined4 *)local_f0 = *(undefined4 *)(lVar12 + 0x50);
          local_90 = local_f0;
          local_88 = &local_b0;
          FUN_1482626ac(&local_d0);
          plVar19 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar28 = local_a8 + 1;
            *(int *)plVar28 = (int)*plVar28 + -1;
            UNLOCK();
            if ((int)*plVar28 == 0) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
              }
            }
          }
          goto LAB_143af4c47;
        }
      }
      else if (lVar12 != 0) {
        lVar12 = FUN_143af2270(lVar12,param_3[2],&DAT_149dfb77a,1);
        if (lVar12 != 0) {
          lVar23 = *param_3;
          goto LAB_143af4947;
        }
      }
    }
    else {
      plVar19 = (longlong *)FUN_145b1117c();
      lVar12 = plVar19[0x22];
      if (lVar12 == 0) {
        (**(code **)(*plVar19 + 1000))(plVar19);
        lVar12 = plVar19[0x22];
      }
      if ((longlong)*(int *)(lVar12 + 0x38) != 0) {
        lVar23 = *param_3;
        plVar19 = *(longlong **)(lVar12 + 0x30);
        lVar12 = (longlong)*(int *)(lVar12 + 0x38) * 0x28;
        do {
          if (*plVar19 == lVar23) {
            if (plVar19 != (longlong *)0x0) goto LAB_143af4913;
            break;
          }
          plVar19 = plVar19 + 5;
          lVar12 = lVar12 + -0x28;
        } while (lVar12 != 0);
      }
    }
  }
LAB_143af4c41:
  *(undefined4 *)param_1 = 0xffffffff;
LAB_143af4c47:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af5e68 FUN_143af5e68 body=139 status=ok
// SIG undefined FUN_143af5e68(void)

void FUN_143af5e68(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  
  if (DAT_14cb46430 != DAT_14cb4645c) {
    puVar3 = &DAT_14cb46460;
    if (DAT_14cb46468 != (undefined *)0x0) {
      puVar3 = DAT_14cb46468;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14cb46470 - 1U & param_2) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb46428 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14cb46428 + (longlong)iVar2 * 0x20) == param_2) {
        if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
          *param_1 = *(undefined8 *)(lVar1 + 8);
          lVar1 = *(longlong *)(lVar1 + 0x10);
          param_1[1] = lVar1;
          if (lVar1 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 143af5ef4 FUN_143af5ef4 body=625 status=ok
// SIG undefined FUN_143af5ef4(void)

void FUN_143af5ef4(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  
  if (DAT_14cb46450 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar10 = 0;
    iVar12 = 0;
  }
  else {
    puVar9 = &DAT_14cb46438;
    if (DAT_14cb46448 != (uint *)0x0) {
      puVar9 = DAT_14cb46448;
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar12 = DAT_14cb46450 + 0x1e;
      if (-1 < DAT_14cb46450 + -1) {
        iVar12 = DAT_14cb46450 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar17) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar16 = puVar9[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar3 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (DAT_14cb46450 <= iVar12) {
      iVar12 = DAT_14cb46450;
    }
  }
  if (iVar12 < DAT_14cb46450) {
    uVar16 = 0xffffffff;
    do {
      lVar11 = (longlong)iVar12 * 0x20;
      lVar14 = *(longlong *)(DAT_14cb46428 + 8 + lVar11);
      if ((((*(int *)(lVar14 + 0x14) == 0) || (uVar6 = *(uint *)(lVar14 + 0x10), (int)uVar6 < 0)) ||
          (DAT_14c9647dc <= (int)uVar6)) ||
         (((lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar13 == 0 ||
           (*(int *)(lVar13 + 0x10) != *(int *)(lVar14 + 0x14))) ||
          (((*(uint *)(lVar13 + 8) & 0x10200000) != 0 ||
           ((*(int *)(lVar14 + 0x48) == 0 || (*(longlong **)(lVar14 + 0x40) == (longlong *)0x0))))))
         )) {
LAB_143af6002:
        if (((*(longlong *)(lVar14 + 0x30) != 0) &&
            (plVar4 = *(longlong **)(lVar14 + 0x38), plVar4 != (longlong *)0x0)) &&
           (0 < (int)plVar4[1])) {
          iVar7 = (int)plVar4[1];
          do {
            if (iVar7 == 0) {
              FUN_143af6166(0,*(undefined4 *)(DAT_14cb46428 + lVar11));
              goto LAB_143af609e;
            }
            LOCK();
            iVar8 = (int)plVar4[1];
            bVar18 = iVar7 == iVar8;
            if (bVar18) {
              *(int *)(plVar4 + 1) = iVar7 + 1;
              iVar8 = iVar7;
            }
            iVar7 = iVar8;
            UNLOCK();
          } while (!bVar18);
          FUN_143af6166(*(undefined8 *)(lVar14 + 0x30),*(undefined4 *)(DAT_14cb46428 + lVar11));
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
LAB_143af609e:
        FUN_143afaf22(&DAT_14cb46428,iVar12);
      }
      else {
        cVar5 = (**(code **)(**(longlong **)(lVar14 + 0x40) + 0x30))();
        if (cVar5 == '\0') {
          lVar14 = *(longlong *)(DAT_14cb46428 + 8 + lVar11);
          goto LAB_143af6002;
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar9 = DAT_14cb46448;
      if (DAT_14cb46448 == (uint *)0x0) {
        puVar9 = &DAT_14cb46438;
      }
      iVar12 = (int)uVar17;
      lVar14 = (longlong)iVar12;
      uVar6 = puVar9[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = DAT_14cb46450 + 0x1e;
        if (-1 < DAT_14cb46450 + -1) {
          iVar7 = DAT_14cb46450 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar12) {
          iVar8 = iVar12;
        }
        if (iVar7 <= iVar12) {
          return;
        }
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = puVar9[lVar14 + lVar11 + 1];
          if (uVar6 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar8 - lVar14 == lVar11) {
            return;
          }
        }
        uVar17 = (ulonglong)(iVar12 + (int)lVar11 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar3 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar12 < DAT_14cb46450);
  }
  return;
}



// FUNCTION 143af6166 FUN_143af6166 body=288 status=ok
// SIG undefined FUN_143af6166(void)

void FUN_143af6166(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_1c;
  local_1c = param_2;
  iVar5 = FUN_1482543b2(param_1 + 3);
  if (iVar5 < 1) goto LAB_143af6265;
  FUN_143af5e68(&local_30,local_1c);
  puVar3 = local_30;
  if (local_30 != (undefined4 *)0x0) {
    plVar7 = *(longlong **)(local_30 + 0xe);
    *(undefined8 *)(local_30 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    if (0 < (int)local_30[0x1c]) {
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_28 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  cVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar4 == '\0') goto LAB_143af6265;
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_143af6283:
    lVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 5);
    lVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)((longlong)param_1 + 0x2c) ||
          ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_143af6283;
      lVar6 = *plVar7;
    }
  }
  FUN_1447f69b6(lVar6 + 200);
LAB_143af6265:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af6288 FUN_143af6288 body=121 status=ok
// SIG undefined FUN_143af6288(void)

ulonglong FUN_143af6288(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 < 0) {
    uVar3 = 0;
  }
  else {
    FUN_143af5e68(&local_28);
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),local_28 != 0);
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af6302 FUN_143af6302 body=226 status=ok
// SIG undefined FUN_143af6302(void)

void FUN_143af6302(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143af5e68(&local_28,*param_1);
  if ((((local_28 != 0) && (*(longlong *)(local_28 + 0x30) != 0)) &&
      (plVar3 = *(longlong **)(local_28 + 0x38), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_143af6166(0,*param_1);
        goto LAB_143af638b;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_143af6166(*(undefined8 *)(local_28 + 0x30),*param_1);
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
LAB_143af638b:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_148262b3c(&DAT_14cb46428,param_1);
  *param_1 = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af63e6 FUN_143af63e6 body=126 status=ok
// SIG undefined FUN_143af63e6(void)

void FUN_143af63e6(undefined4 *param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143af5e68(&local_28,*param_1);
  if (local_28 != 0) {
    FUN_14825d28a();
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af6476 FUN_143af6476 body=1833 status=ok
// SIG undefined FUN_143af6476(void)

undefined4 FUN_143af6476(longlong *param_1,char param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  char local_141;
  longlong local_140;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 *local_128;
  double *local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  LARGE_INTEGER local_f0;
  int local_e8;
  LARGE_INTEGER local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_12c = param_4;
  if ((longlong)(int)param_1[4] != 0) {
    puVar15 = (undefined4 *)param_1[3];
    puVar17 = puVar15 + (int)param_1[4];
    local_141 = param_2;
    local_128 = puVar17;
    do {
      FUN_143af5e68(&local_100,*puVar15);
      lVar8 = local_100;
      bVar7 = true;
      if ((local_100 != 0) && ((param_2 == '\x02' || (*(char *)(local_100 + 0x18) == param_2)))) {
        iVar3 = *(int *)(local_100 + 0x70);
        if ((longlong)iVar3 != 0) {
          lVar5 = *(longlong *)(local_100 + 0x68);
          local_110 = local_100 + 0xa8;
          local_140 = local_100 + 0x78;
          local_108 = local_100 + 0x90;
          local_120 = (double *)(local_100 + 0xe0);
          lVar16 = 0;
          do {
            if (*(char *)(lVar8 + 0xd) == '\x01') {
              if (*(longlong *)(lVar5 + lVar16) == *param_3) {
                if (*(char *)(lVar8 + 0x19) == '\0') goto LAB_143af65e6;
LAB_143af6652:
                if (local_12c == 0) {
                  if (((*(longlong *)(lVar8 + 0x100) != 0) && (*(longlong *)(lVar8 + 0x108) != 0))
                     && (0 < *(int *)(*(longlong *)(lVar8 + 0x108) + 8))) {
                    FUN_1401cb356();
                    local_e0 = *(LARGE_INTEGER *)(lVar8 + 0x100);
                    local_d8 = *(longlong **)(lVar8 + 0x108);
                    if (local_d8 != (longlong *)0x0) {
                      LOCK();
                      *(int *)((longlong)local_d8 + 0xc) = *(int *)((longlong)local_d8 + 0xc) + 1;
                      UNLOCK();
                    }
                    FUN_140d61352(&local_e0);
                    plVar6 = *(longlong **)(lVar8 + 0x108);
                    *(undefined8 *)(lVar8 + 0x100) = 0;
                    *(undefined8 *)(lVar8 + 0x108) = 0;
                    if (plVar6 != (longlong *)0x0) {
                      LOCK();
                      piVar2 = (int *)((longlong)plVar6 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar6 + 0x10))();
                      }
                    }
                  }
                  QueryPerformanceCounter(&local_f0);
                  *(double *)(lVar8 + 0xd8) = (double)local_f0.QuadPart * DAT_14c83f420 + 16777216.0
                  ;
                  uVar12 = 0;
                  if (0.0 < *(double *)(lVar8 + 0xf8)) {
                    dVar20 = *local_120 / *(double *)(lVar8 + 0xf8);
                    uVar12 = CONCAT44((int)((ulonglong)dVar20 >> 0x20),(float)dVar20);
                  }
                  FUN_14485dd80(local_140,uVar12);
                  FUN_1447f69b6(local_108);
LAB_143af6825:
                  uVar14 = 0;
                }
                else {
                  uVar14 = 2;
                  if (0.0 <= *(double *)(lVar8 + 0xd8)) {
                    if (local_12c == 1) {
                      QueryPerformanceCounter(&local_e0);
                      dVar19 = (double)local_e0.QuadPart * DAT_14c83f420;
                      dVar20 = *(double *)(lVar8 + 0xd8);
                      FUN_1447f69b6(local_110);
                      if (*(float *)(lVar5 + 0x1c + lVar16) <= 1e-08) {
                        FUN_14485dd80(local_140,0);
                        *(undefined8 *)(lVar8 + 0xd8) = 0xbff0000000000000;
                      }
                      else {
                        *(undefined8 *)(lVar8 + 0xd8) = 0xbff0000000000000;
                        fVar18 = *(float *)(lVar5 + 0x18 + lVar16);
                        local_130 = *(undefined4 *)(lVar8 + 0x50);
                        *(double *)(lVar8 + 0xf0) =
                             (double)(fVar18 / *(float *)(lVar5 + 0x1c + lVar16));
                        *(double *)(lVar8 + 0xf8) = (double)fVar18;
                        local_118 = FUN_1401cb356();
                        local_f0.QuadPart = 0;
                        local_e8 = 0;
                        FUN_1446efa72(&local_f0,0,2,0x10);
                        local_e8 = 2;
                        *(undefined ***)local_f0 = &PTR_LAB_149e02020;
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
                        *(longlong *)(local_f0.QuadPart + 0x10) = lVar11;
                        *(undefined ***)local_f0 = &PTR_FUN_14ae6ef60;
                        *(undefined4 *)(local_f0.QuadPart + 0x18) = local_130;
                        local_158 = 0;
                        FUN_1405f67fc(local_118,&local_e0,&local_f0,
                                      L"FUIActionBinding_BeginRollback_Lambda");
                        ((LARGE_INTEGER *)(lVar8 + 0x100))->QuadPart = (LONGLONG)local_e0;
                        local_e0.QuadPart = 0;
                        plVar6 = *(longlong **)(lVar8 + 0x108);
                        *(longlong **)(lVar8 + 0x108) = local_d8;
                        local_d8 = (longlong *)0x0;
                        if (plVar6 != (longlong *)0x0) {
                          LOCK();
                          piVar2 = (int *)((longlong)plVar6 + 0xc);
                          *piVar2 = *piVar2 + -1;
                          UNLOCK();
                          if (*piVar2 == 0) {
                            (**(code **)(*plVar6 + 0x10))();
                          }
                          if (local_d8 != (longlong *)0x0) {
                            LOCK();
                            piVar2 = (int *)((longlong)local_d8 + 0xc);
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            if (*piVar2 == 0) {
                              (**(code **)(*local_d8 + 0x10))();
                            }
                          }
                        }
                        if (local_e8 != 0) {
                          if ((undefined8 *)local_f0.QuadPart == (undefined8 *)0x0)
                          goto LAB_143af6a4b;
                          (*(code *)**(undefined8 **)local_f0)();
                          FUN_1446efa72(&local_f0,0,0,0x10);
                          local_e8 = 0;
                        }
                        if ((undefined8 *)local_f0.QuadPart != (undefined8 *)0x0) {
                          FUN_1400020a8();
                        }
                      }
LAB_143af6a4b:
                      fVar18 = (float)((dVar19 + 16777216.0) - dVar20);
                      if ((fVar18 <= 0.25) && (fVar18 < *(float *)(lVar5 + 0x18 + lVar16))) {
                        uVar14 = 1;
                      }
                    }
                    else if (local_12c == 2) {
                      dVar20 = (double)*(float *)(lVar5 + 0x18 + lVar16);
                      QueryPerformanceCounter(&local_e0);
                      dVar19 = (((double)local_e0.QuadPart * DAT_14c83f420 + 16777216.0) -
                               *(double *)(lVar8 + 0xd8)) + *(double *)(lVar8 + 0xe0);
                      if (dVar20 <= dVar19) {
                        dVar19 = dVar20;
                      }
                      if (dVar19 <= 0.0) {
                        dVar19 = 0.0;
                      }
                      *(double *)(lVar8 + 0xe8) = dVar19;
                      dVar19 = dVar19 / dVar20;
                      if (1.0 <= dVar19) {
                        dVar19 = 1.0;
                      }
                      if (dVar19 <= 0.0) {
                        dVar19 = 0.0;
                      }
                      FUN_14485dd80(local_140,(float)dVar19);
                      if (1.0 <= (float)dVar19) {
                        *(undefined8 *)(lVar8 + 0xd8) = 0xbff0000000000000;
                        if ((*(int *)(lVar8 + 0x48) != 0) &&
                           (*(longlong **)(lVar8 + 0x40) != (longlong *)0x0)) {
                          (**(code **)(**(longlong **)(lVar8 + 0x40) + 0x60))();
                        }
                        FUN_14485dd80(local_140,0);
                        *local_120 = 0.0;
                        local_120[1] = 0.0;
                        goto LAB_143af6825;
                      }
                    }
                  }
                }
                if (*(char *)(lVar8 + 0xc) != '\0') {
                  bVar7 = false;
                  puVar17 = local_128;
                  local_134 = uVar14;
                  param_2 = local_141;
                  goto LAB_143af6aa4;
                }
              }
            }
            else if (*(longlong *)(lVar5 + lVar16) == *param_3) {
LAB_143af65e6:
              if ((*(int *)(lVar8 + 0x14) == 0) || (uVar4 = *(uint *)(lVar8 + 0x10), (int)uVar4 < 0)
                 ) {
LAB_143af6a76:
                uVar12 = 0;
              }
              else {
                uVar12 = 0;
                if ((int)uVar4 < DAT_14c9647dc) {
                  puVar13 = (undefined8 *)
                            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                  if (((puVar13 == (undefined8 *)0x0) ||
                      (*(int *)(puVar13 + 2) != *(int *)(lVar8 + 0x14))) ||
                     ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_143af6a76;
                  uVar12 = *puVar13;
                }
              }
              cVar10 = (**(code **)(*param_1 + 0x20))(param_1,uVar12);
              if (cVar10 != '\0') goto LAB_143af6652;
            }
            lVar16 = lVar16 + 0x20;
            puVar17 = local_128;
            param_2 = local_141;
          } while ((longlong)iVar3 * 0x20 != lVar16);
        }
        bVar7 = true;
      }
LAB_143af6aa4:
      plVar6 = local_f8;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar14 = local_134;
      if (!bVar7) goto LAB_143af6b04;
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar17);
  }
  uVar14 = 2;
LAB_143af6b04:
  plVar6 = (longlong *)param_3[2];
  if (plVar6 != (longlong *)0x0) {
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
  if ((local_d0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 143af6ba0 FUN_143af6ba0 body=1328 status=ok
// SIG undefined FUN_143af6ba0(void)

ulonglong FUN_143af6ba0(longlong *param_1,char param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c4 = param_4;
  if ((longlong)(int)param_1[4] != 0) {
    puVar14 = (undefined4 *)param_1[3];
    puVar2 = puVar14 + (int)param_1[4];
    local_b0 = param_1;
    do {
      FUN_143af5e68(&local_98,*puVar14);
      lVar13 = local_98;
      if ((local_98 != 0) && ((param_2 == '\x02' || (*(char *)(local_98 + 0x18) == param_2)))) {
        cVar7 = FUN_14821c4a8();
        plVar5 = local_b0;
        if ((cVar7 != '\0') &&
           ((((*(int *)(lVar13 + 0xd4) != 0 && (uVar3 = *(uint *)(lVar13 + 0xd0), -1 < (int)uVar3))
             && ((int)uVar3 < DAT_14c9647dc)) &&
            (((plVar12 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(lVar13 + 0xd4))) &&
             (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
              (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar16 = *plVar12, lVar16 != 0)))))))
            ))) {
          local_a8 = 0;
          uStack_a0 = 0;
          if ((*(int *)((longlong)local_b0 + 0x2c) == 0) ||
             (uVar3 = *(uint *)(local_b0 + 5), (int)uVar3 < 0)) {
LAB_143af7036:
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            if ((int)uVar3 < DAT_14c9647dc) {
              plVar12 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if (((plVar12 == (longlong *)0x0) ||
                  ((int)plVar12[2] != *(int *)((longlong)local_b0 + 0x2c))) ||
                 ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_143af7036;
              lVar13 = *plVar12;
            }
          }
          FUN_14823773a(*(undefined8 *)(lVar13 + 0x20),lVar16,&local_a8);
          lVar13 = local_a8;
          if ((longlong)(int)uStack_a0 == 0) {
            uVar11 = 0;
            bVar6 = true;
          }
          else {
            lVar10 = (longlong)(int)uStack_a0 * 0x18;
            lVar15 = 0;
            local_b8 = lVar10;
            do {
              if (*(char *)(local_98 + 0xd) == '\x01') {
                cVar7 = *(char *)(local_98 + 0x19);
              }
              else {
                cVar7 = '\0';
              }
              if (((*(longlong *)(lVar13 + lVar15) == *param_3) ||
                  (*(longlong *)(lVar13 + lVar15) == DAT_14c966e68)) &&
                 (*(int *)(local_98 + 8) == local_c4)) {
                if (cVar7 == '\0') {
                  if ((*(int *)(local_98 + 0x14) == 0) ||
                     (uVar3 = *(uint *)(local_98 + 0x10), (int)uVar3 < 0)) {
LAB_143af6f7a:
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = 0;
                    if ((int)uVar3 < DAT_14c9647dc) {
                      puVar9 = (undefined8 *)
                               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                      if (((puVar9 == (undefined8 *)0x0) ||
                          (*(int *)(puVar9 + 2) != *(int *)(local_98 + 0x14))) ||
                         ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_143af6f7a;
                      uVar8 = *puVar9;
                    }
                  }
                  cVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,uVar8);
                  lVar10 = local_b8;
                  if (cVar7 == '\0') goto LAB_143af6efb;
                }
                local_c0 = local_98;
                *(undefined8 *)(local_98 + 0xd8) = 0xbff0000000000000;
                FUN_1482376cc(&local_68);
                if ((local_68 == 0) || (*(char *)(local_68 + 0x2c) != '\0')) {
                  if ((*(int *)(local_c0 + 0x48) != 0) &&
                     (*(longlong **)(local_c0 + 0x40) != (longlong *)0x0)) {
                    (**(code **)(**(longlong **)(local_c0 + 0x40) + 0x60))();
                  }
                }
                else {
                  local_88 = 0x3ff0000000000000;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_70 = 0;
                  if ((*(int *)((longlong)plVar5 + 0x2c) == 0) ||
                     (uVar3 = *(uint *)(plVar5 + 5), (int)uVar3 < 0)) {
LAB_143af6ff9:
                    lVar10 = 0;
                  }
                  else {
                    lVar10 = 0;
                    if ((int)uVar3 < DAT_14c9647dc) {
                      plVar12 = (longlong *)
                                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                      if (((plVar12 == (longlong *)0x0) ||
                          ((int)plVar12[2] != *(int *)((longlong)plVar5 + 0x2c))) ||
                         ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) goto LAB_143af6ff9;
                      lVar10 = *plVar12;
                    }
                  }
                  FUN_1482377c6(*(undefined8 *)(lVar10 + 0x20),lVar16,&local_88);
                }
                lVar10 = local_b8;
                if (*(char *)(local_c0 + 0xc) == '\x01') {
                  bVar6 = false;
                  goto LAB_143af7000;
                }
              }
LAB_143af6efb:
              lVar15 = lVar15 + 0x18;
            } while (lVar10 != lVar15);
            bVar6 = true;
LAB_143af7000:
            uVar11 = uStack_a0 & 0xffffffff;
          }
          FUN_144a65a1e(local_a8,uVar11);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          lVar13 = local_98;
          if (!bVar6) {
LAB_143af70a2:
            if (local_90 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_90 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar1 = (int *)((longlong)local_90 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_90 + 0x10))(local_90);
                }
              }
            }
            uVar11 = CONCAT71((int7)((ulonglong)local_90 >> 8),1);
            goto LAB_143af7044;
          }
        }
        iVar4 = *(int *)(lVar13 + 0x60);
        if ((longlong)iVar4 != 0) {
          lVar13 = *(longlong *)(lVar13 + 0x58);
          lVar16 = 0;
          do {
            if (*(char *)(local_98 + 0xd) == '\x01') {
              cVar7 = *(char *)(local_98 + 0x19);
            }
            else {
              cVar7 = '\0';
            }
            lVar10 = *(longlong *)(lVar13 + lVar16);
            if (((lVar10 == *param_3) || (lVar10 == DAT_14c966e68)) &&
               (*(int *)(local_98 + 8) == local_c4)) {
              if (cVar7 == '\0') {
                if ((*(int *)(local_98 + 0x14) == 0) ||
                   (uVar3 = *(uint *)(local_98 + 0x10), (int)uVar3 < 0)) {
LAB_143af6db8:
                  uVar8 = 0;
                }
                else {
                  uVar8 = 0;
                  if ((int)uVar3 < DAT_14c9647dc) {
                    puVar9 = (undefined8 *)
                             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                    if (((puVar9 == (undefined8 *)0x0) ||
                        (*(int *)(puVar9 + 2) != *(int *)(local_98 + 0x14))) ||
                       ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_143af6db8;
                    uVar8 = *puVar9;
                  }
                }
                cVar7 = (**(code **)(*local_b0 + 0x20))(local_b0,uVar8);
                if (cVar7 == '\0') goto LAB_143af6da6;
              }
              lVar10 = local_98;
              *(undefined8 *)(local_98 + 0xd8) = 0xbff0000000000000;
              if ((*(int *)(local_98 + 0x48) != 0) &&
                 (*(longlong **)(local_98 + 0x40) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(local_98 + 0x40) + 0x60))();
              }
              if (*(char *)(lVar10 + 0xc) != '\0') goto LAB_143af70a2;
            }
LAB_143af6da6:
            lVar16 = lVar16 + 0x20;
          } while ((longlong)iVar4 * 0x20 != lVar16);
        }
      }
      plVar5 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_90 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar2);
  }
  uVar11 = 0;
LAB_143af7044:
  plVar5 = (longlong *)param_3[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143af70d2 FUN_143af70d2 body=62 status=ok
// SIG undefined FUN_143af70d2(void)

void FUN_143af70d2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_143af6166(param_1,*(undefined4 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar3);
  }
  return;
}



// FUNCTION 143af7110 FUN_143af7110 body=388 status=ok
// SIG undefined FUN_143af7110(void)

void FUN_143af7110(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar6 = param_1[3];
  iVar5 = (int)param_1[4];
  lVar9 = (longlong)iVar5;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (*(int *)(lVar6 + lVar10) == *(int *)(param_2 + 0x50)) {
        return;
      }
      lVar10 = lVar10 + 4;
    } while (lVar9 * 4 - lVar10 != 0);
  }
  *(uint *)(param_1 + 4) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar5 + 1U) {
    FUN_14825432c(param_1 + 3,iVar5);
    lVar6 = param_1[3];
  }
  *(undefined4 *)(lVar6 + lVar9 * 4) = *(undefined4 *)(param_2 + 0x50);
  plVar8 = (longlong *)param_1[2];
  if (plVar8 == (longlong *)0x0) {
LAB_143af71a5:
    *(undefined8 *)(param_2 + 0x30) = 0;
    plVar7 = *(longlong **)(param_2 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        plVar8 = (longlong *)0x0;
        bVar11 = true;
LAB_143af71c5:
        (**(code **)(*plVar7 + 0x10))();
        *(longlong **)(param_2 + 0x38) = plVar8;
        if (!bVar11) goto LAB_143af71e1;
      }
      else {
        *(undefined8 *)(param_2 + 0x38) = 0;
      }
    }
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_143af71a5;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar11 = iVar5 == iVar3;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar11);
    *(longlong *)(param_2 + 0x30) = param_1[1];
    if (*(longlong **)(param_2 + 0x38) != plVar8) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_2 + 0x38);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          bVar11 = false;
          goto LAB_143af71c5;
        }
      }
      *(longlong **)(param_2 + 0x38) = plVar8;
    }
LAB_143af71e1:
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (0 < *(int *)(param_2 + 0x70)) {
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  }
  cVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    uVar2 = *(uint *)(param_1 + 5);
    lVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143af7258;
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) &&
       (((int)plVar8[2] == *(int *)((longlong)param_1 + 0x2c) &&
        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
      lVar6 = *plVar8;
      goto LAB_143af7258;
    }
  }
  lVar6 = 0;
LAB_143af7258:
  FUN_1447f69b6(lVar6 + 200);
  return;
}



// FUNCTION 143af7294 FUN_143af7294 body=320 status=ok
// SIG undefined FUN_143af7294(void)

void FUN_143af7294(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x20);
  local_60 = param_2;
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar7 = 0;
    do {
      FUN_143af5e68(&local_58,*(undefined4 *)(lVar4 + lVar7));
      puVar8 = local_58;
      plVar5 = (longlong *)CONCAT44(uStack_4c,local_50);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        plVar6 = (longlong *)CONCAT44(uStack_4c,local_50);
        if (plVar6 != (longlong *)0x0) {
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
      }
      if (puVar8 != (undefined2 *)0x0) {
        FUN_14825d0ea(puVar8,&local_58);
        puVar8 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar8 = local_58;
        }
        FUN_1407c8b48(local_60,L"\n%s-%s",
                      L"                                                                                                                                                                                                                                                               "
                      + (0xff - (longlong)param_3),puVar8);
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar3 * 4 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af73d6 FUN_143af73d6 body=418 status=ok
// SIG undefined FUN_143af73d6(void)

undefined8 * FUN_143af73d6(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ae6bab0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 5) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar2;
  param_1[6] = 0xffffffff;
  *param_1 = &PTR_FUN_14ae6cdb0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  iVar2 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0xb) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x5c) = iVar2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 143af7578 FUN_143af7578 body=414 status=ok
// SIG undefined FUN_143af7578(void)

void FUN_143af7578(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14ae6cdb0;
  if ((((*(char *)(param_1 + 0x12) == '\x01') && (*(int *)((longlong)param_1 + 0x2c) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 5), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0x2c))) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      FUN_14825d7aa(param_1);
    }
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1402c4dfe(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_148262ba0(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = param_1 + 9;
  if (*(int *)(param_1 + 10) == 0) {
LAB_143af7689:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 10) = 0;
      goto LAB_143af7689;
    }
  }
  plVar3 = param_1 + 7;
  if (*(int *)(param_1 + 8) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_143af76cc;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143af76cc:
  *param_1 = &PTR_FUN_14ae6bab0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143af76fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 143af7716 FUN_143af7716 body=94 status=ok
// SIG undefined FUN_143af7716(void)

undefined8 FUN_143af7716(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x5c))) &&
      ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar2;
    }
    else {
      lVar3 = 0;
    }
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x358));
  }
  return 0;
}



// FUNCTION 143af7774 FUN_143af7774 body=145 status=ok
// SIG undefined FUN_143af7774(void)

void FUN_143af7774(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  cVar5 = (**(code **)(*param_1 + 0x18))();
  if (cVar5 != '\0') {
    uVar1 = *(uint *)(param_1 + 4);
    if ((longlong)(int)uVar1 != 0) {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
        FUN_14825432c(param_2,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 4 + *param_2),(void *)param_1[3],(longlong)(int)uVar1 << 2);
    }
    lVar4 = param_1[0xf];
    if ((longlong)(int)lVar4 != 0) {
      lVar3 = param_1[0xe];
      lVar6 = 0;
      do {
        FUN_143af7774(*(undefined8 *)(lVar3 + lVar6),param_2);
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)lVar4 * 0x10 != lVar6);
    }
  }
  return;
}



// FUNCTION 143af7806 FUN_143af7806 body=1007 status=ok
// SIG undefined FUN_143af7806(void)

void FUN_143af7806(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,char param_5,
                  char param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_8c;
  undefined2 *local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)(param_1 + 0x5c);
  if (param_6 == '\0') {
    if (((((iVar2 == 0) || (uVar3 = *(uint *)(param_1 + 0x58), (int)uVar3 < 0)) ||
         (DAT_14c9647dc <= (int)uVar3)) ||
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar5 == (longlong *)0x0 || ((int)plVar5[2] != iVar2)))) ||
       ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_143af7a86;
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar5;
    }
    else {
      lVar4 = 0;
    }
    if (*(char *)(lVar4 + 0x358) != '\x01') goto LAB_143af7a86;
    iVar9 = 0xfe;
    if (param_3 * 4 < 0xfe) {
      iVar9 = param_3 * 4;
    }
LAB_143af7864:
    uVar3 = *(uint *)(param_1 + 0x58);
    if ((((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) ||
       ((puVar6 = (undefined8 *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        puVar6 == (undefined8 *)0x0 || (*(int *)(puVar6 + 2) != iVar2)))) goto LAB_143af79ff;
    uVar12 = *(undefined4 *)(param_1 + 0x20);
    if ((*(uint *)(puVar6 + 1) & 0x10200000) != 0) goto LAB_143af7a03;
    if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
      uVar7 = *puVar6;
    }
    else {
      uVar7 = 0;
    }
    FUN_140760c2c(uVar7,&local_60);
    local_8c = *(undefined4 *)(local_60 + 0x158);
    if (*(int *)(param_1 + 0x5c) == 0) {
LAB_143af7bda:
      lVar4 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x58);
      lVar4 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar5 == (longlong *)0x0) ||
           (((int)plVar5[2] != *(int *)(param_1 + 0x5c) ||
            ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_143af7bda;
        lVar4 = *plVar5;
      }
    }
    pwVar8 = L"false";
    if (*(char *)(lVar4 + 0x358) != '\0') {
      pwVar8 = L"true";
    }
    FUN_140056680(&local_70,pwVar8);
    local_88 = local_70;
    if (local_68 == 0) {
      local_88 = &DAT_149dfb77a;
    }
    if (*(int *)(param_1 + 0x5c) == 0) {
LAB_143af7be1:
      lVar4 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x58);
      lVar4 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar5 == (longlong *)0x0) ||
           (((int)plVar5[2] != *(int *)(param_1 + 0x5c) ||
            ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_143af7be1;
        lVar4 = *plVar5;
      }
    }
    local_50 = *(undefined8 *)(lVar4 + 0x18);
    FUN_1400021e4(&local_50,&local_80);
    puVar10 = local_80;
    if (local_78 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    local_a0 = local_8c;
    local_a8 = local_88;
    local_98 = uVar12;
    FUN_1407c8b48(param_2,L"\n%s%s: IsActivated? [%s]. LayerId=[%d]. [%d] Normal Bindings.",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)iVar9),puVar10);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  else {
    iVar9 = 0xfe;
    if (param_3 * 4 < 0xfe) {
      iVar9 = param_3 * 4;
    }
    if (iVar2 != 0) goto LAB_143af7864;
LAB_143af79ff:
    uVar12 = *(undefined4 *)(param_1 + 0x20);
LAB_143af7a03:
    FUN_1407c8b48(param_2,L"\n%s!!INVALID NODE!! [%d] Action Bindings.",
                  L"                                                                                                                                                                                                                                                               "
                  + (0xff - (longlong)iVar9),uVar12);
  }
  if ((char)param_4 != '\0') {
    FUN_143af7294(param_1,param_2,iVar9);
  }
  if ((param_5 != '\0') && (iVar2 = *(int *)(param_1 + 0x78), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar11 = 0;
    do {
      local_a0 = CONCAT31(local_a0._1_3_,param_6);
      local_a8 = (undefined2 *)CONCAT71(local_a8._1_7_,1);
      FUN_143af7806(*(undefined8 *)(lVar4 + lVar11),param_2,param_3 + 1,param_4);
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar11);
  }
LAB_143af7a86:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af7bf6 FUN_143af7bf6 body=257 status=ok
// SIG undefined FUN_143af7bf6(void)

void FUN_143af7bf6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  cVar6 = (char)param_2;
  if (*(char *)(param_1 + 0x90) == cVar6) {
    return;
  }
  if (cVar6 == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    FUN_14825ee68(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x5c) == 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x58);
    if ((int)uVar3 < 0) {
      return;
    }
    if (DAT_14c9647dc <= (int)uVar3) {
      return;
    }
    plVar7 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    if ((int)plVar7[2] != *(int *)(param_1 + 0x5c)) {
      return;
    }
    if ((*(uint *)(plVar7 + 1) & 0x10200000) != 0) {
      return;
    }
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar7;
    }
    else {
      lVar5 = 0;
    }
    if (*(char *)(lVar5 + 0x358) != '\x01') {
      return;
    }
    *(char *)(param_1 + 0x90) = cVar6;
    FUN_14825eddc(param_1);
  }
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x70);
    puVar8 = puVar9 + (longlong)*(int *)(param_1 + 0x78) * 2;
    do {
      uVar4 = *puVar9;
      plVar7 = (longlong *)puVar9[1];
      if (plVar7 == (longlong *)0x0) {
        FUN_143af7bf6(uVar4,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        FUN_143af7bf6(uVar4,param_2);
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
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar8);
  }
  return;
}



// FUNCTION 143af7cf8 FUN_143af7cf8 body=1158 status=ok
// SIG undefined FUN_143af7cf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143af7cf8(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *plStack_70;
  undefined1 *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong *)*param_2 == (longlong *)0x0) {
LAB_143af7d8e:
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
  }
  else {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (cVar4 == '\0') {
      uVar9 = 0;
      goto LAB_143af7fd1;
    }
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143af7d8e;
    plVar8 = (longlong *)param_2[1];
    local_50 = puVar3;
    local_48 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      FUN_143af817f(&local_78,&local_50);
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      FUN_143af817f(&local_78);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    }
  }
  if ((*(int *)(param_1 + 0xc0) != 0) && (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x60))();
  }
  lVar10 = local_78;
  plVar8 = *(longlong **)(param_1 + 0xd0);
  if (plVar8 == (longlong *)0x0) {
    lVar11 = 0;
  }
  else {
    iVar5 = (int)plVar8[1];
    lVar11 = 0;
    do {
      if (iVar5 == 0) goto LAB_143af7e06;
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar12 = iVar5 == iVar6;
      if (bVar12) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      iVar5 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar11 = *(longlong *)(param_1 + 200);
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
LAB_143af7e06:
  uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),lVar10 != lVar11);
  if (lVar10 != lVar11) {
    if (((*(longlong *)(param_1 + 200) != 0) &&
        (plVar8 = *(longlong **)(param_1 + 0xd0), plVar8 != (longlong *)0x0)) &&
       (0 < (int)plVar8[1])) {
      lVar10 = 0;
      iVar5 = (int)plVar8[1];
      do {
        iVar6 = iVar5;
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          goto LAB_143af80e0;
        }
        LOCK();
        iVar5 = (int)plVar8[1];
        bVar12 = iVar6 == iVar5;
        if (bVar12) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        UNLOCK();
      } while (!bVar12);
      lVar10 = *(longlong *)(param_1 + 200);
LAB_143af80e0:
      FUN_14825df82(lVar10);
      if ((((*(int *)(lVar10 + 0x5c) != 0) && (uVar2 = *(uint *)(lVar10 + 0x58), -1 < (int)uVar2))
          && (((int)uVar2 < DAT_14c9647dc &&
              ((plVar7 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar10 + 0x5c))))))) &&
         (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
        FUN_140457ffc(*plVar7 + 0x3d0,param_1);
      }
      if (iVar6 != 0) {
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    }
    plVar7 = plStack_70;
    *(longlong *)(param_1 + 200) = local_78;
    plVar8 = *(longlong **)(param_1 + 0xd0);
    if (plVar8 != plStack_70) {
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_70 + 0xc) = *(int *)((longlong)plStack_70 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0xd0);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0xd0) = plVar7;
    }
    if (param_3 != '\0') {
      FUN_143af85ae(param_1);
    }
    if (((*(longlong *)(param_1 + 200) != 0) &&
        (plVar8 = *(longlong **)(param_1 + 0xd0), plVar8 != (longlong *)0x0)) &&
       (0 < (int)plVar8[1])) {
      iVar5 = (int)plVar8[1];
      do {
        if (iVar5 == 0) {
          if (((_DAT_0000005c == 0) || ((int)_DAT_00000058 < 0)) ||
             (((DAT_14c9647dc <= (int)_DAT_00000058 ||
               ((plVar8 = (longlong *)
                          ((ulonglong)((_DAT_00000058 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(_DAT_00000058 >> 0x10) * 8)),
                plVar8 == (longlong *)0x0 || ((int)plVar8[2] != _DAT_0000005c)))) ||
              ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_143af7faa;
          lVar10 = *plVar8;
          goto LAB_143af7fa1;
        }
        LOCK();
        iVar6 = (int)plVar8[1];
        bVar12 = iVar5 == iVar6;
        if (bVar12) {
          *(int *)(plVar8 + 1) = iVar5 + 1;
          iVar6 = iVar5;
        }
        iVar5 = iVar6;
        UNLOCK();
      } while (!bVar12);
      iVar5 = *(int *)(*(longlong *)(param_1 + 200) + 0x5c);
      if (iVar5 == 0) {
LAB_143af8177:
        lVar10 = 0;
      }
      else {
        uVar2 = *(uint *)(*(longlong *)(param_1 + 200) + 0x58);
        lVar10 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != iVar5 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
          goto LAB_143af8177;
          lVar10 = *plVar7;
        }
      }
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
LAB_143af7fa1:
      if (lVar10 != 0) {
        local_60 = &LAB_14825f18e;
        local_58 = 0;
        FUN_14826395c(&local_50,param_1);
        FUN_1448b6402(lVar10 + 0x3d0,&local_60,&local_50);
        if ((int)local_48 != 0) {
          if (local_50 == (undefined8 *)0x0) goto LAB_143af7faa;
          (**(code **)*local_50)(local_50,0);
          FUN_1446efa72(&local_50,0,0,0x10);
          local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
        }
        if (local_50 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143af7faa:
  plVar8 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_70 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_143af7fd1:
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143af817f FUN_143af817f body=566 status=ok
// SIG undefined FUN_143af817f(void)

longlong * FUN_143af817f(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  int local_5c;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_2;
  if (((((*(int *)(lVar6 + 0x5c) != 0) && (uVar3 = *(uint *)(lVar6 + 0x58), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar6 + 0x5c))))) &&
     ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar10 = *plVar7;
    }
    else {
      lVar10 = 0;
    }
    if ((*(char *)(lVar10 + 0x358) == '\x01') && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar10 = *plVar7;
      }
      else {
        lVar10 = 0;
      }
      if (*(char *)(lVar10 + 0x2fb) != '\0') {
        if ((longlong)*(int *)(lVar6 + 0x78) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          lVar10 = *(longlong *)(lVar6 + 0x70);
          lVar9 = (longlong)*(int *)(lVar6 + 0x78) << 4;
          lVar6 = 0;
          plVar8 = (longlong *)0x0;
          do {
            FUN_143af817f(&local_58,lVar10);
            lVar4 = local_58;
            plVar7 = plVar8;
            if (local_58 != 0) {
              if (lVar6 != 0) {
                local_5c = FUN_14825e172(local_58);
                iVar5 = FUN_14825e172(lVar6);
                if (local_5c <= iVar5) goto LAB_143af82c2;
              }
              plVar7 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
                UNLOCK();
              }
              lVar6 = lVar4;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar8 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
            }
LAB_143af82c2:
            plVar8 = local_50;
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_50 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            lVar10 = lVar10 + 0x10;
            lVar9 = lVar9 + -0x10;
            plVar8 = plVar7;
          } while (lVar9 != 0);
          if (lVar6 != 0) {
            *param_1 = lVar6;
            param_1[1] = (longlong)plVar7;
            goto LAB_143af8391;
          }
          lVar6 = *param_2;
        }
        *param_1 = lVar6;
        lVar6 = param_2[1];
        param_1[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        if (plVar7 == (longlong *)0x0) {
LAB_143af8391:
          if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 != 0) goto LAB_143af8391;
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) goto LAB_143af8391;
        (**(code **)(*plVar7 + 0x10))(plVar7);
        goto LAB_143af8323;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_143af8323:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 143af83b6 FUN_143af83b6 body=488 status=ok
// SIG undefined FUN_143af83b6(void)

void FUN_143af83b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  lVar5 = DAT_14c9647c8;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x90) == '\0') {
    if (((*(longlong *)(param_1 + 200) != 0) &&
        (plVar10 = *(longlong **)(param_1 + 0xd0), plVar10 != (longlong *)0x0)) &&
       (0 < (int)plVar10[1])) {
      iVar8 = (int)plVar10[1];
      do {
        if (iVar8 == 0) {
          FUN_14825df82(0);
          goto LAB_143af858c;
        }
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      FUN_14825df82(*(undefined8 *)(param_1 + 200));
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
LAB_143af858c:
      local_38 = 0;
      uStack_30 = 0;
      FUN_143af7cf8(param_1,&local_38,1);
    }
  }
  else if ((((*(int *)(param_1 + 0x5c) != 0) && (uVar3 = *(uint *)(param_1 + 0x58), -1 < (int)uVar3)
            ) && (((int)uVar3 < DAT_14c9647dc &&
                  ((plVar10 = (longlong *)
                              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                   plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x5c)))))))
          && ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar9 = *plVar10;
    }
    else {
      lVar9 = 0;
    }
    if (*(char *)(lVar9 + 0x358) == '\x01') {
      plVar10 = *(longlong **)(param_1 + 0x10);
      if (plVar10 == (longlong *)0x0) {
LAB_143af8513:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        cVar7 = FUN_143af7cf8(param_1,&local_48,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      }
      else {
        iVar8 = (int)plVar10[1];
        do {
          if (iVar8 == 0) goto LAB_143af8513;
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar11 = iVar8 == iVar6;
          if (bVar11) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar11);
        uVar4 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        local_48 = uVar4;
        plStack_40 = plVar10;
        cVar7 = FUN_143af7cf8(param_1,&local_48,1);
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (cVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af85ae FUN_143af85ae body=1043 status=ok
// SIG undefined FUN_143af85ae(void)

void FUN_143af85ae(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_68 [33];
  undefined1 local_47 [7];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 == (longlong *)0x0) goto LAB_143af8611;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_143af8611;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar15 = iVar7 == iVar5;
    if (bVar15) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar15);
  plVar11 = *(longlong **)(param_1 + 200);
  if (plVar11 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143af88a9:
      lVar12 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x28);
      lVar12 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar14 = (longlong *)((ulonglong)((uVar2 & 0xffff) * 0x18) + DAT_14c9647c8[uVar2 >> 0x10]);
        param_3 = DAT_14c9647c8;
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143af88a9;
        lVar12 = *plVar14;
      }
    }
    FUN_14825e41c(plVar11,local_47);
    local_40._0_2_ = CONCAT11(local_47[1],(undefined1)local_40);
    if (local_47[1] == '\x01') {
      local_40 = (char *)CONCAT71(local_40._1_7_,local_47[0]);
    }
    FUN_14825cb58(lVar12 + 0xf8,&local_40);
    cVar6 = (**(code **)(*plVar11 + 0x18))(plVar11);
    if (cVar6 != '\0') {
      FUN_14825e216(plVar11,local_47);
      if (local_47[6] == '\x01') {
        if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143af88b1:
          plVar14 = (longlong *)0x0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x28);
          plVar14 = (longlong *)0x0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar13 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) + DAT_14c9647c8[uVar2 >> 0x10]);
            param_3 = DAT_14c9647c8;
            if ((puVar13 == (undefined8 *)0x0) ||
               ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x2c) ||
                ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143af88b1;
            plVar14 = (longlong *)*puVar13;
          }
        }
        if (((*(int *)((longlong)plVar11 + 0x5c) != 0) &&
            (uVar2 = *(uint *)(plVar11 + 0xb), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
          param_3 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) + DAT_14c9647c8[uVar2 >> 0x10]);
        }
        uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)((longlong)plVar14 + 0x37));
        lVar12 = *plVar14;
        puVar13 = (undefined8 *)local_47;
LAB_143af8896:
        (**(code **)(lVar12 + 0x300))(plVar14,puVar13,uVar4 ^ 1);
      }
      else {
        if ((DAT_14c86a9f8 == '\x01') &&
           (iVar7 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar7 != 2)) {
          if (iVar7 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_143af891a;
          }
          local_40 = "CommonInput";
          local_38 = 0xb;
          local_34 = 0;
          uVar8 = FUN_14001a6c0(&local_40,1);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          plVar11 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar8);
        }
        else {
LAB_143af891a:
          local_40 = "CommonInput";
          local_38 = 0xb;
          local_34 = 0;
          uVar8 = FUN_14001a6c0(&local_40,1);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          param_3 = &local_40;
          plVar11 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar8,param_3,1);
        }
        lVar12 = (**(code **)(*plVar11 + 0x40))();
        if (*(char *)(lVar12 + 0xd9) == '\x01') {
          if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143af88b8:
            plVar14 = (longlong *)0x0;
          }
          else {
            uVar2 = *(uint *)(param_1 + 0x28);
            plVar14 = (longlong *)0x0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) + DAT_14c9647c8[uVar2 >> 0x10]);
              param_3 = DAT_14c9647c8;
              if ((puVar13 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar13 + 2) != *(int *)(param_1 + 0x2c) ||
                  ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)))) goto LAB_143af88b8;
              plVar14 = (longlong *)*puVar13;
            }
          }
          puVar13 = &local_40;
          local_40 = (char *)CONCAT26((short)((ulonglong)local_40 >> 0x30),0x10000000000);
          uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)((longlong)plVar14 + 0x37)
                          );
          lVar12 = *plVar14;
          goto LAB_143af8896;
        }
      }
      FUN_143af89c2(param_1);
    }
  }
  LOCK();
  plVar11 = plVar3 + 1;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)*plVar11 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143af8611:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af89c2 FUN_143af89c2 body=1444 status=ok
// SIG undefined FUN_143af89c2(void)

void FUN_143af89c2(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(longlong *)(param_1 + 200) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0xd0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  goto LAB_143af8a9d;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_143af8a9d;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar15 = iVar6 == iVar4;
    if (bVar15) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
  } while (!bVar15);
  lVar13 = *(longlong *)(param_1 + 200);
  if (((((lVar13 != 0) && (*(int *)(lVar13 + 0x5c) != 0)) &&
       ((uVar2 = *(uint *)(lVar13 + 0x58), -1 < (int)uVar2 &&
        (((int)uVar2 < DAT_14c9647dc &&
         (plVar14 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar14 != (longlong *)0x0)))))) && ((int)plVar14[2] == *(int *)(lVar13 + 0x5c))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
      (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)))) {
    uVar7 = FUN_14823ec88();
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143af8d7e:
      lVar10 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x28);
      lVar10 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143af8d7e;
        lVar10 = *plVar11;
      }
    }
    lVar10 = *(longlong *)(lVar10 + 0x20);
    if ((*(char *)((longlong)plVar14 + 0x2fb) == '\x01') &&
       (*(char *)((longlong)plVar14 + 0x2fd) == '\x01')) {
      local_58 = 0;
      plVar11 = *(longlong **)(lVar13 + 0x88);
      plStack_50 = plVar11;
      if (plVar11 == (longlong *)0x0) {
LAB_143af8bdd:
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar11[1];
        do {
          if (iVar6 == 0) {
            plStack_50 = (longlong *)0x0;
            goto LAB_143af8bdd;
          }
          LOCK();
          iVar4 = (int)plVar11[1];
          bVar15 = iVar6 == iVar4;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar15);
        if (plVar11 == (longlong *)0x0) goto LAB_143af8bdd;
        local_58 = *(longlong *)(lVar13 + 0x80);
      }
      if (local_58 == 0) goto LAB_143af8c52;
      cVar5 = FUN_1410a3d58(DAT_14c98e618,uVar7,&local_58,2);
    }
    else {
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      plVar11 = (longlong *)0x0;
LAB_143af8c52:
      plVar8 = (longlong *)(**(code **)(*plVar14 + 0x4b8))(plVar14);
      if (plVar8 != (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar8 + 0x2c8))(plVar8);
        FUN_14775dc88(plVar8,uVar9);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar11 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        goto LAB_143af8a80;
      }
      (**(code **)(*DAT_14c98e618 + 0x168))(DAT_14c98e618,local_68,uVar7);
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143af8f3d:
        lVar12 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        lVar12 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143af8f3d;
          lVar12 = *plVar11;
        }
      }
      lVar12 = *(longlong *)(lVar12 + 0x20);
      local_78 = 0;
      plVar11 = *(longlong **)(lVar12 + 0x248);
      local_70 = plVar11;
      if (plVar11 == (longlong *)0x0) {
LAB_143af8d8e:
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar11[1];
        do {
          if (iVar6 == 0) {
            local_70 = (longlong *)0x0;
            goto LAB_143af8d8e;
          }
          LOCK();
          iVar4 = (int)plVar11[1];
          bVar15 = iVar6 == iVar4;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar15);
        if (plVar11 == (longlong *)0x0) goto LAB_143af8d8e;
        local_78 = *(longlong *)(lVar12 + 0x240);
      }
      if (((local_78 == 0) || (cVar5 = FUN_14825ea6e(lVar13,&local_78), cVar5 == '\0')) &&
         (cVar5 = FUN_14825ea6e(lVar13,local_68), plVar8 = DAT_14c98e618, cVar5 == '\0')) {
        if ((*(byte *)((longlong)plVar14 + 0x20c) & 1) != 0) {
          uVar9 = (**(code **)(*plVar14 + 0x2c8))(plVar14);
          FUN_14775dc88(plVar14,uVar9);
          goto LAB_143af8ed9;
        }
        if (*(int *)(param_1 + 0x2c) == 0) {
LAB_143af8f60:
          lVar13 = 0;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x28);
          lVar13 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               (((int)plVar14[2] != *(int *)(param_1 + 0x2c) ||
                ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143af8f60;
            lVar13 = *plVar14;
          }
        }
        lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x20) + 0x78);
        if (lVar13 == 0) goto LAB_143af8ed9;
        FUN_140761b7a(lVar13,&local_98);
        local_88 = local_98;
        local_80 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        cVar5 = FUN_1410a3d58(plVar8,uVar7,&local_88,2);
        plVar14 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_80 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        plVar11 = local_70;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_90 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar11 = local_70;
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
              plVar11 = local_70;
            }
          }
        }
      }
      else {
LAB_143af8ed9:
        cVar5 = '\0';
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar11 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_60 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
    plVar14 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_50 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (cVar5 != '\0') {
      FUN_146948d3e(lVar10 + 0x1f8);
    }
  }
LAB_143af8a80:
  LOCK();
  plVar14 = plVar3 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_143af8a9d:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af8f67 FUN_143af8f67 body=55 status=ok
// SIG undefined FUN_143af8f67(void)

void FUN_143af8f67(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46480 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb46480 = FUN_14171c317(FUN_146484b83,uVar1,L"ECommonSwitcherTransition");
  }
  return;
}



// FUNCTION 143af8f9e FUN_143af8f9e body=55 status=ok
// SIG undefined FUN_143af8f9e(void)

void FUN_143af8f9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46498 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb46498 = FUN_14171c317(FUN_146484bb4,uVar1,L"ETransitionCurve");
  }
  return;
}



// FUNCTION 143af8fd5 FUN_143af8fd5 body=55 status=ok
// SIG undefined FUN_143af8fd5(void)

void FUN_143af8fd5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb464b0 == 0) {
    uVar1 = FUN_140ff4126();
    DAT_14cb464b0 = FUN_14171c317(FUN_146484be3,uVar1,L"ECommonSwitcherTransitionFallbackStrategy");
  }
  return;
}



// FUNCTION 143af900c FUN_143af900c body=1122 status=ok
// SIG undefined FUN_143af900c(void)

void FUN_143af900c(longlong *param_1,uint param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *local_60;
  code *local_58;
  longlong *local_50;
  char local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  uVar12 = (ulonglong)param_2;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((int)param_2 < 0) || ((int)param_1[0x43] <= (int)param_2)) {
    lVar9 = 0;
LAB_143af905f:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar3 = *(longlong *)(param_1[0x42] + uVar12 * 8);
    lVar9 = *(longlong *)(lVar3 + 0x10);
    plVar11 = *(longlong **)(lVar3 + 0x18);
    if (plVar11 == (longlong *)0x0) goto LAB_143af905f;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  param_1[0x59] = lVar9;
  plVar10 = (longlong *)param_1[0x5a];
  if (plVar10 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar10 = (longlong *)param_1[0x5a];
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    param_1[0x5a] = (longlong)plVar11;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (((param_1[0x59] == 0) || (param_1[0x5a] == 0)) || (*(int *)(param_1[0x5a] + 8) < 1)) {
    *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
    goto LAB_143af90e8;
  }
  *(uint *)(param_1 + 0x5b) = param_2;
  if ((((int)param_1[0x3e] != 0) && ((longlong *)param_1[0x3d] != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*(longlong *)param_1[0x3d] + 0x30))(), cVar6 != '\0')) {
    if ((int)param_1[0x3e] == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = (longlong *)param_1[0x3d];
    }
    uVar7 = (**(code **)(*plVar11 + 0x58))();
    *(undefined4 *)(param_1 + 0x3c) = uVar7;
  }
  uVar2 = *(uint *)(param_1 + 0x3c);
  if ((param_3 != '\0') || (*(float *)param_1[0x53] <= 0.0)) {
    cVar6 = FUN_1459b8360(param_1 + 0x4b);
    if ((uVar2 == param_2) && (cVar6 == '\0')) goto LAB_143af90e8;
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xf8;
    dVar4 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
    param_1[0x55] = (longlong)(dVar4 - (double)param_1[0x57]);
    FUN_146aa1730(param_1,uVar12);
  }
  else {
    plVar11 = param_1 + 0x4b;
    cVar6 = FUN_1459b8360();
    if (cVar6 == '\0') {
      if (uVar2 == param_2) goto LAB_143af90e8;
      if (*(char *)((longlong)param_1 + 0x39) != DAT_14c96b23a) {
        local_48 = DAT_14c96b23a;
        local_47 = 1;
        local_40 = 0;
        uStack_38 = 0;
        (**(code **)(*param_1 + 0x1c0))();
        if (((int)param_1[0x5f] != 0) &&
           (plVar10 = (longlong *)param_1[0x5e], plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x60))(plVar10,1);
        }
      }
      if ((int)uVar2 < (int)param_2) {
        plVar10 = (longlong *)param_1[2];
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
          local_58 = (code *)0x0;
        }
        else {
          iVar8 = (int)plVar10[1];
          local_58 = (code *)0x0;
          do {
            if (iVar8 == 0) {
              plVar10 = (longlong *)0x0;
              goto LAB_143af9304;
            }
            LOCK();
            iVar5 = (int)plVar10[1];
            bVar13 = iVar8 == iVar5;
            if (bVar13) {
              *(int *)(plVar10 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar13);
          local_58 = (code *)param_1[1];
        }
LAB_143af9304:
        local_88 = 1;
        local_50 = plVar10;
        FUN_14692f220(plVar11,&local_58,0,0);
      }
      else {
        plVar10 = (longlong *)param_1[2];
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
          local_58 = (code *)0x0;
        }
        else {
          iVar8 = (int)plVar10[1];
          local_58 = (code *)0x0;
          do {
            if (iVar8 == 0) {
              plVar10 = (longlong *)0x0;
              goto LAB_143af9328;
            }
            LOCK();
            iVar5 = (int)plVar10[1];
            bVar13 = iVar8 == iVar5;
            if (bVar13) {
              *(int *)(plVar10 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar13);
          local_58 = (code *)param_1[1];
        }
LAB_143af9328:
        local_88 = 1;
        local_50 = plVar10;
        FUN_14692f4ee(plVar11,&local_58,0,0);
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      lVar9 = FUN_146aa140e(param_1);
      if (lVar9 == 0) {
        plVar11 = (longlong *)0x0;
LAB_143af93dc:
        *(undefined1 *)((longlong)param_1 + 0x2dd) = 0;
LAB_143af93e3:
        FUN_146aa1730(param_1,uVar12);
        if (((int)param_1[0x5d] != 0) &&
           (plVar10 = (longlong *)param_1[0x5c], plVar10 != (longlong *)0x0)) {
          (**(code **)(*plVar10 + 0x60))(plVar10,uVar12);
        }
      }
      else {
        lVar3 = *(longlong *)(lVar9 + 0x10);
        plVar11 = *(longlong **)(lVar9 + 0x18);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        if (lVar3 == 0) goto LAB_143af93dc;
        bVar13 = lVar3 == DAT_14c98dec8;
        *(bool *)((longlong)param_1 + 0x2dd) = !bVar13;
        if (bVar13) goto LAB_143af93e3;
      }
      if (*(char *)((longlong)param_1 + 0x2de) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x2de) = 1;
        local_58 = FUN_143af9488;
        local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
        FUN_1482605de(local_78,param_1);
        FUN_14697ef1e(param_1,local_68,0,local_78);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_60 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      goto LAB_143af90e8;
    }
    if (((((int)uVar2 < (int)param_2 & *(byte *)(param_1 + 0x58)) == 0) &&
        ((int)uVar2 <= (int)param_2 || (*(byte *)(param_1 + 0x58) & 1) != 0)) &&
       ((uVar2 == param_2 & *(byte *)((longlong)param_1 + 0x2dd)) == 0)) goto LAB_143af90e8;
    *(byte *)((longlong)param_1 + 0x2dd) = *(byte *)((longlong)param_1 + 0x2dd) ^ 1;
    FUN_14692f47a(plVar11);
    if (uVar2 != param_2) goto LAB_143af90e8;
  }
  if (((int)param_1[0x5d] != 0) && (param_1[0x5c] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_143af90e8:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143af9488 FUN_143af9488 body=1630 status=ok
// SIG undefined FUN_143af9488(void)

undefined8 FUN_143af9488(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  char local_88 [8];
  undefined8 *local_80;
  ulonglong uStack_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  undefined8 local_60;
  char local_58 [4];
  undefined1 local_54;
  undefined8 *local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar6 = *(char *)((longlong)param_1 + 0x2df);
  if ((cVar6 != '\0') && (cVar6 != '\x04')) {
    if (cVar6 == '\x03') {
      fVar19 = (float)FUN_148260964(param_1);
      local_70 = fVar19 * 0.25 + 1.0;
      local_6c = 0;
      local_60 = 0;
      local_58[0] = '\x01';
      local_54 = 1;
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      local_64 = local_70;
      FUN_140a521e6(param_1 + 0x30,param_1,&local_70);
      if ((int)uStack_48 == 0) {
LAB_143af955f:
        if (local_50 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        uStack_48 = uStack_48 & 0xffffffff00000000;
        goto LAB_143af955f;
      }
      if (local_58[0] == '\0') goto LAB_143af965e;
      pcVar9 = local_58;
    }
    else {
      local_8c = (float)FUN_148260964(param_1);
      local_8c = local_8c * 200.0;
      local_90 = -local_8c;
      if (*(char *)((longlong)param_1 + 0x2df) == '\x01') {
        local_8c = (float)DAT_14c8463f8;
      }
      else {
        local_90 = (float)DAT_14c8463f0;
      }
      local_a0 = 0x3f800000;
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0x3f800000;
      local_88[0] = '\x01';
      local_88[4] = 1;
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_140a521e6(param_1 + 0x30,param_1,&local_a0);
      if ((int)uStack_78 == 0) {
LAB_143af9638:
        if (local_80 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_80 != (undefined8 *)0x0) {
        (**(code **)*local_80)(local_80,0);
        FUN_1446efa72(&local_80,0,0,0x10);
        uStack_78 = uStack_78 & 0xffffffff00000000;
        goto LAB_143af9638;
      }
      if (local_88[0] != '\x01') goto LAB_143af965e;
      pcVar9 = local_88;
    }
    *pcVar9 = '\0';
  }
LAB_143af965e:
  plVar4 = param_1 + 0x4b;
  cVar6 = FUN_1459b8360(plVar4);
  if (cVar6 != '\0') goto LAB_143af98d8;
  plVar14 = (longlong *)param_1[0x5a];
  bVar18 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar7 = (int)plVar14[1];
    lVar12 = 0;
    do {
      if (iVar7 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_143af96ac;
      }
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar17 = iVar7 == iVar5;
      if (bVar17) {
        *(int *)(plVar14 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar17);
    lVar12 = param_1[0x59];
    bVar18 = false;
  }
LAB_143af96ac:
  plVar15 = plVar14;
  if (*(char *)((longlong)param_1 + 0x2dd) == '\x01') {
    if (lVar12 == 0) {
LAB_143af96e7:
      cVar6 = FUN_143af9ae8(param_1);
      if (cVar6 != '\0') {
        plVar15 = (longlong *)param_1[0x5a];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
          lVar12 = 0;
        }
        else {
          iVar7 = (int)plVar15[1];
          lVar12 = 0;
          do {
            if (iVar7 == 0) {
              plVar15 = (longlong *)0x0;
              goto LAB_143af972f;
            }
            LOCK();
            iVar5 = (int)plVar15[1];
            bVar17 = iVar7 == iVar5;
            if (bVar17) {
              *(int *)(plVar15 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar17);
          lVar12 = param_1[0x59];
        }
LAB_143af972f:
        plVar16 = (longlong *)0x0;
        if (plVar15 == plVar14) {
          plVar16 = plVar15;
        }
        if ((bool)(bVar18 | plVar15 == plVar14)) {
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar16 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar7 = *piVar1;
              UNLOCK();
              plVar14 = plVar15;
              goto joined_r0x000143af9773;
            }
          }
        }
        else {
          LOCK();
          plVar16 = plVar14 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x000143af9773:
            if (iVar7 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      goto LAB_143af9781;
    }
    if (!bVar18) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    local_b0 = lVar12;
    local_a8 = plVar14;
    iVar7 = FUN_146aa1480(param_1,&local_b0);
    if (iVar7 == -1) goto LAB_143af96e7;
LAB_143af978a:
    lVar10 = FUN_146aa140e();
    if (lVar10 == 0) {
      lVar13 = 0;
LAB_143af97a8:
      plVar14 = (longlong *)0x0;
    }
    else {
      lVar13 = *(longlong *)(lVar10 + 0x10);
      plVar14 = *(longlong **)(lVar10 + 0x18);
      if (plVar14 == (longlong *)0x0) goto LAB_143af97a8;
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar14 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    if (lVar13 == lVar12) goto LAB_143af988a;
    bVar3 = *(byte *)((longlong)param_1 + 0x2dd);
    *(byte *)((longlong)param_1 + 0x2dd) = bVar3 ^ 1;
    if (bVar3 == 1) {
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      local_c0 = lVar12;
      local_b8 = plVar15;
      FUN_1482609bc(param_1,&local_c0);
      plVar14 = (longlong *)param_1[0x5a];
      param_1[0x59] = 0;
      param_1[0x5a] = 0;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
      if ((((int)param_1[0x3e] != 0) && ((longlong *)param_1[0x3d] != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(*(longlong *)param_1[0x3d] + 0x30))(), cVar6 != '\0')) {
        if ((int)param_1[0x3e] == 0) {
          plVar14 = (longlong *)0x0;
        }
        else {
          plVar14 = (longlong *)param_1[0x3d];
        }
        uVar8 = (**(code **)(*plVar14 + 0x58))();
        *(undefined4 *)(param_1 + 0x3c) = uVar8;
      }
      if (((int)param_1[0x5d] != 0) &&
         (plVar14 = (longlong *)param_1[0x5c], plVar14 != (longlong *)0x0)) {
        (**(code **)(*plVar14 + 0x60))(plVar14,(int)param_1[0x3c]);
      }
    }
    lVar12 = FUN_146aa140e(param_1);
    if (lVar12 != 0) {
      lVar10 = *(longlong *)(lVar12 + 0x10);
      plVar14 = *(longlong **)(lVar12 + 0x18);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if ((lVar10 != 0) && (lVar10 != DAT_14c98dec8)) {
        if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
          plVar16 = (longlong *)param_1[2];
          if (plVar16 == (longlong *)0x0) {
            plVar16 = (longlong *)0x0;
            local_d0 = 0;
          }
          else {
            iVar7 = (int)plVar16[1];
            local_d0 = 0;
            do {
              if (iVar7 == 0) {
                plVar16 = (longlong *)0x0;
                goto LAB_143af9a37;
              }
              LOCK();
              iVar5 = (int)plVar16[1];
              bVar18 = iVar7 == iVar5;
              if (bVar18) {
                *(int *)(plVar16 + 1) = iVar7 + 1;
                iVar5 = iVar7;
              }
              iVar7 = iVar5;
              UNLOCK();
            } while (!bVar18);
            local_d0 = param_1[1];
          }
LAB_143af9a37:
          local_f8 = 1;
          local_c8 = plVar16;
          FUN_14692f220(plVar4,&local_d0,0,0);
        }
        else {
          plVar16 = (longlong *)param_1[2];
          if (plVar16 == (longlong *)0x0) {
            plVar16 = (longlong *)0x0;
            local_d0 = 0;
          }
          else {
            iVar7 = (int)plVar16[1];
            local_d0 = 0;
            do {
              if (iVar7 == 0) {
                plVar16 = (longlong *)0x0;
                goto LAB_143af9a5b;
              }
              LOCK();
              iVar5 = (int)plVar16[1];
              bVar18 = iVar7 == iVar5;
              if (bVar18) {
                *(int *)(plVar16 + 1) = iVar7 + 1;
                iVar5 = iVar7;
              }
              iVar7 = iVar5;
              UNLOCK();
            } while (!bVar18);
            local_d0 = param_1[1];
          }
LAB_143af9a5b:
          local_f8 = 1;
          local_c8 = plVar16;
          FUN_14692f4ee(plVar4,&local_d0,0,0);
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar16 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar14 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
  }
  else {
LAB_143af9781:
    if (lVar12 != 0) goto LAB_143af978a;
LAB_143af988a:
    plVar14 = (longlong *)param_1[0x5a];
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))();
      }
    }
    *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar15 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_143af98d8:
  cVar6 = FUN_1459b8360(plVar4);
  if (cVar6 == '\0') {
    local_e8 = DAT_14c96b23c;
    local_e7 = 1;
    local_e0 = 0;
    uStack_d8 = 0;
    (**(code **)(*param_1 + 0x1c0))(param_1);
    if (((int)param_1[0x5f] != 0) && (plVar4 = (longlong *)param_1[0x5e], plVar4 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar4 + 0x60))(plVar4,0);
    }
    *(undefined1 *)((longlong)param_1 + 0x2de) = 0;
    uVar11 = 0;
  }
  else {
    FUN_140163244(param_1,2);
    uVar11 = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143af9ae8 FUN_143af9ae8 body=302 status=ok
// SIG undefined FUN_143af9ae8(void)

undefined8 FUN_143af9ae8(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar9;
  
  cVar2 = *(char *)(param_1 + 0x2dc);
  if (cVar2 == '\0') {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x218);
  if (iVar3 < 1) {
    return 0;
  }
  uVar12 = *(uint *)(param_1 + 0x2d8);
  if ((cVar2 != '\x02') && (uVar12 = 0, cVar2 != '\x03')) {
    if (cVar2 == '\x04') {
      uVar12 = iVar3 - 1;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x2d8) - 1;
    }
  }
  uVar5 = iVar3 - 1U;
  if ((int)uVar12 < (int)(iVar3 - 1U)) {
    uVar5 = uVar12;
  }
  uVar10 = 0;
  if (0 < (int)uVar5) {
    uVar10 = (ulonglong)uVar5;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x210) + uVar10 * 8);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  plVar11 = *(longlong **)(lVar4 + 0x18);
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2c8) = uVar6;
    plVar8 = *(longlong **)(param_1 + 0x2d0);
    if (plVar8 != (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      goto LAB_143af9bad;
    }
LAB_143af9bc1:
    if (plVar11 == (longlong *)0x0) goto LAB_143af9be3;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2c8) = uVar6;
    if (*(longlong **)(param_1 + 0x2d0) != plVar11) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x2d0);
LAB_143af9bad:
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x2d0) = plVar11;
      goto LAB_143af9bc1;
    }
  }
  LOCK();
  plVar8 = plVar11 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_143af9be3:
  uVar7 = 0xffffffff;
  if ((*(longlong *)(param_1 + 0x2c8) == 0) || (lVar4 = *(longlong *)(param_1 + 0x2d0), lVar4 == 0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)lVar4 >> 8),0 < *(int *)(lVar4 + 8));
    uVar9 = 0xffffffff;
    if (0 < *(int *)(lVar4 + 8)) {
      uVar9 = uVar10;
    }
    uVar7 = (undefined4)uVar9;
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar7;
  return uVar6;
}



// FUNCTION 143af9c16 FUN_143af9c16 body=188 status=ok
// SIG undefined FUN_143af9c16(void)

void FUN_143af9c16(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[0x33];
  if ((longlong)iVar2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1[0x32] + lVar1) == param_2) {
        return;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)iVar2 * 8 - lVar1 != 0);
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
    iVar2 = (int)param_1[0x33];
  }
  *(uint *)(param_1 + 0x33) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x19c) < iVar2 + 1U) {
    FUN_14826537c(param_1 + 0x32,iVar2);
  }
  *(longlong *)(param_1[0x32] + (longlong)iVar2 * 8) = param_2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000143af9c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))(param_1,param_2);
  return;
}



// FUNCTION 143af9cd2 FUN_143af9cd2 body=367 status=ok
// SIG undefined FUN_143af9cd2(void)

void FUN_143af9cd2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_148260e94();
  if (lVar4 == param_2) {
    if (*(char *)(param_2 + 0x358) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
    *(undefined1 *)(param_1 + 0x270) = 1;
  }
  else {
    FUN_140760c2c(param_2,&local_30);
    plVar3 = local_28;
    if ((local_30 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x250) == 0)) {
      FUN_1476cf0bc(param_1 + 0x1a8,param_2,1);
      local_48 = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      local_40 = &local_48;
      FUN_148264690(param_1 + 400);
    }
    else {
      local_40 = local_30;
      local_38 = local_28;
      if (local_28 == (longlong *)0x0) {
        FUN_143af9e56(param_1,&local_40);
      }
      else {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        FUN_143af9e56(param_1);
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
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143af9e56 FUN_143af9e56 body=810 status=ok
// SIG undefined FUN_143af9e56(void)

void FUN_143af9e56(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (longlong *)*param_2;
  plVar4 = (longlong *)param_2[1];
  local_40 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    lVar7 = FUN_148261130(&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar7 = FUN_148261130();
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
  }
  if (lVar7 != 0) {
    FUN_1476cf0bc(param_1 + 0x1a8,lVar7,1);
    local_50 = lVar7;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar7);
    }
    local_48 = &local_50;
    FUN_148264690(param_1 + 400);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x250);
  local_60 = *param_2;
  local_58 = param_2[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  iVar6 = FUN_146aa14e8(uVar8,&local_60);
  if (iVar6 != -1) {
    lVar7 = *param_2;
    lVar9 = param_2[1];
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    iVar6 = *(int *)(param_1 + 0x268);
    *(uint *)(param_1 + 0x268) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x26c) < iVar6 + 1U) {
      FUN_14171e5a8(param_1 + 0x260,iVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0x260);
    *(longlong *)(lVar5 + (longlong)iVar6 * 0x10) = lVar7;
    *(longlong *)(lVar5 + 8 + (longlong)iVar6 * 0x10) = lVar9;
    if (*(int *)(param_1 + 0x268) == 1) {
      uVar8 = FUN_1401cb356();
      local_48 = (longlong *)0x0;
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
      FUN_1446efa72(&local_48,0,3,0x10);
      plVar4 = local_48;
      local_40 = (longlong *)CONCAT44(local_40._4_4_,3);
      *local_48 = (longlong)&PTR_LAB_149e02020;
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
      local_48[2] = lVar9;
      *local_48 = (longlong)&PTR_FUN_14ae6f390;
      local_48[3] = 0;
      iVar6 = 0;
      if (param_1 != 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar11 = iVar6 == 0;
          if (bVar11) {
            *(int *)(lVar7 + 0x10) = iVar10;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar6 = iVar10;
          }
        }
      }
      *(int *)((longlong)plVar4 + 0x1c) = iVar6;
      plVar4[4] = param_1;
      local_78 = 0;
      FUN_1405f67fc(uVar8,local_70,&local_48,L"UCommonActivatableWidgetContainerBase_ReleaseWidget")
      ;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
      if ((int)local_40 != 0) {
        if (local_48 == (longlong *)0x0) goto LAB_143afa0a8;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
      }
      if (local_48 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143afa0a8:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143afa182 FUN_143afa182 body=545 status=ok
// SIG undefined FUN_143afa182(void)

void FUN_143afa182(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x250);
  if (lVar6 == 0) {
    return;
  }
  if (((*(int *)(lVar6 + 0x1f0) != 0) && (*(longlong **)(lVar6 + 0x1e8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x1e8) + 0x30))(), cVar2 != '\0')) {
    if (*(int *)(lVar6 + 0x1f0) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar6 + 0x1e8);
    }
    uVar3 = (**(code **)(*plVar5 + 0x58))();
    *(undefined4 *)(lVar6 + 0x1e0) = uVar3;
  }
  if (*(int *)(lVar6 + 0x1e0) == param_2) {
    return;
  }
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x250);
    if (lVar6 == 0) goto LAB_143afa365;
    uVar3 = *(undefined4 *)(param_1 + 0x184);
    uVar7 = *(undefined1 *)(param_1 + 0x180);
  }
  else {
    FUN_140457ffc(*(longlong *)(param_1 + 0x1a0) + 0x3a0,param_1);
    lVar6 = *(longlong *)(param_1 + 0x1a0);
    lVar1 = *(longlong *)(param_1 + 0x250);
    if (*(char *)(lVar6 + 0x358) == '\x01') {
      if (((*(int *)(lVar1 + 0x1f0) != 0) && (*(longlong **)(lVar1 + 0x1e8) != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1e8) + 0x30))(), cVar2 != '\0')) {
        if (*(int *)(lVar1 + 0x1f0) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 0x1e8);
        }
        uVar3 = (**(code **)(*plVar5 + 0x58))();
        *(undefined4 *)(lVar1 + 0x1e0) = uVar3;
      }
      *(bool *)(lVar6 + 0x42a) = *(int *)(lVar1 + 0x1e0) < param_2;
      plVar5 = *(longlong **)(param_1 + 0x1a0);
      if ((char)plVar5[0x6b] == '\x01') {
        (**(code **)(*plVar5 + 0x4e0))();
        plVar5 = *(longlong **)(param_1 + 0x1a0);
      }
      *(undefined1 *)((longlong)plVar5 + 0x42a) = 0;
    }
    else {
      if (((*(int *)(lVar1 + 0x1f0) == 0) || (*(longlong **)(lVar1 + 0x1e8) == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x1e8) + 0x30))(), cVar2 == '\0')) {
        iVar4 = *(int *)(lVar1 + 0x1e0);
      }
      else {
        if (*(int *)(lVar1 + 0x1f0) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar1 + 0x1e8);
        }
        iVar4 = (**(code **)(*plVar5 + 0x58))();
        *(int *)(lVar1 + 0x1e0) = iVar4;
      }
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0x270) = 1;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x4a0))
              (*(longlong **)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x184),
               *(undefined1 *)(param_1 + 0x180));
    lVar6 = *(longlong *)(param_1 + 0x250);
    uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x1a0) + 0x429);
    uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x424);
    *(undefined4 *)(param_1 + 0x184) = uVar3;
    if (lVar6 == 0) goto LAB_143afa365;
  }
  FUN_148260426(lVar6,uVar3,*(undefined1 *)(param_1 + 0x181),uVar7);
LAB_143afa365:
  FUN_143af900c(*(undefined8 *)(param_1 + 0x250),param_2,param_3);
  return;
}



// FUNCTION 143afa3a4 FUN_143afa3a4 body=1396 status=ok
// SIG undefined FUN_143afa3a4(void)

void FUN_143afa3a4(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined1 local_a0 [8];
  code *local_98;
  longlong *local_90;
  code *local_88;
  longlong *plStack_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = param_1[0x4a];
  iVar10 = *(int *)(lVar7 + 0x218);
  uVar6 = iVar10 - 1;
  if (param_2 < (int)uVar6) {
    do {
      if ((-1 < (int)uVar6) && ((int)uVar6 < iVar10)) {
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x210) + (ulonglong)uVar6 * 8);
        pcVar3 = *(code **)(lVar7 + 0x10);
        plVar4 = *(longlong **)(lVar7 + 0x18);
        if (plVar4 == (longlong *)0x0) {
          if (pcVar3 != (code *)0x0) {
            plStack_80 = (longlong *)0x0;
            local_88 = pcVar3;
            FUN_143af9e56(param_1,&local_88);
          }
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          if (pcVar3 != (code *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            local_88 = pcVar3;
            plStack_80 = plVar4;
            FUN_143af9e56(param_1,&local_88);
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
      }
      lVar7 = param_1[0x4a];
      iVar10 = *(int *)(lVar7 + 0x218);
      uVar6 = iVar10 - 1;
    } while (param_2 < (int)uVar6);
  }
  if ((param_1[0x34] != 0) && ((char)param_1[0x4e] == '\x01')) {
    FUN_140760c2c(param_1[0x34],&local_88);
    plVar4 = plStack_80;
    if (local_88 != (code *)0x0) {
      local_98 = local_88;
      local_90 = plStack_80;
      if (plStack_80 == (longlong *)0x0) {
        FUN_143af9e56(param_1,&local_98);
      }
      else {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
        FUN_143af9e56(param_1);
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
      }
    }
    plVar4 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar7 = param_1[0x4a];
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  lVar7 = FUN_146aa140e(lVar7);
  if (lVar7 == 0) {
    local_88 = (code *)0x0;
    plStack_80 = (longlong *)0x0;
  }
  else {
    local_88 = *(code **)(lVar7 + 0x10);
    plStack_80 = *(longlong **)(lVar7 + 0x18);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
  }
  lVar7 = FUN_148261130(&local_88);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  plVar4 = plStack_80;
  param_1[0x34] = lVar7;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    lVar7 = param_1[0x34];
  }
  if (lVar7 == 0) {
    (**(code **)(*param_1 + 0x2b0))(param_1,1);
    lVar7 = param_1[0x4a];
    if (lVar7 == 0) goto LAB_143afa85f;
    uVar14 = *(undefined4 *)((longlong)param_1 + 0x184);
    uVar12 = (undefined1)param_1[0x30];
  }
  else {
    (**(code **)(*param_1 + 0x2b0))(param_1,4);
    local_98 = (code *)param_1[0x34];
    local_a8 = &local_98;
    local_88 = FUN_143afa9a6;
    plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
    FUN_148261b5c(local_98 + 0x3a0,local_a0,param_1);
    if ((char)((longlong *)param_1[0x34])[0x6b] == '\0') {
      (**(code **)(*(longlong *)param_1[0x34] + 0x4d8))();
    }
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar8;
      local_98 = (code *)0x0;
      local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
      FUN_1446efa72(&local_98,0,3,0x10);
      pcVar3 = local_98;
      local_90 = (longlong *)CONCAT44(local_90._4_4_,3);
      *(undefined ***)local_98 = &PTR_LAB_14a1c8830;
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
      *(longlong *)(local_98 + 0x10) = lVar9;
      *(undefined ***)local_98 = &PTR_FUN_14ae6f470;
      *(undefined8 *)(local_98 + 0x18) = 0;
      iVar10 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar6 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 0x18) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        iVar10 = *(int *)(lVar7 + 0x10);
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar10 = *(int *)(lVar7 + 0x10);
          bVar13 = iVar10 == 0;
          if (bVar13) {
            *(int *)(lVar7 + 0x10) = iVar11;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar10 = iVar11;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar10;
      *(longlong **)(pcVar3 + 0x20) = param_1;
      local_88 = (code *)0x0;
      plStack_80 = (longlong *)((ulonglong)plStack_80 & 0xffffffff00000000);
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar5,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if ((int)local_90 != 0) {
        if (local_98 == (code *)0x0) goto LAB_143afa80a;
        (*(code *)**(undefined8 **)local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
      }
      if (local_98 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143afa80a:
    (**(code **)(*(longlong *)param_1[0x34] + 0x4a0))
              ((longlong *)param_1[0x34],*(undefined4 *)((longlong)param_1 + 0x184),
               (char)param_1[0x30]);
    lVar7 = param_1[0x4a];
    uVar12 = *(undefined1 *)(param_1[0x34] + 0x428);
    uVar14 = *(undefined4 *)(param_1[0x34] + 0x420);
    *(undefined4 *)((longlong)param_1 + 0x184) = uVar14;
    if (lVar7 == 0) goto LAB_143afa85f;
  }
  FUN_148260426(lVar7,uVar14,*(undefined1 *)((longlong)param_1 + 0x181),uVar12);
LAB_143afa85f:
  FUN_14826574c(param_1 + 0x4f,param_1[0x34]);
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143afa91a FUN_143afa91a body=138 status=ok
// SIG undefined FUN_143afa91a(void)

void FUN_143afa91a(longlong param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x189) == '\x01') {
    puVar1 = &DAT_14c96b1e1;
    if ((char)param_2 != '\0') {
      puVar1 = &DAT_14c96b238;
    }
    local_30 = *puVar1;
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x240) + 0x1c0))();
  }
  FUN_148265402(param_1 + 0x168,param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afa9a6 FUN_143afa9a6 body=305 status=ok
// SIG undefined FUN_143afa9a6(void)

void FUN_143afa9a6(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x1a0) != param_2) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x250);
  if (lVar5 != 0) {
    if (((*(int *)(lVar5 + 0x1f0) == 0) || (*(longlong **)(lVar5 + 0x1e8) == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x1e8) + 0x30))(), cVar2 == '\0')) {
      iVar3 = *(int *)(lVar5 + 0x1e0);
    }
    else {
      if (*(int *)(lVar5 + 0x1f0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar5 + 0x1e8);
      }
      iVar3 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(lVar5 + 0x1e0) = iVar3;
    }
    if (iVar3 < 1) {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x1a0);
    uVar1 = *(undefined1 *)(lVar5 + 0x429);
    uVar4 = *(undefined4 *)(lVar5 + 0x424);
    *(undefined4 *)(param_1 + 0x184) = uVar4;
    if (*(longlong *)(param_1 + 0x250) != 0) {
      FUN_148260426(*(longlong *)(param_1 + 0x250),uVar4,*(undefined1 *)(param_1 + 0x181),uVar1);
      lVar5 = *(longlong *)(param_1 + 0x1a0);
    }
    FUN_140457ffc(lVar5 + 0x3a0,param_1);
    lVar5 = *(longlong *)(param_1 + 0x250);
    if (((*(int *)(lVar5 + 0x1f0) != 0) && (*(longlong **)(lVar5 + 0x1e8) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x1e8) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar5 + 0x1f0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar5 + 0x1e8);
      }
      uVar4 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar5 + 0x1e0) = uVar4;
    }
    FUN_143af900c(lVar5,*(int *)(lVar5 + 0x1e0) + -1,0);
    return;
  }
  return;
}



// FUNCTION 143afaad7 FUN_143afaad7 body=164 status=ok
// SIG undefined FUN_143afaad7(void)

longlong FUN_143afaad7(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    FUN_1405e2bf2();
  }
  if (param_1 != 0) {
    local_20 = *param_2;
    if ((local_20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    lVar1 = FUN_14779ec92(param_1,&local_20,0);
    if (lVar1 != 0) {
      lVar2 = FUN_14110d11e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_143afab04;
    }
  }
  lVar1 = 0;
LAB_143afab04:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 143afab7c FUN_143afab7c body=285 status=ok
// SIG undefined FUN_143afab7c(void)

void FUN_143afab7c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d9;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_146aa0f24(*(longlong *)(param_1 + 0x250),local_c8,1);
    local_d0 = &local_d9;
    local_d8 = FUN_143336ee2;
    FUN_1407616b4(param_2,local_f0);
    FUN_147787cc2(local_c8,local_f0);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    FUN_146b0f73a(local_c8);
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x250) + 0x218);
    if ((iVar3 == 2) ||
       (((*(longlong *)(param_1 + 0x1a0) != 0 && (iVar3 == 3)) &&
        (*(char *)(*(longlong *)(param_1 + 0x1a0) + 0x358) == '\0')))) {
      FUN_143afa182(param_1,1,iVar3 != 2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afad2c FUN_143afad2c body=301 status=ok
// SIG undefined FUN_143afad2c(void)

void FUN_143afad2c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x108);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_145aa9485(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_145aa9485(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_143afae1f;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_143afae1f:
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143afae46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143afae5a FUN_143afae5a body=200 status=ok
// SIG undefined FUN_143afae5a(void)

undefined8 FUN_143afae5a(uint param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  if (1 < (uint)(DAT_14cb46430 - DAT_14cb4645c)) {
    puVar9 = &DAT_14cb46460;
    if (DAT_14cb46468 != (undefined *)0x0) {
      puVar9 = DAT_14cb46468;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14cb46470 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        piVar3 = (int *)(DAT_14cb46428 + (longlong)iVar10 * 0x20);
        if (*(int *)(DAT_14cb46428 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(piVar3 + 4);
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
          iVar5 = *param_2;
          iVar6 = param_2[1];
          iVar7 = param_2[2];
          iVar8 = param_2[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_2 + 4);
          *piVar3 = iVar5;
          piVar3[1] = iVar6;
          piVar3[2] = iVar7;
          piVar3[3] = iVar8;
          FUN_1482628f6(&DAT_14cb46428,*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = piVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 143afaf22 FUN_143afaf22 body=152 status=ok
// SIG undefined FUN_143afaf22(void)

void FUN_143afaf22(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar3 = *param_1;
  lVar4 = (longlong)param_2 * 0x20;
  plVar7 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar3 + 0x1c + lVar4);
  iVar6 = *(int *)((longlong)plVar7 + lVar8 * 4);
  if (iVar6 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar7 + lVar8 * 4);
  }
  else {
    do {
      lVar8 = (longlong)iVar6;
      iVar6 = *(int *)(lVar3 + 0x18 + lVar8 * 0x20);
    } while (iVar6 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar8 * 0x20 + 0x18);
  }
  *puVar5 = *(undefined4 *)(lVar3 + lVar4 + 0x18);
  plVar7 = *(longlong **)(*param_1 + 0x10 + lVar4);
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
  FUN_1482628f6(param_1,param_2);
  return;
}



// FUNCTION 143afafba FUN_143afafba body=29 status=ok
// SIG undefined FUN_143afafba(void)

undefined8 FUN_143afafba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143afafec FUN_143afafec body=91 status=ok
// SIG undefined FUN_143afafec(void)

void FUN_143afafec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6ef60;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143afb048 FUN_143afb048 body=91 status=ok
// SIG undefined FUN_143afb048(void)

void FUN_143afb048(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6ef60;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143afb0a4 FUN_143afb0a4 body=124 status=ok
// SIG undefined FUN_143afb0a4(void)

void FUN_143afb0a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6ef60;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143afb111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143afb120 FUN_143afb120 body=64 status=ok
// SIG undefined FUN_143afb120(void)

void FUN_143afb120(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143afb1a6(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afb162 FUN_143afb162 body=66 status=ok
// SIG undefined FUN_143afb162(void)

undefined8 FUN_143afb162(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_143afb1a6(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afb1a6 FUN_143afb1a6 body=382 status=ok
// SIG undefined FUN_143afb1a6(void)

byte FUN_143afb1a6(undefined4 *param_1,float *param_2)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  byte unaff_BL;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar2 = *param_2;
  FUN_143af5e68(&local_40,*param_1);
  lVar4 = local_40;
  if (local_40 != 0) {
    dVar7 = *(double *)(local_40 + 0xe8) - (double)fVar2 * *(double *)(local_40 + 0xf0);
    dVar6 = (double)(float)(*(double *)(local_40 + 0xf8) / *(double *)(local_40 + 0xf0));
    if (dVar6 <= dVar7) {
      dVar7 = dVar6;
    }
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    *(double *)(local_40 + 0xe8) = dVar7;
    dVar7 = dVar7 / *(double *)(local_40 + 0xf8);
    if (1.0 <= dVar7) {
      dVar7 = 1.0;
    }
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    FUN_14485dd80(local_40 + 0x78,(float)dVar7);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar4 + 0xe8);
    unaff_BL = 1;
    if ((float)dVar7 <= 0.0) {
      FUN_1401cb356();
      local_50 = *(undefined8 *)(lVar4 + 0x100);
      local_48 = *(longlong *)(lVar4 + 0x108);
      lVar5 = lVar4;
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
        UNLOCK();
        lVar5 = local_40;
      }
      FUN_140d61352(&local_50);
      plVar3 = *(longlong **)(lVar5 + 0x108);
      *(undefined8 *)(lVar5 + 0x100) = 0;
      *(undefined8 *)(lVar5 + 0x108) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      *(undefined8 *)(local_40 + 0xe0) = 0;
      *(undefined8 *)(local_40 + 0xe8) = 0;
      unaff_BL = 0;
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4 != 0 & unaff_BL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afb328 FUN_143afb328 body=29 status=ok
// SIG undefined FUN_143afb328(void)

undefined8 FUN_143afb328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143afb4c4 FUN_143afb4c4 body=93 status=ok
// SIG undefined FUN_143afb4c4(void)

void FUN_143afb4c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143afb522 FUN_143afb522 body=93 status=ok
// SIG undefined FUN_143afb522(void)

void FUN_143afb522(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ae6f390;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143afb580 FUN_143afb580 body=126 status=ok
// SIG undefined FUN_143afb580(void)

void FUN_143afb580(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f390;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143afb5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143afb5fe FUN_143afb5fe body=20 status=ok
// SIG undefined FUN_143afb5fe(void)

undefined8 FUN_143afb5fe(longlong param_1)

{
  FUN_143afb720(param_1 + 0x20);
  return 0;
}



// FUNCTION 143afb612 FUN_143afb612 body=269 status=ok
// SIG undefined FUN_143afb612(void)

undefined8 FUN_143afb612(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143afb719;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143afb719;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143afb719:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143afb6cd;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143afb720(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_143afb6cd;
    }
  }
  uVar6 = 0;
LAB_143afb6cd:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afb720 FUN_143afb720 body=86 status=ok
// SIG undefined FUN_143afb720(void)

void FUN_143afb720(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x26c);
  FUN_144a81ee1(*(undefined8 *)(lVar2 + 0x260),*(undefined4 *)(lVar2 + 0x268));
  *(undefined4 *)(lVar2 + 0x268) = 0;
  if ((iVar1 < 0) && (*(int *)(lVar2 + 0x26c) != 0)) {
    FUN_146a3754a(lVar2 + 0x260,0);
    return;
  }
  return;
}



// FUNCTION 143afb776 FUN_143afb776 body=29 status=ok
// SIG undefined FUN_143afb776(void)

undefined8 FUN_143afb776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143afb912 FUN_143afb912 body=93 status=ok
// SIG undefined FUN_143afb912(void)

void FUN_143afb912(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6f470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143afb970 FUN_143afb970 body=93 status=ok
// SIG undefined FUN_143afb970(void)

void FUN_143afb970(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ae6f470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143afb9ce FUN_143afb9ce body=126 status=ok
// SIG undefined FUN_143afb9ce(void)

void FUN_143afb9ce(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ae6f470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143afba3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143afba56 FUN_143afba56 body=266 status=ok
// SIG undefined FUN_143afba56(void)

undefined8 FUN_143afba56(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143afbb5a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143afbb5a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143afbb5a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143afbb01;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1477439cc(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143afbb01;
    }
  }
  uVar6 = 0;
LAB_143afbb01:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afbb61 FUN_143afbb61 body=236 status=ok
// SIG undefined FUN_143afbb61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143afbb61(void)

{
  longlong lVar1;
  
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae6ccb0,1,&PTR_FUN_14ae6cc30,3,0,0);
  DAT_14cb46448 = 0;
  DAT_14cb46450 = 0;
  DAT_14cb46428 = 0;
  _DAT_14cb46430 = 0;
  _DAT_14cb46454 = 0xffffffff00000080;
  DAT_14cb4645c = 0;
  DAT_14cb46468 = 0;
  DAT_14cb46470 = 0;
  atexit(FUN_143af485c);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14ae6d0b0 + lVar1),L"/Script/CommonUI",
                  *(undefined8 *)(&UNK_14ae6d0b8 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_14ae6d0c0 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x70);
  FUN_14282b410(L"/Script/CommonUI",&PTR_FUN_14ae6e670,3,0,0,0,0);
  return;
}



// FUNCTION 143afbc50 FUN_143afbc50 body=55 status=ok
// SIG undefined FUN_143afbc50(void)

void FUN_143afbc50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46600 == 0) {
    uVar1 = FUN_1411fd326();
    DAT_14cb46600 = FUN_14171c317(FUN_1464852f1,uVar1,L"EBrushFalloffMode");
  }
  return;
}



// FUNCTION 143afbc87 FUN_143afbc87 body=55 status=ok
// SIG undefined FUN_143afbc87(void)

void FUN_143afbc87(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb46638 == 0) {
    uVar1 = FUN_1411fd326();
    DAT_14cb46638 = FUN_14171c317(FUN_146485473,uVar1,L"EBrushBlendType");
  }
  return;
}



// FUNCTION 143afbd3c FUN_143afbd3c body=239 status=ok
// SIG undefined FUN_143afbd3c(void)

void FUN_143afbd3c(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 7;
  FUN_14282b410(L"/Script/Landmass",0,0,&PTR_FUN_14ae70290);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14ae70650;
  local_58 = 1;
  FUN_14282b410(L"/Script/Landmass",0,0,&PTR_FUN_14ae70670);
  local_38 = 0x800000014ae70698;
  local_24 = 8;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_1464853b2(&local_38);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14ae709a0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Landmass",0,0,&PTR_FUN_14ae709c0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afbe2c FUN_143afbe2c body=185 status=ok
// SIG undefined FUN_143afbe2c(void)

void FUN_143afbe2c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (0 < *(int *)param_1[1]) {
    lVar9 = 8;
    lVar7 = 0;
    do {
      if ('\0' < *(char *)(*(longlong *)param_1[2] + lVar7)) {
        plVar4 = (longlong *)*param_1;
        lVar5 = *param_2;
        iVar1 = (int)plVar4[1];
        lVar8 = (longlong)iVar1;
        *(uint *)(plVar4 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
          FUN_146bd78c8(plVar4,iVar1);
        }
        lVar6 = *plVar4;
        uVar2 = *(undefined4 *)(lVar5 + lVar9);
        uVar3 = *(undefined4 *)(lVar5 + -4 + lVar9);
        *(undefined4 *)(lVar6 + lVar8 * 0xc) = *(undefined4 *)(lVar5 + -8 + lVar9);
        *(undefined4 *)(lVar6 + 4 + lVar8 * 0xc) = uVar3;
        *(undefined4 *)(lVar6 + 8 + lVar8 * 0xc) = uVar2;
        if (*(char *)param_1[3] == '\0') {
          lVar6 = lVar6 + lVar8 * 0xc;
          *(undefined4 *)(lVar6 + 4) = uVar2;
          *(undefined4 *)(lVar6 + 8) = uVar3;
        }
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0xc;
    } while (lVar7 < *(int *)param_1[1]);
  }
  return;
}



// FUNCTION 143afbee5 FUN_143afbee5 body=1409 status=ok
// SIG undefined FUN_143afbee5(void)

undefined4
FUN_143afbee5(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined7 local_1a0;
  undefined4 uStack_199;
  undefined1 local_195;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  puVar10 = (undefined8 *)*param_2;
  lVar3 = (longlong)*(int *)(param_2 + 1);
  if (lVar3 == 0) {
    local_1d0 = 1.79769313486232e+308;
    local_1c0 = -1.79769313486232e+308;
    local_1c8 = -1.79769313486232e+308;
    local_1d8 = 1.79769313486232e+308;
  }
  else {
    local_1d8 = 1.79769313486232e+308;
    local_1d0 = 1.79769313486232e+308;
    local_1c8 = -1.79769313486232e+308;
    local_1c0 = -1.79769313486232e+308;
    puVar6 = puVar10;
    do {
      uVar2 = 0xffffffff;
      uVar12 = 0x7fefffff;
      uVar15 = 0xffffffff;
      uVar16 = 0x7fefffff;
      uVar13 = 0xffffffff;
      uVar14 = 0xffefffff;
      uVar17 = 0xffffffff;
      uVar18 = 0xffefffff;
      if ((longlong)*(int *)(puVar6 + 1) != 0) {
        pdVar7 = (double *)*puVar6;
        pdVar8 = pdVar7 + (longlong)*(int *)(puVar6 + 1) * 2;
        uVar19 = 0xffffffff;
        uVar20 = 0xffefffff;
        uVar21 = 0xffffffff;
        uVar22 = 0xffefffff;
        uVar23 = 0xffffffff;
        uVar24 = 0x7fefffff;
        uVar25 = 0xffffffff;
        uVar26 = 0x7fefffff;
        do {
          dVar11 = *pdVar7;
          uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
          dVar1 = pdVar7[1];
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
          uVar2 = SUB84(dVar11,0);
          uVar12 = uVar14;
          if ((double)CONCAT44(uVar26,uVar25) <= dVar11) {
            uVar2 = uVar25;
            uVar12 = uVar26;
          }
          uVar13 = SUB84(dVar11,0);
          if (dVar11 <= (double)CONCAT44(uVar22,uVar21)) {
            uVar13 = uVar21;
            uVar14 = uVar22;
          }
          uVar15 = SUB84(dVar1,0);
          uVar16 = uVar18;
          if ((double)CONCAT44(uVar24,uVar23) <= dVar1) {
            uVar15 = uVar23;
            uVar16 = uVar24;
          }
          uVar17 = SUB84(dVar1,0);
          if (dVar1 <= (double)CONCAT44(uVar20,uVar19)) {
            uVar17 = uVar19;
            uVar18 = uVar20;
          }
          pdVar7 = pdVar7 + 2;
          uVar19 = uVar17;
          uVar20 = uVar18;
          uVar21 = uVar13;
          uVar22 = uVar14;
          uVar23 = uVar15;
          uVar24 = uVar16;
          uVar25 = uVar2;
          uVar26 = uVar12;
        } while (pdVar7 != pdVar8);
      }
      if (local_1c0 <= (double)CONCAT44(uVar18,uVar17)) {
        local_1c0 = (double)CONCAT44(uVar18,uVar17);
      }
      if (local_1c8 <= (double)CONCAT44(uVar14,uVar13)) {
        local_1c8 = (double)CONCAT44(uVar14,uVar13);
      }
      if ((double)CONCAT44(uVar16,uVar15) <= local_1d0) {
        local_1d0 = (double)CONCAT44(uVar16,uVar15);
      }
      if ((double)CONCAT44(uVar12,uVar2) <= local_1d8) {
        local_1d8 = (double)CONCAT44(uVar12,uVar2);
      }
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar10 + lVar3 * 5);
  }
  puVar6 = (undefined8 *)*param_3;
  iVar5 = *(int *)(param_3 + 1);
  lVar4 = (longlong)iVar5;
  if (lVar4 != 0) {
    puVar9 = puVar6;
    do {
      uVar15 = 0xffffffff;
      uVar16 = 0xffefffff;
      uVar2 = 0xffffffff;
      uVar12 = 0xffefffff;
      uVar17 = 0xffffffff;
      uVar18 = 0x7fefffff;
      uVar13 = 0xffffffff;
      uVar14 = 0x7fefffff;
      if ((longlong)*(int *)(puVar9 + 1) != 0) {
        pdVar7 = (double *)*puVar9;
        pdVar8 = pdVar7 + (longlong)*(int *)(puVar9 + 1) * 2;
        uVar19 = 0xffffffff;
        uVar20 = 0x7fefffff;
        uVar21 = 0xffffffff;
        uVar22 = 0x7fefffff;
        uVar23 = 0xffffffff;
        uVar24 = 0xffefffff;
        uVar25 = 0xffffffff;
        uVar26 = 0xffefffff;
        do {
          dVar11 = *pdVar7;
          uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
          dVar1 = pdVar7[1];
          uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
          uVar13 = SUB84(dVar11,0);
          uVar14 = uVar12;
          if ((double)CONCAT44(uVar22,uVar21) <= dVar11) {
            uVar13 = uVar21;
            uVar14 = uVar22;
          }
          uVar2 = SUB84(dVar11,0);
          if (dVar11 <= (double)CONCAT44(uVar26,uVar25)) {
            uVar2 = uVar25;
            uVar12 = uVar26;
          }
          uVar17 = SUB84(dVar1,0);
          uVar18 = uVar16;
          if ((double)CONCAT44(uVar20,uVar19) <= dVar1) {
            uVar17 = uVar19;
            uVar18 = uVar20;
          }
          uVar15 = SUB84(dVar1,0);
          if (dVar1 <= (double)CONCAT44(uVar24,uVar23)) {
            uVar15 = uVar23;
            uVar16 = uVar24;
          }
          pdVar7 = pdVar7 + 2;
          uVar19 = uVar17;
          uVar20 = uVar18;
          uVar21 = uVar13;
          uVar22 = uVar14;
          uVar23 = uVar15;
          uVar24 = uVar16;
          uVar25 = uVar2;
          uVar26 = uVar12;
        } while (pdVar7 != pdVar8);
      }
      if (local_1c0 <= (double)CONCAT44(uVar16,uVar15)) {
        local_1c0 = (double)CONCAT44(uVar16,uVar15);
      }
      if (local_1c8 <= (double)CONCAT44(uVar12,uVar2)) {
        local_1c8 = (double)CONCAT44(uVar12,uVar2);
      }
      if ((double)CONCAT44(uVar18,uVar17) <= local_1d0) {
        local_1d0 = (double)CONCAT44(uVar18,uVar17);
      }
      if ((double)CONCAT44(uVar14,uVar13) <= local_1d8) {
        local_1d8 = (double)CONCAT44(uVar14,uVar13);
      }
      puVar9 = puVar9 + 5;
    } while (puVar9 != puVar6 + lVar4 * 5);
  }
  dVar11 = (local_1c0 - local_1d0) * 0.5;
  local_1e0 = (local_1c8 - local_1d8) * 0.5;
  dVar11 = dVar11 + dVar11;
  local_1e0 = local_1e0 + local_1e0;
  if (local_1e0 <= dVar11) {
    local_1e0 = dVar11;
  }
  local_1b0 = 0;
  local_1a8 = 2;
  local_1a0 = 0;
  uStack_199 = 0;
  local_195 = 1;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = 1;
  local_1b8 = &PTR_FUN_14ae71888;
  if (*(int *)(param_2 + 1) != 0) {
    lVar3 = lVar3 * 0x28;
    local_250 = param_4;
    do {
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      FUN_143afcdf1(&local_228,puVar10,&local_1d8,&local_1e0);
      FUN_14826b4e6(&local_1b8,&local_228,0);
      FUN_1482748da(&local_228);
      puVar10 = puVar10 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
    puVar6 = (undefined8 *)*param_3;
    iVar5 = *(int *)(param_3 + 1);
    lVar4 = (longlong)iVar5;
    param_4 = local_250;
  }
  if (iVar5 != 0) {
    lVar4 = lVar4 * 0x28;
    do {
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      FUN_143afcdf1(&local_228,puVar6,&local_1d8,&local_1e0);
      FUN_14826b4e6(&local_1b8,&local_228,1);
      FUN_1482748da(&local_228);
      puVar6 = puVar6 + 5;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  local_200 = 0;
  uStack_1f8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_228 = 0x3ff0000000000000;
  local_1f0 = 0;
  local_238 = 0;
  local_248 = 0;
  uStack_240 = 0;
  uVar2 = FUN_14826f336(&local_1b8,*param_1,&local_228);
  if ((char)uVar2 != '\0') {
    iVar5 = *(int *)((longlong)param_4 + 0xc);
    FUN_148273bb4(*param_4,*(undefined4 *)(param_4 + 1));
    *(undefined4 *)(param_4 + 1) = 0;
    if ((iVar5 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
      FUN_14827a0e4(param_4,0);
    }
    local_258 = 0xffffffff;
    FUN_143afcc5d(&local_228,param_4,&local_1d8,&local_1e0);
  }
  FUN_1482748da(&local_248);
  FUN_14826ef48(&local_228);
  FUN_14827a04a(&uStack_208);
  FUN_148274782(&uStack_220);
  FUN_14827362e(&local_1b8);
  if ((local_d0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afc467 FUN_143afc467 body=2037 status=ok
// SIG undefined FUN_143afc467(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143afc467(longlong *param_1,char *param_2,char *param_3,longlong *param_4,
                       double *param_5,longlong *param_6,char param_7,double param_8,double param_9)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 in_XMM2 [16];
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  longlong *local_260;
  char *local_258;
  char *local_250;
  longlong *local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong local_218;
  longlong lStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined **local_198;
  undefined8 uStack_190;
  double local_188;
  undefined7 uStack_180;
  undefined4 uStack_179;
  undefined1 uStack_175;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 local_120;
  ulonglong uStack_118;
  double local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_260 = param_4;
  local_258 = param_3;
  local_250 = param_2;
  if ((longlong)(int)param_1[1] == 0) {
    dVar18 = 1.79769313486232e+308;
    uVar12 = 0xffffffff;
    uVar13 = 0xffefffff;
    uVar16 = 0xffffffff;
    uVar17 = 0x7fefffff;
    uVar14 = uVar12;
    uVar15 = uVar13;
  }
  else {
    lVar8 = *param_1;
    lVar5 = (longlong)(int)param_1[1] * 0x28;
    uVar12 = 0xffffffff;
    uVar13 = 0xffefffff;
    uVar16 = 0xffffffff;
    uVar17 = 0x7fefffff;
    dVar18 = 1.79769313486232e+308;
    uVar14 = uVar12;
    uVar15 = uVar13;
    do {
      FUN_14827a2a8(lVar8,&local_198);
      if ((double)local_198 <= (double)CONCAT44(uVar17,uVar16)) {
        uVar16 = SUB84(local_198,0);
        uVar17 = (undefined4)((ulonglong)local_198 >> 0x20);
      }
      if (uStack_190 <= dVar18) {
        dVar18 = uStack_190;
      }
      if ((double)CONCAT44(uVar15,uVar14) <= local_188) {
        uVar14 = SUB84(local_188,0);
        uVar15 = (undefined4)((ulonglong)local_188 >> 0x20);
      }
      if ((double)CONCAT44(uVar13,uVar12) <= (double)CONCAT17((undefined1)uStack_179,uStack_180)) {
        uVar12 = (undefined4)uStack_180;
        uVar13 = (undefined4)(CONCAT17((undefined1)uStack_179,uStack_180) >> 0x20);
      }
      lVar8 = lVar8 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  uVar4 = *(uint *)(local_260 + 1);
  dVar10 = 0.0;
  local_1b0 = 0.0;
  if ((longlong)(int)uVar4 != 0) {
    lVar8 = 0;
    local_1b0 = 0.0;
    do {
      dVar1 = *(double *)(*local_260 + lVar8);
      if (*local_258 == '\0') {
        dVar11 = 0.0;
        if (0.0 <= dVar1) {
          dVar11 = dVar1;
        }
      }
      else {
        dVar11 = (double)((ulonglong)dVar1 & DAT_149931180);
      }
      if (local_1b0 <= dVar11) {
        local_1b0 = dVar11;
      }
      lVar8 = lVar8 + 8;
      in_XMM2 = _DAT_149931180;
    } while ((longlong)(int)uVar4 * 8 - lVar8 != 0);
  }
  if (*local_250 == '\x02') {
    dVar10 = *param_5;
  }
  local_1b0 = local_1b0 + dVar10;
  local_1a8 = (double)CONCAT44(uVar15,uVar14) + local_1b0;
  local_1a0 = (double)CONCAT44(uVar13,uVar12) + local_1b0;
  local_1b8 = (double)CONCAT44(uVar17,uVar16) - local_1b0;
  local_1b0 = dVar18 - local_1b0;
  dVar18 = (local_1a0 - local_1b0) * 0.5;
  dVar10 = (local_1a8 - local_1b8) * 0.5;
  dVar18 = dVar18 + dVar18;
  dVar10 = dVar10 + dVar10;
  if (dVar10 <= dVar18) {
    dVar10 = dVar18;
  }
  dVar18 = 1e-08;
  if (1e-08 <= dVar10) {
    dVar18 = dVar10;
  }
  local_1d8 = 0;
  lStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = dVar18;
  if ((longlong)(int)param_1[1] != 0) {
    lVar8 = *param_1;
    lVar5 = (longlong)(int)param_1[1] * 0x28;
    do {
      FUN_143afcdf1(&local_1d8,lVar8,&local_1b8,&local_1c0);
      lVar8 = lVar8 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    uVar4 = *(uint *)(local_260 + 1);
  }
  lVar5 = lStack_1d0;
  lVar8 = local_1d8;
  local_248 = param_1;
  if (0 < (int)uVar4) {
    uVar14 = SUB84(param_9,0);
    uVar15 = (undefined4)((ulonglong)param_9 >> 0x20);
    if (param_9 <= 1e-08) {
      uVar14 = 0xe2308c3a;
      uVar15 = 0x3e45798e;
    }
    bVar3 = 0.0 < param_8;
    if (2000.0 <= param_8) {
      param_8 = 2000.0;
    }
    local_240 = (longlong *)((longlong)(ulonglong)uVar4 + -1);
    plVar6 = (longlong *)0x0;
    do {
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      local_13c = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      uStack_175 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      local_188 = 0.0;
      uStack_180 = 0;
      uStack_179 = 0;
      local_198 = (undefined **)0x0;
      uStack_190 = 0.0;
      local_128 = 2.0;
      local_120 = 0;
      local_108 = CONCAT44(uVar15,uVar14);
      uStack_118 = CONCAT71((int7)(uStack_118 >> 8),local_240 != plVar6) & 0xffffffffff0000ff;
      local_110 = dVar18 / 9007199254740991.0;
      local_100 = ~-(ulonglong)bVar3 & 0x409f400000000000 | (ulonglong)param_8 & -(ulonglong)bVar3;
      FUN_1482716fc(&local_198,&local_1d8,*local_250,*local_258);
      local_128 = *param_5;
      auVar9._0_8_ = (*(double *)(*local_260 + (longlong)plVar6 * 8) / dVar18) * 9007199254740991.0;
      auVar9._8_8_ = 0;
      in_XMM2 = roundpd(in_XMM2,auVar9,1);
      FUN_1482736a8(&local_198,&local_218,in_XMM2._0_8_);
      FUN_1482748da(&local_1d8);
      lVar5 = lStack_210;
      lVar8 = local_218;
      local_1d8 = local_218;
      lStack_1d0 = lStack_210;
      local_1c8 = local_208;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      FUN_1482748da(&local_218);
      if (lVar5 == lVar8) {
        iVar2 = *(int *)((longlong)param_6 + 0xc);
        FUN_148273bb4(*param_6,(int)param_6[1]);
        *(undefined4 *)(param_6 + 1) = 0;
        if ((iVar2 < 0) && (*(int *)((longlong)param_6 + 0xc) != 0)) {
          FUN_14827a0e4(param_6,0);
        }
        FUN_14827a18a(&local_198);
        goto LAB_143afcb63;
      }
      plVar6 = (longlong *)((longlong)plVar6 + 1);
      FUN_14827a18a(&local_198);
    } while ((longlong *)(ulonglong)uVar4 != plVar6);
  }
  if ((ulonglong)((lVar5 - lVar8 >> 3) * -0x5555555555555555) < 2) {
    iVar2 = *(int *)((longlong)param_6 + 0xc);
    FUN_148273bb4(*param_6,(int)param_6[1]);
    *(undefined4 *)(param_6 + 1) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_6 + 0xc) != 0)) {
      FUN_14827a0e4(param_6,0);
    }
    plVar6 = &local_218;
    FUN_143afd00a(plVar6,lVar5 + -0x18,&local_1b8,&local_1c0);
    FUN_148267e0c(&local_198,plVar6);
    iVar2 = (int)param_6[1];
    lVar8 = (longlong)iVar2;
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_148279fb6(param_6,iVar2);
    }
    lVar5 = *param_6;
    *(undefined8 *)(lVar5 + lVar8 * 0x28) = 0;
    *(undefined ***)(lVar5 + lVar8 * 0x28) = local_198;
    local_198 = (undefined **)0x0;
    *(undefined4 *)(lVar5 + 8 + lVar8 * 0x28) = (undefined4)uStack_190;
    *(undefined4 *)(lVar5 + 0xc + lVar8 * 0x28) = uStack_190._4_4_;
    uStack_190 = 0.0;
    *(undefined1 *)(lVar5 + 0x10 + lVar8 * 0x28) = local_188._0_1_;
    *(undefined8 *)(lVar5 + 0x18 + lVar8 * 0x28) = 0;
    *(ulonglong *)(lVar5 + 0x18 + lVar8 * 0x28) = CONCAT17((undefined1)uStack_179,uStack_180);
    uStack_180 = 0;
    *(uint *)(lVar5 + 0x20 + lVar8 * 0x28) = CONCAT13(uStack_175,uStack_179._1_3_);
    *(undefined4 *)(lVar5 + 0x24 + lVar8 * 0x28) = uStack_174;
    uStack_179 = 0;
    uStack_175 = 0;
    uStack_174 = 0;
    FUN_148267ee4();
    if (local_218 != 0) {
      FUN_1400020a8();
    }
LAB_143afcb63:
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
  else {
    uStack_190 = 0.0;
    local_188 = (double)CONCAT44(local_188._4_4_,2);
    uStack_180 = 0;
    uStack_179 = 0;
    uStack_175 = 1;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    local_13c = 0;
    uStack_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    local_128 = 0.0;
    local_120 = 0;
    uStack_118 = 0;
    local_110 = 0.0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_b7 = 0;
    local_198 = &PTR_FUN_14ae71888;
    local_b8 = 0;
    FUN_14826b4e6(&local_198,&local_1d8,0);
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    lStack_210 = 0;
    local_208 = 0;
    local_218 = 0x3ff0000000000000;
    local_1e0 = 0;
    local_228 = 0;
    local_238 = 0;
    uStack_230 = 0;
    uVar4 = FUN_14826f336(&local_198,2,&local_218);
    plVar6 = local_248;
    uVar7 = (ulonglong)uVar4;
    if ((char)uVar4 == '\0') {
      if ((param_7 != '\0') && (*param_6 != *local_248)) {
        iVar2 = *(int *)((longlong)param_6 + 0xc);
        FUN_148273bb4(*param_6,(int)param_6[1]);
        *(undefined4 *)(param_6 + 1) = 0;
        if ((iVar2 < 0) && (*(int *)((longlong)param_6 + 0xc) != 0)) {
          FUN_14827a0e4(param_6,0);
        }
        FUN_14827a47e(param_6,plVar6);
      }
    }
    else {
      iVar2 = *(int *)((longlong)param_6 + 0xc);
      FUN_148273bb4(*param_6,(int)param_6[1]);
      *(undefined4 *)(param_6 + 1) = 0;
      if ((iVar2 < 0) && (*(int *)((longlong)param_6 + 0xc) != 0)) {
        FUN_14827a0e4(param_6,0);
      }
      local_268 = 0xffffffff;
      FUN_143afcc5d(&local_218,param_6,&local_1b8,&local_1c0);
    }
    FUN_1482748da(&local_238);
    FUN_14826ef48(&local_218);
    FUN_14827a04a(&uStack_1f8);
    FUN_148274782(&lStack_210);
    FUN_14827362e(&local_198);
  }
  FUN_1482748da(&local_1d8);
  if ((local_b0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143afcc5d FUN_143afcc5d body=403 status=ok
// SIG undefined FUN_143afcc5d(void)

void FUN_143afcc5d(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_98 [32];
  uint local_78;
  void *local_70;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = -(uint)((int)param_2[1] == 0) | param_5;
  FUN_143afd00a(&local_58,param_1 + 8);
  if (0 < (longlong)local_50) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 == 0) {
      uVar7 = *(uint *)(param_2 + 1);
    }
    else {
      bVar3 = true;
      do {
        bVar2 = bVar3;
        lVar4 = *(longlong *)(lVar4 + 0x38);
        bVar3 = (bool)(bVar2 ^ 1);
      } while (lVar4 != 0);
      uVar7 = *(uint *)(param_2 + 1);
      if ((!bVar2) && ((int)uVar6 < (int)uVar7 && -1 < (int)uVar6)) {
        lVar4 = *param_2;
        local_68 = (void *)0x0;
        local_70 = local_58;
        local_60 = local_50;
        FUN_144721d4c(&local_68,local_50,0);
        memcpy(local_68,local_70,(longlong)local_50 << 4);
        FUN_148279580((ulonglong)uVar6 * 0x28 + lVar4,&local_68,0,0);
        uVar6 = param_5;
        goto LAB_143afccb9;
      }
    }
    *(uint *)(param_2 + 1) = uVar7 + 1;
    if (*(uint *)((longlong)param_2 + 0xc) < uVar7 + 1) {
      FUN_148279fb6(param_2,uVar7);
    }
    FUN_148267e0c((longlong)(int)uVar7 * 0x28 + *param_2,&local_58);
    uVar6 = uVar7;
  }
LAB_143afccb9:
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  for (puVar5 = *(undefined8 **)(param_1 + 0x20); puVar5 != puVar1; puVar5 = puVar5 + 1) {
    local_78 = uVar6;
    FUN_143afcc5d(*puVar5,param_2,param_3,param_4);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143afcdf1 FUN_143afcdf1 body=229 status=ok
// SIG undefined FUN_143afcdf1(void)

void FUN_143afcdf1(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1482711a8(param_1,(longlong)*(int *)(param_2 + 0x20) +
                        (param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_143afced7(local_50,param_2,param_3,param_4);
  FUN_1482761b2(param_1,local_50);
  FUN_148274782(local_50);
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x18);
    lVar1 = (longlong)*(int *)(param_2 + 0x20) << 4;
    do {
      FUN_143afced7(local_50,lVar2,param_3,param_4);
      FUN_1482761b2(param_1,local_50);
      FUN_148274782(local_50);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afced7 FUN_143afced7 body=306 status=ok
// SIG undefined FUN_143afced7(void)

undefined8 * FUN_143afced7(undefined8 *param_1,longlong *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1482768c2(0,(longlong)(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar2 = 8;
    lVar3 = 0;
    do {
      local_70 = (longlong)
                 (((*(double *)(*param_2 + -8 + lVar2) - *param_3) / *param_4) * 9007199254740991.0
                 + 0.0);
      local_68 = (longlong)
                 (((*(double *)(*param_2 + lVar2) - param_3[1]) / *param_4) * 9007199254740991.0 +
                 0.0);
      plVar1 = (longlong *)param_1[1];
      if (plVar1 == (longlong *)param_1[2]) {
        FUN_148276a78(param_1,plVar1,&local_70);
      }
      else {
        *plVar1 = local_70;
        plVar1[1] = local_68;
        param_1[1] = plVar1 + 2;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143afd00a FUN_143afd00a body=244 status=ok
// SIG undefined FUN_143afd00a(void)

longlong * FUN_143afd00a(longlong *param_1,longlong *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  if (param_2[1] != lVar7) {
    lVar8 = 8;
    uVar9 = 0;
    do {
      lVar5 = *(longlong *)(lVar7 + lVar8);
      lVar7 = *(longlong *)(lVar7 + -8 + lVar8);
      dVar1 = *param_4;
      dVar2 = *param_3;
      dVar3 = param_3[1];
      iVar4 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
        FUN_14489624a(param_1,iVar4);
      }
      lVar6 = *param_1;
      *(double *)(lVar6 + (longlong)iVar4 * 0x10) =
           ((double)lVar7 / 9007199254740991.0) * dVar1 + dVar2;
      *(double *)(lVar6 + 8 + (longlong)iVar4 * 0x10) =
           ((double)lVar5 / 9007199254740991.0) * dVar1 + dVar3;
      uVar9 = uVar9 + 1;
      lVar7 = *param_2;
      lVar8 = lVar8 + 0x10;
    } while (uVar9 < (ulonglong)(param_2[1] - lVar7 >> 4));
  }
  return param_1;
}



// FUNCTION 143afd0fe FUN_143afd0fe body=221 status=ok
// SIG undefined FUN_143afd0fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143afd0fe(void)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  _DAT_14cb46660 = 0x7fffffffffffffff;
  _DAT_14cb46668 = 0x7fffffffffffffff;
  _DAT_14cb46670 = 0x8000000000000000;
  _DAT_14cb46678 = 0x8000000000000000;
  _DAT_14cb46680 = 0x7fefffffffffffff;
  _DAT_14cb46688 = 0x7fefffffffffffff;
  _DAT_14cb46690 = 0xffefffffffffffff;
  _DAT_14cb46698 = 0xffefffffffffffff;
  local_30 = 0x800000014ae71850;
  local_1c = 0x12;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_1464856e6(&local_30);
  DAT_14cb466a8 = 0x7fffffffffffffff;
  DAT_14cb466b0 = 0x7fffffffffffffff;
  DAT_14cb466b8 = 0x8000000000000001;
  DAT_14cb466c0 = 0x8000000000000001;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afd1e8 FUN_143afd1e8 body=36 status=ok
// SIG undefined FUN_143afd1e8(void)

void FUN_143afd1e8(void)

{
  FUN_148298712(*(undefined8 *)(DAT_14cb46718 + 8));
  FUN_1400020a8(DAT_14cb46718);
  return;
}



// FUNCTION 143afd20c FUN_143afd20c body=289 status=ok
// SIG undefined FUN_143afd20c(void)

void FUN_143afd20c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 0x28);
      if (*plVar1 != 0) {
        if ((int)plVar1[3] != 0) {
          lVar3 = 0;
          uVar4 = 0;
          do {
            if (*(longlong *)(*plVar1 + lVar3) != 0) {
              if (DAT_14cb46730 == (code *)0x0) {
                (*DAT_14cb46728)(*(longlong *)(*plVar1 + lVar3),0);
              }
              else {
                (*DAT_14cb46730)();
              }
            }
            uVar4 = uVar4 + 1;
            lVar3 = lVar3 + 0x18;
          } while (uVar4 < *(uint *)(plVar1 + 3));
          if (*plVar1 == 0) goto LAB_143afd2a6;
        }
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)();
        }
        else {
          (*DAT_14cb46730)();
        }
      }
LAB_143afd2a6:
      if (plVar1[2] != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)();
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      if (plVar1[1] != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)();
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x28));
    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 == 0) goto LAB_143afd319;
  }
  if (DAT_14cb46730 == (code *)0x0) {
    (*DAT_14cb46728)(lVar2,0);
  }
  else {
    (*DAT_14cb46730)();
  }
LAB_143afd319:
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143afd32d FUN_143afd32d body=73 status=ok
// SIG undefined FUN_143afd32d(void)

void FUN_143afd32d(longlong param_1,float *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_1 + 0x30);
  if ((*pbVar1 & 1) == 0) {
    if (*param_2 <= 1.1920929e-07) {
      FUN_1482992e6(param_2);
    }
    else {
      FUN_1482996f2(param_2);
    }
    if ((*pbVar1 & 1) == 0) {
      LOCK();
      *(int *)(pbVar1 + 0x18) = *(int *)(pbVar1 + 0x18) + 1;
      UNLOCK();
      FUN_148298eae(pbVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143afd376 FUN_143afd376 body=796 status=ok
// SIG undefined FUN_143afd376(void)

void FUN_143afd376(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_128 [32];
  code *local_108;
  undefined8 local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)param_1[2] & 1) != 0) goto LAB_143afd3a4;
  puVar5 = (undefined8 *)(*DAT_14cb46728)(0,0x68);
  *puVar5 = *param_2;
  puVar5[1] = 0;
  puVar5[2] = 4;
  *(undefined4 *)(puVar5 + 3) = 0;
  puVar5[4] = 0;
  puVar5[5] = 4;
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[7] = 0;
  puVar5[8] = 4;
  *(undefined4 *)(puVar5 + 9) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 4;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  FUN_14829af34(puVar5);
  uVar1 = *(uint *)((longlong)puVar5 + 0x5c);
  uVar7 = (ulonglong)uVar1;
  if ((*(byte *)param_1[2] & 1) == 0) {
    lVar2 = param_2[1];
    *(uint *)(lVar2 + 0xc) = uVar1;
    if (*(uint *)(lVar2 + 0x10) < uVar1) {
      FUN_148298f1a(lVar2,uVar1);
LAB_143afd486:
      bVar4 = false;
      uVar8 = 0;
      do {
        puVar6 = (undefined4 *)(*DAT_14cb46728)(0,0x50);
        uVar3 = *param_2;
        *puVar6 = (int)uVar8;
        *(undefined8 *)(puVar6 + 2) = uVar3;
        *(undefined8 **)(puVar6 + 4) = puVar5;
        puVar6[6] = (int)uVar8;
        *(undefined8 *)(puVar6 + 8) = 0;
        *(undefined8 *)(puVar6 + 10) = 4;
        puVar6[0xc] = 0;
        *(undefined8 *)(puVar6 + 0xe) = 0;
        *(undefined8 *)(puVar6 + 0x10) = 8;
        puVar6[0x12] = 0;
        *(undefined4 **)(*(longlong *)param_2[1] + uVar8 * 8) = puVar6;
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
    else {
      bVar4 = true;
      if (uVar1 != 0) goto LAB_143afd486;
    }
    FUN_14829b304(param_2[2],*param_2,puVar5);
    local_60 = 0;
    local_58 = 4;
    local_50 = 0;
    local_54 = uVar1;
    if (!bVar4) {
      FUN_148298f1a(&local_60,uVar1);
      uVar8 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)param_2[1] + uVar8 * 8);
        *(float *)(local_60 + uVar8 * 4) =
             (float)*(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x50) +
                             (ulonglong)*(uint *)(lVar2 + 0x18) * 4);
        uVar8 = uVar8 + 1;
      } while (uVar7 != uVar8);
    }
    lVar2 = local_60;
    local_98 = 0;
    local_90 = 4;
    local_88 = 0;
    local_80 = 0;
    local_78 = 4;
    local_70 = 0;
    local_68 = 0;
    local_b8 = local_60;
    local_b0 = local_54;
    FUN_14829a620();
    local_f0 = *param_1;
    local_e8 = param_1[1];
    local_e0 = param_1[2];
    local_d8 = param_1[3];
    local_d0 = param_1[4];
    local_c8 = param_1[5];
    local_c0 = param_1[6];
    FUN_14828d90c(local_d8,&local_f4,&local_f0,uVar1);
    if (!bVar4) {
      do {
        uVar7 = uVar7 - 1;
        local_100 = *(undefined8 *)(*(longlong *)param_2[1] + (uVar7 & 0xffffffff) * 8);
        local_108 = FUN_143afd693;
        FUN_148298fa0(*(undefined8 *)(*(longlong *)param_1[3] + (ulonglong)local_f4 * 8),&local_108)
        ;
      } while (uVar7 != 0);
    }
    FUN_14828da20(param_1[3],&local_f4);
    FUN_14829a7b2(local_a8);
    if (lVar2 != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(lVar2,0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14829b518(puVar5);
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(puVar5,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
LAB_143afd3a4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143afd693 FUN_143afd693 body=72 status=ok
// SIG undefined FUN_143afd693(void)

void FUN_143afd693(undefined8 *param_1,undefined8 param_2)

{
  if ((*(byte *)param_1[2] & 1) == 0) {
    FUN_14829b918(param_2,param_1[3],param_1[1],param_1[2],*(undefined8 *)*param_1,
                  *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 5),param_1[6]);
  }
  return;
}



// FUNCTION 143afd6db FUN_143afd6db body=360 status=ok
// SIG undefined FUN_143afd6db(void)

void FUN_143afd6db(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (*DAT_14cb46728)(0,0xe8);
  local_98 = (undefined8 *)param_2[6];
  local_58 = *(undefined4 *)(param_2 + 7);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_50 = *(undefined4 *)(param_2 + 8);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x44);
  FUN_1482a1a5c(uVar4,*param_2,*(undefined4 *)(param_2 + 5));
  param_2[1] = uVar4;
  FUN_1482a1f74(uVar4,param_1[3],*(undefined8 *)param_1[1]);
  lVar1 = param_2[1];
  if (*(char *)(lVar1 + 0xe0) == '\x01') {
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    lVar2 = *(longlong *)param_1[4];
    FUN_1482a37e0(lVar2,uVar4);
    cVar3 = FUN_1482a3944(lVar2);
    if (cVar3 != '\0') {
      do {
        uVar5 = (*DAT_14cb46728)(0,0xe8);
        local_88 = param_2[6];
        local_70 = *(undefined8 *)(lVar2 + 8);
        local_68 = *(undefined4 *)(lVar2 + 0x14);
        local_80 = *(undefined8 *)(lVar2 + 0x70);
        local_78 = *(undefined4 *)(lVar2 + 0x7c);
        local_90 = &local_70;
        local_98 = &local_80;
        FUN_1482a3fee(uVar5,*(undefined8 *)param_1[2],lVar1,uVar4);
        local_60 = uVar5;
        FUN_148298fa0(param_2 + 2,&local_60);
        cVar3 = FUN_1482a3944();
      } while (cVar3 != '\0');
    }
    LOCK();
    *(int *)(*param_1 + 0x18) = *(int *)(*param_1 + 0x18) + *(int *)(param_2 + 8);
    UNLOCK();
    FUN_148298eae();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afd844 FUN_143afd844 body=107 status=ok
// SIG undefined FUN_143afd844(void)

bool FUN_143afd844(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(*param_2);
  fVar2 = ABS(*param_1);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = 1.0;
  if (1.0 <= fVar2) {
    fVar1 = fVar2;
  }
  if (fVar1 * param_3 < ABS(*param_1 - *param_2)) {
    return false;
  }
  fVar1 = ABS(param_2[1]);
  fVar2 = ABS(param_1[1]);
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  fVar1 = 1.0;
  if (1.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return ABS(param_1[1] - param_2[1]) <= fVar1 * param_3;
}



// FUNCTION 143afd8af FUN_143afd8af body=327 status=ok
// SIG undefined FUN_143afd8af(void)

uint FUN_143afd8af(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = param_2[1] - param_1[1];
  fVar3 = *param_2 - *param_1;
  fVar4 = param_4[1] - param_3[1];
  fVar1 = *param_4 - *param_3;
  fVar5 = fVar3 * fVar4 - fVar1 * fVar6;
  fVar7 = ABS(fVar5);
  fVar8 = fVar7;
  if (fVar7 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = 1.0;
  if (1.0 <= fVar8) {
    fVar9 = fVar8;
  }
  if (fVar9 * param_5 < fVar7) {
    fVar8 = *param_1 - *param_3;
    fVar7 = param_1[1] - param_3[1];
    fVar3 = (fVar3 * fVar7 - fVar6 * fVar8) / fVar5;
    if ((param_5 < fVar3) && (fVar3 < 1.0 - param_5)) {
      fVar5 = (fVar1 * fVar7 - fVar8 * fVar4) / fVar5;
      uVar2 = -(uint)(fVar5 < 1.0 - param_5 && param_5 < fVar5);
      goto LAB_143afd9bf;
    }
  }
  uVar2 = 0;
LAB_143afd9bf:
  return uVar2 & 0xffffff01;
}



// FUNCTION 143afd9f6 FUN_143afd9f6 body=948 status=ok
// SIG undefined FUN_143afd9f6(void)

void FUN_143afd9f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  size_t sVar10;
  uint uVar11;
  
  if (param_2 == 0) {
    if (*(int *)((longlong)param_1 + 0x74) == 0) {
      sVar10 = 0;
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x74) << 4;
    }
    *param_1 = (longlong)pvVar5;
    sVar6 = 0;
    memset(pvVar5,0,sVar10);
    if (*(int *)((longlong)param_1 + 0x74) * (int)param_1[0xe] == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar6 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0x74) * (int)param_1[0xe]) << 3;
    }
    param_1[1] = (longlong)pvVar5;
    memset(pvVar5,0,sVar6);
    if (*(int *)((longlong)param_1 + 0x74) != 0) {
      lVar3 = 0;
      uVar2 = 0;
      do {
        *(ulonglong *)(*param_1 + lVar3) =
             (ulonglong)(uint)((int)param_1[0xe] * (int)uVar2) * 8 + param_1[1];
        *(undefined4 *)(*param_1 + 8 + lVar3) = 8;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x10;
      } while (uVar2 < *(uint *)((longlong)param_1 + 0x74));
    }
    if ((int)param_1[0xe] == 0) {
      sVar10 = 0;
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar10 = (size_t)*(uint *)(param_1 + 0xe);
    }
    param_1[2] = (longlong)pvVar5;
    sVar6 = 0;
    memset(pvVar5,0,sVar10);
    if ((int)param_1[0xe] == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar6 = (ulonglong)*(uint *)(param_1 + 0xe) << 2;
    }
    param_1[3] = (longlong)pvVar5;
    memset(pvVar5,0,sVar6);
    return;
  }
  if (param_1[5] == 0) {
    if ((int)param_1[0xe] == 0) {
      uVar11 = 0;
    }
    else {
      uVar2 = 0;
      uVar11 = 0;
      do {
        uVar7 = uVar11;
        if (*(byte *)(param_1[2] + uVar2) != 0) {
          uVar7 = 0xffffffff;
        }
        uVar11 = (*(byte *)(param_1[2] + uVar2) ^ 1) + uVar11;
        *(uint *)(param_1[3] + uVar2 * 4) = uVar7;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xe));
    }
    *(uint *)(param_1 + 4) = uVar11;
    if ((char)param_1[0x10] == '\0') {
      *(uint *)((longlong)param_1 + 0x7c) = uVar11 * 5;
    }
    puVar4 = (undefined8 *)(*DAT_14cb46728)();
    param_1[5] = (longlong)puVar4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar1 = (uint *)param_1[5];
    *puVar1 = uVar11;
    puVar1[1] = uVar11;
    puVar1[2] = 0x1001;
    *(code **)(puVar1 + 4) = FUN_143afe086;
    *(code **)(puVar1 + 6) = FUN_143afe145;
    sVar10 = 0;
    if (uVar11 == 0) {
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      memset((void *)0x0,0,0);
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      *(void **)(puVar1 + 10) = pvVar5;
      memset(pvVar5,0,(ulonglong)uVar11 << 4);
      do {
        lVar3 = *(longlong *)(puVar1 + 10);
        *(undefined8 *)(lVar3 + sVar10) = 0;
        ((undefined8 *)(lVar3 + sVar10))[1] = 0;
        sVar10 = sVar10 + 0x10;
      } while ((ulonglong)uVar11 << 4 != sVar10);
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[8] = uVar11;
      puVar1[9] = uVar11;
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar10 = (ulonglong)puVar1[8] << 3;
    }
    *(void **)(puVar1 + 0xe) = pvVar5;
    sVar6 = 0;
    memset(pvVar5,0,sVar10);
    if (*(int *)((longlong)param_1 + 0x74) * uVar11 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar6 = (ulonglong)(*(int *)((longlong)param_1 + 0x74) * uVar11) << 3;
    }
    param_1[0xc] = (longlong)pvVar5;
    sVar10 = 0;
    memset(pvVar5,0,sVar6);
    if (*(int *)((longlong)param_1 + 0x74) * uVar11 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)(*DAT_14cb46728)(0);
      sVar10 = (ulonglong)(uVar11 * *(int *)((longlong)param_1 + 0x74)) << 3;
    }
    param_1[0xd] = (longlong)pvVar5;
    memset(pvVar5,0,sVar10);
    uVar11 = *(uint *)((longlong)param_1 + 0x74);
    if (uVar11 != 0) {
      lVar3 = param_1[4];
      uVar7 = *(uint *)(param_1 + 0xe);
      uVar2 = 0;
      uVar8 = uVar7;
      do {
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar9 = 0;
          do {
            if (*(char *)(param_1[2] + uVar9) == '\0') {
              *(undefined8 *)
               (param_1[0xc] +
               (ulonglong)(uint)(*(int *)(param_1[3] + uVar9 * 4) + (int)lVar3 * (int)uVar2) * 8) =
                   *(undefined8 *)
                    (*(longlong *)(*param_1 + uVar2 * 0x10) +
                    (ulonglong)(uint)(*(int *)(*param_1 + 8 + uVar2 * 0x10) * (int)uVar9));
              uVar7 = *(uint *)(param_1 + 0xe);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
          uVar11 = *(uint *)((longlong)param_1 + 0x74);
          uVar8 = uVar7;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar11);
    }
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return;
}



// FUNCTION 143afddaa FUN_143afddaa body=135 status=ok
// SIG undefined FUN_143afddaa(void)

void FUN_143afddaa(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2) == '\x01') {
    puVar2 = (uint *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x50);
    lVar3 = 0x58;
    if (uVar1 != *(uint *)(param_1 + 0x54)) goto LAB_143afde03;
  }
  else {
    param_2 = *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 4);
    puVar2 = (uint *)(param_1 + 0x40);
    uVar1 = *(uint *)(param_1 + 0x40);
    lVar3 = 0x48;
    if (uVar1 != *(uint *)(param_1 + 0x44)) goto LAB_143afde03;
  }
  FUN_143afe28e(puVar2);
  uVar1 = *puVar2;
LAB_143afde03:
  *(uint *)(*(longlong *)(param_1 + lVar3) + (ulonglong)uVar1 * 0x10) = param_2;
  *(undefined8 *)(*(longlong *)(param_1 + lVar3) + 8 + (ulonglong)*puVar2 * 0x10) = param_3;
  *puVar2 = *puVar2 + 1;
  return;
}



// FUNCTION 143afde31 FUN_143afde31 body=597 status=ok
// SIG undefined FUN_143afde31(void)

void FUN_143afde31(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  
  if (param_2 == 1) {
    param_1[8] = 0;
    if (param_1[9] != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(param_1[9],0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    param_1[9] = 0;
    param_1[10] = 0;
    if (param_1[0xb] != 0) {
      if (DAT_14cb46730 == (code *)0x0) {
        (*DAT_14cb46728)(param_1[0xb],0);
      }
      else {
        (*DAT_14cb46730)();
      }
    }
    param_1[0xb] = 0;
  }
  else {
    lVar3 = param_1[0xd];
    lVar5 = param_1[4];
    uVar11 = (ulonglong)*(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 10);
    if (uVar11 != 0) {
      lVar8 = param_1[5];
      uVar10 = 0;
      do {
        uVar12 = 0;
        do {
          lVar4 = param_1[9];
          dVar13 = *(double *)(lVar4 + 8 + uVar10 * 0x10) * *(double *)(lVar4 + 8 + uVar12 * 0x10);
          uVar9 = *(uint *)(lVar4 + uVar12 * 0x10);
          uVar6 = *(uint *)(lVar4 + uVar10 * 0x10);
          if (uVar6 == uVar9) {
            lVar4 = *(longlong *)(lVar8 + 0x38);
            *(double *)(lVar4 + (ulonglong)uVar9 * 8) =
                 *(double *)(lVar4 + (ulonglong)uVar9 * 8) + dVar13;
          }
          lVar4 = *(longlong *)(lVar8 + 0x28);
          lVar7 = (ulonglong)uVar6 * 0x10;
          puVar1 = (uint *)(lVar4 + lVar7);
          uVar6 = *(uint *)(lVar4 + lVar7);
          if ((ulonglong)uVar6 != 0) {
            lVar4 = *(longlong *)(puVar1 + 2);
            lVar7 = 0;
            do {
              if (*(uint *)(lVar4 + lVar7) == uVar9) {
                *(double *)(lVar4 + 8 + lVar7) = dVar13 + *(double *)(lVar4 + 8 + lVar7);
                goto LAB_143afdf54;
              }
              lVar7 = lVar7 + 0x10;
            } while ((ulonglong)uVar6 << 4 != lVar7);
          }
          if (uVar6 == puVar1[1]) {
            FUN_143afe28e(puVar1);
            uVar6 = *puVar1;
          }
          *(uint *)(*(longlong *)(puVar1 + 2) + (ulonglong)uVar6 * 0x10) = uVar9;
          *(double *)(*(longlong *)(puVar1 + 2) + 8 + (ulonglong)*puVar1 * 0x10) = dVar13;
          *puVar1 = *puVar1 + 1;
LAB_143afdf54:
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
    uVar9 = *(uint *)((longlong)param_1 + 0x74);
    if (uVar9 != 0) {
      uVar10 = 0;
      do {
        if ((ulonglong)uVar2 == 0) {
          dVar13 = 0.0;
        }
        else {
          dVar13 = 0.0;
          lVar8 = 0;
          do {
            dVar13 = dVar13 + *(double *)(param_1[0xb] + 8 + lVar8) *
                              *(double *)
                               (*(longlong *)(*param_1 + uVar10 * 0x10) +
                               (ulonglong)
                               (uint)(*(int *)(param_1[0xb] + lVar8) *
                                     *(int *)(*param_1 + 8 + uVar10 * 0x10)));
            lVar8 = lVar8 + 0x10;
          } while ((ulonglong)uVar2 << 4 != lVar8);
        }
        if (uVar11 != 0) {
          lVar8 = 0;
          do {
            uVar12 = (ulonglong)(uint)(*(int *)(param_1[9] + lVar8) + (int)lVar5 * (int)uVar10);
            *(double *)(lVar3 + uVar12 * 8) =
                 *(double *)(lVar3 + uVar12 * 8) - *(double *)(param_1[9] + 8 + lVar8) * dVar13;
            lVar8 = lVar8 + 0x10;
          } while (uVar11 << 4 != lVar8);
          uVar9 = *(uint *)((longlong)param_1 + 0x74);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar9);
    }
    *(int *)(param_1 + 0xf) = (int)param_1[0xf] + 1;
  }
  return;
}



// FUNCTION 143afe086 FUN_143afe086 body=191 status=ok
// SIG undefined FUN_143afe086(void)

void FUN_143afe086(uint *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 8;
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 10);
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        if (DAT_14cb46730 == (code *)0x0) {
          (*DAT_14cb46728)(lVar3,0);
        }
        else {
          (*DAT_14cb46730)();
        }
      }
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      uVar4 = uVar4 + 1;
      puVar1[-1] = 0;
      *puVar1 = 0;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < *param_1);
  }
  if (*(longlong *)(param_1 + 10) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 10),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(longlong *)(param_1 + 0xe) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0xe),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



// FUNCTION 143afe145 FUN_143afe145 body=110 status=ok
// SIG undefined FUN_143afe145(void)

void FUN_143afe145(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  double dVar7;
  
  iVar1 = *param_1;
  if (0 < (longlong)iVar1) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 10);
      *(undefined8 *)(param_3 + lVar4 * 8) = 0;
      if (0 < *(int *)(lVar3 + lVar4 * 0x10)) {
        piVar5 = (int *)(lVar3 + lVar4 * 0x10);
        dVar7 = 0.0;
        lVar6 = 8;
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)(piVar5 + 2);
          dVar7 = dVar7 + *(double *)(lVar2 + lVar6) *
                          *(double *)(param_2 + (ulonglong)*(uint *)(lVar2 + -8 + lVar6) * 8);
          *(double *)(param_3 + lVar4 * 8) = dVar7;
          lVar3 = lVar3 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 < *piVar5);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != iVar1);
  }
  return;
}



// FUNCTION 143afe1b3 FUN_143afe1b3 body=219 status=ok
// SIG undefined FUN_143afe1b3(void)

void FUN_143afe1b3(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[2] - param_2[2];
  fVar5 = param_1[1] - param_2[1];
  fVar3 = *param_1 - *param_2;
  fVar2 = param_3[2] - param_2[2];
  fVar6 = param_3[1] - param_2[1];
  fVar4 = *param_3 - *param_2;
  fVar1 = (fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6) /
          (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar6 * fVar6) *
          SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5));
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
                    /* WARNING: Could not recover jumptable at 0x000143afe287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  acosf(fVar1);
  return;
}



// FUNCTION 143afe28e FUN_143afe28e body=141 status=ok
// SIG undefined FUN_143afe28e(void)

void FUN_143afe28e(longlong param_1)

{
  uint uVar1;
  void *_Dst;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 4;
    _Dst = (void *)(*DAT_14cb46728)(0);
    *(void **)(param_1 + 8) = _Dst;
    memset(_Dst,0,(ulonglong)*(uint *)(param_1 + 4) << 4);
    return;
  }
  uVar1 = *(int *)(param_1 + 4) * 2;
  *(uint *)(param_1 + 4) = uVar1;
  if (uVar1 != 0 || *(longlong *)(param_1 + 8) != 0) {
    if (DAT_14cb46730 == (code *)0x0 || uVar1 != 0) {
      uVar2 = (*DAT_14cb46728)(*(longlong *)(param_1 + 8),(ulonglong)uVar1 << 4);
      goto LAB_143afe311;
    }
    (*DAT_14cb46730)();
  }
  uVar2 = 0;
LAB_143afe311:
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}



// FUNCTION 143afe31b FUN_143afe31b body=55 status=ok
// SIG undefined FUN_143afe31b(void)

void FUN_143afe31b(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(*(longlong *)(param_1 + 0x20),0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143afe352 FUN_143afe352 body=42 status=ok
// SIG undefined FUN_143afe352(void)

void FUN_143afe352(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = 0;
    do {
      *(double *)(param_3 + uVar1 * 8) =
           *(double *)(param_2 + uVar1 * 8) * *(double *)(*(longlong *)(param_1 + 0x20) + uVar1 * 8)
      ;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 143afe37c FUN_143afe37c body=186 status=ok
// SIG undefined FUN_143afe37c(void)

void FUN_143afe37c(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[4],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[5],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  param_1[5] = 0;
  if (param_1[6] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[6],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  param_1[6] = 0;
  if (param_1[8] != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(param_1[8],0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  param_1[8] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 143afe436 FUN_143afe436 body=123 status=ok
// SIG undefined FUN_143afe436(void)

void FUN_143afe436(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x40) + lVar6 * 4);
      uVar7 = (ulonglong)uVar2;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + 4 + lVar6 * 4);
      if (uVar2 < uVar3) {
        do {
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + uVar7 * 4);
          uVar5 = (ulonglong)uVar2;
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x28) + 4 + uVar7 * 4);
          dVar8 = 0.0;
          if (uVar2 < uVar4) {
            do {
              dVar8 = dVar8 + *(double *)(*(longlong *)(param_1 + 0x20) + uVar5 * 8) *
                              *(double *)
                               (param_2 +
                               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x30) + uVar5 * 4) * 8);
              uVar5 = uVar5 + 1;
            } while (uVar4 != uVar5);
          }
          *(double *)(param_3 + uVar7 * 8) = dVar8;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != iVar1);
  }
  return;
}



// FUNCTION 143afe4bb FUN_143afe4bb body=124 status=ok
// SIG undefined FUN_143afe4bb(void)

void FUN_143afe4bb(void)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [80];
  longlong local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1482a6218(local_88);
  FUN_1482a62a8(local_88);
  if (local_28 != 0) {
    if (DAT_14cb46730 == (code *)0x0) {
      (*DAT_14cb46728)(local_28,0);
    }
    else {
      (*DAT_14cb46730)();
    }
  }
  FUN_1482a68e8(local_78);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afe538 FUN_143afe538 body=603 status=ok
// SIG undefined FUN_143afe538(void)

void FUN_143afe538(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_2;
  memcpy(*(void **)(*(longlong *)(lVar4 + 0x28) + 0x88),*(void **)(lVar4 + 0xa0),
         (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x28) + 100) << 3);
  lVar5 = *(longlong *)(lVar4 + 0x28);
  puVar8 = (undefined8 *)(*DAT_14cb46728)(0);
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  *(undefined4 *)(puVar8 + 7) = 4;
  *(undefined4 *)(puVar8 + 0xf) = 4;
  param_2[1] = (longlong)puVar8;
  *puVar8 = 0xffffffff;
  uVar3 = *(undefined4 *)(lVar5 + 0x4c);
  puVar8[1] = *(undefined8 *)(lVar5 + 0x40);
  *(undefined4 *)(puVar8 + 2) = uVar3;
  fVar12 = (float)FUN_1482a727c(lVar5);
  *(float *)(puVar8 + 3) = fVar12;
  if (fVar12 < 1.1920929e-07) {
    uVar11 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x28) + 100);
    if (uVar11 == 0) {
      fVar12 = INFINITY;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x88);
      fVar12 = -3.4028235e+38;
      fVar14 = 3.4028235e+38;
      uVar9 = 0;
      fVar15 = 3.4028235e+38;
      fVar13 = -3.4028235e+38;
      do {
        fVar1 = *(float *)(lVar4 + uVar9 * 8);
        fVar2 = *(float *)(lVar4 + 4 + uVar9 * 8);
        if (fVar2 <= fVar14) {
          fVar14 = fVar2;
        }
        if (fVar1 <= fVar15) {
          fVar15 = fVar1;
        }
        if (fVar12 <= fVar2) {
          fVar12 = fVar2;
        }
        if (fVar13 <= fVar1) {
          fVar13 = fVar1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar9);
      fVar12 = (fVar13 - fVar15) * 0.5 * (fVar12 - fVar14) * 0.5;
    }
    *(float *)(puVar8 + 3) = fVar12;
  }
  uVar7 = *(uint *)(lVar5 + 0x4c);
  fVar12 = 0.0;
  if (2 < uVar7) {
    uVar10 = 0;
    do {
      fVar13 = (float)FUN_14829c946(lVar5,uVar10);
      fVar12 = fVar12 + fVar13;
      uVar10 = uVar10 + 1;
    } while (uVar7 / 3 != uVar10);
  }
  *(float *)((longlong)puVar8 + 0x1c) = fVar12;
  uVar3 = *(undefined4 *)(lVar5 + 0x94);
  puVar8[4] = *(undefined8 *)(lVar5 + 0x88);
  *(undefined4 *)(puVar8 + 5) = uVar3;
  puVar8[0xd] = lVar5 + 0xf0;
  puVar6 = (undefined8 *)*param_1;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
  uVar7 = *(uint *)(puVar8 + 5);
  if (uVar7 != 0) {
    uVar11 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar5 + 0xd8) + (uVar11 >> 5) * 4) >> ((uint)uVar11 & 0x1f) & 1)
          != 0) {
        local_58 = *(undefined8 *)(*(longlong *)(lVar5 + 0x88) + uVar11 * 8);
        FUN_148298fa0(puVar6 + 4,&local_58);
        uVar7 = *(uint *)(puVar8 + 5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  local_68 = *(undefined8 *)(lVar5 + 0x88);
  local_60 = *(undefined4 *)(lVar5 + 0x94);
  FUN_1482a6968(puVar6);
  puVar8[9] = *puVar6;
  puVar8[10] = puVar6[1];
  puVar8[0xb] = puVar6[2];
  puVar8[0xc] = puVar6[3];
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143afe794 FUN_143afe794 body=186 status=ok
// SIG undefined FUN_143afe794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143afe794(void)

{
  _DAT_14cb466c8 = 0;
  _DAT_14cb466d0 = 0;
  uRam000000014cb466d8 = 0;
  _DAT_14cb466e0 = 0;
  uRam000000014cb466e8 = 0;
  _DAT_14cb466f0 = 0;
  uRam000000014cb466f8 = 0;
  _DAT_14cb46700 = 0;
  uRam000000014cb46708 = 0;
  _DAT_14cb46710 = 0;
  _Mtx_init_in_situ(&DAT_14cb466c8,2);
  atexit((_func_5014 *)&LAB_143afd1dc);
  DAT_14cb46718 = 0;
  uRam000000014cb46720 = 0;
  DAT_14cb46718 = FUN_14001cc68(0x28,0x10);
  *(longlong *)DAT_14cb46718 = DAT_14cb46718;
  *(longlong *)(DAT_14cb46718 + 8) = DAT_14cb46718;
  *(longlong *)(DAT_14cb46718 + 0x10) = DAT_14cb46718;
  *(undefined2 *)(DAT_14cb46718 + 0x18) = 0x101;
  atexit(FUN_143afd1e8);
  DAT_14cb46728 = realloc_exref;
  DAT_14cb46730 = free_exref;
  return;
}



// FUNCTION 143afe850 FUN_143afe850 body=248 status=ok
// SIG undefined FUN_143afe850(void)

undefined8 FUN_143afe850(longlong *param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar4 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) +
           (ulonglong)((param_2 & 0x1ff) << 4));
  uVar5 = (uint)(uVar4 >> 0x20);
  uVar3 = (uint)uVar4;
  if (*(uint *)(param_1 + 1) == uVar5) {
    uVar3 = uVar5;
  }
  lVar1 = *(longlong *)(*param_1 + 0x10);
  uVar6 = uVar4 >> 0x20;
  if (*(uint *)(param_1 + 1) == uVar5) {
    uVar6 = uVar4;
  }
  lVar2 = *(longlong *)(lVar1 + ((uVar6 & 0xffffffff) >> 9) * 8);
  uVar6 = (ulonglong)((uint)uVar6 & 0x1ff);
  lVar1 = *(longlong *)(lVar1 + (ulonglong)(uVar3 >> 9) * 8);
  uVar4 = (ulonglong)(uVar3 & 0x1ff);
  dVar7 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18) - *(double *)(lVar1 + 0x10 + uVar4 * 0x18);
  dVar8 = *(double *)(lVar2 + 8 + uVar6 * 0x18) - *(double *)(lVar1 + 8 + uVar4 * 0x18);
  dVar9 = *(double *)(lVar2 + uVar6 * 0x18) - *(double *)(lVar1 + uVar4 * 0x18);
  *param_3 = dVar9;
  param_3[1] = dVar8;
  param_3[2] = dVar7;
  dVar10 = dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8;
  if (9.999999747378752e-05 < dVar10) {
    dVar11 = 1.0 / SQRT(dVar10);
    *param_3 = dVar9 * dVar11;
    param_3[1] = dVar8 * dVar11;
    param_3[2] = dVar7 * dVar11;
  }
  return CONCAT71((int7)(uVar4 * 3 >> 8),9.999999747378752e-05 < dVar10);
}



// FUNCTION 143afe948 FUN_143afe948 body=487 status=ok
// SIG undefined FUN_143afe948(void)

void FUN_143afe948(longlong param_1,longlong *param_2,uint *param_3)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined1 local_80 [24];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + (ulonglong)(*param_3 >> 9) * 8);
  uVar7 = (ulonglong)*param_3 & 0x1ff;
  local_88 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar7 * 0x18);
  local_98 = *pdVar1;
  dStack_90 = pdVar1[1];
  lVar3 = *(longlong *)(lVar2 + (ulonglong)(param_3[1] >> 9) * 8);
  uVar7 = (ulonglong)param_3[1] & 0x1ff;
  local_a8 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar7 * 0x18);
  local_b8 = *pdVar1;
  dStack_b0 = pdVar1[1];
  lVar2 = *(longlong *)(lVar2 + (ulonglong)(param_3[2] >> 9) * 8);
  uVar7 = (ulonglong)param_3[2] & 0x1ff;
  local_c8 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18);
  pdVar1 = (double *)(lVar2 + uVar7 * 0x18);
  local_d8 = *pdVar1;
  dStack_d0 = pdVar1[1];
  dVar4 = local_88 + local_a8 + local_c8;
  dVar6 = dStack_90 + dStack_b0 + dStack_d0;
  dVar5 = local_98 + local_b8 + local_d8;
  FUN_146baf581(&local_f0);
  local_68 = 1e+30;
  local_60 = 1e+30;
  local_58 = 1e+30;
  local_118 = 0xffffffff;
  local_108 = dVar5 * 0.3333333333333333;
  local_100 = dVar6 * 0.3333333333333333;
  local_f8 = dVar4 * 0.3333333333333333;
  (**(code **)(*param_2 + 0x10))(param_2,local_80,&local_108,&local_68);
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(SUB84((1.0 - (local_e0 * local_58 + local_f0 * local_68 + local_e8 * local_60)) *
                      0.5,0));
}



// FUNCTION 143afeb30 FUN_143afeb30 body=403 status=ok
// SIG undefined FUN_143afeb30(void)

void FUN_143afeb30(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  code *local_e8 [2];
  undefined8 local_d8;
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar9 = (ulonglong)*(uint *)(param_2 + 1);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      local_a8[0] = 0;
      local_98 = 0;
      local_100 = 0;
      lVar5 = *param_2;
      uStack_f8._0_4_ = (int)uVar9;
      FUN_1482fdd8a(&local_100,uVar9 & 0xffffffff);
      FUN_1482fddfd(local_100,lVar5,uVar9 & 0xffffffff);
      local_f0 = (undefined4)lVar8;
      local_d8 = 0;
      local_c8 = &PTR_FUN_14ae72ce0;
      local_c0 = (undefined4)local_100;
      uStack_bc = local_100._4_4_;
      uStack_b8 = (undefined4)uStack_f8;
      uStack_b4 = uStack_f8._4_4_;
      local_100 = 0;
      uStack_f8 = 0;
      local_e8[0] = FUN_143b01016;
      local_118 = local_a8;
      local_110 = 0;
      local_b0 = local_f0;
      FUN_146bcbbdc(uVar4,*(undefined8 *)(*param_2 + lVar7),*(undefined8 *)(param_1 + 0x18),local_e8
                   );
      FUN_1482fdfd4(local_100,uStack_f8 & 0xffffffff);
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      plVar6 = *(longlong **)(param_1 + 0x20);
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x140);
      iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x144);
      iVar3 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(plVar6,iVar3);
      }
      *(int *)(*plVar6 + (longlong)iVar3 * 4) = iVar1 * 0x200 + iVar2;
      lVar8 = lVar8 + 1;
      uVar9 = (ulonglong)(int)param_2[1];
      lVar7 = lVar7 + 0xb8;
    } while (lVar8 < (longlong)uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143afecc4 FUN_143afecc4 body=547 status=ok
// SIG undefined FUN_143afecc4(void)

ulonglong FUN_143afecc4(longlong param_1,ulonglong param_2,uint param_3,int param_4,
                       longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = (uint)param_2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (param_2 >> 9 & 0x7fffff) * 8);
  uVar5 = (ulonglong)((uVar6 & 0x1ff) << 4);
  uVar8 = *(uint *)(lVar1 + 8 + uVar5);
  uVar4 = *(uint *)(lVar1 + 0xc + uVar5);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar8 >> 9) * 8);
  uVar7 = (ulonglong)(uVar8 & 0x1ff);
  local_38 = *(uint *)(lVar1 + 8 + uVar7 * 0xc);
  local_40 = *(undefined8 *)(lVar1 + uVar7 * 0xc);
  uVar2 = local_40;
  uVar5 = 0;
  if ((uint)local_40 != uVar6) {
    uVar5 = 1;
    local_40._4_4_ = (uint)((ulonglong)local_40 >> 0x20);
    if (local_40._4_4_ != uVar6) {
      uVar5 = (ulonglong)((uint)(local_38 == uVar6) * 3 - 1);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar8 >> 9) * 8);
  local_48 = *(undefined4 *)(lVar1 + 8 + uVar7 * 0xc);
  local_50 = *(undefined8 *)(lVar1 + uVar7 * 0xc);
  local_40 = uVar2;
  if (*(int *)((longlong)&local_50 + (longlong)(int)uVar5 * 4) != param_4) {
    uVar5 = 0;
    if (uVar4 == 0xffffffff) goto LAB_143afeec6;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar4 >> 9) * 8);
    local_38 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
    local_40 = *(undefined8 *)(lVar1 + (ulonglong)(uVar4 & 0x1ff) * 0xc);
    uVar2 = local_40;
    uVar8 = uVar4;
    local_40 = uVar2;
    if ((uint)local_40 != uVar6) {
      uVar5 = 1;
      local_40._4_4_ = (uint)((ulonglong)local_40 >> 0x20);
      bVar9 = local_40._4_4_ != uVar6;
      if (bVar9) {
        uVar5 = (ulonglong)((uint)(local_38 == uVar6) * 3 - 1);
      }
    }
  }
  do {
    iVar3 = (int)uVar5;
    *(double *)param_5[1] =
         *(double *)
          ((ulonglong)(uVar8 & 0x1ff) * 0x18 +
           *(longlong *)(*(longlong *)(*param_5 + 0x1b8) + (ulonglong)(uVar8 >> 9) * 8) +
          (longlong)iVar3 * 8) + *(double *)param_5[1];
    uVar4 = iVar3 - 1;
    if (iVar3 + 2U < 3) {
      uVar4 = iVar3 + 2U;
    }
    uVar4 = *(uint *)((longlong)&local_40 + (longlong)(int)uVar4 * 4);
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar4 >> 9) * 8) + 8 +
             (ulonglong)((uVar4 & 0x1ff) << 4));
    uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
    if (uVar8 != (uint)uVar2) {
      uVar6 = (uint)uVar2;
    }
    if (uVar6 == 0xffffffff) {
      uVar5 = CONCAT71((int7)((ulonglong)uVar2 >> 8),uVar4 == param_3);
      goto LAB_143afeec6;
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar6 >> 9) * 8);
    local_38 = *(uint *)(lVar1 + 8 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
    local_40 = *(undefined8 *)(lVar1 + (ulonglong)(uVar6 & 0x1ff) * 0xc);
    uVar2 = local_40;
    uVar5 = 0;
    if ((uint)local_40 != uVar4) {
      uVar5 = 1;
      local_40._4_4_ = (uint)((ulonglong)local_40 >> 0x20);
      if (local_40._4_4_ != uVar4) {
        uVar5 = (ulonglong)((uint)(local_38 == uVar4) * 3 - 1);
      }
    }
    uVar8 = uVar6;
    local_40 = uVar2;
  } while (uVar4 != param_3);
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_143afeec6:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 143afeee8 FUN_143afeee8 body=938 status=ok
// SIG undefined FUN_143afeee8(void)

void FUN_143afeee8(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  *(uint *)*param_1 = param_2;
  *(undefined1 *)(*param_1 + 4) = 1;
  uVar6 = DAT_14c8464e8;
  uVar5 = DAT_14c8464e0;
  if (*(uint *)(*(longlong *)param_1[1] + -4 + (longlong)(int)param_1[3] * 4) == param_2) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x10) + (ulonglong)(param_2 >> 9) * 8);
    uVar7 = (ulonglong)(param_2 & 0x1ff);
    dVar17 = *(double *)(lVar2 + uVar7 * 0x18);
    dVar14 = *(double *)(lVar2 + 8 + uVar7 * 0x18);
    dVar10 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18);
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 0x18) = DAT_14c8464f0;
    *(undefined8 *)(lVar2 + 8) = uVar5;
    *(undefined8 *)(lVar2 + 0x10) = uVar6;
    iVar8 = (int)param_1[3];
    if (1 < (longlong)iVar8) {
      lVar2 = *param_1;
      uVar1 = *(uint *)(*(longlong *)param_1[1] + -8 + (longlong)iVar8 * 4);
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)param_1[2] + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
      uVar7 = (ulonglong)(uVar1 & 0x1ff);
      dVar11 = dVar10 - *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
      dVar13 = dVar14 - *(double *)(lVar3 + 8 + uVar7 * 0x18);
      dVar16 = dVar17 - *(double *)(lVar3 + uVar7 * 0x18);
      dVar4 = SQRT(dVar11 * dVar11 + dVar16 * dVar16 + dVar13 * dVar13);
      dVar15 = 0.0;
      dVar12 = 1.0 / dVar4;
      if (0.0 < dVar4) {
        dVar11 = dVar11 * dVar12;
        dVar15 = dVar13 * dVar12;
      }
      else {
        dVar11 = 0.0;
      }
      *(double *)(lVar2 + 8) =
           (double)(-(ulonglong)(0.0 < dVar4) & (ulonglong)(dVar16 * dVar12)) +
           *(double *)(lVar2 + 8);
      *(double *)(lVar2 + 0x10) = dVar15 + *(double *)(lVar2 + 0x10);
      *(double *)(lVar2 + 0x18) = dVar11 + *(double *)(lVar2 + 0x18);
      iVar8 = (int)param_1[3];
    }
    if (iVar8 < (int)((longlong *)param_1[1])[1]) {
      uVar1 = *(uint *)(*(longlong *)param_1[1] + (longlong)iVar8 * 4);
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)param_1[2] + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
      uVar7 = (ulonglong)(uVar1 & 0x1ff);
      dVar10 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18) - dVar10;
      dVar14 = *(double *)(lVar2 + 8 + uVar7 * 0x18) - dVar14;
      dVar17 = *(double *)(lVar2 + uVar7 * 0x18) - dVar17;
      dVar11 = SQRT(dVar10 * dVar10 + dVar17 * dVar17 + dVar14 * dVar14);
      lVar2 = *param_1;
      dVar12 = 1.0 / dVar11;
      if (0.0 < dVar11) {
        dVar10 = dVar10 * dVar12;
        dVar14 = dVar14 * dVar12;
      }
      else {
        dVar10 = 0.0;
        dVar14 = 0.0;
      }
      *(double *)(lVar2 + 8) =
           (double)(-(ulonglong)(0.0 < dVar11) & (ulonglong)(dVar17 * dVar12)) +
           *(double *)(lVar2 + 8);
      *(double *)(lVar2 + 0x10) = dVar14 + *(double *)(lVar2 + 0x10);
      *(double *)(lVar2 + 0x18) = dVar10 + *(double *)(lVar2 + 0x18);
    }
    lVar2 = *param_1;
    dVar17 = *(double *)(lVar2 + 8);
    dVar14 = *(double *)(lVar2 + 0x10);
    dVar10 = *(double *)(lVar2 + 0x18);
    dVar11 = SQRT(dVar10 * dVar10 + dVar17 * dVar17 + dVar14 * dVar14);
    if (dVar11 <= 0.0) {
      *(undefined8 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
    }
    else {
      dVar11 = 1.0 / dVar11;
      *(double *)(lVar2 + 8) = dVar17 * dVar11;
      *(double *)(lVar2 + 0x10) = dVar14 * dVar11;
      *(double *)(lVar2 + 0x18) = dVar10 * dVar11;
    }
  }
  else {
    uVar1 = *(uint *)(*(longlong *)param_1[1] + (longlong)(int)param_1[3] * 4);
    lVar2 = *(longlong *)(*(longlong *)param_1[2] + 0x10);
    lVar3 = *(longlong *)(lVar2 + (ulonglong)(uVar1 >> 9) * 8);
    uVar7 = (ulonglong)(uVar1 & 0x1ff);
    lVar2 = *(longlong *)(lVar2 + (ulonglong)(param_2 >> 9) * 8);
    uVar9 = (ulonglong)(param_2 & 0x1ff);
    dVar10 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18) - *(double *)(lVar2 + 0x10 + uVar9 * 0x18);
    dVar11 = *(double *)(lVar3 + 8 + uVar7 * 0x18) - *(double *)(lVar2 + 8 + uVar9 * 0x18);
    dVar12 = *(double *)(lVar3 + uVar7 * 0x18) - *(double *)(lVar2 + uVar9 * 0x18);
    dVar17 = SQRT(dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11);
    dVar14 = 0.0;
    dVar16 = 1.0 / dVar17;
    if (0.0 < dVar17) {
      dVar10 = dVar10 * dVar16;
      dVar14 = dVar11 * dVar16;
    }
    else {
      dVar10 = 0.0;
    }
    lVar2 = *param_1;
    *(ulonglong *)(lVar2 + 8) = -(ulonglong)(0.0 < dVar17) & (ulonglong)(dVar12 * dVar16);
    *(double *)(lVar2 + 0x10) = dVar14;
    *(double *)(lVar2 + 0x18) = dVar10;
  }
  return;
}



// FUNCTION 143aff292 FUN_143aff292 body=159 status=ok
// SIG undefined FUN_143aff292(void)

undefined4 FUN_143aff292(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  uStack_48 = 0xffffffff;
  local_44 = 0xffffffffffffffff;
  local_34 = 0xffffffff;
  uStack_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  local_24 = 0xffffffff;
  (**(code **)(*param_1 + 0x30))(0xffffffff,param_2,local_58,param_3);
  if (param_4 != 0) {
    FUN_1447cbafe(param_4,local_5c,&local_44,0);
    if (local_44._4_4_ != -1) {
      FUN_1447cbafe(param_4,local_5c,(longlong)&local_44 + 4,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aff332 FUN_143aff332 body=303 status=ok
// SIG undefined FUN_143aff332(void)

undefined8 FUN_143aff332(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar13 = (int *)param_1[3];
  if ((*piVar13 == *param_2) && (piVar13[8] == param_2[8])) {
LAB_143aff43a:
    uVar12 = 0;
  }
  else {
    if (*piVar13 != -1) {
      pdVar7 = (double *)*param_1;
      FUN_146c6c60c(piVar13,&local_58,param_1[1]);
      pdVar8 = (double *)param_1[2];
      dVar1 = pdVar8[2];
      dVar2 = pdVar8[1];
      dVar3 = *pdVar8;
      dVar4 = pdVar7[1];
      dVar5 = *pdVar7;
      dVar6 = pdVar7[2];
      pdVar7 = (double *)*param_1;
      FUN_146c6c60c(param_2,&local_70,param_1[1]);
      pdVar8 = (double *)param_1[2];
      if ((local_60 - pdVar8[2]) * pdVar7[2] +
          (local_70 - *pdVar8) * *pdVar7 + (local_68 - pdVar8[1]) * pdVar7[1] <=
          (local_48 - dVar1) * dVar6 + (local_58 - dVar3) * dVar5 + (local_50 - dVar2) * dVar4)
      goto LAB_143aff43a;
      piVar13 = (int *)param_1[3];
    }
    uVar12 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(piVar13 + 8) = uVar12;
    uVar9 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar11 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(piVar13 + 6) = uVar11;
    *(undefined8 *)piVar13 = uVar9;
    *(undefined8 *)(piVar13 + 2) = uVar10;
    uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aff462 FUN_143aff462 body=424 status=ok
// SIG undefined FUN_143aff462(void)

void FUN_143aff462(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *param_1;
  local_78[0] = 0;
  local_78[1] = 0;
  FUN_148324de9(*(undefined8 *)(lVar5 + 8),param_3,*(undefined8 *)(lVar5 + 0x20),local_78);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 1;
  FUN_148325462(*(undefined8 *)(lVar5 + 8),local_78,param_2,&local_88);
  if (0 < (int)param_2[1] && (int)uStack_80 == (int)param_2[1]) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + 8);
      puVar13 = (undefined4 *)(local_88 + lVar16);
      uVar3 = *(uint *)(*param_2 + lVar15 * 4);
      cVar12 = FUN_146bfed03(puVar13);
      if (cVar12 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
        uVar14 = (ulonglong)(uVar3 & 0x1ff);
        *(undefined8 *)(lVar7 + 0x10 + uVar14 * 0x18) = *(undefined8 *)(puVar13 + 4);
        uVar9 = puVar13[1];
        uVar10 = puVar13[2];
        uVar11 = puVar13[3];
        puVar1 = (undefined4 *)(lVar7 + uVar14 * 0x18);
        *puVar1 = *puVar13;
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        if (*(char *)(lVar6 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar6 + 0x214) = *(int *)(lVar6 + 0x214) + 1;
          UNLOCK();
        }
      }
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x18;
    } while (lVar15 < (int)param_2[1]);
  }
  lVar15 = param_1[1];
  iVar4 = *(int *)(lVar15 + 0x28);
  *(uint *)(lVar15 + 0x28) = iVar4 + 1U;
  if (*(uint *)(lVar15 + 0x2c) < iVar4 + 1U) {
    FUN_146c7f410((longlong *)(lVar15 + 0x20),iVar4);
  }
  lVar15 = *(longlong *)(lVar15 + 0x20);
  lVar16 = (longlong)iVar4 * 0x40;
  puVar2 = (undefined8 *)(lVar15 + 0x29 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar15 + 0x10 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar15 + lVar16) = 0;
  ((undefined8 *)(lVar15 + lVar16))[1] = 0;
  lVar15 = *(longlong *)(param_1[1] + 0x20);
  lVar16 = (longlong)(*(int *)(param_1[1] + 0x28) + -1) * 0x40;
  uVar8 = *(undefined8 *)(lVar5 + 8);
  *(undefined8 *)(lVar15 + lVar16) = uVar8;
  FUN_146c5d50a(lVar15 + lVar16,param_2,CONCAT71((int7)((ulonglong)uVar8 >> 8),1));
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143aff60b FUN_143aff60b body=182 status=ok
// SIG undefined FUN_143aff60b(void)

void FUN_143aff60b(double *param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = ((param_2 + param_3) - param_4) *
          ((param_2 - param_3) + param_4) *
          ((param_3 - param_2) + param_4) * (param_2 + param_3 + param_4);
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar3 = (SQRT(dVar2) * 0.25 + SQRT(dVar2) * 0.25) / param_2;
  dVar2 = (dVar3 + param_4) * (param_4 - dVar3);
  dVar1 = 0.0;
  if (0.0 <= dVar2) {
    dVar1 = dVar2;
  }
  *param_1 = SQRT(dVar1);
  param_1[1] = dVar3;
  if (param_2 * param_2 + param_4 * param_4 < param_3 * param_3) {
    *param_1 = -SQRT(dVar1);
  }
  return;
}



// FUNCTION 143aff6c2 FUN_143aff6c2 body=358 status=ok
// SIG undefined FUN_143aff6c2(void)

void FUN_143aff6c2(longlong *param_1,uint param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_48 [24];
  double adStack_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar7 = *param_1;
  lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + (ulonglong)(param_3 >> 9) * 8);
  uVar9 = (ulonglong)(param_3 & 0x1ff);
  uVar4 = *(uint *)(lVar10 + uVar9 * 0xc);
  uVar5 = *(uint *)(lVar10 + 4 + uVar9 * 0xc);
  uVar6 = *(uint *)(lVar10 + 8 + uVar9 * 0xc);
  if (uVar4 == param_2) {
    lVar10 = 0;
  }
  else {
    lVar10 = 1;
    if (uVar5 != param_2) {
      lVar10 = (ulonglong)(uVar6 == param_2) * 3 + -1;
    }
  }
  lVar8 = *(longlong *)(lVar7 + 0x198);
  adStack_30[1] =
       (double)*(undefined8 *)
                (*(longlong *)(lVar8 + (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 8
                );
  adStack_30[2] =
       (double)*(undefined8 *)
                (*(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 8
                );
  adStack_30[3] =
       (double)*(undefined8 *)
                (*(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 8
                );
  dVar1 = adStack_30[(longlong)*(int *)(lVar7 + 0xc + lVar10 * 4) + 1];
  dVar2 = adStack_30[(longlong)*(int *)(lVar7 + lVar10 * 4) + 1];
  dVar3 = adStack_30[lVar10 + 1];
  dVar11 = ((dVar2 + dVar3) - dVar1) *
           ((dVar3 - dVar2) + dVar1) * ((dVar2 - dVar3) + dVar1) * (dVar1 + dVar2 + dVar3);
  dVar12 = 0.0;
  if (0.0 <= dVar11) {
    dVar12 = dVar11;
  }
  if ((DAT_14c707940 ^ (ulonglong)auStack_48 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(((dVar1 * dVar1 + (dVar2 * dVar2 - dVar3 * dVar3)) * 0.25) / (SQRT(dVar12) * 0.25));
}



// FUNCTION 143aff82a FUN_143aff82a body=604 status=ok
// SIG undefined FUN_143aff82a(void)

void FUN_143aff82a(undefined8 *param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(*(longlong *)*param_1 + (longlong)param_3) = 1;
  plVar8 = (longlong *)param_1[5];
  uVar14 = *(uint *)(*(longlong *)param_1[1] + (longlong)param_3 * 4);
  iVar13 = (int)plVar8[1];
  *(uint *)(plVar8 + 1) = iVar13 + 1U;
  if (*(uint *)((longlong)plVar8 + 0xc) < iVar13 + 1U) {
    FUN_1406b704c(plVar8,iVar13);
  }
  lVar2 = *plVar8;
  *(uint *)(lVar2 + (longlong)iVar13 * 8) = param_2;
  *(uint *)(lVar2 + 4 + (longlong)iVar13 * 8) = uVar14;
  if (-1 < *(int *)(param_1[1] + 8)) {
    iVar13 = *(int *)(param_1[1] + 8) + 1;
    uVar9 = param_2;
LAB_143aff8b2:
    local_58 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1[2] + 0x1c0) + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)((uVar14 & 0x1ff) << 4));
    uVar6 = (ulonglong)((uint)(uVar9 != (uint)((ulonglong)local_58 >> 0x20)) * 2);
    if (uVar9 == (uint)local_58) {
      uVar6 = 1;
    }
    uVar9 = *(uint *)((longlong)&local_58 + uVar6 * 4);
    if (uVar9 == param_2) {
      plVar8 = (longlong *)param_1[5];
      param_1 = (undefined8 *)((longlong)param_1 + 0x34);
      iVar13 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar13 + 1U;
      uVar9 = param_2;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar13 + 1U) {
        FUN_1406b704c(plVar8,iVar13);
      }
    }
    else {
      local_4c = uVar9;
      cVar4 = (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],&local_4c);
      if (cVar4 == '\0') {
        plVar8 = (longlong *)param_1[4];
        if ((int)plVar8[9] != 0) {
          plVar7 = plVar8 + 7;
          if ((longlong *)plVar8[8] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar8[8];
          }
          iVar10 = *(int *)((longlong)plVar7 + (longlong)(int)((int)plVar8[9] - 1U & uVar9) * 4);
          while (iVar5 = iVar10, iVar5 != -1) {
            lVar2 = *plVar8;
            iVar10 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
            if (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) == uVar9) {
              iVar12 = -1;
              iVar11 = 0;
              do {
                iVar11 = iVar11 + 1;
                iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x10);
                if (*(char *)(*(longlong *)*param_1 + (longlong)iVar1) != '\0') {
                  iVar1 = iVar12;
                }
                do {
                  iVar5 = iVar10;
                  iVar12 = iVar1;
                  if (iVar5 == -1) {
                    if (iVar11 != 2) goto LAB_143affa06;
                    *(undefined1 *)(*(longlong *)*param_1 + (longlong)iVar12) = 1;
                    plVar8 = (longlong *)param_1[5];
                    uVar14 = *(uint *)(*(longlong *)param_1[1] + (longlong)iVar12 * 4);
                    iVar10 = (int)plVar8[1];
                    *(uint *)(plVar8 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar8 + 0xc) < iVar10 + 1U) {
                      FUN_1406b704c(plVar8,iVar10);
                    }
                    lVar2 = *plVar8;
                    *(uint *)(lVar2 + (longlong)iVar10 * 8) = uVar9;
                    *(uint *)(lVar2 + 4 + (longlong)iVar10 * 8) = uVar14;
                    bVar3 = iVar13 < 2;
                    iVar13 = iVar13 + -1;
                    if (bVar3) goto LAB_143affa3a;
                    goto LAB_143aff8b2;
                  }
                  iVar10 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
                  iVar1 = iVar12;
                } while (*(uint *)(lVar2 + (longlong)iVar5 * 0x10) != uVar9);
              } while( true );
            }
          }
        }
      }
LAB_143affa06:
      plVar8 = (longlong *)param_1[5];
      param_1 = param_1 + 6;
      iVar13 = (int)plVar8[1];
      *(uint *)(plVar8 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)plVar8 + 0xc) < iVar13 + 1U) {
        FUN_1406b704c(plVar8,iVar13);
      }
    }
    lVar2 = *plVar8;
    *(uint *)(lVar2 + (longlong)iVar13 * 8) = uVar9;
    *(undefined4 *)(lVar2 + 4 + (longlong)iVar13 * 8) = *(undefined4 *)param_1;
  }
LAB_143affa3a:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143affa88 FUN_143affa88 body=785 status=ok
// SIG undefined FUN_143affa88(void)

undefined8 FUN_143affa88(longlong param_1,uint param_2,ulonglong param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_128 [36];
  uint local_104;
  uint *local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined1 *local_e8;
  uint **ppuStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined8 local_68;
  uint local_60;
  undefined1 local_5c [4];
  uint *local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar9 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar1[8];
    }
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar7 * 0x10) == param_2) {
          *param_4 = param_2;
          uVar6 = *(undefined8 *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0) +
                     ((param_3 & 0xffffffff) >> 9) * 8) + (ulonglong)(((uint)param_3 & 0x1ff) << 4))
          ;
          uVar8 = (uint)uVar6;
          uVar10 = (uint)((ulonglong)uVar6 >> 0x20);
          uVar6 = 1;
          if (uVar10 == param_2 || uVar8 == param_2) goto LAB_143affb13;
          plVar1 = *(longlong **)(param_1 + 0x10);
          if ((int)plVar1[9] == 0) goto LAB_143affb13;
          plVar9 = plVar1 + 7;
          if ((longlong *)plVar1[8] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar1[8];
          }
          iVar7 = *(int *)((longlong)plVar9 + (longlong)(int)((int)plVar1[9] - 1U & param_2) * 4);
          goto LAB_143affba6;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x10 + *plVar1 + 8);
      } while (iVar7 != -1);
    }
  }
  *param_4 = param_2;
  cVar5 = FUN_146c13902(*(undefined8 *)(param_1 + 8),param_2);
  if (cVar5 == '\0') {
    uVar6 = 0;
    goto LAB_143affb13;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_60 = param_2;
  local_70 = *(longlong *)(lVar2 + 8);
  uVar12 = param_3 >> 9 & 0x7fffff;
  uVar10 = (uint)param_3 & 0x1ff;
  local_68 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(local_70 + 0x1c0) + uVar12 * 8) +
              (ulonglong)(uVar10 << 4));
  uVar8 = (uint)((uint)((ulonglong)local_68 >> 0x20) != param_2) * 2;
  if ((uint)local_68 == param_2) {
    uVar8 = 1;
  }
  iVar7 = *(int *)((longlong)&local_68 + (ulonglong)uVar8 * 4);
  puVar3 = (uint *)**(longlong **)(lVar2 + 0x18);
  local_100 = param_4;
  if (puVar3 != (uint *)0x0) {
    ppuStack_e0 = &local_58;
    local_50 = (undefined4 *)CONCAT71(local_50._1_7_,1);
    local_e8 = &LAB_1482fe864;
    local_58 = puVar3;
    FUN_146c03fd0(*(undefined8 *)puVar3,param_2);
    local_70 = *(longlong *)(lVar2 + 8);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (undefined1 *)0x0;
  ppuStack_e0 = (uint **)0x0;
  FUN_146bc8d26(&local_70,param_2,&local_e8);
  puVar4 = local_e8;
  local_f0 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 8) + 0x1c0) + uVar12 * 8) +
              (ulonglong)(uVar10 << 4));
  uVar8 = (uint)(iVar7 != (int)((ulonglong)local_f0 >> 0x20)) * 2;
  if (iVar7 == (int)local_f0) {
    uVar8 = 1;
  }
  local_104 = *(uint *)((longlong)&local_f0 + (ulonglong)uVar8 * 4);
  lVar14 = (longlong)(int)ppuStack_e0;
  if (lVar14 != 0) {
    lVar13 = 0;
    do {
      local_f4 = *(undefined4 *)(puVar4 + lVar13);
      local_58 = &local_60;
      local_50 = &local_f4;
      FUN_1406b2a14(*(undefined8 *)(lVar2 + 0x10),local_5c,&local_58,0);
      lVar13 = lVar13 + 4;
    } while (lVar14 * 4 != lVar13);
  }
  FUN_146bc8622(&local_e8);
  param_4 = local_100;
  uVar11 = local_104;
  goto LAB_143affd90;
  while( true ) {
    lVar2 = *plVar1;
    lVar14 = (longlong)iVar7 * 0x10;
    iVar7 = *(int *)(lVar2 + 8 + lVar14);
    if (*(uint *)(lVar2 + lVar14) == param_2) break;
LAB_143affba6:
    if (iVar7 == -1) goto LAB_143affb13;
  }
  uVar11 = *(uint *)(lVar2 + 4 + lVar14);
  while ((uVar11 != uVar8 && (uVar11 != uVar10))) {
    do {
      if (iVar7 == -1) goto LAB_143affb13;
      lVar14 = (longlong)iVar7 * 0x10;
      iVar7 = *(int *)(lVar2 + 8 + lVar14);
    } while (*(uint *)(lVar2 + lVar14) != param_2);
    uVar11 = *(uint *)(lVar2 + 4 + lVar14);
  }
LAB_143affd90:
  *param_4 = uVar11;
  uVar6 = 1;
LAB_143affb13:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143affd9a FUN_143affd9a body=332 status=ok
// SIG undefined FUN_143affd9a(void)

void FUN_143affd9a(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (int)param_2[1];
  if (param_4 != '\0') {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
      FUN_14481578e(param_3,0);
    }
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5 * 2);
    }
    if (*(int *)((longlong)param_3 + 0xc) < iVar5 * 2) {
      FUN_14481578e(param_3);
    }
    iVar5 = (int)param_2[1];
  }
  if (iVar5 != 0) {
    lVar3 = *param_2;
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar4);
      if (((-1 < (int)uVar1) &&
          ((int)uVar1 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 + lVar4);
      }
      uVar1 = *(uint *)(lVar3 + 4 + lVar4);
      if (((-1 < (int)uVar1) &&
          ((int)uVar1 < *(int *)(param_1 + 0x140) * 0x200 + *(int *)(param_1 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 + 4 + lVar4);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar5 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143affee7 FUN_143affee7 body=272 status=ok
// SIG undefined FUN_143affee7(void)

void FUN_143affee7(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = param_1[1];
  local_58 = 0;
  uStack_50 = 0;
  if (0 < (longlong)(int)lVar8) {
    lVar12 = 0;
    do {
      lVar9 = *param_1;
      if ((longlong)(int)uStack_50 == 0) {
        iVar11 = *(int *)(lVar9 + 0x10 + lVar12 * 0x28);
        if (iVar11 < 1) goto LAB_143afff38;
      }
      else {
        iVar11 = *(int *)(lVar9 + 0x10 + lVar12 * 0x28);
LAB_143afff38:
        if (iVar11 != 0) {
          piVar10 = *(int **)(lVar9 + 8 + lVar12 * 0x28);
          piVar1 = piVar10 + iVar11;
          do {
            if ((int)uStack_50 != 0) {
              lVar13 = 0;
              do {
                if (*(int *)(local_58 + lVar13) == *piVar10) goto LAB_143afffa9;
                lVar13 = lVar13 + 4;
              } while ((longlong)(int)uStack_50 * 4 - lVar13 != 0);
            }
            piVar10 = piVar10 + 1;
          } while (piVar10 != piVar1);
        }
        puVar2 = (undefined8 *)(lVar9 + 8 + lVar12 * 0x28);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        puVar2 = (undefined8 *)(lVar9 + 0x18 + lVar12 * 0x28);
        uVar7 = puVar2[1];
        puVar3 = (undefined8 *)(lVar9 + 8 + lVar12 * 0x28);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        local_48._0_4_ = (undefined4)uVar5;
        local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_40._0_4_ = (undefined4)uVar6;
        uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        puVar4 = (undefined4 *)(lVar9 + 0x18 + lVar12 * 0x28);
        *puVar4 = (undefined4)local_48;
        puVar4[1] = local_48._4_4_;
        puVar4[2] = (undefined4)uStack_40;
        puVar4[3] = uStack_40._4_4_;
        lVar9 = *param_1;
        local_48 = uVar5;
        uStack_40 = uVar6;
      }
LAB_143afffa9:
      FUN_14054c6c4(&local_58,lVar9 + lVar12 * 0x28 + 8);
      lVar12 = lVar12 + 1;
    } while (lVar12 != (int)lVar8);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143affff8 FUN_143affff8 body=185 status=ok
// SIG undefined FUN_143affff8(void)

void FUN_143affff8(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  if (((int)param_3[1] == (int)param_2[1]) &&
     (uVar8 = (int)param_2[1] - param_5, (int)param_4 < (int)uVar8)) {
    uVar12 = (ulonglong)param_4;
    lVar10 = uVar12 * 0x18;
    do {
      puVar11 = (undefined4 *)(*param_3 + lVar10);
      uVar2 = *(uint *)(*param_2 + uVar12 * 4);
      cVar7 = FUN_146bfed03(puVar11);
      if (cVar7 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
        uVar9 = (ulonglong)(uVar2 & 0x1ff);
        *(undefined8 *)(lVar3 + 0x10 + uVar9 * 0x18) = *(undefined8 *)(puVar11 + 4);
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar1 = (undefined4 *)(lVar3 + uVar9 * 0x18);
        *puVar1 = *puVar11;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        if (*(char *)(param_1 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar12 < uVar8);
  }
  return;
}



// FUNCTION 143b000b2 FUN_143b000b2 body=154 status=ok
// SIG undefined FUN_143b000b2(void)

int * FUN_143b000b2(longlong *param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + 4 + (longlong)param_3 * 8);
  iVar3 = FUN_146bc96d4(*param_1,*(undefined4 *)
                                  (*(longlong *)(param_1[1] + 0x20) + (longlong)param_3 * 8));
  iVar4 = -1;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *param_1, (int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar4 = FUN_146bc96d4(lVar2,uVar1);
  }
  iVar5 = iVar3;
  if (iVar3 < iVar4) {
    iVar5 = iVar4;
    iVar4 = iVar3;
  }
  *param_2 = iVar5;
  param_2[1] = iVar4;
  return param_2;
}



// FUNCTION 143b0014c FUN_143b0014c body=122 status=ok
// SIG undefined FUN_143b0014c(void)

longlong FUN_143b0014c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != -1) {
    lVar2 = *(longlong *)(*param_1 + 0xb0);
    if (((*(int *)(lVar2 + 8 + (longlong)param_2 * 0xa8) == 0) &&
        (lVar2 = lVar2 + (longlong)param_2 * 0xa8, *(int *)(lVar2 + 0x58) == 2)) &&
       ((longlong)*(int *)(lVar2 + 0x38) != 0)) {
      lVar3 = 0;
      while (iVar1 = *(int *)(*(longlong *)(lVar2 + 0x30) + lVar3), iVar1 == param_3) {
        lVar3 = lVar3 + 4;
        if ((longlong)*(int *)(lVar2 + 0x38) * 4 == lVar3) {
          return 0;
        }
      }
      lVar2 = *(longlong *)(*param_1 + 0xc0);
      lVar3 = (longlong)iVar1 * 0x100;
      if (*(int *)(lVar2 + 0xb8 + lVar3) == 0) {
        return 0;
      }
      lVar2 = lVar2 + lVar3;
      if (*(int *)(lVar2 + 0xbc) != 0) {
        return lVar2 + 0xb8;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143b001c6 FUN_143b001c6 body=309 status=ok
// SIG undefined FUN_143b001c6(void)

bool FUN_143b001c6(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = FUN_14838b1bc(param_2,param_3);
  if (-1 < iVar4) {
    local_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    FUN_14838b116(param_2,iVar4);
    lVar6 = (longlong)(int)(uint)uStack_50;
    if ((1 < lVar6) && (local_58[(int)((uint)uStack_50 - 1)] == param_3)) {
      lVar7 = 0;
      puVar5 = local_58;
      do {
        uVar1 = *puVar5;
        *puVar5 = local_58[lVar6 + lVar7 + -1];
        local_58[lVar6 + lVar7 + -1] = uVar1;
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 1;
      } while (-lVar7 != (ulonglong)((uint)uStack_50 >> 1));
    }
    if (-2 < *(int *)(param_1 + 1)) {
      lVar7 = -1;
      lVar6 = 0;
      do {
        puVar5 = local_58;
        lVar3 = *(longlong *)*param_1;
        iVar2 = *(int *)(lVar3 + 8 + lVar6);
        *(uint *)(lVar3 + 8 + lVar6) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0xc + lVar6) < iVar2 + 1U) {
          FUN_1446f48e2((longlong *)(lVar3 + lVar6),iVar2);
        }
        *(undefined4 *)(*(longlong *)(lVar3 + lVar6) + (longlong)iVar2 * 4) = puVar5[lVar7 + 1];
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (lVar7 <= *(int *)(param_1 + 1));
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return -1 < iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b002fc FUN_143b002fc body=676 status=ok
// SIG undefined FUN_143b002fc(void)

void FUN_143b002fc(longlong *param_1,uint param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar12 = (ulonglong)(param_2 & 0x1ff);
  dVar1 = *(double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
  dVar3 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  uVar12 = (ulonglong)(param_3 & 0x1ff);
  dVar4 = *(double *)(lVar9 + uVar12 * 0x18);
  dVar5 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
  dVar6 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  plVar7 = *(longlong **)param_1[1];
  iVar10 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar10 + 1U) {
    FUN_1446f48e2(plVar7,iVar10);
  }
  *(uint *)(*plVar7 + (longlong)iVar10 * 4) = param_2;
  iVar10 = (int)param_1[2];
  lVar9 = (longlong)iVar10;
  if (0 < lVar9) {
    lVar13 = 0x10;
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 1;
      dVar14 = (double)(int)lVar11 / (double)(iVar10 + 1);
      dVar15 = 1.0 - dVar14;
      local_f0 = dVar15 * dVar3 + dVar6 * dVar14;
      local_f8 = dVar15 * dVar2 + dVar5 * dVar14;
      local_100 = dVar15 * dVar1 + dVar14 * dVar4;
      local_e0 = DAT_14c846338;
      local_e8 = DAT_14c846330;
      local_d4 = DAT_14c846338;
      local_dc = DAT_14c846330;
      local_d0 = DAT_14c84635c;
      local_c8 = 0;
      local_c6 = 0;
      uVar8 = FUN_146c02208(*param_1,&local_100);
      lVar9 = *(longlong *)param_1[1];
      iVar10 = *(int *)(lVar9 + 8 + lVar13);
      *(uint *)(lVar9 + 8 + lVar13) = iVar10 + 1U;
      if (*(uint *)(lVar9 + 0xc + lVar13) < iVar10 + 1U) {
        FUN_1446f48e2((longlong *)(lVar9 + lVar13),iVar10);
      }
      *(undefined4 *)(*(longlong *)(lVar9 + lVar13) + (longlong)iVar10 * 4) = uVar8;
      iVar10 = (int)param_1[2];
      lVar9 = (longlong)iVar10;
      lVar13 = lVar13 + 0x10;
    } while (lVar11 < lVar9);
  }
  lVar9 = *(longlong *)param_1[1] + lVar9 * 0x10;
  iVar10 = *(int *)(lVar9 + 0x18);
  *(uint *)(lVar9 + 0x18) = iVar10 + 1U;
  if (*(uint *)(lVar9 + 0x1c) < iVar10 + 1U) {
    FUN_1446f48e2((longlong *)(lVar9 + 0x10),iVar10);
  }
  *(uint *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar10 * 4) = param_3;
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b005a2 FUN_143b005a2 body=154 status=ok
// SIG undefined FUN_143b005a2(void)

int * FUN_143b005a2(longlong *param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1[1] + 0x20) + 4 + (longlong)param_3 * 8);
  iVar3 = FUN_146bc96d4(*param_1,*(undefined4 *)
                                  (*(longlong *)(param_1[1] + 0x20) + (longlong)param_3 * 8));
  iVar4 = -1;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *param_1, (int)uVar1 < *(int *)(lVar2 + 0x140) * 0x200 + *(int *)(lVar2 + 0x144))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    iVar4 = FUN_146bc96d4(lVar2,uVar1);
  }
  iVar5 = iVar3;
  if (iVar3 < iVar4) {
    iVar5 = iVar4;
    iVar4 = iVar3;
  }
  *param_2 = iVar5;
  param_2[1] = iVar4;
  return param_2;
}



// FUNCTION 143b0063c FUN_143b0063c body=682 status=ok
// SIG undefined FUN_143b0063c(void)

void FUN_143b0063c(longlong *param_1,uint param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_2 >> 9) * 8);
  uVar12 = (ulonglong)(param_2 & 0x1ff);
  dVar1 = *(double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
  dVar3 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  lVar9 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(param_3 >> 9) * 8);
  uVar12 = (ulonglong)(param_3 & 0x1ff);
  dVar4 = *(double *)(lVar9 + uVar12 * 0x18);
  dVar5 = *(double *)(lVar9 + 8 + uVar12 * 0x18);
  dVar6 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  plVar7 = *(longlong **)param_1[1];
  iVar10 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar10 + 1U) {
    FUN_1446f48e2(plVar7,iVar10);
  }
  *(uint *)(*plVar7 + (longlong)iVar10 * 4) = param_2;
  iVar10 = *(int *)param_1[2];
  lVar9 = (longlong)iVar10;
  if (0 < lVar9) {
    lVar13 = 0x10;
    lVar11 = 0;
    do {
      lVar11 = lVar11 + 1;
      dVar14 = (double)(int)lVar11 / (double)(iVar10 + 1);
      dVar15 = 1.0 - dVar14;
      local_f0 = dVar15 * dVar3 + dVar6 * dVar14;
      local_f8 = dVar15 * dVar2 + dVar5 * dVar14;
      local_100 = dVar15 * dVar1 + dVar14 * dVar4;
      local_e0 = DAT_14c846338;
      local_e8 = DAT_14c846330;
      local_d4 = DAT_14c846338;
      local_dc = DAT_14c846330;
      local_d0 = DAT_14c84635c;
      local_c8 = 0;
      local_c6 = 0;
      uVar8 = FUN_146c02208(*param_1,&local_100);
      lVar9 = *(longlong *)param_1[1];
      iVar10 = *(int *)(lVar9 + 8 + lVar13);
      *(uint *)(lVar9 + 8 + lVar13) = iVar10 + 1U;
      if (*(uint *)(lVar9 + 0xc + lVar13) < iVar10 + 1U) {
        FUN_1446f48e2((longlong *)(lVar9 + lVar13),iVar10);
      }
      *(undefined4 *)(*(longlong *)(lVar9 + lVar13) + (longlong)iVar10 * 4) = uVar8;
      iVar10 = *(int *)param_1[2];
      lVar9 = (longlong)iVar10;
      lVar13 = lVar13 + 0x10;
    } while (lVar11 < lVar9);
  }
  lVar9 = *(longlong *)param_1[1] + lVar9 * 0x10;
  iVar10 = *(int *)(lVar9 + 0x18);
  *(uint *)(lVar9 + 0x18) = iVar10 + 1U;
  if (*(uint *)(lVar9 + 0x1c) < iVar10 + 1U) {
    FUN_1446f48e2((longlong *)(lVar9 + 0x10),iVar10);
  }
  *(uint *)(*(longlong *)(lVar9 + 0x10) + (longlong)iVar10 * 4) = param_3;
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b008e8 FUN_143b008e8 body=438 status=ok
// SIG undefined FUN_143b008e8(void)

void FUN_143b008e8(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)*param_1;
  lVar8 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(*(uint *)*param_2 >> 9) * 8);
  uVar7 = (ulonglong)(*(uint *)*param_2 & 0x1ff);
  local_48 = *(undefined8 *)(lVar8 + 0x10 + uVar7 * 0x18);
  puVar1 = (undefined4 *)(lVar8 + uVar7 * 0x18);
  local_58 = *puVar1;
  uStack_54 = puVar1[1];
  uStack_50 = puVar1[2];
  uStack_4c = puVar1[3];
  iVar6 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
    FUN_1403e3958(plVar4,iVar6);
  }
  lVar8 = *plVar4;
  *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar6 * 0x18) = local_48;
  puVar1 = (undefined4 *)(lVar8 + (longlong)iVar6 * 0x18);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  plVar4 = (longlong *)param_1[2];
  puVar1 = (undefined4 *)*param_2;
  iVar6 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
    FUN_1446f48e2(plVar4,iVar6);
  }
  *(undefined4 *)(*plVar4 + (longlong)iVar6 * 4) = *puVar1;
  iVar6 = (int)param_2[1];
  if (1 < iVar6) {
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(*param_2 + lVar8 * 4);
      plVar4 = (longlong *)param_1[3];
      iVar6 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
        FUN_1446f48e2(plVar4,iVar6);
      }
      *(uint *)(*plVar4 + (longlong)iVar6 * 4) = uVar2;
      plVar4 = (longlong *)param_1[4];
      lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
      local_48 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
      puVar1 = (undefined4 *)(lVar5 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      iVar6 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
        FUN_1403e3958(plVar4,iVar6);
      }
      lVar5 = *plVar4;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar6 * 0x18) = local_48;
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar6 * 0x18);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      lVar8 = lVar8 + 1;
      iVar6 = (int)param_2[1];
    } while (lVar8 < (longlong)iVar6 + -1);
  }
  iVar3 = *(int *)param_1[5];
  if (iVar3 == 0) {
    *(int *)param_1[5] = iVar6;
  }
  else if (iVar6 != iVar3) {
    *(undefined1 *)param_1[6] = 0;
  }
  *(undefined1 *)param_1[7] = 1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b00aa0 FUN_143b00aa0 body=217 status=ok
// SIG undefined FUN_143b00aa0(void)

void FUN_143b00aa0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar6 = *(longlong *)(*param_1 + 0xc0) + (longlong)**(int **)(param_3 + 0x30) * 0x100 + 0xb8;
  uVar4 = FUN_14838b1bc(lVar6,*(undefined4 *)(*(longlong *)(param_3 + 0x50) + 0x20));
  FUN_14838b116(lVar6,uVar4,param_4);
  FUN_146c061e0(param_2,*(undefined4 *)*param_4,((undefined4 *)*param_4)[1]);
  FUN_146c13626(param_2,local_28);
  piVar3 = (int *)*param_4;
  if (local_28[0] != *piVar3) {
    uVar1 = *(uint *)(param_4 + 1);
    lVar6 = (longlong)(int)uVar1;
    if (1 < lVar6) {
      lVar7 = 0;
      piVar5 = piVar3;
      do {
        iVar2 = *piVar5;
        *piVar5 = piVar3[lVar6 + lVar7 + -1];
        piVar3[lVar6 + lVar7 + -1] = iVar2;
        lVar7 = lVar7 + -1;
        piVar5 = piVar5 + 1;
      } while (-lVar7 != (ulonglong)(uVar1 >> 1));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b00b7a FUN_143b00b7a body=335 status=ok
// SIG undefined FUN_143b00b7a(void)

int * FUN_143b00b7a(longlong *param_1,int param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)*param_1;
  local_38 = param_2;
  local_34 = param_3;
  uVar1 = FUN_1448eb174(&local_38,8,0);
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    plVar4 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar5[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar5[9] - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)(*plVar5 + (longlong)iVar2 * 0x28);
        if ((*piVar3 == local_38) && (*(int *)(*plVar5 + 4 + (longlong)iVar2 * 0x28) == local_34)) {
          *param_4 = 0;
          if (piVar3 == (int *)0x0) goto LAB_143b00c13;
          piVar3 = piVar3 + 2;
          goto LAB_143b00c95;
        }
        iVar2 = piVar3[8];
      } while (iVar2 != -1);
    }
  }
  *param_4 = 0;
LAB_143b00c13:
  param_1 = (longlong *)*param_1;
  piVar6 = (int *)0x0;
  local_38 = param_3;
  local_34 = param_2;
  uVar1 = FUN_1448eb174(&local_38,8,0);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        piVar6 = (int *)(*param_1 + (longlong)iVar2 * 0x28);
        if ((*piVar6 == local_38) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x28) == local_34))
        goto LAB_143b00c87;
        iVar2 = piVar6[8];
      } while (iVar2 != -1);
    }
    piVar6 = (int *)0x0;
  }
LAB_143b00c87:
  piVar3 = piVar6 + 2;
  if (piVar6 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  *param_4 = 1;
LAB_143b00c95:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b00cca FUN_143b00cca body=842 status=ok
// SIG undefined FUN_143b00cca(void)

void FUN_143b00cca(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = *(longlong *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_3 + 1);
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 == uVar6) {
    local_58 = (undefined4 *)0x0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    if (0 < (int)uVar6) {
      lVar10 = 0;
      local_80 = (ulonglong)uVar6;
      local_78 = lVar8;
      do {
        uVar6 = *(uint *)(*param_3 + lVar10 * 8);
        uVar2 = *(uint *)(*param_3 + 4 + lVar10 * 8);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
        local_6c = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar6 >> 9) * 8) +
                           (ulonglong)(uVar6 & 0x1ff) * 4);
        local_70 = local_6c;
        if (-1 < (int)uVar6) {
          local_70 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar2 >> 9) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 4);
        }
        FUN_1449e3bb0(&local_58,&local_6c);
        FUN_1449e3bb0(&local_58,&local_70);
        uVar5 = uStack_60;
        iVar9 = local_6c;
        if ((local_6c != local_70) && (iVar9 = *(int *)(lVar8 + 0x1c), *(int *)(lVar8 + 0x18) != 2))
        {
          lVar8 = (longlong)(int)uStack_60;
          uVar6 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar6);
          if (uStack_60._4_4_ < uVar6) {
            FUN_1446f48e2(&local_68,uVar5 & 0xffffffff);
          }
          *(int *)(local_68 + lVar8 * 4) = (int)lVar10;
          lVar8 = local_78;
        }
        uVar5 = local_80;
        lVar4 = *param_2;
        uVar6 = *(uint *)(lVar4 + lVar10 * 8);
        if (-1 < (int)uVar6) {
          *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) +
                    (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) = iVar9;
        }
        uVar6 = *(uint *)(lVar4 + 4 + lVar10 * 8);
        if (-1 < (int)uVar6) {
          *(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) +
                    (ulonglong)(uVar6 >> 9) * 8) + (ulonglong)(uVar6 & 0x1ff) * 4) = iVar9;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_2[1]);
      if (0 < (int)uStack_60) {
        FUN_144958a06(local_58);
        if ((int)uStack_60 == (int)uVar5) {
          lVar8 = 0;
          do {
            iVar9 = *(int *)(local_68 + lVar8);
            uVar3 = *local_58;
            lVar10 = *param_2;
            uVar6 = *(uint *)(lVar10 + (longlong)iVar9 * 8);
            if (-1 < (int)uVar6) {
              *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (ulonglong)(uVar6 >> 9) * 8)
               + (ulonglong)(uVar6 & 0x1ff) * 4) = uVar3;
            }
            uVar6 = *(uint *)(lVar10 + 4 + (longlong)iVar9 * 8);
            if (-1 < (int)uVar6) {
              *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (ulonglong)(uVar6 >> 9) * 8)
               + (ulonglong)(uVar6 & 0x1ff) * 4) = uVar3;
            }
            lVar8 = lVar8 + 4;
          } while (uVar5 << 2 != lVar8);
        }
        else if ((int)uStack_60 != 0) {
          lVar8 = 0;
          do {
            iVar9 = *(int *)(local_68 + lVar8);
            uVar3 = *local_58;
            lVar10 = *param_2;
            uVar6 = *(uint *)(lVar10 + (longlong)iVar9 * 8);
            if (-1 < (int)uVar6) {
              *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (ulonglong)(uVar6 >> 9) * 8)
               + (ulonglong)(uVar6 & 0x1ff) * 4) = uVar3;
            }
            uVar6 = *(uint *)(lVar10 + 4 + (longlong)iVar9 * 8);
            if (-1 < (int)uVar6) {
              *(undefined4 *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (ulonglong)(uVar6 >> 9) * 8)
               + (ulonglong)(uVar6 & 0x1ff) * 4) = uVar3;
            }
            lVar8 = lVar8 + 4;
          } while ((longlong)(int)uStack_60 * 4 != lVar8);
        }
      }
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (uVar2 != 0) {
    puVar7 = (uint *)*param_2;
    puVar1 = puVar7 + (longlong)(int)uVar2 * 2;
    do {
      uVar3 = *(undefined4 *)(lVar8 + 0x1c);
      uVar6 = *puVar7;
      if (-1 < (int)uVar6) {
        *(undefined4 *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
         (ulonglong)(uVar6 & 0x1ff) * 4) = uVar3;
      }
      uVar6 = puVar7[1];
      if (-1 < (int)uVar6) {
        *(undefined4 *)
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20) + (ulonglong)(uVar6 >> 9) * 8) +
         (ulonglong)(uVar6 & 0x1ff) * 4) = uVar3;
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b01016 FUN_143b01016 body=252 status=ok
// SIG undefined FUN_143b01016(void)

double * FUN_143b01016(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar4 = *param_4;
  dVar5 = param_4[1];
  dVar3 = param_4[2];
  lVar1 = (longlong)(int)param_2[2] * 0xb8 + *param_2;
  lVar2 = *(longlong *)(lVar1 + 0xa8);
  if (*(longlong *)(lVar1 + 0xa8) == 0) {
    lVar2 = lVar1 + 8;
  }
  if ((longlong)*(int *)(lVar1 + 0xb0) != 0) {
    lVar1 = (longlong)*(int *)(lVar1 + 0xb0) * 0x50;
    do {
      local_50 = dVar3 * *(double *)(lVar2 + 0x48);
      local_58 = dVar5 * *(double *)(lVar2 + 0x40);
      local_60 = dVar4 * *(double *)(lVar2 + 0x38);
      FUN_146bed047(&local_48,lVar2,&local_60);
      dVar3 = local_38 + *(double *)(lVar2 + 0x30);
      dVar5 = local_40 + *(double *)(lVar2 + 0x28);
      dVar4 = local_48 + *(double *)(lVar2 + 0x20);
      lVar2 = lVar2 + 0x50;
      lVar1 = lVar1 + -0x50;
    } while (lVar1 != 0);
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b01114 FUN_143b01114 body=106 status=ok
// SIG undefined FUN_143b01114(void)

undefined8 * FUN_143b01114(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14ae72ce0;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1482fdd8a(puVar1,iVar2);
    FUN_1482fddfd(*puVar1,uVar3,iVar2);
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  return puVar1;
}



// FUNCTION 143b01190 FUN_143b01190 body=69 status=ok
// SIG undefined FUN_143b01190(void)

undefined8 * FUN_143b01190(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae72ce0;
  FUN_1482fdfd4(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b011d6 FUN_143b011d6 body=120 status=ok
// SIG undefined FUN_143b011d6(void)

bool FUN_143b011d6(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_3;
  lVar4 = ((undefined8 *)*param_1)[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(*(undefined8 *)*param_1);
    lVar4 = ((undefined8 *)*param_1)[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(*(undefined8 *)*param_1,uVar1);
      goto LAB_143b01219;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_143b01219:
  return iVar2 == iVar3;
}



// FUNCTION 143b01278 FUN_143b01278 body=29 status=ok
// SIG undefined FUN_143b01278(void)

undefined8 FUN_143b01278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b01296 FUN_143b01296 body=2693 status=ok
// SIG undefined FUN_143b01296(void)

void FUN_143b01296(longlong *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  double *pdVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  int *piVar28;
  undefined4 *puVar29;
  bool bVar30;
  undefined4 uVar31;
  double dVar32;
  undefined1 auStack_128 [32];
  char *local_108;
  longlong *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  int *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double local_a0;
  double *local_98;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar19 = (longlong)*param_2;
  pcVar18 = (char *)param_1[1];
  puVar5 = *(undefined8 **)(*(longlong *)(*param_1 + 8) + lVar19 * 8);
  lVar26 = ((undefined8 *)param_1[2])[1];
  if (lVar26 == 0) {
    uVar9 = FUN_146bc96d4(*(undefined8 *)param_1[2]);
  }
  else {
    uVar9 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar26 + 0x20) + (ulonglong)(*(uint *)*puVar5 >> 9) * 8) +
             (ulonglong)(*(uint *)*puVar5 & 0x1ff) * 4);
  }
  lVar26 = lVar19 * 0x68;
  *(undefined4 *)(*(longlong *)(pcVar18 + 8) + lVar26) = uVar9;
  lVar6 = *(longlong *)(pcVar18 + 8);
  *(undefined8 *)(lVar6 + 8 + lVar26) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar6 + 0x10 + lVar26) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar6 + 0x18 + lVar26) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar6 + 0x20 + lVar26) = 0xffefffffffffffff;
  *(undefined8 *)(lVar6 + 0x28 + lVar26) = 0xffefffffffffffff;
  *(undefined8 *)(lVar6 + 0x30 + lVar26) = 0xffefffffffffffff;
  puVar29 = (undefined4 *)*puVar5;
  iVar17 = *(int *)(puVar5 + 1);
  local_108 = pcVar18;
  local_f0 = lVar19;
  if ((longlong)iVar17 == 0) {
    uVar16 = 0;
    local_100 = param_1;
LAB_143b0136d:
    local_98 = (double *)0x0;
    local_90 = 0;
    local_b8 = (int *)0x0;
    uStack_b0 = 0.0;
    uStack_8c = 0x80;
    iStack_88 = -1;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_e8 = lVar26;
    local_e0 = puVar29;
    uStack_d8 = uVar16;
    FUN_146bc855c();
    local_c8 = (int *)0x0;
    uStack_c0 = 0;
LAB_143b013ca:
    bVar30 = (longlong)uStack_c0 < 0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if (bVar30) {
      FUN_14481578e(&local_c8,0);
    }
    uVar16 = local_90;
    if (local_90 == 0) {
      uVar20 = 1;
      iVar17 = 0;
      uVar27 = 0;
      uVar10 = 0;
    }
    else {
      pdVar13 = local_98;
      if (local_98 == (double *)0x0) {
        pdVar13 = &local_a8;
      }
      uVar10 = *(uint *)pdVar13;
      if (uVar10 == 0) {
        iVar17 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar17 = local_90 - 1;
        }
        uVar27 = 0;
        uVar20 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar20 = uVar27;
        }
        iVar17 = 0;
        do {
          if (uVar20 == uVar27) goto LAB_143b01477;
          iVar17 = iVar17 + 0x20;
          uVar10 = *(uint *)((longlong)pdVar13 + (uVar27 + 1) * 4);
          uVar27 = uVar27 + 1;
        } while (uVar10 == 0);
      }
      else {
        iVar17 = 0;
        uVar27 = 0;
      }
      uVar20 = (ulonglong)(-uVar10 & uVar10);
      uVar3 = uVar20 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar10 = (iVar17 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if ((int)local_90 <= (int)uVar10) {
        uVar10 = local_90;
      }
    }
    if (uVar10 != local_90) {
      uVar22 = 0xffffffff;
      local_f8 = (undefined8 *)(ulonglong)local_90;
      do {
        piVar15 = local_b8;
        iVar25 = local_b8[(longlong)(int)uVar10 * 3];
        FUN_146c03f0e(local_100[3],&local_e0,iVar25);
        uVar3 = uStack_c0;
        if ((int)uStack_b0 != local_84) {
          puVar14 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar14 = local_80;
          }
          uVar10 = local_70 - 1;
          for (iVar11 = *(int *)(puVar14 + (ulonglong)(uVar10 & (uint)local_e0) * 4); iVar11 != -1;
              iVar11 = piVar15[(longlong)iVar11 * 3 + 1]) {
            if (piVar15[(longlong)iVar11 * 3] == (uint)local_e0) {
              iVar11 = *(int *)(puVar14 + (ulonglong)(local_e0._4_4_ & uVar10) * 4);
              goto LAB_143b01810;
            }
          }
        }
LAB_143b016d0:
        lVar26 = (longlong)(int)uStack_c0;
        uVar16 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar16);
        if (uStack_c0._4_4_ < uVar16) {
          FUN_1446f48e2(&local_c8,uVar3 & 0xffffffff);
        }
        local_c8[lVar26] = iVar25;
        uVar16 = local_90;
LAB_143b01701:
        uVar22 = uVar22 & ~(uint)uVar20;
        pdVar13 = local_98;
        if (local_98 == (double *)0x0) {
          pdVar13 = &local_a8;
        }
        iVar25 = (int)uVar27;
        lVar26 = (longlong)iVar25;
        uVar10 = *(uint *)((longlong)pdVar13 + lVar26 * 4) & uVar22;
        if (uVar10 == 0) {
          iVar11 = uVar16 + 0x1e;
          if (-1 < (int)(uVar16 - 1)) {
            iVar11 = uVar16 - 1;
          }
          iVar11 = iVar11 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar25) {
            iVar12 = iVar25;
          }
          if (iVar25 < iVar11) {
            lVar19 = 0;
            do {
              uVar10 = *(uint *)((longlong)pdVar13 + (lVar26 + lVar19 + 1) * 4);
              if (uVar10 != 0) {
                uVar27 = (ulonglong)(iVar25 + (int)lVar19 + 1);
                uVar22 = 0xffffffff;
                goto LAB_143b01785;
              }
              iVar17 = iVar17 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar12 - lVar26 != lVar19);
            uVar22 = 0xffffffff;
            iVar25 = iVar12;
          }
          uVar27 = (ulonglong)(iVar25 + 1);
          uVar10 = uVar16;
        }
        else {
LAB_143b01785:
          uVar20 = (ulonglong)(-uVar10 & uVar10);
          uVar3 = uVar20 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar10 = (iVar17 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if ((int)uVar16 <= (int)uVar10) {
            uVar10 = uVar16;
          }
        }
      } while (uVar10 != (uint)local_f8);
    }
LAB_143b01477:
    param_1 = local_100;
    if ((longlong)(int)uStack_c0 != 0) {
      piVar15 = local_c8;
      iVar17 = (int)uStack_b0;
      iVar25 = local_84;
      do {
        bVar30 = iVar17 != iVar25;
        iVar17 = iVar25;
        if (bVar30) {
          iVar11 = *piVar15;
          puVar14 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar14 = local_80;
          }
          piVar24 = (int *)(puVar14 + ((longlong)local_70 - 1U & (longlong)iVar11) * 4);
          do {
            iVar12 = *piVar24;
            lVar26 = (longlong)iVar12;
            iVar17 = (int)uStack_b0;
            iVar25 = local_84;
            if (lVar26 == -1) break;
            piVar1 = local_b8 + lVar26 * 3;
            iVar4 = *piVar1;
            if (iVar4 == iVar11) {
              puVar14 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar14 = local_80;
              }
              iVar17 = *(int *)(puVar14 + (longlong)piVar1[2] * 4);
              if (iVar17 == iVar12) {
                piVar28 = (int *)(puVar14 + (longlong)piVar1[2] * 4);
              }
              else {
                do {
                  piVar28 = local_b8 + (longlong)iVar17 * 3 + 1;
                  iVar17 = *piVar28;
                } while (iVar17 != iVar12);
              }
              *piVar28 = piVar1[1];
              if (local_84 != 0) {
                local_b8[(longlong)iStack_88 * 3] = iVar12;
              }
              local_b8[lVar26 * 3] = -1;
              iVar17 = -1;
              if (0 < local_84) {
                iVar17 = iStack_88;
              }
              local_b8[lVar26 * 3 + 1] = iVar17;
              iStack_88 = iVar12;
              local_84 = local_84 + 1;
              pdVar13 = local_98;
              if (local_98 == (double *)0x0) {
                pdVar13 = &local_a8;
              }
              iVar17 = iVar12 + 0x1f;
              if (-1 < iVar12) {
                iVar17 = iVar12;
              }
              bVar8 = (byte)iVar12 & 0x1f;
              puVar2 = (uint *)((longlong)pdVar13 + (longlong)(iVar17 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
            }
            else {
              piVar24 = piVar1 + 1;
            }
            iVar17 = (int)uStack_b0;
            iVar25 = local_84;
          } while (iVar4 != iVar11);
        }
        if (iVar17 - iVar25 == 1) {
          piVar15 = local_b8;
          if (local_90 == 0) goto LAB_143b01872;
          pdVar13 = local_98;
          if (local_98 == (double *)0x0) {
            pdVar13 = &local_a8;
          }
          uVar16 = *(uint *)pdVar13;
          uVar10 = local_90;
          if (uVar16 != 0) {
            lVar26 = 0;
            goto LAB_143b01658;
          }
          iVar17 = local_90 + 0x1e;
          if (-1 < (int)(local_90 - 1)) {
            iVar17 = local_90 - 1;
          }
          uVar22 = iVar17 >> 5;
          if (iVar17 >> 5 < 1) {
            uVar22 = 0;
          }
          lVar26 = 0;
          goto LAB_143b01643;
        }
        piVar15 = piVar15 + 1;
      } while (piVar15 != local_c8 + (int)uStack_c0);
      iVar17 = -1;
      goto LAB_143b01874;
    }
    uVar10 = 0;
    if (uVar16 == 0) goto LAB_143b01a3b;
    pdVar13 = local_98;
    if (local_98 == (double *)0x0) {
      pdVar13 = &local_a8;
    }
    uVar10 = *(uint *)pdVar13;
    if (uVar10 != 0) {
      iVar17 = 0x3e;
      goto LAB_143b01a1b;
    }
    iVar17 = uVar16 + 0x1e;
    if (-1 < (int)(uVar16 - 1)) {
      iVar17 = uVar16 - 1;
    }
    uVar27 = 0;
    uVar20 = (ulonglong)(uint)(iVar17 >> 5);
    if (iVar17 >> 5 < 1) {
      uVar20 = uVar27;
    }
    iVar17 = 0x3e;
    goto LAB_143b01a02;
  }
  lVar19 = 0;
  local_f8 = puVar5;
  do {
    lVar6 = *(longlong *)(pcVar18 + 8);
    FUN_146c14aac(param_1[3],&local_b8);
    lVar21 = local_f0;
    puVar5 = local_f8;
    dVar32 = *(double *)(lVar6 + 8 + lVar26);
    uVar9 = SUB84(dVar32,0);
    uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
    if ((double)local_b8 <= dVar32) {
      uVar9 = SUB84(local_b8,0);
      uVar31 = (undefined4)((ulonglong)local_b8 >> 0x20);
    }
    dVar32 = *(double *)(lVar6 + 0x10 + lVar26);
    *(ulonglong *)(lVar6 + 8 + lVar26) = CONCAT44(uVar31,uVar9);
    if (uStack_b0 <= dVar32) {
      dVar32 = uStack_b0;
    }
    *(double *)(lVar6 + 0x10 + lVar26) = dVar32;
    dVar32 = *(double *)(lVar6 + 0x18 + lVar26);
    uVar9 = SUB84(dVar32,0);
    uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
    if (local_a8 <= dVar32) {
      uVar9 = SUB84(local_a8,0);
      uVar31 = (undefined4)((ulonglong)local_a8 >> 0x20);
    }
    *(ulonglong *)(lVar6 + 0x18 + lVar26) = CONCAT44(uVar31,uVar9);
    dVar32 = *(double *)(lVar6 + 0x20 + lVar26);
    uVar9 = SUB84(dVar32,0);
    uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
    if (dVar32 <= local_a0) {
      uVar9 = SUB84(local_a0,0);
      uVar31 = (undefined4)((ulonglong)local_a0 >> 0x20);
    }
    *(ulonglong *)(lVar6 + 0x20 + lVar26) = CONCAT44(uVar31,uVar9);
    dVar32 = *(double *)(lVar6 + 0x28 + lVar26);
    uVar9 = SUB84(dVar32,0);
    uVar31 = (undefined4)((ulonglong)dVar32 >> 0x20);
    if (dVar32 <= (double)local_98) {
      uVar9 = SUB84(local_98,0);
      uVar31 = (undefined4)((ulonglong)local_98 >> 0x20);
    }
    *(ulonglong *)(lVar6 + 0x28 + lVar26) = CONCAT44(uVar31,uVar9);
    dVar32 = *(double *)(lVar6 + 0x30 + lVar26);
    uVar16 = SUB84(dVar32,0);
    uVar10 = (uint)((ulonglong)dVar32 >> 0x20);
    if (dVar32 <= (double)CONCAT44(uStack_8c,local_90)) {
      uVar16 = local_90;
      uVar10 = uStack_8c;
    }
    *(ulonglong *)(lVar6 + 0x30 + lVar26) = CONCAT44(uVar10,uVar16);
    lVar19 = lVar19 + 4;
  } while ((longlong)iVar17 * 4 != lVar19);
  uVar16 = *(uint *)(local_f8 + 1);
  if (uVar16 == 1) {
    FUN_146c149e0(param_1[3],&local_b8,*(undefined4 *)*local_f8);
    lVar19 = *(longlong *)(local_108 + 8);
    *(double *)(lVar19 + 0x48 + lVar26) = local_a8;
    puVar29 = (undefined4 *)(lVar19 + 0x38 + lVar26);
    *puVar29 = (int)local_b8;
    puVar29[1] = local_b8._4_4_;
    puVar29[2] = (int)uStack_b0;
    puVar29[3] = uStack_b0._4_4_;
    uVar9 = *(undefined4 *)*puVar5;
    *(ulonglong *)(*(longlong *)(local_108 + 8) + 0x50 + lVar26) = CONCAT44(uVar9,uVar9);
    pcVar18 = local_108;
    lVar21 = local_f0;
  }
  else {
    puVar29 = (undefined4 *)*local_f8;
    local_100 = param_1;
    if (uVar16 != 2) goto LAB_143b0136d;
    lVar19 = param_1[3];
    uVar9 = *puVar29;
    FUN_146c03f0e(lVar19,&local_b8,uVar9);
    iVar17 = puVar29[1];
    if (((int)local_b8 != iVar17) && (local_b8._4_4_ != iVar17)) {
      uVar16 = 2;
      if ((int)uStack_b0 != iVar17) goto LAB_143b0136d;
    }
    uVar16 = FUN_146c08e54(lVar19,uVar9);
    if (uVar16 == 0xffffffff) {
      FUN_146c149e0(lVar19,&local_b8,uVar9);
      lVar19 = *(longlong *)(local_108 + 8);
      *(double *)(lVar19 + 0x48 + lVar26) = local_a8;
      puVar29 = (undefined4 *)(lVar19 + 0x38 + lVar26);
      *puVar29 = (int)local_b8;
      puVar29[1] = local_b8._4_4_;
      puVar29[2] = (int)uStack_b0;
      puVar29[3] = uStack_b0._4_4_;
      uVar9 = *(undefined4 *)*puVar5;
      *(ulonglong *)(*(longlong *)(local_108 + 8) + 0x50 + lVar26) = CONCAT44(uVar9,uVar9);
      pcVar18 = local_108;
      param_1 = local_100;
    }
    else {
      FUN_146c13ee2(lVar19,&local_b8,uVar16,0x3fe0000000000000);
      lVar19 = *(longlong *)(local_108 + 8);
      *(double *)(lVar19 + 0x48 + lVar26) = local_a8;
      puVar29 = (undefined4 *)(lVar19 + 0x38 + lVar26);
      *puVar29 = (int)local_b8;
      puVar29[1] = local_b8._4_4_;
      puVar29[2] = (int)uStack_b0;
      puVar29[3] = uStack_b0._4_4_;
      *(undefined8 *)(*(longlong *)(local_108 + 8) + 0x50 + lVar26) =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(local_100[3] + 0x1c0) + (ulonglong)(uVar16 >> 9) * 8) + 8 +
            (ulonglong)((uVar16 & 0x1ff) << 4));
      pcVar18 = local_108;
      param_1 = local_100;
    }
  }
  goto LAB_143b01b2e;
LAB_143b01810:
  if (iVar11 == -1) goto LAB_143b016d0;
  if (piVar15[(longlong)iVar11 * 3] == local_e0._4_4_) {
    iVar11 = *(int *)(puVar14 + (ulonglong)(uVar10 & uStack_d8) * 4);
    goto LAB_143b0183a;
  }
  iVar11 = piVar15[(longlong)iVar11 * 3 + 1];
  goto LAB_143b01810;
LAB_143b0183a:
  if (iVar11 == -1) goto LAB_143b016d0;
  if (piVar15[(longlong)iVar11 * 3] == uStack_d8) goto LAB_143b01701;
  iVar11 = piVar15[(longlong)iVar11 * 3 + 1];
  goto LAB_143b0183a;
  while( true ) {
    uVar16 = *(uint *)pdVar13;
    lVar26 = lVar26 + 0x20;
    if (uVar16 != 0) break;
LAB_143b01643:
    pdVar13 = (double *)((longlong)pdVar13 + 4);
    if ((ulonglong)uVar22 * 0x20 == lVar26) goto LAB_143b01679;
  }
LAB_143b01658:
  uVar20 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
  lVar19 = 0x3f;
  if (uVar20 != 0) {
    for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar16 = ((int)lVar26 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)uVar16 < (int)local_90) {
    uVar10 = uVar16;
  }
LAB_143b01679:
  piVar15 = local_b8 + (longlong)(int)uVar10 * 3;
LAB_143b01872:
  iVar17 = *piVar15;
LAB_143b01874:
  if (iVar17 != -1) goto LAB_143b01a49;
  goto LAB_143b013ca;
  while( true ) {
    uVar10 = *(uint *)((longlong)pdVar13 + (uVar27 + 1) * 4);
    uVar27 = uVar27 + 1;
    iVar17 = iVar17 + 0x20;
    if (uVar10 != 0) break;
LAB_143b01a02:
    uVar10 = uVar16;
    if (uVar20 == uVar27) goto LAB_143b01a3b;
  }
LAB_143b01a1b:
  uVar20 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
  lVar26 = 0x3f;
  if (uVar20 != 0) {
    for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  uVar10 = iVar17 - ((uint)lVar26 ^ 0x3f);
  if ((int)uVar16 <= (int)uVar10) {
    uVar10 = uVar16;
  }
LAB_143b01a3b:
  iVar17 = local_b8[(longlong)(int)uVar10 * 3];
LAB_143b01a49:
  FUN_146c149e0(local_100[3],&local_e0,iVar17);
  lVar26 = local_e8;
  pcVar18 = local_108;
  lVar19 = *(longlong *)(local_108 + 8);
  *(undefined8 *)(lVar19 + 0x48 + local_e8) = local_d0;
  puVar29 = (undefined4 *)(lVar19 + 0x38 + local_e8);
  *puVar29 = (uint)local_e0;
  puVar29[1] = local_e0._4_4_;
  puVar29[2] = uStack_d8;
  puVar29[3] = uStack_d4;
  *(ulonglong *)(*(longlong *)(local_108 + 8) + 0x50 + local_e8) = CONCAT44(iVar17,iVar17);
  if (local_c8 != (int *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar21 = local_f0;
  uVar20 = (ulonglong)uStack_b0 >> 0x20;
  uStack_b0 = (double)((ulonglong)uStack_b0 & 0xffffffff00000000);
  if ((int)uVar20 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  iStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < uStack_8c) {
    uStack_8c = 0x80;
    FUN_1446efbd8(&local_a8,0);
  }
  if (local_98 != (double *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (int *)0x0) {
    FUN_1400020a8();
  }
LAB_143b01b2e:
  if (*pcVar18 == '\x01') {
    plVar7 = *(longlong **)(*(longlong *)(*param_1 + 8) + lVar21 * 8);
    lVar26 = *(longlong *)(pcVar18 + 8) + lVar26;
    plVar23 = (longlong *)(lVar26 + 0x58);
    if (plVar23 != plVar7) {
      if (*plVar23 != 0) {
        FUN_1400020a8();
      }
      *plVar23 = *plVar7;
      *plVar7 = 0;
      *(int *)(lVar26 + 0x60) = (int)plVar7[1];
      *(undefined4 *)(lVar26 + 100) = *(undefined4 *)((longlong)plVar7 + 0xc);
      plVar7[1] = 0;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b01d1c FUN_143b01d1c body=53 status=ok
// SIG undefined FUN_143b01d1c(void)

undefined8 FUN_143b01d1c(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 143b01dd2 FUN_143b01dd2 body=29 status=ok
// SIG undefined FUN_143b01dd2(void)

undefined8 FUN_143b01dd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b01df0 FUN_143b01df0 body=599 status=ok
// SIG undefined FUN_143b01df0(void)

void FUN_143b01df0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 *local_c0;
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_88;
  undefined4 local_84;
  undefined2 *local_80;
  undefined2 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  uint local_64;
  undefined8 local_60;
  undefined4 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *param_2;
  local_78 = 0x100;
  local_74 = 0xffffffff;
  local_70 = (undefined4 *)0x0;
  local_88 = 0x100;
  local_84 = 0xffffffff;
  local_80 = (undefined2 *)0x0;
  local_a0[0] = 0;
  local_98 = 0;
  local_90 = 0xffffffff;
  local_c8 = *(undefined1 *)param_1[5];
  local_d0 = *(undefined4 *)param_1[4];
  local_d8 = *(undefined4 *)param_1[3];
  local_c0 = local_a0;
  local_b8 = &local_78;
  local_b0 = &local_88;
  cVar3 = FUN_1482afd2e(uVar1,*param_1,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2]);
  if (cVar3 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[6]);
    uVar2 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
             (ulonglong)((uVar1 & 0x1ff) << 4));
    local_60 = &local_64;
    local_64 = uVar1;
    local_58 = local_a0;
    FUN_1482f537c(param_1[7],local_4c,&local_60,0);
    FUN_1482b33ce(param_1[7],&local_60,uVar2 & 0xffffffff);
    uVar4 = 1;
    uVar5 = 1;
    if ((char)local_78 == '\0') {
      uVar5 = SUB81(local_60,0);
    }
    if (local_78._1_1_ == '\0') {
      local_60._1_1_ = 0;
    }
    local_78 = CONCAT11(local_60._1_1_,uVar5);
    local_70 = local_58;
    local_64 = (uint)uVar2;
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_78;
    FUN_1482f586a(param_1[7] + 0x50,local_4c,&local_60,0);
    FUN_1482b33ce(param_1[7],&local_60,uVar2 >> 0x20);
    if ((char)local_88 == '\0') {
      uVar4 = SUB81(local_60,0);
    }
    uVar5 = 0;
    if (local_88._1_1_ != '\0') {
      uVar5 = local_60._1_1_;
    }
    local_88 = CONCAT11(uVar5,uVar4);
    local_80 = (undefined2 *)local_58;
    local_64 = (uint)(uVar2 >> 0x20);
    local_60 = &local_64;
    local_58 = (undefined4 *)&local_88;
    FUN_1482f586a(param_1[7] + 0x50,local_4c,&local_60,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[6]);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b02048 FUN_143b02048 body=442 status=ok
// SIG undefined FUN_143b02048(void)

void FUN_143b02048(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_98 [44];
  uint local_6c;
  uint *local_68;
  undefined8 local_60;
  uint local_54;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  uVar2 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1[1] + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
           (ulonglong)((uVar1 & 0x1ff) << 4));
  cVar3 = (**(code **)(**(longlong **)param_1[2] + 0x80))(*(longlong **)param_1[2],uVar1);
  uVar5 = (uint)uVar2;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x20);
  if (cVar3 == '\0') {
    local_50[0] = uVar5;
    local_50[1] = uVar4;
    lVar6 = 0;
    do {
      uVar1 = *(uint *)((longlong)local_50 + lVar6);
      cVar3 = (**(code **)(**(longlong **)param_1[2] + 0x90))(*(longlong **)param_1[2],uVar1,1);
      if (cVar3 != '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
        local_60 = param_1[6];
        local_6c = uVar1;
        local_68 = &local_6c;
        FUN_1482f586a(param_1[4] + 0x50,&local_54,&local_68,0);
        LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 != 8);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
    local_60 = param_1[5];
    local_68 = &local_54;
    local_54 = uVar1;
    FUN_1482f537c(param_1[4],local_50,&local_68,0);
    local_60 = param_1[6];
    local_68 = &local_54;
    local_54 = uVar5;
    FUN_1482f586a(param_1[4] + 0x50,local_50,&local_68,0);
    local_60 = param_1[6];
    local_68 = &local_54;
    local_54 = uVar4;
    FUN_1482f586a(param_1[4] + 0x50,local_50,&local_68,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b02204 FUN_143b02204 body=38 status=ok
// SIG undefined FUN_143b02204(void)

undefined8 FUN_143b02204(undefined8 param_1,int param_2)

{
  FUN_145aba0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b02264 FUN_143b02264 body=1631 status=ok
// SIG undefined FUN_143b02264(void)

void FUN_143b02264(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
  uVar12 = (ulonglong)*param_2 & 0x1ff;
  local_b8 = *(undefined4 *)(lVar3 + 8 + uVar12 * 0xc);
  uVar4 = *(undefined8 *)(lVar3 + uVar12 * 0xc);
  local_c0 = uVar4;
  uVar4 = local_c0;
  iVar2 = *(int *)param_1[1];
  local_c0._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  bVar14 = (int)uVar4 != iVar2;
  uVar11 = 1;
  if (bVar14) {
    uVar11 = local_c0._4_4_ == iVar2 ^ 3;
  }
  uVar12 = 2;
  if (bVar14) {
    uVar12 = (ulonglong)(local_c0._4_4_ == iVar2 ^ 1);
  }
  uVar8 = 0;
  if (uVar11 != 3) {
    uVar8 = uVar11;
  }
  uVar11 = *(uint *)((longlong)&local_c0 + (ulonglong)uVar8 * 4);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1[2] + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
  uVar13 = (ulonglong)uVar11 & 0x1ff;
  pdVar1 = (double *)(lVar3 + uVar13 * 0x18);
  local_108 = *pdVar1;
  local_110 = pdVar1[1];
  local_100 = *(double *)(lVar3 + 0x10 + uVar13 * 0x18);
  uVar11 = *(uint *)((longlong)&local_c0 + uVar12 * 4);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)param_1[2] + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
  uVar12 = (ulonglong)uVar11 & 0x1ff;
  local_120 = *(double *)(lVar3 + 0x10 + uVar12 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar12 * 0x18);
  local_118 = *pdVar1;
  local_128 = pdVar1[1];
  pdVar1 = (double *)param_1[3];
  dVar18 = local_100 - pdVar1[2];
  local_130 = local_110 - pdVar1[1];
  dVar5 = local_108 - *pdVar1;
  dVar16 = dVar18 * dVar18 + dVar5 * dVar5 + local_130 * local_130;
  dVar24 = SQRT(dVar16);
  dVar21 = 0.0;
  dVar20 = 0.0;
  dVar15 = 0.0;
  dVar19 = 0.0;
  dVar9 = 0.0;
  if (0.0 < dVar24) {
    dVar19 = 1.0 / dVar24;
    dVar20 = dVar5 * dVar19;
    dVar15 = local_130 * dVar19;
    dVar19 = dVar19 * dVar18;
    dVar9 = dVar24;
  }
  dVar17 = local_120 - pdVar1[2];
  dVar26 = local_128 - pdVar1[1];
  dVar7 = local_118 - *pdVar1;
  dVar24 = dVar17 * dVar17 + dVar7 * dVar7 + dVar26 * dVar26;
  dVar25 = SQRT(dVar24);
  dVar22 = 0.0;
  dVar23 = 0.0;
  dVar6 = 0.0;
  if (0.0 < dVar25) {
    dVar23 = 1.0 / dVar25;
    dVar21 = dVar7 * dVar23;
    dVar22 = dVar26 * dVar23;
    dVar23 = dVar23 * dVar17;
    dVar6 = dVar25;
  }
  dVar19 = dVar15 * dVar22 + dVar20 * dVar21 + dVar19 * dVar23;
  dVar6 = dVar6 * dVar6;
  dVar15 = 1.0;
  if (dVar19 <= 1.0) {
    dVar15 = dVar19;
  }
  local_f8 = local_118;
  dStack_f0 = local_128;
  local_e8 = local_120;
  local_d8 = local_108;
  dStack_d0 = local_110;
  local_c8 = local_100;
  local_c0 = uVar4;
  dVar15 = acos((double)(-(ulonglong)(dVar19 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar19 < -1.0) & (ulonglong)dVar15));
  *(double *)param_1[4] = *(double *)param_1[4] + dVar15;
  cVar10 = FUN_1482ffd46(param_1[3],&local_d8,&local_f8);
  if (cVar10 == '\0') {
    dVar23 = local_100 - local_120;
    dVar22 = local_110 - local_128;
    dVar25 = local_108 - local_118;
    dVar21 = (-dVar7 * dVar25 - dVar26 * dVar22) - dVar17 * dVar23;
    dVar20 = dVar23 * dVar23 + dVar25 * dVar25 + dVar22 * dVar22;
    dVar15 = dVar24 * dVar20 - dVar21 * dVar21;
    dVar19 = 1.79769313486232e+308;
    if (dVar15 <= 1.79769313486232e+308) {
      dVar19 = dVar15;
    }
    dVar24 = 0.0;
    dVar19 = (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar19);
    dVar15 = 0.0;
    local_138 = dVar6;
    if (1e-08 <= dVar19) {
      if (dVar19 < 0.0) {
        dVar19 = sqrt(dVar19);
      }
      else {
        dVar19 = SQRT(dVar19);
      }
      dVar15 = dVar21 / dVar19;
    }
    dVar19 = *(double *)param_1[6];
    dVar17 = -dVar19;
    dVar21 = dVar19;
    if (dVar15 <= dVar19) {
      dVar21 = dVar15;
    }
    bVar14 = dVar15 < dVar17;
    uVar12 = -(ulonglong)bVar14 & (ulonglong)dVar17;
    dVar5 = dVar18 * dVar23 + dVar5 * dVar25 + local_130 * dVar22;
    dVar16 = dVar16 * dVar20 - dVar5 * dVar5;
    dVar18 = 1.79769313486232e+308;
    if (dVar16 <= 1.79769313486232e+308) {
      dVar18 = dVar16;
    }
    dVar18 = (double)(~-(ulonglong)(dVar16 < 0.0) & (ulonglong)dVar18);
    if (1e-08 <= dVar18) {
      if (dVar18 < 0.0) {
        dVar18 = sqrt(dVar18);
      }
      else {
        dVar18 = SQRT(dVar18);
      }
      uVar27 = SUB84(local_138,0);
      uVar28 = (undefined4)((ulonglong)local_138 >> 0x20);
      dVar24 = dVar5 / dVar18;
      dVar19 = *(double *)param_1[6];
      dVar17 = -dVar19;
    }
    else {
      uVar27 = SUB84(local_138,0);
      uVar28 = (undefined4)((ulonglong)local_138 >> 0x20);
    }
    if (dVar24 <= dVar19) {
      dVar19 = dVar24;
    }
    *(double *)param_1[5] =
         dVar9 * dVar9 * (double)(uVar12 | ~-(ulonglong)bVar14 & (ulonglong)dVar21) * 0.125 +
         *(double *)param_1[5];
    *(double *)param_1[5] =
         (double)CONCAT44(uVar28,uVar27) *
         (double)(-(ulonglong)(dVar24 < dVar17) & (ulonglong)dVar17 |
                 ~-(ulonglong)(dVar24 < dVar17) & (ulonglong)dVar19) * 0.125 + *(double *)param_1[5]
    ;
  }
  else {
    dVar16 = dVar18 * dVar17 + dVar5 * dVar7 + local_130 * dVar26;
    dVar16 = dVar9 * dVar9 * dVar6 - dVar16 * dVar16;
    if (dVar16 < 0.0) {
      dVar16 = sqrt(dVar16);
    }
    else {
      dVar16 = SQRT(dVar16);
    }
    *(double *)param_1[5] =
         dVar16 * 0.5 * *(double *)(&DAT_14ae72850 + (ulonglong)(1.5707963267948966 < dVar15) * 8) +
         *(double *)param_1[5];
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b028c4 FUN_143b028c4 body=477 status=ok
// SIG undefined FUN_143b028c4(void)

void FUN_143b028c4(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *param_2;
  uVar7 = (ulonglong)uVar2;
  if (((-1 < (int)uVar2) &&
      (lVar3 = *param_1, (int)uVar2 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                         (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    plVar4 = (longlong *)param_1[1];
    cVar5 = FUN_146c0b51e(lVar3,uVar7);
    if (cVar5 != '\0') {
      lVar3 = *plVar4;
      puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar7 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
    }
    local_88 = 1;
    FUN_146c393d4(&local_68,*param_1,uVar2,1);
    dVar9 = (double)FUN_1482b11e7(*param_1,uVar2);
    FUN_1482b0b9f(&local_80,*param_1,uVar2);
    dVar10 = local_70 * local_58 + local_80 * local_68 + local_78 * local_60;
    uVar8 = -(ulonglong)(0.0 < dVar10);
    dVar11 = (double)(uVar8 & 0x3ff0000000000000 |
                     ~uVar8 & -(ulonglong)(dVar10 < 0.0) & 0xbff0000000000000) *
             SQRT(local_70 * local_70 + local_80 * local_80 + local_78 * local_78) * 0.5;
    dVar10 = dVar11 * dVar11 - dVar9;
    dVar10 = SQRT((double)(~-(ulonglong)(dVar10 <= 0.0) & (ulonglong)dVar10));
    lVar3 = *plVar4;
    lVar6 = uVar7 * 0x20;
    *(double *)(lVar3 + lVar6) = dVar11;
    *(double *)(lVar3 + 8 + lVar6) = dVar9;
    *(double *)(lVar3 + 0x10 + lVar6) = dVar11 + dVar10;
    *(double *)(lVar3 + 0x18 + lVar6) = dVar11 - dVar10;
    *(undefined1 *)(*(longlong *)param_1[2] + uVar7) = 1;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b031f0 FUN_143b031f0 body=2846 status=ok
// SIG undefined FUN_143b031f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b031f0(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_258 [32];
  double *local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128 [7];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar2 = *param_2;
  uVar6 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    plVar3 = (longlong *)*param_1;
    lVar8 = plVar3[1];
    if ((int)uVar2 < *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144)) {
      uVar9 = (ulonglong)(uVar2 >> 9);
      uVar10 = (ulonglong)(uVar2 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar8 + 0x148) + uVar9 * 8) + uVar10 * 2)
                  - 1U) < 0xfffe) {
        local_238 = &local_188;
        FUN_146c1477c(lVar8,uVar6,&local_170,&local_190);
        local_1a8 = 1e+30;
        dStack_1a0 = 1e+30;
        local_198 = 1e+30;
        local_238 = (double *)CONCAT44(local_238._4_4_,0xffffffff);
        (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],&local_1c0,&local_188);
        if ((((0.9 <= SQRT(local_160 * local_160 + local_170 * local_170 + dStack_168 * dStack_168))
             && (dVar15 = SQRT(local_198 * local_198 +
                               local_1a8 * local_1a8 + dStack_1a0 * dStack_1a0), 1e-06 < dVar15)) &&
            (0.9 <= dVar15)) && ((local_1a8 != 1e+30 || (NAN(local_1a8))))) {
          lVar8 = *(longlong *)(plVar3[1] + 0x130);
          lVar11 = *(longlong *)(lVar8 + uVar9 * 8);
          local_1c8 = *(undefined4 *)(lVar11 + 8 + uVar10 * 0xc);
          local_1d0 = *(undefined8 *)(lVar11 + uVar10 * 0xc);
          if ((((char)param_1[2] == '\0') ||
              (((char)plVar3[0x7c] != '\x01' ||
               (dVar15 = SQRT((local_178 - local_1b0) * (local_178 - local_1b0) +
                              (local_188 - local_1c0) * (local_188 - local_1c0) +
                              (dStack_180 - dStack_1b8) * (dStack_180 - dStack_1b8)),
               dVar15 < (double)param_1[3] || dVar15 == (double)param_1[3])))) ||
             (*(float *)(plVar3 + 0x7d) <= 0.0)) {
            dVar15 = (double)plVar3[0x7a];
            dVar13 = (double)plVar3[0x7b];
            dVar18 = 1.0 - dVar15;
            dVar5 = 1.0 - dVar13;
            local_198 = local_160 * dVar5 + local_198 * dVar13;
            dVar14 = dStack_168 * dVar5 + dStack_1a0 * dVar13;
            dVar13 = dVar5 * local_170 + local_1a8 * dVar13;
            dVar16 = SQRT(local_198 * local_198 + dVar13 * dVar13 + dVar14 * dVar14);
            dStack_1a0 = 0.0;
            dVar5 = 1.0 / dVar16;
            local_1a8 = (double)(-(ulonglong)(0.0 < dVar16) & (ulonglong)(dVar13 * dVar5));
            if (0.0 < dVar16) {
              local_198 = local_198 * dVar5;
              dStack_1a0 = dVar14 * dVar5;
            }
            else {
              local_198 = 0.0;
            }
            if (SQRT(local_198 * local_198 + local_1a8 * local_1a8 + dStack_1a0 * dStack_1a0) < 0.1)
            {
              local_198 = local_160;
              local_1a8 = local_170;
              dStack_1a0 = dStack_168;
            }
            dVar17 = (dVar18 * local_178 + local_1b0 * dVar15) - local_178;
            dVar13 = (dVar18 * dStack_180 + dVar15 * dStack_1b8) - dStack_180;
            dVar19 = (dVar18 * local_188 + local_1c0 * dVar15) - local_188;
            dVar14 = SQRT(dVar17 * dVar17 + dVar19 * dVar19 + dVar13 * dVar13);
            dVar18 = 0.0;
            dVar5 = 0.0;
            dVar15 = 0.0;
            dVar16 = 0.0;
            if (0.0 < dVar14) {
              dVar15 = 1.0 / dVar14;
              dVar18 = dVar19 * dVar15;
              dVar5 = dVar13 * dVar15;
              dVar15 = dVar17 * dVar15;
              dVar16 = dVar14;
            }
            uVar12 = -(ulonglong)(dVar16 <= (double)param_1[0xc]);
            dVar13 = (double)(~uVar12 & param_1[0xc] | (ulonglong)dVar16 & uVar12);
            local_1b0 = local_178 + dVar15 * dVar13;
            dStack_1b8 = dStack_180 + dVar5 * dVar13;
            local_1c0 = local_188 + dVar13 * dVar18;
            lVar8 = *(longlong *)(lVar8 + uVar9 * 8);
            uVar2 = *(uint *)(lVar8 + uVar10 * 0xc);
            lVar11 = *(longlong *)(plVar3[1] + 0x10);
            lVar4 = *(longlong *)(lVar11 + (ulonglong)(uVar2 >> 9) * 8);
            uVar9 = (ulonglong)uVar2 & 0x1ff;
            local_1d8 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
            pdVar1 = (double *)(lVar4 + uVar9 * 0x18);
            local_1e8 = *pdVar1;
            dStack_1e0 = pdVar1[1];
            uVar2 = *(uint *)(lVar8 + 4 + uVar10 * 0xc);
            lVar4 = *(longlong *)(lVar11 + (ulonglong)(uVar2 >> 9) * 8);
            uVar9 = (ulonglong)uVar2 & 0x1ff;
            local_1f8 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
            pdVar1 = (double *)(lVar4 + uVar9 * 0x18);
            local_208 = *pdVar1;
            dStack_200 = pdVar1[1];
            uVar2 = *(uint *)(lVar8 + 8 + uVar10 * 0xc);
            lVar8 = *(longlong *)(lVar11 + (ulonglong)(uVar2 >> 9) * 8);
            uVar9 = (ulonglong)uVar2 & 0x1ff;
            local_218 = *(double *)(lVar8 + 0x10 + uVar9 * 0x18);
            pdVar1 = (double *)(lVar8 + uVar9 * 0x18);
            local_228 = *pdVar1;
            dStack_220 = pdVar1[1];
            pdVar1 = local_128 + 1;
            local_128[1] = 0.0;
            local_128[2] = 0.0;
            local_128[3] = 0.0;
            local_128[4] = 1.0;
            local_138 = local_188;
            dStack_130 = dStack_180;
            local_128[0] = local_178;
            local_148 = (double)DAT_14c8463c8;
            local_158 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
            uStack_150 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
            FUN_146bfb7f2(pdVar1,&local_158,&local_170);
            local_148 = local_1d8 - local_128[0];
            uStack_150 = dStack_1e0 - dStack_130;
            local_158 = local_1e8 - local_138;
            FUN_146bf2028(pdVar1,&local_1e8,&local_158);
            local_148 = local_1f8 - local_128[0];
            uStack_150 = dStack_200 - dStack_130;
            local_158 = local_208 - local_138;
            FUN_146bf2028(pdVar1,&local_208,&local_158);
            local_148 = local_218 - local_128[0];
            uStack_150 = dStack_220 - dStack_130;
            local_158 = local_228 - local_138;
            FUN_146bf2028(pdVar1,&local_228,&local_158);
            FUN_1482ae234(&local_138,2,&local_1a8);
            local_128[0] = local_1b0;
            local_138 = local_1c0;
            dStack_130 = dStack_1b8;
            FUN_146bed047(&local_158,pdVar1,&local_1e8);
            local_1d8 = local_148 + local_128[0];
            dStack_1e0 = uStack_150 + dStack_130;
            local_1e8 = local_158 + local_138;
            FUN_146bed047(&local_158,pdVar1,&local_208);
            local_1f8 = local_148 + local_128[0];
            dStack_200 = uStack_150 + dStack_130;
            local_208 = local_158 + local_138;
            FUN_146bed047(&local_158,pdVar1,&local_228);
            local_218 = local_148 + local_128[0];
            dStack_220 = uStack_150 + dStack_130;
            local_228 = local_158 + local_138;
            dVar15 = local_160 * local_198 + local_170 * local_1a8 + dStack_168 * dStack_1a0;
            if (1.0 <= dVar15) {
              dVar15 = 1.0;
            }
            if (dVar15 <= 0.0) {
              dVar15 = 0.0;
            }
            local_190 = dVar15 * dVar15 * dVar15 * local_190;
            lVar8 = plVar3[0x83];
            *(double *)(lVar8 + uVar6 * 0x48) = local_1e8 * local_190;
            *(double *)(lVar8 + 8 + uVar6 * 0x48) = dStack_1e0 * local_190;
            *(double *)(lVar8 + 0x10 + uVar6 * 0x48) = local_1d8 * local_190;
            *(double *)(plVar3[0x81] + uVar6 * 0x18) = local_190;
            uVar6 = uVar6 * 3 & 0xffffffff;
            lVar8 = plVar3[0x83];
            *(double *)(lVar8 + 0x18 + uVar6 * 0x18) = local_208 * local_190;
            *(double *)(lVar8 + 0x20 + uVar6 * 0x18) = dStack_200 * local_190;
            *(double *)(lVar8 + 0x28 + uVar6 * 0x18) = local_1f8 * local_190;
            *(double *)(plVar3[0x81] + 8 + uVar6 * 8) = local_190;
            lVar11 = plVar3[0x83];
            lVar8 = uVar6 * 3 + 6;
            *(double *)(lVar11 + lVar8 * 8) = local_228 * local_190;
            *(double *)(lVar11 + 8 + lVar8 * 8) = dStack_220 * local_190;
            *(double *)(lVar11 + 0x10 + lVar8 * 8) = local_218 * local_190;
            *(double *)(plVar3[0x81] + 0x10 + uVar6 * 8) = local_190;
          }
          else {
            lVar8 = (ulonglong)(uVar2 * 3) * 0x18;
            lVar11 = 0;
            do {
              local_1e8 = (double)((ulonglong)local_1e8 & 0xffffffffffffff00);
              local_138 = (double)param_1[4];
              local_128[0] = 0.0;
              if (local_138 != 0.0) {
                plVar7 = (longlong *)param_1[6];
                if ((longlong *)param_1[6] == (longlong *)0x0) {
                  plVar7 = param_1 + 8;
                }
                (**(code **)*plVar7)(plVar7,local_128);
              }
              local_238 = &local_1e8;
              (**(code **)(*plVar3 + 0x90))
                        (plVar3,&local_158,*(undefined4 *)((longlong)&local_1d0 + lVar11 * 4),
                         &local_138);
              if (local_1e8._0_1_ == '\x01') {
                dVar15 = (double)*(float *)(plVar3 + 0x7d) * (double)plVar3[0x2f];
                dVar13 = 1.0 - dVar15;
                lVar4 = plVar3[0x83];
                *(double *)(lVar4 + lVar8) = (dVar13 * local_188 + dVar15 * local_158) * local_190;
                *(double *)(lVar4 + 8 + lVar8) =
                     (dStack_180 * dVar13 + uStack_150 * dVar15) * local_190;
                *(double *)(lVar4 + 0x10 + lVar8) =
                     (local_178 * dVar13 + local_148 * dVar15) * local_190;
                *(double *)(plVar3[0x81] + (ulonglong)(uVar2 * 3) * 8 + lVar11 * 8) = local_190;
              }
              lVar11 = lVar11 + 1;
              lVar8 = lVar8 + 0x18;
            } while (lVar11 != 3);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b03d10 FUN_143b03d10 body=1286 status=ok
// SIG undefined FUN_143b03d10(void)

void FUN_143b03d10(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  ulonglong local_b0;
  ulonglong uVar18;
  ulonglong uVar20;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar2 = *param_2;
  lVar14 = (longlong)(int)uVar2;
  lVar4 = *param_1;
  *(undefined1 *)(*(longlong *)(lVar4 + 0x280) + lVar14) = 0;
  if ((-1 < lVar14) &&
     (lVar15 = *(longlong *)(lVar4 + 8),
     (int)uVar2 < *(int *)(lVar15 + 0x20) * 0x200 + *(int *)(lVar15 + 0x24))) {
    uVar19 = uVar2 >> 9;
    uVar20 = (ulonglong)uVar19;
    uVar17 = uVar2 & 0x1ff;
    uVar18 = (ulonglong)uVar17;
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar15 + 0x28) + uVar20 * 8) + uVar18 * 2) -
                1U) < 0xfffe) {
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)(uVar19 * 8));
      lVar6 = (ulonglong)(uVar17 * 8) * 3;
      lVar16 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + (ulonglong)(uVar19 * 8));
      puVar1 = (undefined8 *)(lVar15 + lVar6);
      uVar10 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)(lVar16 + 0x10 + lVar6) = *(undefined8 *)(lVar15 + 0x10 + lVar6);
      puVar1 = (undefined8 *)(lVar16 + lVar6);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
      if (*(char *)(lVar4 + 200) == '\x01') {
        FUN_1482b33ce(lVar4 + 0x10,&local_c8,uVar2);
        if ((local_c8._1_1_ != '\x01') || (lStack_c0 != 0)) goto LAB_143b0418e;
      }
      pcVar5 = *(code **)(lVar4 + 0xe0);
      if (pcVar5 != (code *)0x0) {
        local_c8 = (uint *)CONCAT44(local_c8._4_4_,uVar2);
        plVar13 = (longlong *)(lVar4 + 0x100);
        if (*(longlong **)(lVar4 + 0xf0) != (longlong *)0x0) {
          plVar13 = *(longlong **)(lVar4 + 0xf0);
        }
        uVar10 = (**(code **)(*plVar13 + 8))();
        uVar11 = (*pcVar5)(uVar10,&local_c8);
        if ((uVar11 & 2) != 0) goto LAB_143b0418e;
      }
      *(undefined8 *)(*(longlong *)(lVar4 + 0x3f8) + lVar14 * 8) = 0;
      lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + uVar20 * 8);
      *(undefined8 *)(lVar15 + 0x10 + uVar18 * 0x18) = 0;
      puVar1 = (undefined8 *)(lVar15 + uVar18 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      local_c8 = (uint *)0x0;
      lStack_c0 = 0;
      FUN_146c08820(*(undefined8 *)(lVar4 + 8),uVar2,&local_c8);
      if ((longlong)(int)lStack_c0 != 0) {
        puVar12 = local_c8;
        do {
          uVar3 = *puVar12;
          lVar15 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
          local_d0 = *(undefined4 *)(lVar15 + 8 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
          local_d8 = *(undefined8 *)(lVar15 + (ulonglong)(uVar3 & 0x1ff) * 0xc);
          lVar15 = (longlong)(int)(uVar3 * 3) * 0x18;
          lVar16 = 0;
          do {
            if (*(uint *)((longlong)&local_d8 + lVar16 * 4) == uVar2) {
              *(double *)(*(longlong *)(lVar4 + 0x3f8) + lVar14 * 8) =
                   *(double *)
                    (*(longlong *)(lVar4 + 0x408) + (longlong)(int)(uVar3 * 3) * 8 + lVar16 * 8) +
                   *(double *)(*(longlong *)(lVar4 + 0x3f8) + lVar14 * 8);
              lVar6 = *(longlong *)(lVar4 + 0x418);
              lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + uVar20 * 8);
              *(double *)(lVar7 + uVar18 * 0x18) =
                   *(double *)(lVar6 + lVar15) + *(double *)(lVar7 + uVar18 * 0x18);
              *(double *)(lVar7 + 8 + uVar18 * 0x18) =
                   *(double *)(lVar6 + 8 + lVar15) + *(double *)(lVar7 + 8 + uVar18 * 0x18);
              *(double *)(lVar7 + 0x10 + uVar18 * 0x18) =
                   *(double *)(lVar6 + 0x10 + lVar15) + *(double *)(lVar7 + 0x10 + uVar18 * 0x18);
            }
            lVar16 = lVar16 + 1;
            lVar15 = lVar15 + 0x18;
          } while (lVar16 != 3);
          puVar12 = puVar12 + 1;
        } while (puVar12 != local_c8 + (int)lStack_c0);
      }
      dVar28 = *(double *)(*(longlong *)(lVar4 + 0x3f8) + lVar14 * 8);
      if (1e-08 < ABS(dVar28)) {
        lVar15 = *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 8) + 0x10) + (ulonglong)(uVar19 * 8));
        lVar16 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + (ulonglong)(uVar19 * 8));
        lVar6 = (ulonglong)(uVar17 << 3) * 3;
        dVar23 = *(double *)(lVar15 + lVar6);
        dVar22 = *(double *)(lVar15 + 8 + lVar6);
        dVar28 = 1.0 / dVar28;
        dVar21 = *(double *)(lVar15 + 0x10 + lVar6);
        dVar26 = *(double *)(lVar16 + 0x10 + lVar6) * dVar28 - dVar21;
        dVar25 = *(double *)(lVar16 + 8 + lVar6) * dVar28 - dVar22;
        dVar29 = dVar28 * *(double *)(lVar16 + lVar6) - dVar23;
        dVar27 = SQRT(dVar26 * dVar26 + dVar29 * dVar29 + dVar25 * dVar25);
        dVar30 = 0.0;
        dVar28 = 0.0;
        dVar24 = 0.0;
        dVar8 = 0.0;
        if (0.0 < dVar27) {
          dVar24 = 1.0 / dVar27;
          dVar30 = dVar29 * dVar24;
          dVar28 = dVar25 * dVar24;
          dVar24 = dVar26 * dVar24;
          dVar8 = dVar27;
        }
        uVar11 = -(ulonglong)(dVar8 <= (double)param_1[3]);
        dVar27 = (double)(~uVar11 & param_1[3] | (ulonglong)dVar8 & uVar11);
        dVar25 = dVar24 * dVar27 + dVar21;
        dVar28 = dVar28 * dVar27 + dVar22;
        dVar27 = dVar27 * dVar30 + dVar23;
        dVar23 = dVar23 - dVar27;
        uVar11 = -(ulonglong)(-dVar23 <= dVar23);
        if (((1e-08 <= (double)(~uVar11 & (ulonglong)-dVar23 | (ulonglong)dVar23 & uVar11)) ||
            (dVar22 = dVar22 - dVar28, uVar11 = -(ulonglong)(-dVar22 <= dVar22),
            1e-08 <= (double)(~uVar11 & (ulonglong)-dVar22 | (ulonglong)dVar22 & uVar11))) ||
           (dVar21 = dVar21 - dVar25, uVar11 = -(ulonglong)(-dVar21 <= dVar21),
           1e-08 <= (double)(~uVar11 & (ulonglong)-dVar21 | (ulonglong)dVar21 & uVar11))) {
          *(undefined1 *)(*(longlong *)(lVar4 + 0x280) + lVar14) = 1;
          lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x270) + uVar20 * 8);
          *(double *)(lVar4 + uVar18 * 0x18) = dVar27;
          *(double *)(lVar4 + 8 + uVar18 * 0x18) = dVar28;
          *(double *)(lVar4 + 0x10 + uVar18 * 0x18) = dVar25;
        }
      }
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143b0418e:
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b04218 FUN_143b04218 body=282 status=ok
// SIG undefined FUN_143b04218(void)

void FUN_143b04218(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar1 = *param_2;
  lVar5 = (longlong)(int)uVar1;
  lVar2 = *param_1;
  *(undefined1 *)(*(longlong *)(lVar2 + 0x3b8) + lVar5) = 0;
  if ((-1 < lVar5) &&
     (lVar3 = *(longlong *)(lVar2 + 8),
     (int)uVar1 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                           (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar6 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
               (ulonglong)((uVar1 & 0x1ff) << 4));
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x270) + (uVar6 >> 0x29) * 8);
      uVar7 = uVar6 >> 0x20 & 0x1ff;
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x270) + (uVar6 >> 9 & 0x7fffff) * 8);
      uVar6 = uVar6 & 0x1ff;
      dVar8 = *(double *)(lVar3 + uVar7 * 0x18) - *(double *)(lVar4 + uVar6 * 0x18);
      dVar9 = *(double *)(lVar3 + 8 + uVar7 * 0x18) - *(double *)(lVar4 + 8 + uVar6 * 0x18);
      dVar10 = *(double *)(lVar3 + 0x10 + uVar7 * 0x18) - *(double *)(lVar4 + 0x10 + uVar6 * 0x18);
      dVar8 = SQRT(dVar10 * dVar10 + dVar8 * dVar8 + dVar9 * dVar9);
      if ((dVar8 < *(double *)(lVar2 + 0x168)) ||
         (*(double *)(lVar2 + 0x170) <= dVar8 && dVar8 != *(double *)(lVar2 + 0x170))) {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x3b8) + lVar5) = 1;
      }
    }
  }
  return;
}



// FUNCTION 143b04332 FUN_143b04332 body=301 status=ok
// SIG undefined FUN_143b04332(void)

void FUN_143b04332(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  iVar1 = *param_2;
  dVar11 = *(double *)*param_1;
  iVar10 = (iVar1 + 1) * *(int *)param_1[1];
  if (*(int *)param_1[2] <= iVar10) {
    iVar10 = *(int *)param_1[2];
  }
  iVar8 = *(int *)param_1[1] * iVar1;
  if (iVar8 < iVar10) {
    lVar2 = *(longlong *)param_1[3];
    uVar9 = (ulonglong)iVar8;
    do {
      dVar12 = 0.0;
      if (((*(char *)(*(longlong *)(lVar2 + 0x280) + uVar9) == '\x01') && (-1 < (longlong)uVar9)) &&
         (lVar3 = *(longlong *)(lVar2 + 8),
         (longlong)uVar9 < (longlong)(*(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)))) {
        uVar6 = uVar9 >> 9;
        uVar7 = (uint)uVar9 & 0x1ff;
        if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar6 * 8) +
                               (ulonglong)uVar7 * 2) - 1U) < 0xfffe) {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar6 * 8);
          lVar5 = (ulonglong)(uVar7 << 3) * 3;
          lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x270) + uVar6 * 8);
          dVar12 = *(double *)(lVar4 + lVar5) - *(double *)(lVar3 + lVar5);
          dVar13 = *(double *)(lVar4 + 8 + lVar5) - *(double *)(lVar3 + 8 + lVar5);
          dVar14 = *(double *)(lVar4 + 0x10 + lVar5) - *(double *)(lVar3 + 0x10 + lVar5);
          dVar12 = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
        }
      }
      if (dVar12 <= dVar11) {
        dVar12 = dVar11;
      }
      dVar11 = dVar12;
      uVar9 = uVar9 + 1;
    } while ((longlong)iVar10 != uVar9);
  }
  *(double *)(*(longlong *)param_1[5] + (longlong)iVar1 * 8) = dVar11;
  return;
}



// FUNCTION 143b04460 FUN_143b04460 body=208 status=ok
// SIG undefined FUN_143b04460(void)

void FUN_143b04460(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  if (-1 < (int)uVar1) {
    lVar2 = *param_1;
    lVar3 = *(longlong *)(lVar2 + 8);
    if (((int)uVar1 < *(int *)(lVar3 + 0x1d0) * 0x200 + *(int *)(lVar3 + 0x1d4)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8) +
                           (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      if (*(char *)(lVar2 + 200) == '\0') {
        local_38[0] = 0;
        local_30 = 0;
        local_28 = 0xffffffff;
      }
      else {
        FUN_1482b3344(lVar2 + 0x10,local_38,uVar1);
        if ((local_38[0] & 1) != 0) goto LAB_143b044ba;
      }
      cVar4 = FUN_1482cf602(lVar2,uVar1);
      if (cVar4 != '\0') {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x3b8) + (ulonglong)uVar1) = 1;
      }
    }
  }
LAB_143b044ba:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b045b4 FUN_143b045b4 body=29 status=ok
// SIG undefined FUN_143b045b4(void)

undefined8 FUN_143b045b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b046c0 FUN_143b046c0 body=250 status=ok
// SIG undefined FUN_143b046c0(void)

void FUN_143b046c0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char *pcVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar9 = (longlong)*param_2;
  lVar3 = *param_1;
  if ((*param_2 % *(int *)((longlong)param_1 + 0x24) == 0) &&
     (pcVar4 = (char *)param_1[6], pcVar4 != (char *)0x0)) {
    if (*pcVar4 == '\0') {
      pcVar5 = *(code **)(pcVar4 + 0x70);
      plVar8 = (longlong *)(pcVar4 + 0x90);
      if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(pcVar4 + 0x80);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar6 = (*pcVar5)(uVar7);
      *pcVar4 = cVar6;
      if (cVar6 == '\0') goto LAB_143b0472f;
    }
    *(undefined1 *)param_1[3] = 1;
  }
LAB_143b0472f:
  if ((*(char *)param_1[3] == '\0') && (-1 < *(int *)(*(longlong *)(lVar3 + 0x58) + lVar9 * 0x28)))
  {
    lVar1 = *(longlong *)(lVar3 + 0x58) + lVar9 * 0x28;
    if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
      FUN_1482d4994(lVar3,&local_48,lVar1,param_1[2]);
    }
    else {
      FUN_1482d4f6c(lVar3,&local_48,lVar1,param_1[2]);
    }
    lVar3 = *(longlong *)param_1[1];
    *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) = local_38;
    puVar2 = (undefined4 *)(lVar3 + lVar9 * 0x18);
    *puVar2 = local_48;
    puVar2[1] = uStack_44;
    puVar2[2] = uStack_40;
    puVar2[3] = uStack_3c;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b047bc FUN_143b047bc body=1093 status=ok
// SIG undefined FUN_143b047bc(void)

void FUN_143b047bc(longlong *param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_168 [36];
  float local_144;
  double local_140;
  double local_138;
  undefined8 uStack_130;
  float local_124 [3];
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *param_2;
  lVar3 = *param_1;
  if (((int)uVar2 % *(int *)((longlong)param_1 + 0x2c) == 0) &&
     (pcVar4 = (char *)param_1[7], pcVar4 != (char *)0x0)) {
    if (*pcVar4 == '\0') {
      pcVar5 = *(code **)(pcVar4 + 0x70);
      plVar9 = (longlong *)(pcVar4 + 0x90);
      if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
        plVar9 = *(longlong **)(pcVar4 + 0x80);
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar7 = (*pcVar5)(uVar8);
      *pcVar4 = cVar7;
      if (cVar7 == '\0') goto LAB_143b0488c;
    }
    *(undefined1 *)param_1[4] = 1;
  }
LAB_143b0488c:
  if (*(char *)param_1[4] == '\0') {
    lVar11 = *(longlong *)param_1[2];
    lVar10 = (longlong)
             *(int *)(*(longlong *)(*(longlong *)(lVar11 + 0x60) + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
    lVar6 = *(longlong *)(lVar3 + 0x58);
    if (-1 < *(int *)(lVar6 + lVar10 * 0x28)) {
      if ((char)param_1[6] == '\0') {
        FUN_1482d5264();
      }
      else {
        FUN_1482d58ee(lVar3,&local_118,lVar6 + lVar10 * 0x28,param_1[3]);
      }
      local_140 = local_118;
      local_138 = local_100;
      uStack_130 = 0;
      local_144 = (float)(local_d8 * local_100 - local_f0 * local_e8);
      lVar3 = *(longlong *)(lVar11 + 0x48);
      lVar11 = 0;
      do {
        uVar12 = uVar2 * 3 + (int)lVar11;
        local_124[lVar11] =
             *(float *)(*(longlong *)(lVar3 + (ulonglong)(uVar12 >> 9) * 8) +
                       (ulonglong)(uVar12 & 0x1ff) * 4);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      lVar3 = *(longlong *)param_1[1];
      lVar11 = (longlong)(int)uVar2 * 0xc;
      *(float *)(lVar3 + lVar11) =
           (float)(local_e0 * local_100 + -local_e8 * local_f8) * local_124[2] +
           ((float)(local_d8 * local_f8 + -local_e0 * local_f0) * local_124[0] -
           local_144 * local_124[1]);
      *(float *)(lVar3 + 4 + lVar11) =
           ((float)(local_d8 * local_118 + local_108 * -local_e8) * local_124[1] -
           (float)(local_d8 * local_110 - local_108 * local_e0) * local_124[0]) -
           (float)(local_e0 * local_118 - local_e8 * local_110) * local_124[2];
      *(float *)(lVar3 + 8 + lVar11) =
           (float)(local_f8 * local_118 + -local_100 * local_110) * local_124[2] +
           ((float)(local_110 * local_f0 + -local_f8 * local_108) * local_124[0] -
           (float)(local_f0 * local_118 - local_108 * local_100) * local_124[1]);
      lVar3 = *(longlong *)param_1[1];
      fVar13 = *(float *)(lVar3 + lVar11);
      fVar14 = *(float *)(lVar3 + 4 + lVar11);
      fVar1 = *(float *)(lVar3 + 8 + lVar11);
      fVar15 = SQRT(fVar1 * fVar1 + fVar13 * fVar13 + fVar14 * fVar14);
      fVar16 = 1.0 / fVar15;
      if (0.0 < fVar15) {
        fVar13 = fVar13 * fVar16;
        fVar14 = fVar14 * fVar16;
      }
      else {
        fVar13 = 0.0;
        fVar14 = 0.0;
      }
      *(float *)(lVar3 + lVar11) = fVar13;
      *(float *)(lVar3 + 4 + lVar11) = fVar14;
      *(uint *)(lVar3 + 8 + lVar11) = -(uint)(0.0 < fVar15) & (uint)(fVar1 * fVar16);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b04c02 FUN_143b04c02 body=892 status=ok
// SIG undefined FUN_143b04c02(void)

void FUN_143b04c02(longlong *param_1,int *param_2)

{
  float fVar1;
  longlong lVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar9 = (longlong)*param_2;
  lVar2 = *param_1;
  if ((*param_2 % *(int *)((longlong)param_1 + 0x2c) == 0) &&
     (pcVar3 = (char *)param_1[7], pcVar3 != (char *)0x0)) {
    if (*pcVar3 == '\0') {
      pcVar4 = *(code **)(pcVar3 + 0x70);
      plVar8 = (longlong *)(pcVar3 + 0x90);
      if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
        plVar8 = *(longlong **)(pcVar3 + 0x80);
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar6 = (*pcVar4)(uVar7);
      *pcVar3 = cVar6;
      if (cVar6 == '\0') goto LAB_143b04cb8;
    }
    *(undefined1 *)param_1[4] = 1;
  }
LAB_143b04cb8:
  if ((*(char *)param_1[4] == '\0') &&
     (lVar5 = *(longlong *)(lVar2 + 0x58), -1 < *(int *)(lVar5 + lVar9 * 0x28))) {
    if (*(char *)((longlong)param_1 + 0x34) == '\0') {
      FUN_1482d5264();
    }
    else {
      FUN_1482d58ee(lVar2,&local_f8,lVar5 + lVar9 * 0x28,param_1[3]);
    }
    lVar2 = *(longlong *)param_1[2];
    lVar9 = lVar9 * 0xc;
    fVar10 = *(float *)(lVar2 + lVar9);
    fVar11 = *(float *)(lVar2 + 4 + lVar9);
    fVar1 = *(float *)(lVar2 + 8 + lVar9);
    lVar2 = *(longlong *)param_1[1];
    *(float *)(lVar2 + lVar9) =
         (float)(local_c0 * local_e0 - local_d8 * local_c8) * fVar1 +
         ((float)(local_b8 * local_d8 - local_d0 * local_c0) * fVar10 -
         (float)(local_b8 * local_e0 - local_d0 * local_c8) * fVar11);
    *(float *)(lVar2 + 4 + lVar9) =
         ((float)(local_b8 * local_f8 - local_e8 * local_c8) * fVar11 -
         (float)(local_b8 * local_f0 - local_e8 * local_c0) * fVar10) -
         (float)(local_c0 * local_f8 - local_c8 * local_f0) * fVar1;
    *(float *)(lVar2 + 8 + lVar9) =
         (float)(local_d8 * local_f8 - local_f0 * local_e0) * fVar1 +
         ((float)(local_d0 * local_f0 - local_e8 * local_d8) * fVar10 -
         (float)(local_d0 * local_f8 - local_e8 * local_e0) * fVar11);
    lVar2 = *(longlong *)param_1[1];
    fVar10 = *(float *)(lVar2 + lVar9);
    fVar11 = *(float *)(lVar2 + 4 + lVar9);
    fVar1 = *(float *)(lVar2 + 8 + lVar9);
    fVar12 = SQRT(fVar1 * fVar1 + fVar10 * fVar10 + fVar11 * fVar11);
    fVar13 = 1.0 / fVar12;
    if (0.0 < fVar12) {
      fVar10 = fVar10 * fVar13;
      fVar11 = fVar11 * fVar13;
    }
    else {
      fVar10 = 0.0;
      fVar11 = 0.0;
    }
    *(float *)(lVar2 + lVar9) = fVar10;
    *(float *)(lVar2 + 4 + lVar9) = fVar11;
    *(uint *)(lVar2 + 8 + lVar9) = -(uint)(0.0 < fVar12) & (uint)(fVar1 * fVar13);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b04f80 FUN_143b04f80 body=48 status=ok
// SIG undefined FUN_143b04f80(void)

bool FUN_143b04f80(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *param_3;
  iVar2 = FUN_146bc96d4(*param_1,*param_2);
  iVar3 = FUN_146bc96d4(*param_1,uVar1);
  return iVar2 == iVar3;
}



// FUNCTION 143b04fda FUN_143b04fda body=29 status=ok
// SIG undefined FUN_143b04fda(void)

undefined8 FUN_143b04fda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b04ff8 FUN_143b04ff8 body=154 status=ok
// SIG undefined FUN_143b04ff8(void)

ulonglong FUN_143b04ff8(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  iVar4 = FUN_146bc96d4(*param_1,uVar2);
  iVar5 = FUN_146bc96d4(*param_1,uVar1);
  if (iVar4 == iVar5) {
    uVar7 = *param_1;
    uVar6 = FUN_146c08e54(uVar7,uVar2,uVar1);
    plVar3 = (longlong *)param_1[1];
    uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar9 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar3[8];
      }
      iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar3[9] - 1U & uVar6) * 4);
      if (iVar4 != -1) {
        do {
          bVar10 = *(uint *)(*plVar3 + (longlong)iVar4 * 0xc) == uVar6;
          uVar8 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),!bVar10);
          if (bVar10) break;
          iVar4 = *(int *)(*plVar3 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143b050bc FUN_143b050bc body=29 status=ok
// SIG undefined FUN_143b050bc(void)

undefined8 FUN_143b050bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b050da FUN_143b050da body=453 status=ok
// SIG undefined FUN_143b050da(void)

void FUN_143b050da(longlong *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *param_2;
  lVar6 = *(longlong *)(*param_1 + 0x2c8);
  lVar11 = (longlong)iVar3 * 0x20;
  lVar16 = (longlong)*(int *)(lVar6 + 0x18 + lVar11);
  if (0 < lVar16) {
    plVar15 = (longlong *)(lVar6 + lVar11);
    lVar6 = *(longlong *)(*param_1 + 0x2e8);
    uVar4 = *(uint *)(plVar15 + 1);
    lVar11 = 0;
    do {
      plVar10 = (longlong *)(lVar11 * 0x20 + *(longlong *)((longlong)iVar3 * 0x10 + lVar6));
      local_88 = 0.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
      if (0 < (int)uVar4) {
        local_78 = 0.0;
        lVar12 = 0x10;
        dStack_80 = 0.0;
        local_88 = 0.0;
        uVar13 = 0;
        do {
          uVar5 = *(uint *)(*plVar15 + uVar13 * 4);
          lVar7 = *(longlong *)
                   (*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
          uVar14 = (ulonglong)(uVar5 & 0x1ff);
          lVar8 = plVar10[2];
          dVar2 = *(double *)(*plVar10 + uVar13 * 8);
          local_78 = local_78 +
                     (*(double *)(lVar7 + 0x10 + uVar14 * 0x18) + *(double *)(lVar8 + lVar12)) *
                     dVar2;
          dStack_80 = dStack_80 +
                      (*(double *)(lVar7 + 8 + uVar14 * 0x18) + *(double *)(lVar8 + -8 + lVar12)) *
                      dVar2;
          local_88 = local_88 +
                     (*(double *)(lVar7 + uVar14 * 0x18) + *(double *)(lVar8 + -0x10 + lVar12)) *
                     dVar2;
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x18;
        } while (uVar4 != uVar13);
      }
      lVar12 = *(longlong *)param_1[1];
      uVar5 = *(uint *)(plVar15[2] + lVar11 * 4);
      cVar9 = FUN_146bfed03(&local_88);
      if (cVar9 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        uVar13 = (ulonglong)(uVar5 & 0x1ff);
        *(double *)(lVar7 + 0x10 + uVar13 * 0x18) = local_78;
        pdVar1 = (double *)(lVar7 + uVar13 * 0x18);
        *pdVar1 = local_88;
        pdVar1[1] = dStack_80;
        if (*(char *)(lVar12 + 0x210) == '\x01') {
          LOCK();
          *(int *)(lVar12 + 0x214) = *(int *)(lVar12 + 0x214) + 1;
          UNLOCK();
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar16);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b052a0 FUN_143b052a0 body=507 status=ok
// SIG undefined FUN_143b052a0(void)

void * FUN_143b052a0(void *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined8 *local_88;
  void **local_78;
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  code *local_58;
  void ***local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80;
  *(int *)((longlong)param_1 + 0x18) = iVar1 * 0x200 + iVar2;
  uVar7 = iVar1 * 0x200 + iVar2 + 0x1f;
  if (uVar7 < 0x20) goto LAB_143b0538e;
  pvVar5 = param_1;
  if (uVar7 < 0xa0) {
LAB_143b05348:
    uVar7 = uVar7 >> 3 & 0xfffffffc;
  }
  else {
    FUN_1446efa72((longlong)param_1 + 0x10,0,uVar7 >> 5,4);
    *(uint *)((longlong)param_1 + 0x1c) = uVar7 & 0xffffffe0;
    pvVar5 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar5 = param_1;
    }
    if (uVar7 < 0x120) goto LAB_143b05348;
    uVar7 = (uVar7 >> 5) << 2;
  }
  memset(pvVar5,0,(ulonglong)uVar7);
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    pvVar5 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar5 = param_1;
    }
    bVar4 = -(char)(iVar1 % 0x20);
    *(uint *)((longlong)pvVar5 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)((longlong)pvVar5 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
         (bVar4 & 0x1f);
  }
LAB_143b0538e:
  puVar3 = (undefined8 *)FUN_14001cc68();
  *puVar3 = 0;
  *(undefined8 **)((longlong)param_1 + 0x28) = puVar3;
  *(undefined8 **)((longlong)param_1 + 0x20) = puVar3;
  uVar7 = *param_2 * 0x200 + param_2[1];
  local_68 = (void *)0x0;
  uStack_60 = (ulonglong)uVar7;
  if (uVar7 != 0) {
    FUN_1446f48e2(&local_68);
  }
  memset(local_68,0,(longlong)(int)uVar7 << 2);
  local_78 = &local_68;
  local_50 = &local_78;
  local_88 = &local_48;
  local_48 = 0;
  local_40 = 0;
  local_58 = FUN_143b05598;
  local_90 = 0;
  local_70 = param_3;
  FUN_1401f8d10(L"ParallelFor Task",uVar7,1);
  if (0 < (int)uVar7) {
    uVar6 = 0;
    do {
      if (*(int *)((longlong)local_68 + uVar6 * 4) == 1) {
        FUN_143b05512(param_1,uVar6 & 0xffffffff);
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143b0549c FUN_143b0549c body=117 status=ok
// SIG undefined FUN_143b0549c(void)

bool FUN_143b0549c(longlong param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  
  lVar3 = **(longlong **)(param_1 + 0x28);
  if (lVar3 == 0) {
    *param_2 = -1;
  }
  else {
    *param_2 = *(int *)(lVar3 + 8);
    lVar5 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar3;
    *(undefined4 *)(lVar3 + 8) = 0;
    if (lVar5 != 0) {
      FUN_1400020a8();
    }
    iVar2 = *param_2;
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar5 = param_1;
    }
    iVar6 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    bVar4 = (byte)iVar2 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  return lVar3 != 0;
}



// FUNCTION 143b05512 FUN_143b05512 body=133 status=ok
// SIG undefined FUN_143b05512(void)

void FUN_143b05512(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  lVar3 = lVar6;
  if (lVar6 == 0) {
    lVar3 = param_1;
  }
  uVar5 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((*(uint *)(lVar3 + (longlong)((int)uVar5 >> 5) * 4) >> (param_2 & 0x1f) & 1) == 0) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar4 = 0;
    *(uint *)(puVar4 + 1) = param_2;
    if (puVar4 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x20) = puVar4;
      *puVar2 = puVar4;
      lVar6 = *(longlong *)(param_1 + 0x10);
    }
    if (lVar6 != 0) {
      param_1 = lVar6;
    }
    puVar1 = (uint *)(param_1 + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  }
  return;
}



// FUNCTION 143b05598 FUN_143b05598 body=90 status=ok
// SIG undefined FUN_143b05598(void)

void FUN_143b05598(undefined8 *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = *param_2;
  lVar2 = (longlong)local_1c;
  cVar1 = (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
  if (cVar1 != '\0') {
    *(undefined4 *)(*(longlong *)*param_1 + lVar2 * 4) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b055f4 FUN_143b055f4 body=125 status=ok
// SIG undefined FUN_143b055f4(void)

bool FUN_143b055f4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  double extraout_XMM0_Qa;
  
  if ((-1 < (int)param_2) &&
     (lVar1 = *param_1, (int)param_2 < *(int *)(lVar1 + 0x158) * 0x200 + *(int *)(lVar1 + 0x15c))) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar1 + 0x160) + (ulonglong)(param_2 >> 9) * 8) +
                            (ulonglong)(param_2 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x148) + (ulonglong)(param_2 >> 9) * 8) + 0xc +
                (ulonglong)((param_2 & 0x1ff) << 4)) != -1)) {
      FUN_1482e4776();
      return extraout_XMM0_Qa < (double)param_1[1];
    }
  }
  return false;
}



// FUNCTION 143b05672 FUN_143b05672 body=127 status=ok
// SIG undefined FUN_143b05672(void)

bool FUN_143b05672(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  double extraout_XMM0_Qa;
  
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) &&
     (lVar2 = *param_1, (int)uVar1 < *(int *)(lVar2 + 0x158) * 0x200 + *(int *)(lVar2 + 0x15c))) {
    if (((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar2 + 0x160) + (ulonglong)(uVar1 >> 9) * 8) +
                            (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) &&
       (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) + 0xc +
                (ulonglong)((uVar1 & 0x1ff) << 4)) != -1)) {
      FUN_1482e4776();
      return extraout_XMM0_Qa < (double)param_1[1];
    }
  }
  return false;
}



// FUNCTION 143b056f1 FUN_143b056f1 body=61 status=ok
// SIG undefined FUN_143b056f1(void)

void FUN_143b056f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143b0572e FUN_143b0572e body=14 status=ok
// SIG undefined FUN_143b0572e(void)

void FUN_143b0572e(void *param_1,uint param_2)

{
  memset(param_1,0,(ulonglong)param_2 << 5);
  return;
}



// FUNCTION 143b0573c FUN_143b0573c body=243 status=ok
// SIG undefined FUN_143b0573c(void)

void FUN_143b0573c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if (-1 < (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = (ulonglong)uVar1;
      }
    }
    else {
      uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x400) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar2 >> 5)) {
      uVar3 = uVar2 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar3);
}



// FUNCTION 143b05830 FUN_143b05830 body=327 status=ok
// SIG undefined FUN_143b05830(void)

void FUN_143b05830(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = (double *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(*param_2 >> 9) * 8);
  uVar7 = (ulonglong)(*param_2 & 0x1ff);
  dVar8 = *(double *)(lVar2 + 0x10 + uVar7 * 0x18) - pdVar1[2];
  dVar5 = *(double *)(lVar2 + 8 + uVar7 * 0x18) - pdVar1[1];
  dVar11 = *(double *)(lVar2 + uVar7 * 0x18) - *pdVar1;
  dVar6 = SQRT(dVar8 * dVar8 + dVar11 * dVar11 + dVar5 * dVar5);
  dVar9 = 0.0;
  dVar10 = 1.0 / dVar6;
  dVar11 = (double)(-(ulonglong)(0.0 < dVar6) & (ulonglong)(dVar11 * dVar10));
  if (0.0 < dVar6) {
    dVar8 = dVar8 * dVar10;
    dVar9 = dVar5 * dVar10;
  }
  else {
    dVar8 = 0.0;
  }
  local_28 = pdVar1[2];
  dVar6 = *pdVar1;
  dVar10 = pdVar1[1];
  pdVar1 = (double *)param_1[2];
  pdVar3 = (double *)param_1[3];
  dVar5 = pdVar1[2] * dVar8 + *pdVar1 * dVar11 + pdVar1[1] * dVar9;
  if (*pdVar3 <= dVar5 && dVar5 != *pdVar3) {
    *pdVar3 = dVar5;
    puVar4 = (undefined4 *)param_1[4];
    *(double *)(puVar4 + 4) = local_28;
    local_38._0_4_ = SUB84(dVar6,0);
    local_38._4_4_ = (undefined4)((ulonglong)dVar6 >> 0x20);
    uStack_30._0_4_ = SUB84(dVar10,0);
    uStack_30._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
    *puVar4 = (undefined4)local_38;
    puVar4[1] = local_38._4_4_;
    puVar4[2] = (undefined4)uStack_30;
    puVar4[3] = uStack_30._4_4_;
    *(double *)(puVar4 + 6) = dVar11;
    *(double *)(puVar4 + 8) = dVar9;
    *(double *)(puVar4 + 10) = dVar8;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = dVar6;
  uStack_30 = dVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b05978 FUN_143b05978 body=262 status=ok
// SIG undefined FUN_143b05978(void)

void FUN_143b05978(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143b05a7e FUN_143b05a7e body=262 status=ok
// SIG undefined FUN_143b05a7e(void)

void FUN_143b05a7e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143b05b84 FUN_143b05b84 body=37 status=ok
// SIG undefined FUN_143b05b84(void)

bool FUN_143b05b84(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_146bc96d4(*param_1,*param_2);
  return iVar1 == *(int *)(param_1[1] + 0xa0);
}



// FUNCTION 143b05ba9 FUN_143b05ba9 body=102 status=ok
// SIG undefined FUN_143b05ba9(void)

void FUN_143b05ba9(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ae72898;
  local_14 = 0xb;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146485824(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b05c10 FUN_143b05c10 body=161 status=ok
// SIG undefined FUN_143b05c10(void)

void FUN_143b05c10(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = param_2[2];
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = *param_2;
  dVar3 = param_2[1];
  if (1.0 <= dVar3) {
    dVar3 = 1.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar5 = dVar3 + dVar2 + dVar1;
  dVar4 = 1.0 / dVar5;
  if (1e-08 < dVar5) {
    dVar2 = dVar2 * dVar4;
    dVar3 = dVar3 * dVar4;
  }
  else {
    dVar2 = 0.3333333333333333;
    dVar3 = 0.3333333333333333;
  }
  *param_1 = dVar2;
  param_1[1] = dVar3;
  param_1[2] = (double)(~-(ulonglong)(1e-08 < dVar5) & 0x3fd5555555555555 |
                       (ulonglong)(dVar1 * dVar4) & -(ulonglong)(1e-08 < dVar5));
  return;
}



// FUNCTION 143b05cb1 FUN_143b05cb1 body=233 status=ok
// SIG undefined FUN_143b05cb1(void)

void FUN_143b05cb1(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [16];
  longlong local_50;
  undefined4 local_48;
  uint local_44;
  undefined8 local_40;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14627166e(&local_70,param_1);
  FUN_145be27ca(param_1,param_2);
  FUN_145be27ca(param_2,&local_70);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  if (local_64 != 0) {
    FUN_1447a08a2(&local_70,0);
  }
  local_40 = 0xffffffff;
  local_48 = 0;
  if (0x80 < local_44) {
    local_44 = 0x80;
    FUN_1446efbd8(local_60,0);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b05d9b FUN_143b05d9b body=236 status=ok
// SIG undefined FUN_143b05d9b(void)

void FUN_143b05d9b(void **param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = (ulonglong)uVar1;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar2);
    }
  }
  else {
    uStack_40 = (ulonglong)uVar1;
    uVar3 = 0;
    FUN_1446f48e2(&local_48);
    memset(local_48,0,uVar2 * 4);
    do {
      *(undefined4 *)((longlong)local_48 + uVar3 * 4) =
           *(undefined4 *)((longlong)*param_1 + (longlong)((param_2 + (int)uVar3) % (int)uVar1) * 4)
      ;
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  if (&local_48 == param_1) {
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_1 = local_48;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b05e8a FUN_143b05e8a body=4062 status=ok
// SIG undefined FUN_143b05e8a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b05e8a(longlong *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 (*pauVar36) [16];
  uint uVar37;
  longlong lVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  bool bVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined8 uVar46;
  double dVar47;
  double dVar48;
  undefined1 auStack_548 [32];
  int local_528;
  uint local_524;
  ulonglong local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_498;
  undefined4 local_490;
  undefined8 local_488;
  undefined4 local_480;
  longlong local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  longlong local_428 [5];
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3e8;
  longlong lStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_548;
  local_428[2] = 0;
  local_428[3] = 0;
  local_428[0] = 0;
  local_428[1] = 0;
  FUN_1400bd09c(local_428 + 2,*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),1);
  FUN_14051b394(local_428,*(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144),1);
  lVar21 = *param_1;
  uVar23 = *(int *)(lVar21 + 0x140) * 0x200 + *(int *)(lVar21 + 0x144);
  uVar37 = 0;
  if ((uVar23 != 0) &&
     (uVar37 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x148) - 1U))) {
    uVar12 = 1;
    uVar18 = 1;
    if (1 < (int)uVar23) {
      uVar12 = uVar23;
    }
    do {
      uVar37 = uVar12;
      if (uVar12 == uVar18) break;
      uVar17 = uVar18 >> 9;
      uVar26 = uVar18 & 0x1ff;
      uVar37 = uVar18;
      uVar18 = uVar18 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x148))[uVar17] +
                                         (ulonglong)uVar26 * 2) - 1U));
  }
  if (uVar37 != uVar23) {
    do {
      lVar24 = *param_1;
      lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x130) + (ulonglong)(uVar37 >> 9) * 8);
      uVar27 = (ulonglong)(uVar37 & 0x1ff);
      uVar12 = *(uint *)(lVar31 + uVar27 * 0xc);
      lVar38 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      uVar28 = (ulonglong)uVar12 & 0x1ff;
      uVar46 = *(undefined8 *)(lVar38 + 0x10 + uVar28 * 0x18);
      local_3d8 = (undefined4)uVar46;
      uStack_3d4 = (undefined4)((ulonglong)uVar46 >> 0x20);
      plVar14 = (longlong *)(lVar38 + uVar28 * 0x18);
      local_3e8 = *plVar14;
      lStack_3e0 = plVar14[1];
      uVar12 = *(uint *)(lVar31 + 4 + uVar27 * 0xc);
      lVar38 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      uVar28 = (ulonglong)uVar12 & 0x1ff;
      local_3f8 = *(undefined8 *)(lVar38 + 0x10 + uVar28 * 0x18);
      puVar1 = (undefined8 *)(lVar38 + uVar28 * 0x18);
      local_428[4] = *puVar1;
      uStack_400 = puVar1[1];
      uVar12 = *(uint *)(lVar31 + 8 + uVar27 * 0xc);
      lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      uVar28 = (ulonglong)uVar12 & 0x1ff;
      local_438 = *(undefined8 *)(lVar24 + 0x10 + uVar28 * 0x18);
      puVar1 = (undefined8 *)(lVar24 + uVar28 * 0x18);
      local_448 = *puVar1;
      uStack_440 = puVar1[1];
      dVar43 = (double)FUN_14831c0ee(&local_3e8,local_428 + 4,&local_448);
      dVar47 = 1.0;
      if (1.0 / dVar43 <= 1.0) {
        dVar47 = 1.0 / dVar43;
      }
      lVar24 = (longlong)(int)uVar37;
      *(ulonglong *)(local_428[2] + lVar24 * 8) =
           -(ulonglong)(1.0 < dVar43) & (ulonglong)dVar47 |
           ~-(ulonglong)(1.0 < dVar43) & (ulonglong)dVar43;
      FUN_146baf581(&local_468,&local_3e8,local_428 + 4,&local_448);
      *(undefined8 *)(local_428[0] + 0x10 + lVar24 * 0x18) = local_458;
      puVar1 = (undefined8 *)(local_428[0] + lVar24 * 0x18);
      *puVar1 = local_468;
      puVar1[1] = uStack_460;
      uVar12 = uVar37 + 1;
      if ((int)(uVar37 + 1) < (int)uVar23) {
        uVar12 = uVar23;
      }
      do {
        uVar18 = uVar12;
        if (uVar12 - 1 == uVar37) break;
        uVar37 = uVar37 + 1;
        uVar18 = uVar37;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar21 + 0x148) +
                                             (ulonglong)(uVar37 >> 9) * 8) +
                                           (ulonglong)(uVar37 & 0x1ff) * 2) - 1U));
      uVar37 = uVar18;
    } while (uVar37 != uVar23);
    lVar21 = *param_1;
  }
  local_478 = 0;
  uStack_470 = 0;
  uVar23 = *(int *)(lVar21 + 0x1d0) * 0x200 + *(int *)(lVar21 + 0x1d4);
  uVar37 = 0;
  if ((uVar23 != 0) &&
     (uVar37 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar21 + 0x1d8) - 1U))) {
    uVar12 = 1;
    uVar18 = 1;
    if (1 < (int)uVar23) {
      uVar12 = uVar23;
    }
    do {
      uVar37 = uVar12;
      if (uVar12 == uVar18) break;
      uVar17 = uVar18 >> 9;
      uVar26 = uVar18 & 0x1ff;
      uVar37 = uVar18;
      uVar18 = uVar18 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar21 + 0x1d8))[uVar17] +
                                         (ulonglong)uVar26 * 2) - 1U));
  }
  if (uVar37 != uVar23) {
    do {
      lVar31 = local_428[2];
      lVar24 = *(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(uVar37 >> 9) * 8);
      if (*(int *)(lVar24 + 0xc + (ulonglong)((uVar37 & 0x1ff) << 4)) != -1) {
        lVar24 = *(longlong *)(lVar24 + 8 + (ulonglong)((uVar37 & 0x1ff) << 4));
        lVar38 = (longlong)(int)lVar24;
        dVar47 = *(double *)(local_428[2] + lVar38 * 8);
        lVar24 = lVar24 >> 0x20;
        if (((0.01 <= dVar47) ||
            (pdVar2 = (double *)(local_428[2] + lVar24 * 8), 0.01 < *pdVar2 || *pdVar2 == 0.01)) &&
           (((char)param_1[3] != '\x01' || (cVar11 = FUN_146c13702(), cVar11 == '\0')))) {
          dVar43 = *(double *)(lVar31 + lVar24 * 8);
          dVar3 = *(double *)(local_428[0] + lVar38 * 0x18);
          dVar4 = *(double *)(local_428[0] + 8 + lVar38 * 0x18);
          dVar5 = *(double *)(local_428[0] + lVar24 * 0x18);
          dVar44 = *(double *)(local_428[0] + 8 + lVar24 * 0x18);
          dVar45 = *(double *)(local_428[0] + 0x10 + lVar38 * 0x18);
          dVar48 = *(double *)(local_428[0] + 0x10 + lVar24 * 0x18);
          dVar6 = dVar45 * dVar48 + dVar3 * dVar5 + dVar4 * dVar44;
          if (dVar6 < (double)param_1[2] || dVar6 == (double)param_1[2]) {
            if ((dVar3 == DAT_14c8464e0) && (!NAN(dVar3) && !NAN(DAT_14c8464e0))) {
              if ((dVar4 == DAT_14c8464e8) && (!NAN(dVar4) && !NAN(DAT_14c8464e8))) {
                if ((dVar45 == DAT_14c8464f0) && (!NAN(dVar45) && !NAN(DAT_14c8464f0)))
                goto LAB_143b0633d;
              }
            }
            if ((dVar5 != DAT_14c8464e0) ||
               ((((NAN(dVar5) || NAN(DAT_14c8464e0) || (dVar44 != DAT_14c8464e8)) ||
                 (NAN(dVar44) || NAN(DAT_14c8464e8))) ||
                ((dVar48 != DAT_14c8464f0 || (NAN(dVar48) || NAN(DAT_14c8464f0)))))))
            goto LAB_143b06396;
          }
LAB_143b0633d:
          lVar24 = (longlong)(int)uStack_470;
          uVar12 = (int)uStack_470 + 1;
          uStack_470 = CONCAT44(uStack_470._4_4_,uVar12);
          if (uStack_470._4_4_ < uVar12) {
            FUN_143b0c084(&local_478);
          }
          uVar28 = -(ulonglong)(dVar47 <= dVar43);
          *(uint *)(local_478 + lVar24 * 0x10) = uVar37;
          *(ulonglong *)(local_478 + 8 + lVar24 * 0x10) =
               uVar28 & (ulonglong)dVar47 | ~uVar28 & (ulonglong)dVar43;
        }
      }
LAB_143b06396:
      lVar24 = local_478;
      uVar12 = uVar37 + 1;
      if ((int)(uVar37 + 1) < (int)uVar23) {
        uVar12 = uVar23;
      }
      do {
        uVar18 = uVar12;
        if (uVar12 - 1 == uVar37) break;
        uVar37 = uVar37 + 1;
        uVar18 = uVar37;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar21 + 0x1d8) +
                                             (ulonglong)(uVar37 >> 9) * 8) +
                                           (ulonglong)(uVar37 & 0x1ff) * 2) - 1U));
      uVar37 = uVar18;
    } while (uVar37 != uVar23);
    iVar33 = (int)uStack_470;
    lVar21 = (longlong)(int)uStack_470;
    if (1 < lVar21) {
      memset(&local_3d8,0,0x2f0);
      local_3e8 = lVar24;
      lStack_3e0 = lVar21 * 0x10 + lVar24 + -0x10;
      fVar42 = logf((float)iVar33);
      local_3d8 = (int)(longlong)(fVar42 + fVar42);
      plVar14 = &local_3e8;
      do {
        pauVar20 = (undefined1 (*) [16])*plVar14;
        pauVar25 = (undefined1 (*) [16])plVar14[1];
        iVar33 = (int)plVar14[2];
        iVar13 = (int)((ulonglong)((longlong)pauVar25 - (longlong)pauVar20) >> 4);
        uVar37 = iVar13 + 1;
        pauVar22 = pauVar20;
        pauVar29 = pauVar25;
        if (iVar33 != 0) {
LAB_143b06484:
          if (8 < (int)uVar37) {
            uVar46 = *(undefined8 *)pauVar20[uVar37 >> 1];
            uVar7 = *(undefined8 *)(pauVar20[uVar37 >> 1] + 8);
            uVar8 = *(undefined8 *)(*pauVar20 + 8);
            *(undefined8 *)pauVar20[uVar37 >> 1] = *(undefined8 *)*pauVar20;
            *(undefined8 *)(pauVar20[uVar37 >> 1] + 8) = uVar8;
            *(undefined8 *)*pauVar20 = uVar46;
            *(undefined8 *)(*pauVar20 + 8) = uVar7;
            pauVar36 = pauVar29 + 1;
            pauVar19 = pauVar20;
            do {
              pauVar10 = pauVar19 + 1;
              pauVar30 = pauVar19 + 1;
              do {
                pauVar40 = pauVar30;
                pauVar19 = pauVar10;
                if (pauVar29 < pauVar19) break;
                pauVar10 = pauVar19 + 1;
                pauVar30 = pauVar40 + 1;
              } while (*(double *)(*pauVar19 + 8) < *(double *)(*pauVar20 + 8) ||
                       *(double *)(*pauVar19 + 8) == *(double *)(*pauVar20 + 8));
              pauVar10 = pauVar36 + -2;
              do {
                pauVar30 = pauVar36;
                pauVar39 = pauVar10;
                pauVar36 = pauVar30 + -1;
                if (pauVar36 <= pauVar20) break;
                pauVar10 = pauVar39 + -1;
              } while (*(double *)(*pauVar20 + 8) < *(double *)(pauVar30[-1] + 8) ||
                       *(double *)(*pauVar20 + 8) == *(double *)(pauVar30[-1] + 8));
              if (pauVar36 < pauVar19) goto LAB_143b0653b;
              uVar46 = *(undefined8 *)*pauVar19;
              uVar7 = *(undefined8 *)(*pauVar19 + 8);
              uVar8 = *(undefined8 *)(pauVar30[-1] + 8);
              *(undefined8 *)*pauVar19 = *(undefined8 *)*pauVar36;
              *(undefined8 *)(*pauVar19 + 8) = uVar8;
              *(undefined8 *)*pauVar36 = uVar46;
              *(undefined8 *)(pauVar30[-1] + 8) = uVar7;
            } while( true );
          }
          for (; pauVar22 = pauVar20, pauVar25 = pauVar20, pauVar20 < pauVar29;
              pauVar29 = pauVar29 + -1) {
            while (pauVar36 = pauVar22, pauVar25 = pauVar25 + 1, pauVar25 <= pauVar29) {
              pauVar22 = pauVar25;
              if (*(double *)(*pauVar25 + 8) < *(double *)(*pauVar36 + 8) ||
                  *(double *)(*pauVar25 + 8) == *(double *)(*pauVar36 + 8)) {
                pauVar22 = pauVar36;
              }
            }
            auVar9 = *pauVar36;
            local_428[4] = *(undefined8 *)*pauVar36;
            uStack_400 = *(undefined8 *)(*pauVar36 + 8);
            uVar46 = *(undefined8 *)(*pauVar29 + 8);
            *(undefined8 *)*pauVar36 = *(undefined8 *)*pauVar29;
            *(undefined8 *)(*pauVar36 + 8) = uVar46;
            *pauVar29 = auVar9;
          }
          goto LAB_143b06822;
        }
LAB_143b065e6:
        if (uVar37 != 0) {
          iVar33 = (iVar13 - (iVar13 + -1 >> 0x1f)) + -1 >> 1;
          iVar13 = iVar33;
joined_r0x000143b0660d:
          do {
            iVar35 = iVar33 * 2 + 1;
            if (iVar35 < (int)uVar37) {
              iVar34 = iVar33 * 2 + 2;
              if ((iVar34 < (int)uVar37) &&
                 (*(double *)(pauVar20[iVar35] + 8) < *(double *)(pauVar20[iVar34] + 8) ||
                  *(double *)(pauVar20[iVar35] + 8) == *(double *)(pauVar20[iVar34] + 8))) {
                iVar35 = iVar34;
              }
              if (*(double *)(pauVar20[iVar33] + 8) <= *(double *)(pauVar20[iVar35] + 8) &&
                  *(double *)(pauVar20[iVar35] + 8) != *(double *)(pauVar20[iVar33] + 8)) {
                pauVar29 = pauVar20 + iVar33;
                pauVar25 = pauVar20 + iVar35;
                auVar9 = *pauVar29;
                local_428[4] = *(undefined8 *)*pauVar29;
                uStack_400 = *(undefined8 *)(*pauVar29 + 8);
                uVar46 = *(undefined8 *)(*pauVar25 + 8);
                *(undefined8 *)*pauVar29 = *(undefined8 *)*pauVar25;
                *(undefined8 *)(*pauVar29 + 8) = uVar46;
                *pauVar25 = auVar9;
                iVar33 = iVar35;
                goto joined_r0x000143b0660d;
              }
            }
            bVar41 = iVar13 != 0;
            iVar33 = iVar13 + -1;
            iVar13 = iVar33;
          } while (bVar41);
          if (1 < (int)uVar37) {
            uVar28 = (ulonglong)uVar37 - 1;
            auVar9 = *pauVar20;
            local_428[4] = *(undefined8 *)*pauVar20;
            uStack_400 = *(undefined8 *)(*pauVar20 + 8);
            uVar46 = *(undefined8 *)(pauVar20[uVar28] + 8);
            *(undefined8 *)*pauVar20 = *(undefined8 *)pauVar20[uVar28];
            *(undefined8 *)(*pauVar20 + 8) = uVar46;
            pauVar20[uVar28] = auVar9;
            if (uVar37 != 2) {
              do {
                iVar33 = 0;
                iVar35 = 1;
                iVar13 = 0;
                do {
                  iVar33 = iVar33 + 2;
                  iVar34 = iVar35;
                  if (((longlong)iVar33 < (longlong)uVar28) &&
                     (*(double *)(pauVar20[iVar35] + 8) < *(double *)(pauVar20[iVar33] + 8) ||
                      *(double *)(pauVar20[iVar35] + 8) == *(double *)(pauVar20[iVar33] + 8))) {
                    iVar34 = iVar33;
                  }
                  if (*(double *)(pauVar20[iVar34] + 8) < *(double *)(pauVar20[iVar13] + 8) ||
                      *(double *)(pauVar20[iVar34] + 8) == *(double *)(pauVar20[iVar13] + 8)) break;
                  pauVar29 = pauVar20 + iVar13;
                  pauVar25 = pauVar20 + iVar34;
                  uVar46 = *(undefined8 *)*pauVar29;
                  uVar7 = *(undefined8 *)(*pauVar29 + 8);
                  uVar8 = *(undefined8 *)(*pauVar25 + 8);
                  *(undefined8 *)*pauVar29 = *(undefined8 *)*pauVar25;
                  *(undefined8 *)(*pauVar29 + 8) = uVar8;
                  *(undefined8 *)*pauVar25 = uVar46;
                  *(undefined8 *)(*pauVar25 + 8) = uVar7;
                  iVar33 = iVar34 * 2;
                  iVar35 = iVar34 * 2 + 1;
                  iVar13 = iVar34;
                } while ((longlong)iVar35 < (longlong)uVar28);
                uVar27 = uVar28 - 1;
                auVar9 = *pauVar20;
                local_428[4] = *(undefined8 *)*pauVar20;
                uStack_400 = *(undefined8 *)(*pauVar20 + 8);
                uVar46 = *(undefined8 *)(pauVar20[uVar27] + 8);
                *(undefined8 *)*pauVar20 = *(undefined8 *)pauVar20[uVar27];
                *(undefined8 *)(*pauVar20 + 8) = uVar46;
                pauVar20[uVar27] = auVar9;
                bVar41 = 2 < uVar28;
                uVar28 = uVar27;
              } while (bVar41);
            }
          }
        }
LAB_143b06822:
        plVar14 = plVar14 + -3;
      } while (&local_3e8 <= plVar14);
    }
    if (0 < (int)uStack_470) {
      lVar21 = 0;
      do {
        local_524 = *(uint *)(local_478 + lVar21 * 0x10);
        lVar24 = *param_1;
        lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x1c0) + (ulonglong)(local_524 >> 9) * 8);
        uVar27 = (ulonglong)((local_524 & 0x1ff) << 4);
        uVar28 = *(ulonglong *)(lVar31 + uVar27);
        uVar27 = *(ulonglong *)(lVar31 + 8 + uVar27);
        uVar15 = uVar28 >> 0x20;
        uVar37 = (uint)(uVar28 >> 0x20);
        local_528 = (int)uVar27;
        local_520 = uVar27 >> 0x20;
        lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x130) + (uVar27 >> 9 & 0x7fffff) * 8);
        local_480 = *(undefined4 *)(lVar31 + 8 + (uVar27 & 0x1ff) * 0xc);
        local_488 = *(undefined8 *)(lVar31 + (uVar27 & 0x1ff) * 0xc);
        lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x130) + (uVar27 >> 0x29) * 8);
        local_490 = *(undefined4 *)(lVar31 + 8 + (local_520 & 0x1ff) * 0xc);
        local_498 = *(undefined8 *)(lVar31 + (local_520 & 0x1ff) * 0xc);
        lVar31 = 0;
        do {
          lVar32 = lVar31 + 1;
          lVar38 = 0;
          if (lVar31 != 2) {
            lVar38 = lVar32;
          }
          uVar12 = *(uint *)((longlong)&local_488 + lVar38 * 4);
          uVar23 = *(uint *)((longlong)&local_488 + lVar31 * 4);
          uVar18 = (uint)uVar28;
          uVar16 = uVar15;
          if (((uVar23 == uVar18) ||
              (bVar41 = uVar12 == uVar18, uVar16 = uVar28, uVar18 = uVar37, uVar12 = uVar23, bVar41)
              ) && (uVar12 == uVar37)) {
            uVar15 = uVar16 & 0xffffffff;
            uVar28 = (ulonglong)uVar18;
            uVar16 = (ulonglong)((int)lVar31 - 1);
            if (lVar31 == 0) {
              uVar16 = 2;
            }
            uVar37 = *(uint *)((longlong)&local_488 + uVar16 * 4);
            goto LAB_143b0697d;
          }
          lVar31 = lVar32;
        } while (lVar32 != 3);
        uVar37 = 0xffffffff;
LAB_143b0697d:
        lVar31 = 0;
        do {
          lVar32 = lVar31 + 1;
          lVar38 = 0;
          if (lVar31 != 2) {
            lVar38 = lVar32;
          }
          uVar12 = *(uint *)((longlong)&local_498 + lVar38 * 4);
          uVar23 = *(uint *)((longlong)&local_498 + lVar31 * 4);
          uVar18 = (uint)uVar28;
          if (((uVar23 == uVar18) || (bVar41 = uVar12 == uVar18, uVar12 = uVar23, bVar41)) &&
             (uVar12 == (uint)uVar15)) {
            uVar16 = (ulonglong)((int)lVar31 - 1);
            if (lVar31 == 0) {
              uVar16 = 2;
            }
            uVar23 = *(uint *)((longlong)&local_498 + uVar16 * 4);
            goto LAB_143b069ed;
          }
          lVar31 = lVar32;
        } while (lVar32 != 3);
        uVar23 = 0xffffffff;
LAB_143b069ed:
        lVar38 = (longlong)local_528;
        dVar47 = *(double *)(local_428[2] + lVar38 * 8);
        lVar32 = (longlong)uVar27 >> 0x20;
        dVar43 = *(double *)(local_428[2] + lVar32 * 8);
        lVar31 = lVar32;
        if (dVar43 < dVar47) {
          lVar31 = lVar38;
        }
        dVar3 = *(double *)(local_428[0] + lVar31 * 0x18);
        dVar4 = *(double *)(local_428[0] + 8 + lVar31 * 0x18);
        dVar5 = *(double *)(local_428[0] + 0x10 + lVar31 * 0x18);
        lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (uVar28 >> 9 & 0x7fffff) * 8);
        local_3f8 = *(undefined8 *)(lVar31 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar31 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
        local_428[4] = *puVar1;
        uStack_400 = puVar1[1];
        lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (uVar15 >> 9) * 8);
        uVar28 = (ulonglong)((uint)uVar15 & 0x1ff);
        local_438 = *(undefined8 *)(lVar31 + 0x10 + uVar28 * 0x18);
        puVar1 = (undefined8 *)(lVar31 + uVar28 * 0x18);
        local_448 = *puVar1;
        uStack_440 = puVar1[1];
        lVar31 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (ulonglong)(uVar37 >> 9) * 8);
        local_458 = *(undefined8 *)(lVar31 + 0x10 + (ulonglong)(uVar37 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar31 + (ulonglong)(uVar37 & 0x1ff) * 0x18);
        local_468 = *puVar1;
        uStack_460 = puVar1[1];
        lVar24 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + (ulonglong)(uVar23 >> 9) * 8);
        local_4a8 = *(undefined8 *)(lVar24 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar24 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
        local_4b8 = *puVar1;
        uStack_4b0 = puVar1[1];
        dVar44 = (double)FUN_14831c0ee(&local_468,&local_4b8,&local_448);
        dVar45 = (double)FUN_14831c0ee(&local_4b8,&local_468,local_428 + 4);
        FUN_146baf581(&local_4d0,&local_468,&local_4b8,&local_448);
        FUN_146baf581(&local_4e8,&local_4b8,&local_468,local_428 + 4);
        uVar37 = local_524;
        if (((double)param_1[2] <= local_4c0 * dVar5 + local_4d0 * dVar3 + local_4c8 * dVar4) &&
           ((double)param_1[2] <= local_4d8 * dVar5 + local_4e8 * dVar3 + local_4e0 * dVar4)) {
          dVar48 = 1.0;
          if (1.0 / dVar44 <= 1.0) {
            dVar48 = 1.0 / dVar44;
          }
          dVar48 = (double)(-(ulonglong)(1.0 < dVar44) & (ulonglong)dVar48 |
                           ~-(ulonglong)(1.0 < dVar44) & (ulonglong)dVar44);
          dVar44 = 1.0;
          if (1.0 / dVar45 <= 1.0) {
            dVar44 = 1.0 / dVar45;
          }
          dVar44 = (double)(-(ulonglong)(1.0 < dVar45) & (ulonglong)dVar44 |
                           ~-(ulonglong)(1.0 < dVar45) & (ulonglong)dVar45);
          uVar28 = -(ulonglong)(dVar48 <= dVar44);
          if ((double)(~-(ulonglong)(dVar47 <= dVar43) & (ulonglong)dVar43 |
                      (ulonglong)dVar47 & -(ulonglong)(dVar47 <= dVar43)) <
              (double)(~uVar28 & (ulonglong)dVar44 | uVar28 & (ulonglong)dVar48)) {
            local_3e8 = CONCAT44(0xffffffff,(undefined4)local_3e8);
            lStack_3e0 = -1;
            local_3d8 = 0xffffffff;
            uStack_3d4 = 0xffffffff;
            uStack_3d0 = 0xffffffff;
            iVar13 = (**(code **)(*(longlong *)*param_1 + 0x40))
                               ((longlong *)*param_1,local_524,&local_3e8);
            iVar33 = local_528;
            if (iVar13 == 0) {
              uVar46 = FUN_148323226(*param_1,local_528);
              uVar28 = local_520;
              *(undefined8 *)(local_428[2] + lVar38 * 8) = uVar46;
              uVar46 = FUN_148323226(*param_1,local_520 & 0xffffffff);
              *(undefined8 *)(local_428[2] + lVar32 * 8) = uVar46;
              FUN_146c13dec(*param_1,&local_500,iVar33);
              if ((local_4f0 * dVar5 + local_500 * dVar3 + local_4f8 * dVar4 < (double)param_1[2])
                 || (FUN_146c13dec(*param_1,&local_518,uVar28 & 0xffffffff),
                    dVar5 * local_508 + dVar3 * local_518 + dVar4 * local_510 < (double)param_1[2]))
              {
                (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,uVar37,&local_3e8);
                uVar46 = FUN_148323226(*param_1,local_528);
                *(undefined8 *)(local_428[2] + lVar38 * 8) = uVar46;
                uVar46 = FUN_148323226(*param_1,local_520);
                *(undefined8 *)(local_428[2] + lVar32 * 8) = uVar46;
              }
            }
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)uStack_470);
    }
  }
  if (local_478 != 0) {
    FUN_1400020a8();
  }
  if (local_428[0] != 0) {
    FUN_1400020a8();
  }
  if (local_428[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143b0653b:
  auVar9 = *pauVar20;
  local_428[4] = *(undefined8 *)*pauVar20;
  uStack_400 = *(undefined8 *)(*pauVar20 + 8);
  uVar46 = *(undefined8 *)(pauVar30[-1] + 8);
  *(undefined8 *)*pauVar20 = *(undefined8 *)*pauVar36;
  *(undefined8 *)(*pauVar20 + 8) = uVar46;
  *pauVar36 = auVar9;
  iVar33 = iVar33 + -1;
  pauVar30 = pauVar30 + -2;
  if ((longlong)pauVar39 - (longlong)pauVar22 < (longlong)pauVar25 - (longlong)pauVar40) {
    if (pauVar19 < pauVar29) {
      *plVar14 = (longlong)pauVar19;
      plVar14[1] = (longlong)pauVar29;
      *(int *)(plVar14 + 2) = iVar33;
      plVar14 = plVar14 + 3;
    }
    pauVar40 = pauVar20;
    pauVar25 = pauVar39;
    if (pauVar36 <= pauVar20 + 1) goto LAB_143b06822;
  }
  else {
    if (pauVar20 + 1 < pauVar36) {
      *plVar14 = (longlong)pauVar20;
      plVar14[1] = (longlong)pauVar30;
      *(int *)(plVar14 + 2) = iVar33;
      plVar14 = plVar14 + 3;
    }
    pauVar20 = pauVar19;
    pauVar30 = pauVar29;
    pauVar25 = pauVar29;
    if (pauVar29 <= pauVar19) goto LAB_143b06822;
  }
  iVar13 = (int)((ulonglong)((longlong)pauVar25 - (longlong)pauVar40) >> 4);
  uVar37 = iVar13 + 1;
  pauVar22 = pauVar40;
  pauVar29 = pauVar30;
  if (iVar33 == 0) goto LAB_143b065e6;
  goto LAB_143b06484;
}



// FUNCTION 143b06e6a FUN_143b06e6a body=160 status=ok
// SIG undefined FUN_143b06e6a(void)

int FUN_143b06e6a(undefined8 *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if ((int)param_3 < param_2) {
    plVar5 = (longlong *)param_1[1];
    if (param_2 < (int)plVar5[1]) {
      lVar1 = (longlong)param_2;
      do {
        *(undefined1 *)(*(longlong *)*param_1 + (longlong)*(int *)(*plVar5 + lVar1 * 4)) = 1;
        lVar1 = lVar1 + 1;
        plVar5 = (longlong *)param_1[1];
      } while (lVar1 < (int)plVar5[1]);
    }
    if (-1 < (int)param_3) {
      uVar4 = 0;
      do {
        *(undefined1 *)
         (*(longlong *)*param_1 + (longlong)*(int *)(*(longlong *)param_1[1] + uVar4 * 4)) = 1;
        uVar4 = uVar4 + 1;
      } while (param_3 + 1 != uVar4);
      plVar5 = (longlong *)param_1[1];
    }
    iVar2 = (int)plVar5[1];
    param_3 = param_3 + 1;
  }
  else {
    lVar1 = (longlong)param_2;
    uVar3 = param_2 - 1;
    do {
      *(undefined1 *)
       (*(longlong *)*param_1 + (longlong)*(int *)(*(longlong *)param_1[1] + lVar1 * 4)) = 1;
      lVar1 = lVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (param_3 != uVar3);
    iVar2 = 1;
  }
  return (param_3 - param_2) + iVar2;
}



// FUNCTION 143b06f0a FUN_143b06f0a body=135 status=ok
// SIG undefined FUN_143b06f0a(void)

ulonglong FUN_143b06f0a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [7];
  undefined1 local_29;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_146c061e0(*(undefined8 *)(*param_1 + 8));
  if (iVar1 == -1) {
    local_28 = param_2;
    local_24 = param_3;
    if (param_3 < param_2) {
      local_28 = param_3;
      local_24 = param_2;
    }
    local_29 = 0;
    uVar2 = FUN_146be8d80(param_1[1],local_30,&local_28,&local_29);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_29) ^ 1;
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b06f92 FUN_143b06f92 body=364 status=ok
// SIG undefined FUN_143b06f92(void)

double * FUN_143b06f92(double *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar1 = param_2[2];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = *param_3;
  local_108 = param_3[1];
  local_100 = param_3[2];
  uVar2 = param_4[2];
  local_f8 = *param_4;
  uStack_f0 = param_4[1];
  uVar6 = *param_5;
  local_d8 = param_5[1];
  local_d0 = param_5[2];
  local_c8 = 0xbff0000000000000;
  local_c0 = 0;
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar1;
  local_38._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar5;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_128 = (undefined4)local_48;
  uStack_124 = local_48._4_4_;
  uStack_120 = (undefined4)uStack_40;
  uStack_11c = uStack_40._4_4_;
  local_118 = (undefined4)local_38;
  uStack_114 = local_38._4_4_;
  uStack_110 = (undefined4)uStack_30;
  uStack_10c = uStack_30._4_4_;
  local_68._0_4_ = (undefined4)uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar6;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_e8 = (undefined4)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  local_78 = local_f8;
  uStack_70 = uStack_f0;
  local_68 = uVar2;
  uStack_60 = uVar6;
  uStack_58 = local_d8;
  local_50 = local_d0;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar1;
  uStack_30 = uVar5;
  uStack_28 = local_108;
  local_20 = local_100;
  FUN_14830c246(&local_128);
  *param_1 = (local_b8 + local_98) * 0.5;
  param_1[1] = (local_b0 + local_90) * 0.5;
  param_1[2] = (local_a8 + local_88) * 0.5;
  if ((local_18 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b07100 FUN_143b07100 body=811 status=ok
// SIG undefined FUN_143b07100(void)

void FUN_143b07100(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  uint *local_88;
  undefined1 *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 8);
  FUN_1402226aa(param_1 + 0x2f0);
  local_98 = param_1 + 0x340;
  FUN_1402226aa();
  local_a0 = param_1 + 0x3f8;
  FUN_14834bdd8(local_a0,*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24),0);
  if (*(int *)(param_1 + 0x39c) < 0) {
    *(undefined4 *)(param_1 + 0x398) = 0;
    FUN_14481578e(param_1 + 0x390,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x398) = 0;
  }
  *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x44c) + 1;
  local_88 = (uint *)(param_1 + 0x2b0);
  iVar1 = *(int *)(param_1 + 0x2c8);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar13 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x2c0);
    if (*(uint **)(param_1 + 0x2c0) == (uint *)0x0) {
      puVar5 = local_88;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar13 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar13 = iVar1 + -1;
      }
      uVar16 = 0;
      uVar7 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar7 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar7 == uVar16) goto LAB_143b0723a;
        iVar13 = iVar13 + 0x20;
        uVar6 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar14 = (ulonglong)(-uVar6 & uVar6);
    uVar7 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar11) {
      iVar11 = iVar1;
    }
  }
  if (iVar11 != iVar1) {
    local_90 = lVar4 + 0xb8;
    uVar6 = 0xffffffff;
    do {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar11 * 0xc);
      FUN_14834be84(local_a0,uVar2);
      local_50 = &local_70;
      local_58 = &LAB_14834bfe6;
      local_70 = param_1;
      local_68 = lVar4;
      local_60 = uVar2;
      FUN_146bd7d34(local_90,uVar2,&local_58);
      uVar6 = ~(uint)uVar14 & uVar6;
      puVar5 = *(uint **)(param_1 + 0x2c0);
      if (*(uint **)(param_1 + 0x2c0) == (uint *)0x0) {
        puVar5 = local_88;
      }
      iVar3 = *(int *)(param_1 + 0x2c8);
      iVar11 = (int)uVar16;
      lVar12 = (longlong)iVar11;
      uVar10 = puVar5[lVar12] & uVar6;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar11 < iVar8) {
          lVar15 = 0;
          do {
            uVar10 = puVar5[lVar12 + lVar15 + 1];
            if (uVar10 != 0) {
              uVar16 = (ulonglong)(iVar11 + (int)lVar15 + 1);
              uVar6 = 0xffffffff;
              goto LAB_143b073d8;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar12 != lVar15);
          uVar6 = 0xffffffff;
          iVar11 = iVar9;
        }
        uVar16 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar3;
      }
      else {
LAB_143b073d8:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar7 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar11) {
          iVar11 = iVar3;
        }
      }
    } while (iVar11 != iVar1);
  }
LAB_143b0723a:
  local_a0 = param_1 + 0x420;
  FUN_14834bdd8(local_a0,*(int *)(lVar4 + 0x140) * 0x200 + *(int *)(lVar4 + 0x144),0);
  iVar1 = *(int *)(param_1 + 0x408);
  if ((longlong)iVar1 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x400);
    lVar15 = 0;
    do {
      local_80 = &LAB_14834c0c8;
      local_78 = &local_70;
      local_70 = param_1;
      FUN_146bd7d34(lVar4 + 0xb8,*(undefined4 *)(lVar12 + lVar15),&local_80);
      lVar15 = lVar15 + 4;
    } while ((longlong)iVar1 * 4 != lVar15);
  }
  FUN_14834bf0a(local_a0,local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b0742c FUN_143b0742c body=7372 status=ok
// SIG undefined FUN_143b0742c(void)

void FUN_143b0742c(undefined1 *param_1,undefined8 *param_2,int param_3,int param_4,char param_5,
                  double param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined ******ppppppuVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *****ppppplVar18;
  longlong *plVar19;
  uint uVar20;
  longlong **pplVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auStack_ae8 [32];
  undefined1 local_ac8;
  int local_ac0;
  uint local_abc;
  ulonglong local_ab8;
  int local_aac;
  ulonglong local_aa8;
  int local_a9c;
  undefined1 *local_a98;
  ulonglong local_a90;
  undefined4 local_a88;
  undefined4 uStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined8 local_a78;
  uint local_a64;
  longlong *local_a60;
  undefined1 *local_a58;
  undefined4 local_a50;
  undefined1 *local_a48;
  longlong lStack_a40;
  ulonglong uStack_a38;
  int local_a30;
  int local_a2c;
  longlong local_a20;
  undefined4 local_a18;
  uint uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  longlong *local_a08;
  longlong local_a00;
  undefined4 local_9f8 [8];
  undefined1 *local_9d8;
  undefined8 uStack_9d0;
  undefined *****pppppuStack_9c8;
  undefined8 local_9c0;
  longlong ****local_9b8;
  int local_9b0;
  uint uStack_9ac;
  undefined8 local_9a8;
  undefined4 uStack_9a0;
  int iStack_99c;
  longlong *local_998;
  longlong **local_990;
  int local_988 [8];
  undefined8 local_968;
  undefined4 local_960;
  longlong local_958 [2];
  longlong *local_948;
  longlong local_938 [4];
  longlong local_918;
  ulonglong uStack_910;
  undefined1 local_908 [16];
  longlong local_8f8;
  undefined4 local_8f0;
  uint local_8ec;
  undefined4 uStack_8e8;
  undefined4 local_8e4;
  longlong local_8d8;
  undefined4 local_8d0;
  longlong local_8c8;
  ulonglong uStack_8c0;
  uint local_8b8 [4];
  uint *local_8a8;
  uint local_8a0;
  uint local_89c;
  undefined4 uStack_898;
  int local_894;
  undefined1 local_890 [8];
  undefined1 *local_888;
  int local_880;
  undefined1 *local_878;
  longlong local_870;
  longlong *plStack_868;
  undefined1 local_860 [8];
  longlong local_858;
  longlong local_850;
  int local_848;
  uint local_844;
  undefined4 uStack_840;
  undefined4 local_83c;
  longlong local_830;
  undefined4 local_828;
  undefined1 local_7b0 [344];
  char local_658;
  int local_654;
  undefined1 local_648 [864];
  undefined1 local_2e8 [336];
  longlong local_198;
  ulonglong uStack_190;
  uint local_188 [4];
  uint *local_178;
  int local_170;
  uint local_16c;
  undefined4 uStack_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  undefined8 local_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_140 = *param_2;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0x80;
  uStack_108 = 0xffffffff;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_aac = param_3;
  FUN_145c3f772(&local_138,param_2 + 1);
  local_a98 = param_1;
  if (0 < param_4) {
    if (param_5 == '\0') {
      local_878 = (undefined1 *)0x0;
      plStack_868 = (longlong *)0x0;
      FUN_146c83216(&local_140,param_4,&local_878);
      if (local_878 != (undefined1 *)0x0) {
        plVar19 = plStack_868;
        if (plStack_868 == (longlong *)0x0) {
          plVar19 = &local_858;
        }
        (**(code **)(*plVar19 + 0x10))();
      }
    }
    else {
      local_850 = 0;
      local_848 = 0;
      local_870 = 0;
      plStack_868 = (longlong *)0x0;
      local_844 = 0x80;
      uStack_840 = 0xffffffff;
      local_83c = 0;
      local_830 = 0;
      local_828 = 0;
      local_878 = param_1;
      FUN_146c82332(&local_878,&local_140);
      local_9d8 = (undefined1 *)0x0;
      pppppuStack_9c8 = (undefined *****)0x0;
      FUN_146c83216(&local_140,param_4,&local_9d8);
      if (local_9d8 != (undefined1 *)0x0) {
        ppppplVar18 = (longlong *****)pppppuStack_9c8;
        if ((longlong *****)pppppuStack_9c8 == (longlong *****)0x0) {
          ppppplVar18 = &local_9b8;
        }
        (*(code *)(*ppppplVar18)[2])();
      }
      local_9b0 = 0;
      uStack_9ac = 0;
      local_9a8._0_4_ = 0;
      uStack_9d0 = 0;
      pppppuStack_9c8 = (undefined *****)0x0;
      local_9a8._4_4_ = 0x80;
      uStack_9a0 = 0xffffffff;
      iStack_99c = 0;
      local_990 = (longlong **)0x0;
      local_988[0] = 0;
      local_9d8 = param_1;
      FUN_146c83ce6(&local_9d8,param_2);
      FUN_140619b9c(&local_870,&local_a48);
      local_a58 = local_a48;
      local_a50 = (int)lStack_a40;
      FUN_14834c132(&local_9d8);
      if (local_a48 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      iVar30 = 0;
      local_a20 = 0;
      local_a18 = 0;
      lStack_a40 = 0;
      uStack_a38 = 0;
      uStack_a14 = 0x80;
      uStack_a10 = 0xffffffff;
      uStack_a0c = 0;
      local_a00 = 0;
      local_9f8[0] = 0;
      local_a48 = param_1;
      FUN_146c83ce6(&local_a48,&local_140);
      local_178 = (uint *)0x0;
      local_170 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_16c = 0x80;
      uStack_168 = 0xffffffff;
      local_164 = 0;
      local_158 = (undefined1 *)0x0;
      local_150 = 0;
      FUN_145c3f772(&local_198,&lStack_a40);
      iVar6 = local_170;
      uVar26 = 1;
      uVar24 = 0;
      iVar13 = 0;
      if (local_170 != 0) {
        puVar12 = local_178;
        if (local_178 == (uint *)0x0) {
          puVar12 = local_188;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar13 = local_170 + 0x1e;
          if (-1 < local_170 + -1) {
            iVar13 = local_170 + -1;
          }
          uVar24 = 0;
          uVar26 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar26 = 0;
          }
          iVar30 = 0;
          do {
            if (uVar26 == uVar24) goto LAB_143b0772d;
            iVar30 = iVar30 + 0x20;
            uVar7 = puVar12[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar7 == 0);
        }
        else {
          iVar30 = 0;
          uVar24 = 0;
        }
        uVar26 = (ulonglong)(-uVar7 & uVar7);
        uVar31 = uVar26 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar13 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (local_170 <= iVar13) {
          iVar13 = local_170;
        }
      }
      if (iVar13 != local_170) {
        uVar7 = 0xffffffff;
        iVar17 = local_170;
        do {
          uVar22 = *(uint *)(local_198 + (longlong)iVar13 * 0xc);
          local_8c8 = CONCAT44(local_8c8._4_4_,uVar22);
          if ((int)pppppuStack_9c8 != iStack_99c) {
            pplVar21 = local_990;
            if (local_990 == (longlong **)0x0) {
              pplVar21 = &local_998;
            }
            for (iVar13 = *(int *)((longlong)pplVar21 + (ulonglong)(local_988[0] - 1U & uVar22) * 4)
                ; iVar13 != -1; iVar13 = *(int *)(uStack_9d0 + (longlong)iVar13 * 0xc + 4)) {
              if (*(uint *)(uStack_9d0 + (longlong)iVar13 * 0xc) == uVar22) goto LAB_143b08d35;
            }
          }
          FUN_1447cbafe(&local_e8,&local_918,&local_8c8,0);
          iVar17 = local_170;
LAB_143b08d35:
          uVar7 = uVar7 & ~(uint)uVar26;
          puVar12 = local_178;
          if (local_178 == (uint *)0x0) {
            puVar12 = local_188;
          }
          iVar13 = (int)uVar24;
          lVar28 = (longlong)iVar13;
          uVar22 = puVar12[lVar28] & uVar7;
          if (uVar22 == 0) {
            iVar15 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar15 = iVar17 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar30 = iVar30 + 0x20;
            iVar16 = iVar15;
            if (iVar15 < iVar13) {
              iVar16 = iVar13;
            }
            if (iVar13 < iVar15) {
              lVar29 = 0;
              do {
                uVar22 = puVar12[lVar28 + lVar29 + 1];
                if (uVar22 != 0) {
                  uVar24 = (ulonglong)(iVar13 + (int)lVar29 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_143b08db0;
                }
                iVar30 = iVar30 + 0x20;
                lVar29 = lVar29 + 1;
              } while (iVar16 - lVar28 != lVar29);
              uVar7 = 0xffffffff;
              lVar28 = (longlong)iVar16;
            }
            uVar24 = lVar28 + 1U & 0xffffffff;
            iVar13 = iVar17;
          }
          else {
LAB_143b08db0:
            uVar26 = (ulonglong)(-uVar22 & uVar22);
            uVar31 = uVar26 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar13 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar13) {
              iVar13 = iVar17;
            }
          }
        } while (iVar13 != iVar6);
      }
LAB_143b0772d:
      local_150 = 0;
      if (local_158 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      param_1 = local_a98;
      uVar24 = uStack_190 >> 0x20;
      uStack_190 = uStack_190 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_198,0);
      }
      uStack_168 = 0xffffffff;
      local_164 = 0;
      local_170 = 0;
      if (0x80 < local_16c) {
        local_16c = 0x80;
        FUN_1446efbd8(local_188,0);
      }
      if (local_178 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      local_9f8[0] = 0;
      if (local_a00 != 0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_a38 >> 0x20;
      uStack_a38 = uStack_a38 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&lStack_a40,0);
      }
      uStack_a10 = 0xffffffff;
      uStack_a0c = 0;
      local_a18 = 0;
      if (0x80 < uStack_a14) {
        uStack_a14 = 0x80;
        FUN_1446efbd8(&local_a30,0);
      }
      if (local_a20 != 0) {
        FUN_1400020a8();
      }
      if (lStack_a40 != 0) {
        FUN_1400020a8();
      }
      local_988[0] = 0;
      if (local_990 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      uVar24 = (ulonglong)pppppuStack_9c8 >> 0x20;
      pppppuStack_9c8 = (undefined *****)((ulonglong)pppppuStack_9c8 & 0xffffffff00000000);
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&uStack_9d0,0);
      }
      uStack_9a0 = 0xffffffff;
      iStack_99c = 0;
      local_9a8._0_4_ = 0;
      if (0x80 < local_9a8._4_4_) {
        local_9a8._4_4_ = 0x80;
        FUN_1446efbd8(&local_9c0,0);
      }
      if (CONCAT44(uStack_9ac,local_9b0) != 0) {
        FUN_1400020a8();
      }
      if (uStack_9d0 != 0) {
        FUN_1400020a8();
      }
      local_828 = 0;
      if (local_830 != 0) {
        FUN_1400020a8();
      }
      uVar24 = (ulonglong)plStack_868 >> 0x20;
      plStack_868 = (longlong *)((ulonglong)plStack_868 & 0xffffffff00000000);
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_870,0);
      }
      uStack_840 = 0xffffffff;
      local_83c = 0;
      local_848 = 0;
      if (0x80 < local_844) {
        local_844 = 0x80;
        FUN_1446efbd8(local_860,0);
      }
      if (local_850 != 0) {
        FUN_1400020a8();
      }
      if (local_870 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_140619b9c(&local_138,&local_a48);
  local_9d8 = local_a48;
  uStack_9d0 = CONCAT44(uStack_9d0._4_4_,(int)lStack_a40);
  FUN_14834c1ac(&local_878,param_1);
  if (local_a48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14839842a(&local_a60,6,&plStack_868);
  iVar13 = local_c0;
  iVar30 = 0;
  local_178 = (uint *)0x0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0x80;
  uStack_168 = 0xffffffff;
  local_164 = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  uVar24 = 1;
  uVar26 = 0;
  iVar6 = 0;
  if (local_c0 != 0) {
    puVar12 = local_c8;
    if (local_c8 == (uint *)0x0) {
      puVar12 = local_d8;
    }
    uVar7 = *puVar12;
    if (uVar7 == 0) {
      iVar6 = local_c0 + 0x1e;
      if (-1 < local_c0 + -1) {
        iVar6 = local_c0 + -1;
      }
      uVar26 = 0;
      uVar24 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar24 = 0;
      }
      iVar30 = 0;
      do {
        if (uVar24 == uVar26) goto LAB_143b07afa;
        iVar30 = iVar30 + 0x20;
        uVar7 = puVar12[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar7 == 0);
    }
    else {
      iVar30 = 0;
      uVar26 = 0;
    }
    uVar24 = (ulonglong)(-uVar7 & uVar7);
    uVar31 = uVar24 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar6 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (local_c0 <= iVar6) {
      iVar6 = local_c0;
    }
  }
  if (iVar6 != local_c0) {
    uVar7 = 0xffffffff;
    do {
      uVar8 = FUN_146bcd1d8(local_648,*(undefined4 *)(local_e8 + (longlong)iVar6 * 0xc));
      local_9d8 = (undefined1 *)CONCAT44(local_9d8._4_4_,uVar8);
      FUN_144984904(&local_198,&local_a48,&local_9d8,0);
      uVar7 = ~(uint)uVar24 & uVar7;
      puVar12 = local_c8;
      if (local_c8 == (uint *)0x0) {
        puVar12 = local_d8;
      }
      iVar6 = (int)uVar26;
      lVar28 = (longlong)iVar6;
      uVar22 = puVar12[lVar28] & uVar7;
      if (uVar22 == 0) {
        iVar17 = local_c0 + 0x1e;
        if (-1 < local_c0 + -1) {
          iVar17 = local_c0 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar30 = iVar30 + 0x20;
        iVar15 = iVar17;
        if (iVar17 < iVar6) {
          iVar15 = iVar6;
        }
        if (iVar6 < iVar17) {
          lVar29 = 0;
          do {
            uVar22 = puVar12[lVar28 + lVar29 + 1];
            if (uVar22 != 0) {
              uVar26 = (ulonglong)(iVar6 + (int)lVar29 + 1);
              uVar7 = 0xffffffff;
              goto LAB_143b08633;
            }
            iVar30 = iVar30 + 0x20;
            lVar29 = lVar29 + 1;
          } while (iVar15 - lVar28 != lVar29);
          uVar7 = 0xffffffff;
          iVar6 = iVar15;
        }
        uVar26 = (ulonglong)(iVar6 + 1);
        iVar6 = local_c0;
      }
      else {
LAB_143b08633:
        uVar24 = (ulonglong)(-uVar22 & uVar22);
        uVar31 = uVar24 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar6 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (local_c0 <= iVar6) {
          iVar6 = local_c0;
        }
      }
    } while (iVar6 != iVar13);
  }
LAB_143b07afa:
  uVar26 = 0;
  local_8a8 = (uint *)0x0;
  local_8a0 = 0;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_89c = 0x80;
  uStack_898 = 0xffffffff;
  local_894 = 0;
  local_888 = (undefined1 *)0x0;
  local_880 = 0;
  local_9b8 = (longlong ****)0x0;
  local_9b0 = 0;
  local_9d8 = (undefined1 *)0x0;
  uStack_9d0 = 0;
  uStack_9ac = 0x80;
  local_9a8._0_4_ = 0xffffffff;
  local_9a8._4_4_ = 0;
  local_998 = (longlong *)0x0;
  local_990 = (longlong **)((ulonglong)local_990 & 0xffffffff00000000);
  FUN_145c3f772(&local_9d8,local_2e8);
  iVar13 = local_9b0;
  uVar24 = 1;
  iVar30 = 0;
  iVar6 = 0;
  if (local_9b0 != 0) {
    ppppppuVar9 = (undefined ******)local_9b8;
    if ((undefined ******)local_9b8 == (undefined ******)0x0) {
      ppppppuVar9 = &pppppuStack_9c8;
    }
    uVar7 = *(uint *)ppppppuVar9;
    if (uVar7 == 0) {
      iVar6 = local_9b0 + 0x1e;
      if (-1 < local_9b0 + -1) {
        iVar6 = local_9b0 + -1;
      }
      uVar26 = 0;
      uVar24 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar24 = uVar26;
      }
      iVar30 = 0;
      do {
        if (uVar24 == uVar26) goto LAB_143b07c13;
        iVar30 = iVar30 + 0x20;
        uVar7 = *(uint *)((longlong)ppppppuVar9 + (uVar26 + 1) * 4);
        uVar26 = uVar26 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar26 = 0;
      iVar30 = 0;
    }
    uVar24 = (ulonglong)(-uVar7 & uVar7);
    uVar31 = uVar24 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar6 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (local_9b0 <= iVar6) {
      iVar6 = local_9b0;
    }
  }
  if (iVar6 != local_9b0) {
    uVar7 = 0xffffffff;
    do {
      uVar22 = FUN_146bcd1d8(local_648,*(undefined4 *)(local_9d8 + (longlong)iVar6 * 0xc));
      local_918 = CONCAT44(local_918._4_4_,uVar22);
      lVar28 = *(longlong *)(local_858 + (ulonglong)(uVar22 >> 9) * 8);
      puVar1 = (undefined8 *)(lVar28 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      local_a48 = (undefined1 *)*puVar1;
      lStack_a40 = puVar1[1];
      uStack_a38 = *(ulonglong *)(lVar28 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      local_ac8 = 1;
      (**(code **)(*local_a60 + 8))(local_a60,uVar22,0x4024000000000000,&local_a48);
      FUN_1447cbafe(&local_8c8,&local_a48,&local_918,0);
      uVar7 = ~(uint)uVar24 & uVar7;
      ppppppuVar9 = (undefined ******)local_9b8;
      if ((undefined ******)local_9b8 == (undefined ******)0x0) {
        ppppppuVar9 = &pppppuStack_9c8;
      }
      iVar6 = (int)uVar26;
      lVar28 = (longlong)iVar6;
      uVar22 = *(uint *)((longlong)ppppppuVar9 + lVar28 * 4) & uVar7;
      if (uVar22 == 0) {
        iVar17 = local_9b0 + 0x1e;
        if (-1 < local_9b0 + -1) {
          iVar17 = local_9b0 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar30 = iVar30 + 0x20;
        iVar15 = iVar17;
        if (iVar17 < iVar6) {
          iVar15 = iVar6;
        }
        if (iVar6 < iVar17) {
          lVar29 = 0;
          do {
            uVar22 = *(uint *)((longlong)ppppppuVar9 + (lVar28 + lVar29 + 1) * 4);
            if (uVar22 != 0) {
              uVar26 = (ulonglong)(iVar6 + (int)lVar29 + 1);
              uVar7 = 0xffffffff;
              goto LAB_143b087b8;
            }
            iVar30 = iVar30 + 0x20;
            lVar29 = lVar29 + 1;
          } while (iVar15 - lVar28 != lVar29);
          uVar7 = 0xffffffff;
          lVar28 = (longlong)iVar15;
        }
        uVar26 = lVar28 + 1U & 0xffffffff;
        iVar6 = local_9b0;
      }
      else {
LAB_143b087b8:
        uVar24 = (ulonglong)(-uVar22 & uVar22);
        uVar31 = uVar24 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar6 = (iVar30 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (local_9b0 <= iVar6) {
          iVar6 = local_9b0;
        }
      }
    } while (iVar6 != iVar13);
  }
LAB_143b07c13:
  local_990 = (longlong **)((ulonglong)local_990 & 0xffffffff00000000);
  if (local_998 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar24 = uStack_9d0 >> 0x20;
  uStack_9d0 = uStack_9d0 & 0xffffffff00000000;
  if ((int)uVar24 != 0) {
    FUN_1447a08a2(&local_9d8,0);
  }
  local_9a8._0_4_ = 0xffffffff;
  local_9a8._4_4_ = 0;
  local_9b0 = 0;
  if (0x80 < uStack_9ac) {
    uStack_9ac = 0x80;
    FUN_1446efbd8(&pppppuStack_9c8,0);
  }
  if ((undefined ******)local_9b8 != (undefined ******)0x0) {
    FUN_1400020a8();
  }
  if (local_9d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((0 < local_aac) && (local_894 < (int)uStack_8c0)) {
    dVar32 = 3.1622776601683795;
    iVar6 = 0;
    do {
      local_8f8 = 0;
      local_8f0 = 0;
      local_918 = 0;
      uStack_910 = 0;
      local_8ec = 0x80;
      uStack_8e8 = 0xffffffff;
      local_8e4 = 0;
      local_8d8 = 0;
      local_8d0 = 0;
      local_aa8 = 1;
      local_ab8 = 0;
      local_ac0 = 0;
      uVar7 = 0;
      local_a9c = iVar6;
      if (local_8a0 != 0) {
        puVar12 = local_8a8;
        if (local_8a8 == (uint *)0x0) {
          puVar12 = local_8b8;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar6 = local_8a0 + 0x1e;
          if (-1 < (int)(local_8a0 - 1)) {
            iVar6 = local_8a0 - 1;
          }
          uVar24 = 0;
          uVar26 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar26 = uVar24;
          }
          local_ac0 = 0;
          do {
            if (uVar26 == uVar24) goto LAB_143b07e1b;
            local_ac0 = local_ac0 + 0x20;
            uVar7 = puVar12[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar7 == 0);
        }
        else {
          local_ab8 = 0;
          local_ac0 = 0;
          uVar24 = local_ab8;
        }
        local_ab8 = uVar24;
        local_aa8 = (ulonglong)(-uVar7 & uVar7);
        uVar24 = local_aa8 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar7 = (local_ac0 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)local_8a0 <= (int)uVar7) {
          uVar7 = local_8a0;
        }
      }
      if (uVar7 != local_8a0) {
        local_abc = 0xffffffff;
        local_a90 = (ulonglong)local_8a0;
LAB_143b07ef1:
        local_9b0 = *(undefined4 *)(local_8c8 + (longlong)(int)uVar7 * 0xc);
        pppppuStack_9c8 = (undefined *****)0x0;
        local_9b8 = (longlong ****)&PTR_LAB_149f3b7b0;
        local_9a8 = &plStack_868;
        local_9d8 = &LAB_146c413d0;
        FUN_146c41260(local_7b0,&local_968,local_9b0,&local_9d8);
        FUN_146c41458(local_968,&local_9d8,local_960,local_958);
        FUN_146c41662(local_968,&local_a48,local_960,local_958);
        pplVar21 = local_9a8;
LAB_143b07fa0:
        local_9a8 = pplVar21;
        if (local_9d8 == local_a48) {
          if ((((int)uStack_9d0 == (int)lStack_a40) && ((int)local_9c0 == local_a30)) &&
             (local_9c0._4_4_ == local_a2c)) goto LAB_143b08185;
        }
        local_a88 = local_9b8._0_4_;
        plVar19 = local_998;
        if (local_998 == (longlong *)0x0) {
          plVar19 = (longlong *)local_988;
        }
        uVar10 = (**(code **)(*plVar19 + 8))();
        local_a64 = (*(code *)pplVar21)(uVar10,&local_a88);
        plVar19 = local_a60;
        if ((int)uStack_8c0 != local_894) {
          puVar11 = local_888;
          if (local_888 == (undefined1 *)0x0) {
            puVar11 = local_890;
          }
          for (iVar6 = *(int *)(puVar11 + (ulonglong)(local_880 - 1U & local_a64) * 4); iVar6 != -1;
              iVar6 = *(int *)(local_8c8 + (longlong)iVar6 * 0xc + 4)) {
            if (*(uint *)(local_8c8 + (longlong)iVar6 * 0xc) == local_a64) goto LAB_143b08152;
          }
        }
        cVar5 = (**(code **)(*local_a60 + 0x38))(local_a60,local_a64);
        if (cVar5 == '\0') {
          if ((int)uStack_190 == local_164) {
LAB_143b080f3:
            local_ac8 = false;
          }
          else {
            puVar11 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar11 = local_160;
            }
            iVar6 = *(int *)(puVar11 + (ulonglong)(local_150 - 1U & local_a64) * 4);
            if (iVar6 == -1) goto LAB_143b080f3;
            do {
              local_ac8 = *(uint *)(local_198 + (longlong)iVar6 * 0xc) == local_a64;
              if ((bool)local_ac8) break;
              iVar6 = *(int *)(local_198 + (longlong)iVar6 * 0xc + 4);
            } while (iVar6 != -1);
          }
          lVar28 = *(longlong *)(local_858 + (ulonglong)(local_a64 >> 9) * 8);
          puVar25 = (undefined4 *)(lVar28 + (ulonglong)(local_a64 & 0x1ff) * 0x18);
          local_a88 = *puVar25;
          uStack_a84 = puVar25[1];
          uStack_a80 = puVar25[2];
          uStack_a7c = puVar25[3];
          local_a78 = *(undefined8 *)(lVar28 + 0x10 + (ulonglong)(local_a64 & 0x1ff) * 0x18);
          (**(code **)(*plVar19 + 8))(plVar19,local_a64,dVar32,&local_a88);
        }
        FUN_1447cbafe(&local_918,&local_a88,&local_a64,0);
LAB_143b08152:
        if ((int)pppppuStack_9c8 == 0) {
          uStack_9d0 = CONCAT44(0xffffffff,(int)uStack_9d0);
          local_9c0 = 0xffffffffffffffff;
          pplVar21 = local_9a8;
        }
        else {
          FUN_146be9922(&local_9d8);
          pplVar21 = local_9a8;
        }
        goto LAB_143b07fa0;
      }
LAB_143b07e1b:
      FUN_1468b3f6e(&local_8c8,&local_918);
      if (dVar32 < 0.0) {
        dVar32 = sqrt(dVar32);
      }
      else {
        dVar32 = SQRT(dVar32);
      }
      local_8d0 = 0;
      if (local_8d8 != 0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_910 >> 0x20;
      uStack_910 = uStack_910 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_918,0);
      }
      uStack_8e8 = 0xffffffff;
      local_8e4 = 0;
      local_8f0 = 0;
      if (0x80 < local_8ec) {
        local_8ec = 0x80;
        FUN_1446efbd8(local_908,0);
      }
      if (local_8f8 != 0) {
        FUN_1400020a8();
      }
      iVar6 = local_a9c;
      if (local_918 != 0) {
        FUN_1400020a8();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != local_aac);
  }
  iVar6 = local_170;
  plVar19 = local_a60;
  dVar32 = (double)*(int *)(local_a98 + 0x50) * ((param_6 * param_6) / 50.0);
  uVar24 = -(ulonglong)(dVar32 < 9.999999974752427e-07);
  dVar32 = (double)((uVar24 >> 0x20 & 0x412e847e) << 0x20 | ~uVar24 & (ulonglong)(1.0 / dVar32));
  if (dVar32 <= 0.0) {
    if (local_164 < (int)uStack_190) {
      if (local_170 == 0) {
        uVar31 = 1;
        uVar24 = 0;
        iVar13 = 0;
        iVar30 = 0;
      }
      else {
        puVar12 = local_178;
        if (local_178 == (uint *)0x0) {
          puVar12 = local_188;
        }
        uVar7 = *puVar12;
        if (uVar7 == 0) {
          iVar13 = local_170 + 0x1e;
          if (-1 < local_170 + -1) {
            iVar13 = local_170 + -1;
          }
          uVar24 = 0;
          uVar26 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar26 = uVar24;
          }
          iVar13 = 0;
          do {
            if (uVar26 == uVar24) goto LAB_143b08877;
            iVar13 = iVar13 + 0x20;
            uVar7 = puVar12[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar24 = 0;
          iVar13 = 0;
        }
        uVar31 = (ulonglong)(-uVar7 & uVar7);
        uVar26 = uVar31 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        iVar30 = (iVar13 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if (local_170 <= iVar30) {
          iVar30 = local_170;
        }
      }
      if (iVar30 != local_170) {
        uVar7 = 0xffffffff;
        do {
          uVar22 = *(uint *)(local_198 + (longlong)iVar30 * 0xc);
          cVar5 = (**(code **)(*plVar19 + 0x38))(plVar19,uVar22);
          if (cVar5 == '\0') {
            lVar28 = *(longlong *)(local_858 + (ulonglong)(uVar22 >> 9) * 8);
            puVar1 = (undefined8 *)(lVar28 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
            local_9d8 = (undefined1 *)*puVar1;
            uStack_9d0 = puVar1[1];
            pppppuStack_9c8 =
                 *(undefined ******)(lVar28 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
            local_ac8 = 1;
            (**(code **)(*plVar19 + 8))(plVar19,uVar22,0,&local_9d8);
          }
          uVar7 = uVar7 & ~(uint)uVar31;
          puVar12 = local_178;
          if (local_178 == (uint *)0x0) {
            puVar12 = local_188;
          }
          iVar30 = (int)uVar24;
          lVar28 = (longlong)iVar30;
          uVar22 = puVar12[lVar28] & uVar7;
          if (uVar22 == 0) {
            iVar17 = local_170 + 0x1e;
            if (-1 < local_170 + -1) {
              iVar17 = local_170 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar15 = iVar17;
            if (iVar17 < iVar30) {
              iVar15 = iVar30;
            }
            if (iVar30 < iVar17) {
              lVar29 = 0;
              do {
                uVar22 = puVar12[lVar28 + lVar29 + 1];
                if (uVar22 != 0) {
                  uVar24 = (ulonglong)(iVar30 + (int)lVar29 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_143b08ee8;
                }
                iVar13 = iVar13 + 0x20;
                lVar29 = lVar29 + 1;
              } while (iVar15 - lVar28 != lVar29);
              uVar7 = 0xffffffff;
              iVar30 = iVar15;
            }
            uVar24 = (ulonglong)(iVar30 + 1);
            iVar30 = local_170;
          }
          else {
LAB_143b08ee8:
            uVar31 = (ulonglong)(-uVar22 & uVar22);
            uVar26 = uVar31 * 2 + 1;
            lVar28 = 0x3f;
            if (uVar26 != 0) {
              for (; uVar26 >> lVar28 == 0; lVar28 = lVar28 + -1) {
              }
            }
            iVar30 = (iVar13 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
            if (local_170 <= iVar30) {
              iVar30 = local_170;
            }
          }
        } while (iVar30 != iVar6);
      }
    }
  }
  else {
    uVar22 = local_848 * 0x200 + local_844;
    uVar7 = 0;
    if ((uVar22 != 0) &&
       (uVar7 = 0, 0xfffd < (ushort)(**(short **)CONCAT44(local_83c,uStack_840) - 1U))) {
      uVar23 = 1;
      uVar14 = 1;
      if (1 < (int)uVar22) {
        uVar23 = uVar22;
      }
      do {
        uVar7 = uVar23;
        if (uVar23 == uVar14) break;
        uVar20 = uVar14 >> 9;
        uVar27 = uVar14 & 0x1ff;
        uVar7 = uVar14;
        uVar14 = uVar14 + 1;
      } while (0xfffd < (ushort)(*(short *)(((undefined8 *)CONCAT44(local_83c,uStack_840))[uVar20] +
                                           (ulonglong)uVar27 * 2) - 1U));
    }
    if (uVar7 != uVar22) {
      do {
        cVar5 = (**(code **)(*plVar19 + 0x38))(plVar19,uVar7);
        if (cVar5 == '\0') {
          if ((int)uStack_190 == local_164) {
LAB_143b0847c:
            local_ac8 = false;
          }
          else {
            puVar11 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar11 = local_160;
            }
            iVar6 = *(int *)(puVar11 + (ulonglong)(local_150 - 1U & uVar7) * 4);
            if (iVar6 == -1) goto LAB_143b0847c;
            do {
              local_ac8 = *(uint *)(local_198 + (longlong)iVar6 * 0xc) == uVar7;
              if ((bool)local_ac8) break;
              iVar6 = *(int *)(local_198 + (longlong)iVar6 * 0xc + 4);
            } while (iVar6 != -1);
          }
          lVar28 = *(longlong *)(local_858 + (ulonglong)(uVar7 >> 9) * 8);
          puVar1 = (undefined8 *)(lVar28 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          local_9d8 = (undefined1 *)*puVar1;
          uStack_9d0 = puVar1[1];
          pppppuStack_9c8 = *(undefined ******)(lVar28 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
          (**(code **)(*plVar19 + 8))(plVar19,uVar7,dVar32,&local_9d8);
        }
        uVar23 = uVar7 + 1;
        if ((int)(uVar7 + 1) < (int)uVar22) {
          uVar23 = uVar22;
        }
        do {
          uVar14 = uVar23;
          if (uVar23 - 1 == uVar7) break;
          uVar7 = uVar7 + 1;
          uVar14 = uVar7;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (CONCAT44(local_83c,uStack_840) +
                                               (ulonglong)(uVar7 >> 9) * 8) +
                                             (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
        uVar7 = uVar14;
      } while (uVar7 != uVar22);
    }
  }
LAB_143b08877:
  local_9d8 = (undefined1 *)0x0;
  uStack_9d0 = 0;
  (**(code **)(*local_a60 + 0x40))();
  uVar22 = local_848 * 0x200 + local_844;
  uVar7 = 0;
  if ((uVar22 != 0) &&
     (uVar7 = 0, 0xfffd < (ushort)(**(short **)CONCAT44(local_83c,uStack_840) - 1U))) {
    uVar23 = 1;
    uVar14 = 1;
    if (1 < (int)uVar22) {
      uVar23 = uVar22;
    }
    do {
      uVar7 = uVar23;
      if (uVar23 == uVar14) break;
      uVar20 = uVar14 >> 9;
      uVar27 = uVar14 & 0x1ff;
      uVar7 = uVar14;
      uVar14 = uVar14 + 1;
    } while (0xfffd < (ushort)(*(short *)(((undefined8 *)CONCAT44(local_83c,uStack_840))[uVar20] +
                                         (ulonglong)uVar27 * 2) - 1U));
  }
  do {
    if (uVar7 == uVar22) {
      FUN_14834c30a(&local_878);
      if (local_9d8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_880 = 0;
      if (local_888 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_8c0 >> 0x20;
      uStack_8c0 = uStack_8c0 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_8c8,0);
      }
      uStack_898 = 0xffffffff;
      local_894 = 0;
      local_8a0 = 0;
      if (0x80 < local_89c) {
        local_89c = 0x80;
        FUN_1446efbd8(local_8b8,0);
      }
      if (local_8a8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_8c8 != 0) {
        FUN_1400020a8();
      }
      local_150 = 0;
      if (local_158 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_190 >> 0x20;
      uStack_190 = uStack_190 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_198,0);
      }
      uStack_168 = 0xffffffff;
      local_164 = 0;
      local_170 = 0;
      if (0x80 < local_16c) {
        local_16c = 0x80;
        FUN_1446efbd8(local_188,0);
      }
      if (local_178 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_a60 != (longlong *)0x0) {
        (**(code **)*local_a60)(local_a60,1);
      }
      FUN_14834c6f6(&local_878);
      local_f0 = 0;
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_130 >> 0x20;
      uStack_130 = uStack_130 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_138,0);
      }
      uStack_108 = 0xffffffff;
      local_104 = 0;
      local_110 = 0;
      if (0x80 < local_10c) {
        local_10c = 0x80;
        FUN_1446efbd8(local_128,0);
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      uVar24 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if ((int)uVar24 != 0) {
        FUN_1447a08a2(&local_e8,0);
      }
      uStack_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        FUN_1446efbd8(local_d8,0);
      }
      if (local_c8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if ((local_90 ^ (ulonglong)auStack_ae8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    puVar25 = (undefined4 *)(local_9d8 + (longlong)(int)uVar7 * 0x18);
    cVar5 = FUN_146bfed03(puVar25);
    if (cVar5 != '\0') {
      lVar28 = *(longlong *)(local_858 + (ulonglong)(uVar7 >> 9) * 8);
      *(undefined8 *)(lVar28 + 0x10 + (ulonglong)(uVar7 & 0x1ff) * 0x18) =
           *(undefined8 *)(puVar25 + 4);
      uVar8 = puVar25[1];
      uVar3 = puVar25[2];
      uVar4 = puVar25[3];
      puVar2 = (undefined4 *)(lVar28 + (ulonglong)(uVar7 & 0x1ff) * 0x18);
      *puVar2 = *puVar25;
      puVar2[1] = uVar8;
      puVar2[2] = uVar3;
      puVar2[3] = uVar4;
      if (local_658 == '\x01') {
        LOCK();
        local_654 = local_654 + 1;
        UNLOCK();
      }
    }
    uVar23 = uVar7 + 1;
    if ((int)(uVar7 + 1) < (int)uVar22) {
      uVar23 = uVar22;
    }
    uVar14 = uVar7;
    do {
      uVar7 = uVar23;
      if (uVar23 - 1 == uVar14) break;
      uVar7 = uVar14 + 1;
      uVar14 = uVar7;
    } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                           (CONCAT44(local_83c,uStack_840) +
                                           (ulonglong)(uVar7 >> 9) * 8) +
                                         (ulonglong)(uVar7 & 0x1ff) * 2) - 1U));
  } while( true );
LAB_143b08185:
  if (CONCAT44(uStack_a14,local_a18) != 0) {
    plVar19 = local_a08;
    if (local_a08 == (longlong *)0x0) {
      plVar19 = (longlong *)local_9f8;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_9a8 != (longlong **)0x0) {
    plVar19 = local_998;
    if (local_998 == (longlong *)0x0) {
      plVar19 = (longlong *)local_988;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (local_958[0] != 0) {
    plVar19 = local_948;
    if (local_948 == (longlong *)0x0) {
      plVar19 = local_938;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  local_abc = local_abc & ~(uint)local_aa8;
  puVar12 = local_8a8;
  if (local_8a8 == (uint *)0x0) {
    puVar12 = local_8b8;
  }
  iVar6 = (int)local_ab8;
  lVar28 = (longlong)iVar6;
  uVar7 = puVar12[lVar28] & local_abc;
  if (uVar7 == 0) {
    iVar13 = local_8a0 + 0x1e;
    if (-1 < (int)(local_8a0 - 1)) {
      iVar13 = local_8a0 - 1;
    }
    iVar13 = iVar13 >> 5;
    local_ac0 = local_ac0 + 0x20;
    iVar30 = iVar13;
    if (iVar13 < iVar6) {
      iVar30 = iVar6;
    }
    if (iVar6 < iVar13) {
      lVar29 = 0;
      do {
        uVar7 = puVar12[lVar28 + lVar29 + 1];
        if (uVar7 != 0) {
          local_ab8 = (ulonglong)(iVar6 + (int)lVar29 + 1);
          local_abc = 0xffffffff;
          goto LAB_143b082a6;
        }
        local_ac0 = local_ac0 + 0x20;
        lVar29 = lVar29 + 1;
      } while (iVar30 - lVar28 != lVar29);
      local_abc = 0xffffffff;
      lVar28 = (longlong)iVar30;
    }
    local_ab8 = lVar28 + 1;
    uVar7 = local_8a0;
  }
  else {
LAB_143b082a6:
    local_aa8 = (ulonglong)(-uVar7 & uVar7);
    uVar24 = local_aa8 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar7 = (local_ac0 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if ((int)local_8a0 <= (int)uVar7) {
      uVar7 = local_8a0;
    }
  }
  if (uVar7 == (uint)local_a90) goto LAB_143b07e1b;
  goto LAB_143b07ef1;
}



// FUNCTION 143b090f9 FUN_143b090f9 body=1060 status=ok
// SIG undefined FUN_143b090f9(void)

void FUN_143b090f9(undefined8 *param_1,uint *param_2,undefined4 *param_3,longlong param_4,
                  int param_5,longlong *param_6,longlong *param_7)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 *local_190;
  undefined8 *local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined2 local_164;
  undefined4 local_160;
  int local_15c;
  undefined4 local_158;
  undefined2 local_154;
  undefined8 *local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_108 [48];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [48];
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [48];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = 0;
  local_50 = 0xc00000000;
  local_98 = 0;
  local_90 = 0xc00000000;
  local_d8 = 0;
  local_d0 = 0xc00000000;
  FUN_146bea50a(local_88,(ulonglong)((*param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(param_4 + 0x20) + (ulonglong)(*param_2 >> 9) * 8));
  FUN_146bea50a(local_c8,(ulonglong)((param_2[1] & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(param_4 + 0x20) + (ulonglong)(param_2[1] >> 9) * 8));
  FUN_146bea50a(local_108,
                (ulonglong)((param_2[2] & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(param_2[2] >> 9) * 8));
  local_190 = &local_160;
  local_158 = 1;
  local_154 = 0x100;
  local_160 = 2;
  local_15c = 1;
  if (1 < param_5) {
    local_15c = param_5;
  }
  local_198 = param_3[2];
  local_1a8 = *param_3;
  local_1a0 = param_3[1];
  FUN_146becbe6(&local_148,local_88,local_c8,local_108);
  if (&local_148 == param_1) {
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (local_118 == 0) {
      param_1[4] = local_128;
      param_1[5] = uStack_120;
      param_1[2] = local_138;
      param_1[3] = uStack_130;
      *(undefined4 *)param_1 = (undefined4)local_148;
      *(undefined4 *)((longlong)param_1 + 4) = local_148._4_4_;
      *(undefined4 *)(param_1 + 1) = uStack_140;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_13c;
    }
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_118;
    local_118 = 0;
    *(int *)(param_1 + 7) = (int)local_110;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_110._4_4_;
  }
  local_148 = param_1;
  FUN_146bfd962(&local_148,&local_160);
  if (param_7 == (longlong *)0x0 || param_6 == (longlong *)0x0) goto LAB_143b09300;
  local_168 = 1;
  local_164 = 0x100;
  local_170 = 0xc00000000;
  local_118 = 0;
  local_110 = 0xc00000000;
  iVar5 = *(int *)(param_1 + 7);
  if (0 < iVar5) {
    lVar11 = 0;
LAB_143b093b2:
    puVar7 = (undefined8 *)param_1[6];
    if ((undefined8 *)param_1[6] == (undefined8 *)0x0) {
      puVar7 = param_1;
    }
    uVar1 = *(ushort *)((longlong)puVar7 + lVar11 * 4);
    if (((int)(uint)uVar1 < (int)param_6[1]) &&
       ((int)param_7[1] != *(int *)((longlong)param_7 + 0x34))) {
      lVar2 = *(longlong *)(*param_6 + (ulonglong)uVar1 * 8);
      uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar8 = (uint)lVar2 & 0xffff;
      plVar6 = (longlong *)param_7[8];
      if ((longlong *)param_7[8] == (longlong *)0x0) {
        plVar6 = param_7 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)param_7[9] - 1U &
                      (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        lVar3 = *param_7;
        iVar10 = iVar9;
        do {
          if (*(longlong *)(lVar3 + (longlong)iVar10 * 0x14) == lVar2) goto LAB_143b0946b;
          iVar10 = *(int *)(lVar3 + (longlong)iVar10 * 0x14 + 0xc);
        } while (iVar10 != -1);
      }
    }
    goto LAB_143b0945a;
  }
LAB_143b094b0:
  local_180 = (undefined8 *)0xc00000002;
  uStack_178 = 1;
  uStack_174 = 0x100;
  local_150 = &local_148;
  FUN_146bfd7a6(&local_150,0xffff0000);
LAB_143b094d2:
  FUN_146bea50a(param_1,&local_148);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
LAB_143b09300:
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar9 = *(int *)((longlong)plVar6 + 0xc), iVar9 != -1) {
LAB_143b0946b:
    plVar6 = (longlong *)(lVar3 + (longlong)iVar9 * 0x14);
    if (*plVar6 == lVar2) goto LAB_143b09487;
  }
  plVar6 = (longlong *)0x0;
LAB_143b09487:
  local_180 = &local_148;
  FUN_146bfd7a6(&local_180,
                CONCAT22(*(undefined2 *)((longlong)puVar7 + lVar11 * 4 + 2),(short)plVar6[1]),
                &local_170);
  iVar5 = *(int *)(param_1 + 7);
LAB_143b0945a:
  lVar11 = lVar11 + 1;
  if (iVar5 <= lVar11) goto LAB_143b094a5;
  goto LAB_143b093b2;
LAB_143b094a5:
  if ((int)local_110 == 0) goto LAB_143b094b0;
  if (iVar5 != (int)local_110) {
    local_180 = (undefined8 *)0xc00000002;
    uStack_178 = 1;
    uStack_174 = 0x100;
    local_150 = &local_148;
    FUN_146bfd962();
  }
  goto LAB_143b094d2;
}



// FUNCTION 143b0951e FUN_143b0951e body=296 status=ok
// SIG undefined FUN_143b0951e(void)

void FUN_143b0951e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [48];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)param_1[2] != 0) && (*(longlong *)param_1[2] != *(longlong *)param_1[3])) &&
     (lVar4 = param_1[1], (longlong)(int)lVar4 != 0)) {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar7);
      if ((-1 < (int)uVar1) &&
         (lVar3 = param_1[4], (int)uVar1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)))
      {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                               (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe) {
          local_58 = 0;
          local_50 = 0xc00000000;
          uVar6 = (ulonglong)((uVar1 >> 9) << 3);
          uVar5 = (ulonglong)((uVar1 & 0x1ff) << 6);
          FUN_146bea50a(local_88,*(longlong *)
                                  (*(longlong *)(*(longlong *)param_1[2] + 0x20) + uVar6) + uVar5);
          FUN_146bea50a(uVar5 + *(longlong *)(*(longlong *)(*(longlong *)param_1[3] + 0x20) + uVar6)
                        ,local_88);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b09648 FUN_143b09648 body=1106 status=ok
// SIG undefined FUN_143b09648(void)

undefined8 FUN_143b09648(longlong *param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined1 local_c0;
  longlong local_80;
  longlong local_60;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = *param_1;
  local_128 = local_108;
  local_100 = 0;
  local_c0 = 0;
  local_48 = '\0';
  iVar10 = (**(code **)(**(longlong **)(lVar4 + 8) + 0xa0))
                     (*(longlong **)(lVar4 + 8),param_2,param_3,*(undefined8 *)(lVar4 + 0x98));
  uVar15 = 100;
  switch(iVar10) {
  case 0x17:
    if (*(char *)(lVar4 + 0x91) != '\x01') goto switchD_143b096ca_caseD_19;
    dVar2 = *(double *)(lVar4 + 0x98);
    lVar5 = *(longlong *)(lVar4 + 8);
    uVar6 = (param_3 & 0xffffffff) >> 9;
    lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar6 * 8);
    uVar16 = (ulonglong)((uint)param_3 & 0x1ff);
    uVar14 = (param_2 & 0xffffffff) >> 9;
    lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar14 * 8);
    uVar13 = (ulonglong)((uint)param_2 & 0x1ff);
    dVar17 = 1.0 - dVar2;
    local_110 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18) * dVar17 +
                *(double *)(lVar7 + 0x10 + uVar16 * 0x18) * dVar2;
    dStack_118 = *(double *)(lVar8 + 8 + uVar13 * 0x18) * dVar17 +
                 *(double *)(lVar7 + 8 + uVar16 * 0x18) * dVar2;
    local_120 = dVar17 * *(double *)(lVar8 + uVar13 * 0x18) +
                dVar2 * *(double *)(lVar7 + uVar16 * 0x18);
    cVar9 = FUN_146bfed03();
    if (cVar9 != '\0') {
      lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar14 * 8);
      *(double *)(lVar7 + 0x10 + uVar13 * 0x18) = local_110;
      pdVar1 = (double *)(lVar7 + uVar13 * 0x18);
      *pdVar1 = local_120;
      pdVar1[1] = dStack_118;
      if (*(char *)(lVar5 + 0x210) == '\x01') {
        LOCK();
        *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
        UNLOCK();
      }
    }
    lVar5 = *(longlong *)(lVar4 + 8);
    cVar9 = FUN_146bfed03(&local_120);
    if (cVar9 != '\0') {
      lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar6 * 8);
      *(double *)(lVar7 + 0x10 + uVar16 * 0x18) = local_110;
      pdVar1 = (double *)(lVar7 + uVar16 * 0x18);
      *pdVar1 = local_120;
      pdVar1[1] = dStack_118;
      if (*(char *)(lVar5 + 0x210) == '\x01') {
        LOCK();
        *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
        UNLOCK();
      }
    }
    if ((0 < (int)param_4) &&
       (uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x68) + -4 + (ulonglong)param_4 * 4),
       -1 < (int)uVar11)) {
      lVar5 = *(longlong *)(lVar4 + 8);
      uVar12 = *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4);
      if (((int)uVar11 < (int)uVar12) &&
         (((((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar11 >> 9) * 8) +
                                (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe &&
            (uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x28) +
                              (longlong)(int)(*(int *)(lVar4 + 0x30) - param_4) * 4),
            -1 < (int)uVar3)) && (uVar3 < uVar12)) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                              (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        iVar10 = *(int *)(lVar4 + 0xa8);
        *(uint *)(lVar4 + 0xa8) = iVar10 + 1U;
        if (*(uint *)(lVar4 + 0xac) < iVar10 + 1U) {
          FUN_1406b704c((longlong *)(lVar4 + 0xa0),iVar10);
        }
        *(ulonglong *)(*(longlong *)(lVar4 + 0xa0) + (longlong)iVar10 * 8) = CONCAT44(uVar3,uVar11);
      }
    }
    if (((int)param_4 < *(int *)(lVar4 + 0x70)) &&
       (uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x68) + (longlong)(int)param_4 * 4),
       -1 < (int)uVar11)) {
      lVar5 = *(longlong *)(lVar4 + 8);
      uVar12 = *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4);
      if (((((int)uVar11 < (int)uVar12) &&
           (((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar11 >> 9) * 8) +
                                (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe &&
            (uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x28) +
                              (longlong)(int)(~param_4 + *(int *)(lVar4 + 0x30)) * 4),
            -1 < (int)uVar3)))) && (uVar3 < uVar12)) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                             (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        iVar10 = *(int *)(lVar4 + 0xa8);
        *(uint *)(lVar4 + 0xa8) = iVar10 + 1U;
        if (*(uint *)(lVar4 + 0xac) < iVar10 + 1U) {
          FUN_1406b704c((longlong *)(lVar4 + 0xa0),iVar10);
        }
        *(ulonglong *)(*(longlong *)(lVar4 + 0xa0) + (longlong)iVar10 * 8) = CONCAT44(uVar3,uVar11);
      }
    }
    break;
  case 0x18:
  case 0x1a:
  case 0x1d:
    uVar11 = FUN_146c061e0(*(undefined8 *)(lVar4 + 8),param_2 & 0xffffffff,param_3 & 0xffffffff);
    if (((int)uVar11 < 0) ||
       (lVar5 = *(longlong *)(lVar4 + 8),
       *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4) <= (int)uVar11))
    goto switchD_143b096ca_caseD_19;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar11 >> 9) * 8)
                                    + (ulonglong)(uVar11 & 0x1ff) * 2) - 1U))
    goto switchD_143b096ca_caseD_19;
    uVar6 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (ulonglong)(uVar11 >> 9) * 8) + 8 +
             (ulonglong)((uVar11 & 0x1ff) << 4));
    uVar14 = uVar6 >> 0x20;
    FUN_146c0b65a(lVar5,uVar6,CONCAT71((int7)((ulonglong)*(longlong *)(lVar5 + 0x1c0) >> 8),1),0);
    if (uVar14 != 0xffffffff) {
      FUN_146c0b65a(*(undefined8 *)(lVar4 + 8),uVar14,1,0);
    }
    break;
  case 0x19:
  case 0x1b:
  case 0x1c:
    goto switchD_143b096ca_caseD_19;
  default:
    if (iVar10 != 0) goto switchD_143b096ca_caseD_19;
  }
  uVar15 = 0;
switchD_143b096ca_caseD_19:
  if (local_48 == '\x01') {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 143b09a9c FUN_143b09a9c body=203 status=ok
// SIG undefined FUN_143b09a9c(void)

undefined4 FUN_143b09a9c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 **local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = *(undefined1 *)(param_1 + 3);
  local_23 = *(undefined1 *)((longlong)param_1 + 0x19);
  local_22 = *(undefined1 *)((longlong)param_1 + 0x1a);
  local_28 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_2c = *(undefined4 *)(param_1 + 2);
  local_21 = *(undefined1 *)((longlong)param_1 + 0x1b);
  local_38 = (undefined8 *)*param_1;
  local_48 = &PTR_FUN_14ae73ac0;
  local_40 = *local_38;
  FUN_1483434a0(local_28,local_60,&local_48);
  local_68 = &local_78;
  local_70 = &LAB_143b11104;
  local_78 = local_60;
  uVar1 = FUN_14297d3ba(&local_2c,&local_48,local_50);
  FUN_146be9400(local_58);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b09b68 FUN_143b09b68 body=952 status=ok
// SIG undefined FUN_143b09b68(void)

undefined8 FUN_143b09b68(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  longlong lVar13;
  bool bVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  undefined1 **local_130;
  double local_128;
  double dStack_120;
  double local_118;
  longlong *local_110;
  uint local_100 [4];
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined1 *local_d8;
  double *local_d0;
  undefined1 local_c1;
  undefined1 *local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  undefined8 *puVar12;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  puVar12 = (undefined8 *)param_2[2];
  param_3[2] = (double)puVar12;
  dVar8 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = dVar8;
  lVar6 = *param_1;
  uVar18 = *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24);
  uVar21 = 0;
  if ((uVar18 != 0) &&
     (puVar12 = *(undefined8 **)(lVar6 + 0x28), uVar21 = 0,
     0xfffd < (ushort)(*(short *)*puVar12 - 1U))) {
    uVar20 = 1;
    uVar15 = 1;
    if (1 < (int)uVar18) {
      uVar20 = uVar18;
    }
    do {
      uVar21 = uVar20;
      if (uVar20 == uVar15) break;
      uVar17 = uVar15 >> 9;
      uVar19 = uVar15 & 0x1ff;
      uVar21 = uVar15;
      uVar15 = uVar15 + 1;
    } while (0xfffd < (ushort)(*(short *)(puVar12[uVar17] + (ulonglong)uVar19 * 2) - 1U));
  }
  uVar11 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
  if (uVar21 != uVar18) {
    dVar8 = 0.0;
    bVar14 = true;
    dVar9 = 0.0;
    dVar10 = 0.0;
    lVar13 = lVar6;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(uVar21 >> 9) * 8);
      uVar16 = (ulonglong)(uVar21 & 0x1ff);
      dVar23 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
      dVar1 = *(double *)(lVar7 + 8 + uVar16 * 0x18);
      dVar2 = *(double *)(lVar7 + uVar16 * 0x18);
      dVar3 = *param_2;
      dVar4 = param_2[1];
      dVar5 = param_2[2];
      dVar22 = (dVar23 - (double)param_1[3]) * dVar5 +
               (dVar2 - (double)param_1[1]) * dVar3 + (dVar1 - (double)param_1[2]) * dVar4;
      if ((double)param_1[6] <= dVar22) {
        local_118 = dVar23 - (dVar5 + dVar5) * dVar22;
        dStack_120 = dVar1 - (dVar4 + dVar4) * dVar22;
        local_128 = dVar2 - (dVar3 + dVar3) * dVar22;
        local_b8 = &local_c1;
        local_c0 = &LAB_146c80466;
        local_d8 = &LAB_143b0b220;
        local_d0 = &local_128;
        local_130 = &local_c0;
        local_138 = &local_d8;
        local_110 = param_1;
        local_f0 = local_128;
        dStack_e8 = dStack_120;
        local_e0 = local_118;
        FUN_146c80058(param_1[4],local_100,&local_f0,param_1[7]);
        if (local_100[0] == 0xffffffff) {
          uVar11 = 0;
          goto LAB_143b09ebb;
        }
        lVar13 = *param_1;
        lVar7 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + (ulonglong)(local_100[0] >> 9) * 8);
        uVar16 = (ulonglong)(local_100[0] & 0x1ff);
        dVar10 = dVar10 + (dVar2 - *(double *)(lVar7 + uVar16 * 0x18));
        dVar9 = dVar9 + (dVar1 - *(double *)(lVar7 + 8 + uVar16 * 0x18));
        dVar8 = dVar8 + (dVar23 - *(double *)(lVar7 + 0x10 + uVar16 * 0x18));
        bVar14 = false;
      }
      uVar20 = uVar21 + 1;
      if ((int)(uVar21 + 1) < (int)uVar18) {
        uVar20 = uVar18;
      }
      do {
        uVar15 = uVar20;
        if (uVar20 - 1 == uVar21) break;
        uVar21 = uVar21 + 1;
        uVar15 = uVar21;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar6 + 0x28) +
                                             (ulonglong)(uVar21 >> 9) * 8) +
                                           (ulonglong)(uVar21 & 0x1ff) * 2) - 1U));
      uVar21 = uVar15;
    } while (uVar21 != uVar18);
    uVar11 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
    if ((!bVar14) &&
       (dVar23 = dVar8 * dVar8 + dVar10 * dVar10 + dVar9 * dVar9, 9.99999993922529e-09 < dVar23)) {
      dVar23 = 1.0 / SQRT(dVar23);
      *param_3 = dVar10 * dVar23;
      param_3[1] = dVar9 * dVar23;
      param_3[2] = dVar8 * dVar23;
    }
  }
LAB_143b09ebb:
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143b09f22 FUN_143b09f22 body=477 status=ok
// SIG undefined FUN_143b09f22(void)

undefined8 FUN_143b09f22(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = param_2[2] - (double)param_1[4];
  dVar8 = param_2[1] - (double)param_1[3];
  dVar6 = *param_2 - (double)param_1[2];
  dVar10 = dVar9 * dVar9 + dVar6 * dVar6 + dVar8 * dVar8;
  if ((double)param_1[5] <= dVar10) {
    pdVar3 = (double *)param_1[1];
    if (*(char *)*param_1 == '\x01') {
      dVar10 = *pdVar3;
      dVar1 = pdVar3[1];
      dVar2 = pdVar3[2];
      dVar7 = dVar9 * dVar2 + dVar6 * dVar10 + dVar8 * dVar1;
      dVar5 = dVar6 - dVar7 * dVar10;
      dVar4 = dVar8 - dVar1 * dVar7;
      dVar7 = dVar9 - dVar2 * dVar7;
      if ((double)param_1[5] < dVar7 * dVar7 + dVar4 * dVar4 + dVar5 * dVar5) {
        dVar7 = dVar6 * dVar1 - dVar10 * dVar8;
        dVar10 = dVar9 * dVar10 - dVar2 * dVar6;
        dVar6 = dVar8 * dVar2 - dVar1 * dVar9;
        *param_3 = dVar6;
        param_3[1] = dVar10;
        param_3[2] = dVar7;
        dVar8 = dVar7 * dVar7 + dVar6 * dVar6 + dVar10 * dVar10;
        if (9.99999993922529e-09 < dVar8) {
          dVar8 = 1.0 / SQRT(dVar8);
          *param_3 = dVar6 * dVar8;
          param_3[1] = dVar10 * dVar8;
          param_3[2] = dVar7 * dVar8;
          return CONCAT71((int7)((ulonglong)pdVar3 >> 8),1);
        }
      }
    }
    else {
      *pdVar3 = dVar6;
      pdVar3[1] = dVar8;
      pdVar3[2] = dVar9;
      *(bool *)*param_1 = 9.99999993922529e-09 < dVar10;
    }
  }
  return 0;
}



// FUNCTION 143b0a100 FUN_143b0a100 body=238 status=ok
// SIG undefined FUN_143b0a100(void)

undefined4 FUN_143b0a100(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c [3];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1 = (longlong *)*param_1;
  lVar5 = (longlong)param_2;
  iVar1 = *(int *)(param_1[2] + lVar5 * 4);
  local_50 = *(undefined4 *)(param_1[4] + 8 + lVar5 * 0xc);
  local_58 = *(undefined8 *)(param_1[4] + lVar5 * 0xc);
  local_40 = 0x300000000;
  lVar5 = 0;
  iVar6 = 0;
  do {
    lVar3 = (longlong)*(int *)((longlong)&local_58 + lVar5 * 4);
    if (-1 < lVar3) {
      local_5c = *(int *)(param_1[2] + lVar3 * 4);
      if ((((-1 < (longlong)local_5c) && (local_5c < (int)param_1[1])) &&
          (*(char *)(*param_1 + (longlong)local_5c * 0x30) != '\0')) && (local_5c != iVar1)) {
        iVar6 = iVar6 + 1;
        FUN_146c90f72(local_4c,&local_5c);
      }
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  uVar4 = 0xffffffff;
  if ((int)local_40 == 1) {
    uVar4 = local_4c[0];
  }
  uVar2 = 0xffffffff;
  if (1 < iVar6) {
    uVar2 = uVar4;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0a1f0 FUN_143b0a1f0 body=203 status=ok
// SIG undefined FUN_143b0a1f0(void)

undefined4 FUN_143b0a1f0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 **local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_24 = *(undefined1 *)(param_1 + 3);
  local_23 = *(undefined1 *)((longlong)param_1 + 0x19);
  local_22 = *(undefined1 *)((longlong)param_1 + 0x1a);
  local_28 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_2c = *(undefined4 *)(param_1 + 2);
  local_21 = *(undefined1 *)((longlong)param_1 + 0x1b);
  local_38 = (undefined8 *)*param_1;
  local_48 = &PTR_FUN_14ae73ac0;
  local_40 = *local_38;
  FUN_1483434a0(local_28,local_60,&local_48);
  local_68 = &local_78;
  local_70 = &LAB_143b1111a;
  local_78 = local_60;
  uVar1 = FUN_14297eb26(&local_2c,&local_48,local_50);
  FUN_146be9400(local_58);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0a2bc FUN_143b0a2bc body=69 status=ok
// SIG undefined FUN_143b0a2bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143b0a2bc(void)

{
  _DAT_14cb46750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143b0a2fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb46758,1);
  return;
}



// FUNCTION 143b0a302 FUN_143b0a302 body=480 status=ok
// SIG undefined FUN_143b0a302(void)

void FUN_143b0a302(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [40];
  int local_90;
  uint local_8c;
  int local_88 [6];
  undefined8 local_70;
  undefined4 local_68;
  uint *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 8) + 0x130) + (ulonglong)(param_2 >> 9) * 8);
  local_68 = *(undefined4 *)(lVar8 + 8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  local_70 = *(undefined8 *)(lVar8 + (ulonglong)(param_2 & 0x1ff) * 0xc);
  uVar6 = param_2 * 3 + 2;
  lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x78);
  uVar7 = param_2 * 3 + 1;
  local_88[3] = *(undefined4 *)
                 (*(longlong *)(lVar8 + (ulonglong)(param_2 * 3 >> 9) * 8) +
                 (ulonglong)(param_2 * 3 & 0x1ff) * 4);
  local_88[4] = *(undefined4 *)
                 (*(longlong *)(lVar8 + (ulonglong)(uVar7 >> 9) * 8) +
                 (ulonglong)(uVar7 & 0x1ff) * 4);
  local_88[5] = *(undefined4 *)
                 (*(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8) +
                 (ulonglong)(uVar6 & 0x1ff) * 4);
  local_88[0] = -1;
  local_88[1] = -1;
  local_88[2] = 0xffffffff;
  lVar8 = 0;
  do {
    local_8c = *(uint *)((longlong)&local_70 + lVar8 * 4);
    plVar4 = (longlong *)param_1[1];
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar5 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar4[8];
      }
      iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar4[9] - 1U & local_8c) * 4);
      if (iVar3 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar3 * 0x10;
          if (*(uint *)(*plVar4 + (longlong)iVar3 * 0x10) == local_8c) {
            if ((int *)(lVar1 + 4) != (int *)0x0 && lVar1 != 0) {
              iVar3 = *(int *)(lVar1 + 4);
              goto LAB_143b0a471;
            }
            break;
          }
          iVar3 = *(int *)(lVar1 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = local_88[lVar8 + 3];
    if (iVar3 < 0) {
      local_60 = DAT_14c84635c;
      iVar3 = FUN_146c2d0a4(*(undefined8 *)(lVar2 + 0x50),&local_60);
      plVar4 = (longlong *)param_1[1];
    }
    local_90 = iVar3;
    local_60 = &local_8c;
    local_58 = &local_90;
    FUN_140263e2a(plVar4,local_4c,&local_60,0);
    iVar3 = local_90;
LAB_143b0a471:
    local_88[lVar8] = iVar3;
    lVar8 = lVar8 + 1;
    if (lVar8 == 3) {
      FUN_146c01486(*(undefined8 *)(lVar2 + 0x50),param_2,local_88,1);
      if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 143b0a4e4 FUN_143b0a4e4 body=1998 status=ok
// SIG undefined FUN_143b0a4e4(void)

ulonglong FUN_143b0a4e4(longlong *param_1,ulonglong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  code *pcVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong *plVar28;
  undefined8 unaff_RBX;
  bool bVar29;
  uint *puVar30;
  ulonglong uVar31;
  uint uVar32;
  uint *puVar33;
  int iVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined1 auStack_338 [40];
  longlong *local_310;
  undefined8 local_308;
  undefined8 local_300;
  uint *local_2f8;
  int local_2f0;
  uint *local_2e8;
  undefined8 uStack_2e0;
  undefined4 *local_2d8;
  undefined8 uStack_2d0;
  uint local_2c0;
  undefined1 local_2bc [4];
  code *local_2b8;
  undefined8 *puStack_2b0;
  longlong *local_2a8;
  undefined8 uStack_2a0;
  longlong local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  uint local_278 [20];
  undefined1 local_228;
  code *local_218;
  undefined8 *puStack_210;
  longlong *local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  plVar7 = (longlong *)*param_1;
  local_2c0 = (uint)param_2;
  cVar22 = FUN_146c1a770(plVar7[9],param_2,0);
  uVar27 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar22 != '\0') {
    uVar31 = (param_2 & 0xffffffff) >> 9;
    lVar26 = *(longlong *)(*(longlong *)(*plVar7 + 0x1c0) + uVar31 * 8);
    uVar35 = (uint)param_2 & 0x1ff;
    uVar27 = (ulonglong)(uVar35 << 4);
    iVar34 = *(int *)(lVar26 + uVar27);
    iVar4 = *(int *)(lVar26 + 4 + uVar27);
    uVar27 = *(ulonglong *)(lVar26 + uVar27);
    uVar23 = FUN_148347e08(plVar7,uVar27 & 0xffffffff);
    if (uVar23 != 0xffffffff) {
      local_310 = (longlong *)(uVar27 >> 0x20);
      iVar24 = FUN_148347e08(plVar7);
      if (iVar24 != -1) {
        lVar26 = *plVar7;
        lVar8 = *(longlong *)(*(longlong *)(lVar26 + 0x1c0) + uVar31 * 8);
        if (*(int *)(lVar8 + 0xc + (ulonglong)(uVar35 << 4)) == -1) {
          uVar27 = *(ulonglong *)(lVar8 + 8 + (ulonglong)(uVar35 << 4));
          uVar23 = (uint)uVar27;
          uVar35 = uVar23 * 3 + 2;
          uVar32 = uVar23 * 3 + 1;
          lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x130) + (uVar27 >> 9 & 0x7fffff) * 8);
          uVar27 = (ulonglong)(uVar23 & 0x1ff);
          iVar24 = *(int *)(lVar26 + uVar27 * 0xc);
          iVar5 = *(int *)(lVar26 + 4 + uVar27 * 0xc);
          iVar6 = *(int *)(lVar26 + 8 + uVar27 * 0xc);
          lVar26 = *(longlong *)(plVar7[9] + 0x78);
          local_278[0] = *(uint *)(*(longlong *)(lVar26 + (ulonglong)(uVar23 * 3 >> 9) * 8) +
                                  (ulonglong)(uVar23 * 3 & 0x1ff) * 4);
          local_278[1] = *(undefined4 *)
                          (*(longlong *)(lVar26 + (ulonglong)(uVar32 >> 9) * 8) +
                          (ulonglong)(uVar32 & 0x1ff) * 4);
          local_278[2] = *(undefined4 *)
                          (*(longlong *)(lVar26 + (ulonglong)(uVar35 >> 9) * 8) +
                          (ulonglong)(uVar35 & 0x1ff) * 4);
          local_310 = plVar7 + 0x20;
          bVar21 = true;
          do {
            bVar29 = bVar21;
            puVar30 = local_278;
            if ((((iVar24 == iVar34) || (puVar30 = local_278 + 1, iVar5 == iVar34)) ||
                (puVar30 = local_278 + 2, iVar6 == iVar34)) &&
               (((uVar23 = *puVar30, -1 < (int)uVar23 &&
                 (lVar26 = plVar7[9],
                 (int)uVar23 < *(int *)(lVar26 + 8) * 0x200 + *(int *)(lVar26 + 0xc))) &&
                ((ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar26 + 0x10) + (ulonglong)(uVar23 >> 9) * 8)
                                    + (ulonglong)(uVar23 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
              FUN_1447cbafe(local_310,&local_2b8,puVar30,0);
            }
            iVar34 = iVar4;
            bVar21 = false;
          } while (bVar29);
          uVar27 = CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
        }
        else {
          lVar8 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + (uVar27 >> 9 & 0x7fffff) * 8);
          uVar31 = uVar27 & 0x1ff;
          dVar1 = *(double *)(lVar8 + uVar31 * 0x18);
          dVar2 = *(double *)(lVar8 + 8 + uVar31 * 0x18);
          dVar3 = *(double *)(lVar8 + 0x10 + uVar31 * 0x18);
          lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + (uVar27 >> 0x29) * 8);
          uVar27 = (ulonglong)local_310 & 0x1ff;
          dVar12 = *(double *)(lVar26 + 0x10 + uVar27 * 0x18) - dVar3;
          dVar11 = *(double *)(lVar26 + 8 + uVar27 * 0x18) - dVar2;
          dVar37 = *(double *)(lVar26 + uVar27 * 0x18) - dVar1;
          dVar13 = SQRT(dVar12 * dVar12 + dVar37 * dVar37 + dVar11 * dVar11);
          dVar14 = DAT_14c8464f0;
          dVar15 = DAT_14c8464e8;
          dVar36 = DAT_14c8464e0;
          if (9.99999993922529e-09 < dVar13) {
            dVar36 = 1.0 / dVar13;
            dVar14 = dVar12 * dVar36;
            dVar15 = dVar11 * dVar36;
            dVar36 = dVar37 * dVar36;
          }
          FUN_1483387d2(local_278,plVar7[1]);
          if ((double)plVar7[0x2a] <= 1.0) {
            dVar37 = (double)plVar7[5];
            uVar39 = 0xffffffff;
            uVar40 = 0x7fefffff;
          }
          else {
            dVar13 = dVar13 * (double)plVar7[0x2a];
            dVar37 = (double)plVar7[5];
            dVar11 = (double)plVar7[0x2b];
            uVar39 = SUB84(dVar11,0);
            uVar40 = (undefined4)((ulonglong)dVar11 >> 0x20);
            auVar10._12_4_ = unaff_XMM13_Dd;
            auVar10._8_4_ = unaff_XMM13_Dc;
            auVar38._0_8_ = -(ulonglong)(0.0 < dVar37) & (ulonglong)((dVar37 + 1.0) * dVar13);
            auVar38._8_8_ = 0;
            auVar10._0_8_ = ~-(ulonglong)(0.0 < dVar37) & (ulonglong)dVar13;
            auVar38 = auVar38 | auVar10;
            if (dVar11 <= auVar38._0_8_) {
              uVar39 = auVar38._0_4_;
              uVar40 = auVar38._4_4_;
            }
          }
          if ((0.0 < dVar37) &&
             (((dVar36 != 0.0 || (NAN(dVar36))) ||
              ((dVar15 != 0.0 || (((NAN(dVar15) || (dVar14 != 0.0)) || (NAN(dVar14))))))))) {
            local_228 = 1;
            lVar26 = param_1[2];
            local_2b8 = (code *)0x0;
            plVar25 = (longlong *)FUN_14001cc68(0x48,8);
            uVar20 = uStack_1e0;
            uVar19 = local_1e8;
            uVar18 = uStack_1f0;
            lVar8 = local_1f8;
            uVar9 = uStack_200;
            local_2a8 = local_208;
            puVar17 = puStack_210;
            pcVar16 = local_218;
            *plVar25 = (longlong)&PTR_LAB_14ae73af0;
            plVar25[1] = (longlong)plVar7;
            plVar25[2] = (longlong)dVar1;
            plVar25[3] = (longlong)dVar2;
            plVar25[4] = (longlong)dVar3;
            plVar25[5] = (longlong)dVar36;
            plVar25[6] = (longlong)dVar15;
            plVar25[7] = (longlong)dVar14;
            plVar25[8] = lVar26;
            if (plVar25 + 1 != (longlong *)0x0) {
              local_2b8 = FUN_143b0b276;
            }
            local_218 = local_2b8;
            puStack_210 = puStack_2b0;
            local_208 = plVar25;
            uStack_200 = uStack_2a0;
            local_1f8 = local_298;
            uStack_1f0 = uStack_290;
            local_1e8 = local_288;
            uStack_1e0 = uStack_280;
            local_2b8 = pcVar16;
            puStack_2b0 = puVar17;
            uStack_2a0 = uVar9;
            local_298 = lVar8;
            uStack_290 = uVar18;
            local_288 = uVar19;
            uStack_280 = uVar20;
            if (pcVar16 != (code *)0x0) {
              plVar25 = local_2a8;
              if (local_2a8 == (longlong *)0x0) {
                plVar25 = &local_298;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
          }
          local_2b8 = (code *)0x0;
          puStack_2b0 = (undefined8 *)CONCAT44(puStack_2b0._4_4_,1);
          FUN_14834f5fa(&local_2b8);
          *(uint *)local_2b8 = uVar23;
          *(uint *)(local_2b8 + 4) = uVar23;
          *(undefined8 *)(local_2b8 + 8) = 0;
          cVar22 = FUN_14834e91a(local_278,&local_2b8,iVar24,CONCAT44(uVar40,uVar39));
          if (local_2b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (cVar22 == '\0') {
            uVar27 = 0;
          }
          else {
            local_2d8 = (undefined4 *)0x0;
            uStack_2d0 = 0;
            FUN_14834eb2e(local_278,iVar24,&local_2d8,100000);
            local_2e8 = (uint *)0x0;
            uStack_2e0 = 0;
            FUN_146c5e730(plVar7[1],&local_2d8,&local_2e8);
            lVar26 = (longlong)(int)uStack_2e0;
            uVar27 = CONCAT71((int7)((ulonglong)&local_2e8 >> 8),0 < lVar26);
            if (0 < lVar26) {
              if (plVar7[8] != 0) {
                puVar30 = local_2e8 + lVar26;
                puVar33 = local_2e8;
LAB_143b0ab44:
                uVar23 = *puVar33;
                local_2b8 = (code *)CONCAT44(local_2b8._4_4_,uVar23);
                plVar25 = (longlong *)plVar7[8];
                if ((int)plVar25[1] != *(int *)((longlong)plVar25 + 0x34)) {
                  uVar9 = *(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(plVar7[1] + 0x1c0) + (ulonglong)(uVar23 >> 9) * 8) + 8 +
                           (ulonglong)((uVar23 & 0x1ff) << 4));
                  plVar28 = plVar25 + 7;
                  if ((longlong *)plVar25[8] != (longlong *)0x0) {
                    plVar28 = (longlong *)plVar25[8];
                  }
                  uVar35 = (int)plVar25[9] - 1;
                  uVar23 = (uint)uVar9;
                  iVar34 = *(int *)((longlong)plVar28 + (ulonglong)(uVar35 & uVar23) * 4);
                  if (iVar34 != -1) {
                    do {
                      if (*(uint *)(*plVar25 + (longlong)iVar34 * 0xc) == uVar23)
                      goto LAB_143b0abf9;
                      iVar34 = *(int *)(*plVar25 + (longlong)iVar34 * 0xc + 4);
                    } while (iVar34 != -1);
                  }
                  uVar23 = (uint)((ulonglong)uVar9 >> 0x20);
                  if ((uVar23 != 0xffffffff) &&
                     (iVar34 = *(int *)((longlong)plVar28 + (ulonglong)(uVar35 & uVar23) * 4),
                     iVar34 != -1)) {
                    do {
                      if (*(uint *)(*plVar25 + (longlong)iVar34 * 0xc) == uVar23)
                      goto LAB_143b0abf9;
                      iVar34 = *(int *)(*plVar25 + (longlong)iVar34 * 0xc + 4);
                    } while (iVar34 != -1);
                  }
                }
                goto LAB_143b0ac0b;
              }
              local_2f8 = local_2e8;
              local_2f0 = (int)uStack_2e0;
              FUN_146bc855c(param_1[1]);
LAB_143b0ac18:
              local_308 = CONCAT44(*local_2e8,local_2e8[(int)uStack_2e0 + -1]);
              puStack_2b0 = &local_308;
              local_300 = CONCAT44(*local_2d8,local_2d8[(int)uStack_2d0 + -1]);
              local_2b8 = (code *)&local_2c0;
              FUN_14834f714(plVar7 + 0x16,local_2bc);
            }
            if (local_2e8 != (uint *)0x0) {
              FUN_1400020a8();
            }
            if (local_2d8 != (undefined4 *)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_148338d34(local_278);
        }
        goto LAB_143b0a576;
      }
    }
    uVar27 = 0;
  }
LAB_143b0a576:
  if ((local_d0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar27 & 0xffffffff;
LAB_143b0abf9:
  FUN_1447cbafe(param_1[1],&local_308,&local_2b8,0);
LAB_143b0ac0b:
  puVar33 = puVar33 + 1;
  if (puVar33 == puVar30) goto LAB_143b0ac18;
  goto LAB_143b0ab44;
}



// FUNCTION 143b0acb4 FUN_143b0acb4 body=350 status=ok
// SIG undefined FUN_143b0acb4(void)

ulonglong FUN_143b0acb4(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  uint *local_48;
  undefined8 uStack_40;
  char local_2d;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  local_2c = param_2;
  if (param_2 == 0xffffffff) {
    uVar6 = CONCAT71(uVar7,1);
  }
  else {
    lVar2 = *param_1;
    local_2d = '\0';
    FUN_1447cbafe(param_1[1],&local_48,&local_2c,&local_2d);
    uVar6 = CONCAT71(uVar7,1);
    if (local_2d == '\0') {
      if (*(int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar2 + 0x48) + 0x60) +
                    (ulonglong)(local_2c >> 9) * 8) + (ulonglong)(local_2c & 0x1ff) * 4) != -1) {
        iVar4 = FUN_148347e08(lVar2);
        if (iVar4 != -1) {
          local_48 = (uint *)0x0;
          uStack_40 = 0;
          FUN_146c2e56c(*(undefined8 *)(lVar2 + 0x50),iVar4,&local_48);
          if ((int)uStack_40 < 2) {
            lVar3 = *(longlong *)(lVar2 + 0x50);
            lVar2 = *(longlong *)
                     (*(longlong *)(*(longlong *)(lVar2 + 0x48) + 0x48) +
                     (ulonglong)(local_2c >> 5 & 0x3fffff8));
            uVar8 = (ulonglong)((local_2c & 0xff) << 3);
            uVar1 = *(undefined4 *)(lVar2 + 4 + uVar8);
            uVar5 = (ulonglong)(*local_48 >> 5 & 0x3fffff8);
            uVar9 = (ulonglong)((*local_48 & 0xff) << 3);
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar5) + uVar9) =
                 *(undefined4 *)(lVar2 + uVar8);
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + uVar5) + 4 + uVar9) = uVar1;
            FUN_1447cbafe(param_1[2],local_4c,local_48,0);
          }
          if (local_48 != (uint *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_143b0ad2d;
        }
      }
      uVar6 = 0;
    }
  }
LAB_143b0ad2d:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0ae13 FUN_143b0ae13 body=608 status=ok
// SIG undefined FUN_143b0ae13(void)

void FUN_143b0ae13(longlong param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8);
  uVar10 = (ulonglong)((param_2 & 0x1ff) << 4);
  uVar3 = *(uint *)(lVar8 + uVar10);
  uVar4 = *(uint *)(lVar8 + 4 + uVar10);
  uVar5 = *(uint *)(lVar8 + 8 + uVar10);
  FUN_146c12888(param_1,&local_50,param_2);
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar9 = *(longlong *)(lVar8 + (ulonglong)(local_50 >> 9) * 8);
  puVar1 = (undefined8 *)(lVar9 + ((ulonglong)local_50 & 0x1ff) * 0x18);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  local_58 = *(undefined8 *)(lVar9 + 0x10 + ((ulonglong)local_50 & 0x1ff) * 0x18);
  lVar9 = *(longlong *)(lVar8 + (ulonglong)(local_4c >> 9) * 8);
  local_78 = *(undefined8 *)(lVar9 + 0x10 + ((ulonglong)local_4c & 0x1ff) * 0x18);
  puVar1 = (undefined8 *)(lVar9 + ((ulonglong)local_4c & 0x1ff) * 0x18);
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
  uVar10 = (ulonglong)uVar5 & 0x1ff;
  uVar5 = *(uint *)(lVar9 + uVar10 * 0xc);
  uVar6 = *(uint *)(lVar9 + 8 + uVar10 * 0xc);
  if (uVar3 == uVar5) {
    bVar11 = uVar6 == uVar4;
  }
  else {
    uVar7 = *(uint *)(lVar9 + 4 + uVar10 * 0xc);
    if (uVar3 == uVar7) {
      bVar11 = uVar5 == uVar4;
    }
    else {
      bVar11 = uVar7 == uVar4 && uVar6 == uVar3;
    }
  }
  uVar5 = uVar4;
  if (bVar11) {
    uVar5 = uVar3;
    uVar3 = uVar4;
  }
  lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar3 >> 9) * 8);
  local_98 = *(undefined8 *)(lVar9 + 0x10 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
  puVar1 = (undefined8 *)(lVar9 + (ulonglong)(uVar3 & 0x1ff) * 0x18);
  local_a8 = *puVar1;
  uStack_a0 = puVar1[1];
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
  local_b8 = *(undefined8 *)(lVar8 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
  puVar2 = (undefined4 *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
  local_c8 = *puVar2;
  uStack_c4 = puVar2[1];
  uStack_c0 = puVar2[2];
  uStack_bc = puVar2[3];
  FUN_146baf581(&local_e0,&local_a8,&local_c8,&local_68);
  *(undefined8 *)(param_3 + 4) = local_d0;
  *param_3 = local_e0;
  param_3[1] = uStack_dc;
  param_3[2] = uStack_d8;
  param_3[3] = uStack_d4;
  FUN_146baf581(&local_e0,&local_c8,&local_a8,&local_88);
  *(undefined8 *)(param_4 + 4) = local_d0;
  *param_4 = local_e0;
  param_4[1] = uStack_dc;
  param_4[2] = uStack_d8;
  param_4[3] = uStack_d4;
  FUN_146baf581(&local_e0,&local_68,&local_88,&local_c8);
  *(undefined8 *)(param_5 + 4) = local_d0;
  *param_5 = local_e0;
  param_5[1] = uStack_dc;
  param_5[2] = uStack_d8;
  param_5[3] = uStack_d4;
  FUN_146baf581(&local_e0,&local_88,&local_68,&local_a8);
  *(undefined8 *)(param_6 + 4) = local_d0;
  *param_6 = local_e0;
  param_6[1] = uStack_dc;
  param_6[2] = uStack_d8;
  param_6[3] = uStack_d4;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b0b074 FUN_143b0b074 body=91 status=ok
// SIG undefined FUN_143b0b074(void)

ulonglong FUN_143b0b074(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  double dVar3;
  
  iVar1 = *param_3;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(*(longlong *)*param_1 + (longlong)*param_2 * 4) ==
      *(int *)(*(longlong *)*param_1 + (longlong)iVar1 * 4)) {
    dVar3 = (double)FUN_14838b654(param_1[1],param_1[2],(longlong)iVar1,iVar1 + 1,0);
    if (dVar3 < *(double *)(param_1[3] + 0x18) || dVar3 == *(double *)(param_1[3] + 0x18)) {
      uVar2 = 0;
    }
    else {
      *(undefined1 *)param_1[4] = 1;
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 143b0b276 FUN_143b0b276 body=539 status=ok
// SIG undefined FUN_143b0b276(void)

void FUN_143b0b276(longlong *param_1,uint *param_2,uint *param_3,undefined8 param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar1 = *param_5;
  lVar5 = *param_1;
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
  lVar7 = *(longlong *)(lVar6 + (ulonglong)(*param_3 >> 9) * 8);
  uVar8 = (ulonglong)*param_3 & 0x1ff;
  dVar2 = *(double *)(lVar7 + uVar8 * 0x18);
  dVar9 = *(double *)(lVar7 + 8 + uVar8 * 0x18);
  dVar10 = *(double *)(lVar7 + 0x10 + uVar8 * 0x18);
  lVar6 = *(longlong *)(lVar6 + (ulonglong)(*param_2 >> 9) * 8);
  uVar8 = (ulonglong)*param_2 & 0x1ff;
  dVar11 = *(double *)(lVar6 + uVar8 * 0x18);
  dVar3 = *(double *)(lVar6 + 8 + uVar8 * 0x18);
  dVar4 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18);
  local_98 = (dVar10 + dVar4) * 0.5;
  local_a0 = (dVar9 + dVar3) * 0.5;
  local_a8 = (dVar2 + dVar11) * 0.5;
  dVar10 = dVar10 - dVar4;
  dVar9 = dVar9 - dVar3;
  dVar2 = dVar2 - dVar11;
  dVar11 = SQRT(dVar10 * dVar10 + dVar2 * dVar2 + dVar9 * dVar9);
  local_90 = 0.0;
  local_88 = 0.0;
  local_80 = 0.0;
  local_78 = 0.0;
  if (0.0 < dVar11) {
    local_80 = 1.0 / dVar11;
    local_90 = dVar2 * local_80;
    local_88 = dVar9 * local_80;
    local_80 = dVar10 * local_80;
    local_78 = dVar11 * 0.5;
  }
  local_c8 = param_1[3];
  local_d8 = param_1[1];
  lStack_d0 = param_1[2];
  local_c0 = (undefined4)param_1[4];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_b8 = (undefined4)param_1[5];
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b0 = param_1[6];
  dVar2 = (double)FUN_14834ec27();
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(SUB84((dVar2 / ((double)param_1[7] * (double)param_1[7])) *
                      *(double *)(lVar5 + 0x28) + dVar1,0));
}



// FUNCTION 143b0b49c FUN_143b0b49c body=29 status=ok
// SIG undefined FUN_143b0b49c(void)

void FUN_143b0b49c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143b0b4ba FUN_143b0b4ba body=29 status=ok
// SIG undefined FUN_143b0b4ba(void)

undefined8 FUN_143b0b4ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b0b5b2 FUN_143b0b5b2 body=459 status=ok
// SIG undefined FUN_143b0b5b2(void)

void FUN_143b0b5b2(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined8 local_98;
  uint local_90;
  undefined1 local_8c [4];
  uint *local_88;
  undefined4 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *(undefined4 *)(param_2 + 1);
  local_b8 = *param_2;
  lVar1 = param_1[2];
  lVar9 = 0;
LAB_143b0b60d:
  local_90 = *(uint *)((longlong)&local_b8 + lVar9 * 4);
  plVar2 = (longlong *)*param_1;
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar2[9] - 1U & local_90) * 4);
    if (iVar5 != -1) {
      lVar3 = *plVar2;
      iVar8 = iVar5;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar8 * 0x10) == local_90) goto LAB_143b0b710;
        iVar8 = *(int *)((longlong)iVar8 * 0x10 + lVar3 + 8);
      } while (iVar8 != -1);
    }
  }
  local_88 = (uint *)CONCAT44(local_88._4_4_,local_90);
  (**(code **)param_1[1])(local_a8,((undefined8 *)param_1[1])[1],&local_88);
  local_78 = local_98;
  local_68 = DAT_14c846338;
  local_70 = DAT_14c846330;
  local_5c = DAT_14c846338;
  local_64 = DAT_14c846330;
  local_58 = DAT_14c84635c;
  local_50 = 0;
  local_4e = 0;
  local_ac = FUN_146c02208(lVar1 + 0x28,&local_88);
  local_88 = &local_90;
  puStack_80 = &local_ac;
  FUN_140263e2a(*param_1,local_8c,&local_88,0);
  uVar4 = local_ac;
  goto LAB_143b0b72e;
  while (iVar5 = *(int *)(lVar7 + 8), iVar5 != -1) {
LAB_143b0b710:
    lVar7 = lVar3 + (longlong)iVar5 * 0x10;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x10) == local_90) goto LAB_143b0b72b;
  }
  lVar7 = 0;
LAB_143b0b72b:
  uVar4 = *(undefined4 *)(lVar7 + 4);
LAB_143b0b72e:
  *(undefined4 *)((longlong)&local_b8 + lVar9 * 4) = uVar4;
  lVar9 = lVar9 + 1;
  if (lVar9 == 3) {
    FUN_146c01152(lVar1 + 0x28,&local_b8,0);
    if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_143b0b60d;
}



// FUNCTION 143b0b77e FUN_143b0b77e body=191 status=ok
// SIG undefined FUN_143b0b77e(void)

void FUN_143b0b77e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  lVar6 = (longlong)*(int *)(lVar1 + 8);
  iVar8 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar8 == param_2) {
    piVar9 = (int *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      piVar9 = (int *)(*param_1 + (longlong)iVar8 * 0xc + 4);
      iVar8 = *piVar9;
    } while (iVar8 != param_2);
  }
  *piVar9 = *(int *)(lVar1 + 4);
  lVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar1 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar2 = (undefined4 *)(lVar1 + (longlong)param_2 * 0xc);
  *puVar2 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar2[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar3 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 143b0b83e FUN_143b0b83e body=185 status=ok
// SIG undefined FUN_143b0b83e(void)

void FUN_143b0b83e(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  if (-1 < (longlong)(int)uVar1) {
    lVar2 = *param_1;
    lVar3 = *(longlong *)(lVar2 + 8);
    if ((int)uVar1 < *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24)) {
      uVar4 = (ulonglong)(uVar1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar3 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                             uVar4 * 2) - 1U) < 0xfffe) {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
        *(double *)(*(longlong *)param_1[1] + (ulonglong)uVar1 * 8) =
             (*(double *)(lVar3 + 0x10 + uVar4 * 0x18) - *(double *)(lVar2 + 0x20)) *
             *(double *)(lVar2 + 0x38) +
             (*(double *)(lVar3 + uVar4 * 0x18) - *(double *)(lVar2 + 0x10)) *
             *(double *)(lVar2 + 0x28) +
             (*(double *)(lVar3 + 8 + uVar4 * 0x18) - *(double *)(lVar2 + 0x18)) *
             *(double *)(lVar2 + 0x30);
        return;
      }
    }
  }
  *(undefined8 *)(*(longlong *)param_1[1] + (longlong)(int)uVar1 * 8) = *(undefined8 *)param_1[2];
  return;
}



// FUNCTION 143b0b8f8 FUN_143b0b8f8 body=577 status=ok
// SIG undefined FUN_143b0b8f8(void)

void FUN_143b0b8f8(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  
  plVar6 = *(longlong **)*param_1;
  if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
    iVar3 = *(int *)(param_2 + 0x18);
    plVar10 = (longlong *)plVar6[8];
    if ((longlong *)plVar6[8] == (longlong *)0x0) {
      plVar10 = plVar6 + 7;
    }
    piVar13 = (int *)((longlong)plVar10 + ((longlong)(int)plVar6[9] - 1U & (longlong)iVar3) * 4);
    do {
      iVar4 = *piVar13;
      lVar9 = (longlong)iVar4;
      if (lVar9 == -1) break;
      piVar1 = (int *)(*plVar6 + lVar9 * 0xc);
      iVar5 = *piVar1;
      if (iVar5 == iVar3) {
        plVar10 = (longlong *)plVar6[8];
        if ((longlong *)plVar6[8] == (longlong *)0x0) {
          plVar10 = plVar6 + 7;
        }
        iVar12 = *(int *)((longlong)plVar10 + (longlong)piVar1[2] * 4);
        if (iVar12 == iVar4) {
          piVar14 = (int *)((longlong)plVar10 + (longlong)piVar1[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)(*plVar6 + (longlong)iVar12 * 0xc + 4);
            iVar12 = *piVar14;
          } while (iVar12 != iVar4);
        }
        *piVar14 = piVar1[1];
        lVar7 = *plVar6;
        if (*(int *)((longlong)plVar6 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)plVar6[6] * 0xc) = iVar4;
        }
        *(undefined4 *)(lVar7 + lVar9 * 0xc) = 0xffffffff;
        uVar11 = 0xffffffff;
        if (0 < *(int *)((longlong)plVar6 + 0x34)) {
          uVar11 = (undefined4)plVar6[6];
        }
        *(undefined4 *)(lVar7 + lVar9 * 0xc + 4) = uVar11;
        *(int *)(plVar6 + 6) = iVar4;
        *(int *)((longlong)plVar6 + 0x34) = *(int *)((longlong)plVar6 + 0x34) + 1;
        plVar10 = (longlong *)plVar6[4];
        if ((longlong *)plVar6[4] == (longlong *)0x0) {
          plVar10 = plVar6 + 2;
        }
        iVar12 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar12 = iVar4;
        }
        bVar8 = (byte)iVar4 & 0x1f;
        puVar2 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      }
      else {
        piVar13 = piVar1 + 1;
      }
    } while (iVar5 != iVar3);
  }
  iVar3 = *(int *)(param_2 + 0x1c);
  if (((longlong)iVar3 != 0xffffffffffffffff) &&
     (plVar6 = *(longlong **)*param_1, (int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34))) {
    plVar10 = (longlong *)plVar6[8];
    if ((longlong *)plVar6[8] == (longlong *)0x0) {
      plVar10 = plVar6 + 7;
    }
    piVar13 = (int *)((longlong)plVar10 + ((longlong)(int)plVar6[9] - 1U & (longlong)iVar3) * 4);
    do {
      iVar4 = *piVar13;
      lVar9 = (longlong)iVar4;
      if (lVar9 == -1) {
        return;
      }
      piVar1 = (int *)(*plVar6 + lVar9 * 0xc);
      iVar5 = *piVar1;
      if (iVar5 == iVar3) {
        plVar10 = (longlong *)plVar6[8];
        if ((longlong *)plVar6[8] == (longlong *)0x0) {
          plVar10 = plVar6 + 7;
        }
        iVar12 = *(int *)((longlong)plVar10 + (longlong)piVar1[2] * 4);
        if (iVar12 == iVar4) {
          piVar14 = (int *)((longlong)plVar10 + (longlong)piVar1[2] * 4);
        }
        else {
          do {
            piVar14 = (int *)(*plVar6 + (longlong)iVar12 * 0xc + 4);
            iVar12 = *piVar14;
          } while (iVar12 != iVar4);
        }
        *piVar14 = piVar1[1];
        lVar7 = *plVar6;
        if (*(int *)((longlong)plVar6 + 0x34) != 0) {
          *(int *)(lVar7 + (longlong)(int)plVar6[6] * 0xc) = iVar4;
        }
        *(undefined4 *)(lVar7 + lVar9 * 0xc) = 0xffffffff;
        uVar11 = 0xffffffff;
        if (0 < *(int *)((longlong)plVar6 + 0x34)) {
          uVar11 = (undefined4)plVar6[6];
        }
        *(undefined4 *)(lVar7 + lVar9 * 0xc + 4) = uVar11;
        *(int *)(plVar6 + 6) = iVar4;
        *(int *)((longlong)plVar6 + 0x34) = *(int *)((longlong)plVar6 + 0x34) + 1;
        plVar10 = (longlong *)plVar6[4];
        if ((longlong *)plVar6[4] == (longlong *)0x0) {
          plVar10 = plVar6 + 2;
        }
        iVar12 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar12 = iVar4;
        }
        bVar8 = (byte)iVar4 & 0x1f;
        puVar2 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      }
      else {
        piVar13 = piVar1 + 1;
      }
    } while (iVar5 != iVar3);
  }
  return;
}



// FUNCTION 143b0bb50 FUN_143b0bb50 body=29 status=ok
// SIG undefined FUN_143b0bb50(void)

undefined8 FUN_143b0bb50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b0bb6e FUN_143b0bb6e body=164 status=ok
// SIG undefined FUN_143b0bb6e(void)

ulonglong FUN_143b0bb6e(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  lVar3 = *param_1;
  iVar5 = FUN_146bc96d4(*(undefined8 *)(lVar3 + 8),uVar2);
  iVar6 = FUN_146bc96d4(*(undefined8 *)(lVar3 + 8),uVar1);
  if (iVar5 == iVar6) {
    uVar8 = *(undefined8 *)(lVar3 + 8);
    uVar7 = FUN_146c08e54(uVar8,uVar2,uVar1);
    plVar4 = (longlong *)param_1[1];
    uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
      plVar10 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar4[8];
      }
      iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar4[9] - 1U & uVar7) * 4);
      if (iVar5 != -1) {
        do {
          bVar11 = *(uint *)(*plVar4 + (longlong)iVar5 * 0xc) == uVar7;
          uVar9 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),!bVar11);
          if (bVar11) break;
          iVar5 = *(int *)(*plVar4 + (longlong)iVar5 * 0xc + 4);
        } while (iVar5 != -1);
      }
    }
  }
  else {
    uVar9 = 0;
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 143b0bc3c FUN_143b0bc3c body=29 status=ok
// SIG undefined FUN_143b0bc3c(void)

undefined8 FUN_143b0bc3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b0bd2c FUN_143b0bd2c body=29 status=ok
// SIG undefined FUN_143b0bd2c(void)

undefined8 FUN_143b0bd2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b0bd4a FUN_143b0bd4a body=310 status=ok
// SIG undefined FUN_143b0bd4a(void)

void FUN_143b0bd4a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = *(undefined4 *)(param_2 + 1);
  local_a8 = *param_2;
  lVar2 = param_1[2];
  lVar5 = 0;
  do {
    lVar4 = (longlong)*(int *)((longlong)&local_a8 + lVar5 * 4);
    iVar3 = *(int *)(*(longlong *)*param_1 + lVar4 * 4);
    if (iVar3 == -1) {
      local_88 = *(undefined8 *)(*(longlong *)param_1[1] + 0x10 + lVar4 * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)param_1[1] + lVar4 * 0x18);
      local_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      local_58 = DAT_14c846338;
      local_60 = DAT_14c846330;
      local_4c = DAT_14c846338;
      local_54 = DAT_14c846330;
      local_48 = DAT_14c84635c;
      local_40 = 0;
      local_3e = 0;
      local_78 = local_98;
      uStack_74 = uStack_94;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      local_68 = local_88;
      iVar3 = FUN_146c02208(lVar2 + 0x80,&local_78);
      *(int *)(*(longlong *)*param_1 + lVar4 * 4) = iVar3;
    }
    *(int *)((longlong)&local_a8 + lVar5 * 4) = iVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_146c01152(lVar2 + 0x80,&local_a8,0);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0be82 FUN_143b0be82 body=505 status=ok
// SIG undefined FUN_143b0be82(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143b0be82(undefined8 *param_1,uint *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  char *pcVar11;
  ulonglong uVar12;
  bool bVar13;
  longlong lVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double dStack_90;
  undefined4 local_88 [4];
  double local_78 [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  pcVar11 = (char *)*param_1;
  bVar13 = true;
  if (*pcVar11 == '\0') {
    local_d8 = (double)param_1[5];
    local_e8 = param_1[3];
    uStack_e0 = param_1[4];
    uVar3 = *(uint *)(param_1 + 2);
    lVar14 = *(longlong *)
              (*(longlong *)(**(longlong **)param_1[1] + 0x130) + (ulonglong)(*param_2 >> 9) * 8);
    uVar12 = (ulonglong)(*param_2 & 0x1ff);
    uVar4 = *(uint *)(lVar14 + uVar12 * 0xc);
    uVar5 = *(uint *)(lVar14 + 4 + uVar12 * 0xc);
    uVar6 = *(uint *)(lVar14 + 8 + uVar12 * 0xc);
    if (uVar4 == uVar3) {
      lVar14 = 0;
    }
    else {
      lVar14 = 1;
      if (uVar5 != uVar3) {
        lVar14 = (ulonglong)(uVar6 == uVar3) * 3 + -1;
      }
    }
    lVar7 = *(longlong *)(**(longlong **)param_1[1] + 0x10);
    lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
    local_98 = *(double *)(lVar8 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
    pdVar1 = (double *)(lVar8 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
    dVar9 = *pdVar1;
    dVar10 = pdVar1[1];
    lVar8 = *(longlong *)(lVar7 + (ulonglong)(uVar5 >> 9) * 8);
    local_b8 = *(double *)(lVar8 + 0x10 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
    pdVar1 = (double *)(lVar8 + (ulonglong)(uVar5 & 0x1ff) * 0x18);
    local_c8 = *pdVar1;
    dStack_c0 = pdVar1[1];
    lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 9) * 8);
    puVar2 = (undefined4 *)(lVar7 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
    local_88[0] = *puVar2;
    local_88[1] = puVar2[1];
    local_88[2] = puVar2[2];
    local_88[3] = puVar2[3];
    local_78[0] = *(double *)(lVar7 + 0x10 + (ulonglong)(uVar4 & 0x1ff) * 0x18);
    local_a8._0_4_ = SUB84(dVar9,0);
    local_a8._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
    uStack_a0._0_4_ = SUB84(dVar10,0);
    uStack_a0._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
    local_58 = (undefined4)local_a8;
    uStack_54 = local_a8._4_4_;
    uStack_50 = (undefined4)uStack_a0;
    uStack_4c = uStack_a0._4_4_;
    local_a8 = dVar9;
    uStack_a0 = dVar10;
    local_78[1] = local_c8;
    local_78[2] = dStack_c0;
    local_78[3] = local_b8;
    local_48 = local_98;
    FUN_146baf581(&local_a8,local_88,local_78 + 1,&local_58);
    local_78[lVar14 * 3] = local_d8;
    local_88[lVar14 * 6] = (undefined4)local_e8;
    local_88[lVar14 * 6 + 1] = local_e8._4_4_;
    local_88[lVar14 * 6 + 2] = (undefined4)uStack_e0;
    local_88[lVar14 * 6 + 3] = uStack_e0._4_4_;
    FUN_146baf581(&local_c8,local_88,local_78 + 1,&local_58);
    bVar13 = local_98 * local_b8 + local_a8 * local_c8 + uStack_a0 * dStack_c0 < 0.0;
    pcVar11 = (char *)*param_1;
  }
  *pcVar11 = bVar13;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0c084 FUN_143b0c084 body=262 status=ok
// SIG undefined FUN_143b0c084(void)

void FUN_143b0c084(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143b0c18a FUN_143b0c18a body=3406 status=ok
// SIG undefined FUN_143b0c18a(void)

void FUN_143b0c18a(undefined8 *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char *pcVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  double *pdVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_1a8 [32];
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  float local_140;
  float local_13c;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_ec;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar20 = *param_2;
  pcVar4 = *(char **)*param_1;
  if (pcVar4 != (char *)0x0) {
    if (*pcVar4 != '\0') goto LAB_143b0c8e8;
    pcVar5 = *(code **)(pcVar4 + 0x70);
    plVar13 = (longlong *)(pcVar4 + 0x90);
    if (*(longlong **)(pcVar4 + 0x80) != (longlong *)0x0) {
      plVar13 = *(longlong **)(pcVar4 + 0x80);
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    cVar9 = (*pcVar5)(uVar11);
    *pcVar4 = cVar9;
    if (cVar9 != '\0') goto LAB_143b0c8e8;
  }
  if ((-1 < (int)uVar20) &&
     (lVar15 = param_1[1], (int)uVar20 < *(int *)(lVar15 + 0x1d0) * 0x200 + *(int *)(lVar15 + 0x1d4)
     )) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar15 + 0x1d8) + (ulonglong)(uVar20 >> 9) * 8) +
                           (ulonglong)(uVar20 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar14 = *(longlong *)(*(longlong *)(lVar15 + 0x1c0) + (ulonglong)(uVar20 >> 9) * 8);
      uVar12 = (ulonglong)((uVar20 & 0x1ff) << 4);
      uVar6 = *(ulonglong *)(lVar14 + uVar12);
      uVar12 = *(ulonglong *)(lVar14 + 8 + uVar12);
      uVar23 = uVar6 >> 0x20;
      uVar19 = uVar6 >> 9 & 0x7fffff;
      lVar14 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + uVar19 * 8);
      uVar17 = uVar6 & 0x1ff;
      dVar25 = *(double *)(lVar14 + uVar17 * 0x18);
      dVar27 = *(double *)(lVar14 + 8 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar14 + 0x10 + uVar17 * 0x18);
      lVar14 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (uVar6 >> 0x29) * 8);
      uVar21 = uVar23 & 0x1ff;
      dVar2 = *(double *)(lVar14 + uVar21 * 0x18);
      dVar26 = *(double *)(lVar14 + 8 + uVar21 * 0x18);
      dVar3 = *(double *)(lVar14 + 0x10 + uVar21 * 0x18);
      lVar14 = *(longlong *)(lVar15 + 0x208);
      if (lVar14 == 0) {
        if (*(longlong *)param_1[2] == 0) {
          if (*(char *)(lVar15 + 0x70) == '\0') {
            local_ec = CONCAT44(DAT_14c846370._4_4_,(float)DAT_14c846370);
            local_e4 = DAT_14c846378;
            fVar30 = DAT_14c846370._4_4_;
            local_f0 = DAT_14c846378;
            fVar31 = (float)DAT_14c846370;
          }
          else {
            lVar14 = *(longlong *)(*(longlong *)(lVar15 + 0x60) + uVar19 * 8);
            local_e4 = *(float *)(lVar14 + 8 + uVar17 * 0xc);
            local_ec = *(undefined8 *)(lVar14 + uVar17 * 0xc);
            lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x60) + (uVar6 >> 0x29) * 8);
            fVar30 = *(float *)(lVar15 + 4 + uVar21 * 0xc);
            local_f0 = *(float *)(lVar15 + 8 + uVar21 * 0xc);
            fVar31 = *(float *)(lVar15 + uVar21 * 0xc);
          }
        }
        else {
          lVar15 = *(longlong *)(*(longlong *)param_1[2] + 8);
          lVar14 = (longlong)(int)uVar6;
          local_e4 = (float)*(double *)(lVar15 + 0x10 + lVar14 * 0x18);
          local_ec = CONCAT44((float)*(double *)(lVar15 + 8 + lVar14 * 0x18),
                              (float)*(double *)(lVar15 + lVar14 * 0x18));
          lVar14 = (longlong)uVar6 >> 0x20;
          fVar30 = (float)*(double *)(lVar15 + 8 + lVar14 * 0x18);
          local_f0 = (float)*(double *)(lVar15 + 0x10 + lVar14 * 0x18);
          fVar31 = (float)*(double *)(lVar15 + lVar14 * 0x18);
        }
        local_f8 = CONCAT44(fVar30,fVar31);
      }
      else {
        if (*(int *)(lVar14 + 0x38) < 1) {
          lVar14 = 0;
        }
        else {
          lVar14 = **(longlong **)(lVar14 + 0x30);
        }
        uVar16 = (int)uVar12 * 3;
        if (*(int *)(*(longlong *)(*(longlong *)(lVar14 + 0x78) + (ulonglong)(uVar16 >> 9) * 8) +
                    (ulonglong)(uVar16 & 0x1ff) * 4) < 0) {
          FUN_146c13dec(lVar15,&local_110,uVar12 & 0xffffffff);
          local_f0 = (float)local_100;
          local_ec = CONCAT44((float)local_108,(float)local_110);
          local_f8 = local_ec;
          local_e4 = local_f0;
        }
        else {
          iVar10 = FUN_146c31d60(lVar14,uVar12 & 0xffffffff,uVar6 & 0xffffffff);
          if (iVar10 != -1) {
            lVar15 = 0;
            do {
              uVar16 = iVar10 * 3 + (int)lVar15;
              *(undefined4 *)((longlong)&local_ec + lVar15 * 4) =
                   *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar14 + 0x48) + (ulonglong)(uVar16 >> 9) * 8) +
                    (ulonglong)(uVar16 & 0x1ff) * 4);
              lVar15 = lVar15 + 1;
            } while (lVar15 != 3);
          }
          iVar10 = FUN_146c31d60(lVar14,uVar12 & 0xffffffff,uVar23);
          if (iVar10 != -1) {
            lVar15 = 0;
            do {
              uVar16 = iVar10 * 3 + (int)lVar15;
              *(undefined4 *)((longlong)&local_f8 + lVar15 * 4) =
                   *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar14 + 0x48) + (ulonglong)(uVar16 >> 9) * 8) +
                    (ulonglong)(uVar16 & 0x1ff) * 4);
              lVar15 = lVar15 + 1;
            } while (lVar15 != 3);
          }
        }
      }
      pdVar22 = (double *)((ulonglong)uVar20 * 0x60 + *(longlong *)param_1[3]);
      if (*(char *)param_1[4] != '\0') {
        dVar29 = dVar3 - dVar1;
        dVar24 = dVar26 - dVar27;
        dVar28 = dVar2 - dVar25;
        fVar30 = local_f0 + local_e4;
        dVar7 = dVar29 * dVar29 + dVar28 * dVar28 + dVar24 * dVar24;
        fVar31 = local_f8._4_4_ + local_ec._4_4_;
        fVar32 = (float)local_f8 + (float)local_ec;
        if (ABS(dVar7) <= 1e-08) {
          fVar30 = fVar30 * 0.5;
          fVar33 = fVar31 * 0.5;
          fVar32 = fVar32 * 0.5;
        }
        else {
          dVar8 = (double)fVar30 * dVar29 + (double)fVar32 * dVar28 + (double)fVar31 * dVar24;
          fVar33 = (float)((dVar8 + dVar8) / dVar7);
          fVar30 = fVar30 - (float)dVar29 * fVar33;
          fVar31 = fVar31 - (float)dVar24 * fVar33;
          fVar32 = fVar32 - (float)dVar28 * fVar33;
          fVar35 = SQRT(fVar30 * fVar30 + fVar32 * fVar32 + fVar31 * fVar31);
          fVar33 = 0.0;
          fVar34 = 1.0 / fVar35;
          fVar32 = (float)(-(uint)(0.0 < fVar35) & (uint)(fVar32 * fVar34));
          if (0.0 < fVar35) {
            fVar30 = fVar30 * fVar34;
            fVar33 = fVar31 * fVar34;
          }
          else {
            fVar30 = 0.0;
          }
        }
        pdVar22[6] = (double)fVar32;
        pdVar22[7] = (double)fVar33;
        pdVar22[8] = (double)fVar30;
      }
      local_168 = dVar3 - dVar1;
      local_188 = dVar2 - dVar25;
      local_180 = dVar26 - dVar27;
      dVar29 = local_168 * (double)local_e4 +
               local_188 * (double)(float)local_ec + local_180 * (double)local_ec._4_4_;
      dVar7 = dVar1 + dVar1 + dVar3;
      local_160 = dVar27 + dVar27 + dVar26;
      local_130 = dVar25 + dVar25 + dVar2;
      local_178 = dVar25 - dVar2;
      local_170 = dVar1 - dVar3;
      dVar28 = local_170 * (double)local_f0 +
               local_178 * (double)(float)local_f8 + (dVar27 - dVar26) * (double)local_f8._4_4_;
      local_158 = dVar3 + dVar3 + dVar1;
      local_150 = dVar26 + dVar26 + dVar27;
      local_148 = dVar2 + dVar2 + dVar25;
      dVar3 = (dVar7 - (double)local_e4 * dVar29) * 0.3333333333333333;
      dVar25 = (local_160 - (double)local_ec._4_4_ * dVar29) * 0.3333333333333333;
      dVar1 = (local_130 - dVar29 * (double)(float)local_ec) * 0.3333333333333333;
      dVar29 = (local_158 - (double)local_f0 * dVar28) * 0.3333333333333333;
      dVar2 = (local_150 - (double)local_f8._4_4_ * dVar28) * 0.3333333333333333;
      dVar28 = (local_148 - dVar28 * (double)(float)local_f8) * 0.3333333333333333;
      lVar15 = *(longlong *)(param_1[1] + 0x208);
      if (((lVar15 != 0) && (0 < *(int *)(lVar15 + 0x38))) &&
         (lVar15 = **(longlong **)(lVar15 + 0x30), lVar15 != 0)) {
        uVar19 = uVar12 >> 0x20;
        iVar10 = (int)(uVar12 >> 0x20);
        if ((iVar10 != -1) &&
           (local_138 = dVar25, cVar9 = FUN_146c1aaf4(lVar15,(ulonglong)uVar20,0),
           dVar25 = local_138, cVar9 != '\0')) {
          uVar20 = iVar10 * 3;
          if (*(int *)(*(longlong *)(*(longlong *)(lVar15 + 0x78) + (ulonglong)(uVar20 >> 9) * 8) +
                      (ulonglong)(uVar20 & 0x1ff) * 4) < 0) {
            FUN_146c13dec(param_1[1],&local_110,uVar19);
            local_f0 = (float)local_100;
            local_ec = CONCAT44((float)local_108,(float)local_110);
            local_f8 = local_ec;
            local_e4 = local_f0;
          }
          else {
            iVar10 = FUN_146c31d60(lVar15,uVar19,uVar6 & 0xffffffff);
            if (iVar10 != -1) {
              lVar14 = *(longlong *)(lVar15 + 0x48);
              lVar18 = 0;
              do {
                uVar20 = iVar10 * 3 + (int)lVar18;
                *(undefined4 *)((longlong)&local_ec + lVar18 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar14 + (ulonglong)(uVar20 >> 9) * 8) +
                      (ulonglong)(uVar20 & 0x1ff) * 4);
                lVar18 = lVar18 + 1;
              } while (lVar18 != 3);
            }
            iVar10 = FUN_146c31d60(lVar15,uVar19,uVar23);
            if (iVar10 != -1) {
              lVar15 = *(longlong *)(lVar15 + 0x48);
              lVar14 = 0;
              do {
                uVar20 = iVar10 * 3 + (int)lVar14;
                *(undefined4 *)((longlong)&local_f8 + lVar14 * 4) =
                     *(undefined4 *)
                      (*(longlong *)(lVar15 + (ulonglong)(uVar20 >> 9) * 8) +
                      (ulonglong)(uVar20 & 0x1ff) * 4);
                lVar14 = lVar14 + 1;
              } while (lVar14 != 3);
            }
          }
          local_13c = local_ec._4_4_;
          local_128 = ZEXT416((uint)(float)local_ec);
          local_140 = local_e4;
          dVar24 = local_168 * (double)local_e4 +
                   local_188 * (double)(float)local_ec + local_180 * (double)local_ec._4_4_;
          dVar25 = local_160 - (double)local_ec._4_4_ * dVar24;
          local_160 = (double)CONCAT44(local_160._4_4_,(float)local_f8);
          dVar27 = local_170 * (double)local_f0 +
                   local_178 * (double)(float)local_f8 + (dVar27 - dVar26) * (double)local_f8._4_4_;
          dVar3 = (dVar3 + (dVar7 - (double)local_e4 * dVar24) * 0.3333333333333333) * 0.5;
          dVar25 = (local_138 + dVar25 * 0.3333333333333333) * 0.5;
          dVar1 = (dVar1 + (local_130 - dVar24 * (double)(float)local_ec) * 0.3333333333333333) *
                  0.5;
          dVar29 = (dVar29 + (local_158 - (double)local_f0 * dVar27) * 0.3333333333333333) * 0.5;
          dVar2 = (dVar2 + (local_150 - (double)local_f8._4_4_ * dVar27) * 0.3333333333333333) * 0.5
          ;
          dVar28 = (dVar28 + (local_148 - dVar27 * (double)(float)local_f8) * 0.3333333333333333) *
                   0.5;
          if (*(char *)param_1[4] == '\x01') {
            fVar30 = local_e4 + local_f0;
            fVar32 = local_ec._4_4_ + local_f8._4_4_;
            fVar31 = (float)local_ec + (float)local_f8;
            dVar27 = local_168 * local_168 + local_188 * local_188 + local_180 * local_180;
            if (ABS(dVar27) <= 1e-08) {
              fVar30 = fVar30 * 0.5;
              fVar33 = fVar32 * 0.5;
              fVar31 = fVar31 * 0.5;
            }
            else {
              dVar26 = (double)fVar30 * local_168 +
                       (double)fVar31 * local_188 + (double)fVar32 * local_180;
              fVar33 = (float)((dVar26 + dVar26) / dVar27);
              fVar30 = fVar30 - (float)local_168 * fVar33;
              fVar32 = fVar32 - (float)local_180 * fVar33;
              fVar31 = fVar31 - (float)local_188 * fVar33;
              fVar34 = SQRT(fVar30 * fVar30 + fVar31 * fVar31 + fVar32 * fVar32);
              fVar33 = 0.0;
              fVar35 = 1.0 / fVar34;
              fVar31 = (float)(-(uint)(0.0 < fVar34) & (uint)(fVar31 * fVar35));
              if (0.0 < fVar34) {
                fVar30 = fVar30 * fVar35;
                fVar33 = fVar32 * fVar35;
              }
              else {
                fVar30 = 0.0;
              }
            }
            pdVar22[9] = (double)fVar31;
            pdVar22[10] = (double)fVar33;
            pdVar22[0xb] = (double)fVar30;
          }
        }
      }
      *pdVar22 = dVar1;
      pdVar22[1] = dVar25;
      pdVar22[2] = dVar3;
      pdVar22[3] = dVar28;
      pdVar22[4] = dVar2;
      pdVar22[5] = dVar29;
    }
  }
LAB_143b0c8e8:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b0ceda FUN_143b0ceda body=572 status=ok
// SIG undefined FUN_143b0ceda(void)

void FUN_143b0ceda(undefined8 *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  uVar7 = *param_2;
  uVar18 = (ulonglong)uVar7;
  pcVar9 = *(char **)*param_1;
  if (pcVar9 != (char *)0x0) {
    if (*pcVar9 != '\0') {
      return;
    }
    pcVar10 = *(code **)(pcVar9 + 0x70);
    plVar15 = (longlong *)(pcVar9 + 0x90);
    if (*(longlong **)(pcVar9 + 0x80) != (longlong *)0x0) {
      plVar15 = *(longlong **)(pcVar9 + 0x80);
    }
    uVar14 = (**(code **)(*plVar15 + 8))();
    cVar13 = (*pcVar10)(uVar14);
    *pcVar9 = cVar13;
    if (cVar13 != '\0') {
      return;
    }
  }
  if ((-1 < (int)uVar7) &&
     (lVar11 = param_1[1], (int)uVar7 < *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144))
     ) {
    uVar19 = (ulonglong)(uVar7 >> 9);
    uVar16 = (ulonglong)(uVar7 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar11 + 0x148) + uVar19 * 8) + uVar16 * 2)
                - 1U) < 0xfffe) {
      lVar12 = *(longlong *)param_1[2];
      lVar21 = 0;
      dVar22 = DAT_14c8464e0;
      dVar23 = DAT_14c8464e8;
      dVar24 = DAT_14c8464f0;
      do {
        lVar17 = (longlong)
                 *(int *)((ulonglong)((uVar7 & 0x1ff) * 0xc) +
                          *(longlong *)(*(longlong *)(lVar11 + 0x180) + uVar19 * 8) + lVar21 * 4) *
                 0x60;
        dVar24 = dVar24 + *(double *)(lVar12 + 0x10 + lVar17) + *(double *)(lVar12 + 0x28 + lVar17);
        dVar23 = dVar23 + *(double *)(lVar12 + 8 + lVar17) + *(double *)(lVar12 + 0x20 + lVar17);
        dVar22 = dVar22 + *(double *)(lVar12 + lVar17) + *(double *)(lVar12 + 0x18 + lVar17);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
      lVar12 = *(longlong *)(lVar11 + 0x10);
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x130) + uVar19 * 8);
      uVar7 = *(uint *)(lVar11 + uVar16 * 0xc);
      uVar8 = *(uint *)(lVar11 + 4 + uVar16 * 0xc);
      lVar21 = *(longlong *)(lVar12 + (ulonglong)(uVar7 >> 9) * 8);
      uVar19 = (ulonglong)uVar7 & 0x1ff;
      dVar1 = *(double *)(lVar21 + 8 + uVar19 * 0x18);
      dVar2 = *(double *)(lVar21 + 0x10 + uVar19 * 0x18);
      lVar17 = *(longlong *)(lVar12 + (ulonglong)(uVar8 >> 9) * 8);
      uVar20 = (ulonglong)uVar8 & 0x1ff;
      dVar3 = *(double *)(lVar17 + 0x10 + uVar20 * 0x18);
      dVar4 = *(double *)(lVar17 + 8 + uVar20 * 0x18);
      uVar7 = *(uint *)(lVar11 + 8 + uVar16 * 0xc);
      lVar11 = *(longlong *)(lVar12 + (ulonglong)(uVar7 >> 9) * 8);
      uVar16 = (ulonglong)uVar7 & 0x1ff;
      dVar5 = *(double *)(lVar11 + 0x10 + uVar16 * 0x18);
      dVar6 = *(double *)(lVar11 + 8 + uVar16 * 0x18);
      lVar12 = ((longlong *)param_1[2])[2];
      *(double *)(lVar12 + uVar18 * 0x18) =
           (dVar22 * 0.16666666666666666 -
           (*(double *)(lVar21 + uVar19 * 0x18) + *(double *)(lVar17 + uVar20 * 0x18) +
           *(double *)(lVar11 + uVar16 * 0x18)) * 0.3333333333333333) * 0.5 +
           dVar22 * 0.16666666666666666;
      *(double *)(lVar12 + 8 + uVar18 * 0x18) =
           (dVar23 * 0.16666666666666666 - (dVar1 + dVar4 + dVar6) * 0.3333333333333333) * 0.5 +
           dVar23 * 0.16666666666666666;
      *(double *)(lVar12 + 0x10 + uVar18 * 0x18) =
           (dVar24 * 0.16666666666666666 - (dVar2 + dVar3 + dVar5) * 0.3333333333333333) * 0.5 +
           dVar24 * 0.16666666666666666;
    }
  }
  return;
}



// FUNCTION 143b0d116 FUN_143b0d116 body=1820 status=ok
// SIG undefined FUN_143b0d116(void)

void FUN_143b0d116(undefined8 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  double *pdVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100 [5];
  double local_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  int iStack_c4;
  undefined8 local_c0;
  uint local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar2 = *param_2;
  pcVar3 = *(char **)*param_1;
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 != '\0') goto LAB_143b0d1ba;
    pcVar4 = *(code **)(pcVar3 + 0x70);
    plVar11 = (longlong *)(pcVar3 + 0x90);
    if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
      plVar11 = *(longlong **)(pcVar3 + 0x80);
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    cVar8 = (*pcVar4)(uVar9);
    *pcVar3 = cVar8;
    if (cVar8 != '\0') goto LAB_143b0d1ba;
  }
  local_120 = *(ulonglong *)(*(longlong *)param_1[1] + (longlong)iVar2 * 8);
  lVar22 = param_1[2];
  uVar13 = (ulonglong)((uint)(local_120 >> 0x29) << 3);
  lVar12 = *(longlong *)(*(longlong *)(lVar22 + 0x130) + uVar13);
  lVar19 = (ulonglong)((uint)(local_120 >> 0x1e) & 0x7fc) * 3;
  local_b8 = *(uint *)(lVar12 + 8 + lVar19);
  uVar18 = *(ulonglong *)(lVar12 + lVar19);
  lVar12 = *(longlong *)(*(longlong *)(lVar22 + 0x180) + uVar13);
  local_c8 = *(undefined4 *)(lVar12 + 8 + lVar19);
  local_d0 = *(undefined8 *)(lVar12 + lVar19);
  uVar23 = local_b8 >> 9;
  lVar17 = (ulonglong)((local_b8 & 0x1ff) << 3) * 3;
  local_138 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)uVar23 * 8) + lVar17;
  local_c0._4_4_ = (uint)(uVar18 >> 0x20);
  uVar24 = local_c0._4_4_ >> 9;
  lVar6 = (ulonglong)((local_c0._4_4_ & 0x1ff) << 3) * 3;
  uVar13 = uVar18 >> 9 & 0x7fffff;
  lVar7 = (ulonglong)(((uint)uVar18 & 0x1ff) << 3) * 3;
  local_128 = local_120 >> 9 & 0x7fffff;
  local_130 = (ulonglong)((uint)local_120 & 0x1ff) * 3;
  local_c0 = uVar18;
  FUN_146c7de05(local_100 + 3,
                (ulonglong)(uint)((int)local_130 * 8) +
                *(longlong *)(*(longlong *)(param_1[3] + 0x10) + local_128 * 8),
                *(longlong *)(*(longlong *)(lVar22 + 0x10) + uVar13 * 8) + lVar7);
  local_100[0] = local_100[3] * local_100[3];
  local_100[1] = local_100[4] * local_100[4];
  local_100[2] = local_d8 * local_d8;
  lVar22 = *(longlong *)(param_1[2] + 0x10);
  lVar12 = *(longlong *)(lVar22 + uVar13 * 8);
  dVar31 = local_100[3] * local_100[3] * local_100[3];
  lVar19 = *(longlong *)(lVar22 + (ulonglong)uVar24 * 8);
  dVar26 = local_100[4] * local_100[4] * local_100[4];
  lVar22 = *(longlong *)(lVar22 + (ulonglong)uVar23 * 8);
  dVar5 = local_d8 * local_d8 * local_d8;
  local_108 = *(double *)(lVar22 + 0x10 + lVar17) * dVar5 +
              *(double *)(lVar19 + 0x10 + lVar6) * dVar26 +
              *(double *)(lVar12 + 0x10 + lVar7) * dVar31;
  uStack_110 = *(double *)(lVar22 + 8 + lVar17) * dVar5 +
               *(double *)(lVar19 + 8 + lVar6) * dVar26 + *(double *)(lVar12 + 8 + lVar7) * dVar31;
  local_118 = dVar5 * *(double *)(lVar22 + lVar17) +
              dVar26 * *(double *)(lVar19 + lVar6) + dVar31 * *(double *)(lVar12 + lVar7);
  uVar18 = 0;
  do {
    uVar23 = *(uint *)((longlong)&local_d0 + uVar18 * 4);
    uVar9 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1[2] + 0x1c0) + (ulonglong)(uVar23 >> 9) * 8) +
             (ulonglong)((uVar23 & 0x1ff) << 4));
    pdVar14 = (double *)((longlong)(int)uVar23 * 0x60 + *(longlong *)param_1[4]);
    uVar13 = 1;
LAB_143b0d44f:
    uVar25 = 0;
    if (uVar13 != 3) {
      uVar25 = uVar13 & 0xffffffff;
    }
    iVar2 = *(int *)((longlong)&local_c0 + uVar25 * 4);
    iVar20 = (int)uVar9;
    iVar21 = (int)((ulonglong)uVar9 >> 0x20);
    if ((&iStack_c4)[uVar13] == iVar20) {
      if (iVar2 == iVar21) goto LAB_143b0d498;
LAB_143b0d484:
      if (uVar13 == 3) goto LAB_143b0d498;
      uVar13 = uVar13 + 1;
      goto LAB_143b0d44f;
    }
    if ((iVar2 != iVar20) || ((&iStack_c4)[uVar13] != iVar21)) goto LAB_143b0d484;
    if (iVar21 != iVar20) {
      lVar22 = 0;
      if (uVar18 + 1 != 3) {
        lVar22 = uVar18 + 1;
      }
      uVar23 = (uint)lVar22;
      uVar13 = uVar18;
      goto LAB_143b0d4ad;
    }
LAB_143b0d498:
    uVar23 = (uint)uVar18;
    uVar13 = 0;
    if (uVar18 + 1 != 3) {
      uVar13 = uVar18 + 1;
    }
LAB_143b0d4ad:
    uVar18 = uVar18 + 1;
    dVar5 = local_100[uVar23] * 3.0 * local_100[(uVar13 & 0xffffffff) + 3];
    dVar26 = local_100[uVar13 & 0xffffffff] * 3.0 * local_100[(ulonglong)uVar23 + 3];
    local_108 = local_108 + pdVar14[5] * dVar26 + pdVar14[2] * dVar5;
    uStack_110 = uStack_110 + pdVar14[4] * dVar26 + pdVar14[1] * dVar5;
    local_118 = local_118 + dVar26 * pdVar14[3] + dVar5 * *pdVar14;
  } while (uVar18 != 3);
  lVar22 = ((longlong *)param_1[4])[2];
  lVar12 = (longlong)local_120 >> 0x20;
  local_d8 = local_d8 * local_100[4] * local_100[3] * 6.0;
  local_118 = local_118 + local_d8 * *(double *)(lVar22 + lVar12 * 0x18);
  uStack_110 = uStack_110 + *(double *)(lVar22 + 8 + lVar12 * 0x18) * local_d8;
  local_108 = local_108 + *(double *)(lVar22 + 0x10 + lVar12 * 0x18) * local_d8;
  lVar22 = param_1[3];
  cVar8 = FUN_146bfed03();
  if (cVar8 != '\0') {
    lVar12 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + local_128 * 8);
    *(double *)(lVar12 + 0x10 + local_130 * 8) = local_108;
    puVar1 = (undefined4 *)(lVar12 + local_130 * 8);
    *puVar1 = (undefined4)local_118;
    puVar1[1] = local_118._4_4_;
    puVar1[2] = (undefined4)uStack_110;
    puVar1[3] = uStack_110._4_4_;
    if (*(char *)(lVar22 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar22 + 0x214) = *(int *)(lVar22 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((*(char *)param_1[5] != '\0') && (*(char *)param_1[6] == '\x01')) {
    lVar22 = param_1[2];
    cVar8 = *(char *)(lVar22 + 0x70);
    pfVar10 = (float *)&DAT_14c846370;
    pfVar15 = (float *)&DAT_14c846370;
    if (cVar8 == '\x01') {
      pfVar15 = (float *)((ulonglong)(((uint)local_c0 & 0x1ff) * 0xc) +
                         *(longlong *)
                          (*(longlong *)(lVar22 + 0x60) + (ulonglong)((uint)local_c0 >> 9) * 8));
    }
    fVar27 = (float)local_100[0];
    pfVar16 = (float *)&DAT_14c846370;
    if (cVar8 != '\0') {
      pfVar16 = (float *)((ulonglong)((local_c0._4_4_ & 0x1ff) * 0xc) +
                         *(longlong *)
                          (*(longlong *)(lVar22 + 0x60) + (ulonglong)(local_c0._4_4_ >> 9) * 8));
    }
    fVar28 = (float)local_100[1];
    if (cVar8 != '\0') {
      pfVar10 = (float *)((ulonglong)((local_b8 & 0x1ff) * 0xc) +
                         *(longlong *)
                          (*(longlong *)(lVar22 + 0x60) + (ulonglong)(local_b8 >> 9) * 8));
    }
    fVar29 = (float)local_100[2];
    dVar5 = (double)(pfVar15[2] * fVar27 + pfVar16[2] * fVar28 + pfVar10[2] * fVar29);
    dVar26 = (double)(pfVar15[1] * fVar27 + pfVar16[1] * fVar28 + pfVar10[1] * fVar29);
    dVar31 = (double)(fVar27 * *pfVar15 + fVar28 * *pfVar16 + fVar29 * *pfVar10);
    lVar22 = *(longlong *)param_1[4];
    lVar12 = 1;
    do {
      lVar17 = (longlong)(&iStack_d4)[lVar12] * 0x60;
      lVar19 = lVar12;
      if (lVar12 == 3) {
        lVar19 = 0;
      }
      dVar30 = local_100[lVar12 + 2] * local_100[lVar19 + 3];
      dVar5 = dVar5 + *(double *)(lVar22 + 0x40 + lVar17) * dVar30;
      dVar26 = dVar26 + *(double *)(lVar22 + 0x38 + lVar17) * dVar30;
      dVar31 = dVar31 + dVar30 * *(double *)(lVar22 + 0x30 + lVar17);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 4);
    if (*(char *)(param_1[3] + 0x70) == '\x01') {
      dVar30 = SQRT(dVar5 * dVar5 + dVar31 * dVar31 + dVar26 * dVar26);
      dVar32 = 1.0 / dVar30;
      if (0.0 < dVar30) {
        dVar31 = dVar31 * dVar32;
      }
      else {
        dVar31 = 0.0;
      }
      if (0.0 < dVar30) {
        dVar26 = dVar26 * dVar32;
      }
      else {
        dVar26 = 0.0;
      }
      lVar22 = *(longlong *)(*(longlong *)(param_1[3] + 0x60) + local_128 * 8);
      *(float *)(lVar22 + local_130 * 4) = (float)dVar31;
      *(float *)(lVar22 + 4 + local_130 * 4) = (float)dVar26;
      *(float *)(lVar22 + 8 + local_130 * 4) =
           (float)(double)(-(ulonglong)(0.0 < dVar30) & (ulonglong)(dVar5 * dVar32));
    }
  }
LAB_143b0d1ba:
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b0d858 FUN_143b0d858 body=51 status=ok
// SIG undefined FUN_143b0d858(void)

bool FUN_143b0d858(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_4;
  lVar2 = *param_1;
  iVar3 = FUN_146bc96d4(*(undefined8 *)(lVar2 + 8),*param_3);
  iVar4 = FUN_146bc96d4(*(undefined8 *)(lVar2 + 8),uVar1);
  return iVar3 == iVar4;
}



// FUNCTION 143b0d88c FUN_143b0d88c body=242 status=ok
// SIG undefined FUN_143b0d88c(void)

void FUN_143b0d88c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = param_4[1];
  uVar2 = *param_3;
  uVar3 = *param_2;
  uVar7 = 0;
  uVar9 = *param_4;
  bVar6 = true;
  do {
    bVar10 = bVar6;
    local_78 = uVar2;
    local_70 = uVar7;
    FUN_14838af4a(*param_1,local_54,param_1[1],uVar3);
    local_60 = 0xffffffffffffffff;
    local_58 = 0xffffffff;
    plVar4 = (longlong *)param_1[2];
    lVar8 = 0;
    do {
      lVar5 = *plVar4;
      *(undefined4 *)((longlong)&local_60 + lVar8 * 4) =
           *(undefined4 *)
            (*(longlong *)(lVar5 + (longlong)((int)local_54[lVar8] >> 0x14) * 0x10) +
            (ulonglong)(local_54[lVar8] & 0xfffff) * 4);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 3);
    FUN_146c01486(*(undefined8 *)param_1[3],uVar9,&local_60,
                  CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
    uVar7 = 1;
    uVar9 = uVar1;
    bVar6 = false;
  } while (bVar10);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0da00 FUN_143b0da00 body=29 status=ok
// SIG undefined FUN_143b0da00(void)

undefined8 FUN_143b0da00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b0da1e FUN_143b0da1e body=796 status=ok
// SIG undefined FUN_143b0da1e(void)

void FUN_143b0da1e(longlong *param_1,int *param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_128 [32];
  double *local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(*(longlong *)param_1[4] + (longlong)*param_2 * 4);
  local_108 = &local_c0;
  FUN_146c1477c(*(undefined8 *)(*param_1 + 8),iVar1,&local_a8,&local_c8);
  if (9.999999974752427e-07 <= local_c8) {
    dVar5 = *(double *)param_1[5];
    dVar6 = dVar5 * local_98;
    dVar7 = dVar5 * dStack_a0;
    dVar5 = dVar5 * local_a8;
    local_e8 = dVar6 + local_b0;
    local_f0 = dVar7 + local_b8;
    local_f8 = dVar5 + local_c0;
    local_d0 = -local_98;
    local_e0._8_4_ = SUB84(dStack_a0,0);
    local_e0._0_8_ = -local_a8;
    local_e0._12_4_ = (int)((ulonglong)-dStack_a0 >> 0x20);
    dVar4 = local_98 * local_98 + local_a8 * local_a8 + dStack_a0 * dStack_a0;
    if (9.99999993922529e-09 < dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      local_e0._8_8_ = -dStack_a0 * dVar4;
      local_e0._0_8_ = -local_a8 * dVar4;
      local_d0 = dVar4 * local_d0;
    }
    iVar2 = (**(code **)(**(longlong **)param_1[1] + 0x40))
                      (*(longlong **)param_1[1],&local_f8,param_1[2]);
    local_e0._8_8_ = dStack_a0;
    local_e0._0_8_ = local_a8;
    local_d0 = local_98;
    dVar4 = local_98 * local_98 + local_a8 * local_a8 + dStack_a0 * dStack_a0;
    if (9.99999993922529e-09 < dVar4) {
      local_d0 = 1.0 / SQRT(dVar4);
      local_e0._8_8_ = dStack_a0 * local_d0;
      local_e0._0_8_ = local_a8 * local_d0;
      local_d0 = local_98 * local_d0;
    }
    local_f8 = local_c0 - dVar5;
    local_f0 = local_b8 - dVar7;
    local_e8 = local_b0 - dVar6;
    iVar3 = (**(code **)(**(longlong **)param_1[1] + 0x40))
                      (*(longlong **)param_1[1],&local_f8,param_1[2]);
    if ((iVar2 == iVar1) != (iVar3 == iVar1)) {
      lpCriticalSection = (LPCRITICAL_SECTION)param_1[3];
      EnterCriticalSection(lpCriticalSection);
      if ((iVar2 == iVar1) || (iVar3 == iVar1)) {
        *(double *)(param_1[4] + 0x10 + (ulonglong)(iVar3 == iVar1) * 8) =
             local_c8 + *(double *)(param_1[4] + 0x10 + (ulonglong)(iVar3 == iVar1) * 8);
      }
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0dd3c FUN_143b0dd3c body=229 status=ok
// SIG undefined FUN_143b0dd3c(void)

void FUN_143b0dd3c(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *param_2;
  pcVar3 = *(char **)*param_1;
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 != '\0') goto LAB_143b0dd97;
    pcVar4 = *(code **)(pcVar3 + 0x70);
    plVar7 = (longlong *)(pcVar3 + 0x90);
    if (*(longlong **)(pcVar3 + 0x80) != (longlong *)0x0) {
      plVar7 = *(longlong **)(pcVar3 + 0x80);
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    cVar5 = (*pcVar4)(uVar6);
    *pcVar3 = cVar5;
    if (cVar5 != '\0') goto LAB_143b0dd97;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uVar2 = *(undefined4 *)(*(longlong *)param_1[1] + (longlong)iVar1 * 4);
  uVar6 = param_1[2];
  local_60[0] = uVar2;
  FUN_14832b114(uVar6,&local_48,uVar2);
  FUN_14832b196(uVar6,&local_70,uVar2);
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  (**(code **)(**(longlong **)param_1[3] + 0x20))(*(longlong **)param_1[3],local_60);
LAB_143b0dd97:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0de22 FUN_143b0de22 body=1131 status=ok
// SIG undefined FUN_143b0de22(void)

void FUN_143b0de22(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  code *pcVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_158 [44];
  int local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  int local_114;
  int local_110;
  int local_10c;
  uint local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  bool local_e0;
  uint local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  uint local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar14 = *param_2;
  pcVar5 = *(char **)*param_1;
  if (pcVar5 != (char *)0x0) {
    if (*pcVar5 != '\0') goto LAB_143b0de88;
    pcVar6 = *(code **)(pcVar5 + 0x70);
    plVar12 = (longlong *)(pcVar5 + 0x90);
    if (*(longlong **)(pcVar5 + 0x80) != (longlong *)0x0) {
      plVar12 = *(longlong **)(pcVar5 + 0x80);
    }
    (**(code **)(*plVar12 + 8))();
    cVar8 = (*pcVar6)();
    *pcVar5 = cVar8;
    if (cVar8 != '\0') goto LAB_143b0de88;
  }
  local_108 = 0xffffffff;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = false;
  local_d8 = 0xffffffff;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = *(uint *)(*(longlong *)param_1[1] + (longlong)iVar14 * 4);
  lVar13 = *(longlong *)
            (*(longlong *)(*(longlong *)param_1[2] + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
  lVar10 = (ulonglong)((uVar2 & 0x1ff) << 2) * 3;
  iVar14 = *(int *)(lVar13 + lVar10);
  iVar3 = *(int *)(lVar13 + 4 + lVar10);
  iVar16 = *(int *)(lVar13 + 8 + lVar10);
  lVar13 = param_1[3];
  iVar9 = *(int *)(lVar13 + 0x10);
  iVar11 = *(int *)(lVar13 + 0x3c);
  local_118 = uVar2;
  local_114 = iVar14;
  local_110 = iVar3;
  local_10c = iVar16;
  if (iVar9 != iVar11) {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[2] + 0x180) + (ulonglong)(uVar2 >> 9) * 8);
    puVar1 = (uint *)(lVar7 + lVar10);
    uVar4 = *(uint *)(lVar7 + lVar10);
    lVar10 = lVar13 + 0x40;
    if (*(longlong *)(lVar13 + 0x48) != 0) {
      lVar10 = *(longlong *)(lVar13 + 0x48);
    }
    iVar15 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar13 + 0x50) - 1U & uVar4) * 4);
    if (iVar15 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar13 + 8) + (longlong)iVar15 * 0xc) == uVar4) {
          local_12c = iVar16;
          local_108 = uVar4;
          FUN_14832b114(lVar13,&local_f0,uVar4);
          FUN_14832b196(lVar13,&local_128,uVar4);
          local_100 = CONCAT44(uStack_124,local_128);
          uStack_f8 = uStack_120;
          uStack_f4 = uStack_11c;
          local_e0 = iVar14 != *(int *)(*(longlong *)
                                         (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                         (ulonglong)(*puVar1 >> 9) * 8) +
                                       (ulonglong)((*puVar1 & 0x1ff) << 4));
          lVar13 = param_1[3];
          iVar9 = *(int *)(lVar13 + 0x10);
          iVar11 = *(int *)(lVar13 + 0x3c);
          iVar16 = local_12c;
          break;
        }
        iVar15 = *(int *)(*(longlong *)(lVar13 + 8) + (longlong)iVar15 * 0xc + 4);
      } while (iVar15 != -1);
    }
    if (iVar9 != iVar11) {
      uVar4 = puVar1[1];
      lVar10 = lVar13 + 0x40;
      if (*(longlong *)(lVar13 + 0x48) != 0) {
        lVar10 = *(longlong *)(lVar13 + 0x48);
      }
      iVar14 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar13 + 0x50) - 1U & uVar4) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(*(longlong *)(lVar13 + 8) + (longlong)iVar14 * 0xc) == uVar4) {
            local_d8 = uVar4;
            FUN_14832b114(lVar13,&local_128,uVar4);
            local_c0 = CONCAT44(uStack_124,local_128);
            uStack_b8 = uStack_120;
            uStack_b4 = uStack_11c;
            FUN_14832b196(lVar13,&local_128,uVar4);
            local_d0 = CONCAT44(uStack_124,local_128);
            uStack_c8 = uStack_120;
            uStack_c4 = uStack_11c;
            local_b0 = iVar3 != *(int *)(*(longlong *)
                                          (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                          (ulonglong)(puVar1[1] >> 9) * 8) +
                                        (ulonglong)((puVar1[1] & 0x1ff) << 4));
            lVar13 = param_1[3];
            iVar9 = *(int *)(lVar13 + 0x10);
            iVar11 = *(int *)(lVar13 + 0x3c);
            break;
          }
          iVar14 = *(int *)(*(longlong *)(lVar13 + 8) + (longlong)iVar14 * 0xc + 4);
        } while (iVar14 != -1);
      }
      if (iVar9 != iVar11) {
        uVar4 = puVar1[2];
        lVar10 = lVar13 + 0x40;
        if (*(longlong *)(lVar13 + 0x48) != 0) {
          lVar10 = *(longlong *)(lVar13 + 0x48);
        }
        iVar14 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar13 + 0x50) - 1U & uVar4) * 4);
        if (iVar14 != -1) {
          do {
            local_12c = iVar16;
            if (*(uint *)(*(longlong *)(lVar13 + 8) + (longlong)iVar14 * 0xc) == uVar4) {
              local_a8 = uVar4;
              FUN_14832b114(lVar13,&local_128,uVar4);
              local_90 = CONCAT44(uStack_124,local_128);
              uStack_88 = uStack_120;
              uStack_84 = uStack_11c;
              FUN_14832b196(lVar13,&local_128,uVar4);
              local_a0 = CONCAT44(uStack_124,local_128);
              uStack_98 = uStack_120;
              uStack_94 = uStack_11c;
              local_80 = local_12c !=
                         *(int *)(*(longlong *)
                                   (*(longlong *)(*(longlong *)param_1[2] + 0x1c0) +
                                   (ulonglong)(puVar1[2] >> 9) * 8) +
                                 (ulonglong)((puVar1[2] & 0x1ff) << 4));
              lVar13 = param_1[3];
              break;
            }
            iVar14 = *(int *)(*(longlong *)(lVar13 + 8) + (longlong)iVar14 * 0xc + 4);
          } while (iVar14 != -1);
        }
      }
    }
  }
  FUN_14832b286(lVar13,&local_128,uVar2);
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  FUN_14832b30c(lVar13,&local_128,uVar2);
  uStack_70 = uStack_120;
  uStack_6c = uStack_11c;
  FUN_14832b38e(lVar13,&local_128,uVar2);
  uStack_50 = uStack_120;
  uStack_4c = uStack_11c;
  (**(code **)(**(longlong **)param_1[4] + 0x28))(*(longlong **)param_1[4],&local_118);
LAB_143b0de88:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b0e28e FUN_143b0e28e body=280 status=ok
// SIG undefined FUN_143b0e28e(void)

void FUN_143b0e28e(longlong *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_80 [2];
  longlong local_70;
  int local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *param_1;
  uVar1 = *(uint *)(*(longlong *)(lVar3 + 8) + (longlong)*param_2 * 0xc);
  FUN_14832b114(lVar3,&local_70,uVar1);
  FUN_14832b196(lVar3,local_80,uVar1);
  if (0 < (longlong)local_68) {
    uVar2 = *(undefined8 *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)param_1[1] + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) +
             (ulonglong)((uVar1 & 0x1ff) << 4));
    lVar3 = 0;
    do {
      local_50 = *(undefined8 *)(local_70 + lVar3 * 8);
      local_54 = *(undefined4 *)
                  (*(longlong *)param_1[2] + (longlong)*(int *)(local_80[0] + lVar3 * 4) * 4);
      local_58 = (undefined4)((ulonglong)uVar2 >> 0x20);
      local_5c = (undefined4)uVar2;
      local_88 = &local_50;
      (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],&local_5c,&local_58,&local_54);
      lVar3 = lVar3 + 1;
    } while (local_68 != lVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0e3a8 FUN_143b0e3a8 body=371 status=ok
// SIG undefined FUN_143b0e3a8(void)

void FUN_143b0e3a8(longlong *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  longlong local_90 [2];
  longlong local_80;
  int local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = *param_1;
  uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x58) + (longlong)*param_2 * 0xc);
  FUN_14832b286(lVar7,&local_80,uVar1);
  FUN_14832b30c(lVar7,local_90,uVar1);
  if (0 < (longlong)local_78) {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[1] + 0x130) + (ulonglong)(uVar1 >> 9) * 8);
    uVar5 = (ulonglong)(uVar1 & 0x1ff);
    uVar2 = *(undefined4 *)(lVar7 + uVar5 * 0xc);
    uVar3 = *(undefined4 *)(lVar7 + 4 + uVar5 * 0xc);
    uVar4 = *(undefined4 *)(lVar7 + 8 + uVar5 * 0xc);
    puVar6 = (undefined8 *)(local_80 + 0x10);
    lVar7 = 0;
    do {
      local_60 = puVar6[-2];
      local_58 = puVar6[-1];
      local_50 = *puVar6;
      local_64 = *(undefined4 *)
                  (*(longlong *)param_1[2] + (longlong)*(int *)(local_90[0] + lVar7 * 4) * 4);
      local_a0 = &local_50;
      local_a8 = &local_58;
      local_b0 = &local_60;
      local_b8 = &local_64;
      local_70 = uVar2;
      local_6c = uVar3;
      local_68 = uVar4;
      (**(code **)param_1[3])(((undefined8 *)param_1[3])[1],&local_70,&local_6c,&local_68);
      lVar7 = lVar7 + 1;
      puVar6 = puVar6 + 3;
    } while (local_78 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0e51c FUN_143b0e51c body=492 status=ok
// SIG undefined FUN_143b0e51c(void)

void FUN_143b0e51c(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,double *param_5)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined4 *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e0 [48];
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [48];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar1 = *param_5;
  uVar4 = SUB84(dVar1,0);
  uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uVar2 = *param_4;
  uVar3 = *param_3;
  local_70 = 0;
  local_68 = 0xc00000000;
  local_b0 = 0;
  local_a8 = 0xc00000000;
  local_f8 = 0;
  local_f0 = 0xc00000000;
  FUN_146bea50a(local_a0,(ulonglong)((*param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(*param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8));
  FUN_146bea50a(local_e0,(ulonglong)((uVar3 & 0x1ff) << 6) +
                         *(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar3 >> 9) * 8)
               );
  if (1.0 <= dVar1) {
    uVar4 = 0;
    uVar5 = 0x3ff00000;
  }
  if ((double)CONCAT44(uVar5,uVar4) <= 0.0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  local_198 = &local_190;
  local_190 = 2;
  uStack_18c = 0xc;
  uStack_188 = 1;
  uStack_184 = 0x100;
  local_170 = &local_168;
  local_138 = 0;
  local_130 = 0xc00000000;
  local_180 = local_e0;
  local_178 = local_a0;
  FUN_146beae50(&local_170,&local_178,&local_180,(float)(double)CONCAT44(uVar5,uVar4));
  if (local_138 == 0) {
    local_108 = local_148;
    uStack_100 = uStack_140;
    local_118 = local_158;
    uStack_110 = uStack_150;
    local_128 = local_168;
    uStack_124 = uStack_164;
    uStack_120 = uStack_160;
    uStack_11c = uStack_15c;
  }
  local_f8 = local_138;
  local_f0 = local_130;
  FUN_146bea50a((ulonglong)((uVar2 & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)(uVar2 >> 9) * 8),
                &local_128);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0e70a FUN_143b0e70a body=606 status=ok
// SIG undefined FUN_143b0e70a(void)

void FUN_143b0e70a(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  double *param_6,double *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_218 [32];
  float local_1f8;
  float local_1f0;
  float local_1e8;
  undefined4 *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 local_150;
  undefined1 local_140 [48];
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100 [48];
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [48];
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar4 = *param_5;
  uVar5 = *param_4;
  dVar1 = *param_8;
  uVar6 = *param_3;
  dVar2 = *param_7;
  dVar3 = *param_6;
  local_90 = 0;
  local_88 = 0xc00000000;
  local_d0 = 0;
  local_c8 = 0xc00000000;
  local_110 = 0;
  local_108 = 0xc00000000;
  FUN_146bea50a(local_c0,(ulonglong)((*param_2 & 0x1ff) << 6) +
                         *(longlong *)
                          (*(longlong *)(*param_1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8));
  FUN_146bea50a(local_100,
                (ulonglong)((uVar6 & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar6 >> 9) * 8));
  FUN_146bea50a(local_140,
                (ulonglong)((uVar5 & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(*param_1 + 0x20) + (ulonglong)(uVar5 >> 9) * 8));
  local_1e0 = &local_1d8;
  local_1d8 = 2;
  uStack_1d4 = 0xc;
  uStack_1d0 = 1;
  uStack_1cc = 0x100;
  local_1f8 = (float)dVar3;
  local_1f0 = (float)dVar2;
  local_1e8 = (float)dVar1;
  FUN_146becbe6(&local_1c8,local_c0,local_100,local_140);
  if (local_198 == 0) {
    local_168 = local_1a8;
    uStack_160 = uStack_1a0;
    local_178 = local_1b8;
    uStack_170 = uStack_1b0;
    local_188 = local_1c8;
    uStack_184 = uStack_1c4;
    uStack_180 = uStack_1c0;
    uStack_17c = uStack_1bc;
  }
  local_158 = local_198;
  local_150 = local_190;
  FUN_146bea50a((ulonglong)((uVar4 & 0x1ff) << 6) +
                *(longlong *)(*(longlong *)(param_1[1] + 0x20) + (ulonglong)(uVar4 >> 9) * 8),
                &local_188);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0e96a FUN_143b0e96a body=253 status=ok
// SIG undefined FUN_143b0e96a(void)

void FUN_143b0e96a(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,double *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  lVar5 = *param_1;
  pfVar6 = (float *)&DAT_14c846370;
  pfVar8 = (float *)&DAT_14c846370;
  if (*(char *)(lVar5 + 0x70) == '\x01') {
    pfVar8 = (float *)((ulonglong)((*param_2 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar5 + 0x60) + (ulonglong)(*param_2 >> 9) * 8));
  }
  if (*(char *)(lVar5 + 0x70) != '\0') {
    pfVar6 = (float *)((ulonglong)((*param_3 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar5 + 0x60) + (ulonglong)(*param_3 >> 9) * 8));
  }
  if (*(char *)(param_1[1] + 0x70) == '\x01') {
    dVar10 = *param_5;
    if (1.0 <= dVar10) {
      dVar10 = 1.0;
    }
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    fVar11 = (float)(1.0 - dVar10);
    fVar1 = pfVar8[2];
    fVar2 = pfVar8[1];
    fVar9 = (float)dVar10;
    fVar3 = pfVar6[1];
    fVar4 = pfVar6[2];
    lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x60) + (ulonglong)(*param_4 >> 9) * 8);
    uVar7 = (ulonglong)(*param_4 & 0x1ff);
    *(float *)(lVar5 + uVar7 * 0xc) = *pfVar6 * fVar9 + fVar11 * *pfVar8;
    *(float *)(lVar5 + 4 + uVar7 * 0xc) = fVar3 * fVar9 + fVar2 * fVar11;
    *(float *)(lVar5 + 8 + uVar7 * 0xc) = fVar9 * fVar4 + fVar1 * fVar11;
  }
  return;
}



// FUNCTION 143b0ea68 FUN_143b0ea68 body=316 status=ok
// SIG undefined FUN_143b0ea68(void)

void FUN_143b0ea68(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  double *param_6,double *param_7,double *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar7 = *param_1;
  pfVar8 = (float *)&DAT_14c846370;
  pfVar11 = (float *)&DAT_14c846370;
  if (*(char *)(lVar7 + 0x70) == '\x01') {
    pfVar11 = (float *)((ulonglong)((*param_2 & 0x1ff) * 0xc) +
                       *(longlong *)(*(longlong *)(lVar7 + 0x60) + (ulonglong)(*param_2 >> 9) * 8));
  }
  pfVar9 = (float *)&DAT_14c846370;
  if (*(char *)(lVar7 + 0x70) != '\0') {
    pfVar9 = (float *)((ulonglong)((*param_3 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar7 + 0x60) + (ulonglong)(*param_3 >> 9) * 8));
    pfVar8 = (float *)((ulonglong)((*param_4 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar7 + 0x60) + (ulonglong)(*param_4 >> 9) * 8));
  }
  if (*(char *)(param_1[1] + 0x70) == '\x01') {
    fVar13 = (float)*param_6;
    fVar12 = (float)*param_7;
    fVar1 = pfVar11[2];
    fVar2 = pfVar11[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[1];
    fVar14 = (float)*param_8;
    fVar5 = pfVar8[1];
    fVar6 = pfVar8[2];
    lVar7 = *(longlong *)(*(longlong *)(param_1[1] + 0x60) + (ulonglong)(*param_5 >> 9) * 8);
    uVar10 = (ulonglong)(*param_5 & 0x1ff);
    *(float *)(lVar7 + uVar10 * 0xc) = *pfVar8 * fVar14 + fVar12 * *pfVar9 + fVar13 * *pfVar11;
    *(float *)(lVar7 + 4 + uVar10 * 0xc) = fVar5 * fVar14 + fVar4 * fVar12 + fVar2 * fVar13;
    *(float *)(lVar7 + 8 + uVar10 * 0xc) = fVar14 * fVar6 + fVar3 * fVar12 + fVar1 * fVar13;
  }
  return;
}



// FUNCTION 143b0edd2 FUN_143b0edd2 body=268 status=ok
// SIG undefined FUN_143b0edd2(void)

void FUN_143b0edd2(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,double *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  lVar5 = *param_1;
  pfVar6 = (float *)&DAT_14c846350;
  pfVar8 = (float *)&DAT_14c846350;
  if (*(char *)(lVar5 + 0x90) == '\x01') {
    pfVar8 = (float *)((ulonglong)((*param_2 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)(*param_2 >> 9) * 8));
  }
  if (*(char *)(lVar5 + 0x90) != '\0') {
    pfVar6 = (float *)((ulonglong)((*param_3 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar5 + 0x80) + (ulonglong)(*param_3 >> 9) * 8));
  }
  if (*(char *)(param_1[1] + 0x90) == '\x01') {
    dVar10 = *param_5;
    if (1.0 <= dVar10) {
      dVar10 = 1.0;
    }
    if (dVar10 <= 0.0) {
      dVar10 = 0.0;
    }
    fVar11 = (float)(1.0 - dVar10);
    fVar1 = pfVar8[2];
    fVar2 = pfVar8[1];
    fVar9 = (float)dVar10;
    fVar3 = pfVar6[1];
    fVar4 = pfVar6[2];
    lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x80) + (ulonglong)(*param_4 >> 9) * 8);
    uVar7 = (ulonglong)(*param_4 & 0x1ff);
    *(float *)(lVar5 + uVar7 * 0xc) = *pfVar6 * fVar9 + fVar11 * *pfVar8;
    *(float *)(lVar5 + 4 + uVar7 * 0xc) = fVar3 * fVar9 + fVar2 * fVar11;
    *(float *)(lVar5 + 8 + uVar7 * 0xc) = fVar9 * fVar4 + fVar1 * fVar11;
  }
  return;
}



// FUNCTION 143b0eede FUN_143b0eede body=334 status=ok
// SIG undefined FUN_143b0eede(void)

void FUN_143b0eede(longlong *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  double *param_6,double *param_7,double *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong uVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar7 = *param_1;
  pfVar8 = (float *)&DAT_14c846350;
  pfVar11 = (float *)&DAT_14c846350;
  if (*(char *)(lVar7 + 0x90) == '\x01') {
    pfVar11 = (float *)((ulonglong)((*param_2 & 0x1ff) * 0xc) +
                       *(longlong *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)(*param_2 >> 9) * 8));
  }
  pfVar9 = (float *)&DAT_14c846350;
  if (*(char *)(lVar7 + 0x90) != '\0') {
    pfVar9 = (float *)((ulonglong)((*param_3 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)(*param_3 >> 9) * 8));
    pfVar8 = (float *)((ulonglong)((*param_4 & 0x1ff) * 0xc) +
                      *(longlong *)(*(longlong *)(lVar7 + 0x80) + (ulonglong)(*param_4 >> 9) * 8));
  }
  if (*(char *)(param_1[1] + 0x90) == '\x01') {
    fVar13 = (float)*param_6;
    fVar12 = (float)*param_7;
    fVar1 = pfVar11[2];
    fVar2 = pfVar11[1];
    fVar3 = pfVar9[2];
    fVar4 = pfVar9[1];
    fVar14 = (float)*param_8;
    fVar5 = pfVar8[1];
    fVar6 = pfVar8[2];
    lVar7 = *(longlong *)(*(longlong *)(param_1[1] + 0x80) + (ulonglong)(*param_5 >> 9) * 8);
    uVar10 = (ulonglong)(*param_5 & 0x1ff);
    *(float *)(lVar7 + uVar10 * 0xc) = *pfVar8 * fVar14 + fVar12 * *pfVar9 + fVar13 * *pfVar11;
    *(float *)(lVar7 + 4 + uVar10 * 0xc) = fVar5 * fVar14 + fVar4 * fVar12 + fVar2 * fVar13;
    *(float *)(lVar7 + 8 + uVar10 * 0xc) = fVar14 * fVar6 + fVar3 * fVar12 + fVar1 * fVar13;
  }
  return;
}



// FUNCTION 143b0f02c FUN_143b0f02c body=472 status=ok
// SIG undefined FUN_143b0f02c(void)

void FUN_143b0f02c(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [48];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *param_2;
  plVar2 = (longlong *)*param_1;
  cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
  if (cVar5 != '\0') goto LAB_143b0f1af;
  if ((char)param_1[5] == '\x01') {
    uVar7 = *(uint *)(plVar2[0x16] + (longlong)(int)uVar7 * 4);
  }
  if (((int)uVar7 < 0) ||
     (lVar3 = param_1[1], *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24) <= (int)uVar7))
  goto LAB_143b0f1af;
  uVar8 = (ulonglong)(uVar7 >> 9);
  uVar6 = (ulonglong)(uVar7 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar8 * 8) +
                                  uVar6 * 2) - 1U)) goto LAB_143b0f1af;
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + uVar8 * 8);
  local_78 = *(undefined8 *)(lVar4 + 0x10 + uVar6 * 0x18);
  puVar1 = (undefined8 *)(lVar4 + uVar6 * 0x18);
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  local_90 = DAT_14c846378;
  local_98 = DAT_14c846370;
  if (0.0 <= (double)plVar2[0xf]) {
    if (*(char *)(lVar3 + 0x70) == '\0') {
      if (*(longlong *)param_1[4] == 0) goto LAB_143b0f15f;
      lVar3 = *(longlong *)(*(longlong *)param_1[4] + 8);
      uVar6 = (ulonglong)uVar7;
      local_90 = (float)*(double *)(lVar3 + 0x10 + uVar6 * 0x18);
      fVar9 = (float)*(double *)(lVar3 + 8 + uVar6 * 0x18);
      fVar10 = (float)*(double *)(lVar3 + uVar6 * 0x18);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + uVar8 * 8);
      fVar10 = *(float *)(lVar3 + uVar6 * 0xc);
      fVar9 = *(float *)(lVar3 + 4 + uVar6 * 0xc);
      local_90 = *(float *)(lVar3 + 8 + uVar6 * 0xc);
    }
    local_98 = CONCAT44(fVar9,fVar10);
  }
LAB_143b0f15f:
  local_40 = 0;
  local_38 = 0xc00000000;
  local_a8 = &local_98;
  cVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,local_70,&local_88,*(undefined8 *)param_1[2]);
  if (cVar5 != '\0') {
    FUN_146bea50a((ulonglong)((uVar7 & 0x1ff) << 6) +
                  *(longlong *)(*(longlong *)(*(longlong *)param_1[3] + 0x20) + uVar8 * 8),local_70)
    ;
    *(undefined1 *)(plVar2[0x18] + (ulonglong)uVar7) = 1;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_143b0f1af:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0f206 FUN_143b0f206 body=537 status=ok
// SIG undefined FUN_143b0f206(void)

void FUN_143b0f206(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [48];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *param_2;
  uVar9 = (ulonglong)uVar2;
  plVar3 = (longlong *)*param_1;
  cVar6 = (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((cVar6 != '\0') || ((int)uVar2 < 0)) goto LAB_143b0f3ca;
  lVar4 = param_1[1];
  iVar7 = *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24);
  if (iVar7 <= (int)uVar2) goto LAB_143b0f3ca;
  uVar10 = (ulonglong)(uVar2 >> 9);
  uVar8 = (ulonglong)(uVar2 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar10 * 8) +
                                  uVar8 * 2) - 1U)) goto LAB_143b0f3ca;
  if ((int)plVar3[0x14] == iVar7) {
    fVar12 = *(float *)(plVar3[0x13] + uVar9 * 4);
    if ((fVar12 != 0.0) || (NAN(fVar12))) goto LAB_143b0f3ca;
  }
  if (*(longlong *)param_1[2] != 0) {
    fVar12 = *(float *)(*(longlong *)(*(longlong *)(*(longlong *)param_1[2] + 0x20) + uVar10 * 8) +
                       uVar8 * 4);
    if ((fVar12 != 0.0) || (NAN(fVar12))) goto LAB_143b0f3ca;
  }
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar10 * 8);
  local_78 = *(undefined8 *)(lVar5 + 0x10 + uVar8 * 0x18);
  puVar1 = (undefined8 *)(lVar5 + uVar8 * 0x18);
  local_88 = *puVar1;
  uStack_80 = puVar1[1];
  local_90 = DAT_14c846378;
  local_98 = DAT_14c846370;
  if (0.0 <= (double)plVar3[0xf]) {
    if (*(char *)(lVar4 + 0x70) == '\0') {
      if (*(longlong *)param_1[5] == 0) goto LAB_143b0f37a;
      lVar4 = *(longlong *)(*(longlong *)param_1[5] + 8);
      local_90 = (float)*(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      fVar11 = (float)*(double *)(lVar4 + 8 + uVar9 * 0x18);
      fVar12 = (float)*(double *)(lVar4 + uVar9 * 0x18);
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + uVar10 * 8);
      fVar12 = *(float *)(lVar4 + uVar8 * 0xc);
      fVar11 = *(float *)(lVar4 + 4 + uVar8 * 0xc);
      local_90 = *(float *)(lVar4 + 8 + uVar8 * 0xc);
    }
    local_98 = CONCAT44(fVar11,fVar12);
  }
LAB_143b0f37a:
  local_40 = 0;
  local_38 = 0xc00000000;
  local_a8 = &local_98;
  cVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,local_70,&local_88,*(undefined8 *)param_1[3]);
  if (cVar6 != '\0') {
    FUN_146bea50a((ulonglong)((uVar2 & 0x1ff) << 6) +
                  *(longlong *)(*(longlong *)(*(longlong *)param_1[4] + 0x20) + uVar10 * 8),local_70
                 );
    *(undefined1 *)(plVar3[0x18] + uVar9) = 1;
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_143b0f3ca:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0f420 FUN_143b0f420 body=1711 status=ok
// SIG undefined FUN_143b0f420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143b0f420(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  undefined1 *_Dst;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_d8 [8];
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  char local_71;
  ulonglong local_70;
  undefined1 local_58 [24];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_58;
  local_80 = *(ulonglong *)(param_1 + 0x10);
  local_b8 = *(longlong *)(param_2 + 8);
  local_b0 = param_2;
  local_88 = param_3;
  local_71 = param_4;
  if (local_80 < 0x20001) {
    lVar16 = -(local_80 + 0x1e & 0xfffffffffffffff0);
    puVar15 = auStack_d8 + lVar16;
    _Dst = auStack_d8 + lVar16;
  }
  else {
    _Dst = (undefined1 *)FUN_14001cc68();
    if (_Dst == (void *)0x0) {
      FUN_14001cc68(0xffffffffffffffff);
    }
    puVar15 = auStack_d8;
    if (local_80 >> 0x3d != 0) {
      FUN_14001cc68(0xffffffffffffffff);
      puVar15 = auStack_d8;
      bVar9 = true;
      goto LAB_143b0f4f0;
    }
  }
  bVar9 = false;
LAB_143b0f4f0:
  uVar21 = local_80 * 8;
  if (uVar21 < 0x20001) {
    *(undefined8 *)(puVar15 + -8) = 0x143b0f50e;
    lVar16 = -(uVar21 + 0x1e & 0xfffffffffffffff0);
    puVar11 = puVar15 + lVar16;
    puVar15 = puVar15 + lVar16;
  }
  else {
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0f527;
    puVar11 = (undefined1 *)FUN_14001cc68(uVar21);
    if (puVar11 == (undefined1 *)0x0) {
      *(undefined8 *)(puVar15 + -0x28) = 0x143b0f548;
      FUN_14001cc68(0xffffffffffffffff);
      puVar11 = (undefined1 *)0x0;
    }
  }
  if (bVar9) {
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0f569;
    FUN_14001cc68(0xffffffffffffffff);
  }
  local_c0 = uVar21;
  if (uVar21 < 0x20001) {
    *(undefined8 *)(puVar15 + -8) = 0x143b0f587;
    lVar16 = -(uVar21 + 0x1e & 0xfffffffffffffff0);
    puVar12 = puVar15 + lVar16;
    puVar15 = puVar15 + lVar16;
  }
  else {
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0f5a0;
    puVar12 = (undefined1 *)FUN_14001cc68(uVar21);
    if (puVar12 == (undefined1 *)0x0) {
      *(undefined8 *)(puVar15 + -0x28) = 0x143b0f5c1;
      FUN_14001cc68(0xffffffffffffffff);
      puVar12 = (undefined1 *)0x0;
    }
  }
  uVar21 = local_80;
  *(undefined8 *)(puVar15 + -0x28) = 0x143b0f5da;
  memset(_Dst,0,uVar21);
  *(undefined8 *)(puVar15 + -0x28) = 0x143b0f5e2;
  lVar13 = FUN_146de5690(param_1);
  lVar16 = local_b0;
  *(undefined8 *)(puVar15 + -0x28) = 0x143b0f5f6;
  lVar14 = FUN_146de5690(lVar16);
  lVar22 = local_88;
  *(undefined8 *)(local_88 + 0x38) = 0;
  lVar16 = *(longlong *)(local_88 + 8);
  pvVar6 = *(void **)(local_88 + 0x18);
  *(undefined8 *)(puVar15 + -0x28) = 0x143b0f627;
  memset(pvVar6,0,lVar16 * 4 + 4);
  pvVar6 = *(void **)(lVar22 + 0x20);
  if (pvVar6 != (void *)0x0) {
    lVar16 = *(longlong *)(lVar22 + 8);
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0f64a;
    memset(pvVar6,0,lVar16 << 2);
    lVar22 = local_88;
  }
  lVar16 = lVar14 + lVar13 + *(longlong *)(lVar22 + 0x38);
  if (*(longlong *)(lVar22 + 0x40) < lVar16) {
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0fac3;
    FUN_146de55aa(lVar22 + 0x28,lVar16);
    lVar22 = local_88;
  }
  uVar21 = local_80;
  if (0 < local_b8) {
    local_a8 = lVar22 + 0x28;
    local_d0 = (longlong)local_80 / 0xb;
    if (199 < local_d0) {
      local_d0 = 200;
    }
    local_c8 = (longlong)(local_80 * 100) / 0x8b;
    lVar16 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4) =
           *(undefined4 *)(*(longlong *)(lVar22 + 0x18) + lVar16 * 4);
      lVar13 = (longlong)*(int *)(*(longlong *)(local_b0 + 0x18) + lVar16 * 4);
      if (*(longlong *)(local_b0 + 0x20) == 0) {
        lVar14 = (longlong)*(int *)(*(longlong *)(local_b0 + 0x18) + 4 + lVar16 * 4);
      }
      else {
        lVar14 = *(int *)(*(longlong *)(local_b0 + 0x20) + lVar16 * 4) + lVar13;
      }
      local_90 = lVar16;
      if (lVar13 < lVar14) {
        lVar16 = *(longlong *)(local_b0 + 0x28);
        lVar22 = *(longlong *)(local_b0 + 0x30);
        uVar17 = 0;
        do {
          lVar20 = (longlong)*(int *)(lVar22 + lVar13 * 4);
          lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar20 * 4);
          if (*(longlong *)(param_1 + 0x20) == 0) {
            lVar20 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 4 + lVar20 * 4);
          }
          else {
            lVar20 = *(int *)(*(longlong *)(param_1 + 0x20) + lVar20 * 4) + lVar19;
          }
          if (lVar19 < lVar20) {
            dVar1 = *(double *)(lVar16 + lVar13 * 8);
            lVar7 = *(longlong *)(param_1 + 0x28);
            lVar8 = *(longlong *)(param_1 + 0x30);
            do {
              lVar23 = (longlong)*(int *)(lVar8 + lVar19 * 4);
              dVar2 = *(double *)(lVar7 + lVar19 * 8);
              if (*(char *)((longlong)_Dst + lVar23) == '\0') {
                *(undefined1 *)((longlong)_Dst + lVar23) = 1;
                *(double *)(puVar11 + lVar23 * 8) = dVar2 * dVar1;
                *(longlong *)(puVar12 + uVar17 * 8) = lVar23;
                uVar17 = uVar17 + 1;
              }
              else {
                *(double *)(puVar11 + lVar23 * 8) =
                     dVar2 * dVar1 + *(double *)(puVar11 + lVar23 * 8);
              }
              lVar19 = lVar19 + 1;
            } while (lVar20 != lVar19);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != lVar14);
        uVar21 = local_80;
        lVar22 = local_88;
        if (local_71 == '\0') {
          lVar16 = local_90;
          if (0 < (longlong)uVar17) {
            uVar18 = 0;
            do {
              lVar14 = local_a8;
              local_a0 = *(longlong *)(puVar12 + uVar18 * 8);
              uVar3 = *(undefined8 *)(puVar11 + *(longlong *)(puVar12 + uVar18 * 8) * 8);
              iVar4 = *(int *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4);
              local_98 = (longlong)iVar4;
              *(int *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4) = iVar4 + 1;
              lVar13 = *(longlong *)(lVar22 + 0x38);
              *(undefined8 *)(puVar15 + -0x28) = 0x143b0f8f9;
              FUN_146de554a(lVar14,lVar13 + 1,0);
              uVar21 = local_80;
              lVar22 = local_88;
              lVar16 = local_90;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + lVar13 * 8) = 0;
              *(int *)(*(longlong *)(local_88 + 0x30) + lVar13 * 4) = (int)local_a0;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + local_98 * 8) = uVar3;
              *(undefined1 *)((longlong)_Dst + local_a0) = 0;
              uVar18 = uVar18 + 1;
            } while (uVar17 != uVar18);
          }
        }
        else {
LAB_143b0f7ca:
          lVar16 = local_90;
          if (((longlong)uVar17 < local_d0) ||
             (uVar10 = (uint)(uVar17 >> 1) & 0x7fffffff | (uint)uVar17,
             uVar10 = uVar10 >> 2 | uVar10, uVar10 = uVar10 >> 4 | uVar10,
             uVar10 = uVar10 >> 8 | uVar10,
             (longlong)
             ((longlong)
              *(int *)(&DAT_14ae74970 +
                      (ulonglong)((uVar10 >> 0x10 | uVar10) * 0x7c4acdd >> 0x1b) * 4) * uVar17) <
             local_c8)) {
            if ((longlong)uVar17 < 2) {
              if (uVar17 != 1) goto LAB_143b0f9b6;
            }
            else {
              *(undefined8 *)(puVar15 + -0x28) = 0x143b0f9d8;
              FUN_14836bf00(puVar12,puVar12 + uVar17 * 8,uVar17);
              lVar22 = local_88;
            }
            uVar18 = 0;
            lVar16 = local_90;
            do {
              lVar14 = local_a8;
              local_a0 = *(longlong *)(puVar12 + uVar18 * 8);
              uVar3 = *(undefined8 *)(puVar11 + *(longlong *)(puVar12 + uVar18 * 8) * 8);
              iVar4 = *(int *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4);
              local_98 = (longlong)iVar4;
              *(int *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4) = iVar4 + 1;
              lVar13 = *(longlong *)(lVar22 + 0x38);
              *(undefined8 *)(puVar15 + -0x28) = 0x143b0f865;
              FUN_146de554a(lVar14,lVar13 + 1,0);
              uVar21 = local_80;
              lVar22 = local_88;
              lVar16 = local_90;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + lVar13 * 8) = 0;
              *(int *)(*(longlong *)(local_88 + 0x30) + lVar13 * 4) = (int)local_a0;
              *(undefined8 *)(*(longlong *)(local_88 + 0x28) + local_98 * 8) = uVar3;
              *(undefined1 *)((longlong)_Dst + local_a0) = 0;
              uVar18 = uVar18 + 1;
            } while (uVar17 != uVar18);
          }
          else if (0 < (longlong)uVar21) {
            uVar17 = 0;
            do {
              if (*(char *)((longlong)_Dst + uVar17) == '\x01') {
                *(undefined1 *)((longlong)_Dst + uVar17) = 0;
                lVar13 = local_a8;
                uVar3 = *(undefined8 *)(puVar11 + uVar17 * 8);
                iVar4 = *(int *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4);
                *(int *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar16 * 4) = iVar4 + 1;
                lVar16 = *(longlong *)(lVar22 + 0x38);
                *(undefined8 *)(puVar15 + -0x28) = 0x143b0f987;
                FUN_146de554a(lVar13,lVar16 + 1,0);
                *(undefined8 *)(*(longlong *)(local_88 + 0x28) + lVar16 * 8) = 0;
                *(int *)(*(longlong *)(local_88 + 0x30) + lVar16 * 4) = (int)uVar17;
                *(undefined8 *)(*(longlong *)(local_88 + 0x28) + (longlong)iVar4 * 8) = uVar3;
                lVar16 = local_90;
                uVar21 = local_80;
                lVar22 = local_88;
              }
              uVar17 = uVar17 + 1;
            } while (uVar21 != uVar17);
          }
        }
      }
      else if (local_71 != '\0') {
        uVar17 = 0;
        goto LAB_143b0f7ca;
      }
LAB_143b0f9b6:
      lVar16 = lVar16 + 1;
    } while (lVar16 != local_b8);
  }
  if ((*(longlong *)(lVar22 + 0x20) == 0) && (lVar16 = *(longlong *)(lVar22 + 8), -1 < lVar16)) {
    uVar5 = *(undefined4 *)(lVar22 + 0x38);
    lVar13 = lVar16;
    do {
      if (*(int *)(*(longlong *)(lVar22 + 0x18) + lVar13 * 4) != 0) goto LAB_143b0fa94;
      bVar9 = 0 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar9);
    lVar13 = -1;
LAB_143b0fa94:
    if (lVar13 < lVar16) {
      do {
        *(undefined4 *)(*(longlong *)(lVar22 + 0x18) + 4 + lVar13 * 4) = uVar5;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(longlong *)(lVar22 + 8));
    }
  }
  if (0x20000 < local_c0) {
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0fa06;
    FUN_1400020a8(puVar12);
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0fa0e;
    FUN_1400020a8(puVar11);
    uVar21 = local_80;
  }
  if (0x20000 < uVar21) {
    *(undefined8 *)(puVar15 + -0x28) = 0x143b0fa2b;
    FUN_1400020a8(_Dst);
  }
  if ((local_70 ^ (ulonglong)local_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar15 + -0x28) = &UNK_143b0fa61;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143b0fae6 FUN_143b0fae6 body=699 status=ok
// SIG undefined FUN_143b0fae6(void)

void FUN_143b0fae6(undefined8 *param_1,int *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_88 [3];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar4 = *param_2;
  lVar13 = (longlong)iVar4;
  uVar5 = *(uint *)(*(longlong *)*param_1 + lVar13 * 4);
  puVar7 = (undefined8 *)param_1[2];
  lVar8 = *(longlong *)(*(longlong *)*puVar7 + 0x10);
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)*puVar7 + 0x130) + (ulonglong)(uVar5 >> 9) * 8);
  uVar11 = (longlong)(int)uVar5 & 0x1ff;
  uVar6 = *(uint *)(lVar9 + uVar11 * 0xc);
  lVar10 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
  uVar12 = (ulonglong)uVar6 & 0x1ff;
  local_88[2] = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  pdVar1 = (double *)(lVar10 + uVar12 * 0x18);
  local_88[0] = *pdVar1;
  local_88[1] = pdVar1[1];
  uVar6 = *(uint *)(lVar9 + 4 + uVar11 * 0xc);
  lVar10 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
  uVar12 = (ulonglong)uVar6 & 0x1ff;
  local_98 = *(undefined8 *)(lVar10 + 0x10 + uVar12 * 0x18);
  puVar2 = (undefined8 *)(lVar10 + uVar12 * 0x18);
  local_a8 = *puVar2;
  uStack_a0 = puVar2[1];
  uVar6 = *(uint *)(lVar9 + 8 + uVar11 * 0xc);
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
  uVar11 = (ulonglong)uVar6 & 0x1ff;
  local_b8 = *(undefined8 *)(lVar8 + 0x10 + uVar11 * 0x18);
  puVar3 = (undefined4 *)(lVar8 + uVar11 * 0x18);
  local_c8 = *puVar3;
  uStack_c4 = puVar3[1];
  uStack_c0 = puVar3[2];
  uStack_bc = puVar3[3];
  (**(code **)puVar7[1])(local_e0,((undefined8 *)puVar7[1])[1]);
  (**(code **)puVar7[1])(local_f8,((undefined8 *)puVar7[1])[1],&local_a8);
  (**(code **)puVar7[1])(local_110,((undefined8 *)puVar7[1])[1],local_88);
  FUN_146baf581(&local_128,local_110,local_f8,local_e0);
  lVar8 = *(longlong *)param_1[1];
  lVar9 = lVar13 * 0x18;
  *(undefined8 *)(lVar8 + 0x10 + lVar9) = local_118;
  puVar3 = (undefined4 *)(lVar8 + lVar9);
  *puVar3 = local_128;
  puVar3[1] = uStack_124;
  puVar3[2] = uStack_120;
  puVar3[3] = uStack_11c;
  FUN_146bf2028(param_1[3] + 0x18,local_88,lVar9 + *(longlong *)param_1[1]);
  pdVar1 = (double *)param_1[4];
  local_88[0] = *pdVar1 * local_88[0];
  local_88[1] = pdVar1[1] * local_88[1];
  local_88[2] = pdVar1[2] * local_88[2];
  uVar11 = -(ulonglong)(-local_88[2] <= local_88[2]);
  dVar14 = (double)(uVar11 & (ulonglong)local_88[2] | ~uVar11 & (ulonglong)-local_88[2]);
  uVar11 = -(ulonglong)(-local_88[1] <= local_88[1]);
  dVar16 = (double)(uVar11 & (ulonglong)local_88[1] | ~uVar11 & (ulonglong)-local_88[1]);
  uVar11 = -(ulonglong)(-local_88[0] <= local_88[0]);
  dVar15 = (double)(uVar11 & (ulonglong)local_88[0] | ~uVar11 & (ulonglong)-local_88[0]);
  uVar6 = (dVar16 <= dVar14) + 1;
  if (dVar16 < dVar15) {
    uVar6 = (uint)(dVar15 <= dVar14) * 2;
  }
  uVar12 = (ulonglong)uVar6;
  uVar11 = (ulonglong)(uVar6 + 3);
  if (local_88[uVar12] <= 0.0) {
    uVar11 = uVar12;
  }
  *(ulonglong *)(*(longlong *)param_1[5] + lVar13 * 8) = uVar11 << 0x20 | uVar12;
  *(int *)(*(longlong *)param_1[6] + (longlong)(int)uVar5 * 4) = iVar4;
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b0fe00 FUN_143b0fe00 body=29 status=ok
// SIG undefined FUN_143b0fe00(void)

undefined8 FUN_143b0fe00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143b0feae FUN_143b0feae body=1100 status=ok
// SIG undefined FUN_143b0feae(void)

void FUN_143b0feae(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_178 [40];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  double local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar21 = (longlong)*param_2;
  uVar3 = *(uint *)(*(longlong *)*param_1 + lVar21 * 4);
  puVar4 = (undefined8 *)param_1[1];
  lVar5 = *(longlong *)(*(longlong *)*puVar4 + 0x10);
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)*puVar4 + 0x130) + (ulonglong)(uVar3 >> 9) * 8);
  uVar19 = (ulonglong)uVar3 & 0x1ff;
  uVar3 = *(uint *)(lVar6 + uVar19 * 0xc);
  lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
  uVar20 = (ulonglong)uVar3 & 0x1ff;
  local_e8 = *(double *)(lVar7 + 0x10 + uVar20 * 0x18);
  puVar1 = (undefined8 *)(lVar7 + uVar20 * 0x18);
  local_f8 = (double)*puVar1;
  uStack_f0 = (double)puVar1[1];
  uVar3 = *(uint *)(lVar6 + 4 + uVar19 * 0xc);
  lVar7 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
  uVar20 = (ulonglong)uVar3 & 0x1ff;
  local_108 = *(double *)(lVar7 + 0x10 + uVar20 * 0x18);
  puVar1 = (undefined8 *)(lVar7 + uVar20 * 0x18);
  local_118 = (double)*puVar1;
  uStack_110 = (double)puVar1[1];
  uVar3 = *(uint *)(lVar6 + 8 + uVar19 * 0xc);
  lVar5 = *(longlong *)(lVar5 + (ulonglong)(uVar3 >> 9) * 8);
  uVar19 = (ulonglong)uVar3 & 0x1ff;
  local_128 = *(double *)(lVar5 + 0x10 + uVar19 * 0x18);
  puVar2 = (undefined4 *)(lVar5 + uVar19 * 0x18);
  local_138 = *puVar2;
  uStack_134 = puVar2[1];
  uStack_130 = puVar2[2];
  uStack_12c = puVar2[3];
  (**(code **)puVar4[1])(&local_150,((undefined8 *)puVar4[1])[1],&local_f8);
  local_e8 = local_140;
  local_f8 = (double)CONCAT44(uStack_14c,local_150);
  uStack_f0 = (double)CONCAT44(uStack_144,uStack_148);
  (**(code **)puVar4[1])(&local_150,((undefined8 *)puVar4[1])[1],&local_118);
  local_108 = local_140;
  local_118 = (double)CONCAT44(uStack_14c,local_150);
  uStack_110 = (double)CONCAT44(uStack_144,uStack_148);
  (**(code **)puVar4[1])(&local_150,((undefined8 *)puVar4[1])[1],&local_138);
  local_128 = local_140;
  local_138 = local_150;
  uStack_134 = uStack_14c;
  uStack_130 = uStack_148;
  uStack_12c = uStack_144;
  FUN_146baf581(&local_150,&local_f8,&local_118,&local_138);
  dVar18 = local_e8;
  dVar17 = uStack_f0;
  dVar16 = local_f8;
  dVar15 = local_108;
  dVar14 = uStack_110;
  dVar13 = local_118;
  dVar12 = local_128;
  dVar10 = (double)CONCAT44(uStack_134,local_138);
  dVar11 = (double)CONCAT44(uStack_12c,uStack_130);
  lVar5 = *(longlong *)param_1[2];
  lVar6 = lVar21 * 0x18;
  *(double *)(lVar5 + 0x10 + lVar6) = local_140;
  puVar2 = (undefined4 *)(lVar5 + lVar6);
  *puVar2 = local_150;
  puVar2[1] = uStack_14c;
  puVar2[2] = uStack_148;
  puVar2[3] = uStack_144;
  FUN_146bf2028(param_1[3] + 0x18,&local_118,lVar6 + *(longlong *)param_1[2]);
  pdVar8 = (double *)param_1[4];
  local_108 = local_108 * pdVar8[2];
  dVar22 = uStack_110 * pdVar8[1];
  local_118 = local_118 * *pdVar8;
  dVar9 = SQRT(local_108 * local_108 + local_118 * local_118 + dVar22 * dVar22);
  uStack_110 = 0.0;
  dVar23 = 1.0 / dVar9;
  local_118 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(local_118 * dVar23));
  if (0.0 < dVar9) {
    local_108 = local_108 * dVar23;
    uStack_110 = dVar22 * dVar23;
  }
  else {
    local_108 = 0.0;
  }
  uVar19 = -(ulonglong)(-local_108 <= local_108);
  dVar9 = (double)(~uVar19 & (ulonglong)-local_108 | uVar19 & (ulonglong)local_108);
  if (dVar9 < *(double *)param_1[5] || dVar9 == *(double *)param_1[5]) {
    pdVar8 = (double *)param_1[3];
    local_e8 = (dVar18 + dVar15 + dVar12) * 0.3333333333333333 - pdVar8[2];
    uStack_f0 = (dVar17 + dVar14 + dVar11) * 0.3333333333333333 - pdVar8[1];
    local_f8 = (dVar16 + dVar13 + dVar10) * 0.3333333333333333 - *pdVar8;
    FUN_146bf2028(pdVar8 + 3,&local_138);
    dVar9 = atan2((double)CONCAT44(uStack_12c,uStack_130),(double)CONCAT44(uStack_134,local_138));
    *(ulonglong *)(*(longlong *)param_1[6] + lVar21 * 8) =
         ((ulonglong)(0.0 <= dVar9) << 0x20) + 0x3ffffffff;
  }
  else {
    *(ulonglong *)(*(longlong *)param_1[6] + lVar21 * 8) = (ulonglong)(0.0 < local_108) << 0x20 | 2;
  }
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143b10332 FUN_143b10332 body=1018 status=ok
// SIG undefined FUN_143b10332(void)

void FUN_143b10332(undefined8 *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  int iStack_230;
  int iStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  int iStack_208;
  int iStack_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  longlong *local_1d8;
  longlong local_1c8 [4];
  code *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  int iStack_190;
  int iStack_18c;
  undefined **local_188;
  longlong local_180;
  uint uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  int iStack_168;
  int iStack_164;
  undefined8 local_160;
  undefined8 local_158;
  uint local_150;
  undefined4 local_14c;
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  longlong local_108 [2];
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  int iStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_268;
  uVar5 = *param_2;
  if ((-1 < (int)uVar5) &&
     (local_180 = *(longlong *)*param_1,
     (int)uVar5 < *(int *)(local_180 + 0x20) * 0x200 + *(int *)(local_180 + 0x24))) {
    uVar15 = (ulonglong)(uVar5 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(local_180 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                           uVar15 * 2) - 1U) < 0xfffe) {
      local_198 = 0;
      local_188 = &PTR_LAB_149f3aae0;
      _uStack_178 = CONCAT44(uStack_174,uVar5);
      local_1a8 = FUN_146be9588;
      local_248 = (code *)(local_180 + 0xb8);
      uStack_240 = uVar5;
      FUN_146be94ac(local_108,&local_248,&local_1a8);
      local_158 = 0xffffffffffffffff;
      local_148[0] = 0;
      local_138 = (longlong *)0x0;
      local_1a8 = local_c8;
      uStack_1a0 = uStack_c0;
      iStack_190 = iStack_b0;
      iStack_18c = iStack_ac;
      local_188 = (undefined **)local_a8;
      local_170 = local_90;
      uStack_16c = uStack_8c;
      iStack_168 = iStack_88;
      iStack_164 = iStack_84;
      local_160 = local_80;
      FUN_146be971a(local_148,local_108);
      local_14c = 0;
      FUN_146bfd1f0(&local_1a8);
      local_1f8 = 0xffffffffffffffff;
      local_1e8[0] = 0;
      local_1d8 = (longlong *)0x0;
      local_248 = (code *)CONCAT44(uStack_9c,local_a0);
      uStack_240 = iStack_98;
      uStack_23c = uStack_94;
      local_238 = local_90;
      uStack_234 = uStack_8c;
      iStack_230 = iStack_88;
      iStack_22c = iStack_84;
      local_228 = local_80;
      local_220 = local_a0;
      uStack_21c = uStack_9c;
      iStack_218 = iStack_98;
      uStack_214 = uStack_94;
      local_210 = local_90;
      uStack_20c = uStack_8c;
      iStack_208 = iStack_88;
      iStack_204 = iStack_84;
      local_200 = local_80;
      FUN_146be971a(local_1e8,local_108);
      local_1ec = 0;
      FUN_146bfd1f0(&local_248);
      dVar11 = 0.0;
      while ((((local_1a8 != local_248 || ((int)uStack_1a0 != uStack_240)) ||
              (iStack_190 != iStack_230)) || (iStack_18c != iStack_22c))) {
        lVar6 = *(longlong *)
                 (*(longlong *)(*(longlong *)*param_1 + 0x130) + (ulonglong)(local_150 >> 9) * 8);
        uVar17 = (ulonglong)(local_150 & 0x1ff);
        iVar16 = 0;
        if ((*(uint *)(lVar6 + uVar17 * 0xc) != uVar5) &&
           (iVar16 = 1, *(uint *)(lVar6 + uVar17 * 0xc + 4) != uVar5)) {
          iVar16 = (uint)(*(uint *)(lVar6 + 8 + uVar17 * 0xc) == uVar5) * 3 + -1;
        }
        dVar9 = (double)FUN_146c1500c(*(longlong *)*param_1,local_150,iVar16);
        dVar11 = dVar11 + dVar9;
        FUN_146bfd1f0(&local_1a8);
      }
      if (local_1e8[0] != 0) {
        plVar14 = local_1d8;
        if (local_1d8 == (longlong *)0x0) {
          plVar14 = local_1c8;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_148[0] != 0) {
        plVar14 = local_138;
        if (local_138 == (longlong *)0x0) {
          plVar14 = local_128;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      if (local_108[0] != 0) {
        if (local_f8 == (longlong *)0x0) {
          local_f8 = local_e8;
        }
        (**(code **)(*local_f8 + 0x10))();
      }
      lVar6 = *(longlong *)(param_1[1] + 8);
      lVar13 = (ulonglong)uVar5 * 0x18;
      lVar7 = *(longlong *)
               (*(longlong *)(*(longlong *)*param_1 + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
      pdVar8 = (double *)param_1[2];
      dVar9 = *(double *)(lVar7 + uVar15 * 0x18) - *pdVar8;
      dVar10 = *(double *)(lVar7 + 8 + uVar15 * 0x18) - pdVar8[1];
      dVar19 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18) - pdVar8[2];
      dVar18 = SQRT(dVar19 * dVar19 + dVar10 * dVar10 + dVar9 * dVar9);
      dVar12 = 1.0 / dVar18;
      if (1e-08 < dVar18) {
        dVar9 = dVar9 * dVar12;
        dVar10 = dVar10 * dVar12;
      }
      dVar1 = *(double *)(lVar6 + 8 + lVar13);
      dVar2 = *(double *)(lVar6 + lVar13);
      dVar3 = *(double *)(lVar6 + 0x10 + lVar13);
      dVar4 = *(double *)param_1[4];
      lVar6 = *(longlong *)param_1[3];
      *(double *)(lVar6 + lVar13) = dVar11 * 0.15915494309189535 * 0.01;
      *(double *)(lVar6 + 8 + lVar13) =
           ((double)(~-(ulonglong)(1e-08 < dVar18) & (ulonglong)dVar19 |
                    (ulonglong)(dVar19 * dVar12) & -(ulonglong)(1e-08 < dVar18)) * dVar3 +
           dVar9 * dVar2 + dVar10 * dVar1) * 0.001;
      *(double *)(lVar6 + 0x10 + lVar13) = dVar18 * dVar4;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


